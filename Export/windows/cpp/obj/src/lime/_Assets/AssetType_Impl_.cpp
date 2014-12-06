#include <hxcpp.h>

#ifndef INCLUDED_lime__Assets_AssetType_Impl_
#include <lime/_Assets/AssetType_Impl_.h>
#endif
namespace lime{
namespace _Assets{

Void AssetType_Impl__obj::__construct()
{
	return null();
}

//AssetType_Impl__obj::~AssetType_Impl__obj() { }

Dynamic AssetType_Impl__obj::__CreateEmpty() { return  new AssetType_Impl__obj; }
hx::ObjectPtr< AssetType_Impl__obj > AssetType_Impl__obj::__new()
{  hx::ObjectPtr< AssetType_Impl__obj > result = new AssetType_Impl__obj();
	result->__construct();
	return result;}

Dynamic AssetType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetType_Impl__obj > result = new AssetType_Impl__obj();
	result->__construct();
	return result;}

::String AssetType_Impl__obj::BINARY;

::String AssetType_Impl__obj::FONT;

::String AssetType_Impl__obj::IMAGE;

::String AssetType_Impl__obj::MUSIC;

::String AssetType_Impl__obj::SOUND;

::String AssetType_Impl__obj::TEMPLATE;

::String AssetType_Impl__obj::TEXT;


AssetType_Impl__obj::AssetType_Impl__obj()
{
}

Dynamic AssetType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BINARY"),
	HX_CSTRING("FONT"),
	HX_CSTRING("IMAGE"),
	HX_CSTRING("MUSIC"),
	HX_CSTRING("SOUND"),
	HX_CSTRING("TEMPLATE"),
	HX_CSTRING("TEXT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::MUSIC,"MUSIC");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::SOUND,"SOUND");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::TEMPLATE,"TEMPLATE");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::TEXT,"TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::MUSIC,"MUSIC");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::SOUND,"SOUND");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::TEMPLATE,"TEMPLATE");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::TEXT,"TEXT");
};

#endif

Class AssetType_Impl__obj::__mClass;

void AssetType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._Assets.AssetType_Impl_"), hx::TCanCast< AssetType_Impl__obj> ,sStaticFields,sMemberFields,
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

void AssetType_Impl__obj::__boot()
{
	BINARY= HX_CSTRING("BINARY");
	FONT= HX_CSTRING("FONT");
	IMAGE= HX_CSTRING("IMAGE");
	MUSIC= HX_CSTRING("MUSIC");
	SOUND= HX_CSTRING("SOUND");
	TEMPLATE= HX_CSTRING("TEMPLATE");
	TEXT= HX_CSTRING("TEXT");
}

} // end namespace lime
} // end namespace _Assets
