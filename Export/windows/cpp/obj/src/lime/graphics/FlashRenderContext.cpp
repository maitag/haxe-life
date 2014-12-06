#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_FlashRenderContext
#include <lime/graphics/FlashRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void FlashRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.FlashRenderContext","new",0xd07498e5,"lime.graphics.FlashRenderContext.new","lime/graphics/FlashRenderContext.hx",62,0x50ca064b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FlashRenderContext_obj::~FlashRenderContext_obj() { }

Dynamic FlashRenderContext_obj::__CreateEmpty() { return  new FlashRenderContext_obj; }
hx::ObjectPtr< FlashRenderContext_obj > FlashRenderContext_obj::__new()
{  hx::ObjectPtr< FlashRenderContext_obj > result = new FlashRenderContext_obj();
	result->__construct();
	return result;}

Dynamic FlashRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlashRenderContext_obj > result = new FlashRenderContext_obj();
	result->__construct();
	return result;}

Dynamic FlashRenderContext_obj::addChild( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","addChild",0x08980516,"lime.graphics.FlashRenderContext.addChild","lime/graphics/FlashRenderContext.hx",69,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,addChild,return )

Dynamic FlashRenderContext_obj::addChildAt( Dynamic child,int index){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","addChildAt",0x62742fa9,"lime.graphics.FlashRenderContext.addChildAt","lime/graphics/FlashRenderContext.hx",70,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,addChildAt,return )

Void FlashRenderContext_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","addEventListener",0x1a729428,"lime.graphics.FlashRenderContext.addEventListener","lime/graphics/FlashRenderContext.hx",71,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlashRenderContext_obj,addEventListener,(void))

bool FlashRenderContext_obj::areInaccessibleObjectsUnderPoint( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","areInaccessibleObjectsUnderPoint",0xd7e55098,"lime.graphics.FlashRenderContext.areInaccessibleObjectsUnderPoint","lime/graphics/FlashRenderContext.hx",72,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(72)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,areInaccessibleObjectsUnderPoint,return )

bool FlashRenderContext_obj::contains( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","contains",0x75fc8f7a,"lime.graphics.FlashRenderContext.contains","lime/graphics/FlashRenderContext.hx",73,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(73)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,contains,return )

bool FlashRenderContext_obj::dispatchEvent( Dynamic event){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","dispatchEvent",0xb5dd47c5,"lime.graphics.FlashRenderContext.dispatchEvent","lime/graphics/FlashRenderContext.hx",74,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(74)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,dispatchEvent,return )

Dynamic FlashRenderContext_obj::getBounds( Dynamic targetCoordinateSpace){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getBounds",0xea0189f0,"lime.graphics.FlashRenderContext.getBounds","lime/graphics/FlashRenderContext.hx",75,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(75)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getBounds,return )

Dynamic FlashRenderContext_obj::getChildAt( int index){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getChildAt",0x4a4b89d4,"lime.graphics.FlashRenderContext.getChildAt","lime/graphics/FlashRenderContext.hx",76,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(76)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getChildAt,return )

Dynamic FlashRenderContext_obj::getChildByName( ::String name){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getChildByName",0x3d6be523,"lime.graphics.FlashRenderContext.getChildByName","lime/graphics/FlashRenderContext.hx",77,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(77)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getChildByName,return )

int FlashRenderContext_obj::getChildIndex( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getChildIndex",0xa87ae8d1,"lime.graphics.FlashRenderContext.getChildIndex","lime/graphics/FlashRenderContext.hx",78,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(78)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getChildIndex,return )

Dynamic FlashRenderContext_obj::getObjectsUnderPoint( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getObjectsUnderPoint",0x2d3e6271,"lime.graphics.FlashRenderContext.getObjectsUnderPoint","lime/graphics/FlashRenderContext.hx",79,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(79)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getObjectsUnderPoint,return )

Dynamic FlashRenderContext_obj::getRect( Dynamic targetCoordinateSpace){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getRect",0x3699ebdf,"lime.graphics.FlashRenderContext.getRect","lime/graphics/FlashRenderContext.hx",80,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(80)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getRect,return )

Dynamic FlashRenderContext_obj::globalToLocal( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","globalToLocal",0x5b26cf92,"lime.graphics.FlashRenderContext.globalToLocal","lime/graphics/FlashRenderContext.hx",81,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(81)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,globalToLocal,return )

Dynamic FlashRenderContext_obj::globalToLocal3D( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","globalToLocal3D",0x8e2784c3,"lime.graphics.FlashRenderContext.globalToLocal3D","lime/graphics/FlashRenderContext.hx",82,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(82)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,globalToLocal3D,return )

bool FlashRenderContext_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","hasEventListener",0x35f8b74f,"lime.graphics.FlashRenderContext.hasEventListener","lime/graphics/FlashRenderContext.hx",83,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(83)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,hasEventListener,return )

bool FlashRenderContext_obj::hitTestObject( Dynamic obj){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","hitTestObject",0xc6dcd5a9,"lime.graphics.FlashRenderContext.hitTestObject","lime/graphics/FlashRenderContext.hx",84,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(84)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,hitTestObject,return )

bool FlashRenderContext_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","hitTestPoint",0x245828a6,"lime.graphics.FlashRenderContext.hitTestPoint","lime/graphics/FlashRenderContext.hx",85,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(85)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlashRenderContext_obj,hitTestPoint,return )

Dynamic FlashRenderContext_obj::local3DToGlobal( Dynamic point3d){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","local3DToGlobal",0xa2e3343f,"lime.graphics.FlashRenderContext.local3DToGlobal","lime/graphics/FlashRenderContext.hx",86,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point3d,"point3d")
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,local3DToGlobal,return )

Dynamic FlashRenderContext_obj::localToGlobal( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","localToGlobal",0x3763c28e,"lime.graphics.FlashRenderContext.localToGlobal","lime/graphics/FlashRenderContext.hx",87,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(87)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,localToGlobal,return )

Dynamic FlashRenderContext_obj::removeChild( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeChild",0x6581dc3d,"lime.graphics.FlashRenderContext.removeChild","lime/graphics/FlashRenderContext.hx",88,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(88)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,removeChild,return )

Dynamic FlashRenderContext_obj::removeChildAt( int index){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeChildAt",0x2edf5e90,"lime.graphics.FlashRenderContext.removeChildAt","lime/graphics/FlashRenderContext.hx",89,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,removeChildAt,return )

Void FlashRenderContext_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeChildren",0xd4b8813e,"lime.graphics.FlashRenderContext.removeChildren","lime/graphics/FlashRenderContext.hx",90,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,removeChildren,(void))

Void FlashRenderContext_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeEventListener",0xea526a4f,"lime.graphics.FlashRenderContext.removeEventListener","lime/graphics/FlashRenderContext.hx",91,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlashRenderContext_obj,removeEventListener,(void))

bool FlashRenderContext_obj::requestSoftKeyboard( ){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","requestSoftKeyboard",0x6986d825,"lime.graphics.FlashRenderContext.requestSoftKeyboard","lime/graphics/FlashRenderContext.hx",92,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,requestSoftKeyboard,return )

Void FlashRenderContext_obj::setChildIndex( Dynamic child,int index){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","setChildIndex",0xed80cadd,"lime.graphics.FlashRenderContext.setChildIndex","lime/graphics/FlashRenderContext.hx",93,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,setChildIndex,(void))

Void FlashRenderContext_obj::startDrag( hx::Null< bool >  __o_lockCenter,Dynamic bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","startDrag",0x02f11fbb,"lime.graphics.FlashRenderContext.startDrag","lime/graphics/FlashRenderContext.hx",94,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,startDrag,(void))

Void FlashRenderContext_obj::startTouchDrag( int touchPointID,hx::Null< bool >  __o_lockCenter,Dynamic bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","startTouchDrag",0xc10fb62c,"lime.graphics.FlashRenderContext.startTouchDrag","lime/graphics/FlashRenderContext.hx",95,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(touchPointID,"touchPointID")
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlashRenderContext_obj,startTouchDrag,(void))

Void FlashRenderContext_obj::stopAllMovieClips( ){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","stopAllMovieClips",0x64a12837,"lime.graphics.FlashRenderContext.stopAllMovieClips","lime/graphics/FlashRenderContext.hx",96,0x50ca064b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,stopAllMovieClips,(void))

Void FlashRenderContext_obj::stopDrag( ){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","stopDrag",0xdeaba671,"lime.graphics.FlashRenderContext.stopDrag","lime/graphics/FlashRenderContext.hx",97,0x50ca064b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,stopDrag,(void))

Void FlashRenderContext_obj::stopTouchDrag( int touchPointID){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","stopTouchDrag",0xba631bb6,"lime.graphics.FlashRenderContext.stopTouchDrag","lime/graphics/FlashRenderContext.hx",98,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touchPointID,"touchPointID")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,stopTouchDrag,(void))

Void FlashRenderContext_obj::swapChildren( Dynamic child1,Dynamic child2){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","swapChildren",0x2089c9cd,"lime.graphics.FlashRenderContext.swapChildren","lime/graphics/FlashRenderContext.hx",99,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,swapChildren,(void))

Void FlashRenderContext_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","swapChildrenAt",0xade9d020,"lime.graphics.FlashRenderContext.swapChildrenAt","lime/graphics/FlashRenderContext.hx",100,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,swapChildrenAt,(void))

::String FlashRenderContext_obj::toString( ){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","toString",0x81f00607,"lime.graphics.FlashRenderContext.toString","lime/graphics/FlashRenderContext.hx",101,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,toString,return )

bool FlashRenderContext_obj::willTrigger( ::String type){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","willTrigger",0xf9d449cb,"lime.graphics.FlashRenderContext.willTrigger","lime/graphics/FlashRenderContext.hx",102,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(102)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,willTrigger,return )


FlashRenderContext_obj::FlashRenderContext_obj()
{
}

void FlashRenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlashRenderContext);
	HX_MARK_MEMBER_NAME(accessibilityImplementation,"accessibilityImplementation");
	HX_MARK_MEMBER_NAME(accessibilityProperties,"accessibilityProperties");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(blendShader,"blendShader");
	HX_MARK_MEMBER_NAME(buttonMode,"buttonMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(contextMenu,"contextMenu");
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_MARK_MEMBER_NAME(dropTarget,"dropTarget");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(focusRect,"focusRect");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(rotationX,"rotationX");
	HX_MARK_MEMBER_NAME(rotationY,"rotationY");
	HX_MARK_MEMBER_NAME(rotationZ,"rotationZ");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleZ,"scaleZ");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_MARK_MEMBER_NAME(soundTransform,"soundTransform");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(tabEnabled,"tabEnabled");
	HX_MARK_MEMBER_NAME(tabIndex,"tabIndex");
	HX_MARK_MEMBER_NAME(textSnapshot,"textSnapshot");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_END_CLASS();
}

void FlashRenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accessibilityImplementation,"accessibilityImplementation");
	HX_VISIT_MEMBER_NAME(accessibilityProperties,"accessibilityProperties");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(blendShader,"blendShader");
	HX_VISIT_MEMBER_NAME(buttonMode,"buttonMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(contextMenu,"contextMenu");
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_VISIT_MEMBER_NAME(dropTarget,"dropTarget");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(focusRect,"focusRect");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(rotationX,"rotationX");
	HX_VISIT_MEMBER_NAME(rotationY,"rotationY");
	HX_VISIT_MEMBER_NAME(rotationZ,"rotationZ");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleZ,"scaleZ");
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_VISIT_MEMBER_NAME(soundTransform,"soundTransform");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(tabEnabled,"tabEnabled");
	HX_VISIT_MEMBER_NAME(tabIndex,"tabIndex");
	HX_VISIT_MEMBER_NAME(textSnapshot,"textSnapshot");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
}

Dynamic FlashRenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { return scaleZ; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return filters; }
		if (HX_FIELD_EQ(inName,"hitArea") ) { return hitArea; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"tabIndex") ) { return tabIndex; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"focusRect") ) { return focusRect; }
		if (HX_FIELD_EQ(inName,"rotationX") ) { return rotationX; }
		if (HX_FIELD_EQ(inName,"rotationY") ) { return rotationY; }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { return rotationZ; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { return dropTarget; }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { return tabEnabled; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blendShader") ) { return blendShader; }
		if (HX_FIELD_EQ(inName,"contextMenu") ) { return contextMenu; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return mouseEnabled; }
		if (HX_FIELD_EQ(inName,"textSnapshot") ) { return textSnapshot; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"stopTouchDrag") ) { return stopTouchDrag_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return soundTransform; }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"startTouchDrag") ) { return startTouchDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalToLocal3D") ) { return globalToLocal3D_dyn(); }
		if (HX_FIELD_EQ(inName,"local3DToGlobal") ) { return local3DToGlobal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return needsSoftKeyboard; }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return stopAllMovieClips_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accessibilityProperties") ) { return accessibilityProperties; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"accessibilityImplementation") ) { return accessibilityImplementation; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { return softKeyboardInputAreaOfInterest; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlashRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { scaleZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabIndex") ) { tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusRect") ) { focusRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationX") ) { rotationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationY") ) { rotationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { rotationZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { dropTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { tabEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blendShader") ) { blendShader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contextMenu") ) { contextMenu=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textSnapshot") ) { textSnapshot=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { soundTransform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { needsSoftKeyboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accessibilityProperties") ) { accessibilityProperties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"accessibilityImplementation") ) { accessibilityImplementation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { softKeyboardInputAreaOfInterest=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlashRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("accessibilityImplementation"));
	outFields->push(HX_CSTRING("accessibilityProperties"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("blendShader"));
	outFields->push(HX_CSTRING("buttonMode"));
	outFields->push(HX_CSTRING("cacheAsBitmap"));
	outFields->push(HX_CSTRING("contextMenu"));
	outFields->push(HX_CSTRING("doubleClickEnabled"));
	outFields->push(HX_CSTRING("dropTarget"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("focusRect"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("hitArea"));
	outFields->push(HX_CSTRING("loaderInfo"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("mouseChildren"));
	outFields->push(HX_CSTRING("mouseEnabled"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("needsSoftKeyboard"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("opaqueBackground"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("rotationX"));
	outFields->push(HX_CSTRING("rotationY"));
	outFields->push(HX_CSTRING("rotationZ"));
	outFields->push(HX_CSTRING("scale9Grid"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleZ"));
	outFields->push(HX_CSTRING("scrollRect"));
	outFields->push(HX_CSTRING("softKeyboardInputAreaOfInterest"));
	outFields->push(HX_CSTRING("soundTransform"));
	outFields->push(HX_CSTRING("stage"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("tabEnabled"));
	outFields->push(HX_CSTRING("tabIndex"));
	outFields->push(HX_CSTRING("textSnapshot"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("useHandCursor"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,accessibilityImplementation),HX_CSTRING("accessibilityImplementation")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,accessibilityProperties),HX_CSTRING("accessibilityProperties")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,blendShader),HX_CSTRING("blendShader")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,buttonMode),HX_CSTRING("buttonMode")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,cacheAsBitmap),HX_CSTRING("cacheAsBitmap")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,contextMenu),HX_CSTRING("contextMenu")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,doubleClickEnabled),HX_CSTRING("doubleClickEnabled")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,dropTarget),HX_CSTRING("dropTarget")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,filters),HX_CSTRING("filters")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,focusRect),HX_CSTRING("focusRect")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,hitArea),HX_CSTRING("hitArea")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,loaderInfo),HX_CSTRING("loaderInfo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,mask),HX_CSTRING("mask")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,mouseChildren),HX_CSTRING("mouseChildren")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,mouseEnabled),HX_CSTRING("mouseEnabled")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,mouseX),HX_CSTRING("mouseX")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,mouseY),HX_CSTRING("mouseY")},
	{hx::fsString,(int)offsetof(FlashRenderContext_obj,name),HX_CSTRING("name")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,needsSoftKeyboard),HX_CSTRING("needsSoftKeyboard")},
	{hx::fsInt,(int)offsetof(FlashRenderContext_obj,numChildren),HX_CSTRING("numChildren")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,opaqueBackground),HX_CSTRING("opaqueBackground")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,root),HX_CSTRING("root")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotationX),HX_CSTRING("rotationX")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotationY),HX_CSTRING("rotationY")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotationZ),HX_CSTRING("rotationZ")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,scale9Grid),HX_CSTRING("scale9Grid")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,scaleZ),HX_CSTRING("scaleZ")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,scrollRect),HX_CSTRING("scrollRect")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,softKeyboardInputAreaOfInterest),HX_CSTRING("softKeyboardInputAreaOfInterest")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,soundTransform),HX_CSTRING("soundTransform")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,stage),HX_CSTRING("stage")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,tabChildren),HX_CSTRING("tabChildren")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,tabEnabled),HX_CSTRING("tabEnabled")},
	{hx::fsInt,(int)offsetof(FlashRenderContext_obj,tabIndex),HX_CSTRING("tabIndex")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,textSnapshot),HX_CSTRING("textSnapshot")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,transform),HX_CSTRING("transform")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,useHandCursor),HX_CSTRING("useHandCursor")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,visible),HX_CSTRING("visible")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,z),HX_CSTRING("z")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("accessibilityImplementation"),
	HX_CSTRING("accessibilityProperties"),
	HX_CSTRING("alpha"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("blendShader"),
	HX_CSTRING("buttonMode"),
	HX_CSTRING("cacheAsBitmap"),
	HX_CSTRING("contextMenu"),
	HX_CSTRING("doubleClickEnabled"),
	HX_CSTRING("dropTarget"),
	HX_CSTRING("filters"),
	HX_CSTRING("focusRect"),
	HX_CSTRING("graphics"),
	HX_CSTRING("height"),
	HX_CSTRING("hitArea"),
	HX_CSTRING("loaderInfo"),
	HX_CSTRING("mask"),
	HX_CSTRING("mouseChildren"),
	HX_CSTRING("mouseEnabled"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("name"),
	HX_CSTRING("needsSoftKeyboard"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("opaqueBackground"),
	HX_CSTRING("parent"),
	HX_CSTRING("root"),
	HX_CSTRING("rotation"),
	HX_CSTRING("rotationX"),
	HX_CSTRING("rotationY"),
	HX_CSTRING("rotationZ"),
	HX_CSTRING("scale9Grid"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleZ"),
	HX_CSTRING("scrollRect"),
	HX_CSTRING("softKeyboardInputAreaOfInterest"),
	HX_CSTRING("soundTransform"),
	HX_CSTRING("stage"),
	HX_CSTRING("tabChildren"),
	HX_CSTRING("tabEnabled"),
	HX_CSTRING("tabIndex"),
	HX_CSTRING("textSnapshot"),
	HX_CSTRING("transform"),
	HX_CSTRING("useHandCursor"),
	HX_CSTRING("visible"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("getRect"),
	HX_CSTRING("globalToLocal"),
	HX_CSTRING("globalToLocal3D"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("hitTestObject"),
	HX_CSTRING("hitTestPoint"),
	HX_CSTRING("local3DToGlobal"),
	HX_CSTRING("localToGlobal"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChildren"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("requestSoftKeyboard"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("startDrag"),
	HX_CSTRING("startTouchDrag"),
	HX_CSTRING("stopAllMovieClips"),
	HX_CSTRING("stopDrag"),
	HX_CSTRING("stopTouchDrag"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("toString"),
	HX_CSTRING("willTrigger"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashRenderContext_obj::__mClass,"__mClass");
};

#endif

Class FlashRenderContext_obj::__mClass;

void FlashRenderContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.FlashRenderContext"), hx::TCanCast< FlashRenderContext_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlashRenderContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
