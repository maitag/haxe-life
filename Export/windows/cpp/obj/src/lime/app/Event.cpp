#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
namespace lime{
namespace app{

Void Event_obj::__construct()
{
HX_STACK_FRAME("lime.app.Event","new",0xaf38c4c6,"lime.app.Event.new","lime/app/Event.hx",17,0xbda45bec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->listeners = _g;
	HX_STACK_LINE(20)
	Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(20)
	this->priorities = _g1;
	HX_STACK_LINE(21)
	Array< bool > _g2 = Array_obj< bool >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(21)
	this->repeat = _g2;
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new()
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct();
	return result;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct();
	return result;}

Void Event_obj::add( Dynamic listener,hx::Null< bool >  __o_once,hx::Null< int >  __o_priority){
bool once = __o_once.Default(false);
int priority = __o_priority.Default(0);
	HX_STACK_FRAME("lime.app.Event","add",0xaf2ee687,"lime.app.Event.add","lime/app/Event.hx",26,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(once,"once")
	HX_STACK_ARG(priority,"priority")
{
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			int _g = this->priorities->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(28)
			while((true)){
				HX_STACK_LINE(28)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(28)
					break;
				}
				HX_STACK_LINE(28)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(30)
				if (((priority > this->priorities->__get(i)))){
					HX_STACK_LINE(32)
					this->listeners->__Field(HX_CSTRING("insert"),true)(i,listener);
					HX_STACK_LINE(33)
					this->priorities->insert(i,priority);
					HX_STACK_LINE(34)
					this->repeat->insert(i,!(once));
					HX_STACK_LINE(35)
					return null();
				}
			}
		}
		HX_STACK_LINE(41)
		this->listeners->__Field(HX_CSTRING("push"),true)(listener);
		HX_STACK_LINE(42)
		this->priorities->push(priority);
		HX_STACK_LINE(43)
		this->repeat->push(!(once));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Event_obj,add,(void))

Void Event_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("lime.app.Event","remove",0x479feb9e,"lime.app.Event.remove","lime/app/Event.hx",79,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(81)
		int index = this->listeners->__Field(HX_CSTRING("indexOf"),true)(listener,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(83)
		if (((index > (int)-1))){
			HX_STACK_LINE(85)
			this->listeners->__Field(HX_CSTRING("splice"),true)(index,(int)1);
			HX_STACK_LINE(86)
			this->priorities->splice(index,(int)1);
			HX_STACK_LINE(87)
			this->repeat->splice(index,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,remove,(void))


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(priorities,"priorities");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(priorities,"priorities");
}

Dynamic Event_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorities") ) { return priorities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorities") ) { priorities=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("listeners"));
	outFields->push(HX_CSTRING("repeat"));
	outFields->push(HX_CSTRING("priorities"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,listeners),HX_CSTRING("listeners")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Event_obj,repeat),HX_CSTRING("repeat")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Event_obj,priorities),HX_CSTRING("priorities")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("listeners"),
	HX_CSTRING("repeat"),
	HX_CSTRING("priorities"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};

#endif

Class Event_obj::__mClass;

void Event_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Event"), hx::TCanCast< Event_obj> ,sStaticFields,sMemberFields,
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

void Event_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
