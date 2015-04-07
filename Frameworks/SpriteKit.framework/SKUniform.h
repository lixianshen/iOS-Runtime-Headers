/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSString, SKTexture;

@interface SKUniform : NSObject <NSCoding, NSCopying> {
    NSString *_name;
    unsigned int _seed;
    SKTexture *_textureValue;
    int _type;
    union { 
        float _floatValue; 
        union _GLKVector2 { 
            struct { 
                float x; 
                float y; 
            } ; 
            struct { 
                float s; 
                float t; 
            } ; 
            float v[2]; 
        } _floatVector2Value; 
        union _GLKVector3 { 
            struct { 
                float x; 
                float y; 
                float z; 
            } ; 
            struct { 
                float r; 
                float g; 
                float b; 
            } ; 
            struct { 
                float s; 
                float t; 
                float p; 
            } ; 
            float v[3]; 
        } _floatVector3Value; 
        union _GLKVector4 { 
            struct { 
                float x; 
                float y; 
                float z; 
                float w; 
            } ; 
            struct { 
                float r; 
                float g; 
                float b; 
                float a; 
            } ; 
            struct { 
                float s; 
                float t; 
                float p; 
                float q; 
            } ; 
            float v[4]; 
        } _floatVector4Value; 
        union _GLKMatrix2 { 
            struct { 
                float m00; 
                float m01; 
                float m10; 
                float m11; 
            } ; 
            float m2[2][2]; 
            float m[4]; 
        } _floatMatrix2Value; 
        union _GLKMatrix3 { 
            struct { 
                float m00; 
                float m01; 
                float m02; 
                float m10; 
                float m11; 
                float m12; 
                float m20; 
                float m21; 
                float m22; 
            } ; 
            float m[9]; 
        } _floatMatrix3Value; 
        union _GLKMatrix4 { 
            struct { 
                float m00; 
                float m01; 
                float m02; 
                float m03; 
                float m10; 
                float m11; 
                float m12; 
                float m13; 
                float m20; 
                float m21; 
                float m22; 
                float m23; 
                float m30; 
                float m31; 
                float m32; 
                float m33; 
            } ; 
            float m[16]; 
        } _floatMatrix4Value; 
    } _value;
}

@property unsigned int _seed;
@property union _GLKMatrix2 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; } floatMatrix2Value;
@property union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; } floatMatrix3Value;
@property union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; } floatMatrix4Value;
@property float floatValue;
@property union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } floatVector2Value;
@property union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } floatVector3Value;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } floatVector4Value;
@property(readonly) NSString * name;
@property(retain) SKTexture * textureValue;
@property(readonly) int uniformType;

+ (id)uniformWithName:(id)arg1;
+ (id)uniformWithName:(id)arg1 float:(float)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; })arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; })arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2;
+ (id)uniformWithName:(id)arg1 floatVector2:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg2;
+ (id)uniformWithName:(id)arg1 floatVector3:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg2;
+ (id)uniformWithName:(id)arg1 floatVector4:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg2;
+ (id)uniformWithName:(id)arg1 texture:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)_seed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (union _GLKMatrix2 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; })floatMatrix2Value;
- (union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; })floatMatrix3Value;
- (union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })floatMatrix4Value;
- (float)floatValue;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })floatVector2Value;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })floatVector3Value;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })floatVector4Value;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 float:(float)arg2;
- (id)initWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; })arg2;
- (id)initWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; })arg2;
- (id)initWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2;
- (id)initWithName:(id)arg1 floatVector2:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg2;
- (id)initWithName:(id)arg1 floatVector3:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg2;
- (id)initWithName:(id)arg1 floatVector4:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg2;
- (id)initWithName:(id)arg1 texture:(id)arg2;
- (id)name;
- (void)setFloatMatrix2Value:(union _GLKMatrix2 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; })arg1;
- (void)setFloatMatrix3Value:(union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; })arg1;
- (void)setFloatMatrix4Value:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg1;
- (void)setFloatValue:(float)arg1;
- (void)setFloatVector2Value:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (void)setFloatVector3Value:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (void)setFloatVector4Value:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setTextureValue:(id)arg1;
- (void)set_seed:(unsigned int)arg1;
- (id)textureValue;
- (int)uniformType;

@end