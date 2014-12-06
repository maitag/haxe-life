#ifndef INCLUDED_lime_graphics_Image
#define INCLUDED_lime_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,BaseCode)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS2(lime,graphics,ImageType)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(lime,utils,UInt8Array)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Image_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Image_obj > __new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Image"); }

		::lime::graphics::ImageBuffer buffer;
		bool dirty;
		int height;
		int offsetX;
		int offsetY;
		::lime::math::Rectangle rect;
		::lime::graphics::ImageType type;
		int width;
		virtual ::lime::graphics::Image clone( );
		Dynamic clone_dyn();

		virtual Void colorTransform( ::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix);
		Dynamic colorTransform_dyn();

		virtual Void copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel);
		Dynamic copyChannel_dyn();

		virtual Void copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  mergeAlpha);
		Dynamic copyPixels_dyn();

		virtual ::lime::utils::ByteArray encode( ::String format,hx::Null< int >  quality);
		Dynamic encode_dyn();

		virtual Void fillRect( ::lime::math::Rectangle rect,int color);
		Dynamic fillRect_dyn();

		virtual Void floodFill( int x,int y,int color);
		Dynamic floodFill_dyn();

		virtual int getPixel( int x,int y);
		Dynamic getPixel_dyn();

		virtual int getPixel32( int x,int y);
		Dynamic getPixel32_dyn();

		virtual ::lime::utils::ByteArray getPixels( ::lime::math::Rectangle rect);
		Dynamic getPixels_dyn();

		virtual Void resize( int newWidth,int newHeight);
		Dynamic resize_dyn();

		virtual Void setPixel( int x,int y,int color);
		Dynamic setPixel_dyn();

		virtual Void setPixel32( int x,int y,int color);
		Dynamic setPixel32_dyn();

		virtual Void setPixels( ::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray);
		Dynamic setPixels_dyn();

		virtual ::lime::math::Rectangle __clipRect( ::lime::math::Rectangle r);
		Dynamic __clipRect_dyn();

		virtual Void __fromBase64( ::String base64,::String type,Dynamic onload);
		Dynamic __fromBase64_dyn();

		virtual Void __fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload);
		Dynamic __fromBytes_dyn();

		virtual Void __fromFile( ::String path,Dynamic onload,Dynamic onerror);
		Dynamic __fromFile_dyn();

		virtual Void __fromImageBuffer( ::lime::graphics::ImageBuffer buffer);
		Dynamic __fromImageBuffer_dyn();

		virtual ::lime::utils::UInt8Array get_data( );
		Dynamic get_data_dyn();

		virtual ::lime::utils::UInt8Array set_data( ::lime::utils::UInt8Array value);
		Dynamic set_data_dyn();

		virtual bool get_powerOfTwo( );
		Dynamic get_powerOfTwo_dyn();

		virtual bool set_powerOfTwo( bool value);
		Dynamic set_powerOfTwo_dyn();

		virtual bool get_premultiplied( );
		Dynamic get_premultiplied_dyn();

		virtual bool set_premultiplied( bool value);
		Dynamic set_premultiplied_dyn();

		virtual ::lime::math::Rectangle get_rect( );
		Dynamic get_rect_dyn();

		virtual Dynamic get_src( );
		Dynamic get_src_dyn();

		virtual Dynamic set_src( Dynamic value);
		Dynamic set_src_dyn();

		virtual bool get_transparent( );
		Dynamic get_transparent_dyn();

		virtual bool set_transparent( bool value);
		Dynamic set_transparent_dyn();

		static ::String __base64Chars;
		static ::haxe::crypto::BaseCode __base64Encoder;
		static ::lime::graphics::Image fromBase64( ::String base64,::String type,Dynamic onload);
		static Dynamic fromBase64_dyn();

		static ::lime::graphics::Image fromBitmapData( Dynamic bitmapData);
		static Dynamic fromBitmapData_dyn();

		static ::lime::graphics::Image fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload);
		static Dynamic fromBytes_dyn();

		static ::lime::graphics::Image fromCanvas( Dynamic canvas);
		static Dynamic fromCanvas_dyn();

		static ::lime::graphics::Image fromFile( ::String path,Dynamic onload,Dynamic onerror);
		static Dynamic fromFile_dyn();

		static ::lime::graphics::Image fromImageElement( Dynamic image);
		static Dynamic fromImageElement_dyn();

		static ::String __base64Encode( ::lime::utils::ByteArray bytes);
		static Dynamic __base64Encode_dyn();

		static bool __isJPG( ::lime::utils::ByteArray bytes);
		static Dynamic __isJPG_dyn();

		static bool __isPNG( ::lime::utils::ByteArray bytes);
		static Dynamic __isPNG_dyn();

		static bool __isGIF( ::lime::utils::ByteArray bytes);
		static Dynamic __isGIF_dyn();

		static Dynamic lime_image_encode;
		static Dynamic &lime_image_encode_dyn() { return lime_image_encode;}
		static Dynamic lime_image_load;
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_Image */ 
