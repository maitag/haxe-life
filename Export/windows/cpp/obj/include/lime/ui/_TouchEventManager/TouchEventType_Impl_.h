#ifndef INCLUDED_lime_ui__TouchEventManager_TouchEventType_Impl_
#define INCLUDED_lime_ui__TouchEventManager_TouchEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_TouchEventManager,TouchEventType_Impl_)
namespace lime{
namespace ui{
namespace _TouchEventManager{


class HXCPP_CLASS_ATTRIBUTES  TouchEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchEventType_Impl__obj OBJ_;
		TouchEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TouchEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TouchEventType_Impl_"); }

		static int TOUCH_START;
		static int TOUCH_END;
		static int TOUCH_MOVE;
};

} // end namespace lime
} // end namespace ui
} // end namespace _TouchEventManager

#endif /* INCLUDED_lime_ui__TouchEventManager_TouchEventType_Impl_ */ 
