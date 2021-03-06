/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBLeafIconDataSource <NSObject>
-(BOOL)icon:(id)icon launchFromLocation:(int)location context:(id)context;
-(BOOL)iconAllowsLaunch:(id)launch;
-(BOOL)iconCompleteUninstall:(id)uninstall;
-(BOOL)iconAllowsUninstall:(id)uninstall;
-(BOOL)iconIsBeta:(id)beta;
-(BOOL)iconIsRecentlyUpdated:(id)updated;
-(int)iconAccessoryType:(id)type;
-(id)iconFormattedAccessoryString:(id)string;
-(id)iconBadgeNumberOrString:(id)string;
-(BOOL)iconProgressIsPaused:(id)paused;
-(float)iconProgressPercent:(id)percent;
-(int)iconProgressState:(id)state;
-(BOOL)iconAppearsInNewsstand:(id)newsstand;
-(BOOL)iconCanTightenLabel:(id)label;
-(BOOL)iconCanEllipsizeLabel:(id)label;
-(id)iconDisplayName:(id)name;
-(id)icon:(id)icon defaultImageWithFormat:(int)format;
-(id)icon:(id)icon imageWithFormat:(int)format;
-(unsigned)iconPriority:(id)priority;
@end

