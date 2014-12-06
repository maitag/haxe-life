#ifndef INCLUDED_lime__Assets_AssetType_Impl_
#define INCLUDED_lime__Assets_AssetType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_Assets,AssetType_Impl_)
namespace lime{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES  AssetType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetType_Impl__obj OBJ_;
		AssetType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetType_Impl_"); }

		static ::String BINARY;
		static ::String FONT;
		static ::String IMAGE;
		static ::String MUSIC;
		static ::String SOUND;
		static ::String TEMPLATE;
		static ::String TEXT;
};

} // end namespace lime
} // end namespace _Assets

#endif /* INCLUDED_lime__Assets_AssetType_Impl_ */ 
