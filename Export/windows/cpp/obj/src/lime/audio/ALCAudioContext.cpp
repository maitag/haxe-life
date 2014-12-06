#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
namespace lime{
namespace audio{

Void ALCAudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.ALCAudioContext","new",0xf06c6612,"lime.audio.ALCAudioContext.new","lime/audio/ALCAudioContext.hx",9,0x89fdd0e0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->ALL_DEVICES_SPECIFIER = (int)4115;
	HX_STACK_LINE(31)
	this->DEFAULT_ALL_DEVICES_SPECIFIER = (int)4114;
	HX_STACK_LINE(30)
	this->ENUMERATE_ALL_EXT = (int)1;
	HX_STACK_LINE(29)
	this->EXTENSIONS = (int)4102;
	HX_STACK_LINE(28)
	this->DEVICE_SPECIFIER = (int)4101;
	HX_STACK_LINE(27)
	this->DEFAULT_DEVICE_SPECIFIER = (int)4100;
	HX_STACK_LINE(26)
	this->ALL_ATTRIBUTES = (int)4099;
	HX_STACK_LINE(25)
	this->ATTRIBUTES_SIZE = (int)4098;
	HX_STACK_LINE(24)
	this->OUT_OF_MEMORY = (int)40965;
	HX_STACK_LINE(23)
	this->INVALID_VALUE = (int)40964;
	HX_STACK_LINE(22)
	this->INVALID_ENUM = (int)40963;
	HX_STACK_LINE(21)
	this->INVALID_CONTEXT = (int)40962;
	HX_STACK_LINE(20)
	this->INVALID_DEVICE = (int)40961;
	HX_STACK_LINE(19)
	this->NO_ERROR = (int)0;
	HX_STACK_LINE(18)
	this->STEREO_SOURCES = (int)4113;
	HX_STACK_LINE(17)
	this->MONO_SOURCES = (int)4112;
	HX_STACK_LINE(16)
	this->SYNC = (int)4105;
	HX_STACK_LINE(15)
	this->REFRESH = (int)4104;
	HX_STACK_LINE(14)
	this->FREQUENCY = (int)4103;
	HX_STACK_LINE(13)
	this->TRUE = (int)1;
	HX_STACK_LINE(12)
	this->FALSE = (int)0;
}
;
	return null();
}

//ALCAudioContext_obj::~ALCAudioContext_obj() { }

Dynamic ALCAudioContext_obj::__CreateEmpty() { return  new ALCAudioContext_obj; }
hx::ObjectPtr< ALCAudioContext_obj > ALCAudioContext_obj::__new()
{  hx::ObjectPtr< ALCAudioContext_obj > result = new ALCAudioContext_obj();
	result->__construct();
	return result;}

Dynamic ALCAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALCAudioContext_obj > result = new ALCAudioContext_obj();
	result->__construct();
	return result;}

bool ALCAudioContext_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","closeDevice",0x21d89a20,"lime.audio.ALCAudioContext.closeDevice","lime/audio/ALCAudioContext.hx",44,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(44)
	return ::lime::audio::openal::ALC_obj::closeDevice(device);
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,closeDevice,return )

Dynamic ALCAudioContext_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","createContext",0x0ee5d685,"lime.audio.ALCAudioContext.createContext","lime/audio/ALCAudioContext.hx",51,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(51)
	return ::lime::audio::openal::ALC_obj::createContext(device,attrlist);
}


HX_DEFINE_DYNAMIC_FUNC2(ALCAudioContext_obj,createContext,return )

Void ALCAudioContext_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.ALCAudioContext","destroyContext",0xfeb347a3,"lime.audio.ALCAudioContext.destroyContext","lime/audio/ALCAudioContext.hx",58,0x89fdd0e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(58)
		::lime::audio::openal::ALC_obj::destroyContext(context);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,destroyContext,(void))

Dynamic ALCAudioContext_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getContextsDevice",0x919a57c2,"lime.audio.ALCAudioContext.getContextsDevice","lime/audio/ALCAudioContext.hx",65,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(65)
	return ::lime::audio::openal::ALC_obj::getContextsDevice(context);
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getContextsDevice,return )

Dynamic ALCAudioContext_obj::getCurrentContext( ){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getCurrentContext",0x8e88231e,"lime.audio.ALCAudioContext.getCurrentContext","lime/audio/ALCAudioContext.hx",72,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return ::lime::audio::openal::ALC_obj::getCurrentContext();
}


HX_DEFINE_DYNAMIC_FUNC0(ALCAudioContext_obj,getCurrentContext,return )

