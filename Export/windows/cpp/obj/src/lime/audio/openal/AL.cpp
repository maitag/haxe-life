#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
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
namespace openal{

Void AL_obj::__construct()
{
	return null();
}

//AL_obj::~AL_obj() { }

Dynamic AL_obj::__CreateEmpty() { return  new AL_obj; }
hx::ObjectPtr< AL_obj > AL_obj::__new()
{  hx::ObjectPtr< AL_obj > result = new AL_obj();
	result->__construct();
	return result;}

Dynamic AL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AL_obj > result = new AL_obj();
	result->__construct();
	return result;}

int AL_obj::NONE;

int AL_obj::FALSE;

int AL_obj::TRUE;

int AL_obj::SOURCE_RELATIVE;

int AL_obj::CONE_INNER_ANGLE;

int AL_obj::CONE_OUTER_ANGLE;

int AL_obj::PITCH;

int AL_obj::POSITION;

int AL_obj::DIRECTION;

int AL_obj::VELOCITY;

int AL_obj::LOOPING;

int AL_obj::BUFFER;

int AL_obj::GAIN;

int AL_obj::MIN_GAIN;

int AL_obj::MAX_GAIN;

int AL_obj::ORIENTATION;

int AL_obj::SOURCE_STATE;

int AL_obj::INITIAL;

int AL_obj::PLAYING;

int AL_obj::PAUSED;

int AL_obj::STOPPED;

int AL_obj::BUFFERS_QUEUED;

int AL_obj::BUFFERS_PROCESSED;

int AL_obj::REFERENCE_DISTANCE;

int AL_obj::ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAIN;

int AL_obj::MAX_DISTANCE;

int AL_obj::SEC_OFFSET;

int AL_obj::SAMPLE_OFFSET;

int AL_obj::BYTE_OFFSET;

int AL_obj::SOURCE_TYPE;

int AL_obj::STATIC;

int AL_obj::STREAMING;

int AL_obj::UNDETERMINED;

int AL_obj::FORMAT_MONO8;

int AL_obj::FORMAT_MONO16;

int AL_obj::FORMAT_STEREO8;

int AL_obj::FORMAT_STEREO16;

int AL_obj::FREQUENCY;

int AL_obj::BITS;

int AL_obj::CHANNELS;

int AL_obj::SIZE;

int AL_obj::NO_ERROR;

int AL_obj::INVALID_NAME;

int AL_obj::INVALID_ENUM;

int AL_obj::INVALID_VALUE;

int AL_obj::INVALID_OPERATION;

int AL_obj::OUT_OF_MEMORY;

int AL_obj::VENDOR;

int AL_obj::VERSION;

int AL_obj::RENDERER;

int AL_obj::EXTENSIONS;

int AL_obj::DOPPLER_FACTOR;

int AL_obj::SPEED_OF_SOUND;

int AL_obj::DOPPLER_VELOCITY;

int AL_obj::DISTANCE_MODEL;

int AL_obj::INVERSE_DISTANCE;

int AL_obj::INVERSE_DISTANCE_CLAMPED;

int AL_obj::LINEAR_DISTANCE;

int AL_obj::LINEAR_DISTANCE_CLAMPED;

int AL_obj::EXPONENT_DISTANCE;

int AL_obj::EXPONENT_DISTANCE_CLAMPED;

Void AL_obj::bufferData( int buffer,int format,::lime::utils::ByteArray data,int size,int freq){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferData",0x71908845,"lime.audio.openal.AL.bufferData","lime/audio/openal/AL.hx",75,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(freq,"freq")
		HX_STACK_LINE(78)
		::lime::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		::lime::audio::openal::AL_obj::lime_al_buffer_data(buffer,format,_g,size,freq);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,bufferData,(void))

