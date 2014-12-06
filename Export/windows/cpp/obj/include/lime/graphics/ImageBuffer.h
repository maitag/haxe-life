#ifndef INCLUDED_lime_graphics_ImageBuffer
#define INCLUDED_lime_graphics_ImageBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(lime,utils,UInt8Array)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  ImageBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageBuffer_obj OBJ_;
		ImageBuffer_obj();
		Void __construct(::lime::utils::UInt8Array data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ImageBuffer_obj > __new(::lime::utils::UInt8Array data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ImageBuffer"); }

		int bitsPerPixel;
		::lime::utils::UInt8Array data;
		int height;
		bool premultiplied;
		bool transparent;
		int width;
		Dynamic __srcBitmapData;
		Dynamic __srcCanvas;
		Dynamic __srcContext;
		Dynamic __srcCustom;
		Dynamic __srcImage;
		Dynamic __srcImageData;
		virtual ::lime::graphics::ImageBuffer clone( );
		Dynamic clone_dyn();

		virtual Dynamic get_src( );
		Dynamic get_src_dyn();

		virtual Dynamic set_src( Dynamic value);
		Dynamic set_src_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ImageBuffer */ 
