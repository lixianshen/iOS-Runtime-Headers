/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TPCanvasSelection, TSKSelection;

@interface TPArchivedCanvasSelection : TSPObject <TSKArchivedSelection> {
    TPCanvasSelection *_selection;
}

@property(retain) TSKSelection * selection;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end