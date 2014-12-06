#include <hxcpp.h>

#ifndef INCLUDED_CellAutomata
#include <CellAutomata.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_OpenglRender
#include <OpenglRender.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_FlashRenderContext
#include <lime/graphics/FlashRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",11,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->scale = 4.0;
	HX_STACK_LINE(18)
	this->rule = HX_CSTRING("23/3");
	HX_STACK_LINE(16)
	this->spawnCells = false;
	HX_STACK_LINE(15)
	this->swap = false;
	HX_STACK_LINE(14)
	this->time = 0.05;
	HX_STACK_LINE(31)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",35,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(37)
		::lime::graphics::Image _g = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,(int)300,(int)200,(int)-16777216,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		this->src_image = _g;
		HX_STACK_LINE(38)
		::lime::graphics::Image _g1 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,(int)300,(int)200,(int)-16777216,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		this->dest_image = _g1;
		HX_STACK_LINE(40)
		::CellAutomata_obj::genRandomCells(this->src_image,(int)150,(int)100);
		HX_STACK_LINE(41)
		Float _g2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		this->lastTime = _g2;
		HX_STACK_LINE(43)
		switch( (int)(context->__Index())){
			case (int)1: {
				HX_STACK_LINE(43)
				::lime::graphics::CanvasRenderContext context1 = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(context1,"context1");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(47)
					::String _g3 = ::StringTools_obj::hex(this->config->__Field(HX_CSTRING("background"),true),(int)6);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(47)
					::String _g4 = (HX_CSTRING("#") + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(47)
					context1->fillStyle = _g4;
					HX_STACK_LINE(48)
					context1->fillRect((int)0,(int)0,this->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->width,this->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->height);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(43)
				::lime::graphics::DOMRenderContext element = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(element,"element");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(52)
					::String _g5 = ::StringTools_obj::hex(this->config->__Field(HX_CSTRING("background"),true),(int)6);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(52)
					::String _g6 = (HX_CSTRING("#") + _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(52)
					element->style->__FieldRef(HX_CSTRING("backgroundColor")) = _g6;
					HX_STACK_LINE(53)
					Dynamic _g7 = this->src_image->get_src();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(53)
					element->appendChild(_g7);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(43)
				::lime::graphics::FlashRenderContext sprite = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(55)
				{
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(43)
				::lime::graphics::GLRenderContext gl = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(67)
				::OpenglRender_obj::init(gl,this->config->__Field(HX_CSTRING("background"),true),this->src_image,this->scale);
			}
			;break;
			default: {
			}
		}
	}
return null();
}


Void Main_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("Main","onMouseDown",0x100c4c73,"Main.onMouseDown","Main.hx",75,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(76)
		::CellAutomata_obj::genRandomCells(this->src_image,(Float(x) / Float(this->scale)),(Float(y) / Float(this->scale)));
		HX_STACK_LINE(77)
		::CellAutomata_obj::genRandomCells(this->dest_image,(Float(x) / Float(this->scale)),(Float(y) / Float(this->scale)));
	}
return null();
}


