#ifndef INCLUDED_CellAutomata
#define INCLUDED_CellAutomata

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CellAutomata)
HX_DECLARE_CLASS2(lime,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  CellAutomata_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CellAutomata_obj OBJ_;
		CellAutomata_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CellAutomata_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CellAutomata_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CellAutomata"); }

		static int BG_COLOR;
		static int FG_COLOR;
		static Array< ::String > cellRules;
		static ::String getRandomRule( );
		static Dynamic getRandomRule_dyn();

		static Void genRandomCells( ::lime::graphics::Image img,Float posx,Float posy);
		static Dynamic genRandomCells_dyn();

		static Void nextLifeGeneration( ::lime::graphics::Image src_img,::lime::graphics::Image dest_img,::String rule,hx::Null< bool >  swap);
		static Dynamic nextLifeGeneration_dyn();

};


#endif /* INCLUDED_CellAutomata */ 
