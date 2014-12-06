#include <hxcpp.h>

#ifndef INCLUDED_CellAutomata
#include <CellAutomata.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif

Void CellAutomata_obj::__construct()
{
HX_STACK_FRAME("CellAutomata","new",0x1cfdf284,"CellAutomata.new","CellAutomata.hx",16,0x7af6c96c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	::haxe::Log_obj::trace(HX_CSTRING("static class for cellular automation"),hx::SourceInfo(HX_CSTRING("CellAutomata.hx"),16,HX_CSTRING("CellAutomata"),HX_CSTRING("new")));
}
;
	return null();
}

//CellAutomata_obj::~CellAutomata_obj() { }

Dynamic CellAutomata_obj::__CreateEmpty() { return  new CellAutomata_obj; }
hx::ObjectPtr< CellAutomata_obj > CellAutomata_obj::__new()
{  hx::ObjectPtr< CellAutomata_obj > result = new CellAutomata_obj();
	result->__construct();
	return result;}

Dynamic CellAutomata_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CellAutomata_obj > result = new CellAutomata_obj();
	result->__construct();
	return result;}

int CellAutomata_obj::BG_COLOR;

int CellAutomata_obj::FG_COLOR;

Array< ::String > CellAutomata_obj::cellRules;

::String CellAutomata_obj::getRandomRule( ){
	HX_STACK_FRAME("CellAutomata","getRandomRule",0x16aa97f9,"CellAutomata.getRandomRule","CellAutomata.hx",52,0x7af6c96c)
	HX_STACK_LINE(53)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	Float _g1 = (_g * ::CellAutomata_obj::cellRules->length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	return ::CellAutomata_obj::cellRules->__get(_g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CellAutomata_obj,getRandomRule,return )

Void CellAutomata_obj::genRandomCells( ::lime::graphics::Image img,Float posx,Float posy){
{
		HX_STACK_FRAME("CellAutomata","genRandomCells",0x8687b93a,"CellAutomata.genRandomCells","CellAutomata.hx",58,0x7af6c96c)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(posx,"posx")
		HX_STACK_ARG(posy,"posy")
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			if ((!(((_g < (int)10))))){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			int x = (_g)++;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(59)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			while((true)){
				HX_STACK_LINE(59)
				if ((!(((_g1 < (int)10))))){
					HX_STACK_LINE(59)
					break;
				}
				HX_STACK_LINE(59)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(60)
				Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(60)
				if (((_g2 > 0.5))){
					HX_STACK_LINE(61)
					int _g11 = ::Math_obj::round(((posx - (int)5) + x));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(61)
					int _g21 = ::Math_obj::round(((posy - (int)5) + y));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(61)
					img->setPixel32(_g11,_g21,(int)-4129015);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CellAutomata_obj,genRandomCells,(void))

Void CellAutomata_obj::nextLifeGeneration( ::lime::graphics::Image src_img,::lime::graphics::Image dest_img,::String rule,hx::Null< bool >  __o_swap){
bool swap = __o_swap.Default(false);
	HX_STACK_FRAME("CellAutomata","nextLifeGeneration",0x430f0b63,"CellAutomata.nextLifeGeneration","CellAutomata.hx",71,0x7af6c96c)
	HX_STACK_ARG(src_img,"src_img")
	HX_STACK_ARG(dest_img,"dest_img")
	HX_STACK_ARG(rule,"rule")
	HX_STACK_ARG(swap,"swap")
{
		HX_STACK_LINE(73)
		if ((swap)){
			HX_STACK_LINE(73)
			::CellAutomata_obj::nextLifeGeneration(dest_img,src_img,rule,null());
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(75)
		int s_rule = (int)0;		HX_STACK_VAR(s_rule,"s_rule");
		HX_STACK_LINE(76)
		int b_rule = (int)0;		HX_STACK_VAR(b_rule,"b_rule");
		HX_STACK_LINE(78)
		::String c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			Array< ::String > _g1 = rule.split(HX_CSTRING("/"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			Array< ::String > _g11 = _g1->__get((int)0).split(HX_CSTRING(""));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				if ((!(((_g < _g11->length))))){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				::String c1 = _g11->__get(_g);		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(80)
				++(_g);
				HX_STACK_LINE(80)
				int _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					Dynamic _g12 = ::Std_obj::parseInt(c1);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(80)
					int b = (int((int)1) << int(_g12));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(80)
					_g2 = (int(s_rule) | int(b));
				}
				HX_STACK_LINE(80)
				s_rule = _g2;
			}
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			Array< ::String > _g3 = rule.split(HX_CSTRING("/"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(81)
			Array< ::String > _g1 = _g3->__get((int)1).split(HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				::String c1 = _g1->__get(_g);		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(81)
				++(_g);
				HX_STACK_LINE(81)
				int _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					Dynamic _g4 = ::Std_obj::parseInt(c1);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(81)
					int b = (int((int)1) << int(_g4));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(81)
					_g5 = (int(b_rule) | int(b));
				}
				HX_STACK_LINE(81)
				b_rule = _g5;
			}
		}
		HX_STACK_LINE(83)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(83)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(83)
		int x_neg;		HX_STACK_VAR(x_neg,"x_neg");
		HX_STACK_LINE(83)
		int y_neg;		HX_STACK_VAR(y_neg,"y_neg");
		HX_STACK_LINE(83)
		int x_pos;		HX_STACK_VAR(x_pos,"x_pos");
		HX_STACK_LINE(83)
		int y_pos;		HX_STACK_VAR(y_pos,"y_pos");
		HX_STACK_LINE(84)
		int sum;		HX_STACK_VAR(sum,"sum");
		HX_STACK_LINE(85)
		int w = src_img->width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(86)
		int h = src_img->height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			while((true)){
				HX_STACK_LINE(88)
				if ((!(((_g < h))))){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(88)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(90)
				y_neg = hx::Mod(((y1 - (int)1)),h);
				HX_STACK_LINE(90)
				if (((y_neg < (int)0))){
					HX_STACK_LINE(90)
					hx::AddEq(y_neg,h);
				}
				HX_STACK_LINE(91)
				y_pos = hx::Mod(((y1 + (int)1)),h);
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(93)
					while((true)){
						HX_STACK_LINE(93)
						if ((!(((_g1 < w))))){
							HX_STACK_LINE(93)
							break;
						}
						HX_STACK_LINE(93)
						int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(95)
						x_neg = hx::Mod(((x1 - (int)1)),w);
						HX_STACK_LINE(95)
						if (((x_neg < (int)0))){
							HX_STACK_LINE(95)
							hx::AddEq(x_neg,w);
						}
						HX_STACK_LINE(96)
						x_pos = hx::Mod(((x1 + (int)1)),w);
						HX_STACK_LINE(97)
						sum = (int)0;
						HX_STACK_LINE(100)
						int _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							int _g6 = src_img->getPixel32(x_neg,y_neg);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(100)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(100)
							if (((_g6 == (int)-4129015))){
								HX_STACK_LINE(100)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(100)
								b = (int)0;
							}
							HX_STACK_LINE(100)
							_g7 = (sum + b);
						}
						HX_STACK_LINE(100)
						sum = _g7;
						HX_STACK_LINE(101)
						int _g9;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(101)
						{
							HX_STACK_LINE(101)
							int _g8 = src_img->getPixel32(x1,y_neg);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(101)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(101)
							if (((_g8 == (int)-4129015))){
								HX_STACK_LINE(101)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(101)
								b = (int)0;
							}
							HX_STACK_LINE(101)
							_g9 = (sum + b);
						}
						HX_STACK_LINE(101)
						sum = _g9;
						HX_STACK_LINE(102)
						int _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							int _g10 = src_img->getPixel32(x_pos,y_neg);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(102)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(102)
							if (((_g10 == (int)-4129015))){
								HX_STACK_LINE(102)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(102)
								b = (int)0;
							}
							HX_STACK_LINE(102)
							_g11 = (sum + b);
						}
						HX_STACK_LINE(102)
						sum = _g11;
						HX_STACK_LINE(105)
						int _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							int _g12 = src_img->getPixel32(x_neg,y1);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(105)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(105)
							if (((_g12 == (int)-4129015))){
								HX_STACK_LINE(105)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(105)
								b = (int)0;
							}
							HX_STACK_LINE(105)
							_g13 = (sum + b);
						}
						HX_STACK_LINE(105)
						sum = _g13;
						HX_STACK_LINE(106)
						int _g15;		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							int _g14 = src_img->getPixel32(x_pos,y1);		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(106)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(106)
							if (((_g14 == (int)-4129015))){
								HX_STACK_LINE(106)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(106)
								b = (int)0;
							}
							HX_STACK_LINE(106)
							_g15 = (sum + b);
						}
						HX_STACK_LINE(106)
						sum = _g15;
						HX_STACK_LINE(109)
						int _g17;		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							int _g16 = src_img->getPixel32(x_neg,y_pos);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(109)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(109)
							if (((_g16 == (int)-4129015))){
								HX_STACK_LINE(109)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(109)
								b = (int)0;
							}
							HX_STACK_LINE(109)
							_g17 = (sum + b);
						}
						HX_STACK_LINE(109)
						sum = _g17;
						HX_STACK_LINE(110)
						int _g19;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							int _g18 = src_img->getPixel32(x1,y_pos);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(110)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(110)
							if (((_g18 == (int)-4129015))){
								HX_STACK_LINE(110)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(110)
								b = (int)0;
							}
							HX_STACK_LINE(110)
							_g19 = (sum + b);
						}
						HX_STACK_LINE(110)
						sum = _g19;
						HX_STACK_LINE(111)
						int _g21;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(111)
						{
							HX_STACK_LINE(111)
							int _g20 = src_img->getPixel32(x_pos,y_pos);		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(111)
							int b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(111)
							if (((_g20 == (int)-4129015))){
								HX_STACK_LINE(111)
								b = (int)1;
							}
							else{
								HX_STACK_LINE(111)
								b = (int)0;
							}
							HX_STACK_LINE(111)
							_g21 = (sum + b);
						}
						HX_STACK_LINE(111)
						sum = _g21;
						HX_STACK_LINE(113)
						sum = (int((int)1) << int(sum));
						HX_STACK_LINE(116)
						int _g22 = src_img->getPixel32(x1,y1);		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(116)
						if (((_g22 == (int)-4129015))){
							struct _Function_6_1{
								inline static bool Block( int &sum,int &s_rule){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CellAutomata.hx",118,0x7af6c96c)
									{
										HX_STACK_LINE(118)
										int a = (int(s_rule) & int(sum));		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(118)
										bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(118)
										bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(118)
										return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(118)
							if ((_Function_6_1::Block(sum,s_rule))){
								HX_STACK_LINE(119)
								dest_img->setPixel32(x1,y1,(int)-4129015);
							}
							else{
								HX_STACK_LINE(121)
								dest_img->setPixel32(x1,y1,(int)-16777216);
							}
						}
						else{
							struct _Function_6_1{
								inline static bool Block( int &sum,int &b_rule){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CellAutomata.hx",125,0x7af6c96c)
									{
										HX_STACK_LINE(125)
										int a = (int(b_rule) & int(sum));		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(125)
										bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(125)
										bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(125)
										return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(125)
							if ((_Function_6_1::Block(sum,b_rule))){
								HX_STACK_LINE(126)
								dest_img->setPixel32(x1,y1,(int)-4129015);
							}
							else{
								HX_STACK_LINE(128)
								dest_img->setPixel32(x1,y1,(int)-16777216);
							}
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CellAutomata_obj,nextLifeGeneration,(void))


CellAutomata_obj::CellAutomata_obj()
{
}

Dynamic CellAutomata_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"cellRules") ) { return cellRules; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRandomRule") ) { return getRandomRule_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"genRandomCells") ) { return genRandomCells_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nextLifeGeneration") ) { return nextLifeGeneration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CellAutomata_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"cellRules") ) { cellRules=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CellAutomata_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BG_COLOR"),
	HX_CSTRING("FG_COLOR"),
	HX_CSTRING("cellRules"),
	HX_CSTRING("getRandomRule"),
	HX_CSTRING("genRandomCells"),
	HX_CSTRING("nextLifeGeneration"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CellAutomata_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CellAutomata_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(CellAutomata_obj::FG_COLOR,"FG_COLOR");
	HX_MARK_MEMBER_NAME(CellAutomata_obj::cellRules,"cellRules");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CellAutomata_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CellAutomata_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(CellAutomata_obj::FG_COLOR,"FG_COLOR");
	HX_VISIT_MEMBER_NAME(CellAutomata_obj::cellRules,"cellRules");
};

#endif

Class CellAutomata_obj::__mClass;

void CellAutomata_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CellAutomata"), hx::TCanCast< CellAutomata_obj> ,sStaticFields,sMemberFields,
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

void CellAutomata_obj::__boot()
{
	BG_COLOR= (int)-16777216;
	FG_COLOR= (int)-4129015;
	cellRules= Array_obj< ::String >::__new().Add(HX_CSTRING("0/2")).Add(HX_CSTRING("23/3")).Add(HX_CSTRING("5/345")).Add(HX_CSTRING("23/36")).Add(HX_CSTRING("34/34")).Add(HX_CSTRING("023/3")).Add(HX_CSTRING("245/368")).Add(HX_CSTRING("245/368")).Add(HX_CSTRING("238/357")).Add(HX_CSTRING("1245/3")).Add(HX_CSTRING("12345/3")).Add(HX_CSTRING("1234/3")).Add(HX_CSTRING("1345/3")).Add(HX_CSTRING("1345/32")).Add(HX_CSTRING("45678/3")).Add(HX_CSTRING("1358/357")).Add(HX_CSTRING("4567/345")).Add(HX_CSTRING("1357/1357")).Add(HX_CSTRING("2345/45678")).Add(HX_CSTRING("35678/4678")).Add(HX_CSTRING("34678/3678")).Add(HX_CSTRING("02468/1357")).Add(HX_CSTRING("235678/378")).Add(HX_CSTRING("235678/3678"));
}

