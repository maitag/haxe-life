#ifndef INCLUDED_lime_app_Module
#define INCLUDED_lime_app_Module

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Module)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Module_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Module_obj OBJ_;
		Module_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Module_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Module_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Module"); }

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Module */ 
