#include <hxcpp.h>

#ifndef INCLUDED_lime_app__Application_UpdateEventInfo
#include <lime/app/_Application/UpdateEventInfo.h>
#endif
namespace lime{
namespace app{
namespace _Application{

Void UpdateEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_deltaTime)
{
HX_STACK_FRAME("lime.app._Application.UpdateEventInfo","new",0xb2b91f5a,"lime.app._Application.UpdateEventInfo.new","lime/app/Application.hx",462,0x8bc55476)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_deltaTime,"deltaTime")
int deltaTime = __o_deltaTime.Default(0);
{
	HX_STACK_LINE(464)
	this->type = type;
	HX_STACK_LINE(465)
	this->deltaTime = deltaTime;
}
;
	return null();
}

//UpdateEventInfo_obj::~UpdateEventInfo_obj() { }

Dynamic UpdateEventInfo_obj::__CreateEmpty() { return  new UpdateEventInfo_obj; }
hx::ObjectPtr< UpdateEventInfo_obj > UpdateEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_deltaTime)
{  hx::ObjectPtr< UpdateEventInfo_obj > result = new UpdateEventInfo_obj();
	result->__construct(type,__o_deltaTime);
	return result;}

Dynamic UpdateEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpdateEventInfo_obj > result = new UpdateEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::lime::app::_Application::UpdateEventInfo UpdateEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime.app._Application.UpdateEventInfo","clone",0x59f594d7,"lime.app._Application.UpdateEventInfo.clone","lime/app/Application.hx",472,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(472)
	return ::lime::app::_Application::UpdateEventInfo_obj::__new(this->type,this->deltaTime);
}


HX_DEFINE_DYNAMIC_FUNC0(UpdateEventInfo_obj,clone,return )


UpdateEventInfo_obj::UpdateEventInfo_obj()
{
}

Dynamic UpdateEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return deltaTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpdateEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpdateEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("deltaTime"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UpdateEventInfo_obj,deltaTime),HX_CSTRING("deltaTime")},
	{hx::fsInt,(int)offsetof(UpdateEventInfo_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("deltaTime"),
	HX_CSTRING("type"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpdateEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpdateEventInfo_obj::__mClass,"__mClass");
};

#endif

Class UpdateEventInfo_obj::__mClass;

void UpdateEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app._Application.UpdateEventInfo"), hx::TCanCast< UpdateEventInfo_obj> ,sStaticFields,sMemberFields,
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

void UpdateEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
} // end namespace _Application
