#ifndef INCLUDED_lime_ui__MouseEventManager_MouseEventInfo
#define INCLUDED_lime_ui__MouseEventManager_MouseEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_MouseEventManager,MouseEventInfo)
namespace lime{
namespace ui{
namespace _MouseEventManager{


class HXCPP_CLASS_ATTRIBUTES  MouseEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseEventInfo_obj OBJ_;
		MouseEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MouseEventInfo_obj > __new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MouseEventInfo"); }

		int button;
		int type;
		Float x;
		Float y;
		virtual ::lime::ui::_MouseEventManager::MouseEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _MouseEventManager

#endif /* INCLUDED_lime_ui__MouseEventManager_MouseEventInfo */ 
