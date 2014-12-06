#ifndef INCLUDED_lime_audio_openal__ALDevice_ALDevice_Impl_
#define INCLUDED_lime_audio_openal__ALDevice_ALDevice_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,audio,openal,_ALDevice,ALDevice_Impl_)
namespace lime{
namespace audio{
namespace openal{
namespace _ALDevice{


class HXCPP_CLASS_ATTRIBUTES  ALDevice_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALDevice_Impl__obj OBJ_;
		ALDevice_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ALDevice_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALDevice_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ALDevice_Impl_"); }

		static Dynamic _new( Float handle);
		static Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace audio
} // end namespace openal
} // end namespace _ALDevice

#endif /* INCLUDED_lime_audio_openal__ALDevice_ALDevice_Impl_ */ 
