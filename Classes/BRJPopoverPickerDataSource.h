//
//  BRJPopoverPickerDataSource.h
//  
//
//  Created by Ben Johnson on 3/30/14.
//
//

#import <Foundation/Foundation.h>
@class BRJPopoverPicker;

@protocol BRJPopoverPickerDataSource <NSObject>
@required
- (NSString *)popoverPicker:(BRJPopoverPicker *)popoverPicker titleForRowAtIndex:(NSUInteger)index;
- (NSUInteger)numberOfRowsInPopoverPicker:(BRJPopoverPicker *)popoverPicker;

@end
