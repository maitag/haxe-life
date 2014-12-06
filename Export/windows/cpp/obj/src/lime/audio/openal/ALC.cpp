#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
#ifndef INCLUDED_lime_audio_openal__ALContext_ALContext_Impl_
#include <lime/audio/openal/_ALContext/ALContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_audio_openal__ALDevice_ALDevice_Impl_
#include <lime/audio/openal/_ALDevice/ALDevice_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace audio{
namespace openal{

Void ALC_obj::__construct()
{
	return null();
}

//ALC_obj::~ALC_obj() { }

Dynamic ALC_obj::__CreateEmpty() { return  new ALC_obj; }
hx::ObjectPtr< ALC_obj > ALC_obj::__new()
{  hx::ObjectPtr< ALC_obj > result = new ALC_obj();
	result->__construct();
	return result;}

Dynamic ALC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALC_obj > result = new ALC_obj();
	result->__construct();
	return result;}

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;

bool ALC_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","closeDevice",0xea953e50,"lime.audio.openal.ALC.closeDevice","lime/audio/openal/ALC.hx",36,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(36)
	return ::lime::audio::openal::ALC_obj::lime_alc_close_device(device);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

Dynamic ALC_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("lime.audio.openal.ALC","createContext",0xfb37e6b5,"lime.audio.openal.ALC.createContext","lime/audio/openal/ALC.hx",44,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(47)
	Float handle = ::lime::audio::openal::ALC_obj::lime_alc_create_context(device,attrlist);		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(49)
	if (((handle != (int)0))){
		HX_STACK_LINE(51)
		return ::lime::audio::openal::_ALContext::ALContext_Impl__obj::_new(handle);
	}
	HX_STACK_LINE(56)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

Void ALC_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","destroyContext",0xda2f6173,"lime.audio.openal.ALC.destroyContext","lime/audio/openal/ALC.hx",64,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(64)
		::lime::audio::openal::ALC_obj::lime_alc_destroy_context(context);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

Dynamic ALC_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","getContextsDevice",0x1b703ff2,"lime.audio.openal.ALC.getContextsDevice","lime/audio/openal/ALC.hx",70,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(73)
	Float handle = ::lime::audio::openal::ALC_obj::lime_alc_get_contexts_device(context);		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(75)
	if (((handle != (int)0))){
		HX_STACK_LINE(77)
		return ::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::_new(handle);
	}
	HX_STACK_LINE(82)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

Dynamic ALC_obj::getCurrentContext( ){
	HX_STACK_FRAME("lime.audio.openal.ALC","getCurrentContext",0x185e0b4e,"lime.audio.openal.ALC.getCurrentContext","lime/audio/openal/ALC.hx",87,0x52b9922d)
	HX_STACK_LINE(90)
	Float handle = ::lime::audio::openal::ALC_obj::lime_alc_get_current_context();		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(92)
	if (((handle != (int)0))){
		HX_STACK_LINE(94)
		return ::lime::audio::openal::_ALContext::ALContext_Impl__obj::_new(handle);
	}
	HX_STACK_LINE(99)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

int ALC_obj::getError( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","getError",0xbf7a3e30,"lime.audio.openal.ALC.getError","lime/audio/openal/ALC.hx",107,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(107)
	return ::lime::audio::openal::ALC_obj::lime_alc_get_error(device);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

::String ALC_obj::getErrorString( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","getErrorString",0xdb879f21,"lime.audio.openal.ALC.getErrorString","lime/audio/openal/ALC.hx",117,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(117)
	int _g = ::lime::audio::openal::ALC_obj::getError(device);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(117)
	switch( (int)(_g)){
		case (int)40961: {
			HX_STACK_LINE(119)
			return HX_CSTRING("INVALID_DEVICE: Invalid device (or no device?)");
		}
		;break;
		case (int)40962: {
			HX_STACK_LINE(120)
			return HX_CSTRING("INVALID_CONTEXT: Invalid context (or no context?)");
		}
		;break;
		case (int)40963: {
			HX_STACK_LINE(121)
			return HX_CSTRING("INVALID_ENUM: Invalid enum value");
		}
		;break;
		case (int)40964: {
			HX_STACK_LINE(122)
			return HX_CSTRING("INVALID_VALUE: Invalid param value");
		}
		;break;
		case (int)40965: {
			HX_STACK_LINE(123)
			return HX_CSTRING("OUT_OF_MEMORY: OpenAL has run out of memory");
		}
		;break;
		default: {
			HX_STACK_LINE(124)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(117)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getErrorString,return )

Array< int > ALC_obj::getIntegerv( Dynamic device,int param,int size){
	HX_STACK_FRAME("lime.audio.openal.ALC","getIntegerv",0x05eb4790,"lime.audio.openal.ALC.getIntegerv","lime/audio/openal/ALC.hx",134,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(134)
	return ::lime::audio::openal::ALC_obj::lime_alc_get_integerv(device,param,size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,getIntegerv,return )

::String ALC_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("lime.audio.openal.ALC","getString",0x8b43d169,"lime.audio.openal.ALC.getString","lime/audio/openal/ALC.hx",145,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(145)
	return ::lime::audio::openal::ALC_obj::lime_alc_get_string(device,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

bool ALC_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","makeContextCurrent",0x187750f6,"lime.audio.openal.ALC.makeContextCurrent","lime/audio/openal/ALC.hx",156,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(156)
	return ::lime::audio::openal::ALC_obj::lime_alc_make_context_current(context);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

Dynamic ALC_obj::openDevice( ::String deviceName){
	HX_STACK_FRAME("lime.audio.openal.ALC","openDevice",0xc6d29e5e,"lime.audio.openal.ALC.openDevice","lime/audio/openal/ALC.hx",164,0x52b9922d)
	HX_STACK_ARG(deviceName,"deviceName")
	HX_STACK_LINE(167)
	Float handle = ::lime::audio::openal::ALC_obj::lime_alc_open_device(deviceName);		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(169)
	if (((handle != (int)0))){
		HX_STACK_LINE(171)
		return ::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::_new(handle);
	}
	HX_STACK_LINE(176)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

Void ALC_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","processContext",0x2021b49e,"lime.audio.openal.ALC.processContext","lime/audio/openal/ALC.hx",184,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(184)
		::lime::audio::openal::ALC_obj::lime_alc_process_context(context);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

Void ALC_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","suspendContext",0x53089331,"lime.audio.openal.ALC.suspendContext","lime/audio/openal/ALC.hx",193,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(193)
		::lime::audio::openal::ALC_obj::lime_alc_suspend_context(context);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))

Dynamic ALC_obj::lime_alc_close_device;

Dynamic ALC_obj::lime_alc_create_context;

Dynamic ALC_obj::lime_alc_destroy_context;

Dynamic ALC_obj::lime_alc_get_contexts_device;

Dynamic ALC_obj::lime_alc_get_current_context;

Dynamic ALC_obj::lime_alc_get_error;

Dynamic ALC_obj::lime_alc_get_integerv;

Dynamic ALC_obj::lime_alc_get_string;

Dynamic ALC_obj::lime_alc_make_context_current;

Dynamic ALC_obj::lime_alc_open_device;

Dynamic ALC_obj::lime_alc_process_context;

Dynamic ALC_obj::lime_alc_suspend_context;


ALC_obj::ALC_obj()
{
}

Dynamic ALC_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"openDevice") ) { return openDevice_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { return closeDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { return createContext_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyContext") ) { return destroyContext_dyn(); }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"processContext") ) { return processContext_dyn(); }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { return suspendContext_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { return getContextsDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { return getCurrentContext_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { return makeContextCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_alc_get_error") ) { return lime_alc_get_error; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_alc_get_string") ) { return lime_alc_get_string; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_alc_open_device") ) { return lime_alc_open_device; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_alc_close_device") ) { return lime_alc_close_device; }
		if (HX_FIELD_EQ(inName,"lime_alc_get_integerv") ) { return lime_alc_get_integerv; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_alc_create_context") ) { return lime_alc_create_context; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_alc_destroy_context") ) { return lime_alc_destroy_context; }
		if (HX_FIELD_EQ(inName,"lime_alc_process_context") ) { return lime_alc_process_context; }
		if (HX_FIELD_EQ(inName,"lime_alc_suspend_context") ) { return lime_alc_suspend_context; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_alc_get_contexts_device") ) { return lime_alc_get_contexts_device; }
		if (HX_FIELD_EQ(inName,"lime_alc_get_current_context") ) { return lime_alc_get_current_context; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_alc_make_context_current") ) { return lime_alc_make_context_current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALC_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_alc_get_error") ) { lime_alc_get_error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_alc_get_string") ) { lime_alc_get_string=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_alc_open_device") ) { lime_alc_open_device=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_alc_close_device") ) { lime_alc_close_device=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_alc_get_integerv") ) { lime_alc_get_integerv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_alc_create_context") ) { lime_alc_create_context=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_alc_destroy_context") ) { lime_alc_destroy_context=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_alc_process_context") ) { lime_alc_process_context=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_alc_suspend_context") ) { lime_alc_suspend_context=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_alc_get_contexts_device") ) { lime_alc_get_contexts_device=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_alc_get_current_context") ) { lime_alc_get_current_context=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_alc_make_context_current") ) { lime_alc_make_context_current=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALC_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
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
	HX_CSTRING("lime_alc_close_device"),
	HX_CSTRING("lime_alc_create_context"),
	HX_CSTRING("lime_alc_destroy_context"),
	HX_CSTRING("lime_alc_get_contexts_device"),
	HX_CSTRING("lime_alc_get_current_context"),
	HX_CSTRING("lime_alc_get_error"),
	HX_CSTRING("lime_alc_get_integerv"),
	HX_CSTRING("lime_alc_get_string"),
	HX_CSTRING("lime_alc_make_context_current"),
	HX_CSTRING("lime_alc_open_device"),
	HX_CSTRING("lime_alc_process_context"),
	HX_CSTRING("lime_alc_suspend_context"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_close_device,"lime_alc_close_device");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_create_context,"lime_alc_create_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_destroy_context,"lime_alc_destroy_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_contexts_device,"lime_alc_get_contexts_device");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_current_context,"lime_alc_get_current_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_error,"lime_alc_get_error");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_integerv,"lime_alc_get_integerv");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_string,"lime_alc_get_string");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_make_context_current,"lime_alc_make_context_current");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_open_device,"lime_alc_open_device");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_process_context,"lime_alc_process_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_suspend_context,"lime_alc_suspend_context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_close_device,"lime_alc_close_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_create_context,"lime_alc_create_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_destroy_context,"lime_alc_destroy_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_contexts_device,"lime_alc_get_contexts_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_current_context,"lime_alc_get_current_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_error,"lime_alc_get_error");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_integerv,"lime_alc_get_integerv");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_string,"lime_alc_get_string");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_make_context_current,"lime_alc_make_context_current");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_open_device,"lime_alc_open_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_process_context,"lime_alc_process_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_suspend_context,"lime_alc_suspend_context");
};

