/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CATextLayer.h>

@interface CASmoothedTextLayer : CATextLayer
{
}

+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)_drawLine:(struct __CTLine *)arg1 inContext:(struct CGContext *)arg2 atPoint:(struct CGPoint)arg3;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
@property unsigned int fontSmoothingStyle;

@end

