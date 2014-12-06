#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace graphics{
namespace utils{

Void ImageCanvasUtil_obj::__construct()
{
	return null();
}

//ImageCanvasUtil_obj::~ImageCanvasUtil_obj() { }

Dynamic ImageCanvasUtil_obj::__CreateEmpty() { return  new ImageCanvasUtil_obj; }
hx::ObjectPtr< ImageCanvasUtil_obj > ImageCanvasUtil_obj::__new()
{  hx::ObjectPtr< ImageCanvasUtil_obj > result = new ImageCanvasUtil_obj();
	result->__construct();
	return result;}

Dynamic ImageCanvasUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageCanvasUtil_obj > result = new ImageCanvasUtil_obj();
	result->__construct();
	return result;}

Void ImageCanvasUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","colorTransform",0x478efac9,"lime.graphics.utils.ImageCanvasUtil.colorTransform","lime/graphics/utils/ImageCanvasUtil.hx",23,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(25)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(26)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
		HX_STACK_LINE(28)
		::lime::graphics::utils::ImageDataUtil_obj::colorTransform(image,rect,colorMatrix);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,colorTransform,(void))

Void ImageCanvasUtil_obj::convertToCanvas( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToCanvas",0x7fd81686,"lime.graphics.utils.ImageCanvasUtil.convertToCanvas","lime/graphics/utils/ImageCanvasUtil.hx",33,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(35)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(37)
		if (((buffer->__srcImage != null()))){
			HX_STACK_LINE(39)
			if (((buffer->__srcCanvas == null()))){
				HX_STACK_LINE(41)
				::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(image,buffer->__srcImage->__Field(HX_CSTRING("width"),true),buffer->__srcImage->__Field(HX_CSTRING("height"),true));
				HX_STACK_LINE(42)
				buffer->__srcContext->__Field(HX_CSTRING("drawImage"),true)(buffer->__srcImage,(int)0,(int)0);
			}
			HX_STACK_LINE(46)
			buffer->__srcImage = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToCanvas,(void))

Void ImageCanvasUtil_obj::convertToData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToData",0x2b8bb058,"lime.graphics.utils.ImageCanvasUtil.convertToData","lime/graphics/utils/ImageCanvasUtil.hx",53,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToData,(void))

Void ImageCanvasUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyChannel",0xbd2cd24e,"lime.graphics.utils.ImageCanvasUtil.copyChannel","lime/graphics/utils/ImageCanvasUtil.hx",70,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(72)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(sourceImage);
		HX_STACK_LINE(73)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(sourceImage);
		HX_STACK_LINE(74)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(75)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
		HX_STACK_LINE(77)
		::lime::graphics::utils::ImageDataUtil_obj::copyChannel(image,sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageCanvasUtil_obj,copyChannel,(void))

Void ImageCanvasUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyPixels",0xbf1ad802,"lime.graphics.utils.ImageCanvasUtil.copyPixels","lime/graphics/utils/ImageCanvasUtil.hx",82,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(84)
		if (((  (((alphaImage != null()))) ? bool(alphaImage->get_transparent()) : bool(false) ))){
			HX_STACK_LINE(86)
			if (((alphaPoint == null()))){
				HX_STACK_LINE(86)
				::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(86)
				alphaPoint = _g;
			}
			HX_STACK_LINE(90)
			::lime::graphics::Image tempData = image->clone();		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(91)
			::lime::math::Rectangle _g1 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			::lime::math::Vector2 _g2 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(91)
			tempData->copyChannel(alphaImage,_g1,_g2,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(92)
			sourceImage = tempData;
		}
		HX_STACK_LINE(96)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(image);
		HX_STACK_LINE(98)
		if ((!(mergeAlpha))){
			HX_STACK_LINE(100)
			if (((  ((image->get_transparent())) ? bool(sourceImage->get_transparent()) : bool(false) ))){
				HX_STACK_LINE(102)
				image->buffer->__srcContext->__Field(HX_CSTRING("clearRect"),true)((destPoint->x + image->offsetX),(destPoint->y + image->offsetY),(sourceRect->width + image->offsetX),(sourceRect->height + image->offsetY));
			}
		}
		HX_STACK_LINE(108)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(sourceImage);
		HX_STACK_LINE(110)
		Dynamic _g3 = sourceImage->buffer->get_src();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(110)
		if (((_g3 != null()))){
			HX_STACK_LINE(112)
			Dynamic _g4 = sourceImage->buffer->get_src();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(112)
			int _g5 = ::Std_obj::_int((sourceRect->x + sourceImage->offsetX));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(112)
			int _g6 = ::Std_obj::_int((sourceRect->y + sourceImage->offsetY));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(112)
			int _g7 = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(112)
			int _g8 = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(112)
			int _g9 = ::Std_obj::_int((destPoint->x + image->offsetX));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(112)
			int _g10 = ::Std_obj::_int((destPoint->y + image->offsetY));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(112)
			int _g11 = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(112)
			int _g12 = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(112)
			image->buffer->__srcContext->__Field(HX_CSTRING("drawImage"),true)(_g4,_g5,_g6,_g7,_g8,_g9,_g10,_g11,_g12);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageCanvasUtil_obj,copyPixels,(void))

Void ImageCanvasUtil_obj::createCanvas( ::lime::graphics::Image image,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createCanvas",0x3ddb6834,"lime.graphics.utils.ImageCanvasUtil.createCanvas","lime/graphics/utils/ImageCanvasUtil.hx",119,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,createCanvas,(void))

Void ImageCanvasUtil_obj::createImageData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createImageData",0x307c5949,"lime.graphics.utils.ImageCanvasUtil.createImageData","lime/graphics/utils/ImageCanvasUtil.hx",151,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(153)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(155)
		if (((buffer->data == null()))){
			HX_STACK_LINE(157)
			Dynamic _g = buffer->__srcContext->__Field(HX_CSTRING("getImageData"),true)((int)0,(int)0,buffer->width,buffer->height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			buffer->__srcImageData = _g;
			HX_STACK_LINE(161)
			if (((image->type == ::lime::graphics::ImageType_obj::CANVAS))){
				HX_STACK_LINE(163)
				buffer->data = buffer->__srcImageData->__Field(HX_CSTRING("data"),true);
			}
			else{
				HX_STACK_LINE(167)
				::lime::utils::UInt8Array _g1 = ::lime::utils::UInt8Array_obj::__new(buffer->__srcImageData->__Field(HX_CSTRING("data"),true),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(167)
				buffer->data = _g1;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,createImageData,(void))

Void ImageCanvasUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","fillRect",0x8e427887,"lime.graphics.utils.ImageCanvasUtil.fillRect","lime/graphics/utils/ImageCanvasUtil.hx",176,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(178)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(179)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(image);
		HX_STACK_LINE(181)
		if (((bool((bool((bool((rect->x == (int)0)) && bool((rect->y == (int)0)))) && bool((rect->width == image->width)))) && bool((rect->height == image->height))))){
			HX_STACK_LINE(183)
			if (((  ((image->get_transparent())) ? bool((((int(color) & int((int)-16777216))) == (int)0)) : bool(false) ))){
				HX_STACK_LINE(185)
				image->buffer->__srcCanvas->__FieldRef(HX_CSTRING("width")) = image->buffer->width;
				HX_STACK_LINE(186)
				return null();
			}
		}
		HX_STACK_LINE(192)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(192)
		if ((image->get_transparent())){
			HX_STACK_LINE(192)
			a = hx::UShr(((int(color) & int((int)-16777216))),(int)24);
		}
		else{
			HX_STACK_LINE(192)
			a = (int)255;
		}
		HX_STACK_LINE(193)
		int r = hx::UShr(((int(color) & int((int)16711680))),(int)16);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(194)
		int g = hx::UShr(((int(color) & int((int)65280))),(int)8);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(195)
		int b = (int(color) & int((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(197)
		image->buffer->__srcContext->__FieldRef(HX_CSTRING("fillStyle")) = ((((((((HX_CSTRING("rgba(") + r) + HX_CSTRING(", ")) + g) + HX_CSTRING(", ")) + b) + HX_CSTRING(", ")) + (Float(a) / Float((int)255))) + HX_CSTRING(")"));
		HX_STACK_LINE(198)
		image->buffer->__srcContext->__Field(HX_CSTRING("fillRect"),true)((rect->x + image->offsetX),(rect->y + image->offsetY),(rect->width + image->offsetX),(rect->height + image->offsetY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,fillRect,(void))

Void ImageCanvasUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","floodFill",0x900e2821,"lime.graphics.utils.ImageCanvasUtil.floodFill","lime/graphics/utils/ImageCanvasUtil.hx",203,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(205)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(206)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
		HX_STACK_LINE(208)
		::lime::graphics::utils::ImageDataUtil_obj::floodFill(image,x,y,color);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,floodFill,(void))

int ImageCanvasUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel",0x44040950,"lime.graphics.utils.ImageCanvasUtil.getPixel","lime/graphics/utils/ImageCanvasUtil.hx",213,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(215)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
	HX_STACK_LINE(216)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
	HX_STACK_LINE(218)
	return ::lime::graphics::utils::ImageDataUtil_obj::getPixel(image,x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,getPixel,return )

int ImageCanvasUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel32",0x541529ef,"lime.graphics.utils.ImageCanvasUtil.getPixel32","lime/graphics/utils/ImageCanvasUtil.hx",223,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(225)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
	HX_STACK_LINE(226)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
	HX_STACK_LINE(228)
	return ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(image,x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageCanvasUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixels",0x3f841d23,"lime.graphics.utils.ImageCanvasUtil.getPixels","lime/graphics/utils/ImageCanvasUtil.hx",233,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(235)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
	HX_STACK_LINE(236)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
	HX_STACK_LINE(238)
	return ::lime::graphics::utils::ImageDataUtil_obj::getPixels(image,rect);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,getPixels,return )

Void ImageCanvasUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","resize",0xd5553d34,"lime.graphics.utils.ImageCanvasUtil.resize","lime/graphics/utils/ImageCanvasUtil.hx",243,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(245)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(247)
		if (((buffer->__srcCanvas == null()))){
			HX_STACK_LINE(249)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(image,newWidth,newHeight);
			HX_STACK_LINE(250)
			Dynamic _g = buffer->get_src();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			buffer->__srcContext->__Field(HX_CSTRING("drawImage"),true)(_g,(int)0,(int)0,newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(254)
			Dynamic sourceCanvas = buffer->__srcCanvas;		HX_STACK_VAR(sourceCanvas,"sourceCanvas");
			HX_STACK_LINE(255)
			buffer->__srcCanvas = null();
			HX_STACK_LINE(256)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(image,newWidth,newHeight);
			HX_STACK_LINE(257)
			buffer->__srcContext->__Field(HX_CSTRING("drawImage"),true)(sourceCanvas,(int)0,(int)0,newWidth,newHeight);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,resize,(void))

Void ImageCanvasUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel",0xf26162c4,"lime.graphics.utils.ImageCanvasUtil.setPixel","lime/graphics/utils/ImageCanvasUtil.hx",264,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(266)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(267)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
		HX_STACK_LINE(269)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel(image,x,y,color);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,setPixel,(void))

Void ImageCanvasUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel32",0x5792c863,"lime.graphics.utils.ImageCanvasUtil.setPixel32","lime/graphics/utils/ImageCanvasUtil.hx",274,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(276)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(277)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
		HX_STACK_LINE(279)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel32(image,x,y,color);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,setPixel32,(void))

Void ImageCanvasUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixels",0x22d5092f,"lime.graphics.utils.ImageCanvasUtil.setPixels","lime/graphics/utils/ImageCanvasUtil.hx",284,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(286)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image);
		HX_STACK_LINE(287)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(image);
		HX_STACK_LINE(289)
		::lime::graphics::utils::ImageDataUtil_obj::setPixels(image,rect,byteArray);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,setPixels,(void))

Void ImageCanvasUtil_obj::sync( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","sync",0x85fe4d9b,"lime.graphics.utils.ImageCanvasUtil.sync","lime/graphics/utils/ImageCanvasUtil.hx",294,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,sync,(void))


ImageCanvasUtil_obj::ImageCanvasUtil_obj()
{
}

Dynamic ImageCanvasUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return sync_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCanvas") ) { return createCanvas_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToData") ) { return convertToData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToCanvas") ) { return convertToCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"createImageData") ) { return createImageData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageCanvasUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageCanvasUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("colorTransform"),
	HX_CSTRING("convertToCanvas"),
	HX_CSTRING("convertToData"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("createCanvas"),
	HX_CSTRING("createImageData"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("resize"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("sync"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#endif

Class ImageCanvasUtil_obj::__mClass;

void ImageCanvasUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.utils.ImageCanvasUtil"), hx::TCanCast< ImageCanvasUtil_obj> ,sStaticFields,sMemberFields,
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

void ImageCanvasUtil_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
