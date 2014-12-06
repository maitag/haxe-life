#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > result = new ImageDataUtil_obj();
	result->__construct();
	return result;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > result = new ImageDataUtil_obj();
	result->__construct();
	return result;}

void ImageDataUtil_obj::__init__() {
HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__init__",0xe8f6f8fe,"lime.graphics.utils.ImageDataUtil.__init__","lime/graphics/utils/ImageDataUtil.hx",21,0x494d921f)
{
	HX_STACK_LINE(23)
	Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< int > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/utils/ImageDataUtil.hx",23,0x494d921f)
			{
				HX_STACK_LINE(23)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(23)
				Array< int > _g = Array_obj< int >::__new()->__SetSizeExact((int)256);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(23)
				this1 = _g;
				HX_STACK_LINE(23)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	_g1 = _Function_1_1::Block();
	HX_STACK_LINE(23)
	::lime::graphics::utils::ImageDataUtil_obj::__alpha16 = _g1;
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			if ((!(((_g < (int)256))))){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(25)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(27)
			{
				HX_STACK_LINE(27)
				int val = ::Std_obj::_int((Float((i * (int)65536)) / Float((int)255)));		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(27)
				::lime::graphics::utils::ImageDataUtil_obj::__alpha16->__Field(HX_CSTRING("__unsafe_set"),true)(i,val);
			}
		}
	}
	HX_STACK_LINE(31)
	Array< int > _g3;		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_2{
		inline static Array< int > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/utils/ImageDataUtil.hx",31,0x494d921f)
			{
				HX_STACK_LINE(31)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(31)
				Array< int > _g2 = Array_obj< int >::__new()->__SetSizeExact((int)510);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(31)
				this1 = _g2;
				HX_STACK_LINE(31)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(31)
	_g3 = _Function_1_2::Block();
	HX_STACK_LINE(31)
	::lime::graphics::utils::ImageDataUtil_obj::__clamp = _g3;
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		while((true)){
			HX_STACK_LINE(33)
			if ((!(((_g < (int)255))))){
				HX_STACK_LINE(33)
				break;
			}
			HX_STACK_LINE(33)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(35)
			::lime::graphics::utils::ImageDataUtil_obj::__clamp->__Field(HX_CSTRING("__unsafe_set"),true)(i,i);
		}
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int _g11 = (int)255;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(39)
		int _g = (int)511;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			if ((!(((_g11 < _g))))){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(39)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(41)
			::lime::graphics::utils::ImageDataUtil_obj::__clamp->__Field(HX_CSTRING("__unsafe_set"),true)(i,(int)255);
		}
	}
}
}

Array< int > ImageDataUtil_obj::__alpha16;

Array< int > ImageDataUtil_obj::__clamp;

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",48,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(50)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(51)
		int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(52)
		int offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(54)
		Float _g = rect->get_top();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		Float _g1 = (_g + image->offsetY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		int rowStart = ::Std_obj::_int(_g1);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(55)
		Float _g2 = rect->get_bottom();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(55)
		Float _g3 = (_g2 + image->offsetY);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(55)
		int rowEnd = ::Std_obj::_int(_g3);		HX_STACK_VAR(rowEnd,"rowEnd");
		HX_STACK_LINE(56)
		Float _g4 = rect->get_left();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(56)
		Float _g5 = (_g4 + image->offsetX);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(56)
		int columnStart = ::Std_obj::_int(_g5);		HX_STACK_VAR(columnStart,"columnStart");
		HX_STACK_LINE(57)
		Float _g6 = rect->get_right();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(57)
		Float _g7 = (_g6 + image->offsetX);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(57)
		int columnEnd = ::Std_obj::_int(_g7);		HX_STACK_VAR(columnEnd,"columnEnd");
		HX_STACK_LINE(59)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(59)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(59)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(59)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(59)
		int ex = (int)0;		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g8 = rowStart;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				if ((!(((_g8 < rowEnd))))){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(61)
				int row = (_g8)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					int _g11 = columnStart;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(63)
					while((true)){
						HX_STACK_LINE(63)
						if ((!(((_g11 < columnEnd))))){
							HX_STACK_LINE(63)
							break;
						}
						HX_STACK_LINE(63)
						int column = (_g11)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(65)
						offset = ((row * stride) + (column * (int)4));
						HX_STACK_LINE(67)
						int _g81 = ::Std_obj::_int(((data->__get((offset + (int)3)) * colorMatrix->__get((int)18)) + (colorMatrix->__get((int)19) * (int)255)));		HX_STACK_VAR(_g81,"_g81");
						HX_STACK_LINE(67)
						a = _g81;
						HX_STACK_LINE(68)
						if (((a > (int)255))){
							HX_STACK_LINE(68)
							ex = (a - (int)255);
						}
						else{
							HX_STACK_LINE(68)
							ex = (int)0;
						}
						HX_STACK_LINE(69)
						int _g9 = ::Std_obj::_int((((data->__get((offset + (int)2)) * colorMatrix->__get((int)12)) + (colorMatrix->__get((int)14) * (int)255)) + ex));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(69)
						b = _g9;
						HX_STACK_LINE(70)
						if (((b > (int)255))){
							HX_STACK_LINE(70)
							ex = (b - (int)255);
						}
						else{
							HX_STACK_LINE(70)
							ex = (int)0;
						}
						HX_STACK_LINE(71)
						int _g10 = ::Std_obj::_int((((data->__get((offset + (int)1)) * colorMatrix->__get((int)6)) + (colorMatrix->__get((int)9) * (int)255)) + ex));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(71)
						g = _g10;
						HX_STACK_LINE(72)
						if (((g > (int)255))){
							HX_STACK_LINE(72)
							ex = (g - (int)255);
						}
						else{
							HX_STACK_LINE(72)
							ex = (int)0;
						}
						HX_STACK_LINE(73)
						int _g111 = ::Std_obj::_int((((data->__get(offset) * colorMatrix->__get((int)0)) + (colorMatrix->__get((int)4) * (int)255)) + ex));		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(73)
						r = _g111;
						HX_STACK_LINE(75)
						if (((r > (int)255))){
							HX_STACK_LINE(75)
							hx::__ArrayImplRef(data,offset) = (int)255;
						}
						else{
							HX_STACK_LINE(75)
							hx::__ArrayImplRef(data,offset) = r;
						}
						HX_STACK_LINE(76)
						if (((g > (int)255))){
							HX_STACK_LINE(76)
							hx::__ArrayImplRef(data,(offset + (int)1)) = (int)255;
						}
						else{
							HX_STACK_LINE(76)
							hx::__ArrayImplRef(data,(offset + (int)1)) = g;
						}
						HX_STACK_LINE(77)
						if (((b > (int)255))){
							HX_STACK_LINE(77)
							hx::__ArrayImplRef(data,(offset + (int)2)) = (int)255;
						}
						else{
							HX_STACK_LINE(77)
							hx::__ArrayImplRef(data,(offset + (int)2)) = b;
						}
						HX_STACK_LINE(78)
						if (((a > (int)255))){
							HX_STACK_LINE(78)
							hx::__ArrayImplRef(data,(offset + (int)3)) = (int)255;
						}
						else{
							HX_STACK_LINE(78)
							hx::__ArrayImplRef(data,(offset + (int)3)) = a;
						}
					}
				}
			}
		}
		HX_STACK_LINE(84)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",89,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(91)
		int destIdx;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(91)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(93)
				destIdx = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(94)
				destIdx = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(95)
				destIdx = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(96)
				destIdx = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(100)
		int srcIdx;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(100)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(102)
				srcIdx = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(103)
				srcIdx = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(104)
				srcIdx = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(105)
				srcIdx = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(109)
		int srcStride = ::Std_obj::_int((sourceImage->buffer->width * (int)4));		HX_STACK_VAR(srcStride,"srcStride");
		HX_STACK_LINE(110)
		int srcPosition = ::Std_obj::_int((((((sourceRect->x + sourceImage->offsetX)) * (int)4) + (srcStride * ((sourceRect->y + sourceImage->offsetY)))) + srcIdx));		HX_STACK_VAR(srcPosition,"srcPosition");
		HX_STACK_LINE(111)
		int _g = ::Std_obj::_int(((int)4 * ((sourceRect->width + sourceImage->offsetX))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		int srcRowOffset = (srcStride - _g);		HX_STACK_VAR(srcRowOffset,"srcRowOffset");
		HX_STACK_LINE(112)
		int srcRowEnd = ::Std_obj::_int(((int)4 * (((sourceRect->x + sourceImage->offsetX) + sourceRect->width))));		HX_STACK_VAR(srcRowEnd,"srcRowEnd");
		HX_STACK_LINE(113)
		::lime::utils::UInt8Array srcData = sourceImage->buffer->data;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(115)
		int destStride = ::Std_obj::_int((image->buffer->width * (int)4));		HX_STACK_VAR(destStride,"destStride");
		HX_STACK_LINE(116)
		int destPosition = ::Std_obj::_int((((((destPoint->x + image->offsetX)) * (int)4) + (destStride * ((destPoint->y + image->offsetY)))) + destIdx));		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(117)
		int _g1 = ::Std_obj::_int(((int)4 * ((sourceRect->width + image->offsetX))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(117)
		int destRowOffset = (destStride - _g1);		HX_STACK_VAR(destRowOffset,"destRowOffset");
		HX_STACK_LINE(118)
		int destRowEnd = ::Std_obj::_int(((int)4 * (((destPoint->x + image->offsetX) + sourceRect->width))));		HX_STACK_VAR(destRowEnd,"destRowEnd");
		HX_STACK_LINE(119)
		::lime::utils::UInt8Array destData = image->buffer->data;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(121)
		int length = ::Std_obj::_int((sourceRect->width * sourceRect->height));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(123)
			while((true)){
				HX_STACK_LINE(123)
				if ((!(((_g2 < length))))){
					HX_STACK_LINE(123)
					break;
				}
				HX_STACK_LINE(123)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(125)
				hx::__ArrayImplRef(destData,destPosition) = srcData->__get(srcPosition);
				HX_STACK_LINE(127)
				hx::AddEq(srcPosition,(int)4);
				HX_STACK_LINE(128)
				hx::AddEq(destPosition,(int)4);
				HX_STACK_LINE(130)
				if (((hx::Mod(srcPosition,srcStride) > srcRowEnd))){
					HX_STACK_LINE(132)
					hx::AddEq(srcPosition,srcRowOffset);
				}
				HX_STACK_LINE(136)
				if (((hx::Mod(destPosition,destStride) > destRowEnd))){
					HX_STACK_LINE(138)
					hx::AddEq(destPosition,destRowOffset);
				}
			}
		}
		HX_STACK_LINE(144)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",149,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(151)
		if (((  (((alphaImage != null()))) ? bool(alphaImage->get_transparent()) : bool(false) ))){
			HX_STACK_LINE(153)
			if (((alphaPoint == null()))){
				HX_STACK_LINE(153)
				::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(153)
				alphaPoint = _g;
			}
			HX_STACK_LINE(157)
			::lime::graphics::Image tempData = image->clone();		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(158)
			::lime::math::Rectangle _g1 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			::lime::math::Vector2 _g2 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(158)
			tempData->copyChannel(alphaImage,_g1,_g2,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(159)
			sourceImage = tempData;
		}
		HX_STACK_LINE(163)
		int rowOffset = ::Std_obj::_int((((destPoint->y + image->offsetY) - sourceRect->y) - sourceImage->offsetY));		HX_STACK_VAR(rowOffset,"rowOffset");
		HX_STACK_LINE(164)
		int columnOffset = ::Std_obj::_int((((destPoint->x + image->offsetX) - sourceRect->x) - sourceImage->offsetY));		HX_STACK_VAR(columnOffset,"columnOffset");
		HX_STACK_LINE(166)
		::lime::utils::UInt8Array sourceData = sourceImage->buffer->data;		HX_STACK_VAR(sourceData,"sourceData");
		HX_STACK_LINE(167)
		int sourceStride = (sourceImage->buffer->width * (int)4);		HX_STACK_VAR(sourceStride,"sourceStride");
		HX_STACK_LINE(168)
		int sourceOffset = (int)0;		HX_STACK_VAR(sourceOffset,"sourceOffset");
		HX_STACK_LINE(170)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(171)
		int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(172)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(174)
		if (((  ((!((!(mergeAlpha))))) ? bool(!(sourceImage->get_transparent())) : bool(true) ))){
			HX_STACK_LINE(176)
			Float _g3 = sourceRect->get_top();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(176)
			Float _g4 = (_g3 + sourceImage->offsetY);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(176)
			int _g1 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			Float _g5 = sourceRect->get_bottom();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(176)
			Float _g6 = (_g5 + sourceImage->offsetY);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(176)
			int _g = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				int row = (_g1)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					Float _g7 = sourceRect->get_left();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(178)
					Float _g8 = (_g7 + sourceImage->offsetX);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(178)
					int _g31 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(178)
					Float _g9 = sourceRect->get_right();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(178)
					Float _g10 = (_g9 + sourceImage->offsetX);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(178)
					int _g2 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(178)
					while((true)){
						HX_STACK_LINE(178)
						if ((!(((_g31 < _g2))))){
							HX_STACK_LINE(178)
							break;
						}
						HX_STACK_LINE(178)
						int column = (_g31)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(180)
						sourceOffset = ((row * sourceStride) + (column * (int)4));
						HX_STACK_LINE(181)
						offset = ((((row + rowOffset)) * stride) + (((column + columnOffset)) * (int)4));
						HX_STACK_LINE(183)
						hx::__ArrayImplRef(data,offset) = sourceData->__get(sourceOffset);
						HX_STACK_LINE(184)
						hx::__ArrayImplRef(data,(offset + (int)1)) = sourceData->__get((sourceOffset + (int)1));
						HX_STACK_LINE(185)
						hx::__ArrayImplRef(data,(offset + (int)2)) = sourceData->__get((sourceOffset + (int)2));
						HX_STACK_LINE(186)
						hx::__ArrayImplRef(data,(offset + (int)3)) = sourceData->__get((sourceOffset + (int)3));
					}
				}
			}
		}
		else{
			HX_STACK_LINE(194)
			Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
			HX_STACK_LINE(195)
			Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				Float _g11 = sourceRect->get_top();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(197)
				Float _g12 = (_g11 + sourceImage->offsetY);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(197)
				int _g1 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(197)
				Float _g13 = sourceRect->get_bottom();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(197)
				Float _g14 = (_g13 + sourceImage->offsetY);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(197)
				int _g = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(197)
				while((true)){
					HX_STACK_LINE(197)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(197)
						break;
					}
					HX_STACK_LINE(197)
					int row = (_g1)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Float _g15 = sourceRect->get_left();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(199)
						Float _g16 = (_g15 + sourceImage->offsetX);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(199)
						int _g3 = ::Std_obj::_int(_g16);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(199)
						Float _g17 = sourceRect->get_right();		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(199)
						Float _g18 = (_g17 + sourceImage->offsetX);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(199)
						int _g2 = ::Std_obj::_int(_g18);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(199)
						while((true)){
							HX_STACK_LINE(199)
							if ((!(((_g3 < _g2))))){
								HX_STACK_LINE(199)
								break;
							}
							HX_STACK_LINE(199)
							int column = (_g3)++;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(201)
							sourceOffset = ((row * sourceStride) + (column * (int)4));
							HX_STACK_LINE(202)
							offset = ((((row + rowOffset)) * stride) + (((column + columnOffset)) * (int)4));
							HX_STACK_LINE(204)
							sourceAlpha = (Float(sourceData->__get((sourceOffset + (int)3))) / Float((int)255));
							HX_STACK_LINE(205)
							oneMinusSourceAlpha = ((int)1 - sourceAlpha);
							HX_STACK_LINE(207)
							{
								HX_STACK_LINE(207)
								int index = ::Std_obj::_int((sourceData->__get(sourceOffset) + (data->__get(offset) * oneMinusSourceAlpha)));		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(207)
								hx::__ArrayImplRef(data,offset) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
							}
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								int index = ::Std_obj::_int((sourceData->__get((sourceOffset + (int)1)) + (data->__get((offset + (int)1)) * oneMinusSourceAlpha)));		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(208)
								hx::__ArrayImplRef(data,(offset + (int)1)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
							}
							HX_STACK_LINE(209)
							{
								HX_STACK_LINE(209)
								int index = ::Std_obj::_int((sourceData->__get((sourceOffset + (int)2)) + (data->__get((offset + (int)2)) * oneMinusSourceAlpha)));		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(209)
								hx::__ArrayImplRef(data,(offset + (int)2)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
							}
							HX_STACK_LINE(210)
							{
								HX_STACK_LINE(210)
								int index = ::Std_obj::_int((sourceData->__get((sourceOffset + (int)3)) + (data->__get((offset + (int)3)) * oneMinusSourceAlpha)));		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(210)
								hx::__ArrayImplRef(data,(offset + (int)3)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(218)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",223,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(225)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(225)
		if ((image->get_transparent())){
			HX_STACK_LINE(225)
			a = hx::UShr(((int(color) & int((int)-16777216))),(int)24);
		}
		else{
			HX_STACK_LINE(225)
			a = (int)255;
		}
		HX_STACK_LINE(226)
		int r = hx::UShr(((int(color) & int((int)16711680))),(int)16);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(227)
		int g = hx::UShr(((int(color) & int((int)65280))),(int)8);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(228)
		int b = (int(color) & int((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(230)
		int rgba = (int((int((int(r) | int((int(g) << int((int)8))))) | int((int(b) << int((int)16))))) | int((int(a) << int((int)24))));		HX_STACK_VAR(rgba,"rgba");
		HX_STACK_LINE(231)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(233)
		if (((bool((bool((bool((bool((bool((rect->width == image->buffer->width)) && bool((rect->height == image->buffer->height)))) && bool((rect->x == (int)0)))) && bool((rect->y == (int)0)))) && bool((image->offsetX == (int)0)))) && bool((image->offsetY == (int)0))))){
			HX_STACK_LINE(235)
			int length = (image->buffer->width * image->buffer->height);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				while((true)){
					HX_STACK_LINE(237)
					if ((!(((_g < length))))){
						HX_STACK_LINE(237)
						break;
					}
					HX_STACK_LINE(237)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(245)
					::__hxcpp_memory_set_ui32(data->bytes,((i * (int)4) + data->byteOffset),rgba);
				}
			}
		}
		else{
			HX_STACK_LINE(252)
			int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(253)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(255)
			int rowStart = ::Std_obj::_int((rect->y + image->offsetY));		HX_STACK_VAR(rowStart,"rowStart");
			HX_STACK_LINE(256)
			Float _g = rect->get_bottom();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(256)
			Float _g1 = (_g + image->offsetY);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(256)
			int rowEnd = ::Std_obj::_int(_g1);		HX_STACK_VAR(rowEnd,"rowEnd");
			HX_STACK_LINE(257)
			int columnStart = ::Std_obj::_int((rect->x + image->offsetX));		HX_STACK_VAR(columnStart,"columnStart");
			HX_STACK_LINE(258)
			Float _g2 = rect->get_right();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(258)
			Float _g3 = (_g2 + image->offsetX);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(258)
			int columnEnd = ::Std_obj::_int(_g3);		HX_STACK_VAR(columnEnd,"columnEnd");
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int _g4 = rowStart;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(260)
				while((true)){
					HX_STACK_LINE(260)
					if ((!(((_g4 < rowEnd))))){
						HX_STACK_LINE(260)
						break;
					}
					HX_STACK_LINE(260)
					int row = (_g4)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						int _g11 = columnStart;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(262)
						while((true)){
							HX_STACK_LINE(262)
							if ((!(((_g11 < columnEnd))))){
								HX_STACK_LINE(262)
								break;
							}
							HX_STACK_LINE(262)
							int column = (_g11)++;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(264)
							offset = ((row * stride) + (column * (int)4));
							HX_STACK_LINE(272)
							::__hxcpp_memory_set_ui32(data->bytes,(offset + data->byteOffset),rgba);
						}
					}
				}
			}
		}
		HX_STACK_LINE(281)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",286,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(288)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(289)
		int offset = ((((y + image->offsetY)) * ((image->buffer->width * (int)4))) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(290)
		int hitColorR = data->__get(offset);		HX_STACK_VAR(hitColorR,"hitColorR");
		HX_STACK_LINE(291)
		int hitColorG = data->__get((offset + (int)1));		HX_STACK_VAR(hitColorG,"hitColorG");
		HX_STACK_LINE(292)
		int hitColorB = data->__get((offset + (int)2));		HX_STACK_VAR(hitColorB,"hitColorB");
		HX_STACK_LINE(293)
		int hitColorA;		HX_STACK_VAR(hitColorA,"hitColorA");
		HX_STACK_LINE(293)
		if ((image->get_transparent())){
			HX_STACK_LINE(293)
			hitColorA = data->__get((offset + (int)3));
		}
		else{
			HX_STACK_LINE(293)
			hitColorA = (int)255;
		}
		HX_STACK_LINE(295)
		int r = hx::UShr(((int(color) & int((int)16711680))),(int)16);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(296)
		int g = hx::UShr(((int(color) & int((int)65280))),(int)8);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(297)
		int b = (int(color) & int((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(298)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(298)
		if ((image->get_transparent())){
			HX_STACK_LINE(298)
			a = hx::UShr(((int(color) & int((int)-16777216))),(int)24);
		}
		else{
			HX_STACK_LINE(298)
			a = (int)255;
		}
		HX_STACK_LINE(300)
		if (((bool((bool((bool((hitColorR == r)) && bool((hitColorG == g)))) && bool((hitColorB == b)))) && bool((hitColorA == a))))){
			HX_STACK_LINE(300)
			return null();
		}
		HX_STACK_LINE(302)
		Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(303)
		Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(305)
		int minX = -(image->offsetX);		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(306)
		int minY = -(image->offsetY);		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(307)
		int maxX = (minX + image->width);		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(308)
		int maxY = (minY + image->height);		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(310)
		Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
		HX_STACK_LINE(311)
		queue->push(x);
		HX_STACK_LINE(312)
		queue->push(y);
		HX_STACK_LINE(314)
		while((true)){
			HX_STACK_LINE(314)
			if ((!(((queue->length > (int)0))))){
				HX_STACK_LINE(314)
				break;
			}
			HX_STACK_LINE(316)
			Dynamic curPointY = queue->pop();		HX_STACK_VAR(curPointY,"curPointY");
			HX_STACK_LINE(317)
			Dynamic curPointX = queue->pop();		HX_STACK_VAR(curPointX,"curPointX");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(319)
				while((true)){
					HX_STACK_LINE(319)
					if ((!(((_g < (int)4))))){
						HX_STACK_LINE(319)
						break;
					}
					HX_STACK_LINE(319)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(321)
					int nextPointX = (curPointX + dx->__get(i));		HX_STACK_VAR(nextPointX,"nextPointX");
					HX_STACK_LINE(322)
					int nextPointY = (curPointY + dy->__get(i));		HX_STACK_VAR(nextPointY,"nextPointY");
					HX_STACK_LINE(324)
					if (((bool((bool((bool((nextPointX < minX)) || bool((nextPointY < minY)))) || bool((nextPointX >= maxX)))) || bool((nextPointY >= maxY))))){
						HX_STACK_LINE(326)
						continue;
					}
					HX_STACK_LINE(330)
					int nextPointOffset = ((((nextPointY * image->width) + nextPointX)) * (int)4);		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
					HX_STACK_LINE(332)
					if (((bool((bool((bool((data->__get(nextPointOffset) == hitColorR)) && bool((data->__get((nextPointOffset + (int)1)) == hitColorG)))) && bool((data->__get((nextPointOffset + (int)2)) == hitColorB)))) && bool((data->__get((nextPointOffset + (int)3)) == hitColorA))))){
						HX_STACK_LINE(334)
						hx::__ArrayImplRef(data,nextPointOffset) = r;
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(data,(nextPointOffset + (int)1)) = g;
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(data,(nextPointOffset + (int)2)) = b;
						HX_STACK_LINE(337)
						hx::__ArrayImplRef(data,(nextPointOffset + (int)3)) = a;
						HX_STACK_LINE(339)
						queue->push(nextPointX);
						HX_STACK_LINE(340)
						queue->push(nextPointY);
					}
				}
			}
		}
		HX_STACK_LINE(348)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,floodFill,(void))

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",353,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(355)
	::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(356)
	int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(358)
	if ((image->get_premultiplied())){
		HX_STACK_LINE(360)
		Float unmultiply = (Float(255.0) / Float(data->__get((offset + (int)3))));		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(361)
		::haxe::Log_obj::trace(unmultiply,hx::SourceInfo(HX_CSTRING("ImageDataUtil.hx"),361,HX_CSTRING("lime.graphics.utils.ImageDataUtil"),HX_CSTRING("getPixel")));
		HX_STACK_LINE(362)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int index = ::Std_obj::_int((data->__get(offset) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(362)
			_g = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(362)
		int _g1 = (int(_g) << int((int)16));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(362)
		Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int index = ::Std_obj::_int((data->__get((offset + (int)1)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(362)
			_g2 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(362)
		int _g3 = (int(_g2) << int((int)8));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(362)
		int _g4 = (int(_g1) | int(_g3));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(362)
		Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int index = ::Std_obj::_int((data->__get((offset + (int)2)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(362)
			_g5 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(362)
		return (int(_g4) | int(_g5));
	}
	else{
		HX_STACK_LINE(366)
		return (int((int((int(data->__get(offset)) << int((int)16))) | int((int(data->__get((offset + (int)1))) << int((int)8))))) | int(data->__get((offset + (int)2))));
	}
	HX_STACK_LINE(358)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",373,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(375)
	::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(376)
	int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(377)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(377)
	if ((image->get_transparent())){
		HX_STACK_LINE(377)
		a = data->__get((offset + (int)3));
	}
	else{
		HX_STACK_LINE(377)
		a = (int)255;
	}
	HX_STACK_LINE(379)
	if (((  ((image->get_premultiplied())) ? bool((a != (int)0)) : bool(false) ))){
		HX_STACK_LINE(381)
		Float unmultiply = (Float(255.0) / Float(a));		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(382)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int index = ::Math_obj::round((data->__get(offset) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(382)
			_g = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(382)
		int _g1 = (int(_g) << int((int)16));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(382)
		int _g2 = (int((int(a) << int((int)24))) | int(_g1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(382)
		Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int index = ::Std_obj::_int((data->__get((offset + (int)1)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(382)
			_g3 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(382)
		int _g4 = (int(_g3) << int((int)8));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(382)
		int _g5 = (int(_g2) | int(_g4));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(382)
		Dynamic _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int index = ::Std_obj::_int((data->__get((offset + (int)2)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(382)
			_g6 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(382)
		return (int(_g5) | int(_g6));
	}
	else{
		HX_STACK_LINE(386)
		return (int((int((int((int(a) << int((int)24))) | int((int(data->__get(offset)) << int((int)16))))) | int((int(data->__get((offset + (int)1))) << int((int)8))))) | int(data->__get((offset + (int)2))));
	}
	HX_STACK_LINE(379)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",393,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(398)
	::lime::utils::ByteArray byteArray = ::lime::utils::ByteArray_obj::__new(((image->width * image->height) * (int)4));		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(403)
	::lime::utils::UInt8Array srcData = image->buffer->data;		HX_STACK_VAR(srcData,"srcData");
	HX_STACK_LINE(404)
	int srcStride = ::Std_obj::_int((image->buffer->width * (int)4));		HX_STACK_VAR(srcStride,"srcStride");
	HX_STACK_LINE(405)
	int srcPosition = ::Std_obj::_int(((rect->x * (int)4) + (srcStride * rect->y)));		HX_STACK_VAR(srcPosition,"srcPosition");
	HX_STACK_LINE(406)
	int _g = ::Std_obj::_int(((int)4 * rect->width));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(406)
	int srcRowOffset = (srcStride - _g);		HX_STACK_VAR(srcRowOffset,"srcRowOffset");
	HX_STACK_LINE(407)
	int srcRowEnd = ::Std_obj::_int(((int)4 * ((rect->x + rect->width))));		HX_STACK_VAR(srcRowEnd,"srcRowEnd");
	HX_STACK_LINE(409)
	int length = ::Std_obj::_int((((int)4 * rect->width) * rect->height));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(414)
	{
		HX_STACK_LINE(414)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(414)
		while((true)){
			HX_STACK_LINE(414)
			if ((!(((_g1 < length))))){
				HX_STACK_LINE(414)
				break;
			}
			HX_STACK_LINE(414)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				int _g11 = (srcPosition)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(419)
				int v = srcData->__get(_g11);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(419)
				byteArray->b[i] = v;
			}
			HX_STACK_LINE(422)
			if (((hx::Mod(srcPosition,srcStride) > srcRowEnd))){
				HX_STACK_LINE(424)
				hx::AddEq(srcPosition,srcRowOffset);
			}
		}
	}
	HX_STACK_LINE(430)
	byteArray->position = (int)0;
	HX_STACK_LINE(431)
	return byteArray;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",436,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(438)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(439)
		if (((data == null()))){
			HX_STACK_LINE(439)
			return null();
		}
		HX_STACK_LINE(441)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(441)
		Dynamic a16;		HX_STACK_VAR(a16,"a16");
		HX_STACK_LINE(442)
		int length = ::Std_obj::_int((Float(data->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			while((true)){
				HX_STACK_LINE(444)
				if ((!(((_g < length))))){
					HX_STACK_LINE(444)
					break;
				}
				HX_STACK_LINE(444)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(446)
				index = (i * (int)4);
				HX_STACK_LINE(448)
				int a161 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16->__unsafe_get(data->__get((index + (int)3)));		HX_STACK_VAR(a161,"a161");
				HX_STACK_LINE(449)
				hx::__ArrayImplRef(data,index) = (int((data->__get(index) * a161)) >> int((int)16));
				HX_STACK_LINE(450)
				hx::__ArrayImplRef(data,(index + (int)1)) = (int((data->__get((index + (int)1)) * a161)) >> int((int)16));
				HX_STACK_LINE(451)
				hx::__ArrayImplRef(data,(index + (int)2)) = (int((data->__get((index + (int)2)) * a161)) >> int((int)16));
			}
		}
		HX_STACK_LINE(455)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(456)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",461,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(463)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(464)
		::lime::utils::UInt8Array _g = ::lime::utils::UInt8Array_obj::__new(((newWidth * newHeight) * (int)4),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(464)
		::lime::graphics::ImageBuffer newBuffer = ::lime::graphics::ImageBuffer_obj::__new(_g,newWidth,newHeight,null());		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(466)
		int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
		HX_STACK_LINE(467)
		int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
		HX_STACK_LINE(469)
		::lime::utils::UInt8Array data = image->get_data();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(470)
		::lime::utils::UInt8Array newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(471)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(471)
		int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
		HX_STACK_LINE(471)
		int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
		HX_STACK_LINE(471)
		int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
		HX_STACK_LINE(471)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(472)
		int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
		HX_STACK_LINE(472)
		int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
		HX_STACK_LINE(473)
		Float u;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(473)
		Float v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(473)
		Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
		HX_STACK_LINE(473)
		Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
		HX_STACK_LINE(473)
		Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
		HX_STACK_LINE(473)
		Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(475)
			while((true)){
				HX_STACK_LINE(475)
				if ((!(((_g1 < newHeight))))){
					HX_STACK_LINE(475)
					break;
				}
				HX_STACK_LINE(475)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(477)
					while((true)){
						HX_STACK_LINE(477)
						if ((!(((_g11 < newWidth))))){
							HX_STACK_LINE(477)
							break;
						}
						HX_STACK_LINE(477)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(479)
						u = (((Float(((x + 0.5))) / Float(newWidth)) * imageWidth) - 0.5);
						HX_STACK_LINE(480)
						v = (((Float(((y + 0.5))) / Float(newHeight)) * imageHeight) - 0.5);
						HX_STACK_LINE(482)
						int _g12 = ::Std_obj::_int(u);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(482)
						sourceX = _g12;
						HX_STACK_LINE(483)
						int _g2 = ::Std_obj::_int(v);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(483)
						sourceY = _g2;
						HX_STACK_LINE(485)
						sourceIndex = ((((sourceY * imageWidth) + sourceX)) * (int)4);
						HX_STACK_LINE(486)
						if (((sourceX < (imageWidth - (int)1)))){
							HX_STACK_LINE(486)
							sourceIndexX = (sourceIndex + (int)4);
						}
						else{
							HX_STACK_LINE(486)
							sourceIndexX = sourceIndex;
						}
						HX_STACK_LINE(487)
						if (((sourceY < (imageHeight - (int)1)))){
							HX_STACK_LINE(487)
							sourceIndexY = (sourceIndex + (imageWidth * (int)4));
						}
						else{
							HX_STACK_LINE(487)
							sourceIndexY = sourceIndex;
						}
						HX_STACK_LINE(488)
						if (((sourceIndexX != sourceIndex))){
							HX_STACK_LINE(488)
							sourceIndexXY = (sourceIndexY + (int)4);
						}
						else{
							HX_STACK_LINE(488)
							sourceIndexXY = sourceIndexY;
						}
						HX_STACK_LINE(490)
						index = ((((y * newWidth) + x)) * (int)4);
						HX_STACK_LINE(492)
						uRatio = (u - sourceX);
						HX_STACK_LINE(493)
						vRatio = (v - sourceY);
						HX_STACK_LINE(494)
						uOpposite = ((int)1 - uRatio);
						HX_STACK_LINE(495)
						vOpposite = ((int)1 - vRatio);
						HX_STACK_LINE(497)
						hx::__ArrayImplRef(newData,index) = ::Std_obj::_int((((((data->__get(sourceIndex) * uOpposite) + (data->__get(sourceIndexX) * uRatio))) * vOpposite) + ((((data->__get(sourceIndexY) * uOpposite) + (data->__get(sourceIndexXY) * uRatio))) * vRatio)));
						HX_STACK_LINE(498)
						hx::__ArrayImplRef(newData,(index + (int)1)) = ::Std_obj::_int((((((data->__get((sourceIndex + (int)1)) * uOpposite) + (data->__get((sourceIndexX + (int)1)) * uRatio))) * vOpposite) + ((((data->__get((sourceIndexY + (int)1)) * uOpposite) + (data->__get((sourceIndexXY + (int)1)) * uRatio))) * vRatio)));
						HX_STACK_LINE(499)
						hx::__ArrayImplRef(newData,(index + (int)2)) = ::Std_obj::_int((((((data->__get((sourceIndex + (int)2)) * uOpposite) + (data->__get((sourceIndexX + (int)2)) * uRatio))) * vOpposite) + ((((data->__get((sourceIndexY + (int)2)) * uOpposite) + (data->__get((sourceIndexXY + (int)2)) * uRatio))) * vRatio)));
						HX_STACK_LINE(503)
						if (((bool((bool((data->__get((sourceIndexX + (int)3)) == (int)0)) || bool((data->__get((sourceIndexY + (int)3)) == (int)0)))) || bool((data->__get((sourceIndexXY + (int)3)) == (int)0))))){
							HX_STACK_LINE(505)
							hx::__ArrayImplRef(newData,(index + (int)3)) = (int)0;
						}
						else{
							HX_STACK_LINE(509)
							hx::__ArrayImplRef(newData,(index + (int)3)) = data->__get((sourceIndex + (int)3));
						}
					}
				}
			}
		}
		HX_STACK_LINE(517)
		buffer->data = newData;
		HX_STACK_LINE(518)
		buffer->width = newWidth;
		HX_STACK_LINE(519)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",524,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(526)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(527)
		::lime::utils::UInt8Array data = image->get_data();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(528)
		::lime::utils::UInt8Array newData = ::lime::utils::UInt8Array_obj::__new(((newWidth * newHeight) * (int)4),null(),null());		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(529)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(529)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(531)
		{
			HX_STACK_LINE(531)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(531)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(531)
			while((true)){
				HX_STACK_LINE(531)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(531)
					break;
				}
				HX_STACK_LINE(531)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(533)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(533)
					while((true)){
						HX_STACK_LINE(533)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(533)
							break;
						}
						HX_STACK_LINE(533)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(535)
						sourceIndex = ((((y * buffer->width) + x)) * (int)4);
						HX_STACK_LINE(536)
						index = ((((y * newWidth) + x)) * (int)4);
						HX_STACK_LINE(538)
						hx::__ArrayImplRef(newData,index) = data->__get(sourceIndex);
						HX_STACK_LINE(539)
						hx::__ArrayImplRef(newData,(index + (int)1)) = data->__get((sourceIndex + (int)1));
						HX_STACK_LINE(540)
						hx::__ArrayImplRef(newData,(index + (int)2)) = data->__get((sourceIndex + (int)2));
						HX_STACK_LINE(541)
						hx::__ArrayImplRef(newData,(index + (int)3)) = data->__get((sourceIndex + (int)3));
					}
				}
			}
		}
		HX_STACK_LINE(547)
		buffer->data = newData;
		HX_STACK_LINE(548)
		buffer->width = newWidth;
		HX_STACK_LINE(549)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",554,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(556)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(557)
		int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(559)
		hx::__ArrayImplRef(data,offset) = hx::UShr(((int(color) & int((int)16711680))),(int)16);
		HX_STACK_LINE(560)
		hx::__ArrayImplRef(data,(offset + (int)1)) = hx::UShr(((int(color) & int((int)65280))),(int)8);
		HX_STACK_LINE(561)
		hx::__ArrayImplRef(data,(offset + (int)2)) = (int(color) & int((int)255));
		HX_STACK_LINE(562)
		if ((image->get_transparent())){
			HX_STACK_LINE(562)
			hx::__ArrayImplRef(data,(offset + (int)3)) = (int)255;
		}
		HX_STACK_LINE(564)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",569,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(571)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(572)
		int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(573)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(573)
		if ((image->get_transparent())){
			HX_STACK_LINE(573)
			a = hx::UShr(((int(color) & int((int)-16777216))),(int)24);
		}
		else{
			HX_STACK_LINE(573)
			a = (int)255;
		}
		HX_STACK_LINE(575)
		if (((  ((image->get_transparent())) ? bool(image->get_premultiplied()) : bool(false) ))){
			HX_STACK_LINE(577)
			int a16 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16->__unsafe_get(a);		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(578)
			hx::__ArrayImplRef(data,offset) = (int(((hx::UShr(((int(color) & int((int)16711680))),(int)16)) * a16)) >> int((int)16));
			HX_STACK_LINE(579)
			hx::__ArrayImplRef(data,(offset + (int)1)) = (int(((hx::UShr(((int(color) & int((int)65280))),(int)8)) * a16)) >> int((int)16));
			HX_STACK_LINE(580)
			hx::__ArrayImplRef(data,(offset + (int)2)) = (int((((int(color) & int((int)255))) * a16)) >> int((int)16));
			HX_STACK_LINE(581)
			hx::__ArrayImplRef(data,(offset + (int)3)) = a;
		}
		else{
			HX_STACK_LINE(585)
			hx::__ArrayImplRef(data,offset) = hx::UShr(((int(color) & int((int)16711680))),(int)16);
			HX_STACK_LINE(586)
			hx::__ArrayImplRef(data,(offset + (int)1)) = hx::UShr(((int(color) & int((int)65280))),(int)8);
			HX_STACK_LINE(587)
			hx::__ArrayImplRef(data,(offset + (int)2)) = (int(color) & int((int)255));
			HX_STACK_LINE(588)
			hx::__ArrayImplRef(data,(offset + (int)3)) = a;
		}
		HX_STACK_LINE(592)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",597,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(599)
		int len = ::Math_obj::round((((int)4 * rect->width) * rect->height));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(603)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(604)
		int offset = ::Math_obj::round(((((int)4 * image->buffer->width) * ((rect->y + image->offsetX))) + (((rect->x + image->offsetY)) * (int)4)));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(605)
		int pos = offset;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(606)
		int boundR = ::Math_obj::round(((int)4 * (((rect->x + rect->width) + image->offsetX))));		HX_STACK_VAR(boundR,"boundR");
		HX_STACK_LINE(607)
		int width = image->buffer->width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(609)
			while((true)){
				HX_STACK_LINE(609)
				if ((!(((_g < len))))){
					HX_STACK_LINE(609)
					break;
				}
				HX_STACK_LINE(609)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(611)
				if (((hx::Mod(pos,((width * (int)4))) > (boundR - (int)1)))){
					HX_STACK_LINE(613)
					hx::AddEq(pos,((width * (int)4) - boundR));
				}
				HX_STACK_LINE(617)
				{
					HX_STACK_LINE(617)
					int val;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(617)
					if (((byteArray->position < byteArray->length))){
						HX_STACK_LINE(617)
						int pos1 = (byteArray->position)++;		HX_STACK_VAR(pos1,"pos1");
						HX_STACK_LINE(617)
						val = byteArray->b->__get(pos1);
					}
					else{
						HX_STACK_LINE(617)
						val = byteArray->ThrowEOFi();
					}
					HX_STACK_LINE(617)
					if (((((int(val) & int((int)128))) != (int)0))){
						HX_STACK_LINE(617)
						hx::__ArrayImplRef(data,pos) = (val - (int)256);
					}
					else{
						HX_STACK_LINE(617)
						hx::__ArrayImplRef(data,pos) = val;
					}
				}
				HX_STACK_LINE(618)
				(pos)++;
			}
		}
		HX_STACK_LINE(622)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,setPixels,(void))

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",627,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(629)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(630)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(630)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(630)
		Float unmultiply;		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(631)
		int length = ::Std_obj::_int((Float(data->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			while((true)){
				HX_STACK_LINE(633)
				if ((!(((_g < length))))){
					HX_STACK_LINE(633)
					break;
				}
				HX_STACK_LINE(633)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(635)
				index = (i * (int)4);
				HX_STACK_LINE(637)
				a = data->__get((index + (int)3));
				HX_STACK_LINE(639)
				if (((a != (int)0))){
					HX_STACK_LINE(641)
					unmultiply = (Float(255.0) / Float(a));
					HX_STACK_LINE(643)
					{
						HX_STACK_LINE(643)
						int index1 = ::Std_obj::_int((data->__get(index) * unmultiply));		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(643)
						hx::__ArrayImplRef(data,index) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index1);
					}
					HX_STACK_LINE(644)
					{
						HX_STACK_LINE(644)
						int index1 = ::Std_obj::_int((data->__get((index + (int)1)) * unmultiply));		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(644)
						hx::__ArrayImplRef(data,(index + (int)1)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index1);
					}
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						int index1 = ::Std_obj::_int((data->__get((index + (int)2)) * unmultiply));		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(645)
						hx::__ArrayImplRef(data,(index + (int)2)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index1);
					}
				}
			}
		}
		HX_STACK_LINE(651)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(652)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

Dynamic ImageDataUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { return __clamp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__alpha16") ) { return __alpha16; }
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
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { return resizeBuffer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { return multiplyAlpha_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { return unmultiplyAlpha_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageDataUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { __clamp=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__alpha16") ) { __alpha16=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDataUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__alpha16"),
	HX_CSTRING("__clamp"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("multiplyAlpha"),
	HX_CSTRING("resize"),
	HX_CSTRING("resizeBuffer"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("unmultiplyAlpha"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__alpha16,"__alpha16");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__clamp,"__clamp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__alpha16,"__alpha16");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__clamp,"__clamp");
};

#endif

Class ImageDataUtil_obj::__mClass;

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.utils.ImageDataUtil"), hx::TCanCast< ImageDataUtil_obj> ,sStaticFields,sMemberFields,
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

void ImageDataUtil_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
