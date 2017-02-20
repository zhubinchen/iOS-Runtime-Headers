/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSStateCaptureInvalidator : NSObject <BSInvalidatable> {
    unsigned long long  _handle;
    BOOL  _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)initWithHandle:(unsigned long long)arg1;
- (void)invalidate;

@end