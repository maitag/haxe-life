#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__MouseEventManager_MouseEventInfo
#include <lime/ui/_MouseEventManager/MouseEventInfo.h>
#endif
namespace lime{
namespace ui{
namespace _MouseEventManager{

Void MouseEventInfo_obj::__construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button)
{
HX_STACK_FRAME("lime.ui._MouseEventManager.MouseEventInfo","new",0xef882ba9,"lime.ui._MouseEventManager.MouseEventInfo.new","lime/ui/MouseEventManager.hx",214,0xdc4c1947)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_button,"button")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int button = __o_button.Default(0);
{
	HX_STACK_LINE(216)
	this->type = type;
	HX_STACK_LINE(217)
	this->x = x;
	HX_STACK_LINE(218)
	this->y = y;
	HX_STACK_LINE(219)
	this->button = button;
}
;
	return null();
}

//MouseEventInfo_obj::~MouseEventInfo_obj() { }

Dynamic MouseEventInfo_obj::__CreateEmpty() { return  new MouseEventInfo_obj; }
hx::ObjectPtr< MouseEventInfo_obj > MouseEventInfo_obj::__new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button)
{  hx::ObjectPtr< MouseEventInfo_obj > result = new MouseEventInfo_obj();
	result->__construct(type,__o_x,__o_y,__o_button);
	return result;}

Dynamic MouseEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventInfo_obj > result = new MouseEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::lime::ui::_MouseEventManager::MouseEventInfo MouseEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime.ui._MouseEventManager.MouseEventInfo","clone",0xb1db92e6,"lime.ui._MouseEventManager.MouseEventInfo.clone","lime/ui/MouseEventManager.hx",226,0xdc4c1947)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	return ::lime::ui::_MouseEventManager::MouseEventInfo_obj::__new(this->type,this->x,this->y,this->button);
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEventInfo_obj,clone,return )


MouseEventInfo_obj::MouseEventInfo_obj()
{
}

Dynamic MouseEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,button),HX_CSTRING("button")},
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("button"),
	HX_CSTRING("type"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventInfo_obj::__mClass,"__mClass");
};

#endif

Class MouseEventInfo_obj::__mClass;

void MouseEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._MouseEventManager.MouseEventInfo"), hx::TCanCast< MouseEventInfo_obj> ,sStaticFields,sMemberFields,
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

void MouseEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace ui
} // end namespace _MouseEventManager
