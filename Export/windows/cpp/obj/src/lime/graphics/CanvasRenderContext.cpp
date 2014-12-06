#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void CanvasRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.CanvasRenderContext","new",0xa1374169,"lime.graphics.CanvasRenderContext.new","lime/graphics/CanvasRenderContext.hx",32,0x7702fe07)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CanvasRenderContext_obj::~CanvasRenderContext_obj() { }

Dynamic CanvasRenderContext_obj::__CreateEmpty() { return  new CanvasRenderContext_obj; }
hx::ObjectPtr< CanvasRenderContext_obj > CanvasRenderContext_obj::__new()
{  hx::ObjectPtr< CanvasRenderContext_obj > result = new CanvasRenderContext_obj();
	result->__construct();
	return result;}

Dynamic CanvasRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasRenderContext_obj > result = new CanvasRenderContext_obj();
	result->__construct();
	return result;}

Void CanvasRenderContext_obj::arc( Float x,Float y,Float radius,Float startAngle,Float endAngle,bool anticlockwise){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","arc",0xa12d6f5b,"lime.graphics.CanvasRenderContext.arc","lime/graphics/CanvasRenderContext.hx",39,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(startAngle,"startAngle")
		HX_STACK_ARG(endAngle,"endAngle")
		HX_STACK_ARG(anticlockwise,"anticlockwise")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,arc,(void))

