#ifndef INCLUDED_lime_graphics_GlyphRect
#define INCLUDED_lime_graphics_GlyphRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GlyphRect)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  GlyphRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GlyphRect_obj OBJ_;
		GlyphRect_obj();
		Void __construct(Float x,Float y,Float width,Float height,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GlyphRect_obj > __new(Float x,Float y,Float width,Float height,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlyphRect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GlyphRect"); }

		Float x;
		Float y;
		Float width;
		Float height;
		int xOffset;
		int yOffset;
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_GlyphRect */ 
