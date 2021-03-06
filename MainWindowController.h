/*
 iHaxGamez - External process memory search-and-replace tool for MAC OS X
 Copyright (C) <2007>  <Raymond Wilfong and Glenn Hartmann>
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 
 You may contact Raymond Wilfong by email at rwilfong@rewnet.com
 */

#import <Cocoa/Cocoa.h>

@interface MainWindowController : NSObject
{
    IBOutlet NSPopUpButton *popupProcessList;
    IBOutlet NSTextField *textSearchCounter;
    NSMutableArray *searchWindowArray;
    ProcessSerialNumber CurrentAppPSN;
}
- (id)init;
- (void)dealloc;

- (void)windowDidBecomeKey:(NSNotification *)aNotification;

- (NSMutableArray *)searchWindowArray;
- (void)setSearchWindowArray:(NSMutableArray *)newSearchWindowArray;

- (void)awakeFromNib;
- (void)resetProcessList;
- (IBAction)btnRefreshAction:(id)sender;
- (IBAction)btnSearchAction:(id)sender;
- (IBAction)popupProcessListAction:(id)sender;

- (void)updateSearchWindowCount;

// used to clean searchWindowArray when a search window closes
- (void)SearchWindowClosed:(NSNotification *)notification;

@end
