//
//  ViewController.swift
//  CodeReview
//
//  Created by Andoni Dan on 02/06/16.
//  Copyright © 2016 GSMA. All rights reserved.
//

import UIKit
import MobileConnectSDK

class ViewController: UIViewController, MobileConnectSDKDelegate {

    @IBOutlet weak var responseLabel: UILabel!
    @IBOutlet weak var phoneTextField: UITextField!
    @IBOutlet weak var segmentedControl: UISegmentedControl!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        
        //the idea of the framework is to have 2 services: Discovery and MobileConnect
        //Discovery gets the operator info and MobileConnect uses that to obtain an auth token
        
        //The requirements of the project do not specify an end to end service like with what I tried to do by providing the MobileConnectSDK class
        //So the really required things are the DSDiscoveryService and MCMobileConnectService classes
        
        
        //the rest of the setup is made in the app delegate
        MobileConnectSDK.setDelegate(self)
        
        //Alternatively the developer can just use the MCButton in the storyboard and avoid even setting the delegate
    }
    
    
    //MARK: Mobile connect delegate methods
    func mobileConnectWillStart() {
        
    }
    
    func mobileConnectWillDismissWebController() {
        
    }
    
    func mobileConnectWillPresentWebController() {
        
    }
    
    func mobileConnectFailedGettingTokenWithError(error: NSError) {
        responseLabel.text = error.localizedDescription
    }
    
    func mobileConnectDidGetTokenResponse(tokenResponse: TokenResponseModel) {
        responseLabel.text = tokenResponse.tokenData?.access_token
    }
    
    //MARK: Events
    @IBAction func buttonPressed(sender: AnyObject) {
        
        if segmentedControl.selectedSegmentIndex == 0
        {
            getToken()
        }
        else
        {
            view.endEditing(true)
            getTokenWithPhone()
        }
    }
    
    @IBAction func valueChanged(sender: AnyObject) {
        
        phoneTextField.hidden = segmentedControl.selectedSegmentIndex == 0
    }
    
    //MARK: Mobile Connect SDK actions
    func getToken()
    {
        //I wanted to avoid passing the controller and instead give the developer a custom controller which he can present and dismiss in some delegate methods, but the flow in the framework sometimes requires presenting a webview sometimes not, depending on the info available to the developer
        
        //If using the MCButton in storyboards instead, one will have to worry only about the delegate methods
        MobileConnectSDK.getTokenInController(self, withCompletitionHandler: completeViewWithTokenResponseModel)
    }
    
    func getTokenWithPhone()
    {
        let discoveryService : DSDiscoveryService = DSDiscoveryService(applicationEndpoint: kSandboxEndpoint)
        
        if let phoneNumber = phoneTextField.text where phoneNumber.characters.count > 0
        {
            discoveryService.startOperatorDiscoveryForPhoneNumber(phoneNumber, withCompletitionHandler:
                { (discoveryDataResponse : DiscoveryResponse?, error : NSError?) in
                    
                    if let error = error
                    {
                        self.responseLabel.text = error.localizedDescription
                    }
                    else if let discoveryDataResponse = discoveryDataResponse
                    {
                        
                        let mobileConnectService : MCMobileConnectService = MCMobileConnectService(clientId: discoveryDataResponse.response?.client_id ?? "", authorizationURL: discoveryDataResponse.response?.apis?.operatorid?.authorizationLink() ?? "", tokenURL: discoveryDataResponse.response?.apis?.operatorid?.tokenLink() ?? "")
                        
                        mobileConnectService.getTokenWithSubscriberId(discoveryDataResponse.response?.subscriber_id ?? "", completitionHandler: self.completeViewWithTokenModel)
                    }
            })
        }
        else
        {
            responseLabel.text = "no phone provided"
        }
        
    }
    
    //MARK: View configuration
    func completeViewWithTokenModel(model : TokenModel?, error : NSError?)
    {
        completeViewWithToken(model?.access_token, errorMessage: error?.localizedDescription)
    }
    
    func completeViewWithTokenResponseModel(model : TokenResponseModel?, error : NSError?)
    {
        completeViewWithToken(model?.tokenData?.access_token, errorMessage: error?.localizedDescription)
    }
    
    func completeViewWithToken(token : String?, errorMessage : String?)
    {
        responseLabel.text = errorMessage ?? token
    }

}

