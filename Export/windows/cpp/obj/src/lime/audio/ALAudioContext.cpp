#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
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

Void ALAudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.ALAudioContext","new",0x4288bf47,"lime.audio.ALAudioContext.new","lime/audio/ALAudioContext.hx",8,0x9101d507)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(72)
	this->EXPONENT_DISTANCE_CLAMPED = (int)53254;
	HX_STACK_LINE(71)
	this->EXPONENT_DISTANCE = (int)53253;
	HX_STACK_LINE(70)
	this->LINEAR_DISTANCE_CLAMPED = (int)53252;
	HX_STACK_LINE(69)
	this->LINEAR_DISTANCE = (int)53251;
	HX_STACK_LINE(68)
	this->INVERSE_DISTANCE_CLAMPED = (int)53250;
	HX_STACK_LINE(67)
	this->INVERSE_DISTANCE = (int)53249;
	HX_STACK_LINE(66)
	this->DISTANCE_MODEL = (int)53248;
	HX_STACK_LINE(65)
	this->DOPPLER_VELOCITY = (int)49153;
	HX_STACK_LINE(64)
	this->SPEED_OF_SOUND = (int)49155;
	HX_STACK_LINE(63)
	this->DOPPLER_FACTOR = (int)49152;
	HX_STACK_LINE(62)
	this->EXTENSIONS = (int)45060;
	HX_STACK_LINE(61)
	this->RENDERER = (int)45059;
	HX_STACK_LINE(60)
	this->VERSION = (int)45058;
	HX_STACK_LINE(59)
	this->VENDOR = (int)45057;
	HX_STACK_LINE(58)
	this->OUT_OF_MEMORY = (int)40965;
	HX_STACK_LINE(57)
	this->INVALID_OPERATION = (int)40964;
	HX_STACK_LINE(56)
	this->INVALID_VALUE = (int)40963;
	HX_STACK_LINE(55)
	this->INVALID_ENUM = (int)40962;
	HX_STACK_LINE(54)
	this->INVALID_NAME = (int)40961;
	HX_STACK_LINE(53)
	this->NO_ERROR = (int)0;
	HX_STACK_LINE(52)
	this->SIZE = (int)8196;
	HX_STACK_LINE(51)
	this->CHANNELS = (int)8195;
	HX_STACK_LINE(50)
	this->BITS = (int)8194;
	HX_STACK_LINE(49)
	this->FREQUENCY = (int)8193;
	HX_STACK_LINE(48)
	this->FORMAT_STEREO16 = (int)4355;
	HX_STACK_LINE(47)
	this->FORMAT_STEREO8 = (int)4354;
	HX_STACK_LINE(46)
	this->FORMAT_MONO16 = (int)4353;
	HX_STACK_LINE(45)
	this->FORMAT_MONO8 = (int)4352;
	HX_STACK_LINE(44)
	this->UNDETERMINED = (int)4144;
	HX_STACK_LINE(43)
	this->STREAMING = (int)4137;
	HX_STACK_LINE(42)
	this->STATIC = (int)4136;
	HX_STACK_LINE(41)
	this->SOURCE_TYPE = (int)4135;
	HX_STACK_LINE(40)
	this->BYTE_OFFSET = (int)4134;
	HX_STACK_LINE(39)
	this->SAMPLE_OFFSET = (int)4133;
	HX_STACK_LINE(38)
	this->SEC_OFFSET = (int)4132;
	HX_STACK_LINE(37)
	this->MAX_DISTANCE = (int)4131;
	HX_STACK_LINE(36)
	this->CONE_OUTER_GAIN = (int)4130;
	HX_STACK_LINE(35)
	this->ROLLOFF_FACTOR = (int)4129;
	HX_STACK_LINE(34)
	this->REFERENCE_DISTANCE = (int)4128;
	HX_STACK_LINE(33)
	this->BUFFERS_PROCESSED = (int)4118;
	HX_STACK_LINE(32)
	this->BUFFERS_QUEUED = (int)4117;
	HX_STACK_LINE(31)
	this->STOPPED = (int)4116;
	HX_STACK_LINE(30)
	this->PAUSED = (int)4115;
	HX_STACK_LINE(29)
	this->PLAYING = (int)4114;
	HX_STACK_LINE(28)
	this->INITIAL = (int)4113;
	HX_STACK_LINE(27)
	this->SOURCE_STATE = (int)4112;
	HX_STACK_LINE(26)
	this->ORIENTATION = (int)4111;
	HX_STACK_LINE(25)
	this->MAX_GAIN = (int)4110;
	HX_STACK_LINE(24)
	this->MIN_GAIN = (int)4109;
	HX_STACK_LINE(23)
	this->GAIN = (int)4106;
	HX_STACK_LINE(22)
	this->BUFFER = (int)4105;
	HX_STACK_LINE(21)
	this->LOOPING = (int)4103;
	HX_STACK_LINE(20)
	this->VELOCITY = (int)4102;
	HX_STACK_LINE(19)
	this->DIRECTION = (int)4101;
	HX_STACK_LINE(18)
	this->POSITION = (int)4100;
	HX_STACK_LINE(17)
	this->PITCH = (int)4099;
	HX_STACK_LINE(16)
	this->CONE_OUTER_ANGLE = (int)4098;
	HX_STACK_LINE(15)
	this->CONE_INNER_ANGLE = (int)4097;
	HX_STACK_LINE(14)
	this->SOURCE_RELATIVE = (int)514;
	HX_STACK_LINE(13)
	this->TRUE = (int)1;
	HX_STACK_LINE(12)
	this->FALSE = (int)0;
	HX_STACK_LINE(11)
	this->NONE = (int)0;
}
;
	return null();
}

//ALAudioContext_obj::~ALAudioContext_obj() { }

Dynamic ALAudioContext_obj::__CreateEmpty() { return  new ALAudioContext_obj; }
hx::ObjectPtr< ALAudioContext_obj > ALAudioContext_obj::__new()
{  hx::ObjectPtr< ALAudioContext_obj > result = new ALAudioContext_obj();
	result->__construct();
	return result;}

Dynamic ALAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALAudioContext_obj > result = new ALAudioContext_obj();
	result->__construct();
	return result;}

