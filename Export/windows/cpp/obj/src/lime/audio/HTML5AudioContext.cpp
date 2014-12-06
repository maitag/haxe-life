#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_HTML5AudioContext
#include <lime/audio/HTML5AudioContext.h>
#endif
namespace lime{
namespace audio{

Void HTML5AudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.HTML5AudioContext","new",0x52738744,"lime.audio.HTML5AudioContext.new","lime/audio/HTML5AudioContext.hx",9,0xfd54306e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->NETWORK_NO_SOURCE = (int)3;
	HX_STACK_LINE(19)
	this->NETWORK_LOADING = (int)2;
	HX_STACK_LINE(18)
	this->NETWORK_IDLE = (int)1;
	HX_STACK_LINE(17)
	this->NETWORK_EMPTY = (int)0;
	HX_STACK_LINE(16)
	this->HAVE_NOTHING = (int)0;
	HX_STACK_LINE(15)
	this->HAVE_METADATA = (int)1;
	HX_STACK_LINE(14)
	this->HAVE_FUTURE_DATA = (int)3;
	HX_STACK_LINE(13)
	this->HAVE_ENOUGH_DATA = (int)4;
	HX_STACK_LINE(12)
	this->HAVE_CURRENT_DATA = (int)2;
}
;
	return null();
}

//HTML5AudioContext_obj::~HTML5AudioContext_obj() { }

Dynamic HTML5AudioContext_obj::__CreateEmpty() { return  new HTML5AudioContext_obj; }
hx::ObjectPtr< HTML5AudioContext_obj > HTML5AudioContext_obj::__new()
{  hx::ObjectPtr< HTML5AudioContext_obj > result = new HTML5AudioContext_obj();
	result->__construct();
	return result;}

Dynamic HTML5AudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTML5AudioContext_obj > result = new HTML5AudioContext_obj();
	result->__construct();
	return result;}

