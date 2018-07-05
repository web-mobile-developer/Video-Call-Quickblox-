//
//  QBViewController.h
//  MPC
//
//  Created by Software Engineer on 4/18/18.
//

#import <UIKit/UIKit.h>

@class QBRTCSession;

@interface QBViewController : UIViewController

@property (strong, nonatomic) QBRTCSession *session;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *answer;

@end