#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__KeyEventManager_KeyEventInfo
#include <lime/ui/_KeyEventManager/KeyEventInfo.h>
#endif
namespace lime{
namespace ui{
namespace _KeyEventManager{

Void KeyEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier)
{
HX_STACK_FRAME("lime.ui._KeyEventManager.KeyEventInfo","new",0xc0a0efb5,"lime.ui._KeyEventManager.KeyEventInfo.new","lime/ui/KeyEventManager.hx",218,0x205ebccd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_keyCode,"keyCode")
HX_STACK_ARG(__o_modifier,"modifier")
int keyCode = __o_keyCode.Default(0);
int modifier = __o_modifier.Default(0);
{
	HX_STACK_LINE(220)
	this->type = type;
	HX_STACK_LINE(221)
	this->keyCode = keyCode;
	HX_STACK_LINE(222)
	this->modifier = modifier;
}
;
	return null();
}

//KeyEventInfo_obj::~KeyEventInfo_obj() { }

Dynamic KeyEventInfo_obj::__CreateEmpty() { return  new KeyEventInfo_obj; }
hx::ObjectPtr< KeyEventInfo_obj > KeyEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier)
{  hx::ObjectPtr< KeyEventInfo_obj > result = new KeyEventInfo_obj();
	result->__construct(type,__o_keyCode,__o_modifier);
	return result;}

Dynamic KeyEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEventInfo_obj > result = new KeyEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::lime::ui::_KeyEventManager::KeyEventInfo KeyEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime.ui._KeyEventManager.KeyEventInfo","clone",0x8db671f2,"lime.ui._KeyEventManager.KeyEventInfo.clone","lime/ui/KeyEventManager.hx",229,0x205ebccd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	return ::lime::ui::_KeyEventManager::KeyEventInfo_obj::__new(this->type,this->keyCode,this->modifier);
}


HX_DEFINE_DYNAMIC_FUNC0(KeyEventInfo_obj,clone,return )


KeyEventInfo_obj::KeyEventInfo_obj()
{
}

Dynamic KeyEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modifier") ) { return modifier; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modifier") ) { modifier=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keyCode"));
	outFields->push(HX_CSTRING("modifier"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,keyCode),HX_CSTRING("keyCode")},
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,modifier),HX_CSTRING("modifier")},
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("keyCode"),
	HX_CSTRING("modifier"),
	HX_CSTRING("type"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEventInfo_obj::__mClass,"__mClass");
};

#endif

Class KeyEventInfo_obj::__mClass;

void KeyEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._KeyEventManager.KeyEventInfo"), hx::TCanCast< KeyEventInfo_obj> ,sStaticFields,sMemberFields,
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

void KeyEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace ui
} // end namespace _KeyEventManager
