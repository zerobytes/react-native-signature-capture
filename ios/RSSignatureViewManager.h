#import "RSSignatureView.h"
#import <React/RCTViewManager.h>

@interface RSSignatureViewManager : RCTViewManager
@property (nonatomic, strong, nullable) RSSignatureView *signView;
-(void) saveImage:(nonnull NSNumber *)reactTag;
-(void) resetImage:(nonnull NSNumber *)reactTag;
-(void) publishSaveImageEvent:(nullable NSString *) aTempPath withEncoded: (nullable NSString *) aEncoded;
-(void) publishDraggedEvent;
@end