Void CanvasRenderContext_obj::arcTo( Float x1,Float y1,Float x2,Float y2,Float radius){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","arcTo",0x5aec85b6,"lime.graphics.CanvasRenderContext.arcTo","lime/graphics/CanvasRenderContext.hx",40,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(radius,"radius")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,arcTo,(void))

Void CanvasRenderContext_obj::beginPath( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","beginPath",0xeffb2237,"lime.graphics.CanvasRenderContext.beginPath","lime/graphics/CanvasRenderContext.hx",41,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,beginPath,(void))

Void CanvasRenderContext_obj::bezierCurveTo( Float cp1x,Float cp1y,Float cp2x,Float cp2y,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","bezierCurveTo",0xaa1bcff4,"lime.graphics.CanvasRenderContext.bezierCurveTo","lime/graphics/CanvasRenderContext.hx",42,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cp1x,"cp1x")
		HX_STACK_ARG(cp1y,"cp1y")
		HX_STACK_ARG(cp2x,"cp2x")
		HX_STACK_ARG(cp2y,"cp2y")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,bezierCurveTo,(void))

Void CanvasRenderContext_obj::clearRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","clearRect",0x1c37931a,"lime.graphics.CanvasRenderContext.clearRect","lime/graphics/CanvasRenderContext.hx",43,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,clearRect,(void))

Void CanvasRenderContext_obj::clearShadow( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","clearShadow",0x66c6f756,"lime.graphics.CanvasRenderContext.clearShadow","lime/graphics/CanvasRenderContext.hx",44,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,clearShadow,(void))

Void CanvasRenderContext_obj::clip( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","clip",0x67e1e5a7,"lime.graphics.CanvasRenderContext.clip","lime/graphics/CanvasRenderContext.hx",45,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,clip,(void))

Void CanvasRenderContext_obj::closePath( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","closePath",0x70efc346,"lime.graphics.CanvasRenderContext.closePath","lime/graphics/CanvasRenderContext.hx",46,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,closePath,(void))

Dynamic CanvasRenderContext_obj::createDynamicImageData( Float sw,Float sh){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createDynamicImageData",0x9c04b759,"lime.graphics.CanvasRenderContext.createDynamicImageData","lime/graphics/CanvasRenderContext.hx",48,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sw,"sw")
	HX_STACK_ARG(sh,"sh")
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,createDynamicImageData,return )

Dynamic CanvasRenderContext_obj::createLinearGradient( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createLinearGradient",0x026ac5e8,"lime.graphics.CanvasRenderContext.createLinearGradient","lime/graphics/CanvasRenderContext.hx",49,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(49)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,createLinearGradient,return )

Dynamic CanvasRenderContext_obj::createPattern( Dynamic image,::String repetitionType){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createPattern",0x698654fd,"lime.graphics.CanvasRenderContext.createPattern","lime/graphics/CanvasRenderContext.hx",51,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(repetitionType,"repetitionType")
	HX_STACK_LINE(51)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,createPattern,return )

Dynamic CanvasRenderContext_obj::createRadialGradient( Float x0,Float y0,Float r0,Float x1,Float y1,Float r1){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createRadialGradient",0xe4cdbce2,"lime.graphics.CanvasRenderContext.createRadialGradient","lime/graphics/CanvasRenderContext.hx",52,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_LINE(52)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,createRadialGradient,return )

Void CanvasRenderContext_obj::drawImage( Dynamic element,Float sx,Float sy,Dynamic sw,Dynamic sh,Dynamic dx,Dynamic dy,Dynamic dw,Dynamic dh){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","drawImage",0xe243b280,"lime.graphics.CanvasRenderContext.drawImage","lime/graphics/CanvasRenderContext.hx",61,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(element,"element")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(CanvasRenderContext_obj,drawImage,(void))

Void CanvasRenderContext_obj::drawImageFromRect( Dynamic image,Dynamic sx,Dynamic sy,Dynamic sw,Dynamic sh,Dynamic dx,Dynamic dy,Dynamic dw,Dynamic dh,::String compositeOperation){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","drawImageFromRect",0x341f0a4e,"lime.graphics.CanvasRenderContext.drawImageFromRect","lime/graphics/CanvasRenderContext.hx",62,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
		HX_STACK_ARG(compositeOperation,"compositeOperation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(CanvasRenderContext_obj,drawImageFromRect,(void))

Void CanvasRenderContext_obj::fill( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","fill",0x69db455a,"lime.graphics.CanvasRenderContext.fill","lime/graphics/CanvasRenderContext.hx",63,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,fill,(void))

Void CanvasRenderContext_obj::fillRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","fillRect",0xa1f2739e,"lime.graphics.CanvasRenderContext.fillRect","lime/graphics/CanvasRenderContext.hx",64,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,fillRect,(void))

Void CanvasRenderContext_obj::fillText( ::String text,Float x,Float y,Dynamic maxWidth){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","fillText",0xa344f327,"lime.graphics.CanvasRenderContext.fillText","lime/graphics/CanvasRenderContext.hx",65,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(maxWidth,"maxWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,fillText,(void))

Dynamic CanvasRenderContext_obj::getDynamicImageData( Float sx,Float sy,Float sw,Float sh){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","getDynamicImageData",0x1668ff65,"lime.graphics.CanvasRenderContext.getDynamicImageData","lime/graphics/CanvasRenderContext.hx",66,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sx,"sx")
	HX_STACK_ARG(sy,"sy")
	HX_STACK_ARG(sw,"sw")
	HX_STACK_ARG(sh,"sh")
	HX_STACK_LINE(66)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,getDynamicImageData,return )

Dynamic CanvasRenderContext_obj::getDynamicImageDataHD( Float sx,Float sy,Float sw,Float sh){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","getDynamicImageDataHD",0x4233a1a1,"lime.graphics.CanvasRenderContext.getDynamicImageDataHD","lime/graphics/CanvasRenderContext.hx",67,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sx,"sx")
	HX_STACK_ARG(sy,"sy")
	HX_STACK_ARG(sw,"sw")
	HX_STACK_ARG(sh,"sh")
	HX_STACK_LINE(67)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,getDynamicImageDataHD,return )

Array< Float > CanvasRenderContext_obj::getLineDash( ){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","getLineDash",0x5b398825,"lime.graphics.CanvasRenderContext.getLineDash","lime/graphics/CanvasRenderContext.hx",68,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,getLineDash,return )

bool CanvasRenderContext_obj::isPointInPath( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","isPointInPath",0xe640cf19,"lime.graphics.CanvasRenderContext.isPointInPath","lime/graphics/CanvasRenderContext.hx",69,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(69)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,isPointInPath,return )

Void CanvasRenderContext_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","lineTo",0x72ac6126,"lime.graphics.CanvasRenderContext.lineTo","lime/graphics/CanvasRenderContext.hx",70,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,lineTo,(void))

Dynamic CanvasRenderContext_obj::measureText( ::String text){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","measureText",0x063a1d34,"lime.graphics.CanvasRenderContext.measureText","lime/graphics/CanvasRenderContext.hx",71,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(71)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,measureText,return )

Void CanvasRenderContext_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","moveTo",0x52b8ed83,"lime.graphics.CanvasRenderContext.moveTo","lime/graphics/CanvasRenderContext.hx",72,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,moveTo,(void))

Void CanvasRenderContext_obj::putDynamicImageData( Dynamic dynamicImageData,Float dx,Float dy,Float dirtyX,Float dirtyY,Float dirtyWidth,Float dirtyHeight){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","putDynamicImageData",0x6a1da39e,"lime.graphics.CanvasRenderContext.putDynamicImageData","lime/graphics/CanvasRenderContext.hx",74,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dynamicImageData,"dynamicImageData")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dirtyX,"dirtyX")
		HX_STACK_ARG(dirtyY,"dirtyY")
		HX_STACK_ARG(dirtyWidth,"dirtyWidth")
		HX_STACK_ARG(dirtyHeight,"dirtyHeight")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CanvasRenderContext_obj,putDynamicImageData,(void))

Void CanvasRenderContext_obj::putDynamicImageDataHD( Dynamic dynamicImageData,Float dx,Float dy,Float dirtyX,Float dirtyY,Float dirtyWidth,Float dirtyHeight){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","putDynamicImageDataHD",0x6784861a,"lime.graphics.CanvasRenderContext.putDynamicImageDataHD","lime/graphics/CanvasRenderContext.hx",76,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dynamicImageData,"dynamicImageData")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dirtyX,"dirtyX")
		HX_STACK_ARG(dirtyY,"dirtyY")
		HX_STACK_ARG(dirtyWidth,"dirtyWidth")
		HX_STACK_ARG(dirtyHeight,"dirtyHeight")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CanvasRenderContext_obj,putDynamicImageDataHD,(void))

Void CanvasRenderContext_obj::quadraticCurveTo( Float cpx,Float cpy,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","quadraticCurveTo",0x29e52569,"lime.graphics.CanvasRenderContext.quadraticCurveTo","lime/graphics/CanvasRenderContext.hx",77,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cpx,"cpx")
		HX_STACK_ARG(cpy,"cpy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,quadraticCurveTo,(void))

Void CanvasRenderContext_obj::rect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","rect",0x71c6c3fb,"lime.graphics.CanvasRenderContext.rect","lime/graphics/CanvasRenderContext.hx",78,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,rect,(void))

Void CanvasRenderContext_obj::restore( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","restore",0x2f3b90d7,"lime.graphics.CanvasRenderContext.restore","lime/graphics/CanvasRenderContext.hx",79,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,restore,(void))

Void CanvasRenderContext_obj::rotate( Float angle){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","rotate",0x512c60f2,"lime.graphics.CanvasRenderContext.rotate","lime/graphics/CanvasRenderContext.hx",80,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,rotate,(void))

Void CanvasRenderContext_obj::save( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","save",0x726d0214,"lime.graphics.CanvasRenderContext.save","lime/graphics/CanvasRenderContext.hx",81,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,save,(void))

Void CanvasRenderContext_obj::scale( Float sx,Float sy){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","scale",0xae3753d3,"lime.graphics.CanvasRenderContext.scale","lime/graphics/CanvasRenderContext.hx",82,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,scale,(void))

Void CanvasRenderContext_obj::setAlpha( Float alpha){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setAlpha",0x65043eb3,"lime.graphics.CanvasRenderContext.setAlpha","lime/graphics/CanvasRenderContext.hx",83,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alpha,"alpha")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setAlpha,(void))

Void CanvasRenderContext_obj::setCompositeOperation( ::String compositeOperation){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setCompositeOperation",0x588252ab,"lime.graphics.CanvasRenderContext.setCompositeOperation","lime/graphics/CanvasRenderContext.hx",84,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(compositeOperation,"compositeOperation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setCompositeOperation,(void))

Void CanvasRenderContext_obj::setFillColor( Float c,Float m,Float y,Float k,Float a){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setFillColor",0x8997fdb5,"lime.graphics.CanvasRenderContext.setFillColor","lime/graphics/CanvasRenderContext.hx",88,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,setFillColor,(void))

Void CanvasRenderContext_obj::setLineCap( ::String cap){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineCap",0x4b125b13,"lime.graphics.CanvasRenderContext.setLineCap","lime/graphics/CanvasRenderContext.hx",89,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cap,"cap")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineCap,(void))

Void CanvasRenderContext_obj::setLineDash( Array< Float > dash){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineDash",0x65a68f31,"lime.graphics.CanvasRenderContext.setLineDash","lime/graphics/CanvasRenderContext.hx",90,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dash,"dash")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineDash,(void))

Void CanvasRenderContext_obj::setLineJoin( ::String join){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineJoin",0x69a86dc9,"lime.graphics.CanvasRenderContext.setLineJoin","lime/graphics/CanvasRenderContext.hx",91,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(join,"join")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineJoin,(void))

Void CanvasRenderContext_obj::setLineWidth( Float width){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineWidth",0x81f21f47,"lime.graphics.CanvasRenderContext.setLineWidth","lime/graphics/CanvasRenderContext.hx",92,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineWidth,(void))

Void CanvasRenderContext_obj::setMiterLimit( Float limit){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setMiterLimit",0x65af1181,"lime.graphics.CanvasRenderContext.setMiterLimit","lime/graphics/CanvasRenderContext.hx",93,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(limit,"limit")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setMiterLimit,(void))

Void CanvasRenderContext_obj::setShadow( Float width,Float height,Float blur,Float c,Float m,Float y,Float k,Float a){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setShadow",0xd9979aeb,"lime.graphics.CanvasRenderContext.setShadow","lime/graphics/CanvasRenderContext.hx",97,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(blur,"blur")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(CanvasRenderContext_obj,setShadow,(void))

Void CanvasRenderContext_obj::setStrokeColor( Float c,Float m,Float y,Float k,Float a){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setStrokeColor",0x6deff7a0,"lime.graphics.CanvasRenderContext.setStrokeColor","lime/graphics/CanvasRenderContext.hx",101,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,setStrokeColor,(void))

Void CanvasRenderContext_obj::setTransform( Float m11,Float m12,Float m21,Float m22,Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setTransform",0xb6279341,"lime.graphics.CanvasRenderContext.setTransform","lime/graphics/CanvasRenderContext.hx",102,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m11,"m11")
		HX_STACK_ARG(m12,"m12")
		HX_STACK_ARG(m21,"m21")
		HX_STACK_ARG(m22,"m22")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,setTransform,(void))

Void CanvasRenderContext_obj::stroke( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","stroke",0x9740ce4f,"lime.graphics.CanvasRenderContext.stroke","lime/graphics/CanvasRenderContext.hx",103,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,stroke,(void))

Void CanvasRenderContext_obj::strokeRect( Float x,Float y,Float width,Float height,Dynamic lineWidth){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","strokeRect",0x75e81b13,"lime.graphics.CanvasRenderContext.strokeRect","lime/graphics/CanvasRenderContext.hx",104,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(lineWidth,"lineWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,strokeRect,(void))

Void CanvasRenderContext_obj::strokeText( ::String text,Float x,Float y,Dynamic maxWidth){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","strokeText",0x773a9a9c,"lime.graphics.CanvasRenderContext.strokeText","lime/graphics/CanvasRenderContext.hx",105,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(maxWidth,"maxWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,strokeText,(void))

Void CanvasRenderContext_obj::transform( Float m11,Float m12,Float m21,Float m22,Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","transform",0xa2628b35,"lime.graphics.CanvasRenderContext.transform","lime/graphics/CanvasRenderContext.hx",106,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m11,"m11")
		HX_STACK_ARG(m12,"m12")
		HX_STACK_ARG(m21,"m21")
		HX_STACK_ARG(m22,"m22")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,transform,(void))

Void CanvasRenderContext_obj::translate( Float tx,Float ty){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","translate",0xa64f3517,"lime.graphics.CanvasRenderContext.translate","lime/graphics/CanvasRenderContext.hx",107,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,translate,(void))


CanvasRenderContext_obj::CanvasRenderContext_obj()
{
}

void CanvasRenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderContext);
	HX_MARK_MEMBER_NAME(backingStorePixelRatio,"backingStorePixelRatio");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(fillStyle,"fillStyle");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(globalAlpha,"globalAlpha");
	HX_MARK_MEMBER_NAME(globalCompositeOperation,"globalCompositeOperation");
	HX_MARK_MEMBER_NAME(imageSmoothingEnabled,"imageSmoothingEnabled");
	HX_MARK_MEMBER_NAME(lineCap,"lineCap");
	HX_MARK_MEMBER_NAME(lineDash,"lineDash");
	HX_MARK_MEMBER_NAME(lineDashOffset,"lineDashOffset");
	HX_MARK_MEMBER_NAME(lineJoin,"lineJoin");
	HX_MARK_MEMBER_NAME(lineWidth,"lineWidth");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_MEMBER_NAME(shadowBlur,"shadowBlur");
	HX_MARK_MEMBER_NAME(shadowColor,"shadowColor");
	HX_MARK_MEMBER_NAME(shadowOffsetX,"shadowOffsetX");
	HX_MARK_MEMBER_NAME(shadowOffsetY,"shadowOffsetY");
	HX_MARK_MEMBER_NAME(strokeStyle,"strokeStyle");
	HX_MARK_MEMBER_NAME(textAlign,"textAlign");
	HX_MARK_MEMBER_NAME(textBaseline,"textBaseline");
	HX_MARK_END_CLASS();
}

void CanvasRenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backingStorePixelRatio,"backingStorePixelRatio");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(fillStyle,"fillStyle");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(globalAlpha,"globalAlpha");
	HX_VISIT_MEMBER_NAME(globalCompositeOperation,"globalCompositeOperation");
	HX_VISIT_MEMBER_NAME(imageSmoothingEnabled,"imageSmoothingEnabled");
	HX_VISIT_MEMBER_NAME(lineCap,"lineCap");
	HX_VISIT_MEMBER_NAME(lineDash,"lineDash");
	HX_VISIT_MEMBER_NAME(lineDashOffset,"lineDashOffset");
	HX_VISIT_MEMBER_NAME(lineJoin,"lineJoin");
	HX_VISIT_MEMBER_NAME(lineWidth,"lineWidth");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
	HX_VISIT_MEMBER_NAME(shadowBlur,"shadowBlur");
	HX_VISIT_MEMBER_NAME(shadowColor,"shadowColor");
	HX_VISIT_MEMBER_NAME(shadowOffsetX,"shadowOffsetX");
	HX_VISIT_MEMBER_NAME(shadowOffsetY,"shadowOffsetY");
	HX_VISIT_MEMBER_NAME(strokeStyle,"strokeStyle");
	HX_VISIT_MEMBER_NAME(textAlign,"textAlign");
	HX_VISIT_MEMBER_NAME(textBaseline,"textBaseline");
}

Dynamic CanvasRenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"stroke") ) { return stroke_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { return lineCap; }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineDash") ) { return lineDash; }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { return lineJoin; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fillText") ) { return fillText_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillStyle") ) { return fillStyle; }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return textAlign; }
		if (HX_FIELD_EQ(inName,"beginPath") ) { return beginPath_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"setShadow") ) { return setShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return miterLimit; }
		if (HX_FIELD_EQ(inName,"shadowBlur") ) { return shadowBlur; }
		if (HX_FIELD_EQ(inName,"setLineCap") ) { return setLineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeRect") ) { return strokeRect_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeText") ) { return strokeText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalAlpha") ) { return globalAlpha; }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { return shadowColor; }
		if (HX_FIELD_EQ(inName,"strokeStyle") ) { return strokeStyle; }
		if (HX_FIELD_EQ(inName,"clearShadow") ) { return clearShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineDash") ) { return getLineDash_dyn(); }
		if (HX_FIELD_EQ(inName,"measureText") ) { return measureText_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineDash") ) { return setLineDash_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineJoin") ) { return setLineJoin_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textBaseline") ) { return textBaseline; }
		if (HX_FIELD_EQ(inName,"setFillColor") ) { return setFillColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineWidth") ) { return setLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return setTransform_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowOffsetX") ) { return shadowOffsetX; }
		if (HX_FIELD_EQ(inName,"shadowOffsetY") ) { return shadowOffsetY; }
		if (HX_FIELD_EQ(inName,"bezierCurveTo") ) { return bezierCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createPattern") ) { return createPattern_dyn(); }
		if (HX_FIELD_EQ(inName,"isPointInPath") ) { return isPointInPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setMiterLimit") ) { return setMiterLimit_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lineDashOffset") ) { return lineDashOffset; }
		if (HX_FIELD_EQ(inName,"setStrokeColor") ) { return setStrokeColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { return quadraticCurveTo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawImageFromRect") ) { return drawImageFromRect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDynamicImageData") ) { return getDynamicImageData_dyn(); }
		if (HX_FIELD_EQ(inName,"putDynamicImageData") ) { return putDynamicImageData_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createLinearGradient") ) { return createLinearGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"createRadialGradient") ) { return createRadialGradient_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"imageSmoothingEnabled") ) { return imageSmoothingEnabled; }
		if (HX_FIELD_EQ(inName,"getDynamicImageDataHD") ) { return getDynamicImageDataHD_dyn(); }
		if (HX_FIELD_EQ(inName,"putDynamicImageDataHD") ) { return putDynamicImageDataHD_dyn(); }
		if (HX_FIELD_EQ(inName,"setCompositeOperation") ) { return setCompositeOperation_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backingStorePixelRatio") ) { return backingStorePixelRatio; }
		if (HX_FIELD_EQ(inName,"createDynamicImageData") ) { return createDynamicImageData_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"globalCompositeOperation") ) { return globalCompositeOperation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { lineCap=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineDash") ) { lineDash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { lineJoin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillStyle") ) { fillStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { lineWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { textAlign=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowBlur") ) { shadowBlur=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalAlpha") ) { globalAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { shadowColor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strokeStyle") ) { strokeStyle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textBaseline") ) { textBaseline=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowOffsetX") ) { shadowOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowOffsetY") ) { shadowOffsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lineDashOffset") ) { lineDashOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"imageSmoothingEnabled") ) { imageSmoothingEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backingStorePixelRatio") ) { backingStorePixelRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"globalCompositeOperation") ) { globalCompositeOperation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("backingStorePixelRatio"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("fillStyle"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("globalAlpha"));
	outFields->push(HX_CSTRING("globalCompositeOperation"));
	outFields->push(HX_CSTRING("imageSmoothingEnabled"));
	outFields->push(HX_CSTRING("lineCap"));
	outFields->push(HX_CSTRING("lineDash"));
	outFields->push(HX_CSTRING("lineDashOffset"));
	outFields->push(HX_CSTRING("lineJoin"));
	outFields->push(HX_CSTRING("lineWidth"));
	outFields->push(HX_CSTRING("miterLimit"));
	outFields->push(HX_CSTRING("shadowBlur"));
	outFields->push(HX_CSTRING("shadowColor"));
	outFields->push(HX_CSTRING("shadowOffsetX"));
	outFields->push(HX_CSTRING("shadowOffsetY"));
	outFields->push(HX_CSTRING("strokeStyle"));
	outFields->push(HX_CSTRING("textAlign"));
	outFields->push(HX_CSTRING("textBaseline"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,backingStorePixelRatio),HX_CSTRING("backingStorePixelRatio")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,canvas),HX_CSTRING("canvas")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,fillStyle),HX_CSTRING("fillStyle")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,font),HX_CSTRING("font")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,globalAlpha),HX_CSTRING("globalAlpha")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,globalCompositeOperation),HX_CSTRING("globalCompositeOperation")},
	{hx::fsBool,(int)offsetof(CanvasRenderContext_obj,imageSmoothingEnabled),HX_CSTRING("imageSmoothingEnabled")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,lineCap),HX_CSTRING("lineCap")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,lineDash),HX_CSTRING("lineDash")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,lineDashOffset),HX_CSTRING("lineDashOffset")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,lineJoin),HX_CSTRING("lineJoin")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,lineWidth),HX_CSTRING("lineWidth")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,miterLimit),HX_CSTRING("miterLimit")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,shadowBlur),HX_CSTRING("shadowBlur")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,shadowColor),HX_CSTRING("shadowColor")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,shadowOffsetX),HX_CSTRING("shadowOffsetX")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,shadowOffsetY),HX_CSTRING("shadowOffsetY")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,strokeStyle),HX_CSTRING("strokeStyle")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,textAlign),HX_CSTRING("textAlign")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,textBaseline),HX_CSTRING("textBaseline")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("backingStorePixelRatio"),
	HX_CSTRING("canvas"),
	HX_CSTRING("fillStyle"),
	HX_CSTRING("font"),
	HX_CSTRING("globalAlpha"),
	HX_CSTRING("globalCompositeOperation"),
	HX_CSTRING("imageSmoothingEnabled"),
	HX_CSTRING("lineCap"),
	HX_CSTRING("lineDash"),
	HX_CSTRING("lineDashOffset"),
	HX_CSTRING("lineJoin"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("miterLimit"),
	HX_CSTRING("shadowBlur"),
	HX_CSTRING("shadowColor"),
	HX_CSTRING("shadowOffsetX"),
	HX_CSTRING("shadowOffsetY"),
	HX_CSTRING("strokeStyle"),
	HX_CSTRING("textAlign"),
	HX_CSTRING("textBaseline"),
	HX_CSTRING("arc"),
	HX_CSTRING("arcTo"),
	HX_CSTRING("beginPath"),
	HX_CSTRING("bezierCurveTo"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("clearShadow"),
	HX_CSTRING("clip"),
	HX_CSTRING("closePath"),
	HX_CSTRING("createDynamicImageData"),
	HX_CSTRING("createLinearGradient"),
	HX_CSTRING("createPattern"),
	HX_CSTRING("createRadialGradient"),
	HX_CSTRING("drawImage"),
	HX_CSTRING("drawImageFromRect"),
	HX_CSTRING("fill"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("fillText"),
	HX_CSTRING("getDynamicImageData"),
	HX_CSTRING("getDynamicImageDataHD"),
	HX_CSTRING("getLineDash"),
	HX_CSTRING("isPointInPath"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("measureText"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("putDynamicImageData"),
	HX_CSTRING("putDynamicImageDataHD"),
	HX_CSTRING("quadraticCurveTo"),
	HX_CSTRING("rect"),
	HX_CSTRING("restore"),
	HX_CSTRING("rotate"),
	HX_CSTRING("save"),
	HX_CSTRING("scale"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("setCompositeOperation"),
	HX_CSTRING("setFillColor"),
	HX_CSTRING("setLineCap"),
	HX_CSTRING("setLineDash"),
	HX_CSTRING("setLineJoin"),
	HX_CSTRING("setLineWidth"),
	HX_CSTRING("setMiterLimit"),
	HX_CSTRING("setShadow"),
	HX_CSTRING("setStrokeColor"),
	HX_CSTRING("setTransform"),
	HX_CSTRING("stroke"),
	HX_CSTRING("strokeRect"),
	HX_CSTRING("strokeText"),
	HX_CSTRING("transform"),
	HX_CSTRING("translate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderContext_obj::__mClass,"__mClass");
};

#endif

Class CanvasRenderContext_obj::__mClass;

void CanvasRenderContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.CanvasRenderContext"), hx::TCanCast< CanvasRenderContext_obj> ,sStaticFields,sMemberFields,
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

void CanvasRenderContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