#endif

Class ALC_obj::__mClass;

void ALC_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.openal.ALC"), hx::TCanCast< ALC_obj> ,sStaticFields,sMemberFields,
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

void ALC_obj::__boot()
{
	FALSE= (int)0;
	TRUE= (int)1;
	FREQUENCY= (int)4103;
	REFRESH= (int)4104;
	SYNC= (int)4105;
	MONO_SOURCES= (int)4112;
	STEREO_SOURCES= (int)4113;
	NO_ERROR= (int)0;
	INVALID_DEVICE= (int)40961;
	INVALID_CONTEXT= (int)40962;
	INVALID_ENUM= (int)40963;
	INVALID_VALUE= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	ATTRIBUTES_SIZE= (int)4098;
	ALL_ATTRIBUTES= (int)4099;
	DEFAULT_DEVICE_SPECIFIER= (int)4100;
	DEVICE_SPECIFIER= (int)4101;
	EXTENSIONS= (int)4102;
	ENUMERATE_ALL_EXT= (int)1;
	DEFAULT_ALL_DEVICES_SPECIFIER= (int)4114;
	ALL_DEVICES_SPECIFIER= (int)4115;
	lime_alc_close_device= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_close_device"),(int)1,null());
	lime_alc_create_context= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_create_context"),(int)2,null());
	lime_alc_destroy_context= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_destroy_context"),(int)1,null());
	lime_alc_get_contexts_device= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_get_contexts_device"),(int)1,null());
	lime_alc_get_current_context= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_get_current_context"),(int)0,null());
	lime_alc_get_error= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_get_error"),(int)1,null());
	lime_alc_get_integerv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_get_integerv"),(int)3,null());
	lime_alc_get_string= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_get_string"),(int)2,null());
	lime_alc_make_context_current= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_make_context_current"),(int)1,null());
	lime_alc_open_device= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_open_device"),(int)1,null());
	lime_alc_process_context= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_process_context"),(int)1,null());
	lime_alc_suspend_context= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_alc_suspend_context"),(int)1,null());
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
