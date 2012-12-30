#import <Foundation/Foundation.h>
#import "TaggedObject.h"

@interface CheckfileEntry : TaggedObject
+ (CheckfileEntry *)fromLine:(NSString *)line;

- (BOOL)isCommandEntry;
- (BOOL)isSeparatorEntry;
- (BOOL)isTitledSeparatorEntry;
@end

@interface CheckfileCommandEntry : CheckfileEntry
+ (CheckfileCommandEntry *)fromLine:(NSString *)line;

- (id)initWithName:(NSString *)name command:(NSString *)command;
- (NSString *)name;
- (NSString *)command;
@end

@interface CheckfileSeparatorEntry : CheckfileEntry
+ (CheckfileSeparatorEntry *)fromLine:(NSString *)line;
@end

@interface CheckfileTitledSeparatorEntry : CheckfileEntry
+ (CheckfileTitledSeparatorEntry *)fromLine:(NSString *)line;

- (id)initWithTitle:(NSString *)title;
- (NSString *)title;
@end
