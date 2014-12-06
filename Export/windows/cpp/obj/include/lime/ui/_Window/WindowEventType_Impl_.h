#ifndef INCLUDED_lime_ui__Window_WindowEventType_Impl_
#define INCLUDED_lime_ui__Window_WindowEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_Window,WindowEventType_Impl_)
namespace lime{
namespace ui{
namespace _Window{


class HXCPP_CLASS_ATTRIBUTES  WindowEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowEventType_Impl__obj OBJ_;
		WindowEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WindowEventType_Impl_"); }

		static int WINDOW_ACTIVATE;
		static int WINDOW_CLOSE;
		static int WINDOW_DEACTIVATE;
		static int WINDOW_FOCUS_IN;
		static int WINDOW_FOCUS_OUT;
		static int WINDOW_MOVE;
		static int WINDOW_RESIZE;
};

} // end namespace lime
} // end namespace ui
} // end namespace _Window

#endif /* INCLUDED_lime_ui__Window_WindowEventType_Impl_ */ 
