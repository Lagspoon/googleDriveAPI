//
//  GDVC.h
//  googleDriveAPI
//
//  Created by Olivier Delecueillerie on 22/06/2014.
//  Copyright (c) 2014 lagspoon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>


#import "GTMOAuth2ViewControllerTouch.h"
#import "GTLDrive.h"



@interface GDVC : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>


@property (nonatomic, strong) GTLServiceDrive *driveService;



@end
