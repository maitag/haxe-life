#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace audio{

Void AudioBuffer_obj::__construct()
{
HX_STACK_FRAME("lime.audio.AudioBuffer","new",0x54859e97,"lime.audio.AudioBuffer.new","lime/audio/AudioBuffer.hx",36,0x5fb686fb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->id = (int)0;
}
;
	return null();
}

//AudioBuffer_obj::~AudioBuffer_obj() { }

Dynamic AudioBuffer_obj::__CreateEmpty() { return  new AudioBuffer_obj; }
hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new()
{  hx::ObjectPtr< AudioBuffer_obj > result = new AudioBuffer_obj();
	result->__construct();
	return result;}

Dynamic AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioBuffer_obj > result = new AudioBuffer_obj();
	result->__construct();
	return result;}

Void AudioBuffer_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","dispose",0xb2873656,"lime.audio.AudioBuffer.dispose","lime/audio/AudioBuffer.hx",41,0x5fb686fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

::lime::audio::AudioBuffer AudioBuffer_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromBytes",0xb5bdc418,"lime.audio.AudioBuffer.fromBytes","lime/audio/AudioBuffer.hx",48,0x5fb686fb)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(52)
	Dynamic data = ::lime::audio::AudioBuffer_obj::lime_audio_load(bytes);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(54)
	if (((data != null()))){
		HX_STACK_LINE(56)
		::lime::audio::AudioBuffer audioBuffer = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(57)
		audioBuffer->bitsPerSample = data->__Field(HX_CSTRING("bitsPerSample"),true);
		HX_STACK_LINE(58)
		audioBuffer->channels = data->__Field(HX_CSTRING("channels"),true);
		HX_STACK_LINE(59)
		audioBuffer->data = data->__Field(HX_CSTRING("data"),true);
		HX_STACK_LINE(60)
		audioBuffer->sampleRate = data->__Field(HX_CSTRING("sampleRate"),true);
		HX_STACK_LINE(61)
		return audioBuffer;
	}
	HX_STACK_LINE(67)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

::lime::audio::AudioBuffer AudioBuffer_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromFile",0xfdabe76f,"lime.audio.AudioBuffer.fromFile","lime/audio/AudioBuffer.hx",72,0x5fb686fb)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(76)
	Dynamic data = ::lime::audio::AudioBuffer_obj::lime_audio_load(path);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(78)
	if (((data != null()))){
		HX_STACK_LINE(80)
		::lime::audio::AudioBuffer audioBuffer = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(81)
		audioBuffer->bitsPerSample = data->__Field(HX_CSTRING("bitsPerSample"),true);
		HX_STACK_LINE(82)
		audioBuffer->channels = data->__Field(HX_CSTRING("channels"),true);
		HX_STACK_LINE(83)
		audioBuffer->data = data->__Field(HX_CSTRING("data"),true);
		HX_STACK_LINE(84)
		audioBuffer->sampleRate = data->__Field(HX_CSTRING("sampleRate"),true);
		HX_STACK_LINE(85)
		return audioBuffer;
	}
	HX_STACK_LINE(91)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

Void AudioBuffer_obj::fromURL( ::String url,Dynamic handler){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","fromURL",0x4f3e95dc,"lime.audio.AudioBuffer.fromURL","lime/audio/AudioBuffer.hx",96,0x5fb686fb)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(handler,"handler")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioBuffer_obj,fromURL,(void))

Dynamic AudioBuffer_obj::lime_audio_load;


AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(src,"src");
}

Dynamic AudioBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromURL") ) { return fromURL_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return bitsPerSample; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { return lime_audio_load; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { lime_audio_load=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitsPerSample"));
	outFields->push(HX_CSTRING("channels"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("sampleRate"));
	outFields->push(HX_CSTRING("src"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("fromURL"),
	HX_CSTRING("lime_audio_load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_CSTRING("bitsPerSample")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_CSTRING("channels")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(AudioBuffer_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_CSTRING("sampleRate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,src),HX_CSTRING("src")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitsPerSample"),
	HX_CSTRING("channels"),
	HX_CSTRING("data"),
	HX_CSTRING("id"),
	HX_CSTRING("sampleRate"),
	HX_CSTRING("src"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::lime_audio_load,"lime_audio_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::lime_audio_load,"lime_audio_load");
};

#endif

Class AudioBuffer_obj::__mClass;

void AudioBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.AudioBuffer"), hx::TCanCast< AudioBuffer_obj> ,sStaticFields,sMemberFields,
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

void AudioBuffer_obj::__boot()
{
	lime_audio_load= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_audio_load"),(int)1,null());
}

} // end namespace lime
} // end namespace audio