Void AL_obj::buffer3f( int buffer,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","buffer3f",0x30252e0e,"lime.audio.openal.AL.buffer3f","lime/audio/openal/AL.hx",89,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(89)
		::lime::audio::openal::AL_obj::lime_al_buffer3f(buffer,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3f,(void))

Void AL_obj::buffer3i( int buffer,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","buffer3i",0x30252e11,"lime.audio.openal.AL.buffer3i","lime/audio/openal/AL.hx",98,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(98)
		::lime::audio::openal::AL_obj::lime_al_buffer3i(buffer,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3i,(void))

Void AL_obj::bufferf( int buffer,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferf",0xa7d23f8b,"lime.audio.openal.AL.bufferf","lime/audio/openal/AL.hx",107,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(107)
		::lime::audio::openal::AL_obj::lime_al_bufferf(buffer,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferf,(void))

Void AL_obj::bufferfv( int buffer,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferfv",0x30255a8b,"lime.audio.openal.AL.bufferfv","lime/audio/openal/AL.hx",116,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(116)
		::lime::audio::openal::AL_obj::lime_al_bufferfv(buffer,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferfv,(void))

Void AL_obj::bufferi( int buffer,int param,int value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferi",0xa7d23f8e,"lime.audio.openal.AL.bufferi","lime/audio/openal/AL.hx",125,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(125)
		::lime::audio::openal::AL_obj::lime_al_bufferi(buffer,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferi,(void))

Void AL_obj::bufferiv( int buffer,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferiv",0x30255d28,"lime.audio.openal.AL.bufferiv","lime/audio/openal/AL.hx",134,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(134)
		::lime::audio::openal::AL_obj::lime_al_bufferiv(buffer,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferiv,(void))

Void AL_obj::deleteBuffer( int buffer){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteBuffer",0x6cca2146,"lime.audio.openal.AL.deleteBuffer","lime/audio/openal/AL.hx",143,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(143)
		::lime::audio::openal::AL_obj::lime_al_delete_buffer(buffer);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffer,(void))

Void AL_obj::deleteBuffers( Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteBuffers",0xc412fc6d,"lime.audio.openal.AL.deleteBuffers","lime/audio/openal/AL.hx",152,0x8b371f2c)
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(152)
		::lime::audio::openal::AL_obj::lime_al_delete_buffers(buffers->length,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffers,(void))

Void AL_obj::deleteSource( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteSource",0xce671521,"lime.audio.openal.AL.deleteSource","lime/audio/openal/AL.hx",161,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(161)
		::lime::audio::openal::AL_obj::lime_al_delete_source(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSource,(void))

Void AL_obj::deleteSources( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteSources",0xcbcb6832,"lime.audio.openal.AL.deleteSources","lime/audio/openal/AL.hx",170,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(170)
		::lime::audio::openal::AL_obj::lime_al_delete_sources(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSources,(void))

Void AL_obj::disable( int capability){
{
		HX_STACK_FRAME("lime.audio.openal.AL","disable",0xa79a060d,"lime.audio.openal.AL.disable","lime/audio/openal/AL.hx",179,0x8b371f2c)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(179)
		::lime::audio::openal::AL_obj::lime_al_disable(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,disable,(void))

Void AL_obj::distanceModel( int distanceModel){
{
		HX_STACK_FRAME("lime.audio.openal.AL","distanceModel",0x87da0619,"lime.audio.openal.AL.distanceModel","lime/audio/openal/AL.hx",188,0x8b371f2c)
		HX_STACK_ARG(distanceModel,"distanceModel")
		HX_STACK_LINE(188)
		::lime::audio::openal::AL_obj::lime_al_distance_model(distanceModel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,distanceModel,(void))

Void AL_obj::dopplerFactor( Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","dopplerFactor",0x22fdf3c2,"lime.audio.openal.AL.dopplerFactor","lime/audio/openal/AL.hx",197,0x8b371f2c)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(197)
		::lime::audio::openal::AL_obj::lime_al_doppler_factor(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerFactor,(void))

Void AL_obj::dopplerVelocity( Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","dopplerVelocity",0x3ef13fd0,"lime.audio.openal.AL.dopplerVelocity","lime/audio/openal/AL.hx",206,0x8b371f2c)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(206)
		::lime::audio::openal::AL_obj::lime_al_doppler_velocity(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerVelocity,(void))

Void AL_obj::enable( int capability){
{
		HX_STACK_FRAME("lime.audio.openal.AL","enable",0x3c379dfe,"lime.audio.openal.AL.enable","lime/audio/openal/AL.hx",215,0x8b371f2c)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(215)
		::lime::audio::openal::AL_obj::lime_al_enable(capability);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,enable,(void))

int AL_obj::genSource( ){
	HX_STACK_FRAME("lime.audio.openal.AL","genSource",0xf40420f0,"lime.audio.openal.AL.genSource","lime/audio/openal/AL.hx",224,0x8b371f2c)
	HX_STACK_LINE(224)
	return ::lime::audio::openal::AL_obj::lime_al_gen_source();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genSource,return )

Array< int > AL_obj::genSources( int n){
	HX_STACK_FRAME("lime.audio.openal.AL","genSources",0x8f98b183,"lime.audio.openal.AL.genSources","lime/audio/openal/AL.hx",235,0x8b371f2c)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(235)
	return ::lime::audio::openal::AL_obj::lime_al_gen_sources(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genSources,return )

int AL_obj::genBuffer( ){
	HX_STACK_FRAME("lime.audio.openal.AL","genBuffer",0x92672d15,"lime.audio.openal.AL.genBuffer","lime/audio/openal/AL.hx",246,0x8b371f2c)
	HX_STACK_LINE(246)
	return ::lime::audio::openal::AL_obj::lime_al_gen_buffer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genBuffer,return )

Array< int > AL_obj::genBuffers( int n){
	HX_STACK_FRAME("lime.audio.openal.AL","genBuffers",0x87e045be,"lime.audio.openal.AL.genBuffers","lime/audio/openal/AL.hx",257,0x8b371f2c)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(257)
	return ::lime::audio::openal::AL_obj::lime_al_gen_buffers(n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genBuffers,return )

bool AL_obj::getBoolean( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBoolean",0xab7d39ad,"lime.audio.openal.AL.getBoolean","lime/audio/openal/AL.hx",268,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(268)
	return ::lime::audio::openal::AL_obj::lime_al_get_boolean(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getBoolean,return )

Array< bool > AL_obj::getBooleanv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getBooleanv",0x62153e29,"lime.audio.openal.AL.getBooleanv","lime/audio/openal/AL.hx",279,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(279)
		return ::lime::audio::openal::AL_obj::lime_al_get_booleanv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBooleanv,return )

Array< Float > AL_obj::getBuffer3f( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBuffer3f",0x4e04ff2e,"lime.audio.openal.AL.getBuffer3f","lime/audio/openal/AL.hx",290,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(290)
	return ::lime::audio::openal::AL_obj::lime_al_get_buffer3f(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3f,return )

Array< int > AL_obj::getBuffer3i( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBuffer3i",0x4e04ff31,"lime.audio.openal.AL.getBuffer3i","lime/audio/openal/AL.hx",301,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(301)
	return ::lime::audio::openal::AL_obj::lime_al_get_buffer3i(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3i,return )

Float AL_obj::getBufferf( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferf",0xdf0ef26b,"lime.audio.openal.AL.getBufferf","lime/audio/openal/AL.hx",312,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(312)
	return ::lime::audio::openal::AL_obj::lime_al_get_bufferf(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferf,return )

Array< Float > AL_obj::getBufferfv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferfv",0x4e052bab,"lime.audio.openal.AL.getBufferfv","lime/audio/openal/AL.hx",323,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(323)
		return ::lime::audio::openal::AL_obj::lime_al_get_bufferfv(buffer,param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferfv,return )

int AL_obj::getBufferi( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferi",0xdf0ef26e,"lime.audio.openal.AL.getBufferi","lime/audio/openal/AL.hx",334,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(334)
	return ::lime::audio::openal::AL_obj::lime_al_get_bufferi(buffer,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferi,return )

Array< int > AL_obj::getBufferiv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferiv",0x4e052e48,"lime.audio.openal.AL.getBufferiv","lime/audio/openal/AL.hx",345,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(345)
		return ::lime::audio::openal::AL_obj::lime_al_get_bufferiv(buffer,param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferiv,return )

Float AL_obj::getDouble( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getDouble",0xee1e63ac,"lime.audio.openal.AL.getDouble","lime/audio/openal/AL.hx",356,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(356)
	return ::lime::audio::openal::AL_obj::lime_al_get_double(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getDouble,return )

Array< Float > AL_obj::getDoublev( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getDoublev",0x6c78d34a,"lime.audio.openal.AL.getDoublev","lime/audio/openal/AL.hx",367,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(367)
		return ::lime::audio::openal::AL_obj::lime_al_get_doublev(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getDoublev,return )

int AL_obj::getEnumValue( ::String ename){
	HX_STACK_FRAME("lime.audio.openal.AL","getEnumValue",0x6cfadaf5,"lime.audio.openal.AL.getEnumValue","lime/audio/openal/AL.hx",378,0x8b371f2c)
	HX_STACK_ARG(ename,"ename")
	HX_STACK_LINE(378)
	return ::lime::audio::openal::AL_obj::lime_al_get_enum_value(ename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getEnumValue,return )

int AL_obj::getError( ){
	HX_STACK_FRAME("lime.audio.openal.AL","getError",0x5627df8d,"lime.audio.openal.AL.getError","lime/audio/openal/AL.hx",389,0x8b371f2c)
	HX_STACK_LINE(389)
	return ::lime::audio::openal::AL_obj::lime_al_get_error();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getError,return )

::String AL_obj::getErrorString( ){
	HX_STACK_FRAME("lime.audio.openal.AL","getErrorString",0x4cf0243e,"lime.audio.openal.AL.getErrorString","lime/audio/openal/AL.hx",399,0x8b371f2c)
	HX_STACK_LINE(399)
	int _g = ::lime::audio::openal::AL_obj::getError();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(399)
	switch( (int)(_g)){
		case (int)40961: {
			HX_STACK_LINE(401)
			return HX_CSTRING("INVALID_NAME: Invalid parameter name");
		}
		;break;
		case (int)40962: {
			HX_STACK_LINE(402)
			return HX_CSTRING("INVALID_ENUM: Invalid enum value");
		}
		;break;
		case (int)40963: {
			HX_STACK_LINE(403)
			return HX_CSTRING("INVALID_VALUE: Invalid parameter value");
		}
		;break;
		case (int)40964: {
			HX_STACK_LINE(404)
			return HX_CSTRING("INVALID_OPERATION: Illegal operation or call");
		}
		;break;
		case (int)40965: {
			HX_STACK_LINE(405)
			return HX_CSTRING("OUT_OF_MEMORY: OpenAL has run out of memory");
		}
		;break;
		default: {
			HX_STACK_LINE(406)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(399)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getErrorString,return )

Float AL_obj::getFloat( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getFloat",0xe594d961,"lime.audio.openal.AL.getFloat","lime/audio/openal/AL.hx",416,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(416)
	return ::lime::audio::openal::AL_obj::lime_al_get_float(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getFloat,return )

Array< Float > AL_obj::getFloatv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getFloatv",0xfca95bf5,"lime.audio.openal.AL.getFloatv","lime/audio/openal/AL.hx",427,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(427)
		return ::lime::audio::openal::AL_obj::lime_al_get_floatv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFloatv,return )

int AL_obj::getInteger( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getInteger",0x449a0cc3,"lime.audio.openal.AL.getInteger","lime/audio/openal/AL.hx",438,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(438)
	return ::lime::audio::openal::AL_obj::lime_al_get_integer(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getInteger,return )

Array< int > AL_obj::getIntegerv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getIntegerv",0xc2311e53,"lime.audio.openal.AL.getIntegerv","lime/audio/openal/AL.hx",449,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(449)
		return ::lime::audio::openal::AL_obj::lime_al_get_integerv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getIntegerv,return )

Array< Float > AL_obj::getListener3f( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListener3f",0x39755462,"lime.audio.openal.AL.getListener3f","lime/audio/openal/AL.hx",460,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(460)
	return ::lime::audio::openal::AL_obj::lime_al_get_listener3f(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3f,return )

Array< int > AL_obj::getListener3i( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListener3i",0x39755465,"lime.audio.openal.AL.getListener3i","lime/audio/openal/AL.hx",471,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(471)
	return ::lime::audio::openal::AL_obj::lime_al_get_listener3i(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3i,return )

Float AL_obj::getListenerf( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListenerf",0x38823fb7,"lime.audio.openal.AL.getListenerf","lime/audio/openal/AL.hx",482,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(482)
	return ::lime::audio::openal::AL_obj::lime_al_get_listenerf(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListenerf,return )

Array< Float > AL_obj::getListenerfv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getListenerfv",0x397580df,"lime.audio.openal.AL.getListenerfv","lime/audio/openal/AL.hx",493,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(493)
		return ::lime::audio::openal::AL_obj::lime_al_get_listenerfv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListenerfv,return )

int AL_obj::getListeneri( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListeneri",0x38823fba,"lime.audio.openal.AL.getListeneri","lime/audio/openal/AL.hx",504,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(504)
	return ::lime::audio::openal::AL_obj::lime_al_get_listeneri(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListeneri,return )

Array< int > AL_obj::getListeneriv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getListeneriv",0x3975837c,"lime.audio.openal.AL.getListeneriv","lime/audio/openal/AL.hx",515,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(515)
		return ::lime::audio::openal::AL_obj::lime_al_get_listeneriv(param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListeneriv,return )

Dynamic AL_obj::getProcAddress( ::String fname){
	HX_STACK_FRAME("lime.audio.openal.AL","getProcAddress",0x4f564643,"lime.audio.openal.AL.getProcAddress","lime/audio/openal/AL.hx",525,0x8b371f2c)
	HX_STACK_ARG(fname,"fname")
	HX_STACK_LINE(525)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getProcAddress,return )

Array< Float > AL_obj::getSource3f( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSource3f",0x07aadfc9,"lime.audio.openal.AL.getSource3f","lime/audio/openal/AL.hx",533,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(533)
	return ::lime::audio::openal::AL_obj::lime_al_get_source3f(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3f,return )

Float AL_obj::getSourcef( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSourcef",0xe6c75e30,"lime.audio.openal.AL.getSourcef","lime/audio/openal/AL.hx",544,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(544)
	return ::lime::audio::openal::AL_obj::lime_al_get_sourcef(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcef,return )

Array< int > AL_obj::getSource3i( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSource3i",0x07aadfcc,"lime.audio.openal.AL.getSource3i","lime/audio/openal/AL.hx",555,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(555)
	return ::lime::audio::openal::AL_obj::lime_al_get_source3i(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3i,return )

Array< Float > AL_obj::getSourcefv( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSourcefv",0x07ab0c46,"lime.audio.openal.AL.getSourcefv","lime/audio/openal/AL.hx",566,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(566)
	return ::lime::audio::openal::AL_obj::lime_al_get_sourcefv(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcefv,return )

int AL_obj::getSourcei( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSourcei",0xe6c75e33,"lime.audio.openal.AL.getSourcei","lime/audio/openal/AL.hx",577,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(577)
	return ::lime::audio::openal::AL_obj::lime_al_get_sourcei(source,param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcei,return )

Array< int > AL_obj::getSourceiv( int source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getSourceiv",0x07ab0ee3,"lime.audio.openal.AL.getSourceiv","lime/audio/openal/AL.hx",588,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(588)
		return ::lime::audio::openal::AL_obj::lime_al_get_sourceiv(source,param,count);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourceiv,return )

::String AL_obj::getString( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getString",0xcc83616c,"lime.audio.openal.AL.getString","lime/audio/openal/AL.hx",599,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(599)
	return ::lime::audio::openal::AL_obj::lime_al_get_string(param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getString,return )

bool AL_obj::isBuffer( int buffer){
	HX_STACK_FRAME("lime.audio.openal.AL","isBuffer",0xac255cc5,"lime.audio.openal.AL.isBuffer","lime/audio/openal/AL.hx",610,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(610)
	return ::lime::audio::openal::AL_obj::lime_al_is_buffer(buffer);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isBuffer,return )

bool AL_obj::isEnabled( int capability){
	HX_STACK_FRAME("lime.audio.openal.AL","isEnabled",0xc12c311c,"lime.audio.openal.AL.isEnabled","lime/audio/openal/AL.hx",621,0x8b371f2c)
	HX_STACK_ARG(capability,"capability")
	HX_STACK_LINE(621)
	return ::lime::audio::openal::AL_obj::lime_al_is_enabled(capability);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEnabled,return )

bool AL_obj::isExtensionPresent( ::String extname){
	HX_STACK_FRAME("lime.audio.openal.AL","isExtensionPresent",0x7b01b541,"lime.audio.openal.AL.isExtensionPresent","lime/audio/openal/AL.hx",632,0x8b371f2c)
	HX_STACK_ARG(extname,"extname")
	HX_STACK_LINE(632)
	return ::lime::audio::openal::AL_obj::lime_al_is_extension_present(extname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isExtensionPresent,return )

bool AL_obj::isSource( int source){
	HX_STACK_FRAME("lime.audio.openal.AL","isSource",0x0dc250a0,"lime.audio.openal.AL.isSource","lime/audio/openal/AL.hx",643,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(643)
	return ::lime::audio::openal::AL_obj::lime_al_is_source(source);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isSource,return )

Void AL_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listener3f",0x0726fb42,"lime.audio.openal.AL.listener3f","lime/audio/openal/AL.hx",654,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(654)
		::lime::audio::openal::AL_obj::lime_al_listener3f(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3f,(void))

Void AL_obj::listener3i( int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listener3i",0x0726fb45,"lime.audio.openal.AL.listener3i","lime/audio/openal/AL.hx",663,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(663)
		::lime::audio::openal::AL_obj::lime_al_listener3i(param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3i,(void))

Void AL_obj::listenerf( int param,Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listenerf",0x328b14d7,"lime.audio.openal.AL.listenerf","lime/audio/openal/AL.hx",672,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(672)
		::lime::audio::openal::AL_obj::lime_al_listenerf(param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerf,(void))

Void AL_obj::listenerfv( int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listenerfv",0x072727bf,"lime.audio.openal.AL.listenerfv","lime/audio/openal/AL.hx",681,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(681)
		::lime::audio::openal::AL_obj::lime_al_listenerfv(param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerfv,(void))

Void AL_obj::listeneri( int param,int value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listeneri",0x328b14da,"lime.audio.openal.AL.listeneri","lime/audio/openal/AL.hx",690,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(690)
		::lime::audio::openal::AL_obj::lime_al_listeneri(param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneri,(void))

Void AL_obj::listeneriv( int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listeneriv",0x07272a5c,"lime.audio.openal.AL.listeneriv","lime/audio/openal/AL.hx",699,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(699)
		::lime::audio::openal::AL_obj::lime_al_listeneriv(param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneriv,(void))

Void AL_obj::source3f( int source,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","source3f",0xe9cb0ea9,"lime.audio.openal.AL.source3f","lime/audio/openal/AL.hx",708,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(708)
		::lime::audio::openal::AL_obj::lime_al_source3f(source,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3f,(void))

Void AL_obj::source3i( int source,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","source3i",0xe9cb0eac,"lime.audio.openal.AL.source3i","lime/audio/openal/AL.hx",717,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(717)
		::lime::audio::openal::AL_obj::lime_al_source3i(source,param,value1,value2,value3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3i,(void))

Void AL_obj::sourcef( int source,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcef",0xaf8aab50,"lime.audio.openal.AL.sourcef","lime/audio/openal/AL.hx",726,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(726)
		::lime::audio::openal::AL_obj::lime_al_sourcef(source,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcef,(void))

Void AL_obj::sourcefv( int source,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcefv",0xe9cb3b26,"lime.audio.openal.AL.sourcefv","lime/audio/openal/AL.hx",735,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(735)
		::lime::audio::openal::AL_obj::lime_al_sourcefv(source,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcefv,(void))

Void AL_obj::sourcei( int source,int param,int value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcei",0xaf8aab53,"lime.audio.openal.AL.sourcei","lime/audio/openal/AL.hx",744,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(744)
		::lime::audio::openal::AL_obj::lime_al_sourcei(source,param,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcei,(void))

Void AL_obj::sourceiv( int source,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceiv",0xe9cb3dc3,"lime.audio.openal.AL.sourceiv","lime/audio/openal/AL.hx",753,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(753)
		::lime::audio::openal::AL_obj::lime_al_sourceiv(source,param,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceiv,(void))

Void AL_obj::sourcePlay( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePlay",0x50dadd6a,"lime.audio.openal.AL.sourcePlay","lime/audio/openal/AL.hx",762,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(762)
		::lime::audio::openal::AL_obj::lime_al_source_play(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlay,(void))

Void AL_obj::sourcePlayv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePlayv",0x6ea6dfcc,"lime.audio.openal.AL.sourcePlayv","lime/audio/openal/AL.hx",771,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(771)
		::lime::audio::openal::AL_obj::lime_al_source_playv(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlayv,(void))

Void AL_obj::sourceStop( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceStop",0x52dc9f78,"lime.audio.openal.AL.sourceStop","lime/audio/openal/AL.hx",780,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(780)
		::lime::audio::openal::AL_obj::lime_al_source_stop(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStop,(void))

Void AL_obj::sourceStopv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceStopv",0x2e2ee9fe,"lime.audio.openal.AL.sourceStopv","lime/audio/openal/AL.hx",789,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(789)
		::lime::audio::openal::AL_obj::lime_al_source_stopv(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStopv,(void))

Void AL_obj::sourceRewind( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceRewind",0x36c422f1,"lime.audio.openal.AL.sourceRewind","lime/audio/openal/AL.hx",798,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(798)
		::lime::audio::openal::AL_obj::lime_al_source_rewind(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewind,(void))

Void AL_obj::sourceRewindv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceRewindv",0xb4da7065,"lime.audio.openal.AL.sourceRewindv","lime/audio/openal/AL.hx",807,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(807)
		::lime::audio::openal::AL_obj::lime_al_source_rewindv(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewindv,(void))

Void AL_obj::sourcePause( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePause",0x6770aec0,"lime.audio.openal.AL.sourcePause","lime/audio/openal/AL.hx",816,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(816)
		::lime::audio::openal::AL_obj::lime_al_source_pause(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePause,(void))

Void AL_obj::sourcePausev( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePausev",0x1b2839b6,"lime.audio.openal.AL.sourcePausev","lime/audio/openal/AL.hx",825,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(825)
		::lime::audio::openal::AL_obj::lime_al_source_pausev(sources->length,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePausev,(void))

Void AL_obj::sourceQueueBuffer( int source,int buffer){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceQueueBuffer",0x31678cbb,"lime.audio.openal.AL.sourceQueueBuffer","lime/audio/openal/AL.hx",834,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(834)
		::lime::audio::openal::AL_obj::lime_al_source_queue_buffers(source,(int)1,Array_obj< int >::__new().Add(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceQueueBuffer,(void))

Void AL_obj::sourceQueueBuffers( int source,int nb,Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceQueueBuffers",0x09339758,"lime.audio.openal.AL.sourceQueueBuffers","lime/audio/openal/AL.hx",843,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(nb,"nb")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(843)
		::lime::audio::openal::AL_obj::lime_al_source_queue_buffers(source,nb,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceQueueBuffers,(void))

int AL_obj::sourceUnqueueBuffer( int source){
	HX_STACK_FRAME("lime.audio.openal.AL","sourceUnqueueBuffer",0x63a2e982,"lime.audio.openal.AL.sourceUnqueueBuffer","lime/audio/openal/AL.hx",849,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(852)
	Array< int > res = ::lime::audio::openal::AL_obj::lime_al_source_unqueue_buffers(source,(int)1);		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(853)
	return res->__get((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceUnqueueBuffer,return )

Array< int > AL_obj::sourceUnqueueBuffers( int source,int nb){
	HX_STACK_FRAME("lime.audio.openal.AL","sourceUnqueueBuffers",0xcae968b1,"lime.audio.openal.AL.sourceUnqueueBuffers","lime/audio/openal/AL.hx",864,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(nb,"nb")
	HX_STACK_LINE(864)
	return ::lime::audio::openal::AL_obj::lime_al_source_unqueue_buffers(source,nb);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceUnqueueBuffers,return )

Void AL_obj::speedOfSound( Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","speedOfSound",0x3fbf252c,"lime.audio.openal.AL.speedOfSound","lime/audio/openal/AL.hx",875,0x8b371f2c)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(875)
		::lime::audio::openal::AL_obj::lime_al_speed_of_sound(value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,speedOfSound,(void))

Dynamic AL_obj::lime_al_buffer_data;

Dynamic AL_obj::lime_al_bufferf;

Dynamic AL_obj::lime_al_buffer3f;

Dynamic AL_obj::lime_al_bufferfv;

Dynamic AL_obj::lime_al_bufferi;

Dynamic AL_obj::lime_al_buffer3i;

Dynamic AL_obj::lime_al_bufferiv;

Dynamic AL_obj::lime_al_delete_buffer;

Dynamic AL_obj::lime_al_delete_buffers;

Dynamic AL_obj::lime_al_delete_source;

Dynamic AL_obj::lime_al_delete_sources;

Dynamic AL_obj::lime_al_disable;

Dynamic AL_obj::lime_al_distance_model;

Dynamic AL_obj::lime_al_doppler_factor;

Dynamic AL_obj::lime_al_doppler_velocity;

Dynamic AL_obj::lime_al_enable;

Dynamic AL_obj::lime_al_gen_source;

Dynamic AL_obj::lime_al_gen_sources;

Dynamic AL_obj::lime_al_gen_buffer;

Dynamic AL_obj::lime_al_gen_buffers;

Dynamic AL_obj::lime_al_get_buffer3f;

Dynamic AL_obj::lime_al_get_buffer3i;

Dynamic AL_obj::lime_al_get_bufferf;

Dynamic AL_obj::lime_al_get_bufferfv;

Dynamic AL_obj::lime_al_get_bufferi;

Dynamic AL_obj::lime_al_get_bufferiv;

Dynamic AL_obj::lime_al_get_boolean;

Dynamic AL_obj::lime_al_get_booleanv;

Dynamic AL_obj::lime_al_get_double;

Dynamic AL_obj::lime_al_get_doublev;

Dynamic AL_obj::lime_al_get_enum_value;

Dynamic AL_obj::lime_al_get_error;

Dynamic AL_obj::lime_al_get_float;

Dynamic AL_obj::lime_al_get_floatv;

Dynamic AL_obj::lime_al_get_integer;

Dynamic AL_obj::lime_al_get_integerv;

Dynamic AL_obj::lime_al_get_listenerf;

Dynamic AL_obj::lime_al_get_listener3f;

Dynamic AL_obj::lime_al_get_listenerfv;

Dynamic AL_obj::lime_al_get_listeneri;

Dynamic AL_obj::lime_al_get_listener3i;

Dynamic AL_obj::lime_al_get_listeneriv;

Dynamic AL_obj::lime_al_get_proc_address;

Dynamic AL_obj::lime_al_get_source3f;

Dynamic AL_obj::lime_al_get_source3i;

Dynamic AL_obj::lime_al_get_sourcef;

Dynamic AL_obj::lime_al_get_sourcefv;

Dynamic AL_obj::lime_al_get_sourcei;

Dynamic AL_obj::lime_al_get_sourceiv;

Dynamic AL_obj::lime_al_get_string;

Dynamic AL_obj::lime_al_is_buffer;

Dynamic AL_obj::lime_al_is_enabled;

Dynamic AL_obj::lime_al_is_extension_present;

Dynamic AL_obj::lime_al_is_source;

Dynamic AL_obj::lime_al_listener3f;

Dynamic AL_obj::lime_al_listener3i;

Dynamic AL_obj::lime_al_listenerf;

Dynamic AL_obj::lime_al_listenerfv;

Dynamic AL_obj::lime_al_listeneri;

Dynamic AL_obj::lime_al_listeneriv;

Dynamic AL_obj::lime_al_source_play;

Dynamic AL_obj::lime_al_source_playv;

Dynamic AL_obj::lime_al_source_stop;

Dynamic AL_obj::lime_al_source_stopv;

Dynamic AL_obj::lime_al_source_rewind;

Dynamic AL_obj::lime_al_source_rewindv;

Dynamic AL_obj::lime_al_source_pause;

Dynamic AL_obj::lime_al_source_pausev;

Dynamic AL_obj::lime_al_source_queue_buffers;

Dynamic AL_obj::lime_al_source_unqueue_buffers;

Dynamic AL_obj::lime_al_source3f;

Dynamic AL_obj::lime_al_source3i;

Dynamic AL_obj::lime_al_sourcef;

Dynamic AL_obj::lime_al_sourcefv;

Dynamic AL_obj::lime_al_sourcei;

Dynamic AL_obj::lime_al_sourceiv;

Dynamic AL_obj::lime_al_speed_of_sound;


AL_obj::AL_obj()
{
}

Dynamic AL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bufferf") ) { return bufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferi") ) { return bufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcef") ) { return sourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcei") ) { return sourcei_dyn(); }
		break;
	case 8:
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
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { return getProcAddress_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_al_enable") ) { return lime_al_enable; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { return dopplerVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_al_bufferf") ) { return lime_al_bufferf; }
		if (HX_FIELD_EQ(inName,"lime_al_bufferi") ) { return lime_al_bufferi; }
		if (HX_FIELD_EQ(inName,"lime_al_disable") ) { return lime_al_disable; }
		if (HX_FIELD_EQ(inName,"lime_al_sourcef") ) { return lime_al_sourcef; }
		if (HX_FIELD_EQ(inName,"lime_al_sourcei") ) { return lime_al_sourcei; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_al_buffer3f") ) { return lime_al_buffer3f; }
		if (HX_FIELD_EQ(inName,"lime_al_bufferfv") ) { return lime_al_bufferfv; }
		if (HX_FIELD_EQ(inName,"lime_al_buffer3i") ) { return lime_al_buffer3i; }
		if (HX_FIELD_EQ(inName,"lime_al_bufferiv") ) { return lime_al_bufferiv; }
		if (HX_FIELD_EQ(inName,"lime_al_source3f") ) { return lime_al_source3f; }
		if (HX_FIELD_EQ(inName,"lime_al_source3i") ) { return lime_al_source3i; }
		if (HX_FIELD_EQ(inName,"lime_al_sourcefv") ) { return lime_al_sourcefv; }
		if (HX_FIELD_EQ(inName,"lime_al_sourceiv") ) { return lime_al_sourceiv; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { return sourceQueueBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_al_get_error") ) { return lime_al_get_error; }
		if (HX_FIELD_EQ(inName,"lime_al_get_float") ) { return lime_al_get_float; }
		if (HX_FIELD_EQ(inName,"lime_al_is_buffer") ) { return lime_al_is_buffer; }
		if (HX_FIELD_EQ(inName,"lime_al_is_source") ) { return lime_al_is_source; }
		if (HX_FIELD_EQ(inName,"lime_al_listenerf") ) { return lime_al_listenerf; }
		if (HX_FIELD_EQ(inName,"lime_al_listeneri") ) { return lime_al_listeneri; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { return isExtensionPresent_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { return sourceQueueBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_al_gen_source") ) { return lime_al_gen_source; }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffer") ) { return lime_al_gen_buffer; }
		if (HX_FIELD_EQ(inName,"lime_al_get_double") ) { return lime_al_get_double; }
		if (HX_FIELD_EQ(inName,"lime_al_get_floatv") ) { return lime_al_get_floatv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_string") ) { return lime_al_get_string; }
		if (HX_FIELD_EQ(inName,"lime_al_is_enabled") ) { return lime_al_is_enabled; }
		if (HX_FIELD_EQ(inName,"lime_al_listener3f") ) { return lime_al_listener3f; }
		if (HX_FIELD_EQ(inName,"lime_al_listener3i") ) { return lime_al_listener3i; }
		if (HX_FIELD_EQ(inName,"lime_al_listenerfv") ) { return lime_al_listenerfv; }
		if (HX_FIELD_EQ(inName,"lime_al_listeneriv") ) { return lime_al_listeneriv; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { return sourceUnqueueBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_al_buffer_data") ) { return lime_al_buffer_data; }
		if (HX_FIELD_EQ(inName,"lime_al_gen_sources") ) { return lime_al_gen_sources; }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffers") ) { return lime_al_gen_buffers; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferf") ) { return lime_al_get_bufferf; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferi") ) { return lime_al_get_bufferi; }
		if (HX_FIELD_EQ(inName,"lime_al_get_boolean") ) { return lime_al_get_boolean; }
		if (HX_FIELD_EQ(inName,"lime_al_get_doublev") ) { return lime_al_get_doublev; }
		if (HX_FIELD_EQ(inName,"lime_al_get_integer") ) { return lime_al_get_integer; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcef") ) { return lime_al_get_sourcef; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcei") ) { return lime_al_get_sourcei; }
		if (HX_FIELD_EQ(inName,"lime_al_source_play") ) { return lime_al_source_play; }
		if (HX_FIELD_EQ(inName,"lime_al_source_stop") ) { return lime_al_source_stop; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { return sourceUnqueueBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3f") ) { return lime_al_get_buffer3f; }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3i") ) { return lime_al_get_buffer3i; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferfv") ) { return lime_al_get_bufferfv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferiv") ) { return lime_al_get_bufferiv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_booleanv") ) { return lime_al_get_booleanv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_integerv") ) { return lime_al_get_integerv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3f") ) { return lime_al_get_source3f; }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3i") ) { return lime_al_get_source3i; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcefv") ) { return lime_al_get_sourcefv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourceiv") ) { return lime_al_get_sourceiv; }
		if (HX_FIELD_EQ(inName,"lime_al_source_playv") ) { return lime_al_source_playv; }
		if (HX_FIELD_EQ(inName,"lime_al_source_stopv") ) { return lime_al_source_stopv; }
		if (HX_FIELD_EQ(inName,"lime_al_source_pause") ) { return lime_al_source_pause; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffer") ) { return lime_al_delete_buffer; }
		if (HX_FIELD_EQ(inName,"lime_al_delete_source") ) { return lime_al_delete_source; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerf") ) { return lime_al_get_listenerf; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneri") ) { return lime_al_get_listeneri; }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewind") ) { return lime_al_source_rewind; }
		if (HX_FIELD_EQ(inName,"lime_al_source_pausev") ) { return lime_al_source_pausev; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffers") ) { return lime_al_delete_buffers; }
		if (HX_FIELD_EQ(inName,"lime_al_delete_sources") ) { return lime_al_delete_sources; }
		if (HX_FIELD_EQ(inName,"lime_al_distance_model") ) { return lime_al_distance_model; }
		if (HX_FIELD_EQ(inName,"lime_al_doppler_factor") ) { return lime_al_doppler_factor; }
		if (HX_FIELD_EQ(inName,"lime_al_get_enum_value") ) { return lime_al_get_enum_value; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3f") ) { return lime_al_get_listener3f; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerfv") ) { return lime_al_get_listenerfv; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3i") ) { return lime_al_get_listener3i; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneriv") ) { return lime_al_get_listeneriv; }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewindv") ) { return lime_al_source_rewindv; }
		if (HX_FIELD_EQ(inName,"lime_al_speed_of_sound") ) { return lime_al_speed_of_sound; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_al_doppler_velocity") ) { return lime_al_doppler_velocity; }
		if (HX_FIELD_EQ(inName,"lime_al_get_proc_address") ) { return lime_al_get_proc_address; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_al_is_extension_present") ) { return lime_al_is_extension_present; }
		if (HX_FIELD_EQ(inName,"lime_al_source_queue_buffers") ) { return lime_al_source_queue_buffers; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_al_source_unqueue_buffers") ) { return lime_al_source_unqueue_buffers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"lime_al_enable") ) { lime_al_enable=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_al_bufferf") ) { lime_al_bufferf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_bufferi") ) { lime_al_bufferi=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_disable") ) { lime_al_disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_sourcef") ) { lime_al_sourcef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_sourcei") ) { lime_al_sourcei=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_al_buffer3f") ) { lime_al_buffer3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_bufferfv") ) { lime_al_bufferfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_buffer3i") ) { lime_al_buffer3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_bufferiv") ) { lime_al_bufferiv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source3f") ) { lime_al_source3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source3i") ) { lime_al_source3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_sourcefv") ) { lime_al_sourcefv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_sourceiv") ) { lime_al_sourceiv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_al_get_error") ) { lime_al_get_error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_float") ) { lime_al_get_float=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_is_buffer") ) { lime_al_is_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_is_source") ) { lime_al_is_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_listenerf") ) { lime_al_listenerf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_listeneri") ) { lime_al_listeneri=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_al_gen_source") ) { lime_al_gen_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffer") ) { lime_al_gen_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_double") ) { lime_al_get_double=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_floatv") ) { lime_al_get_floatv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_string") ) { lime_al_get_string=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_is_enabled") ) { lime_al_is_enabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_listener3f") ) { lime_al_listener3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_listener3i") ) { lime_al_listener3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_listenerfv") ) { lime_al_listenerfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_listeneriv") ) { lime_al_listeneriv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_al_buffer_data") ) { lime_al_buffer_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_gen_sources") ) { lime_al_gen_sources=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffers") ) { lime_al_gen_buffers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferf") ) { lime_al_get_bufferf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferi") ) { lime_al_get_bufferi=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_boolean") ) { lime_al_get_boolean=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_doublev") ) { lime_al_get_doublev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_integer") ) { lime_al_get_integer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcef") ) { lime_al_get_sourcef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcei") ) { lime_al_get_sourcei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_play") ) { lime_al_source_play=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_stop") ) { lime_al_source_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3f") ) { lime_al_get_buffer3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3i") ) { lime_al_get_buffer3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferfv") ) { lime_al_get_bufferfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferiv") ) { lime_al_get_bufferiv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_booleanv") ) { lime_al_get_booleanv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_integerv") ) { lime_al_get_integerv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3f") ) { lime_al_get_source3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3i") ) { lime_al_get_source3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcefv") ) { lime_al_get_sourcefv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourceiv") ) { lime_al_get_sourceiv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_playv") ) { lime_al_source_playv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_stopv") ) { lime_al_source_stopv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_pause") ) { lime_al_source_pause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffer") ) { lime_al_delete_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_delete_source") ) { lime_al_delete_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerf") ) { lime_al_get_listenerf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneri") ) { lime_al_get_listeneri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewind") ) { lime_al_source_rewind=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_pausev") ) { lime_al_source_pausev=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffers") ) { lime_al_delete_buffers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_delete_sources") ) { lime_al_delete_sources=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_distance_model") ) { lime_al_distance_model=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_doppler_factor") ) { lime_al_doppler_factor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_enum_value") ) { lime_al_get_enum_value=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3f") ) { lime_al_get_listener3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerfv") ) { lime_al_get_listenerfv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3i") ) { lime_al_get_listener3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneriv") ) { lime_al_get_listeneriv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewindv") ) { lime_al_source_rewindv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_speed_of_sound") ) { lime_al_speed_of_sound=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_al_doppler_velocity") ) { lime_al_doppler_velocity=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_get_proc_address") ) { lime_al_get_proc_address=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_al_is_extension_present") ) { lime_al_is_extension_present=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_al_source_queue_buffers") ) { lime_al_source_queue_buffers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_al_source_unqueue_buffers") ) { lime_al_source_unqueue_buffers=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
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
	HX_CSTRING("lime_al_buffer_data"),
	HX_CSTRING("lime_al_bufferf"),
	HX_CSTRING("lime_al_buffer3f"),
	HX_CSTRING("lime_al_bufferfv"),
	HX_CSTRING("lime_al_bufferi"),
	HX_CSTRING("lime_al_buffer3i"),
	HX_CSTRING("lime_al_bufferiv"),
	HX_CSTRING("lime_al_delete_buffer"),
	HX_CSTRING("lime_al_delete_buffers"),
	HX_CSTRING("lime_al_delete_source"),
	HX_CSTRING("lime_al_delete_sources"),
	HX_CSTRING("lime_al_disable"),
	HX_CSTRING("lime_al_distance_model"),
	HX_CSTRING("lime_al_doppler_factor"),
	HX_CSTRING("lime_al_doppler_velocity"),
	HX_CSTRING("lime_al_enable"),
	HX_CSTRING("lime_al_gen_source"),
	HX_CSTRING("lime_al_gen_sources"),
	HX_CSTRING("lime_al_gen_buffer"),
	HX_CSTRING("lime_al_gen_buffers"),
	HX_CSTRING("lime_al_get_buffer3f"),
	HX_CSTRING("lime_al_get_buffer3i"),
	HX_CSTRING("lime_al_get_bufferf"),
	HX_CSTRING("lime_al_get_bufferfv"),
	HX_CSTRING("lime_al_get_bufferi"),
	HX_CSTRING("lime_al_get_bufferiv"),
	HX_CSTRING("lime_al_get_boolean"),
	HX_CSTRING("lime_al_get_booleanv"),
	HX_CSTRING("lime_al_get_double"),
	HX_CSTRING("lime_al_get_doublev"),
	HX_CSTRING("lime_al_get_enum_value"),
	HX_CSTRING("lime_al_get_error"),
	HX_CSTRING("lime_al_get_float"),
	HX_CSTRING("lime_al_get_floatv"),
	HX_CSTRING("lime_al_get_integer"),
	HX_CSTRING("lime_al_get_integerv"),
	HX_CSTRING("lime_al_get_listenerf"),
	HX_CSTRING("lime_al_get_listener3f"),
	HX_CSTRING("lime_al_get_listenerfv"),
	HX_CSTRING("lime_al_get_listeneri"),
	HX_CSTRING("lime_al_get_listener3i"),
	HX_CSTRING("lime_al_get_listeneriv"),
	HX_CSTRING("lime_al_get_proc_address"),
	HX_CSTRING("lime_al_get_source3f"),
	HX_CSTRING("lime_al_get_source3i"),
	HX_CSTRING("lime_al_get_sourcef"),
	HX_CSTRING("lime_al_get_sourcefv"),
	HX_CSTRING("lime_al_get_sourcei"),
	HX_CSTRING("lime_al_get_sourceiv"),
	HX_CSTRING("lime_al_get_string"),
	HX_CSTRING("lime_al_is_buffer"),
	HX_CSTRING("lime_al_is_enabled"),
	HX_CSTRING("lime_al_is_extension_present"),
	HX_CSTRING("lime_al_is_source"),
	HX_CSTRING("lime_al_listener3f"),
	HX_CSTRING("lime_al_listener3i"),
	HX_CSTRING("lime_al_listenerf"),
	HX_CSTRING("lime_al_listenerfv"),
	HX_CSTRING("lime_al_listeneri"),
	HX_CSTRING("lime_al_listeneriv"),
	HX_CSTRING("lime_al_source_play"),
	HX_CSTRING("lime_al_source_playv"),
	HX_CSTRING("lime_al_source_stop"),
	HX_CSTRING("lime_al_source_stopv"),
	HX_CSTRING("lime_al_source_rewind"),
	HX_CSTRING("lime_al_source_rewindv"),
	HX_CSTRING("lime_al_source_pause"),
	HX_CSTRING("lime_al_source_pausev"),
	HX_CSTRING("lime_al_source_queue_buffers"),
	HX_CSTRING("lime_al_source_unqueue_buffers"),
	HX_CSTRING("lime_al_source3f"),
	HX_CSTRING("lime_al_source3i"),
	HX_CSTRING("lime_al_sourcef"),
	HX_CSTRING("lime_al_sourcefv"),
	HX_CSTRING("lime_al_sourcei"),
	HX_CSTRING("lime_al_sourceiv"),
	HX_CSTRING("lime_al_speed_of_sound"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_buffer_data,"lime_al_buffer_data");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferf,"lime_al_bufferf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_buffer3f,"lime_al_buffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferfv,"lime_al_bufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferi,"lime_al_bufferi");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_buffer3i,"lime_al_buffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferiv,"lime_al_bufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_buffer,"lime_al_delete_buffer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_buffers,"lime_al_delete_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_source,"lime_al_delete_source");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_sources,"lime_al_delete_sources");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_disable,"lime_al_disable");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_distance_model,"lime_al_distance_model");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_doppler_factor,"lime_al_doppler_factor");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_doppler_velocity,"lime_al_doppler_velocity");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_enable,"lime_al_enable");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_source,"lime_al_gen_source");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_sources,"lime_al_gen_sources");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_buffer,"lime_al_gen_buffer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_buffers,"lime_al_gen_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_buffer3f,"lime_al_get_buffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_buffer3i,"lime_al_get_buffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferf,"lime_al_get_bufferf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferfv,"lime_al_get_bufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferi,"lime_al_get_bufferi");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferiv,"lime_al_get_bufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_boolean,"lime_al_get_boolean");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_booleanv,"lime_al_get_booleanv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_double,"lime_al_get_double");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_doublev,"lime_al_get_doublev");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_enum_value,"lime_al_get_enum_value");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_error,"lime_al_get_error");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_float,"lime_al_get_float");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_floatv,"lime_al_get_floatv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_integer,"lime_al_get_integer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_integerv,"lime_al_get_integerv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listenerf,"lime_al_get_listenerf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listener3f,"lime_al_get_listener3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listenerfv,"lime_al_get_listenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listeneri,"lime_al_get_listeneri");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listener3i,"lime_al_get_listener3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listeneriv,"lime_al_get_listeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_proc_address,"lime_al_get_proc_address");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_source3f,"lime_al_get_source3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_source3i,"lime_al_get_source3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourcef,"lime_al_get_sourcef");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourcefv,"lime_al_get_sourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourcei,"lime_al_get_sourcei");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourceiv,"lime_al_get_sourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_string,"lime_al_get_string");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_buffer,"lime_al_is_buffer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_enabled,"lime_al_is_enabled");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_extension_present,"lime_al_is_extension_present");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_source,"lime_al_is_source");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listener3f,"lime_al_listener3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listener3i,"lime_al_listener3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listenerf,"lime_al_listenerf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listenerfv,"lime_al_listenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listeneri,"lime_al_listeneri");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listeneriv,"lime_al_listeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_play,"lime_al_source_play");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_playv,"lime_al_source_playv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_stop,"lime_al_source_stop");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_stopv,"lime_al_source_stopv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_rewind,"lime_al_source_rewind");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_rewindv,"lime_al_source_rewindv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_pause,"lime_al_source_pause");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_pausev,"lime_al_source_pausev");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_queue_buffers,"lime_al_source_queue_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_unqueue_buffers,"lime_al_source_unqueue_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source3f,"lime_al_source3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source3i,"lime_al_source3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourcef,"lime_al_sourcef");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourcefv,"lime_al_sourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourcei,"lime_al_sourcei");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourceiv,"lime_al_sourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_speed_of_sound,"lime_al_speed_of_sound");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_buffer_data,"lime_al_buffer_data");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferf,"lime_al_bufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_buffer3f,"lime_al_buffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferfv,"lime_al_bufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferi,"lime_al_bufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_buffer3i,"lime_al_buffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferiv,"lime_al_bufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_buffer,"lime_al_delete_buffer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_buffers,"lime_al_delete_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_source,"lime_al_delete_source");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_sources,"lime_al_delete_sources");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_disable,"lime_al_disable");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_distance_model,"lime_al_distance_model");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_doppler_factor,"lime_al_doppler_factor");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_doppler_velocity,"lime_al_doppler_velocity");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_enable,"lime_al_enable");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_source,"lime_al_gen_source");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_sources,"lime_al_gen_sources");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_buffer,"lime_al_gen_buffer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_buffers,"lime_al_gen_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_buffer3f,"lime_al_get_buffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_buffer3i,"lime_al_get_buffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferf,"lime_al_get_bufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferfv,"lime_al_get_bufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferi,"lime_al_get_bufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferiv,"lime_al_get_bufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_boolean,"lime_al_get_boolean");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_booleanv,"lime_al_get_booleanv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_double,"lime_al_get_double");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_doublev,"lime_al_get_doublev");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_enum_value,"lime_al_get_enum_value");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_error,"lime_al_get_error");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_float,"lime_al_get_float");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_floatv,"lime_al_get_floatv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_integer,"lime_al_get_integer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_integerv,"lime_al_get_integerv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listenerf,"lime_al_get_listenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listener3f,"lime_al_get_listener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listenerfv,"lime_al_get_listenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listeneri,"lime_al_get_listeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listener3i,"lime_al_get_listener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listeneriv,"lime_al_get_listeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_proc_address,"lime_al_get_proc_address");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_source3f,"lime_al_get_source3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_source3i,"lime_al_get_source3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourcef,"lime_al_get_sourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourcefv,"lime_al_get_sourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourcei,"lime_al_get_sourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourceiv,"lime_al_get_sourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_string,"lime_al_get_string");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_buffer,"lime_al_is_buffer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_enabled,"lime_al_is_enabled");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_extension_present,"lime_al_is_extension_present");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_source,"lime_al_is_source");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listener3f,"lime_al_listener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listener3i,"lime_al_listener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listenerf,"lime_al_listenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listenerfv,"lime_al_listenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listeneri,"lime_al_listeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listeneriv,"lime_al_listeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_play,"lime_al_source_play");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_playv,"lime_al_source_playv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_stop,"lime_al_source_stop");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_stopv,"lime_al_source_stopv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_rewind,"lime_al_source_rewind");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_rewindv,"lime_al_source_rewindv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_pause,"lime_al_source_pause");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_pausev,"lime_al_source_pausev");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_queue_buffers,"lime_al_source_queue_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_unqueue_buffers,"lime_al_source_unqueue_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source3f,"lime_al_source3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source3i,"lime_al_source3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourcef,"lime_al_sourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourcefv,"lime_al_sourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourcei,"lime_al_sourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourceiv,"lime_al_sourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_speed_of_sound,"lime_al_speed_of_sound");
};

