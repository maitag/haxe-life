#ifndef INCLUDED_lime_graphics__Renderer_RenderEventType_Impl_
#define INCLUDED_lime_graphics__Renderer_RenderEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,_Renderer,RenderEventType_Impl_)
namespace lime{
namespace graphics{
namespace _Renderer{


class HXCPP_CLASS_ATTRIBUTES  RenderEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderEventType_Impl__obj OBJ_;
		RenderEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RenderEventType_Impl_"); }

		static int RENDER;
		static int RENDER_CONTEXT_LOST;
		static int RENDER_CONTEXT_RESTORED;
};

} // end namespace lime
} // end namespace graphics
} // end namespace _Renderer

#endif /* INCLUDED_lime_graphics__Renderer_RenderEventType_Impl_ */ 
