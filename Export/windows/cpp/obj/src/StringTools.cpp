#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > result = new StringTools_obj();
	result->__construct();
	return result;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > result = new StringTools_obj();
	result->__construct();
	return result;}

::String StringTools_obj::urlDecode( ::String s){
	HX_STACK_FRAME("StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","D:\\Programme\\coding\\haxe\\haxe\\std/StringTools.hx",71,0x69647f6c)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(71)
	return s.__URLDecode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith( ::String s,::String start){
	HX_STACK_FRAME("StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","D:\\Programme\\coding\\haxe\\haxe\\std/StringTools.hx",133,0x69647f6c)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(start,"start")
	HX_STACK_LINE(133)
	if (((s.length >= start.length))){
		HX_STACK_LINE(133)
		::String _g = s.substr((int)0,start.length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		return (_g == start);
	}
	else{
		HX_STACK_LINE(133)
		return false;
	}
	HX_STACK_LINE(133)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

::String StringTools_obj::hex( int n,Dynamic digits){
	HX_STACK_FRAME("StringTools","hex",0xd91debd7,"StringTools.hex","D:\\Programme\\coding\\haxe\\haxe\\std/StringTools.hx",313,0x69647f6c)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(digits,"digits")
	HX_STACK_LINE(319)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(320)
	::String hexChars = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(hexChars,"hexChars");
	HX_STACK_LINE(321)
	while((true)){
		HX_STACK_LINE(322)
		::String _g = hexChars.charAt((int(n) & int((int)15)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(322)
		::String _g1 = (_g + s);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(322)
		s = _g1;
		HX_STACK_LINE(323)
		hx::UShrEq(n,(int)4);
		HX_STACK_LINE(321)
		if ((!(((n > (int)0))))){
			HX_STACK_LINE(321)
			break;
		}
	}
	HX_STACK_LINE(326)
	if (((digits != null()))){
		HX_STACK_LINE(327)
		while((true)){
			HX_STACK_LINE(327)
			if ((!(((s.length < digits))))){
				HX_STACK_LINE(327)
				break;
			}
			HX_STACK_LINE(328)
			s = (HX_CSTRING("0") + s);
		}
	}
	HX_STACK_LINE(329)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

Dynamic StringTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlDecode") ) { return urlDecode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { return startsWith_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StringTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("urlDecode"),
	HX_CSTRING("startsWith"),
	HX_CSTRING("hex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

Class StringTools_obj::__mClass;

void StringTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StringTools"), hx::TCanCast< StringTools_obj> ,sStaticFields,sMemberFields,
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

void StringTools_obj::__boot()
{
}

