#ifndef INCLUDED_lime_graphics_Font
#define INCLUDED_lime_graphics_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Font)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(::String fontName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Font_obj > __new(::String fontName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Font"); }

		::String fontName;
		::lime::graphics::Image image;
		::haxe::ds::IntMap glyphs;
		::String __fontPath;
		Dynamic __handle;
		virtual ::lime::graphics::ImageBuffer createImage( );
		Dynamic createImage_dyn();

		virtual Dynamic decompose( );
		Dynamic decompose_dyn();

		virtual Void loadRange( int size,int start,int end);
		Dynamic loadRange_dyn();

		virtual Void loadGlyphs( int size,::String glyphs);
		Dynamic loadGlyphs_dyn();

		virtual Void __fromFile( ::String path);
		Dynamic __fromFile_dyn();

		static ::lime::graphics::Font fromBytes( ::lime::utils::ByteArray bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::graphics::Font fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static Dynamic lime_font_get_family_name;
		static Dynamic &lime_font_get_family_name_dyn() { return lime_font_get_family_name;}
		static Dynamic lime_font_load;
		static Dynamic &lime_font_load_dyn() { return lime_font_load;}
		static Dynamic lime_font_load_glyphs;
		static Dynamic &lime_font_load_glyphs_dyn() { return lime_font_load_glyphs;}
		static Dynamic lime_font_load_range;
		static Dynamic &lime_font_load_range_dyn() { return lime_font_load_range;}
		static Dynamic lime_font_create_image;
		static Dynamic &lime_font_create_image_dyn() { return lime_font_create_image;}
		static Dynamic lime_font_outline_decompose;
		static Dynamic &lime_font_outline_decompose_dyn() { return lime_font_outline_decompose;}
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_Font */ 
