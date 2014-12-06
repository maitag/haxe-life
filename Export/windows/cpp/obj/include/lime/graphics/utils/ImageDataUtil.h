#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#define INCLUDED_lime_graphics_utils_ImageDataUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Std)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS3(lime,graphics,utils,ImageDataUtil)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace graphics{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ImageDataUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageDataUtil_obj OBJ_;
		ImageDataUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ImageDataUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDataUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("ImageDataUtil"); }

		static Array< int > __alpha16;
		static Array< int > __clamp;
		static Void colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix);
		static Dynamic colorTransform_dyn();

		static Void copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel);
		static Dynamic copyChannel_dyn();

		static Void copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  mergeAlpha);
		static Dynamic copyPixels_dyn();

		static Void fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color);
		static Dynamic fillRect_dyn();

		static Void floodFill( ::lime::graphics::Image image,int x,int y,int color);
		static Dynamic floodFill_dyn();

		static int getPixel( ::lime::graphics::Image image,int x,int y);
		static Dynamic getPixel_dyn();

		static int getPixel32( ::lime::graphics::Image image,int x,int y);
		static Dynamic getPixel32_dyn();

		static ::lime::utils::ByteArray getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect);
		static Dynamic getPixels_dyn();

		static Void multiplyAlpha( ::lime::graphics::Image image);
		static Dynamic multiplyAlpha_dyn();

		static Void resize( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resize_dyn();

		static Void resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resizeBuffer_dyn();

		static Void setPixel( ::lime::graphics::Image image,int x,int y,int color);
		static Dynamic setPixel_dyn();

		static Void setPixel32( ::lime::graphics::Image image,int x,int y,int color);
		static Dynamic setPixel32_dyn();

		static Void setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray);
		static Dynamic setPixels_dyn();

		static Void unmultiplyAlpha( ::lime::graphics::Image image);
		static Dynamic unmultiplyAlpha_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace utils

#endif /* INCLUDED_lime_graphics_utils_ImageDataUtil */ 
