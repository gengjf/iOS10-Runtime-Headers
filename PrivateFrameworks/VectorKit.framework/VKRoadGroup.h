/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKVectorTile, VKLineDrawStyle, VKIntObjectMap, VKStyle, VKLabelDrawStyle, VKRoadDrawStyle, NSString;

@interface VKRoadGroup : NSObject  {
    VKVectorTile *_tile;
    VKStyle *_style;
    VKRoadDrawStyle *_roadStyle;
    VKLineDrawStyle *_linetyle;
    VKLabelDrawStyle *_labelStyle;
    int _meshType;
    VKIntObjectMap *_roadMeshVendors;
    VKIntObjectMap *_capMeshVendors;
    int _highestZ;
    int _lowestZ;
    BOOL _frozen;
    BOOL _isPatternedRailway;
    VKLineDrawStyle *_lineStyle;
}

@property(readonly) VKVectorTile * tile;
@property(readonly) VKRoadDrawStyle * roadStyle;
@property(readonly) VKLineDrawStyle * lineStyle;
@property(readonly) VKLabelDrawStyle * labelStyle;
@property(readonly) NSString * styleName;
@property(readonly) int highestZ;
@property(readonly) int lowestZ;
@property BOOL isPatternedRailway;


- (void)setIsPatternedRailway:(BOOL)arg1;
- (BOOL)isPatternedRailway;
- (int)lowestZ;
- (int)highestZ;
- (id)tile;
- (unsigned int)triangleCount;
- (id)capMeshVendorAtZ:(int)arg1;
- (id)roadMeshVendorAtZ:(int)arg1;
- (id)styleName;
- (id)initWithStyle:(id)arg1 tile:(id)arg2 createMesh:(BOOL)arg3 ofType:(int)arg4;
- (void)freezeStructure;
- (id)labelStyle;
- (id)lineStyle;
- (id)roadStyle;
- (void)freeze;
- (void)dealloc;

@end