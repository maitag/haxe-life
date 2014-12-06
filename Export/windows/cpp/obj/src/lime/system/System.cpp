#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > result = new System_obj();
	result->__construct();
	return result;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > result = new System_obj();
	result->__construct();
	return result;}

bool System_obj::disableCFFI;

::haxe::ds::StringMap System_obj::__moduleNames;

::String System_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("lime.system.System","findHaxeLib",0x4637f12d,"lime.system.System.findHaxeLib","lime/system/System.hx",86,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(90)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(92)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(94)
		if (((proc != null()))){
			HX_STACK_LINE(96)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(98)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(100)
				while((true)){
					HX_STACK_LINE(102)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(104)
					::String _g = s.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(104)
					if (((_g != HX_CSTRING("-")))){
						HX_STACK_LINE(106)
						stream->close();
						HX_STACK_LINE(107)
						proc->close();
						HX_STACK_LINE(108)
						::lime::system::System_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(109)
						return s;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(117)
			stream->close();
			HX_STACK_LINE(118)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(126)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,findHaxeLib,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",131,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(137)
		if ((::lime::system::System_obj::disableCFFI)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			Dynamic run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/system/System.hx",139,0x6434b429)
				HX_STACK_ARG(_,"_")
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/System.hx",139,0x6434b429)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(139)
					return _Function_3_1::Block();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(139)
			return ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(143)
		if ((lazy)){
			HX_STACK_LINE(148)
			return ::cpp::Lib_obj::loadLazy(library,method,args);
		}
		HX_STACK_LINE(160)
		if (((::lime::system::System_obj::__moduleNames == null()))){
			HX_STACK_LINE(160)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(160)
			::lime::system::System_obj::__moduleNames = _g;
		}
		HX_STACK_LINE(161)
		if ((::lime::system::System_obj::__moduleNames->exists(library))){
			HX_STACK_LINE(164)
			::String _g1 = ::lime::system::System_obj::__moduleNames->get(library);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			return ::cpp::Lib_obj::load(_g1,method,args);
		}
		HX_STACK_LINE(183)
		::lime::system::System_obj::__moduleNames->set(library,library);
		HX_STACK_LINE(185)
		Dynamic result = ::lime::system::System_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(187)
		if (((result == null()))){
			HX_STACK_LINE(189)
			Dynamic _g2 = ::lime::system::System_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(189)
			result = _g2;
		}
		HX_STACK_LINE(193)
		if (((result == null()))){
			HX_STACK_LINE(195)
			Dynamic _g3 = ::lime::system::System_obj::tryLoad(library,library,method,args);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(195)
			result = _g3;
		}
		HX_STACK_LINE(199)
		if (((result == null()))){
			HX_STACK_LINE(201)
			::String _g4 = ::lime::system::System_obj::sysName().substr((int)7,null()).toLowerCase();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(201)
			::String slash;		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(201)
			if (((_g4 == HX_CSTRING("windows")))){
				HX_STACK_LINE(201)
				slash = HX_CSTRING("\\");
			}
			else{
				HX_STACK_LINE(201)
				slash = HX_CSTRING("/");
			}
			HX_STACK_LINE(202)
			::String haxelib = ::lime::system::System_obj::findHaxeLib(HX_CSTRING("lime"));		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(204)
			if (((haxelib != HX_CSTRING("")))){
				HX_STACK_LINE(206)
				::String _g5 = ::lime::system::System_obj::sysName();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(206)
				::String _g6 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(206)
				::String _g7 = (_g6 + slash);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(206)
				::String _g8 = (_g7 + library);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(206)
				Dynamic _g9 = ::lime::system::System_obj::tryLoad(_g8,library,method,args);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(206)
				result = _g9;
				HX_STACK_LINE(208)
				if (((result == null()))){
					HX_STACK_LINE(210)
					::String _g10 = ::lime::system::System_obj::sysName();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(210)
					::String _g11 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(210)
					::String _g12 = (_g11 + HX_CSTRING("64"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(210)
					::String _g13 = (_g12 + slash);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(210)
					::String _g14 = (_g13 + library);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(210)
					Dynamic _g15 = ::lime::system::System_obj::tryLoad(_g14,library,method,args);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(210)
					result = _g15;
				}
			}
		}
		HX_STACK_LINE(218)
		::String _g16 = ::Std_obj::string(result);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(218)
		::String _g17 = (HX_CSTRING("Result : ") + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(218)
		::lime::system::System_obj::loaderTrace(_g17);
		HX_STACK_LINE(239)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

::String System_obj::sysName( ){
	HX_STACK_FRAME("lime.system.System","sysName",0x424b781f,"lime.system.System.sysName","lime/system/System.hx",244,0x6434b429)
	HX_STACK_LINE(248)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(249)
	return sys_string().Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,sysName,return )

Dynamic System_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("lime.system.System","tryLoad",0x12810b28,"lime.system.System.tryLoad","lime/system/System.hx",260,0x6434b429)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(264)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(267)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(276)
		if (((result != null()))){
			HX_STACK_LINE(278)
			::lime::system::System_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(279)
			::lime::system::System_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(280)
			return result;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(286)
				::lime::system::System_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(292)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,tryLoad,return )

Void System_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("lime.system.System","loaderTrace",0xe7255319,"lime.system.System.loaderTrace","lime/system/System.hx",297,0x6434b429)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(302)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(303)
		Dynamic _g = get_env(HX_CSTRING("OPENFL_LOAD_DEBUG"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		bool debug = (_g != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(308)
		if ((debug)){
			HX_STACK_LINE(310)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loaderTrace,(void))


System_obj::System_obj()
{
}

Dynamic System_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { return disableCFFI; }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic System_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void System_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("disableCFFI"),
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("load"),
	HX_CSTRING("sysName"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("loaderTrace"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
};

#endif

Class System_obj::__mClass;

void System_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.system.System"), hx::TCanCast< System_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void System_obj::__boot()
{
	__moduleNames= null();
}

} // end namespace lime
} // end namespace system
