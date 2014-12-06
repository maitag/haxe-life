#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
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
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
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
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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

Void Image_obj::__construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{
HX_STACK_FRAME("lime.graphics.Image","new",0x344ae603,"lime.graphics.Image.new","lime/graphics/Image.hx",68,0xc7b862ad)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(type,"type")
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(70)
	this->offsetX = offsetX;
	HX_STACK_LINE(71)
	this->offsetY = offsetY;
	HX_STACK_LINE(72)
	this->width = width;
	HX_STACK_LINE(73)
	this->height = height;
	HX_STACK_LINE(75)
	if (((type == null()))){
		HX_STACK_LINE(77)
		if (((bool((bool((::lime::app::Application_obj::__instance != null())) && bool((::lime::app::Application_obj::__instance->windows != null())))) && bool((::lime::app::Application_obj::__instance->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->currentRenderer != null()))))){
			HX_STACK_LINE(79)
			::lime::graphics::ImageType _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				::lime::graphics::RenderContext _g1 = ::lime::app::Application_obj::__instance->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->currentRenderer->context;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(79)
				switch( (int)(_g1->__Index())){
					case (int)2: case (int)1: {
						HX_STACK_LINE(81)
						_g = ::lime::graphics::ImageType_obj::CANVAS;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(82)
						_g = ::lime::graphics::ImageType_obj::FLASH;
					}
					;break;
					default: {
						HX_STACK_LINE(83)
						_g = ::lime::graphics::ImageType_obj::DATA;
					}
				}
			}
			HX_STACK_LINE(79)
			this->type = _g;
		}
		else{
			HX_STACK_LINE(89)
			this->type = ::lime::graphics::ImageType_obj::DATA;
		}
	}
	else{
		HX_STACK_LINE(95)
		this->type = type;
	}
	HX_STACK_LINE(99)
	if (((buffer == null()))){
		HX_STACK_LINE(101)
		if (((bool((width > (int)0)) && bool((height > (int)0))))){
			HX_STACK_LINE(103)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(107)
					::lime::graphics::ImageBuffer _g1 = ::lime::graphics::ImageBuffer_obj::__new(null(),width,height,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(107)
					this->buffer = _g1;
					HX_STACK_LINE(108)
					::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(hx::ObjectPtr<OBJ_>(this),width,height);
					HX_STACK_LINE(110)
					if (((color != null()))){
						HX_STACK_LINE(112)
						::lime::math::Rectangle _g2 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(112)
						this->fillRect(_g2,color);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(118)
					::lime::utils::UInt8Array _g3 = ::lime::utils::UInt8Array_obj::__new(((width * height) * (int)4),null(),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(118)
					::lime::graphics::ImageBuffer _g4 = ::lime::graphics::ImageBuffer_obj::__new(_g3,width,height,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(118)
					this->buffer = _g4;
					HX_STACK_LINE(120)
					if (((color != null()))){
						HX_STACK_LINE(122)
						::lime::math::Rectangle _g5 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(122)
						this->fillRect(_g5,color);
					}
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	else{
		HX_STACK_LINE(141)
		this->__fromImageBuffer(buffer);
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::lime::graphics::Image Image_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.Image","clone",0xb88517c0,"lime.graphics.Image.clone","lime/graphics/Image.hx",148,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	::lime::graphics::ImageBuffer _g = this->buffer->clone();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(154)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(_g,this->offsetX,this->offsetY,this->width,this->height,null(),this->type);		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(155)
	return image;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

Void Image_obj::colorTransform( ::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.Image","colorTransform",0xaf89aec6,"lime.graphics.Image.colorTransform","lime/graphics/Image.hx",160,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(162)
		::lime::math::Rectangle _g = this->__clipRect(rect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		rect = _g;
		HX_STACK_LINE(163)
		if (((bool((this->buffer == null())) || bool((rect == null()))))){
			HX_STACK_LINE(163)
			return null();
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(165)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(169)
					::lime::graphics::utils::ImageCanvasUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),rect,colorMatrix);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(177)
					::lime::graphics::utils::ImageDataUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),rect,colorMatrix);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(181)
					rect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(182)
					Dynamic _g11 = rect->__toFlashRectangle();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(182)
					Dynamic _g2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__toFlashColorTransform(colorMatrix);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(182)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("colorTransform"),true)(_g11,_g2);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

Void Image_obj::copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.Image","copyChannel",0xc3306e31,"lime.graphics.Image.copyChannel","lime/graphics/Image.hx",191,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(193)
		::lime::math::Rectangle _g = this->__clipRect(sourceRect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		sourceRect = _g;
		HX_STACK_LINE(194)
		if (((bool((this->buffer == null())) || bool((sourceRect == null()))))){
			HX_STACK_LINE(194)
			return null();
		}
		HX_STACK_LINE(196)
		if (((  (((destChannel == ::lime::graphics::ImageChannel_obj::ALPHA))) ? bool(!(this->get_transparent())) : bool(false) ))){
			HX_STACK_LINE(196)
			return null();
		}
		HX_STACK_LINE(197)
		if (((bool((sourceRect->width <= (int)0)) || bool((sourceRect->height <= (int)0))))){
			HX_STACK_LINE(197)
			return null();
		}
		HX_STACK_LINE(198)
		if ((((sourceRect->x + sourceRect->width) > sourceImage->width))){
			HX_STACK_LINE(198)
			sourceRect->width = (sourceImage->width - sourceRect->x);
		}
		HX_STACK_LINE(199)
		if ((((sourceRect->y + sourceRect->height) > sourceImage->height))){
			HX_STACK_LINE(199)
			sourceRect->height = (sourceImage->height - sourceRect->y);
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(205)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(213)
					::lime::graphics::utils::ImageDataUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(217)
					int srcChannel;		HX_STACK_VAR(srcChannel,"srcChannel");
					HX_STACK_LINE(217)
					switch( (int)(sourceChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(218)
							srcChannel = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(219)
							srcChannel = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(220)
							srcChannel = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(221)
							srcChannel = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(224)
					int dstChannel;		HX_STACK_VAR(dstChannel,"dstChannel");
					HX_STACK_LINE(224)
					switch( (int)(destChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(225)
							dstChannel = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(226)
							dstChannel = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(227)
							dstChannel = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(228)
							dstChannel = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(231)
					sourceRect->offset(sourceImage->offsetX,sourceImage->offsetY);
					HX_STACK_LINE(232)
					destPoint->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(234)
					Dynamic _g11 = sourceImage->buffer->get_src();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(234)
					Dynamic _g2 = sourceRect->__toFlashRectangle();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(234)
					Dynamic _g3 = destPoint->__toFlashPoint();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(234)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("copyChannel"),true)(_g11,_g2,_g3,srcChannel,dstChannel);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

Void Image_obj::copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","copyPixels",0x19d2897f,"lime.graphics.Image.copyPixels","lime/graphics/Image.hx",243,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(245)
		if (((bool((this->buffer == null())) || bool((sourceImage == null()))))){
			HX_STACK_LINE(245)
			return null();
		}
		HX_STACK_LINE(247)
		if ((((sourceRect->x + sourceRect->width) > sourceImage->width))){
			HX_STACK_LINE(247)
			sourceRect->width = (sourceImage->width - sourceRect->x);
		}
		HX_STACK_LINE(248)
		if ((((sourceRect->y + sourceRect->height) > sourceImage->height))){
			HX_STACK_LINE(248)
			sourceRect->height = (sourceImage->height - sourceRect->y);
		}
		HX_STACK_LINE(249)
		if (((bool((sourceRect->width <= (int)0)) || bool((sourceRect->height <= (int)0))))){
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(251)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(255)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(264)
					::lime::graphics::utils::ImageDataUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(268)
					sourceRect->offset(sourceImage->offsetX,sourceImage->offsetY);
					HX_STACK_LINE(269)
					destPoint->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(271)
					if (((bool((alphaImage != null())) && bool((alphaPoint != null()))))){
						HX_STACK_LINE(273)
						alphaPoint->offset(alphaImage->offsetX,alphaImage->offsetY);
					}
					HX_STACK_LINE(277)
					Dynamic _g1 = sourceRect->__toFlashRectangle();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(277)
					Dynamic _g11 = destPoint->__toFlashPoint();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(277)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(277)
					if (((alphaImage != null()))){
						HX_STACK_LINE(277)
						_g2 = alphaImage->buffer->get_src();
					}
					else{
						HX_STACK_LINE(277)
						_g2 = null();
					}
					HX_STACK_LINE(277)
					Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(277)
					if (((alphaPoint != null()))){
						HX_STACK_LINE(277)
						_g3 = alphaPoint->__toFlashPoint();
					}
					else{
						HX_STACK_LINE(277)
						_g3 = null();
					}
					HX_STACK_LINE(277)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("copyPixels"),true)(sourceImage->buffer->__srcBitmapData,_g1,_g11,_g2,_g3,mergeAlpha);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

::lime::utils::ByteArray Image_obj::encode( ::String __o_format,hx::Null< int >  __o_quality){
::String format = __o_format.Default(HX_CSTRING("png"));
int quality = __o_quality.Default(90);
	HX_STACK_FRAME("lime.graphics.Image","encode",0xa785c453,"lime.graphics.Image.encode","lime/graphics/Image.hx",286,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(290)
		::String _switch_1 = (format);
		if (  ( _switch_1==HX_CSTRING("png"))){
			HX_STACK_LINE(296)
			return ::lime::graphics::Image_obj::lime_image_encode(this->buffer,(int)0,quality);
		}
		else if (  ( _switch_1==HX_CSTRING("jpg")) ||  ( _switch_1==HX_CSTRING("jpeg"))){
			HX_STACK_LINE(335)
			return ::lime::graphics::Image_obj::lime_image_encode(this->buffer,(int)1,quality);
		}
		else  {
		}
;
;
		HX_STACK_LINE(345)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

Void Image_obj::fillRect( ::lime::math::Rectangle rect,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","fillRect",0x2421e0c4,"lime.graphics.Image.fillRect","lime/graphics/Image.hx",350,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(352)
		::lime::math::Rectangle _g = this->__clipRect(rect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(352)
		rect = _g;
		HX_STACK_LINE(353)
		if (((bool((this->buffer == null())) || bool((rect == null()))))){
			HX_STACK_LINE(353)
			return null();
		}
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(355)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(359)
					::lime::graphics::utils::ImageCanvasUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),rect,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(367)
					::lime::graphics::utils::ImageDataUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),rect,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(371)
					rect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(372)
					Dynamic _g11 = rect->__toFlashRectangle();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(372)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("fillRect"),true)(_g11,color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fillRect,(void))

Void Image_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","floodFill",0x1da9f544,"lime.graphics.Image.floodFill","lime/graphics/Image.hx",381,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(383)
		if (((this->buffer == null()))){
			HX_STACK_LINE(383)
			return null();
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(385)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(389)
					::lime::graphics::utils::ImageCanvasUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(397)
					::lime::graphics::utils::ImageDataUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(401)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("floodFill"),true)((x + this->offsetX),(y + this->offsetY),color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,floodFill,(void))

int Image_obj::getPixel( int x,int y){
	HX_STACK_FRAME("lime.graphics.Image","getPixel",0xd9e3718d,"lime.graphics.Image.getPixel","lime/graphics/Image.hx",464,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(466)
	if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
		HX_STACK_LINE(466)
		return (int)0;
	}
	HX_STACK_LINE(468)
	::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(468)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(472)
			return ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(480)
			return ::lime::graphics::utils::ImageDataUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(484)
			return this->buffer->__srcBitmapData->__Field(HX_CSTRING("getPixel"),true)((x + this->offsetX),(y + this->offsetY));
		}
		;break;
		default: {
			HX_STACK_LINE(488)
			return (int)0;
		}
	}
	HX_STACK_LINE(468)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixel,return )

int Image_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("lime.graphics.Image","getPixel32",0xaeccdb6c,"lime.graphics.Image.getPixel32","lime/graphics/Image.hx",495,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(497)
	if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
		HX_STACK_LINE(497)
		return (int)0;
	}
	HX_STACK_LINE(499)
	::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(499)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(503)
			return ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(511)
			return ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(515)
			return this->buffer->__srcBitmapData->__Field(HX_CSTRING("getPixel32"),true)((x + this->offsetX),(y + this->offsetY));
		}
		;break;
		default: {
			HX_STACK_LINE(519)
			return (int)0;
		}
	}
	HX_STACK_LINE(499)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixel32,return )

::lime::utils::ByteArray Image_obj::getPixels( ::lime::math::Rectangle rect){
	HX_STACK_FRAME("lime.graphics.Image","getPixels",0xcd1fea46,"lime.graphics.Image.getPixels","lime/graphics/Image.hx",526,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(528)
	if (((this->buffer == null()))){
		HX_STACK_LINE(528)
		return null();
	}
	HX_STACK_LINE(530)
	::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(530)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(534)
			return ::lime::graphics::utils::ImageCanvasUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),rect);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(542)
			return ::lime::graphics::utils::ImageDataUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),rect);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(546)
			rect->offset(this->offsetX,this->offsetY);
			HX_STACK_LINE(547)
			Dynamic _g1 = rect->__toFlashRectangle();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(547)
			return this->buffer->__srcBitmapData->__Field(HX_CSTRING("getPixels"),true)(_g1);
		}
		;break;
		default: {
			HX_STACK_LINE(551)
			return null();
		}
	}
	HX_STACK_LINE(530)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,getPixels,return )

Void Image_obj::resize( int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.Image","resize",0xb61d2c31,"lime.graphics.Image.resize","lime/graphics/Image.hx",558,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(560)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(564)
					::lime::graphics::utils::ImageCanvasUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(568)
					::lime::graphics::utils::ImageDataUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(584)
		this->buffer->width = newWidth;
		HX_STACK_LINE(585)
		this->buffer->height = newHeight;
		HX_STACK_LINE(587)
		this->offsetX = (int)0;
		HX_STACK_LINE(588)
		this->offsetY = (int)0;
		HX_STACK_LINE(589)
		this->width = newWidth;
		HX_STACK_LINE(590)
		this->height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel",0x8840cb01,"lime.graphics.Image.setPixel","lime/graphics/Image.hx",595,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(597)
		if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
			HX_STACK_LINE(597)
			return null();
		}
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(599)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(603)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(611)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(615)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("setPixel"),true)((x + this->offsetX),(y + this->offsetX),color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixel,(void))