Void ALAudioContext_obj::bufferData( int buffer,int format,::lime::utils::ByteArray data,int size,int freq){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferData",0x425d8b43,"lime.audio.ALAudioContext.bufferData","lime/audio/ALAudioContext.hx",84,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(freq,"freq")
		HX_STACK_LINE(84)
		::lime::audio::openal::AL_obj::bufferData(buffer,format,data,size,freq);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,bufferData,(void))

Void ALAudioContext_obj::buffer3f( int buffer,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","buffer3f",0x3a9ad58c,"lime.audio.ALAudioContext.buffer3f","lime/audio/ALAudioContext.hx",91,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(91)
		::lime::audio::openal::AL_obj::buffer3f(buffer,param,value1,value2,value3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,buffer3f,(void))

Void ALAudioContext_obj::buffer3i( int buffer,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","buffer3i",0x3a9ad58f,"lime.audio.ALAudioContext.buffer3i","lime/audio/ALAudioContext.hx",98,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(98)
		::lime::audio::openal::AL_obj::buffer3i(buffer,param,value1,value2,value3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,buffer3i,(void))

Void ALAudioContext_obj::bufferf( int buffer,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferf",0x7d6491cd,"lime.audio.ALAudioContext.bufferf","lime/audio/ALAudioContext.hx",105,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(105)
		::lime::audio::openal::AL_obj::bufferf(buffer,param,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferf,(void))

Void ALAudioContext_obj::bufferfv( int buffer,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferfv",0x3a9b0209,"lime.audio.ALAudioContext.bufferfv","lime/audio/ALAudioContext.hx",112,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(112)
		::lime::audio::openal::AL_obj::bufferfv(buffer,param,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferfv,(void))

Void ALAudioContext_obj::bufferi( int buffer,int param,int value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferi",0x7d6491d0,"lime.audio.ALAudioContext.bufferi","lime/audio/ALAudioContext.hx",119,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(119)
		::lime::audio::openal::AL_obj::bufferi(buffer,param,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferi,(void))

Void ALAudioContext_obj::bufferiv( int buffer,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferiv",0x3a9b04a6,"lime.audio.ALAudioContext.bufferiv","lime/audio/ALAudioContext.hx",126,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(126)
		::lime::audio::openal::AL_obj::bufferiv(buffer,param,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferiv,(void))

Void ALAudioContext_obj::deleteBuffer( int buffer){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteBuffer",0xcd1c5fc4,"lime.audio.ALAudioContext.deleteBuffer","lime/audio/ALAudioContext.hx",133,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(133)
		::lime::audio::openal::AL_obj::deleteBuffer(buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteBuffer,(void))

Void ALAudioContext_obj::deleteBuffers( Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteBuffers",0xabb76c2f,"lime.audio.ALAudioContext.deleteBuffers","lime/audio/ALAudioContext.hx",140,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(140)
		::lime::audio::openal::AL_obj::deleteBuffers(buffers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteBuffers,(void))

Void ALAudioContext_obj::deleteSource( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteSource",0x2eb9539f,"lime.audio.ALAudioContext.deleteSource","lime/audio/ALAudioContext.hx",147,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(147)
		::lime::audio::openal::AL_obj::deleteSource(source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteSource,(void))

Void ALAudioContext_obj::deleteSources( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteSources",0xb36fd7f4,"lime.audio.ALAudioContext.deleteSources","lime/audio/ALAudioContext.hx",154,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(154)
		::lime::audio::openal::AL_obj::deleteSources(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteSources,(void))

Void ALAudioContext_obj::disable( int capability){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","disable",0x7d2c584f,"lime.audio.ALAudioContext.disable","lime/audio/ALAudioContext.hx",161,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(161)
		::lime::audio::openal::AL_obj::disable(capability);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,disable,(void))

Void ALAudioContext_obj::distanceModel( int distanceModel){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","distanceModel",0x6f7e75db,"lime.audio.ALAudioContext.distanceModel","lime/audio/ALAudioContext.hx",168,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(distanceModel,"distanceModel")
		HX_STACK_LINE(168)
		::lime::audio::openal::AL_obj::distanceModel(distanceModel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,distanceModel,(void))

Void ALAudioContext_obj::dopplerFactor( Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","dopplerFactor",0x0aa26384,"lime.audio.ALAudioContext.dopplerFactor","lime/audio/ALAudioContext.hx",175,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(175)
		::lime::audio::openal::AL_obj::dopplerFactor(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,dopplerFactor,(void))

Void ALAudioContext_obj::dopplerVelocity( Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","dopplerVelocity",0xac62a412,"lime.audio.ALAudioContext.dopplerVelocity","lime/audio/ALAudioContext.hx",182,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(182)
		::lime::audio::openal::AL_obj::dopplerVelocity(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,dopplerVelocity,(void))

Void ALAudioContext_obj::enable( int capability){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","enable",0xf84bc9fc,"lime.audio.ALAudioContext.enable","lime/audio/ALAudioContext.hx",189,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(189)
		::lime::audio::openal::AL_obj::enable(capability);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,enable,(void))

int ALAudioContext_obj::genSource( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genSource",0x108107b2,"lime.audio.ALAudioContext.genSource","lime/audio/ALAudioContext.hx",196,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return ::lime::audio::openal::AL_obj::genSource();
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,genSource,return )

Array< int > ALAudioContext_obj::genSources( int n){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genSources",0x6065b481,"lime.audio.ALAudioContext.genSources","lime/audio/ALAudioContext.hx",203,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(203)
	return ::lime::audio::openal::AL_obj::genSources(n);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,genSources,return )

int ALAudioContext_obj::genBuffer( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genBuffer",0xaee413d7,"lime.audio.ALAudioContext.genBuffer","lime/audio/ALAudioContext.hx",210,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return ::lime::audio::openal::AL_obj::genBuffer();
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,genBuffer,return )

Array< int > ALAudioContext_obj::genBuffers( int n){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genBuffers",0x58ad48bc,"lime.audio.ALAudioContext.genBuffers","lime/audio/ALAudioContext.hx",217,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(217)
	return ::lime::audio::openal::AL_obj::genBuffers(n);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,genBuffers,return )

bool ALAudioContext_obj::getBoolean( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBoolean",0x7c4a3cab,"lime.audio.ALAudioContext.getBoolean","lime/audio/ALAudioContext.hx",224,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(224)
	return ::lime::audio::openal::AL_obj::getBoolean(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getBoolean,return )

Array< bool > ALAudioContext_obj::getBooleanv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBooleanv",0x44aad96b,"lime.audio.ALAudioContext.getBooleanv","lime/audio/ALAudioContext.hx",231,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(231)
		return ::lime::audio::openal::AL_obj::getBooleanv(param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBooleanv,return )

Array< Float > ALAudioContext_obj::getBuffer3f( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBuffer3f",0x309a9a70,"lime.audio.ALAudioContext.getBuffer3f","lime/audio/ALAudioContext.hx",238,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(238)
	return ::lime::audio::openal::AL_obj::getBuffer3f(buffer,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBuffer3f,return )

Array< int > ALAudioContext_obj::getBuffer3i( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBuffer3i",0x309a9a73,"lime.audio.ALAudioContext.getBuffer3i","lime/audio/ALAudioContext.hx",245,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(245)
	return ::lime::audio::openal::AL_obj::getBuffer3i(buffer,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBuffer3i,return )

Float ALAudioContext_obj::getBufferf( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferf",0xafdbf569,"lime.audio.ALAudioContext.getBufferf","lime/audio/ALAudioContext.hx",252,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(252)
	return ::lime::audio::openal::AL_obj::getBufferf(buffer,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBufferf,return )

Array< Float > ALAudioContext_obj::getBufferfv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferfv",0x309ac6ed,"lime.audio.ALAudioContext.getBufferfv","lime/audio/ALAudioContext.hx",259,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(259)
		return ::lime::audio::openal::AL_obj::getBufferfv(buffer,param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getBufferfv,return )

int ALAudioContext_obj::getBufferi( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferi",0xafdbf56c,"lime.audio.ALAudioContext.getBufferi","lime/audio/ALAudioContext.hx",266,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(266)
	return ::lime::audio::openal::AL_obj::getBufferi(buffer,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBufferi,return )

Array< int > ALAudioContext_obj::getBufferiv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferiv",0x309ac98a,"lime.audio.ALAudioContext.getBufferiv","lime/audio/ALAudioContext.hx",273,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(273)
		return ::lime::audio::openal::AL_obj::getBufferiv(buffer,param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getBufferiv,return )

Float ALAudioContext_obj::getDouble( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getDouble",0x0a9b4a6e,"lime.audio.ALAudioContext.getDouble","lime/audio/ALAudioContext.hx",280,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(280)
	return ::lime::audio::openal::AL_obj::getDouble(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getDouble,return )

Array< Float > ALAudioContext_obj::getDoublev( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getDoublev",0x3d45d648,"lime.audio.ALAudioContext.getDoublev","lime/audio/ALAudioContext.hx",287,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(287)
		return ::lime::audio::openal::AL_obj::getDoublev(param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getDoublev,return )

int ALAudioContext_obj::getEnumValue( ::String ename){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getEnumValue",0xcd4d1973,"lime.audio.ALAudioContext.getEnumValue","lime/audio/ALAudioContext.hx",294,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ename,"ename")
	HX_STACK_LINE(294)
	return ::lime::audio::openal::AL_obj::getEnumValue(ename);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getEnumValue,return )

int ALAudioContext_obj::getError( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getError",0x609d870b,"lime.audio.ALAudioContext.getError","lime/audio/ALAudioContext.hx",301,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	return ::lime::audio::openal::AL_obj::getError();
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,getError,return )

::String ALAudioContext_obj::getErrorString( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getErrorString",0x152d7e3c,"lime.audio.ALAudioContext.getErrorString","lime/audio/ALAudioContext.hx",308,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(308)
	return ::lime::audio::openal::AL_obj::getErrorString();
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,getErrorString,return )

Float ALAudioContext_obj::getFloat( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getFloat",0xf00a80df,"lime.audio.ALAudioContext.getFloat","lime/audio/ALAudioContext.hx",315,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(315)
	return ::lime::audio::openal::AL_obj::getFloat(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getFloat,return )

Array< Float > ALAudioContext_obj::getFloatv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getFloatv",0x192642b7,"lime.audio.ALAudioContext.getFloatv","lime/audio/ALAudioContext.hx",322,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(322)
		return ::lime::audio::openal::AL_obj::getFloatv(param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getFloatv,return )

int ALAudioContext_obj::getInteger( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getInteger",0x15670fc1,"lime.audio.ALAudioContext.getInteger","lime/audio/ALAudioContext.hx",329,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(329)
	return ::lime::audio::openal::AL_obj::getInteger(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getInteger,return )

Array< int > ALAudioContext_obj::getIntegerv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getIntegerv",0xa4c6b995,"lime.audio.ALAudioContext.getIntegerv","lime/audio/ALAudioContext.hx",336,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(336)
		return ::lime::audio::openal::AL_obj::getIntegerv(param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getIntegerv,return )

Array< Float > ALAudioContext_obj::getListener3f( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListener3f",0x2119c424,"lime.audio.ALAudioContext.getListener3f","lime/audio/ALAudioContext.hx",343,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(343)
	return ::lime::audio::openal::AL_obj::getListener3f(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListener3f,return )

Array< int > ALAudioContext_obj::getListener3i( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListener3i",0x2119c427,"lime.audio.ALAudioContext.getListener3i","lime/audio/ALAudioContext.hx",350,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(350)
	return ::lime::audio::openal::AL_obj::getListener3i(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListener3i,return )

Float ALAudioContext_obj::getListenerf( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListenerf",0x98d47e35,"lime.audio.ALAudioContext.getListenerf","lime/audio/ALAudioContext.hx",357,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(357)
	return ::lime::audio::openal::AL_obj::getListenerf(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListenerf,return )

Array< Float > ALAudioContext_obj::getListenerfv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListenerfv",0x2119f0a1,"lime.audio.ALAudioContext.getListenerfv","lime/audio/ALAudioContext.hx",364,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(364)
		return ::lime::audio::openal::AL_obj::getListenerfv(param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getListenerfv,return )

int ALAudioContext_obj::getListeneri( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListeneri",0x98d47e38,"lime.audio.ALAudioContext.getListeneri","lime/audio/ALAudioContext.hx",371,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(371)
	return ::lime::audio::openal::AL_obj::getListeneri(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListeneri,return )

Array< int > ALAudioContext_obj::getListeneriv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListeneriv",0x2119f33e,"lime.audio.ALAudioContext.getListeneriv","lime/audio/ALAudioContext.hx",378,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(378)
		return ::lime::audio::openal::AL_obj::getListeneriv(param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getListeneriv,return )

Dynamic ALAudioContext_obj::getProcAddress( ::String fname){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getProcAddress",0x1793a041,"lime.audio.ALAudioContext.getProcAddress","lime/audio/ALAudioContext.hx",385,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fname,"fname")
	HX_STACK_LINE(385)
	return ::lime::audio::openal::AL_obj::getProcAddress(fname);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getProcAddress,return )

Array< Float > ALAudioContext_obj::getSource3f( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSource3f",0xea407b0b,"lime.audio.ALAudioContext.getSource3f","lime/audio/ALAudioContext.hx",392,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(392)
	return ::lime::audio::openal::AL_obj::getSource3f(source,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSource3f,return )

Float ALAudioContext_obj::getSourcef( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourcef",0xb794612e,"lime.audio.ALAudioContext.getSourcef","lime/audio/ALAudioContext.hx",399,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(399)
	return ::lime::audio::openal::AL_obj::getSourcef(source,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcef,return )

Array< int > ALAudioContext_obj::getSource3i( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSource3i",0xea407b0e,"lime.audio.ALAudioContext.getSource3i","lime/audio/ALAudioContext.hx",406,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(406)
	return ::lime::audio::openal::AL_obj::getSource3i(source,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSource3i,return )

Array< Float > ALAudioContext_obj::getSourcefv( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourcefv",0xea40a788,"lime.audio.ALAudioContext.getSourcefv","lime/audio/ALAudioContext.hx",413,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(413)
	return ::lime::audio::openal::AL_obj::getSourcefv(source,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcefv,return )

int ALAudioContext_obj::getSourcei( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourcei",0xb7946131,"lime.audio.ALAudioContext.getSourcei","lime/audio/ALAudioContext.hx",420,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(420)
	return ::lime::audio::openal::AL_obj::getSourcei(source,param);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcei,return )

Array< int > ALAudioContext_obj::getSourceiv( int source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourceiv",0xea40aa25,"lime.audio.ALAudioContext.getSourceiv","lime/audio/ALAudioContext.hx",427,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(427)
		return ::lime::audio::openal::AL_obj::getSourceiv(source,param,count);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getSourceiv,return )

::String ALAudioContext_obj::getString( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getString",0xe900482e,"lime.audio.ALAudioContext.getString","lime/audio/ALAudioContext.hx",434,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(434)
	return ::lime::audio::openal::AL_obj::getString(param);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getString,return )

bool ALAudioContext_obj::isBuffer( int buffer){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isBuffer",0xb69b0443,"lime.audio.ALAudioContext.isBuffer","lime/audio/ALAudioContext.hx",441,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(441)
	return ::lime::audio::openal::AL_obj::isBuffer(buffer);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isBuffer,return )

bool ALAudioContext_obj::isEnabled( int capability){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isEnabled",0xdda917de,"lime.audio.ALAudioContext.isEnabled","lime/audio/ALAudioContext.hx",448,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(capability,"capability")
	HX_STACK_LINE(448)
	return ::lime::audio::openal::AL_obj::isEnabled(capability);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isEnabled,return )

bool ALAudioContext_obj::isExtensionPresent( ::String extname){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isExtensionPresent",0x8f26e63f,"lime.audio.ALAudioContext.isExtensionPresent","lime/audio/ALAudioContext.hx",455,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(extname,"extname")
	HX_STACK_LINE(455)
	return ::lime::audio::openal::AL_obj::isExtensionPresent(extname);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isExtensionPresent,return )

bool ALAudioContext_obj::isSource( int source){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isSource",0x1837f81e,"lime.audio.ALAudioContext.isSource","lime/audio/ALAudioContext.hx",462,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(462)
	return ::lime::audio::openal::AL_obj::isSource(source);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isSource,return )

Void ALAudioContext_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listener3f",0xd7f3fe40,"lime.audio.ALAudioContext.listener3f","lime/audio/ALAudioContext.hx",469,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(469)
		::lime::audio::openal::AL_obj::listener3f(param,value1,value2,value3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ALAudioContext_obj,listener3f,(void))

Void ALAudioContext_obj::listener3i( int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listener3i",0xd7f3fe43,"lime.audio.ALAudioContext.listener3i","lime/audio/ALAudioContext.hx",476,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(476)
		::lime::audio::openal::AL_obj::listener3i(param,value1,value2,value3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ALAudioContext_obj,listener3i,(void))

Void ALAudioContext_obj::listenerf( int param,Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listenerf",0x4f07fb99,"lime.audio.ALAudioContext.listenerf","lime/audio/ALAudioContext.hx",483,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(483)
		::lime::audio::openal::AL_obj::listenerf(param,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listenerf,(void))

Void ALAudioContext_obj::listenerfv( int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listenerfv",0xd7f42abd,"lime.audio.ALAudioContext.listenerfv","lime/audio/ALAudioContext.hx",490,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(490)
		::lime::audio::openal::AL_obj::listenerfv(param,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listenerfv,(void))

Void ALAudioContext_obj::listeneri( int param,int value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listeneri",0x4f07fb9c,"lime.audio.ALAudioContext.listeneri","lime/audio/ALAudioContext.hx",497,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(497)
		::lime::audio::openal::AL_obj::listeneri(param,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listeneri,(void))

Void ALAudioContext_obj::listeneriv( int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listeneriv",0xd7f42d5a,"lime.audio.ALAudioContext.listeneriv","lime/audio/ALAudioContext.hx",504,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(504)
		::lime::audio::openal::AL_obj::listeneriv(param,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listeneriv,(void))

Void ALAudioContext_obj::source3f( int source,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","source3f",0xf440b627,"lime.audio.ALAudioContext.source3f","lime/audio/ALAudioContext.hx",511,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(511)
		::lime::audio::openal::AL_obj::source3f(source,param,value1,value2,value3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,source3f,(void))

Void ALAudioContext_obj::source3i( int source,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","source3i",0xf440b62a,"lime.audio.ALAudioContext.source3i","lime/audio/ALAudioContext.hx",518,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(518)
		::lime::audio::openal::AL_obj::source3i(source,param,value1,value2,value3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,source3i,(void))

Void ALAudioContext_obj::sourcef( int source,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcef",0x851cfd92,"lime.audio.ALAudioContext.sourcef","lime/audio/ALAudioContext.hx",525,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(525)
		::lime::audio::openal::AL_obj::sourcef(source,param,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcef,(void))

Void ALAudioContext_obj::sourcefv( int source,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcefv",0xf440e2a4,"lime.audio.ALAudioContext.sourcefv","lime/audio/ALAudioContext.hx",532,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(532)
		::lime::audio::openal::AL_obj::sourcefv(source,param,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcefv,(void))

Void ALAudioContext_obj::sourcei( int source,int param,int value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcei",0x851cfd95,"lime.audio.ALAudioContext.sourcei","lime/audio/ALAudioContext.hx",539,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(539)
		::lime::audio::openal::AL_obj::sourcei(source,param,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcei,(void))

Void ALAudioContext_obj::sourceiv( int source,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceiv",0xf440e541,"lime.audio.ALAudioContext.sourceiv","lime/audio/ALAudioContext.hx",546,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(546)
		::lime::audio::openal::AL_obj::sourceiv(source,param,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourceiv,(void))

Void ALAudioContext_obj::sourcePlay( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePlay",0x21a7e068,"lime.audio.ALAudioContext.sourcePlay","lime/audio/ALAudioContext.hx",553,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(553)
		::lime::audio::openal::AL_obj::sourcePlay(source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePlay,(void))

Void ALAudioContext_obj::sourcePlayv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePlayv",0x513c7b0e,"lime.audio.ALAudioContext.sourcePlayv","lime/audio/ALAudioContext.hx",560,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(560)
		::lime::audio::openal::AL_obj::sourcePlayv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePlayv,(void))

Void ALAudioContext_obj::sourceStop( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceStop",0x23a9a276,"lime.audio.ALAudioContext.sourceStop","lime/audio/ALAudioContext.hx",567,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(567)
		::lime::audio::openal::AL_obj::sourceStop(source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceStop,(void))

Void ALAudioContext_obj::sourceStopv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceStopv",0x10c48540,"lime.audio.ALAudioContext.sourceStopv","lime/audio/ALAudioContext.hx",574,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(574)
		::lime::audio::openal::AL_obj::sourceStopv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceStopv,(void))

Void ALAudioContext_obj::sourceRewind( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceRewind",0x9716616f,"lime.audio.ALAudioContext.sourceRewind","lime/audio/ALAudioContext.hx",581,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(581)
		::lime::audio::openal::AL_obj::sourceRewind(source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceRewind,(void))

Void ALAudioContext_obj::sourceRewindv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceRewindv",0x9c7ee027,"lime.audio.ALAudioContext.sourceRewindv","lime/audio/ALAudioContext.hx",588,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(588)
		::lime::audio::openal::AL_obj::sourceRewindv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceRewindv,(void))

Void ALAudioContext_obj::sourcePause( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePause",0x4a064a02,"lime.audio.ALAudioContext.sourcePause","lime/audio/ALAudioContext.hx",595,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(595)
		::lime::audio::openal::AL_obj::sourcePause(source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePause,(void))

Void ALAudioContext_obj::sourcePausev( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePausev",0x7b7a7834,"lime.audio.ALAudioContext.sourcePausev","lime/audio/ALAudioContext.hx",602,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(602)
		::lime::audio::openal::AL_obj::sourcePausev(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePausev,(void))

Void ALAudioContext_obj::sourceQueueBuffer( int source,int buffer){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceQueueBuffer",0xe92c057d,"lime.audio.ALAudioContext.sourceQueueBuffer","lime/audio/ALAudioContext.hx",609,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(609)
		::lime::audio::openal::AL_obj::sourceQueueBuffer(source,buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,sourceQueueBuffer,(void))

Void ALAudioContext_obj::sourceQueueBuffers( int source,int nb,Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceQueueBuffers",0x1d58c856,"lime.audio.ALAudioContext.sourceQueueBuffers","lime/audio/ALAudioContext.hx",616,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(nb,"nb")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(616)
		::lime::audio::openal::AL_obj::sourceQueueBuffers(source,nb,buffers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourceQueueBuffers,(void))

int ALAudioContext_obj::sourceUnqueueBuffer( int source){
	HX_STACK_FRAME("lime.audio.ALAudioContext","sourceUnqueueBuffer",0xf00896c4,"lime.audio.ALAudioContext.sourceUnqueueBuffer","lime/audio/ALAudioContext.hx",623,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(623)
	return ::lime::audio::openal::AL_obj::sourceUnqueueBuffer(source);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceUnqueueBuffer,return )

Array< int > ALAudioContext_obj::sourceUnqueueBuffers( int source,int nb){
	HX_STACK_FRAME("lime.audio.ALAudioContext","sourceUnqueueBuffers",0x177b552f,"lime.audio.ALAudioContext.sourceUnqueueBuffers","lime/audio/ALAudioContext.hx",630,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(nb,"nb")
	HX_STACK_LINE(630)
	return ::lime::audio::openal::AL_obj::sourceUnqueueBuffers(source,nb);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,sourceUnqueueBuffers,return )

Void ALAudioContext_obj::speedOfSound( Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","speedOfSound",0xa01163aa,"lime.audio.ALAudioContext.speedOfSound","lime/audio/ALAudioContext.hx",637,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(637)
		::lime::audio::openal::AL_obj::speedOfSound(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,speedOfSound,(void))


ALAudioContext_obj::ALAudioContext_obj()
{
}

Dynamic ALAudioContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { return GAIN; }
		if (HX_FIELD_EQ(inName,"BITS") ) { return BITS; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { return SIZE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { return PITCH; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return BUFFER; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { return PAUSED; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { return STATIC; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { return LOOPING; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { return INITIAL; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { return PLAYING; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { return STOPPED; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"bufferf") ) { return bufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferi") ) { return bufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcef") ) { return sourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcei") ) { return sourcei_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { return POSITION; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { return VELOCITY; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { return MIN_GAIN; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { return MAX_GAIN; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return CHANNELS; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { return buffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { return buffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { return bufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { return bufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isSource") ) { return isSource_dyn(); }
		if (HX_FIELD_EQ(inName,"source3f") ) { return source3f_dyn(); }
		if (HX_FIELD_EQ(inName,"source3i") ) { return source3i_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { return sourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { return sourceiv_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { return DIRECTION; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { return STREAMING; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"genSource") ) { return genSource_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { return genBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { return getFloatv_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerf") ) { return listenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneri") ) { return listeneri_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { return SEC_OFFSET; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"genSources") ) { return genSources_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { return genBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return getBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { return getBufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { return getBufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { return getDoublev_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger") ) { return getInteger_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { return getSourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { return getSourcei_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3f") ) { return listener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3i") ) { return listener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { return listenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { return listeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { return sourcePlay_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { return sourceStop_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { return ORIENTATION; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { return BYTE_OFFSET; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { return SOURCE_TYPE; }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { return getBooleanv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { return getBuffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { return getBuffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { return getBufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { return getBufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { return getSource3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { return getSource3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { return getSourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { return getSourceiv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { return sourcePlayv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { return sourceStopv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { return sourcePause_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { return SOURCE_STATE; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { return MAX_DISTANCE; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { return UNDETERMINED; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { return FORMAT_MONO8; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { return INVALID_NAME; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { return deleteSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { return getEnumValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { return getListenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { return getListeneri_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { return sourceRewind_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { return sourcePausev_dyn(); }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { return speedOfSound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { return SAMPLE_OFFSET; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { return FORMAT_MONO16; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { return deleteBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { return deleteSources_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { return distanceModel_dyn(); }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { return dopplerFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { return getListener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { return getListener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { return getListenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { return getListeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { return sourceRewindv_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { return BUFFERS_QUEUED; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { return ROLLOFF_FACTOR; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { return FORMAT_STEREO8; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { return DOPPLER_FACTOR; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { return SPEED_OF_SOUND; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { return DISTANCE_MODEL; }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { return getProcAddress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { return SOURCE_RELATIVE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { return CONE_OUTER_GAIN; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { return FORMAT_STEREO16; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { return LINEAR_DISTANCE; }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { return dopplerVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { return CONE_INNER_ANGLE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { return CONE_OUTER_ANGLE; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { return DOPPLER_VELOCITY; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { return INVERSE_DISTANCE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { return BUFFERS_PROCESSED; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { return EXPONENT_DISTANCE; }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { return sourceQueueBuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { return REFERENCE_DISTANCE; }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { return isExtensionPresent_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { return sourceQueueBuffers_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { return sourceUnqueueBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { return sourceUnqueueBuffers_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { return LINEAR_DISTANCE_CLAMPED; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { return INVERSE_DISTANCE_CLAMPED; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { return EXPONENT_DISTANCE_CLAMPED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALAudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BITS") ) { BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { PITCH=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { PAUSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { STATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { INITIAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { PLAYING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { STOPPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { POSITION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { MIN_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { MAX_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { DIRECTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { STREAMING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { SEC_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { ORIENTATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { BYTE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { SOURCE_TYPE=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { SOURCE_STATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { MAX_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { UNDETERMINED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { FORMAT_MONO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { INVALID_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { SAMPLE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { FORMAT_MONO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { BUFFERS_QUEUED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { ROLLOFF_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { FORMAT_STEREO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { DOPPLER_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { SPEED_OF_SOUND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { DISTANCE_MODEL=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { SOURCE_RELATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { CONE_OUTER_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { FORMAT_STEREO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { LINEAR_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { CONE_INNER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { CONE_OUTER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { DOPPLER_VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { INVERSE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { BUFFERS_PROCESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { EXPONENT_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { REFERENCE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { LINEAR_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { INVERSE_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { EXPONENT_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("NONE"));
	outFields->push(HX_CSTRING("FALSE"));
	outFields->push(HX_CSTRING("TRUE"));
	outFields->push(HX_CSTRING("SOURCE_RELATIVE"));
	outFields->push(HX_CSTRING("CONE_INNER_ANGLE"));
	outFields->push(HX_CSTRING("CONE_OUTER_ANGLE"));
	outFields->push(HX_CSTRING("PITCH"));
	outFields->push(HX_CSTRING("POSITION"));
	outFields->push(HX_CSTRING("DIRECTION"));
	outFields->push(HX_CSTRING("VELOCITY"));
	outFields->push(HX_CSTRING("LOOPING"));
	outFields->push(HX_CSTRING("BUFFER"));
	outFields->push(HX_CSTRING("GAIN"));
	outFields->push(HX_CSTRING("MIN_GAIN"));
	outFields->push(HX_CSTRING("MAX_GAIN"));
	outFields->push(HX_CSTRING("ORIENTATION"));
	outFields->push(HX_CSTRING("SOURCE_STATE"));
	outFields->push(HX_CSTRING("INITIAL"));
	outFields->push(HX_CSTRING("PLAYING"));
	outFields->push(HX_CSTRING("PAUSED"));
	outFields->push(HX_CSTRING("STOPPED"));
	outFields->push(HX_CSTRING("BUFFERS_QUEUED"));
	outFields->push(HX_CSTRING("BUFFERS_PROCESSED"));
	outFields->push(HX_CSTRING("REFERENCE_DISTANCE"));
	outFields->push(HX_CSTRING("ROLLOFF_FACTOR"));
	outFields->push(HX_CSTRING("CONE_OUTER_GAIN"));
	outFields->push(HX_CSTRING("MAX_DISTANCE"));
	outFields->push(HX_CSTRING("SEC_OFFSET"));
	outFields->push(HX_CSTRING("SAMPLE_OFFSET"));
	outFields->push(HX_CSTRING("BYTE_OFFSET"));
	outFields->push(HX_CSTRING("SOURCE_TYPE"));
	outFields->push(HX_CSTRING("STATIC"));
	outFields->push(HX_CSTRING("STREAMING"));
	outFields->push(HX_CSTRING("UNDETERMINED"));
	outFields->push(HX_CSTRING("FORMAT_MONO8"));
	outFields->push(HX_CSTRING("FORMAT_MONO16"));
	outFields->push(HX_CSTRING("FORMAT_STEREO8"));
	outFields->push(HX_CSTRING("FORMAT_STEREO16"));
	outFields->push(HX_CSTRING("FREQUENCY"));
	outFields->push(HX_CSTRING("BITS"));
	outFields->push(HX_CSTRING("CHANNELS"));
	outFields->push(HX_CSTRING("SIZE"));
	outFields->push(HX_CSTRING("NO_ERROR"));
	outFields->push(HX_CSTRING("INVALID_NAME"));
	outFields->push(HX_CSTRING("INVALID_ENUM"));
	outFields->push(HX_CSTRING("INVALID_VALUE"));
	outFields->push(HX_CSTRING("INVALID_OPERATION"));
	outFields->push(HX_CSTRING("OUT_OF_MEMORY"));
	outFields->push(HX_CSTRING("VENDOR"));
	outFields->push(HX_CSTRING("VERSION"));
	outFields->push(HX_CSTRING("RENDERER"));
	outFields->push(HX_CSTRING("EXTENSIONS"));
	outFields->push(HX_CSTRING("DOPPLER_FACTOR"));
	outFields->push(HX_CSTRING("SPEED_OF_SOUND"));
	outFields->push(HX_CSTRING("DOPPLER_VELOCITY"));
	outFields->push(HX_CSTRING("DISTANCE_MODEL"));
	outFields->push(HX_CSTRING("INVERSE_DISTANCE"));
	outFields->push(HX_CSTRING("INVERSE_DISTANCE_CLAMPED"));
	outFields->push(HX_CSTRING("LINEAR_DISTANCE"));
	outFields->push(HX_CSTRING("LINEAR_DISTANCE_CLAMPED"));
	outFields->push(HX_CSTRING("EXPONENT_DISTANCE"));
	outFields->push(HX_CSTRING("EXPONENT_DISTANCE_CLAMPED"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,NONE),HX_CSTRING("NONE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FALSE),HX_CSTRING("FALSE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,TRUE),HX_CSTRING("TRUE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_RELATIVE),HX_CSTRING("SOURCE_RELATIVE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_INNER_ANGLE),HX_CSTRING("CONE_INNER_ANGLE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_OUTER_ANGLE),HX_CSTRING("CONE_OUTER_ANGLE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PITCH),HX_CSTRING("PITCH")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,POSITION),HX_CSTRING("POSITION")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DIRECTION),HX_CSTRING("DIRECTION")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VELOCITY),HX_CSTRING("VELOCITY")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LOOPING),HX_CSTRING("LOOPING")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFER),HX_CSTRING("BUFFER")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,GAIN),HX_CSTRING("GAIN")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MIN_GAIN),HX_CSTRING("MIN_GAIN")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MAX_GAIN),HX_CSTRING("MAX_GAIN")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,ORIENTATION),HX_CSTRING("ORIENTATION")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_STATE),HX_CSTRING("SOURCE_STATE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INITIAL),HX_CSTRING("INITIAL")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PLAYING),HX_CSTRING("PLAYING")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PAUSED),HX_CSTRING("PAUSED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STOPPED),HX_CSTRING("STOPPED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFERS_QUEUED),HX_CSTRING("BUFFERS_QUEUED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFERS_PROCESSED),HX_CSTRING("BUFFERS_PROCESSED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,REFERENCE_DISTANCE),HX_CSTRING("REFERENCE_DISTANCE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,ROLLOFF_FACTOR),HX_CSTRING("ROLLOFF_FACTOR")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_OUTER_GAIN),HX_CSTRING("CONE_OUTER_GAIN")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MAX_DISTANCE),HX_CSTRING("MAX_DISTANCE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SEC_OFFSET),HX_CSTRING("SEC_OFFSET")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SAMPLE_OFFSET),HX_CSTRING("SAMPLE_OFFSET")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BYTE_OFFSET),HX_CSTRING("BYTE_OFFSET")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_TYPE),HX_CSTRING("SOURCE_TYPE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STATIC),HX_CSTRING("STATIC")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STREAMING),HX_CSTRING("STREAMING")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,UNDETERMINED),HX_CSTRING("UNDETERMINED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_MONO8),HX_CSTRING("FORMAT_MONO8")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_MONO16),HX_CSTRING("FORMAT_MONO16")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_STEREO8),HX_CSTRING("FORMAT_STEREO8")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_STEREO16),HX_CSTRING("FORMAT_STEREO16")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FREQUENCY),HX_CSTRING("FREQUENCY")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BITS),HX_CSTRING("BITS")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CHANNELS),HX_CSTRING("CHANNELS")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SIZE),HX_CSTRING("SIZE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,NO_ERROR),HX_CSTRING("NO_ERROR")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_NAME),HX_CSTRING("INVALID_NAME")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_ENUM),HX_CSTRING("INVALID_ENUM")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_VALUE),HX_CSTRING("INVALID_VALUE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_OPERATION),HX_CSTRING("INVALID_OPERATION")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,OUT_OF_MEMORY),HX_CSTRING("OUT_OF_MEMORY")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VENDOR),HX_CSTRING("VENDOR")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VERSION),HX_CSTRING("VERSION")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,RENDERER),HX_CSTRING("RENDERER")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXTENSIONS),HX_CSTRING("EXTENSIONS")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DOPPLER_FACTOR),HX_CSTRING("DOPPLER_FACTOR")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SPEED_OF_SOUND),HX_CSTRING("SPEED_OF_SOUND")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DOPPLER_VELOCITY),HX_CSTRING("DOPPLER_VELOCITY")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DISTANCE_MODEL),HX_CSTRING("DISTANCE_MODEL")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVERSE_DISTANCE),HX_CSTRING("INVERSE_DISTANCE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVERSE_DISTANCE_CLAMPED),HX_CSTRING("INVERSE_DISTANCE_CLAMPED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LINEAR_DISTANCE),HX_CSTRING("LINEAR_DISTANCE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LINEAR_DISTANCE_CLAMPED),HX_CSTRING("LINEAR_DISTANCE_CLAMPED")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXPONENT_DISTANCE),HX_CSTRING("EXPONENT_DISTANCE")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXPONENT_DISTANCE_CLAMPED),HX_CSTRING("EXPONENT_DISTANCE_CLAMPED")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("FALSE"),
	HX_CSTRING("TRUE"),
	HX_CSTRING("SOURCE_RELATIVE"),
	HX_CSTRING("CONE_INNER_ANGLE"),
	HX_CSTRING("CONE_OUTER_ANGLE"),
	HX_CSTRING("PITCH"),
	HX_CSTRING("POSITION"),
	HX_CSTRING("DIRECTION"),
	HX_CSTRING("VELOCITY"),
	HX_CSTRING("LOOPING"),
	HX_CSTRING("BUFFER"),
	HX_CSTRING("GAIN"),
	HX_CSTRING("MIN_GAIN"),
	HX_CSTRING("MAX_GAIN"),
	HX_CSTRING("ORIENTATION"),
	HX_CSTRING("SOURCE_STATE"),
	HX_CSTRING("INITIAL"),
	HX_CSTRING("PLAYING"),
	HX_CSTRING("PAUSED"),
	HX_CSTRING("STOPPED"),
	HX_CSTRING("BUFFERS_QUEUED"),
	HX_CSTRING("BUFFERS_PROCESSED"),
	HX_CSTRING("REFERENCE_DISTANCE"),
	HX_CSTRING("ROLLOFF_FACTOR"),
	HX_CSTRING("CONE_OUTER_GAIN"),
	HX_CSTRING("MAX_DISTANCE"),
	HX_CSTRING("SEC_OFFSET"),
	HX_CSTRING("SAMPLE_OFFSET"),
	HX_CSTRING("BYTE_OFFSET"),
	HX_CSTRING("SOURCE_TYPE"),
	HX_CSTRING("STATIC"),
	HX_CSTRING("STREAMING"),
	HX_CSTRING("UNDETERMINED"),
	HX_CSTRING("FORMAT_MONO8"),
	HX_CSTRING("FORMAT_MONO16"),
	HX_CSTRING("FORMAT_STEREO8"),
	HX_CSTRING("FORMAT_STEREO16"),
	HX_CSTRING("FREQUENCY"),
	HX_CSTRING("BITS"),
	HX_CSTRING("CHANNELS"),
	HX_CSTRING("SIZE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_NAME"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("EXTENSIONS"),
	HX_CSTRING("DOPPLER_FACTOR"),
	HX_CSTRING("SPEED_OF_SOUND"),
	HX_CSTRING("DOPPLER_VELOCITY"),
	HX_CSTRING("DISTANCE_MODEL"),
	HX_CSTRING("INVERSE_DISTANCE"),
	HX_CSTRING("INVERSE_DISTANCE_CLAMPED"),
	HX_CSTRING("LINEAR_DISTANCE"),
	HX_CSTRING("LINEAR_DISTANCE_CLAMPED"),
	HX_CSTRING("EXPONENT_DISTANCE"),
	HX_CSTRING("EXPONENT_DISTANCE_CLAMPED"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("buffer3f"),
	HX_CSTRING("buffer3i"),
	HX_CSTRING("bufferf"),
	HX_CSTRING("bufferfv"),
	HX_CSTRING("bufferi"),
	HX_CSTRING("bufferiv"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("deleteBuffers"),
	HX_CSTRING("deleteSource"),
	HX_CSTRING("deleteSources"),
	HX_CSTRING("disable"),
	HX_CSTRING("distanceModel"),
	HX_CSTRING("dopplerFactor"),
	HX_CSTRING("dopplerVelocity"),
	HX_CSTRING("enable"),
	HX_CSTRING("genSource"),
	HX_CSTRING("genSources"),
	HX_CSTRING("genBuffer"),
	HX_CSTRING("genBuffers"),
	HX_CSTRING("getBoolean"),
	HX_CSTRING("getBooleanv"),
	HX_CSTRING("getBuffer3f"),
	HX_CSTRING("getBuffer3i"),
	HX_CSTRING("getBufferf"),
	HX_CSTRING("getBufferfv"),
	HX_CSTRING("getBufferi"),
	HX_CSTRING("getBufferiv"),
	HX_CSTRING("getDouble"),
	HX_CSTRING("getDoublev"),
	HX_CSTRING("getEnumValue"),
	HX_CSTRING("getError"),
	HX_CSTRING("getErrorString"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getFloatv"),
	HX_CSTRING("getInteger"),
	HX_CSTRING("getIntegerv"),
	HX_CSTRING("getListener3f"),
	HX_CSTRING("getListener3i"),
	HX_CSTRING("getListenerf"),
	HX_CSTRING("getListenerfv"),
	HX_CSTRING("getListeneri"),
	HX_CSTRING("getListeneriv"),
	HX_CSTRING("getProcAddress"),
	HX_CSTRING("getSource3f"),
	HX_CSTRING("getSourcef"),
	HX_CSTRING("getSource3i"),
	HX_CSTRING("getSourcefv"),
	HX_CSTRING("getSourcei"),
	HX_CSTRING("getSourceiv"),
	HX_CSTRING("getString"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isExtensionPresent"),
	HX_CSTRING("isSource"),
	HX_CSTRING("listener3f"),
	HX_CSTRING("listener3i"),
	HX_CSTRING("listenerf"),
	HX_CSTRING("listenerfv"),
	HX_CSTRING("listeneri"),
	HX_CSTRING("listeneriv"),
	HX_CSTRING("source3f"),
	HX_CSTRING("source3i"),
	HX_CSTRING("sourcef"),
	HX_CSTRING("sourcefv"),
	HX_CSTRING("sourcei"),
	HX_CSTRING("sourceiv"),
	HX_CSTRING("sourcePlay"),
	HX_CSTRING("sourcePlayv"),
	HX_CSTRING("sourceStop"),
	HX_CSTRING("sourceStopv"),
	HX_CSTRING("sourceRewind"),
	HX_CSTRING("sourceRewindv"),
	HX_CSTRING("sourcePause"),
	HX_CSTRING("sourcePausev"),
	HX_CSTRING("sourceQueueBuffer"),
	HX_CSTRING("sourceQueueBuffers"),
	HX_CSTRING("sourceUnqueueBuffer"),
	HX_CSTRING("sourceUnqueueBuffers"),
	HX_CSTRING("speedOfSound"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALAudioContext_obj::__mClass,"__mClass");
};

#endif

Class ALAudioContext_obj::__mClass;

void ALAudioContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.ALAudioContext"), hx::TCanCast< ALAudioContext_obj> ,sStaticFields,sMemberFields,
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

void ALAudioContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
