#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_WebAudioContext
#include <lime/audio/WebAudioContext.h>
#endif
namespace lime{
namespace audio{

Void WebAudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.WebAudioContext","new",0x06d4e58e,"lime.audio.WebAudioContext.new","lime/audio/WebAudioContext.hx",15,0x0738d4e4)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//WebAudioContext_obj::~WebAudioContext_obj() { }

Dynamic WebAudioContext_obj::__CreateEmpty() { return  new WebAudioContext_obj; }
hx::ObjectPtr< WebAudioContext_obj > WebAudioContext_obj::__new()
{  hx::ObjectPtr< WebAudioContext_obj > result = new WebAudioContext_obj();
	result->__construct();
	return result;}

Dynamic WebAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WebAudioContext_obj > result = new WebAudioContext_obj();
	result->__construct();
	return result;}

Dynamic WebAudioContext_obj::createAnalyser( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createAnalyser",0xa04a948d,"lime.audio.WebAudioContext.createAnalyser","lime/audio/WebAudioContext.hx",22,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createAnalyser,return )

Dynamic WebAudioContext_obj::createBiquadFilter( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createBiquadFilter",0x1ec33c14,"lime.audio.WebAudioContext.createBiquadFilter","lime/audio/WebAudioContext.hx",23,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createBiquadFilter,return )

Dynamic WebAudioContext_obj::createBuffer( Dynamic buffer,bool mixToMono){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createBuffer",0x3d7fd22e,"lime.audio.WebAudioContext.createBuffer","lime/audio/WebAudioContext.hx",25,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(mixToMono,"mixToMono")
	HX_STACK_LINE(25)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WebAudioContext_obj,createBuffer,return )

Dynamic WebAudioContext_obj::createBufferSource( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createBufferSource",0x61cacda9,"lime.audio.WebAudioContext.createBufferSource","lime/audio/WebAudioContext.hx",26,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createBufferSource,return )

Dynamic WebAudioContext_obj::createChannelMerger( Dynamic numberOfInputs){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createChannelMerger",0x60a9b46f,"lime.audio.WebAudioContext.createChannelMerger","lime/audio/WebAudioContext.hx",27,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numberOfInputs,"numberOfInputs")
	HX_STACK_LINE(27)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WebAudioContext_obj,createChannelMerger,return )

Dynamic WebAudioContext_obj::createChannelSplitter( Dynamic numberOfOutputs){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createChannelSplitter",0x1102c43c,"lime.audio.WebAudioContext.createChannelSplitter","lime/audio/WebAudioContext.hx",28,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numberOfOutputs,"numberOfOutputs")
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WebAudioContext_obj,createChannelSplitter,return )

Dynamic WebAudioContext_obj::createConvolver( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createConvolver",0xd59fde84,"lime.audio.WebAudioContext.createConvolver","lime/audio/WebAudioContext.hx",29,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createConvolver,return )

Dynamic WebAudioContext_obj::createDelay( Dynamic maxDelayTime){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createDelay",0xa5210215,"lime.audio.WebAudioContext.createDelay","lime/audio/WebAudioContext.hx",30,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxDelayTime,"maxDelayTime")
	HX_STACK_LINE(30)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WebAudioContext_obj,createDelay,return )

Dynamic WebAudioContext_obj::createDynamicsCompressor( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createDynamicsCompressor",0x41dacca7,"lime.audio.WebAudioContext.createDynamicsCompressor","lime/audio/WebAudioContext.hx",31,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createDynamicsCompressor,return )

Dynamic WebAudioContext_obj::createGain( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createGain",0xfcf8be2d,"lime.audio.WebAudioContext.createGain","lime/audio/WebAudioContext.hx",32,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createGain,return )

Dynamic WebAudioContext_obj::createMediaElementSource( Dynamic mediaElement){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createMediaElementSource",0x6d41b761,"lime.audio.WebAudioContext.createMediaElementSource","lime/audio/WebAudioContext.hx",33,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediaElement,"mediaElement")
	HX_STACK_LINE(33)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WebAudioContext_obj,createMediaElementSource,return )

Dynamic WebAudioContext_obj::createMediaStreamSource( Dynamic mediaStream){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createMediaStreamSource",0x62426e11,"lime.audio.WebAudioContext.createMediaStreamSource","lime/audio/WebAudioContext.hx",34,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediaStream,"mediaStream")
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WebAudioContext_obj,createMediaStreamSource,return )

Dynamic WebAudioContext_obj::createOscillator( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createOscillator",0x92dbf7ce,"lime.audio.WebAudioContext.createOscillator","lime/audio/WebAudioContext.hx",35,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createOscillator,return )

Dynamic WebAudioContext_obj::createPanner( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createPanner",0x57cb0c4c,"lime.audio.WebAudioContext.createPanner","lime/audio/WebAudioContext.hx",36,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createPanner,return )

Dynamic WebAudioContext_obj::createScriptProcessor( int bufferSize,Dynamic numberOfInputChannels,Dynamic numberOfOutputChannels){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createScriptProcessor",0xfc238ad9,"lime.audio.WebAudioContext.createScriptProcessor","lime/audio/WebAudioContext.hx",37,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferSize,"bufferSize")
	HX_STACK_ARG(numberOfInputChannels,"numberOfInputChannels")
	HX_STACK_ARG(numberOfOutputChannels,"numberOfOutputChannels")
	HX_STACK_LINE(37)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WebAudioContext_obj,createScriptProcessor,return )

Dynamic WebAudioContext_obj::createWaveShaper( ){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createWaveShaper",0x0c1588f8,"lime.audio.WebAudioContext.createWaveShaper","lime/audio/WebAudioContext.hx",38,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,createWaveShaper,return )

Dynamic WebAudioContext_obj::createWaveTable( Dynamic real,Dynamic imag){
	HX_STACK_FRAME("lime.audio.WebAudioContext","createWaveTable",0x1d2e3f27,"lime.audio.WebAudioContext.createWaveTable","lime/audio/WebAudioContext.hx",39,0x0738d4e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(real,"real")
	HX_STACK_ARG(imag,"imag")
	HX_STACK_LINE(39)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WebAudioContext_obj,createWaveTable,return )

Void WebAudioContext_obj::decodeAudioData( Dynamic audioData,Dynamic successCallback,Dynamic errorCallback){
{
		HX_STACK_FRAME("lime.audio.WebAudioContext","decodeAudioData",0x4b2fad40,"lime.audio.WebAudioContext.decodeAudioData","lime/audio/WebAudioContext.hx",40,0x0738d4e4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(audioData,"audioData")
		HX_STACK_ARG(successCallback,"successCallback")
		HX_STACK_ARG(errorCallback,"errorCallback")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WebAudioContext_obj,decodeAudioData,(void))

Void WebAudioContext_obj::startRendering( ){
{
		HX_STACK_FRAME("lime.audio.WebAudioContext","startRendering",0x6831681c,"lime.audio.WebAudioContext.startRendering","lime/audio/WebAudioContext.hx",41,0x0738d4e4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WebAudioContext_obj,startRendering,(void))


WebAudioContext_obj::WebAudioContext_obj()
{
}

void WebAudioContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebAudioContext);
	HX_MARK_MEMBER_NAME(activeSourceCount,"activeSourceCount");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	HX_MARK_MEMBER_NAME(destination,"destination");
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(oncomplete,"oncomplete");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_END_CLASS();
}

void WebAudioContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeSourceCount,"activeSourceCount");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	HX_VISIT_MEMBER_NAME(destination,"destination");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(oncomplete,"oncomplete");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
}

Dynamic WebAudioContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncomplete") ) { return oncomplete; }
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		if (HX_FIELD_EQ(inName,"createGain") ) { return createGain_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return currentTime; }
		if (HX_FIELD_EQ(inName,"destination") ) { return destination; }
		if (HX_FIELD_EQ(inName,"createDelay") ) { return createDelay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createPanner") ) { return createPanner_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createAnalyser") ) { return createAnalyser_dyn(); }
		if (HX_FIELD_EQ(inName,"startRendering") ) { return startRendering_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createConvolver") ) { return createConvolver_dyn(); }
		if (HX_FIELD_EQ(inName,"createWaveTable") ) { return createWaveTable_dyn(); }
		if (HX_FIELD_EQ(inName,"decodeAudioData") ) { return decodeAudioData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createOscillator") ) { return createOscillator_dyn(); }
		if (HX_FIELD_EQ(inName,"createWaveShaper") ) { return createWaveShaper_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"activeSourceCount") ) { return activeSourceCount; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createBiquadFilter") ) { return createBiquadFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"createBufferSource") ) { return createBufferSource_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createChannelMerger") ) { return createChannelMerger_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createChannelSplitter") ) { return createChannelSplitter_dyn(); }
		if (HX_FIELD_EQ(inName,"createScriptProcessor") ) { return createScriptProcessor_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createMediaStreamSource") ) { return createMediaStreamSource_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createDynamicsCompressor") ) { return createDynamicsCompressor_dyn(); }
		if (HX_FIELD_EQ(inName,"createMediaElementSource") ) { return createMediaElementSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WebAudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncomplete") ) { oncomplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destination") ) { destination=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"activeSourceCount") ) { activeSourceCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WebAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("activeSourceCount"));
	outFields->push(HX_CSTRING("currentTime"));
	outFields->push(HX_CSTRING("destination"));
	outFields->push(HX_CSTRING("listener"));
	outFields->push(HX_CSTRING("oncomplete"));
	outFields->push(HX_CSTRING("sampleRate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WebAudioContext_obj,activeSourceCount),HX_CSTRING("activeSourceCount")},
	{hx::fsFloat,(int)offsetof(WebAudioContext_obj,currentTime),HX_CSTRING("currentTime")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WebAudioContext_obj,destination),HX_CSTRING("destination")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WebAudioContext_obj,listener),HX_CSTRING("listener")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WebAudioContext_obj,oncomplete),HX_CSTRING("oncomplete")},
	{hx::fsFloat,(int)offsetof(WebAudioContext_obj,sampleRate),HX_CSTRING("sampleRate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("activeSourceCount"),
	HX_CSTRING("currentTime"),
	HX_CSTRING("destination"),
	HX_CSTRING("listener"),
	HX_CSTRING("oncomplete"),
	HX_CSTRING("sampleRate"),
	HX_CSTRING("createAnalyser"),
	HX_CSTRING("createBiquadFilter"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("createBufferSource"),
	HX_CSTRING("createChannelMerger"),
	HX_CSTRING("createChannelSplitter"),
	HX_CSTRING("createConvolver"),
	HX_CSTRING("createDelay"),
	HX_CSTRING("createDynamicsCompressor"),
	HX_CSTRING("createGain"),
	HX_CSTRING("createMediaElementSource"),
	HX_CSTRING("createMediaStreamSource"),
	HX_CSTRING("createOscillator"),
	HX_CSTRING("createPanner"),
	HX_CSTRING("createScriptProcessor"),
	HX_CSTRING("createWaveShaper"),
	HX_CSTRING("createWaveTable"),
	HX_CSTRING("decodeAudioData"),
	HX_CSTRING("startRendering"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebAudioContext_obj::__mClass,"__mClass");
};

#endif

Class WebAudioContext_obj::__mClass;

void WebAudioContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.WebAudioContext"), hx::TCanCast< WebAudioContext_obj> ,sStaticFields,sMemberFields,
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

void WebAudioContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
