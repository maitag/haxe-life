#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
namespace lime{
namespace app{

Void Preloader_obj::__construct()
{
HX_STACK_FRAME("lime.app.Preloader","new",0x922e2422,"lime.app.Preloader.new","lime/app/Preloader.hx",34,0xcf198510)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Preloader_obj::~Preloader_obj() { }

Dynamic Preloader_obj::__CreateEmpty() { return  new Preloader_obj; }
hx::ObjectPtr< Preloader_obj > Preloader_obj::__new()
{  hx::ObjectPtr< Preloader_obj > result = new Preloader_obj();
	result->__construct();
	return result;}

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Preloader_obj > result = new Preloader_obj();
	result->__construct();
	return result;}

Void Preloader_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Preloader","create",0x6b66587a,"lime.app.Preloader.create","lime/app/Preloader.hx",58,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(58)
		this->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,create,(void))

Void Preloader_obj::load( Array< ::String > urls,Array< ::String > types){
{
		HX_STACK_FRAME("lime.app.Preloader","load",0x54e69024,"lime.app.Preloader.load","lime/app/Preloader.hx",64,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_ARG(urls,"urls")
		HX_STACK_ARG(types,"types")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,load,(void))

Void Preloader_obj::start( ){
{
		HX_STACK_FRAME("lime.app.Preloader","start",0xfff3bca4,"lime.app.Preloader.start","lime/app/Preloader.hx",209,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		if (((this->onComplete != null()))){
			HX_STACK_LINE(211)
			this->onComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

Void Preloader_obj::update( int loaded,int total){
{
		HX_STACK_FRAME("lime.app.Preloader","update",0x765c7787,"lime.app.Preloader.update","lime/app/Preloader.hx",218,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))


Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
}

Dynamic Preloader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Preloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("complete"));
	outFields->push(HX_CSTRING("onComplete"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_CSTRING("complete")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Preloader_obj,onComplete),HX_CSTRING("onComplete")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("complete"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("create"),
	HX_CSTRING("load"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Preloader"), hx::TCanCast< Preloader_obj> ,sStaticFields,sMemberFields,
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

void Preloader_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
