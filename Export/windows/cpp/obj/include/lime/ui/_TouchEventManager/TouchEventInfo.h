#ifndef INCLUDED_lime_ui__TouchEventManager_TouchEventInfo
#define INCLUDED_lime_ui__TouchEventManager_TouchEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_TouchEventManager,TouchEventInfo)
namespace lime{
namespace ui{
namespace _TouchEventManager{


class HXCPP_CLASS_ATTRIBUTES  TouchEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchEventInfo_obj OBJ_;
		TouchEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TouchEventInfo_obj > __new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TouchEventInfo"); }

		int id;
		int type;
		Float x;
		Float y;
		virtual ::lime::ui::_TouchEventManager::TouchEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _TouchEventManager

#endif /* INCLUDED_lime_ui__TouchEventManager_TouchEventInfo */ 
