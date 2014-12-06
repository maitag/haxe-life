#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
namespace haxe{
namespace crypto{

Void BaseCode_obj::__construct()
{
	return null();
}

//BaseCode_obj::~BaseCode_obj() { }

Dynamic BaseCode_obj::__CreateEmpty() { return  new BaseCode_obj; }
hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__new()
{  hx::ObjectPtr< BaseCode_obj > result = new BaseCode_obj();
	result->__construct();
	return result;}

Dynamic BaseCode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseCode_obj > result = new BaseCode_obj();
	result->__construct();
	return result;}


BaseCode_obj::BaseCode_obj()
{
}

Dynamic BaseCode_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BaseCode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseCode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#endif

Class BaseCode_obj::__mClass;

void BaseCode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.crypto.BaseCode"), hx::TCanCast< BaseCode_obj> ,sStaticFields,sMemberFields,
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

void BaseCode_obj::__boot()
{
}

} // end namespace haxe
} // end namespace crypto
