#import <UIKit/UIKit.h>


@interface FGUserDefaultsInspectorViewController : UITableViewController

/**
 * @param suiteName the suite name of the user defaults object to inspect
 * use of the default initializer for this VC will use standardUserDefaults
 */
- (instancetype _Nonnull)initWithSuiteName:(NSString *_Nullable)suiteName;

/**
 * create an VC for inspecting standardUserDefaults (called when [[FGUserDefaultsInspectorViewController alloc] init] is used)
 */
- (instancetype _Nonnull )initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil;

- (instancetype _Nonnull)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil suiteName:(NSString * _Nullable)suiteName NS_DESIGNATED_INITIALIZER;

@end