Void Image_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel32",0xb24a79e0,"lime.graphics.Image.setPixel32","lime/graphics/Image.hx",624,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(626)
		if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
			HX_STACK_LINE(626)
			return null();
		}
		HX_STACK_LINE(628)
		{
			HX_STACK_LINE(628)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(628)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(632)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(640)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(644)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("setPixel32"),true)((x + this->offsetX),(y + this->offsetY),color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixel32,(void))

Void Image_obj::setPixels( ::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixels",0xb070d652,"lime.graphics.Image.setPixels","lime/graphics/Image.hx",653,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(655)
		::lime::math::Rectangle _g = this->__clipRect(rect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(655)
		rect = _g;
		HX_STACK_LINE(656)
		if (((bool((this->buffer == null())) || bool((rect == null()))))){
			HX_STACK_LINE(656)
			return null();
		}
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(658)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(662)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),rect,byteArray);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(670)
					::lime::graphics::utils::ImageDataUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),rect,byteArray);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(674)
					rect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(675)
					Dynamic _g11 = rect->__toFlashRectangle();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(675)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("setPixels"),true)(_g11,byteArray);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,setPixels,(void))

::lime::math::Rectangle Image_obj::__clipRect( ::lime::math::Rectangle r){
	HX_STACK_FRAME("lime.graphics.Image","__clipRect",0xd30737f1,"lime.graphics.Image.__clipRect","lime/graphics/Image.hx",709,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(711)
	if (((r == null()))){
		HX_STACK_LINE(711)
		return null();
	}
	HX_STACK_LINE(713)
	if (((r->x < (int)0))){
		HX_STACK_LINE(715)
		hx::SubEq(r->width,-(r->x));
		HX_STACK_LINE(716)
		r->x = (int)0;
		HX_STACK_LINE(718)
		if ((((r->x + r->width) <= (int)0))){
			HX_STACK_LINE(718)
			return null();
		}
	}
	HX_STACK_LINE(722)
	if (((r->y < (int)0))){
		HX_STACK_LINE(724)
		hx::SubEq(r->height,-(r->y));
		HX_STACK_LINE(725)
		r->y = (int)0;
		HX_STACK_LINE(727)
		if ((((r->y + r->height) <= (int)0))){
			HX_STACK_LINE(727)
			return null();
		}
	}
	HX_STACK_LINE(731)
	if ((((r->x + r->width) >= this->width))){
		HX_STACK_LINE(733)
		hx::SubEq(r->width,((r->x + r->width) - this->width));
		HX_STACK_LINE(735)
		if (((r->width <= (int)0))){
			HX_STACK_LINE(735)
			return null();
		}
	}
	HX_STACK_LINE(739)
	if ((((r->y + r->height) >= this->height))){
		HX_STACK_LINE(741)
		hx::SubEq(r->height,((r->y + r->height) - this->height));
		HX_STACK_LINE(743)
		if (((r->height <= (int)0))){
			HX_STACK_LINE(743)
			return null();
		}
	}
	HX_STACK_LINE(747)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__clipRect,return )

Void Image_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBase64",0x71681bb6,"lime.graphics.Image.__fromBase64","lime/graphics/Image.hx",752,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromBase64,(void))

Void Image_obj::__fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBytes",0x40972c24,"lime.graphics.Image.__fromBytes","lime/graphics/Image.hx",782,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(810)
		Dynamic data = ::lime::graphics::Image_obj::lime_image_load(bytes);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(812)
		if (((data != null()))){
			HX_STACK_LINE(814)
			::lime::utils::UInt8Array _g = ::lime::utils::UInt8Array_obj::__new(data->__Field(HX_CSTRING("data"),true),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(814)
			::lime::graphics::ImageBuffer _g1 = ::lime::graphics::ImageBuffer_obj::__new(_g,data->__Field(HX_CSTRING("width"),true),data->__Field(HX_CSTRING("height"),true),data->__Field(HX_CSTRING("bpp"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(814)
			this->__fromImageBuffer(_g1);
			HX_STACK_LINE(816)
			if (((onload != null()))){
				HX_STACK_LINE(818)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,__fromBytes,(void))

Void Image_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromFile",0x1c2444e3,"lime.graphics.Image.__fromFile","lime/graphics/Image.hx",833,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(873)
		::lime::graphics::ImageBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(877)
		Dynamic data = ::lime::graphics::Image_obj::lime_image_load(path);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(878)
		if (((data != null()))){
			HX_STACK_LINE(879)
			::lime::utils::ByteArray ba;		HX_STACK_VAR(ba,"ba");
			HX_STACK_LINE(879)
			ba = hx::TCast< lime::utils::ByteArray >::cast(data->__Field(HX_CSTRING("data"),true));
			HX_STACK_LINE(883)
			::lime::utils::UInt8Array u8a = ::lime::utils::UInt8Array_obj::__new(ba,null(),null());		HX_STACK_VAR(u8a,"u8a");
			HX_STACK_LINE(885)
			::lime::graphics::ImageBuffer _g = ::lime::graphics::ImageBuffer_obj::__new(u8a,data->__Field(HX_CSTRING("width"),true),data->__Field(HX_CSTRING("height"),true),data->__Field(HX_CSTRING("bpp"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(885)
			buffer = _g;
		}
		HX_STACK_LINE(922)
		if (((buffer != null()))){
			HX_STACK_LINE(924)
			this->__fromImageBuffer(buffer);
			HX_STACK_LINE(926)
			if (((onload != null()))){
				HX_STACK_LINE(928)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromFile,(void))

Void Image_obj::__fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromImageBuffer",0xe152fb34,"lime.graphics.Image.__fromImageBuffer","lime/graphics/Image.hx",943,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(945)
		this->buffer = buffer;
		HX_STACK_LINE(947)
		if (((buffer != null()))){
			HX_STACK_LINE(949)
			if (((this->width == (int)0))){
				HX_STACK_LINE(951)
				this->width = buffer->width;
			}
			HX_STACK_LINE(955)
			if (((this->height == (int)0))){
				HX_STACK_LINE(957)
				this->height = buffer->height;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__fromImageBuffer,(void))

::lime::utils::UInt8Array Image_obj::get_data( ){
	HX_STACK_FRAME("lime.graphics.Image","get_data",0x7986ad30,"lime.graphics.Image.get_data","lime/graphics/Image.hx",1004,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1006)
	if (((bool((bool((this->buffer->data == null())) && bool((this->buffer->width > (int)0)))) && bool((this->buffer->height > (int)0))))){
	}
	HX_STACK_LINE(1018)
	return this->buffer->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

::lime::utils::UInt8Array Image_obj::set_data( ::lime::utils::UInt8Array value){
	HX_STACK_FRAME("lime.graphics.Image","set_data",0x27e406a4,"lime.graphics.Image.set_data","lime/graphics/Image.hx",1025,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1025)
	return this->buffer->data = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

bool Image_obj::get_powerOfTwo( ){
	HX_STACK_FRAME("lime.graphics.Image","get_powerOfTwo",0x62ee1df6,"lime.graphics.Image.get_powerOfTwo","lime/graphics/Image.hx",1032,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1032)
	return (bool((bool((this->buffer->width != (int)0)) && bool((((int(this->buffer->width) & int((~(int)(this->buffer->width) + (int)1)))) == this->buffer->width)))) && bool(((bool((this->buffer->height != (int)0)) && bool((((int(this->buffer->height) & int((~(int)(this->buffer->height) + (int)1)))) == this->buffer->height))))));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_powerOfTwo",0x830e066a,"lime.graphics.Image.set_powerOfTwo","lime/graphics/Image.hx",1037,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1039)
	bool _g = this->get_powerOfTwo();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1039)
	if (((value != _g))){
		HX_STACK_LINE(1041)
		int newWidth = (int)1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(1042)
		int newHeight = (int)1;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(1044)
		while((true)){
			HX_STACK_LINE(1044)
			if ((!(((newWidth < this->buffer->width))))){
				HX_STACK_LINE(1044)
				break;
			}
			HX_STACK_LINE(1046)
			hx::ShlEq(newWidth,(int)1);
		}
		HX_STACK_LINE(1050)
		while((true)){
			HX_STACK_LINE(1050)
			if ((!(((newHeight < this->buffer->height))))){
				HX_STACK_LINE(1050)
				break;
			}
			HX_STACK_LINE(1052)
			hx::ShlEq(newHeight,(int)1);
		}
		HX_STACK_LINE(1056)
		{
			HX_STACK_LINE(1056)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1056)
			switch( (int)(_g1->__Index())){
				case (int)0: {
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1064)
					::lime::graphics::utils::ImageDataUtil_obj::resizeBuffer(hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1082)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied( ){
	HX_STACK_FRAME("lime.graphics.Image","get_premultiplied",0xc1478990,"lime.graphics.Image.get_premultiplied","lime/graphics/Image.hx",1089,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1089)
	return this->buffer->premultiplied;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_premultiplied",0xe4b5619c,"lime.graphics.Image.set_premultiplied","lime/graphics/Image.hx",1094,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1096)
	if (((bool(value) && bool(!(this->buffer->premultiplied))))){
		HX_STACK_LINE(1098)
		::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1098)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1106)
				::lime::graphics::utils::ImageDataUtil_obj::multiplyAlpha(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	else{
		HX_STACK_LINE(1114)
		if (((bool(!(value)) && bool(this->buffer->premultiplied)))){
			HX_STACK_LINE(1116)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1116)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(1124)
					::lime::graphics::utils::ImageDataUtil_obj::unmultiplyAlpha(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1134)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

::lime::math::Rectangle Image_obj::get_rect( ){
	HX_STACK_FRAME("lime.graphics.Image","get_rect",0x82caa42a,"lime.graphics.Image.get_rect","lime/graphics/Image.hx",1141,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1141)
	return ::lime::math::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

Dynamic Image_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.Image","get_src",0x66c2929e,"lime.graphics.Image.get_src","lime/graphics/Image.hx",1148,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1148)
	return this->buffer->get_src();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

Dynamic Image_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.Image","set_src",0x59c423aa,"lime.graphics.Image.set_src","lime/graphics/Image.hx",1155,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1155)
	return this->buffer->set_src(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent( ){
	HX_STACK_FRAME("lime.graphics.Image","get_transparent",0xe1ee610c,"lime.graphics.Image.get_transparent","lime/graphics/Image.hx",1162,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1162)
	return this->buffer->transparent;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_transparent",0xddb9de18,"lime.graphics.Image.set_transparent","lime/graphics/Image.hx",1171,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1171)
	return this->buffer->transparent = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

::String Image_obj::__base64Chars;

::haxe::crypto::BaseCode Image_obj::__base64Encoder;

::lime::graphics::Image Image_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBase64",0x6fd03756,"lime.graphics.Image.fromBase64","lime/graphics/Image.hx",410,0xc7b862ad)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(412)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(413)
	image->__fromBase64(base64,type,onload);
	HX_STACK_LINE(414)
	return image;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromBase64,return )

::lime::graphics::Image Image_obj::fromBitmapData( Dynamic bitmapData){
	HX_STACK_FRAME("lime.graphics.Image","fromBitmapData",0x2e36df00,"lime.graphics.Image.fromBitmapData","lime/graphics/Image.hx",419,0xc7b862ad)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(421)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),bitmapData->__Field(HX_CSTRING("width"),true),bitmapData->__Field(HX_CSTRING("height"),true),null());		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(422)
	buffer->__srcBitmapData = bitmapData;
	HX_STACK_LINE(423)
	return ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

::lime::graphics::Image Image_obj::fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBytes",0x36406484,"lime.graphics.Image.fromBytes","lime/graphics/Image.hx",428,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(430)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(431)
	image->__fromBytes(bytes,onload);
	HX_STACK_LINE(432)
	return image;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBytes,return )

::lime::graphics::Image Image_obj::fromCanvas( Dynamic canvas){
	HX_STACK_FRAME("lime.graphics.Image","fromCanvas",0xd2ea8e9f,"lime.graphics.Image.fromCanvas","lime/graphics/Image.hx",437,0xc7b862ad)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_LINE(439)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),canvas->__Field(HX_CSTRING("width"),true),canvas->__Field(HX_CSTRING("height"),true),null());		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(440)
	buffer->set_src(canvas);
	HX_STACK_LINE(441)
	return ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

::lime::graphics::Image Image_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("lime.graphics.Image","fromFile",0x58f03883,"lime.graphics.Image.fromFile","lime/graphics/Image.hx",446,0xc7b862ad)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(448)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(449)
	image->__fromFile(path,onload,onerror);
	HX_STACK_LINE(450)
	return image;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromFile,return )

::lime::graphics::Image Image_obj::fromImageElement( Dynamic image){
	HX_STACK_FRAME("lime.graphics.Image","fromImageElement",0x196571a8,"lime.graphics.Image.fromImageElement","lime/graphics/Image.hx",455,0xc7b862ad)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(457)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),image->__Field(HX_CSTRING("width"),true),image->__Field(HX_CSTRING("height"),true),null());		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(458)
	buffer->set_src(image);
	HX_STACK_LINE(459)
	return ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

::String Image_obj::__base64Encode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__base64Encode",0x6ec3d362,"lime.graphics.Image.__base64Encode","lime/graphics/Image.hx",703,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(703)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__base64Encode,return )

bool Image_obj::__isJPG( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isJPG",0x6ba35b1a,"lime.graphics.Image.__isJPG","lime/graphics/Image.hx",966,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(968)
	bytes->position = (int)0;
	HX_STACK_LINE(969)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(969)
	{
		HX_STACK_LINE(969)
		int val;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(969)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(969)
			int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(969)
			val = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(969)
			val = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(969)
		if (((((int(val) & int((int)128))) != (int)0))){
			HX_STACK_LINE(969)
			_g = (val - (int)256);
		}
		else{
			HX_STACK_LINE(969)
			_g = val;
		}
	}
	HX_STACK_LINE(969)
	if (((_g == (int)255))){
		HX_STACK_LINE(969)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(969)
		{
			HX_STACK_LINE(969)
			int val;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(969)
			if (((bytes->position < bytes->length))){
				HX_STACK_LINE(969)
				int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(969)
				val = bytes->b->__get(pos);
			}
			else{
				HX_STACK_LINE(969)
				val = bytes->ThrowEOFi();
			}
			HX_STACK_LINE(969)
			if (((((int(val) & int((int)128))) != (int)0))){
				HX_STACK_LINE(969)
				_g1 = (val - (int)256);
			}
			else{
				HX_STACK_LINE(969)
				_g1 = val;
			}
		}
		HX_STACK_LINE(969)
		return (_g1 == (int)216);
	}
	else{
		HX_STACK_LINE(969)
		return false;
	}
	HX_STACK_LINE(969)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isJPG,return )

bool Image_obj::__isPNG( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isPNG",0x6ba7e6e2,"lime.graphics.Image.__isPNG","lime/graphics/Image.hx",974,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(976)
	bytes->position = (int)0;
	HX_STACK_LINE(977)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(977)
	{
		HX_STACK_LINE(977)
		int val;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(977)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(977)
			int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(977)
			val = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(977)
			val = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(977)
		if (((((int(val) & int((int)128))) != (int)0))){
			HX_STACK_LINE(977)
			_g = (val - (int)256);
		}
		else{
			HX_STACK_LINE(977)
			_g = val;
		}
	}
	struct _Function_1_1{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",977,0xc7b862ad)
			{
				HX_STACK_LINE(977)
				int _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(977)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(977)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(977)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(977)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(977)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(977)
						_g1 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(977)
						_g1 = val;
					}
				}
				HX_STACK_LINE(977)
				return (_g1 == (int)80);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",977,0xc7b862ad)
			{
				HX_STACK_LINE(977)
				int _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(977)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(977)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(977)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(977)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(977)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(977)
						_g2 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(977)
						_g2 = val;
					}
				}
				HX_STACK_LINE(977)
				return (_g2 == (int)78);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",977,0xc7b862ad)
			{
				HX_STACK_LINE(977)
				int _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(977)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(977)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(977)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(977)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(977)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(977)
						_g3 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(977)
						_g3 = val;
					}
				}
				HX_STACK_LINE(977)
				return (_g3 == (int)71);
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",977,0xc7b862ad)
			{
				HX_STACK_LINE(977)
				int _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(977)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(977)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(977)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(977)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(977)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(977)
						_g4 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(977)
						_g4 = val;
					}
				}
				HX_STACK_LINE(977)
				return (_g4 == (int)13);
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",977,0xc7b862ad)
			{
				HX_STACK_LINE(977)
				int _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(977)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(977)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(977)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(977)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(977)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(977)
						_g5 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(977)
						_g5 = val;
					}
				}
				HX_STACK_LINE(977)
				return (_g5 == (int)10);
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",977,0xc7b862ad)
			{
				HX_STACK_LINE(977)
				int _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(977)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(977)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(977)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(977)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(977)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(977)
						_g6 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(977)
						_g6 = val;
					}
				}
				HX_STACK_LINE(977)
				return (_g6 == (int)26);
			}
			return null();
		}
	};
	HX_STACK_LINE(977)
	if (((  (((  (((  (((  (((  (((  (((_g == (int)137))) ? bool(_Function_1_1::Block(bytes)) : bool(false) ))) ? bool(_Function_1_2::Block(bytes)) : bool(false) ))) ? bool(_Function_1_3::Block(bytes)) : bool(false) ))) ? bool(_Function_1_4::Block(bytes)) : bool(false) ))) ? bool(_Function_1_5::Block(bytes)) : bool(false) ))) ? bool(_Function_1_6::Block(bytes)) : bool(false) ))){
		HX_STACK_LINE(977)
		int _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(977)
		{
			HX_STACK_LINE(977)
			int val;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(977)
			if (((bytes->position < bytes->length))){
				HX_STACK_LINE(977)
				int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(977)
				val = bytes->b->__get(pos);
			}
			else{
				HX_STACK_LINE(977)
				val = bytes->ThrowEOFi();
			}
			HX_STACK_LINE(977)
			if (((((int(val) & int((int)128))) != (int)0))){
				HX_STACK_LINE(977)
				_g7 = (val - (int)256);
			}
			else{
				HX_STACK_LINE(977)
				_g7 = val;
			}
		}
		HX_STACK_LINE(977)
		return (_g7 == (int)10);
	}
	else{
		HX_STACK_LINE(977)
		return false;
	}
	HX_STACK_LINE(977)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isPNG,return )

bool Image_obj::__isGIF( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isGIF",0x6ba10e3d,"lime.graphics.Image.__isGIF","lime/graphics/Image.hx",981,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(983)
	bytes->position = (int)0;
	HX_STACK_LINE(985)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(985)
	{
		HX_STACK_LINE(985)
		int val;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(985)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(985)
			int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(985)
			val = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(985)
			val = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(985)
		if (((((int(val) & int((int)128))) != (int)0))){
			HX_STACK_LINE(985)
			_g = (val - (int)256);
		}
		else{
			HX_STACK_LINE(985)
			_g = val;
		}
	}
	struct _Function_1_1{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",985,0xc7b862ad)
			{
				HX_STACK_LINE(985)
				int _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(985)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(985)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(985)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(985)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(985)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(985)
						_g1 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(985)
						_g1 = val;
					}
				}
				HX_STACK_LINE(985)
				return (_g1 == (int)73);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",985,0xc7b862ad)
			{
				HX_STACK_LINE(985)
				int _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(985)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(985)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(985)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(985)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(985)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(985)
						_g2 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(985)
						_g2 = val;
					}
				}
				HX_STACK_LINE(985)
				return (_g2 == (int)70);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",985,0xc7b862ad)
			{
				HX_STACK_LINE(985)
				int _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(985)
					if (((bytes->position < bytes->length))){
						HX_STACK_LINE(985)
						int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(985)
						val = bytes->b->__get(pos);
					}
					else{
						HX_STACK_LINE(985)
						val = bytes->ThrowEOFi();
					}
					HX_STACK_LINE(985)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(985)
						_g3 = (val - (int)256);
					}
					else{
						HX_STACK_LINE(985)
						_g3 = val;
					}
				}
				HX_STACK_LINE(985)
				return (_g3 == (int)38);
			}
			return null();
		}
	};
	HX_STACK_LINE(985)
	if (((  (((  (((  (((_g == (int)71))) ? bool(_Function_1_1::Block(bytes)) : bool(false) ))) ? bool(_Function_1_2::Block(bytes)) : bool(false) ))) ? bool(_Function_1_3::Block(bytes)) : bool(false) ))){
		HX_STACK_LINE(987)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(987)
		{
			HX_STACK_LINE(987)
			int val;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(987)
			if (((bytes->position < bytes->length))){
				HX_STACK_LINE(987)
				int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(987)
				val = bytes->b->__get(pos);
			}
			else{
				HX_STACK_LINE(987)
				val = bytes->ThrowEOFi();
			}
			HX_STACK_LINE(987)
			if (((((int(val) & int((int)128))) != (int)0))){
				HX_STACK_LINE(987)
				b = (val - (int)256);
			}
			else{
				HX_STACK_LINE(987)
				b = val;
			}
		}
		HX_STACK_LINE(988)
		if (((bool((b == (int)7)) || bool((b == (int)9))))){
			HX_STACK_LINE(988)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(988)
			{
				HX_STACK_LINE(988)
				int val;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(988)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(988)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(988)
					val = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(988)
					val = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(988)
				if (((((int(val) & int((int)128))) != (int)0))){
					HX_STACK_LINE(988)
					_g4 = (val - (int)256);
				}
				else{
					HX_STACK_LINE(988)
					_g4 = val;
				}
			}
			HX_STACK_LINE(988)
			return (_g4 == (int)97);
		}
		else{
			HX_STACK_LINE(988)
			return false;
		}
	}
	HX_STACK_LINE(992)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isGIF,return )

Dynamic Image_obj::lime_image_encode;

Dynamic Image_obj::lime_image_load;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__isJPG") ) { return __isJPG_dyn(); }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { return __isPNG_dyn(); }
		if (HX_FIELD_EQ(inName,"__isGIF") ) { return __isGIF_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { return fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { return fromCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return get_powerOfTwo(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return __clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return get_transparent(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { return __base64Chars; }
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return get_premultiplied(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { return fromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"__base64Encode") ) { return __base64Encode_dyn(); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return get_powerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { return __base64Encoder; }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { return lime_image_load; }
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return set_transparent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { return fromImageElement_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { return lime_image_encode; }
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return __fromImageBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return get_premultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return set_premultiplied_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return set_powerOfTwo(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return set_transparent(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { __base64Chars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return set_premultiplied(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { __base64Encoder=inValue.Cast< ::haxe::crypto::BaseCode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { lime_image_load=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { lime_image_encode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("powerOfTwo"));
	outFields->push(HX_CSTRING("premultiplied"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__base64Chars"),
	HX_CSTRING("__base64Encoder"),
	HX_CSTRING("fromBase64"),
	HX_CSTRING("fromBitmapData"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromCanvas"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("fromImageElement"),
	HX_CSTRING("__base64Encode"),
	HX_CSTRING("__isJPG"),
	HX_CSTRING("__isPNG"),
	HX_CSTRING("__isGIF"),
	HX_CSTRING("lime_image_encode"),
	HX_CSTRING("lime_image_load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::ImageBuffer*/ ,(int)offsetof(Image_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsBool,(int)offsetof(Image_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_CSTRING("offsetX")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_CSTRING("offsetY")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Image_obj,rect),HX_CSTRING("rect")},
	{hx::fsObject /*::lime::graphics::ImageType*/ ,(int)offsetof(Image_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_CSTRING("width")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("dirty"),
	HX_CSTRING("height"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("rect"),
	HX_CSTRING("type"),
	HX_CSTRING("width"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("resize"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("__clipRect"),
	HX_CSTRING("__fromBase64"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	HX_CSTRING("__fromImageBuffer"),
	HX_CSTRING("get_data"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_powerOfTwo"),
	HX_CSTRING("set_powerOfTwo"),
	HX_CSTRING("get_premultiplied"),
	HX_CSTRING("set_premultiplied"),
	HX_CSTRING("get_rect"),
	HX_CSTRING("get_src"),
	HX_CSTRING("set_src"),
	HX_CSTRING("get_transparent"),
	HX_CSTRING("set_transparent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_MARK_MEMBER_NAME(Image_obj::lime_image_encode,"lime_image_encode");
	HX_MARK_MEMBER_NAME(Image_obj::lime_image_load,"lime_image_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_VISIT_MEMBER_NAME(Image_obj::lime_image_encode,"lime_image_encode");
	HX_VISIT_MEMBER_NAME(Image_obj::lime_image_load,"lime_image_load");
};

#endif

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
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

void Image_obj::__boot()
{
	__base64Chars= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	lime_image_encode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_encode"),(int)3,null());
	lime_image_load= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_load"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