Void Main_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("Main","render",0x35d38acb,"Main.render","Main.hx",81,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(84)
		Float _g = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		Float _g1 = (_g - this->lastTime);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		if (((_g1 > this->time))){
			HX_STACK_LINE(86)
			Float _g2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(86)
			this->lastTime = _g2;
			HX_STACK_LINE(89)
			Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(89)
			if (((_g3 < 0.1))){
				HX_STACK_LINE(89)
				::String _g4 = ::CellAutomata_obj::getRandomRule();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(89)
				this->rule = _g4;
			}
			HX_STACK_LINE(92)
			::CellAutomata_obj::nextLifeGeneration(this->src_image,this->dest_image,this->rule,this->swap);
			HX_STACK_LINE(93)
			this->swap = !(this->swap);
			HX_STACK_LINE(96)
			switch( (int)(context->__Index())){
				case (int)1: {
					HX_STACK_LINE(96)
					::lime::graphics::CanvasRenderContext context1 = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(context1,"context1");
					HX_STACK_LINE(98)
					if ((this->swap)){
						HX_STACK_LINE(99)
						::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->src_image);
						HX_STACK_LINE(100)
						Dynamic _g5 = this->src_image->get_src();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(100)
						context1->drawImage(_g5,(int)0,(int)0,(this->src_image->width * this->scale),(this->src_image->height * this->scale),null(),null(),null(),null());
					}
					else{
						HX_STACK_LINE(103)
						::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->dest_image);
						HX_STACK_LINE(104)
						Dynamic _g6 = this->dest_image->get_src();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(104)
						context1->drawImage(_g6,(int)0,(int)0,(this->dest_image->width * this->scale),(this->dest_image->height * this->scale),null(),null(),null(),null());
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(96)
					::lime::graphics::DOMRenderContext element = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(element,"element");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(108)
						element->removeChild(element->firstChild);
						HX_STACK_LINE(109)
						if ((this->swap)){
							HX_STACK_LINE(110)
							::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->src_image);
							HX_STACK_LINE(111)
							Dynamic _g7 = this->src_image->get_src();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(111)
							element->appendChild(_g7);
						}
						else{
							HX_STACK_LINE(114)
							::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->dest_image);
							HX_STACK_LINE(115)
							Dynamic _g8 = this->dest_image->get_src();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(115)
							element->appendChild(_g8);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(96)
					::lime::graphics::FlashRenderContext sprite = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(118)
					{
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(96)
					::lime::graphics::GLRenderContext gl = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(gl,"gl");
					HX_STACK_LINE(124)
					if ((this->swap)){
						HX_STACK_LINE(125)
						::OpenglRender_obj::changeTextureData(gl,this->src_image);
					}
					else{
						HX_STACK_LINE(127)
						::OpenglRender_obj::changeTextureData(gl,this->dest_image);
					}
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(135)
		switch( (int)(context->__Index())){
			case (int)0: {
				HX_STACK_LINE(135)
				::lime::graphics::GLRenderContext gl = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(137)
				::OpenglRender_obj::render(gl,this->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->width,this->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->height);
			}
			;break;
			default: {
			}
		}
	}
return null();
}



Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(swap,"swap");
	HX_MARK_MEMBER_NAME(spawnCells,"spawnCells");
	HX_MARK_MEMBER_NAME(rule,"rule");
	HX_MARK_MEMBER_NAME(src_image,"src_image");
	HX_MARK_MEMBER_NAME(dest_image,"dest_image");
	HX_MARK_MEMBER_NAME(scale,"scale");
	::lime::app::Application_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(swap,"swap");
	HX_VISIT_MEMBER_NAME(spawnCells,"spawnCells");
	HX_VISIT_MEMBER_NAME(rule,"rule");
	HX_VISIT_MEMBER_NAME(src_image,"src_image");
	HX_VISIT_MEMBER_NAME(dest_image,"dest_image");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	::lime::app::Application_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap; }
		if (HX_FIELD_EQ(inName,"rule") ) { return rule; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"src_image") ) { return src_image; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnCells") ) { return spawnCells; }
		if (HX_FIELD_EQ(inName,"dest_image") ) { return dest_image; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swap") ) { swap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rule") ) { rule=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"src_image") ) { src_image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnCells") ) { spawnCells=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dest_image") ) { dest_image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("swap"));
	outFields->push(HX_CSTRING("spawnCells"));
	outFields->push(HX_CSTRING("rule"));
	outFields->push(HX_CSTRING("src_image"));
	outFields->push(HX_CSTRING("dest_image"));
	outFields->push(HX_CSTRING("scale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Main_obj,lastTime),HX_CSTRING("lastTime")},
	{hx::fsFloat,(int)offsetof(Main_obj,time),HX_CSTRING("time")},
	{hx::fsBool,(int)offsetof(Main_obj,swap),HX_CSTRING("swap")},
	{hx::fsBool,(int)offsetof(Main_obj,spawnCells),HX_CSTRING("spawnCells")},
	{hx::fsString,(int)offsetof(Main_obj,rule),HX_CSTRING("rule")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(Main_obj,src_image),HX_CSTRING("src_image")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(Main_obj,dest_image),HX_CSTRING("dest_image")},
	{hx::fsFloat,(int)offsetof(Main_obj,scale),HX_CSTRING("scale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lastTime"),
	HX_CSTRING("time"),
	HX_CSTRING("swap"),
	HX_CSTRING("spawnCells"),
	HX_CSTRING("rule"),
	HX_CSTRING("src_image"),
	HX_CSTRING("dest_image"),
	HX_CSTRING("scale"),
	HX_CSTRING("init"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