int ALCAudioContext_obj::getError( Dynamic device){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getError",0xe4326060,"lime.audio.ALCAudioContext.getError","lime/audio/ALCAudioContext.hx",79,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(79)
	return ::lime::audio::openal::ALC_obj::getError(device);
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getError,return )

::String ALCAudioContext_obj::getErrorString( Dynamic device){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getErrorString",0x000b8551,"lime.audio.ALCAudioContext.getErrorString","lime/audio/ALCAudioContext.hx",86,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(86)
	return ::lime::audio::openal::ALC_obj::getErrorString(device);
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getErrorString,return )

Array< int > ALCAudioContext_obj::getIntegerv( Dynamic device,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getIntegerv",0x3d2ea360,"lime.audio.ALCAudioContext.getIntegerv","lime/audio/ALCAudioContext.hx",93,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(93)
		return ::lime::audio::openal::ALC_obj::getIntegerv(device,param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALCAudioContext_obj,getIntegerv,return )

::String ALCAudioContext_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getString",0x87a99939,"lime.audio.ALCAudioContext.getString","lime/audio/ALCAudioContext.hx",100,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(100)
	return ::lime::audio::openal::ALC_obj::getString(device,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALCAudioContext_obj,getString,return )

bool ALCAudioContext_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","makeContextCurrent",0x07220f26,"lime.audio.ALCAudioContext.makeContextCurrent","lime/audio/ALCAudioContext.hx",107,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(107)
	return ::lime::audio::openal::ALC_obj::makeContextCurrent(context);
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,makeContextCurrent,return )

Dynamic ALCAudioContext_obj::openDevice( ::String deviceName){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","openDevice",0xa37bac8e,"lime.audio.ALCAudioContext.openDevice","lime/audio/ALCAudioContext.hx",114,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deviceName,"deviceName")
	HX_STACK_LINE(114)
	return ::lime::audio::openal::ALC_obj::openDevice(deviceName);
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,openDevice,return )

Void ALCAudioContext_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.ALCAudioContext","processContext",0x44a59ace,"lime.audio.ALCAudioContext.processContext","lime/audio/ALCAudioContext.hx",121,0x89fdd0e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(121)
		::lime::audio::openal::ALC_obj::processContext(context);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,processContext,(void))

Void ALCAudioContext_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.ALCAudioContext","suspendContext",0x778c7961,"lime.audio.ALCAudioContext.suspendContext","lime/audio/ALCAudioContext.hx",128,0x89fdd0e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(128)
		::lime::audio::openal::ALC_obj::suspendContext(context);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,suspendContext,(void))


ALCAudioContext_obj::ALCAudioContext_obj()
{
}

