/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface GMMIndex : NSObject <GMMReadWriteStream>
{
    NSInteger _tileXIndex;
    NSInteger _tileYIndex;
}

@property NSInteger tileYIndex; /* unknown property attribute: V_tileYIndex */
@property NSInteger tileXIndex; /* unknown property attribute: V_tileXIndex */


- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */

- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (NSInteger)tileYIndex;
- (void)setTileYIndex:(NSInteger)arg1;
- (NSInteger)tileXIndex;
- (void)setTileXIndex:(NSInteger)arg1;

@end