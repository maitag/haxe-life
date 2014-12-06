#ifndef INCLUDED_lime_ui__KeyEventManager_KeyEventInfo
#define INCLUDED_lime_ui__KeyEventManager_KeyEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_KeyEventManager,KeyEventInfo)
namespace lime{
namespace ui{
namespace _KeyEventManager{


class HXCPP_CLASS_ATTRIBUTES  KeyEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEventInfo_obj OBJ_;
		KeyEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("KeyEventInfo"); }

		int keyCode;
		int modifier;
		int type;
		virtual ::lime::ui::_KeyEventManager::KeyEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _KeyEventManager

#endif /* INCLUDED_lime_ui__KeyEventManager_KeyEventInfo */ 
