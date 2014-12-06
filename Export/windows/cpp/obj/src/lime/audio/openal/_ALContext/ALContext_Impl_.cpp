#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_openal__ALContext_ALContext_Impl_
#include <lime/audio/openal/_ALContext/ALContext_Impl_.h>
#endif
namespace lime{
namespace audio{
namespace openal{
namespace _ALContext{

Void ALContext_Impl__obj::__construct()
{
	return null();
}

//ALContext_Impl__obj::~ALContext_Impl__obj() { }

Dynamic ALContext_Impl__obj::__CreateEmpty() { return  new ALContext_Impl__obj; }
hx::ObjectPtr< ALContext_Impl__obj > ALContext_Impl__obj::__new()
{  hx::ObjectPtr< ALContext_Impl__obj > result = new ALContext_Impl__obj();
	result->__construct();
	return result;}

Dynamic ALContext_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALContext_Impl__obj > result = new ALContext_Impl__obj();
	result->__construct();
	return result;}

Dynamic ALContext_Impl__obj::_new( Float handle){
	HX_STACK_FRAME("lime.audio.openal._ALContext.ALContext_Impl_","_new",0x8157c58c,"lime.audio.openal._ALContext.ALContext_Impl_._new","lime/audio/openal/ALContext.hx",13,0x378e7da1)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(13)
	return handle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALContext_Impl__obj,_new,return )


ALContext_Impl__obj::ALContext_Impl__obj()
{
}

Dynamic ALContext_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALContext_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ALContext_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALContext_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALContext_Impl__obj::__mClass,"__mClass");
};

#endif

Class ALContext_Impl__obj::__mClass;

void ALContext_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.openal._ALContext.ALContext_Impl_"), hx::TCanCast< ALContext_Impl__obj> ,sStaticFields,sMemberFields,
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

void ALContext_Impl__obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
} // end namespace _ALContext