::String HTML5AudioContext_obj::canPlayType( ::lime::audio::AudioBuffer buffer,::String type){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","canPlayType",0xf58b51e2,"lime.audio.HTML5AudioContext.canPlayType","lime/audio/HTML5AudioContext.hx",40,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(40)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,canPlayType,return )

::lime::audio::AudioBuffer HTML5AudioContext_obj::createBuffer( ::String urlString){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","createBuffer",0x187649b8,"lime.audio.HTML5AudioContext.createBuffer","lime/audio/HTML5AudioContext.hx",53,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(urlString,"urlString")
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,createBuffer,return )

int HTML5AudioContext_obj::getAudioDecodedByteCount( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getAudioDecodedByteCount",0xd408996d,"lime.audio.HTML5AudioContext.getAudioDecodedByteCount","lime/audio/HTML5AudioContext.hx",69,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(69)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getAudioDecodedByteCount,return )

bool HTML5AudioContext_obj::getAutoplay( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getAutoplay",0xf161ee7d,"lime.audio.HTML5AudioContext.getAutoplay","lime/audio/HTML5AudioContext.hx",84,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(84)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getAutoplay,return )

Dynamic HTML5AudioContext_obj::getBuffered( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getBuffered",0x5bb952f9,"lime.audio.HTML5AudioContext.getBuffered","lime/audio/HTML5AudioContext.hx",99,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(99)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getBuffered,return )

Dynamic HTML5AudioContext_obj::getController( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getController",0x1667b0b6,"lime.audio.HTML5AudioContext.getController","lime/audio/HTML5AudioContext.hx",114,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(114)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getController,return )

::String HTML5AudioContext_obj::getCurrentSrc( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getCurrentSrc",0xd8db8445,"lime.audio.HTML5AudioContext.getCurrentSrc","lime/audio/HTML5AudioContext.hx",129,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(129)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getCurrentSrc,return )

Float HTML5AudioContext_obj::getCurrentTime( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getCurrentTime",0xe7daa38c,"lime.audio.HTML5AudioContext.getCurrentTime","lime/audio/HTML5AudioContext.hx",144,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(144)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getCurrentTime,return )

Float HTML5AudioContext_obj::getDefaultPlaybackRate( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getDefaultPlaybackRate",0xb0e811a2,"lime.audio.HTML5AudioContext.getDefaultPlaybackRate","lime/audio/HTML5AudioContext.hx",159,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(159)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getDefaultPlaybackRate,return )

Float HTML5AudioContext_obj::getDuration( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getDuration",0xc3490cee,"lime.audio.HTML5AudioContext.getDuration","lime/audio/HTML5AudioContext.hx",174,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(174)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getDuration,return )

bool HTML5AudioContext_obj::getEnded( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getEnded",0x8adc2720,"lime.audio.HTML5AudioContext.getEnded","lime/audio/HTML5AudioContext.hx",189,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(189)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getEnded,return )

Dynamic HTML5AudioContext_obj::getError( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getError",0x8d8ba9ee,"lime.audio.HTML5AudioContext.getError","lime/audio/HTML5AudioContext.hx",204,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(204)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getError,return )

Float HTML5AudioContext_obj::getInitialTime( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getInitialTime",0x8b6d9957,"lime.audio.HTML5AudioContext.getInitialTime","lime/audio/HTML5AudioContext.hx",219,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(219)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getInitialTime,return )

bool HTML5AudioContext_obj::getLoop( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getLoop",0x9cc94efe,"lime.audio.HTML5AudioContext.getLoop","lime/audio/HTML5AudioContext.hx",234,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(234)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getLoop,return )

::String HTML5AudioContext_obj::getMediaGroup( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getMediaGroup",0x865efbd5,"lime.audio.HTML5AudioContext.getMediaGroup","lime/audio/HTML5AudioContext.hx",249,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(249)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getMediaGroup,return )

bool HTML5AudioContext_obj::getMuted( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getMuted",0x2abd6d91,"lime.audio.HTML5AudioContext.getMuted","lime/audio/HTML5AudioContext.hx",264,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(264)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getMuted,return )

int HTML5AudioContext_obj::getNetworkState( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getNetworkState",0x19013d1d,"lime.audio.HTML5AudioContext.getNetworkState","lime/audio/HTML5AudioContext.hx",279,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(279)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getNetworkState,return )

bool HTML5AudioContext_obj::getPaused( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPaused",0xeac4c3c8,"lime.audio.HTML5AudioContext.getPaused","lime/audio/HTML5AudioContext.hx",294,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(294)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPaused,return )

Float HTML5AudioContext_obj::getPlaybackRate( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPlaybackRate",0x60be0d35,"lime.audio.HTML5AudioContext.getPlaybackRate","lime/audio/HTML5AudioContext.hx",309,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(309)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPlaybackRate,return )

Dynamic HTML5AudioContext_obj::getPlayed( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPlayed",0x32f96e6d,"lime.audio.HTML5AudioContext.getPlayed","lime/audio/HTML5AudioContext.hx",324,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(324)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPlayed,return )

::String HTML5AudioContext_obj::getPreload( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPreload",0x12757b6f,"lime.audio.HTML5AudioContext.getPreload","lime/audio/HTML5AudioContext.hx",339,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(339)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPreload,return )

int HTML5AudioContext_obj::getReadyState( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getReadyState",0x4ef816c8,"lime.audio.HTML5AudioContext.getReadyState","lime/audio/HTML5AudioContext.hx",354,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(354)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getReadyState,return )

Dynamic HTML5AudioContext_obj::getSeekable( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getSeekable",0x06b00cac,"lime.audio.HTML5AudioContext.getSeekable","lime/audio/HTML5AudioContext.hx",369,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(369)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSeekable,return )

bool HTML5AudioContext_obj::getSeeking( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getSeeking",0x5be47610,"lime.audio.HTML5AudioContext.getSeeking","lime/audio/HTML5AudioContext.hx",384,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(384)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSeeking,return )

::String HTML5AudioContext_obj::getSrc( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getSrc",0x11f18f8a,"lime.audio.HTML5AudioContext.getSrc","lime/audio/HTML5AudioContext.hx",399,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(399)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSrc,return )

Float HTML5AudioContext_obj::getStartTime( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getStartTime",0x3ad32eb5,"lime.audio.HTML5AudioContext.getStartTime","lime/audio/HTML5AudioContext.hx",414,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(414)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getStartTime,return )

Float HTML5AudioContext_obj::getVolume( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getVolume",0x5a93acf4,"lime.audio.HTML5AudioContext.getVolume","lime/audio/HTML5AudioContext.hx",429,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(429)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getVolume,return )

Void HTML5AudioContext_obj::load( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","load",0xd157eac2,"lime.audio.HTML5AudioContext.load","lime/audio/HTML5AudioContext.hx",434,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,load,(void))

Void HTML5AudioContext_obj::pause( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","pause",0x9ffe0eda,"lime.audio.HTML5AudioContext.pause","lime/audio/HTML5AudioContext.hx",447,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,pause,(void))

Void HTML5AudioContext_obj::play( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","play",0xd3fa7e90,"lime.audio.HTML5AudioContext.play","lime/audio/HTML5AudioContext.hx",460,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,play,(void))

Void HTML5AudioContext_obj::setAutoplay( ::lime::audio::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setAutoplay",0xfbcef589,"lime.audio.HTML5AudioContext.setAutoplay","lime/audio/HTML5AudioContext.hx",473,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setAutoplay,(void))

Void HTML5AudioContext_obj::setController( ::lime::audio::AudioBuffer buffer,Dynamic value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setController",0x5b6d92c2,"lime.audio.HTML5AudioContext.setController","lime/audio/HTML5AudioContext.hx",486,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setController,(void))

Void HTML5AudioContext_obj::setCurrentTime( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setCurrentTime",0x07fa8c00,"lime.audio.HTML5AudioContext.setCurrentTime","lime/audio/HTML5AudioContext.hx",499,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setCurrentTime,(void))

Void HTML5AudioContext_obj::setDefaultPlaybackRate( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setDefaultPlaybackRate",0xe4938e16,"lime.audio.HTML5AudioContext.setDefaultPlaybackRate","lime/audio/HTML5AudioContext.hx",512,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setDefaultPlaybackRate,(void))

Void HTML5AudioContext_obj::setLoop( ::lime::audio::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setLoop",0x8fcae00a,"lime.audio.HTML5AudioContext.setLoop","lime/audio/HTML5AudioContext.hx",525,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setLoop,(void))

Void HTML5AudioContext_obj::setMediaGroup( ::lime::audio::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setMediaGroup",0xcb64dde1,"lime.audio.HTML5AudioContext.setMediaGroup","lime/audio/HTML5AudioContext.hx",538,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setMediaGroup,(void))

Void HTML5AudioContext_obj::setMuted( ::lime::audio::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setMuted",0xd91ac705,"lime.audio.HTML5AudioContext.setMuted","lime/audio/HTML5AudioContext.hx",551,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setMuted,(void))

Void HTML5AudioContext_obj::setPlaybackRate( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setPlaybackRate",0x5c898a41,"lime.audio.HTML5AudioContext.setPlaybackRate","lime/audio/HTML5AudioContext.hx",564,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setPlaybackRate,(void))

Void HTML5AudioContext_obj::setPreload( ::lime::audio::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setPreload",0x15f319e3,"lime.audio.HTML5AudioContext.setPreload","lime/audio/HTML5AudioContext.hx",577,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setPreload,(void))

Void HTML5AudioContext_obj::setSrc( ::lime::audio::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setSrc",0xde39e3fe,"lime.audio.HTML5AudioContext.setSrc","lime/audio/HTML5AudioContext.hx",590,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setSrc,(void))

Void HTML5AudioContext_obj::setVolume( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setVolume",0x3de49900,"lime.audio.HTML5AudioContext.setVolume","lime/audio/HTML5AudioContext.hx",603,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setVolume,(void))


HTML5AudioContext_obj::HTML5AudioContext_obj()
{
}

Dynamic HTML5AudioContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getSrc") ) { return getSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"setSrc") ) { return setSrc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getLoop") ) { return getLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"setLoop") ) { return setLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEnded") ) { return getEnded_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getMuted") ) { return getMuted_dyn(); }
		if (HX_FIELD_EQ(inName,"setMuted") ) { return setMuted_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPaused") ) { return getPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayed") ) { return getPlayed_dyn(); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return getVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPreload") ) { return getPreload_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeeking") ) { return getSeeking_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreload") ) { return setPreload_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canPlayType") ) { return canPlayType_dyn(); }
		if (HX_FIELD_EQ(inName,"getAutoplay") ) { return getAutoplay_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffered") ) { return getBuffered_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeekable") ) { return getSeekable_dyn(); }
		if (HX_FIELD_EQ(inName,"setAutoplay") ) { return setAutoplay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"HAVE_NOTHING") ) { return HAVE_NOTHING; }
		if (HX_FIELD_EQ(inName,"NETWORK_IDLE") ) { return NETWORK_IDLE; }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getStartTime") ) { return getStartTime_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"HAVE_METADATA") ) { return HAVE_METADATA; }
		if (HX_FIELD_EQ(inName,"NETWORK_EMPTY") ) { return NETWORK_EMPTY; }
		if (HX_FIELD_EQ(inName,"getController") ) { return getController_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentSrc") ) { return getCurrentSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"getMediaGroup") ) { return getMediaGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getReadyState") ) { return getReadyState_dyn(); }
		if (HX_FIELD_EQ(inName,"setController") ) { return setController_dyn(); }
		if (HX_FIELD_EQ(inName,"setMediaGroup") ) { return setMediaGroup_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return getCurrentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"getInitialTime") ) { return getInitialTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return setCurrentTime_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NETWORK_LOADING") ) { return NETWORK_LOADING; }
		if (HX_FIELD_EQ(inName,"getNetworkState") ) { return getNetworkState_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlaybackRate") ) { return getPlaybackRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setPlaybackRate") ) { return setPlaybackRate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"HAVE_ENOUGH_DATA") ) { return HAVE_ENOUGH_DATA; }
		if (HX_FIELD_EQ(inName,"HAVE_FUTURE_DATA") ) { return HAVE_FUTURE_DATA; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HAVE_CURRENT_DATA") ) { return HAVE_CURRENT_DATA; }
		if (HX_FIELD_EQ(inName,"NETWORK_NO_SOURCE") ) { return NETWORK_NO_SOURCE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getDefaultPlaybackRate") ) { return getDefaultPlaybackRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setDefaultPlaybackRate") ) { return setDefaultPlaybackRate_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getAudioDecodedByteCount") ) { return getAudioDecodedByteCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTML5AudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"HAVE_NOTHING") ) { HAVE_NOTHING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_IDLE") ) { NETWORK_IDLE=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"HAVE_METADATA") ) { HAVE_METADATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_EMPTY") ) { NETWORK_EMPTY=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NETWORK_LOADING") ) { NETWORK_LOADING=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"HAVE_ENOUGH_DATA") ) { HAVE_ENOUGH_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HAVE_FUTURE_DATA") ) { HAVE_FUTURE_DATA=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HAVE_CURRENT_DATA") ) { HAVE_CURRENT_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_NO_SOURCE") ) { NETWORK_NO_SOURCE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTML5AudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("HAVE_CURRENT_DATA"));
	outFields->push(HX_CSTRING("HAVE_ENOUGH_DATA"));
	outFields->push(HX_CSTRING("HAVE_FUTURE_DATA"));
	outFields->push(HX_CSTRING("HAVE_METADATA"));
	outFields->push(HX_CSTRING("HAVE_NOTHING"));
	outFields->push(HX_CSTRING("NETWORK_EMPTY"));
	outFields->push(HX_CSTRING("NETWORK_IDLE"));
	outFields->push(HX_CSTRING("NETWORK_LOADING"));
	outFields->push(HX_CSTRING("NETWORK_NO_SOURCE"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_CURRENT_DATA),HX_CSTRING("HAVE_CURRENT_DATA")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_ENOUGH_DATA),HX_CSTRING("HAVE_ENOUGH_DATA")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_FUTURE_DATA),HX_CSTRING("HAVE_FUTURE_DATA")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_METADATA),HX_CSTRING("HAVE_METADATA")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_NOTHING),HX_CSTRING("HAVE_NOTHING")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_EMPTY),HX_CSTRING("NETWORK_EMPTY")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_IDLE),HX_CSTRING("NETWORK_IDLE")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_LOADING),HX_CSTRING("NETWORK_LOADING")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_NO_SOURCE),HX_CSTRING("NETWORK_NO_SOURCE")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("HAVE_CURRENT_DATA"),
	HX_CSTRING("HAVE_ENOUGH_DATA"),
	HX_CSTRING("HAVE_FUTURE_DATA"),
	HX_CSTRING("HAVE_METADATA"),
	HX_CSTRING("HAVE_NOTHING"),
	HX_CSTRING("NETWORK_EMPTY"),
	HX_CSTRING("NETWORK_IDLE"),
	HX_CSTRING("NETWORK_LOADING"),
	HX_CSTRING("NETWORK_NO_SOURCE"),
	HX_CSTRING("canPlayType"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("getAudioDecodedByteCount"),
	HX_CSTRING("getAutoplay"),
	HX_CSTRING("getBuffered"),
	HX_CSTRING("getController"),
	HX_CSTRING("getCurrentSrc"),
	HX_CSTRING("getCurrentTime"),
	HX_CSTRING("getDefaultPlaybackRate"),
	HX_CSTRING("getDuration"),
	HX_CSTRING("getEnded"),
	HX_CSTRING("getError"),
	HX_CSTRING("getInitialTime"),
	HX_CSTRING("getLoop"),
	HX_CSTRING("getMediaGroup"),
	HX_CSTRING("getMuted"),
	HX_CSTRING("getNetworkState"),
	HX_CSTRING("getPaused"),
	HX_CSTRING("getPlaybackRate"),
	HX_CSTRING("getPlayed"),
	HX_CSTRING("getPreload"),
	HX_CSTRING("getReadyState"),
	HX_CSTRING("getSeekable"),
	HX_CSTRING("getSeeking"),
	HX_CSTRING("getSrc"),
	HX_CSTRING("getStartTime"),
	HX_CSTRING("getVolume"),
	HX_CSTRING("load"),
	HX_CSTRING("pause"),
	HX_CSTRING("play"),
	HX_CSTRING("setAutoplay"),
	HX_CSTRING("setController"),
	HX_CSTRING("setCurrentTime"),
	HX_CSTRING("setDefaultPlaybackRate"),
	HX_CSTRING("setLoop"),
	HX_CSTRING("setMediaGroup"),
	HX_CSTRING("setMuted"),
	HX_CSTRING("setPlaybackRate"),
	HX_CSTRING("setPreload"),
	HX_CSTRING("setSrc"),
	HX_CSTRING("setVolume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTML5AudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTML5AudioContext_obj::__mClass,"__mClass");
};

#endif

Class HTML5AudioContext_obj::__mClass;

void HTML5AudioContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.HTML5AudioContext"), hx::TCanCast< HTML5AudioContext_obj> ,sStaticFields,sMemberFields,
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

void HTML5AudioContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