Dynamic ALCAudioContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { return SYNC; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { return REFRESH; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"openDevice") ) { return openDevice_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { return closeDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { return MONO_SOURCES; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"createContext") ) { return createContext_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { return STEREO_SOURCES; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { return INVALID_DEVICE; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { return ALL_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { return destroyContext_dyn(); }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"processContext") ) { return processContext_dyn(); }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { return suspendContext_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { return INVALID_CONTEXT; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { return ATTRIBUTES_SIZE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { return DEVICE_SPECIFIER; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { return ENUMERATE_ALL_EXT; }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { return getContextsDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { return getCurrentContext_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { return makeContextCurrent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { return ALL_DEVICES_SPECIFIER; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { return DEFAULT_DEVICE_SPECIFIER; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { return DEFAULT_ALL_DEVICES_SPECIFIER; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALCAudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { SYNC=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { REFRESH=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { MONO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { STEREO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { INVALID_DEVICE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { ALL_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { INVALID_CONTEXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { ATTRIBUTES_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { ENUMERATE_ALL_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { DEFAULT_DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { DEFAULT_ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALCAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("FALSE"));
	outFields->push(HX_CSTRING("TRUE"));
	outFields->push(HX_CSTRING("FREQUENCY"));
	outFields->push(HX_CSTRING("REFRESH"));
	outFields->push(HX_CSTRING("SYNC"));
	outFields->push(HX_CSTRING("MONO_SOURCES"));
	outFields->push(HX_CSTRING("STEREO_SOURCES"));
	outFields->push(HX_CSTRING("NO_ERROR"));
	outFields->push(HX_CSTRING("INVALID_DEVICE"));
	outFields->push(HX_CSTRING("INVALID_CONTEXT"));
	outFields->push(HX_CSTRING("INVALID_ENUM"));
	outFields->push(HX_CSTRING("INVALID_VALUE"));
	outFields->push(HX_CSTRING("OUT_OF_MEMORY"));
	outFields->push(HX_CSTRING("ATTRIBUTES_SIZE"));
	outFields->push(HX_CSTRING("ALL_ATTRIBUTES"));
	outFields->push(HX_CSTRING("DEFAULT_DEVICE_SPECIFIER"));
	outFields->push(HX_CSTRING("DEVICE_SPECIFIER"));
	outFields->push(HX_CSTRING("EXTENSIONS"));
	outFields->push(HX_CSTRING("ENUMERATE_ALL_EXT"));
	outFields->push(HX_CSTRING("DEFAULT_ALL_DEVICES_SPECIFIER"));
	outFields->push(HX_CSTRING("ALL_DEVICES_SPECIFIER"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,FALSE),HX_CSTRING("FALSE")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,TRUE),HX_CSTRING("TRUE")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,FREQUENCY),HX_CSTRING("FREQUENCY")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,REFRESH),HX_CSTRING("REFRESH")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,SYNC),HX_CSTRING("SYNC")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,MONO_SOURCES),HX_CSTRING("MONO_SOURCES")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,STEREO_SOURCES),HX_CSTRING("STEREO_SOURCES")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,NO_ERROR),HX_CSTRING("NO_ERROR")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_DEVICE),HX_CSTRING("INVALID_DEVICE")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_CONTEXT),HX_CSTRING("INVALID_CONTEXT")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_ENUM),HX_CSTRING("INVALID_ENUM")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_VALUE),HX_CSTRING("INVALID_VALUE")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,OUT_OF_MEMORY),HX_CSTRING("OUT_OF_MEMORY")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ATTRIBUTES_SIZE),HX_CSTRING("ATTRIBUTES_SIZE")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ALL_ATTRIBUTES),HX_CSTRING("ALL_ATTRIBUTES")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEFAULT_DEVICE_SPECIFIER),HX_CSTRING("DEFAULT_DEVICE_SPECIFIER")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEVICE_SPECIFIER),HX_CSTRING("DEVICE_SPECIFIER")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,EXTENSIONS),HX_CSTRING("EXTENSIONS")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ENUMERATE_ALL_EXT),HX_CSTRING("ENUMERATE_ALL_EXT")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEFAULT_ALL_DEVICES_SPECIFIER),HX_CSTRING("DEFAULT_ALL_DEVICES_SPECIFIER")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ALL_DEVICES_SPECIFIER),HX_CSTRING("ALL_DEVICES_SPECIFIER")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FALSE"),
	HX_CSTRING("TRUE"),
	HX_CSTRING("FREQUENCY"),
	HX_CSTRING("REFRESH"),
	HX_CSTRING("SYNC"),
	HX_CSTRING("MONO_SOURCES"),
	HX_CSTRING("STEREO_SOURCES"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_DEVICE"),
	HX_CSTRING("INVALID_CONTEXT"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("ATTRIBUTES_SIZE"),
	HX_CSTRING("ALL_ATTRIBUTES"),
	HX_CSTRING("DEFAULT_DEVICE_SPECIFIER"),
	HX_CSTRING("DEVICE_SPECIFIER"),
	HX_CSTRING("EXTENSIONS"),
	HX_CSTRING("ENUMERATE_ALL_EXT"),
	HX_CSTRING("DEFAULT_ALL_DEVICES_SPECIFIER"),
	HX_CSTRING("ALL_DEVICES_SPECIFIER"),
	HX_CSTRING("closeDevice"),
	HX_CSTRING("createContext"),
	HX_CSTRING("destroyContext"),
	HX_CSTRING("getContextsDevice"),
	HX_CSTRING("getCurrentContext"),
	HX_CSTRING("getError"),
	HX_CSTRING("getErrorString"),
	HX_CSTRING("getIntegerv"),
	HX_CSTRING("getString"),
	HX_CSTRING("makeContextCurrent"),
	HX_CSTRING("openDevice"),
	HX_CSTRING("processContext"),
	HX_CSTRING("suspendContext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALCAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALCAudioContext_obj::__mClass,"__mClass");
};

#endif

Class ALCAudioContext_obj::__mClass;

void ALCAudioContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.ALCAudioContext"), hx::TCanCast< ALCAudioContext_obj> ,sStaticFields,sMemberFields,
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

void ALCAudioContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
