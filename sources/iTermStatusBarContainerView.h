//
//  iTermStatusBarContainerView.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 6/28/18.
//

#import <Cocoa/Cocoa.h>

#import "iTermStatusBarLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface iTermStatusBarContainerView : NSView

@property (nonatomic, readonly) id<iTermStatusBarComponent> component;
@property (nonatomic) CGFloat desiredWidth;
@property (nonatomic) CGFloat desiredOrigin;

- (nullable instancetype)initWithComponent:(id<iTermStatusBarComponent>)component NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithFrame:(NSRect)frame NS_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder *)decoder NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (void)variablesDidChange:(NSSet<NSString *> *)paths;

@end

NS_ASSUME_NONNULL_END