#endif

Class AL_obj::__mClass;

void AL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.openal.AL"), hx::TCanCast< AL_obj> ,sStaticFields,sMemberFields,
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

void AL_obj::__boot()
{
	NONE= (int)0;
	FALSE= (int)0;
	TRUE= (int)1;
	SOURCE_RELATIVE= (int)514;
	CONE_INNER_ANGLE= (int)4097;
	CONE_OUTER_ANGLE= (int)4098;
	PITCH= (int)4099;
	POSITION= (int)4100;
	DIRECTION= (int)4101;
	VELOCITY= (int)4102;
	LOOPING= (int)4103;
	BUFFER= (int)4105;
	GAIN= (int)4106;
	MIN_GAIN= (int)4109;
	MAX_GAIN= (int)4110;
	ORIENTATION= (int)4111;
	SOURCE_STATE= (int)4112;
	INITIAL= (int)4113;
	PLAYING= (int)4114;
	PAUSED= (int)4115;
	STOPPED= (int)4116;
	BUFFERS_QUEUED= (int)4117;
	BUFFERS_PROCESSED= (int)4118;
	REFERENCE_DISTANCE= (int)4128;
	ROLLOFF_FACTOR= (int)4129;
	CONE_OUTER_GAIN= (int)4130;
	MAX_DISTANCE= (int)4131;
	SEC_OFFSET= (int)4132;
	SAMPLE_OFFSET= (int)4133;
	BYTE_OFFSET= (int)4134;
	SOURCE_TYPE= (int)4135;
	STATIC= (int)4136;
	STREAMING= (int)4137;
	UNDETERMINED= (int)4144;
	FORMAT_MONO8= (int)4352;
	FORMAT_MONO16= (int)4353;
	FORMAT_STEREO8= (int)4354;
	FORMAT_STEREO16= (int)4355;
	FREQUENCY= (int)8193;
	BITS= (int)8194;
	CHANNELS= (int)8195;
	SIZE= (int)8196;
	NO_ERROR= (int)0;
	INVALID_NAME= (int)40961;
	INVALID_ENUM= (int)40962;
	INVALID_VALUE= (int)40963;
	INVALID_OPERATION= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	VENDOR= (int)45057;
	VERSION= (int)45058;
	RENDERER= (int)45059;
	EXTENSIONS= (int)45060;
	DOPPLER_FACTOR= (int)49152;
	SPEED_OF_SOUND= (int)49155;
	DOPPLER_VELOCITY= (int)49153;
	DISTANCE_MODEL= (int)53248;
	INVERSE_DISTANCE= (int)53249;
	INVERSE_DISTANCE_CLAMPED= (int)53250;
	LINEAR_DISTANCE= (int)53251;
	LINEAR_DISTANCE_CLAMPED= (int)53252;
	EXPONENT_DISTANCE= (int)53253;
	EXPONENT_DISTANCE_CLAMPED= (int)53254;
	lime_al_buffer_data= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_buffer_data"),(int)5,null());
	lime_al_bufferf= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_bufferf"),(int)3,null());
	lime_al_buffer3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_buffer3f"),(int)5,null());
	lime_al_bufferfv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_bufferfv"),(int)3,null());
	lime_al_bufferi= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_bufferi"),(int)3,null());
	lime_al_buffer3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_buffer3i"),(int)5,null());
	lime_al_bufferiv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_bufferiv"),(int)3,null());
	lime_al_delete_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_delete_buffer"),(int)1,null());
	lime_al_delete_buffers= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_delete_buffers"),(int)2,null());
	lime_al_delete_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_delete_source"),(int)1,null());
	lime_al_delete_sources= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_delete_sources"),(int)2,null());
	lime_al_disable= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_disable"),(int)1,null());
	lime_al_distance_model= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_distance_model"),(int)1,null());
	lime_al_doppler_factor= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_doppler_factor"),(int)1,null());
	lime_al_doppler_velocity= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_doppler_velocity"),(int)1,null());
	lime_al_enable= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_enable"),(int)1,null());
	lime_al_gen_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_gen_source"),(int)0,null());
	lime_al_gen_sources= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_gen_sources"),(int)1,null());
	lime_al_gen_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_gen_buffer"),(int)0,null());
	lime_al_gen_buffers= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_gen_buffers"),(int)1,null());
	lime_al_get_buffer3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_buffer3f"),(int)2,null());
	lime_al_get_buffer3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_buffer3i"),(int)2,null());
	lime_al_get_bufferf= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_bufferf"),(int)2,null());
	lime_al_get_bufferfv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_bufferfv"),(int)3,null());
	lime_al_get_bufferi= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_bufferi"),(int)2,null());
	lime_al_get_bufferiv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_bufferiv"),(int)3,null());
	lime_al_get_boolean= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_boolean"),(int)1,null());
	lime_al_get_booleanv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_booleanv"),(int)2,null());
	lime_al_get_double= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_double"),(int)1,null());
	lime_al_get_doublev= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_doublev"),(int)2,null());
	lime_al_get_enum_value= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_enum_value"),(int)1,null());
	lime_al_get_error= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_error"),(int)0,null());
	lime_al_get_float= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_float"),(int)1,null());
	lime_al_get_floatv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_floatv"),(int)2,null());
	lime_al_get_integer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_integer"),(int)1,null());
	lime_al_get_integerv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_integerv"),(int)2,null());
	lime_al_get_listenerf= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_listenerf"),(int)1,null());
	lime_al_get_listener3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_listener3f"),(int)1,null());
	lime_al_get_listenerfv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_listenerfv"),(int)2,null());
	lime_al_get_listeneri= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_listeneri"),(int)1,null());
	lime_al_get_listener3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_listener3i"),(int)1,null());
	lime_al_get_listeneriv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_listeneriv"),(int)2,null());
	lime_al_get_proc_address= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_proc_address"),(int)1,null());
	lime_al_get_source3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_source3f"),(int)2,null());
	lime_al_get_source3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_source3i"),(int)2,null());
	lime_al_get_sourcef= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_sourcef"),(int)2,null());
	lime_al_get_sourcefv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_sourcefv"),(int)2,null());
	lime_al_get_sourcei= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_sourcei"),(int)2,null());
	lime_al_get_sourceiv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_sourceiv"),(int)3,null());
	lime_al_get_string= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_get_string"),(int)1,null());
	lime_al_is_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_is_buffer"),(int)1,null());
	lime_al_is_enabled= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_is_enabled"),(int)1,null());
	lime_al_is_extension_present= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_is_extension_present"),(int)1,null());
	lime_al_is_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_is_source"),(int)1,null());
	lime_al_listener3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_listener3f"),(int)4,null());
	lime_al_listener3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_listener3i"),(int)4,null());
	lime_al_listenerf= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_listenerf"),(int)2,null());
	lime_al_listenerfv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_listenerfv"),(int)2,null());
	lime_al_listeneri= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_listeneri"),(int)2,null());
	lime_al_listeneriv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_listeneriv"),(int)2,null());
	lime_al_source_play= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_play"),(int)1,null());
	lime_al_source_playv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_playv"),(int)2,null());
	lime_al_source_stop= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_stop"),(int)1,null());
	lime_al_source_stopv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_stopv"),(int)2,null());
	lime_al_source_rewind= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_rewind"),(int)1,null());
	lime_al_source_rewindv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_rewindv"),(int)2,null());
	lime_al_source_pause= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_pause"),(int)1,null());
	lime_al_source_pausev= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_pausev"),(int)2,null());
	lime_al_source_queue_buffers= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_queue_buffers"),(int)3,null());
	lime_al_source_unqueue_buffers= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source_unqueue_buffers"),(int)2,null());
	lime_al_source3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source3f"),(int)5,null());
	lime_al_source3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_source3i"),(int)5,null());
	lime_al_sourcef= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_sourcef"),(int)3,null());
	lime_al_sourcefv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_sourcefv"),(int)3,null());
	lime_al_sourcei= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_sourcei"),(int)3,null());
	lime_al_sourceiv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_sourceiv"),(int)3,null());
	lime_al_speed_of_sound= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_al_speed_of_sound"),(int)1,null());
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
