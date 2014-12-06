#ifndef INCLUDED_lime_system_System
#define INCLUDED_lime_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,system,System)
namespace lime{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  System_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< System_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("System"); }

		static bool disableCFFI;
		static ::haxe::ds::StringMap __moduleNames;
		static ::String findHaxeLib( ::String library);
		static Dynamic findHaxeLib_dyn();

		static Dynamic load( ::String library,::String method,hx::Null< int >  args,hx::Null< bool >  lazy);
		static Dynamic load_dyn();

		static ::String sysName( );
		static Dynamic sysName_dyn();

		static Dynamic tryLoad( ::String name,::String library,::String func,int args);
		static Dynamic tryLoad_dyn();

		static Void loaderTrace( ::String message);
		static Dynamic loaderTrace_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_System */ 
