/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, UIColor;

@interface PLCameraOverlayTextLabelView : UIView {
    NSString *_text;
    UIColor *_textColor;
    float _textSize;
    float _textStrokeWidth;
}

@property(retain) NSString * text;
@property(retain) UIColor * textColor;
@property float textStrokeWidth;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 text:(id)arg2 textSize:(float)arg3;
- (id)initWithText:(id)arg1 textSize:(float)arg2;
- (id)initWithText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextStrokeWidth:(float)arg1;
- (id)text;
- (id)textColor;
- (float)textStrokeWidth;

@end