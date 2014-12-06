#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_Int32Array
#include <lime/utils/Int32Array.h>
#endif
namespace lime{
namespace graphics{

Void GLRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.GLRenderContext","new",0x262d869c,"lime.graphics.GLRenderContext.new","lime/graphics/GLRenderContext.hx",12,0xbdd53034)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(360)
	this->BROWSER_DEFAULT_WEBGL = (int)37444;
	HX_STACK_LINE(359)
	this->UNPACK_COLORSPACE_CONVERSION_WEBGL = (int)37443;
	HX_STACK_LINE(358)
	this->CONTEXT_LOST_WEBGL = (int)37442;
	HX_STACK_LINE(357)
	this->UNPACK_PREMULTIPLY_ALPHA_WEBGL = (int)37441;
	HX_STACK_LINE(356)
	this->UNPACK_FLIP_Y_WEBGL = (int)37440;
	HX_STACK_LINE(354)
	this->INVALID_FRAMEBUFFER_OPERATION = (int)1286;
	HX_STACK_LINE(352)
	this->MAX_RENDERBUFFER_SIZE = (int)34024;
	HX_STACK_LINE(351)
	this->RENDERBUFFER_BINDING = (int)36007;
	HX_STACK_LINE(350)
	this->FRAMEBUFFER_BINDING = (int)36006;
	HX_STACK_LINE(348)
	this->FRAMEBUFFER_UNSUPPORTED = (int)36061;
	HX_STACK_LINE(347)
	this->FRAMEBUFFER_INCOMPLETE_DIMENSIONS = (int)36057;
	HX_STACK_LINE(346)
	this->FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = (int)36055;
	HX_STACK_LINE(345)
	this->FRAMEBUFFER_INCOMPLETE_ATTACHMENT = (int)36054;
	HX_STACK_LINE(344)
	this->FRAMEBUFFER_COMPLETE = (int)36053;
	HX_STACK_LINE(342)
	this->NONE = (int)0;
	HX_STACK_LINE(340)
	this->DEPTH_STENCIL_ATTACHMENT = (int)33306;
	HX_STACK_LINE(339)
	this->STENCIL_ATTACHMENT = (int)36128;
	HX_STACK_LINE(338)
	this->DEPTH_ATTACHMENT = (int)36096;
	HX_STACK_LINE(337)
	this->COLOR_ATTACHMENT0 = (int)36064;
	HX_STACK_LINE(335)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = (int)36051;
	HX_STACK_LINE(334)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = (int)36050;
	HX_STACK_LINE(333)
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = (int)36049;
	HX_STACK_LINE(332)
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = (int)36048;
	HX_STACK_LINE(330)
	this->RENDERBUFFER_STENCIL_SIZE = (int)36181;
	HX_STACK_LINE(329)
	this->RENDERBUFFER_DEPTH_SIZE = (int)36180;
	HX_STACK_LINE(328)
	this->RENDERBUFFER_ALPHA_SIZE = (int)36179;
	HX_STACK_LINE(327)
	this->RENDERBUFFER_BLUE_SIZE = (int)36178;
	HX_STACK_LINE(326)
	this->RENDERBUFFER_GREEN_SIZE = (int)36177;
	HX_STACK_LINE(325)
	this->RENDERBUFFER_RED_SIZE = (int)36176;
	HX_STACK_LINE(324)
	this->RENDERBUFFER_INTERNAL_FORMAT = (int)36164;
	HX_STACK_LINE(323)
	this->RENDERBUFFER_HEIGHT = (int)36163;
	HX_STACK_LINE(322)
	this->RENDERBUFFER_WIDTH = (int)36162;
	HX_STACK_LINE(320)
	this->DEPTH_STENCIL = (int)34041;
	HX_STACK_LINE(319)
	this->STENCIL_INDEX8 = (int)36168;
	HX_STACK_LINE(318)
	this->STENCIL_INDEX = (int)6401;
	HX_STACK_LINE(317)
	this->DEPTH_COMPONENT16 = (int)33189;
	HX_STACK_LINE(316)
	this->RGB565 = (int)36194;
	HX_STACK_LINE(315)
	this->RGB5_A1 = (int)32855;
	HX_STACK_LINE(314)
	this->RGBA4 = (int)32854;
	HX_STACK_LINE(312)
	this->RENDERBUFFER = (int)36161;
	HX_STACK_LINE(311)
	this->FRAMEBUFFER = (int)36160;
	HX_STACK_LINE(309)
	this->HIGH_INT = (int)36341;
	HX_STACK_LINE(308)
	this->MEDIUM_INT = (int)36340;
	HX_STACK_LINE(307)
	this->LOW_INT = (int)36339;
	HX_STACK_LINE(306)
	this->HIGH_FLOAT = (int)36338;
	HX_STACK_LINE(305)
	this->MEDIUM_FLOAT = (int)36337;
	HX_STACK_LINE(304)
	this->LOW_FLOAT = (int)36336;
	HX_STACK_LINE(302)
	this->COMPILE_STATUS = (int)35713;
	HX_STACK_LINE(300)
	this->POINT_SPRITE = (int)34913;
	HX_STACK_LINE(299)
	this->VERTEX_PROGRAM_POINT_SIZE = (int)34370;
	HX_STACK_LINE(297)
	this->VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = (int)34975;
	HX_STACK_LINE(296)
	this->VERTEX_ATTRIB_ARRAY_POINTER = (int)34373;
	HX_STACK_LINE(295)
	this->VERTEX_ATTRIB_ARRAY_NORMALIZED = (int)34922;
	HX_STACK_LINE(294)
	this->VERTEX_ATTRIB_ARRAY_TYPE = (int)34341;
	HX_STACK_LINE(293)
	this->VERTEX_ATTRIB_ARRAY_STRIDE = (int)34340;
	HX_STACK_LINE(292)
	this->VERTEX_ATTRIB_ARRAY_SIZE = (int)34339;
	HX_STACK_LINE(291)
	this->VERTEX_ATTRIB_ARRAY_ENABLED = (int)34338;
	HX_STACK_LINE(289)
	this->SAMPLER_CUBE = (int)35680;
	HX_STACK_LINE(288)
	this->SAMPLER_2D = (int)35678;
	HX_STACK_LINE(287)
	this->FLOAT_MAT4 = (int)35676;
	HX_STACK_LINE(286)
	this->FLOAT_MAT3 = (int)35675;
	HX_STACK_LINE(285)
	this->FLOAT_MAT2 = (int)35674;
	HX_STACK_LINE(284)
	this->BOOL_VEC4 = (int)35673;
	HX_STACK_LINE(283)
	this->BOOL_VEC3 = (int)35672;
	HX_STACK_LINE(282)
	this->BOOL_VEC2 = (int)35671;
	HX_STACK_LINE(281)
	this->BOOL = (int)35670;
	HX_STACK_LINE(280)
	this->INT_VEC4 = (int)35669;
	HX_STACK_LINE(279)
	this->INT_VEC3 = (int)35668;
	HX_STACK_LINE(278)
	this->INT_VEC2 = (int)35667;
	HX_STACK_LINE(277)
	this->FLOAT_VEC4 = (int)35666;
	HX_STACK_LINE(276)
	this->FLOAT_VEC3 = (int)35665;
	HX_STACK_LINE(275)
	this->FLOAT_VEC2 = (int)35664;
	HX_STACK_LINE(273)
	this->MIRRORED_REPEAT = (int)33648;
	HX_STACK_LINE(272)
	this->CLAMP_TO_EDGE = (int)33071;
	HX_STACK_LINE(271)
	this->REPEAT = (int)10497;
	HX_STACK_LINE(269)
	this->ACTIVE_TEXTURE = (int)34016;
	HX_STACK_LINE(268)
	this->TEXTURE31 = (int)34015;
	HX_STACK_LINE(267)
	this->TEXTURE30 = (int)34014;
	HX_STACK_LINE(266)
	this->TEXTURE29 = (int)34013;
	HX_STACK_LINE(265)
	this->TEXTURE28 = (int)34012;
	HX_STACK_LINE(264)
	this->TEXTURE27 = (int)34011;
	HX_STACK_LINE(263)
	this->TEXTURE26 = (int)34010;
	HX_STACK_LINE(262)
	this->TEXTURE25 = (int)34009;
	HX_STACK_LINE(261)
	this->TEXTURE24 = (int)34008;
	HX_STACK_LINE(260)
	this->TEXTURE23 = (int)34007;
	HX_STACK_LINE(259)
	this->TEXTURE22 = (int)34006;
	HX_STACK_LINE(258)
	this->TEXTURE21 = (int)34005;
	HX_STACK_LINE(257)
	this->TEXTURE20 = (int)34004;
	HX_STACK_LINE(256)
	this->TEXTURE19 = (int)34003;
	HX_STACK_LINE(255)
	this->TEXTURE18 = (int)34002;
	HX_STACK_LINE(254)
	this->TEXTURE17 = (int)34001;
	HX_STACK_LINE(253)
	this->TEXTURE16 = (int)34000;
	HX_STACK_LINE(252)
	this->TEXTURE15 = (int)33999;
	HX_STACK_LINE(251)
	this->TEXTURE14 = (int)33998;
	HX_STACK_LINE(250)
	this->TEXTURE13 = (int)33997;
	HX_STACK_LINE(249)
	this->TEXTURE12 = (int)33996;
	HX_STACK_LINE(248)
	this->TEXTURE11 = (int)33995;
	HX_STACK_LINE(247)
	this->TEXTURE10 = (int)33994;
	HX_STACK_LINE(246)
	this->TEXTURE9 = (int)33993;
	HX_STACK_LINE(245)
	this->TEXTURE8 = (int)33992;
	HX_STACK_LINE(244)
	this->TEXTURE7 = (int)33991;
	HX_STACK_LINE(243)
	this->TEXTURE6 = (int)33990;
	HX_STACK_LINE(242)
	this->TEXTURE5 = (int)33989;
	HX_STACK_LINE(241)
	this->TEXTURE4 = (int)33988;
	HX_STACK_LINE(240)
	this->TEXTURE3 = (int)33987;
	HX_STACK_LINE(239)
	this->TEXTURE2 = (int)33986;
	HX_STACK_LINE(238)
	this->TEXTURE1 = (int)33985;
	HX_STACK_LINE(237)
	this->TEXTURE0 = (int)33984;
	HX_STACK_LINE(235)
	this->MAX_CUBE_MAP_TEXTURE_SIZE = (int)34076;
	HX_STACK_LINE(234)
	this->TEXTURE_CUBE_MAP_NEGATIVE_Z = (int)34074;
	HX_STACK_LINE(233)
	this->TEXTURE_CUBE_MAP_POSITIVE_Z = (int)34073;
	HX_STACK_LINE(232)
	this->TEXTURE_CUBE_MAP_NEGATIVE_Y = (int)34072;
	HX_STACK_LINE(231)
	this->TEXTURE_CUBE_MAP_POSITIVE_Y = (int)34071;
	HX_STACK_LINE(230)
	this->TEXTURE_CUBE_MAP_NEGATIVE_X = (int)34070;
	HX_STACK_LINE(229)
	this->TEXTURE_CUBE_MAP_POSITIVE_X = (int)34069;
	HX_STACK_LINE(228)
	this->TEXTURE_BINDING_CUBE_MAP = (int)34068;
	HX_STACK_LINE(227)
	this->TEXTURE_CUBE_MAP = (int)34067;
	HX_STACK_LINE(225)
	this->TEXTURE = (int)5890;
	HX_STACK_LINE(224)
	this->TEXTURE_2D = (int)3553;
	HX_STACK_LINE(222)
	this->TEXTURE_WRAP_T = (int)10243;
	HX_STACK_LINE(221)
	this->TEXTURE_WRAP_S = (int)10242;
	HX_STACK_LINE(220)
	this->TEXTURE_MIN_FILTER = (int)10241;
	HX_STACK_LINE(219)
	this->TEXTURE_MAG_FILTER = (int)10240;
	HX_STACK_LINE(217)
	this->LINEAR_MIPMAP_LINEAR = (int)9987;
	HX_STACK_LINE(216)
	this->NEAREST_MIPMAP_LINEAR = (int)9986;
	HX_STACK_LINE(215)
	this->LINEAR_MIPMAP_NEAREST = (int)9985;
	HX_STACK_LINE(214)
	this->NEAREST_MIPMAP_NEAREST = (int)9984;
	HX_STACK_LINE(212)
	this->LINEAR = (int)9729;
	HX_STACK_LINE(211)
	this->NEAREST = (int)9728;
	HX_STACK_LINE(209)
	this->VERSION = (int)7938;
	HX_STACK_LINE(208)
	this->RENDERER = (int)7937;
	HX_STACK_LINE(207)
	this->VENDOR = (int)7936;
	HX_STACK_LINE(205)
	this->DECR_WRAP = (int)34056;
	HX_STACK_LINE(204)
	this->INCR_WRAP = (int)34055;
	HX_STACK_LINE(203)
	this->INVERT = (int)5386;
	HX_STACK_LINE(202)
	this->DECR = (int)7683;
	HX_STACK_LINE(201)
	this->INCR = (int)7682;
	HX_STACK_LINE(200)
	this->REPLACE = (int)7681;
	HX_STACK_LINE(199)
	this->KEEP = (int)7680;
	HX_STACK_LINE(197)
	this->ALWAYS = (int)519;
	HX_STACK_LINE(196)
	this->GEQUAL = (int)518;
	HX_STACK_LINE(195)
	this->NOTEQUAL = (int)517;
	HX_STACK_LINE(194)
	this->GREATER = (int)516;
	HX_STACK_LINE(193)
	this->LEQUAL = (int)515;
	HX_STACK_LINE(192)
	this->EQUAL = (int)514;
	HX_STACK_LINE(191)
	this->LESS = (int)513;
	HX_STACK_LINE(190)
	this->NEVER = (int)512;
	HX_STACK_LINE(188)
	this->CURRENT_PROGRAM = (int)35725;
	HX_STACK_LINE(187)
	this->SHADING_LANGUAGE_VERSION = (int)35724;
	HX_STACK_LINE(186)
	this->ACTIVE_ATTRIBUTES = (int)35721;
	HX_STACK_LINE(185)
	this->ACTIVE_UNIFORMS = (int)35718;
	HX_STACK_LINE(184)
	this->ATTACHED_SHADERS = (int)35717;
	HX_STACK_LINE(183)
	this->VALIDATE_STATUS = (int)35715;
	HX_STACK_LINE(182)
	this->LINK_STATUS = (int)35714;
	HX_STACK_LINE(181)
	this->DELETE_STATUS = (int)35712;
	HX_STACK_LINE(180)
	this->SHADER_TYPE = (int)35663;
	HX_STACK_LINE(179)
	this->MAX_FRAGMENT_UNIFORM_VECTORS = (int)36349;
	HX_STACK_LINE(178)
	this->MAX_TEXTURE_IMAGE_UNITS = (int)34930;
	HX_STACK_LINE(177)
	this->MAX_VERTEX_TEXTURE_IMAGE_UNITS = (int)35660;
	HX_STACK_LINE(176)
	this->MAX_COMBINED_TEXTURE_IMAGE_UNITS = (int)35661;
	HX_STACK_LINE(175)
	this->MAX_VARYING_VECTORS = (int)36348;
	HX_STACK_LINE(174)
	this->MAX_VERTEX_UNIFORM_VECTORS = (int)36347;
	HX_STACK_LINE(173)
	this->MAX_VERTEX_ATTRIBS = (int)34921;
	HX_STACK_LINE(172)
	this->VERTEX_SHADER = (int)35633;
	HX_STACK_LINE(171)
	this->FRAGMENT_SHADER = (int)35632;
	HX_STACK_LINE(169)
	this->UNSIGNED_SHORT_5_6_5 = (int)33635;
	HX_STACK_LINE(168)
	this->UNSIGNED_SHORT_5_5_5_1 = (int)32820;
	HX_STACK_LINE(167)
	this->UNSIGNED_SHORT_4_4_4_4 = (int)32819;
	HX_STACK_LINE(165)
	this->LUMINANCE_ALPHA = (int)6410;
	HX_STACK_LINE(164)
	this->LUMINANCE = (int)6409;
	HX_STACK_LINE(163)
	this->RGBA = (int)6408;
	HX_STACK_LINE(162)
	this->RGB = (int)6407;
	HX_STACK_LINE(161)
	this->ALPHA = (int)6406;
	HX_STACK_LINE(160)
	this->DEPTH_COMPONENT = (int)6402;
	HX_STACK_LINE(158)
	this->FLOAT = (int)5126;
	HX_STACK_LINE(157)
	this->UNSIGNED_INT = (int)5125;
	HX_STACK_LINE(156)
	this->INT = (int)5124;
	HX_STACK_LINE(155)
	this->UNSIGNED_SHORT = (int)5123;
	HX_STACK_LINE(154)
	this->SHORT = (int)5122;
	HX_STACK_LINE(153)
	this->UNSIGNED_BYTE = (int)5121;
	HX_STACK_LINE(152)
	this->BYTE = (int)5120;
	HX_STACK_LINE(150)
	this->GENERATE_MIPMAP_HINT = (int)33170;
	HX_STACK_LINE(148)
	this->NICEST = (int)4354;
	HX_STACK_LINE(147)
	this->FASTEST = (int)4353;
	HX_STACK_LINE(146)
	this->DONT_CARE = (int)4352;
	HX_STACK_LINE(144)
	this->COMPRESSED_TEXTURE_FORMATS = (int)34467;
	HX_STACK_LINE(142)
	this->SAMPLE_COVERAGE_INVERT = (int)32939;
	HX_STACK_LINE(141)
	this->SAMPLE_COVERAGE_VALUE = (int)32938;
	HX_STACK_LINE(140)
	this->SAMPLES = (int)32937;
	HX_STACK_LINE(139)
	this->SAMPLE_BUFFERS = (int)32936;
	HX_STACK_LINE(138)
	this->TEXTURE_BINDING_2D = (int)32873;
	HX_STACK_LINE(137)
	this->POLYGON_OFFSET_FACTOR = (int)32824;
	HX_STACK_LINE(135)
	this->POLYGON_OFFSET_UNITS = (int)10752;
	HX_STACK_LINE(134)
	this->STENCIL_BITS = (int)3415;
	HX_STACK_LINE(133)
	this->DEPTH_BITS = (int)3414;
	HX_STACK_LINE(132)
	this->ALPHA_BITS = (int)3413;
	HX_STACK_LINE(131)
	this->BLUE_BITS = (int)3412;
	HX_STACK_LINE(130)
	this->GREEN_BITS = (int)3411;
	HX_STACK_LINE(129)
	this->RED_BITS = (int)3410;
	HX_STACK_LINE(128)
	this->SUBPIXEL_BITS = (int)3408;
	HX_STACK_LINE(127)
	this->MAX_VIEWPORT_DIMS = (int)3386;
	HX_STACK_LINE(126)
	this->MAX_TEXTURE_SIZE = (int)3379;
	HX_STACK_LINE(125)
	this->PACK_ALIGNMENT = (int)3333;
	HX_STACK_LINE(124)
	this->UNPACK_ALIGNMENT = (int)3317;
	HX_STACK_LINE(123)
	this->COLOR_WRITEMASK = (int)3107;
	HX_STACK_LINE(122)
	this->COLOR_CLEAR_VALUE = (int)3106;
	HX_STACK_LINE(120)
	this->SCISSOR_BOX = (int)3088;
	HX_STACK_LINE(119)
	this->VIEWPORT = (int)2978;
	HX_STACK_LINE(118)
	this->STENCIL_BACK_WRITEMASK = (int)36005;
	HX_STACK_LINE(117)
	this->STENCIL_BACK_VALUE_MASK = (int)36004;
	HX_STACK_LINE(116)
	this->STENCIL_BACK_REF = (int)36003;
	HX_STACK_LINE(115)
	this->STENCIL_BACK_PASS_DEPTH_PASS = (int)34819;
	HX_STACK_LINE(114)
	this->STENCIL_BACK_PASS_DEPTH_FAIL = (int)34818;
	HX_STACK_LINE(113)
	this->STENCIL_BACK_FAIL = (int)34817;
	HX_STACK_LINE(112)
	this->STENCIL_BACK_FUNC = (int)34816;
	HX_STACK_LINE(111)
	this->STENCIL_WRITEMASK = (int)2968;
	HX_STACK_LINE(110)
	this->STENCIL_VALUE_MASK = (int)2963;
	HX_STACK_LINE(109)
	this->STENCIL_REF = (int)2967;
	HX_STACK_LINE(108)
	this->STENCIL_PASS_DEPTH_PASS = (int)2966;
	HX_STACK_LINE(107)
	this->STENCIL_PASS_DEPTH_FAIL = (int)2965;
	HX_STACK_LINE(106)
	this->STENCIL_FAIL = (int)2964;
	HX_STACK_LINE(105)
	this->STENCIL_FUNC = (int)2962;
	HX_STACK_LINE(104)
	this->STENCIL_CLEAR_VALUE = (int)2961;
	HX_STACK_LINE(103)
	this->DEPTH_FUNC = (int)2932;
	HX_STACK_LINE(102)
	this->DEPTH_CLEAR_VALUE = (int)2931;
	HX_STACK_LINE(101)
	this->DEPTH_WRITEMASK = (int)2930;
	HX_STACK_LINE(100)
	this->DEPTH_RANGE = (int)2928;
	HX_STACK_LINE(99)
	this->FRONT_FACE = (int)2886;
	HX_STACK_LINE(98)
	this->CULL_FACE_MODE = (int)2885;
	HX_STACK_LINE(97)
	this->ALIASED_LINE_WIDTH_RANGE = (int)33902;
	HX_STACK_LINE(96)
	this->ALIASED_POINT_SIZE_RANGE = (int)33901;
	HX_STACK_LINE(95)
	this->LINE_WIDTH = (int)2849;
	HX_STACK_LINE(93)
	this->CCW = (int)2305;
	HX_STACK_LINE(92)
	this->CW = (int)2304;
	HX_STACK_LINE(90)
	this->OUT_OF_MEMORY = (int)1285;
	HX_STACK_LINE(89)
	this->INVALID_OPERATION = (int)1282;
	HX_STACK_LINE(88)
	this->INVALID_VALUE = (int)1281;
	HX_STACK_LINE(87)
	this->INVALID_ENUM = (int)1280;
	HX_STACK_LINE(86)
	this->NO_ERROR = (int)0;
	HX_STACK_LINE(84)
	this->SAMPLE_COVERAGE = (int)32928;
	HX_STACK_LINE(83)
	this->SAMPLE_ALPHA_TO_COVERAGE = (int)32926;
	HX_STACK_LINE(82)
	this->POLYGON_OFFSET_FILL = (int)32823;
	HX_STACK_LINE(81)
	this->SCISSOR_TEST = (int)3089;
	HX_STACK_LINE(80)
	this->DEPTH_TEST = (int)2929;
	HX_STACK_LINE(79)
	this->STENCIL_TEST = (int)2960;
	HX_STACK_LINE(78)
	this->DITHER = (int)3024;
	HX_STACK_LINE(77)
	this->BLEND = (int)3042;
	HX_STACK_LINE(76)
	this->CULL_FACE = (int)2884;
	HX_STACK_LINE(74)
	this->FRONT_AND_BACK = (int)1032;
	HX_STACK_LINE(73)
	this->BACK = (int)1029;
	HX_STACK_LINE(72)
	this->FRONT = (int)1028;
	HX_STACK_LINE(70)
	this->CURRENT_VERTEX_ATTRIB = (int)34342;
	HX_STACK_LINE(68)
	this->BUFFER_USAGE = (int)34661;
	HX_STACK_LINE(67)
	this->BUFFER_SIZE = (int)34660;
	HX_STACK_LINE(65)
	this->DYNAMIC_DRAW = (int)35048;
	HX_STACK_LINE(64)
	this->STATIC_DRAW = (int)35044;
	HX_STACK_LINE(63)
	this->STREAM_DRAW = (int)35040;
	HX_STACK_LINE(61)
	this->ELEMENT_ARRAY_BUFFER_BINDING = (int)34965;
	HX_STACK_LINE(60)
	this->ARRAY_BUFFER_BINDING = (int)34964;
	HX_STACK_LINE(59)
	this->ELEMENT_ARRAY_BUFFER = (int)34963;
	HX_STACK_LINE(58)
	this->ARRAY_BUFFER = (int)34962;
	HX_STACK_LINE(56)
	this->BLEND_COLOR = (int)32773;
	HX_STACK_LINE(55)
	this->ONE_MINUS_CONSTANT_ALPHA = (int)32772;
	HX_STACK_LINE(54)
	this->CONSTANT_ALPHA = (int)32771;
	HX_STACK_LINE(53)
	this->ONE_MINUS_CONSTANT_COLOR = (int)32770;
	HX_STACK_LINE(52)
	this->CONSTANT_COLOR = (int)32769;
	HX_STACK_LINE(51)
	this->BLEND_SRC_ALPHA = (int)32971;
	HX_STACK_LINE(50)
	this->BLEND_DST_ALPHA = (int)32970;
	HX_STACK_LINE(49)
	this->BLEND_SRC_RGB = (int)32969;
	HX_STACK_LINE(48)
	this->BLEND_DST_RGB = (int)32968;
	HX_STACK_LINE(46)
	this->FUNC_REVERSE_SUBTRACT = (int)32779;
	HX_STACK_LINE(45)
	this->FUNC_SUBTRACT = (int)32778;
	HX_STACK_LINE(43)
	this->BLEND_EQUATION_ALPHA = (int)34877;
	HX_STACK_LINE(42)
	this->BLEND_EQUATION_RGB = (int)32777;
	HX_STACK_LINE(41)
	this->BLEND_EQUATION = (int)32777;
	HX_STACK_LINE(40)
	this->FUNC_ADD = (int)32774;
	HX_STACK_LINE(38)
	this->SRC_ALPHA_SATURATE = (int)776;
	HX_STACK_LINE(37)
	this->ONE_MINUS_DST_COLOR = (int)775;
	HX_STACK_LINE(36)
	this->DST_COLOR = (int)774;
	HX_STACK_LINE(34)
	this->ONE_MINUS_DST_ALPHA = (int)773;
	HX_STACK_LINE(33)
	this->DST_ALPHA = (int)772;
	HX_STACK_LINE(32)
	this->ONE_MINUS_SRC_ALPHA = (int)771;
	HX_STACK_LINE(31)
	this->SRC_ALPHA = (int)770;
	HX_STACK_LINE(30)
	this->ONE_MINUS_SRC_COLOR = (int)769;
	HX_STACK_LINE(29)
	this->SRC_COLOR = (int)768;
	HX_STACK_LINE(28)
	this->ONE = (int)1;
	HX_STACK_LINE(27)
	this->ZERO = (int)0;
	HX_STACK_LINE(25)
	this->TRIANGLE_FAN = (int)6;
	HX_STACK_LINE(24)
	this->TRIANGLE_STRIP = (int)5;
	HX_STACK_LINE(23)
	this->TRIANGLES = (int)4;
	HX_STACK_LINE(22)
	this->LINE_STRIP = (int)3;
	HX_STACK_LINE(21)
	this->LINE_LOOP = (int)2;
	HX_STACK_LINE(20)
	this->LINES = (int)1;
	HX_STACK_LINE(19)
	this->POINTS = (int)0;
	HX_STACK_LINE(17)
	this->COLOR_BUFFER_BIT = (int)16384;
	HX_STACK_LINE(16)
	this->STENCIL_BUFFER_BIT = (int)1024;
	HX_STACK_LINE(15)
	this->DEPTH_BUFFER_BIT = (int)256;
}
;
	return null();
}

//GLRenderContext_obj::~GLRenderContext_obj() { }

Dynamic GLRenderContext_obj::__CreateEmpty() { return  new GLRenderContext_obj; }
hx::ObjectPtr< GLRenderContext_obj > GLRenderContext_obj::__new()
{  hx::ObjectPtr< GLRenderContext_obj > result = new GLRenderContext_obj();
	result->__construct();
	return result;}

Dynamic GLRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderContext_obj > result = new GLRenderContext_obj();
	result->__construct();
	return result;}

Void GLRenderContext_obj::activeTexture( int texture){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","activeTexture",0xfa246cf1,"lime.graphics.GLRenderContext.activeTexture","lime/graphics/GLRenderContext.hx",374,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(374)
		::lime::graphics::opengl::GL_obj::lime_gl_active_texture(texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,activeTexture,(void))

Void GLRenderContext_obj::attachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","attachShader",0x8c2b730e,"lime.graphics.GLRenderContext.attachShader","lime/graphics/GLRenderContext.hx",381,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(381)
		program->attach(shader);
		HX_STACK_LINE(381)
		::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(program->id,shader->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,attachShader,(void))

Void GLRenderContext_obj::bindAttribLocation( ::lime::graphics::opengl::GLProgram program,int index,::String name){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindAttribLocation",0x60fd5380,"lime.graphics.GLRenderContext.bindAttribLocation","lime/graphics/GLRenderContext.hx",388,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(388)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_attrib_location(program->id,index,name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,bindAttribLocation,(void))

Void GLRenderContext_obj::bindBuffer( int target,::lime::graphics::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindBuffer",0x74fa5be1,"lime.graphics.GLRenderContext.bindBuffer","lime/graphics/GLRenderContext.hx",395,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(395)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(target,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindBuffer,(void))

Void GLRenderContext_obj::bindFramebuffer( int target,::lime::graphics::opengl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindFramebuffer",0x2111e66c,"lime.graphics.GLRenderContext.bindFramebuffer","lime/graphics/GLRenderContext.hx",402,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(402)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(target,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindFramebuffer,(void))

Void GLRenderContext_obj::bindRenderbuffer( int target,::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindRenderbuffer",0x5523ca77,"lime.graphics.GLRenderContext.bindRenderbuffer","lime/graphics/GLRenderContext.hx",409,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(409)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_renderbuffer(target,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindRenderbuffer,(void))

Void GLRenderContext_obj::bindTexture( int target,::lime::graphics::opengl::GLTexture texture){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindTexture",0xd3662eda,"lime.graphics.GLRenderContext.bindTexture","lime/graphics/GLRenderContext.hx",416,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(416)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(target,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindTexture,(void))

Void GLRenderContext_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendColor",0x5eeffc96,"lime.graphics.GLRenderContext.blendColor","lime/graphics/GLRenderContext.hx",423,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(423)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_color(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,blendColor,(void))

Void GLRenderContext_obj::blendEquation( int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendEquation",0xa627f239,"lime.graphics.GLRenderContext.blendEquation","lime/graphics/GLRenderContext.hx",430,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(430)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_equation(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,blendEquation,(void))

Void GLRenderContext_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendEquationSeparate",0xb2f82ebc,"lime.graphics.GLRenderContext.blendEquationSeparate","lime/graphics/GLRenderContext.hx",437,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(437)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_equation_separate(modeRGB,modeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,blendEquationSeparate,(void))

Void GLRenderContext_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendFunc",0x97aa0771,"lime.graphics.GLRenderContext.blendFunc","lime/graphics/GLRenderContext.hx",444,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(444)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_func(sfactor,dfactor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,blendFunc,(void))

Void GLRenderContext_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendFuncSeparate",0xe8e63bf4,"lime.graphics.GLRenderContext.blendFuncSeparate","lime/graphics/GLRenderContext.hx",451,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(451)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_func_separate(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,blendFuncSeparate,(void))

Void GLRenderContext_obj::bufferData( int target,::lime::utils::ArrayBufferView data,int usage){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bufferData",0x0faf888e,"lime.graphics.GLRenderContext.bufferData","lime/graphics/GLRenderContext.hx",458,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(458)
		::lime::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(458)
		int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(458)
		::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(target,_g,_g1,_g2,usage);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,bufferData,(void))

Void GLRenderContext_obj::bufferSubData( int target,int offset,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bufferSubData",0xe95f4fe6,"lime.graphics.GLRenderContext.bufferSubData","lime/graphics/GLRenderContext.hx",465,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(465)
		::lime::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(465)
		int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(465)
		int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(465)
		::lime::graphics::opengl::GL_obj::lime_gl_buffer_sub_data(target,offset,_g,_g1,_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,bufferSubData,(void))

int GLRenderContext_obj::checkFramebufferStatus( int target){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","checkFramebufferStatus",0x1cdbc55b,"lime.graphics.GLRenderContext.checkFramebufferStatus","lime/graphics/GLRenderContext.hx",472,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(472)
	return ::lime::graphics::opengl::GL_obj::lime_gl_check_framebuffer_status(target);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,checkFramebufferStatus,return )

Void GLRenderContext_obj::clear( int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clear",0xe0bc2ec9,"lime.graphics.GLRenderContext.clear","lime/graphics/GLRenderContext.hx",479,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(479)
		::lime::graphics::opengl::GL_obj::lime_gl_clear(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,clear,(void))

Void GLRenderContext_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clearColor",0x9ba279da,"lime.graphics.GLRenderContext.clearColor","lime/graphics/GLRenderContext.hx",486,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(486)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_color(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,clearColor,(void))

Void GLRenderContext_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clearDepth",0x286ff97a,"lime.graphics.GLRenderContext.clearDepth","lime/graphics/GLRenderContext.hx",493,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(493)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_depth(depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,clearDepth,(void))

Void GLRenderContext_obj::clearStencil( int s){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clearStencil",0x35361233,"lime.graphics.GLRenderContext.clearStencil","lime/graphics/GLRenderContext.hx",500,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(500)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_stencil(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,clearStencil,(void))

Void GLRenderContext_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","colorMask",0xb3d1d72b,"lime.graphics.GLRenderContext.colorMask","lime/graphics/GLRenderContext.hx",507,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(507)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,colorMask,(void))

Void GLRenderContext_obj::compileShader( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","compileShader",0x7e2cca34,"lime.graphics.GLRenderContext.compileShader","lime/graphics/GLRenderContext.hx",514,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(514)
		::lime::graphics::opengl::GL_obj::lime_gl_compile_shader(shader->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,compileShader,(void))

Void GLRenderContext_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","compressedTexImage2D",0x35a35eeb,"lime.graphics.GLRenderContext.compressedTexImage2D","lime/graphics/GLRenderContext.hx",521,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(521)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(521)
		if (((data == null()))){
			HX_STACK_LINE(521)
			_g = null();
		}
		else{
			HX_STACK_LINE(521)
			_g = data->getByteBuffer();
		}
		HX_STACK_LINE(521)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(521)
		if (((data == null()))){
			HX_STACK_LINE(521)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(521)
			_g1 = data->getStart();
		}
		HX_STACK_LINE(521)
		::lime::graphics::opengl::GL_obj::lime_gl_compressed_tex_image_2d(target,level,internalformat,width,height,border,_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(GLRenderContext_obj,compressedTexImage2D,(void))

Void GLRenderContext_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","compressedTexSubImage2D",0x3de2720f,"lime.graphics.GLRenderContext.compressedTexSubImage2D","lime/graphics/GLRenderContext.hx",528,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(528)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(528)
		if (((data == null()))){
			HX_STACK_LINE(528)
			_g = null();
		}
		else{
			HX_STACK_LINE(528)
			_g = data->getByteBuffer();
		}
		HX_STACK_LINE(528)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(528)
		if (((data == null()))){
			HX_STACK_LINE(528)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(528)
			_g1 = data->getStart();
		}
		HX_STACK_LINE(528)
		::lime::graphics::opengl::GL_obj::lime_gl_compressed_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GLRenderContext_obj,compressedTexSubImage2D,(void))

Void GLRenderContext_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","copyTexImage2D",0x4c0a8c1f,"lime.graphics.GLRenderContext.copyTexImage2D","lime/graphics/GLRenderContext.hx",535,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(535)
		::lime::graphics::opengl::GL_obj::lime_gl_copy_tex_image_2d(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GLRenderContext_obj,copyTexImage2D,(void))

Void GLRenderContext_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","copyTexSubImage2D",0xc2d47d5b,"lime.graphics.GLRenderContext.copyTexSubImage2D","lime/graphics/GLRenderContext.hx",542,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(542)
		::lime::graphics::opengl::GL_obj::lime_gl_copy_tex_sub_image_2d(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GLRenderContext_obj,copyTexSubImage2D,(void))

::lime::graphics::opengl::GLBuffer GLRenderContext_obj::createBuffer( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createBuffer",0xcc9d9f60,"lime.graphics.GLRenderContext.createBuffer","lime/graphics/GLRenderContext.hx",547,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(549)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(549)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(549)
	return ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createBuffer,return )

::lime::graphics::opengl::GLFramebuffer GLRenderContext_obj::createFramebuffer( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createFramebuffer",0xeb0e968d,"lime.graphics.GLRenderContext.createFramebuffer","lime/graphics/GLRenderContext.hx",554,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(556)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(556)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(556)
	return ::lime::graphics::opengl::GLFramebuffer_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createFramebuffer,return )

::lime::graphics::opengl::GLProgram GLRenderContext_obj::createProgram( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createProgram",0x7fb67c24,"lime.graphics.GLRenderContext.createProgram","lime/graphics/GLRenderContext.hx",561,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(563)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(563)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(563)
	return ::lime::graphics::opengl::GLProgram_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createProgram,return )

::lime::graphics::opengl::GLRenderbuffer GLRenderContext_obj::createRenderbuffer( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createRenderbuffer",0x48413736,"lime.graphics.GLRenderContext.createRenderbuffer","lime/graphics/GLRenderContext.hx",568,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(570)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(570)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(570)
	return ::lime::graphics::opengl::GLRenderbuffer_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createRenderbuffer,return )

::lime::graphics::opengl::GLShader GLRenderContext_obj::createShader( int type){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createShader",0x1929a185,"lime.graphics.GLRenderContext.createShader","lime/graphics/GLRenderContext.hx",575,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(577)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(577)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_shader(type);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(577)
	return ::lime::graphics::opengl::GLShader_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,createShader,return )

::lime::graphics::opengl::GLTexture GLRenderContext_obj::createTexture( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createTexture",0x2a9dfa7b,"lime.graphics.GLRenderContext.createTexture","lime/graphics/GLRenderContext.hx",582,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(584)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(584)
	return ::lime::graphics::opengl::GLTexture_obj::__new(_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createTexture,return )

Void GLRenderContext_obj::cullFace( int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","cullFace",0xa4ce17b3,"lime.graphics.GLRenderContext.cullFace","lime/graphics/GLRenderContext.hx",591,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(591)
		::lime::graphics::opengl::GL_obj::lime_gl_cull_face(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,cullFace,(void))

Void GLRenderContext_obj::deleteBuffer( ::lime::graphics::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteBuffer",0x10e085cf,"lime.graphics.GLRenderContext.deleteBuffer","lime/graphics/GLRenderContext.hx",598,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(598)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(598)
		buffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteBuffer,(void))

Void GLRenderContext_obj::deleteFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteFramebuffer",0x6e26fdbe,"lime.graphics.GLRenderContext.deleteFramebuffer","lime/graphics/GLRenderContext.hx",605,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(605)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_framebuffer(framebuffer->id);
		HX_STACK_LINE(605)
		framebuffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteFramebuffer,(void))

Void GLRenderContext_obj::deleteProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteProgram",0xf5fd36d5,"lime.graphics.GLRenderContext.deleteProgram","lime/graphics/GLRenderContext.hx",612,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(612)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_program(program->id);
		HX_STACK_LINE(612)
		program->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteProgram,(void))

Void GLRenderContext_obj::deleteRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteRenderbuffer",0x7a831ae5,"lime.graphics.GLRenderContext.deleteRenderbuffer","lime/graphics/GLRenderContext.hx",619,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(619)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_render_buffer(renderbuffer->id);
		HX_STACK_LINE(619)
		renderbuffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteRenderbuffer,(void))

Void GLRenderContext_obj::deleteShader( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteShader",0x5d6c87f4,"lime.graphics.GLRenderContext.deleteShader","lime/graphics/GLRenderContext.hx",626,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(626)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_shader(shader->id);
		HX_STACK_LINE(626)
		shader->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteShader,(void))

Void GLRenderContext_obj::deleteTexture( ::lime::graphics::opengl::GLTexture texture){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteTexture",0xa0e4b52c,"lime.graphics.GLRenderContext.deleteTexture","lime/graphics/GLRenderContext.hx",633,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(633)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
		HX_STACK_LINE(633)
		texture->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteTexture,(void))

Void GLRenderContext_obj::depthFunc( int func){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","depthFunc",0x2a565123,"lime.graphics.GLRenderContext.depthFunc","lime/graphics/GLRenderContext.hx",640,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(640)
		::lime::graphics::opengl::GL_obj::lime_gl_depth_func(func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,depthFunc,(void))

Void GLRenderContext_obj::depthMask( bool flag){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","depthMask",0x2ee7a6cb,"lime.graphics.GLRenderContext.depthMask","lime/graphics/GLRenderContext.hx",647,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(647)
		::lime::graphics::opengl::GL_obj::lime_gl_depth_mask(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,depthMask,(void))

Void GLRenderContext_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","depthRange",0xbcc762fe,"lime.graphics.GLRenderContext.depthRange","lime/graphics/GLRenderContext.hx",654,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(654)
		::lime::graphics::opengl::GL_obj::lime_gl_depth_range(zNear,zFar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,depthRange,(void))

Void GLRenderContext_obj::detachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","detachShader",0xc461731c,"lime.graphics.GLRenderContext.detachShader","lime/graphics/GLRenderContext.hx",661,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(661)
		::lime::graphics::opengl::GL_obj::lime_gl_detach_shader(program->id,shader->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,detachShader,(void))

Void GLRenderContext_obj::disable( int cap){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","disable",0xb14fee24,"lime.graphics.GLRenderContext.disable","lime/graphics/GLRenderContext.hx",668,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(668)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(cap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,disable,(void))

Void GLRenderContext_obj::disableVertexAttribArray( int index){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","disableVertexAttribArray",0xbb346227,"lime.graphics.GLRenderContext.disableVertexAttribArray","lime/graphics/GLRenderContext.hx",675,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(675)
		::lime::graphics::opengl::GL_obj::lime_gl_disable_vertex_attrib_array(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,disableVertexAttribArray,(void))

Void GLRenderContext_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","drawArrays",0x75efbd22,"lime.graphics.GLRenderContext.drawArrays","lime/graphics/GLRenderContext.hx",682,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(682)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(mode,first,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,drawArrays,(void))

Void GLRenderContext_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","drawElements",0x336b649f,"lime.graphics.GLRenderContext.drawElements","lime/graphics/GLRenderContext.hx",689,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(689)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(mode,count,type,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,drawElements,(void))

Void GLRenderContext_obj::enable( int cap){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","enable",0xb4cc85c7,"lime.graphics.GLRenderContext.enable","lime/graphics/GLRenderContext.hx",696,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(696)
		::lime::graphics::opengl::GL_obj::lime_gl_enable(cap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,enable,(void))

Void GLRenderContext_obj::enableVertexAttribArray( int index){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","enableVertexAttribArray",0xb3bf0324,"lime.graphics.GLRenderContext.enableVertexAttribArray","lime/graphics/GLRenderContext.hx",703,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(703)
		::lime::graphics::opengl::GL_obj::lime_gl_enable_vertex_attrib_array(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,enableVertexAttribArray,(void))

Void GLRenderContext_obj::finish( ){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","finish",0x42c41797,"lime.graphics.GLRenderContext.finish","lime/graphics/GLRenderContext.hx",710,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_LINE(710)
		::lime::graphics::opengl::GL_obj::lime_gl_finish();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,finish,(void))

Void GLRenderContext_obj::flush( ){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","flush",0x9afc2000,"lime.graphics.GLRenderContext.flush","lime/graphics/GLRenderContext.hx",717,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_LINE(717)
		::lime::graphics::opengl::GL_obj::lime_gl_flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,flush,(void))

Void GLRenderContext_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","framebufferRenderbuffer",0x3e17999f,"lime.graphics.GLRenderContext.framebufferRenderbuffer","lime/graphics/GLRenderContext.hx",724,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(724)
		::lime::graphics::opengl::GL_obj::lime_gl_framebuffer_renderbuffer(target,attachment,renderbuffertarget,renderbuffer->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,framebufferRenderbuffer,(void))

Void GLRenderContext_obj::framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLTexture texture,int level){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","framebufferTexture2D",0x3567ed04,"lime.graphics.GLRenderContext.framebufferTexture2D","lime/graphics/GLRenderContext.hx",731,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(731)
		::lime::graphics::opengl::GL_obj::lime_gl_framebuffer_texture2D(target,attachment,textarget,texture->id,level);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,framebufferTexture2D,(void))

Void GLRenderContext_obj::frontFace( int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","frontFace",0x10cf0d22,"lime.graphics.GLRenderContext.frontFace","lime/graphics/GLRenderContext.hx",738,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(738)
		::lime::graphics::opengl::GL_obj::lime_gl_front_face(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,frontFace,(void))

Void GLRenderContext_obj::generateMipmap( int target){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","generateMipmap",0xc2a191e1,"lime.graphics.GLRenderContext.generateMipmap","lime/graphics/GLRenderContext.hx",745,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(745)
		::lime::graphics::opengl::GL_obj::lime_gl_generate_mipmap(target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,generateMipmap,(void))

Dynamic GLRenderContext_obj::getActiveAttrib( ::lime::graphics::opengl::GLProgram program,int index){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getActiveAttrib",0x9cd2aba2,"lime.graphics.GLRenderContext.getActiveAttrib","lime/graphics/GLRenderContext.hx",752,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(752)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_active_attrib(program->id,index);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getActiveAttrib,return )

Dynamic GLRenderContext_obj::getActiveUniform( ::lime::graphics::opengl::GLProgram program,int index){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getActiveUniform",0x17ba49dc,"lime.graphics.GLRenderContext.getActiveUniform","lime/graphics/GLRenderContext.hx",759,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(759)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_active_uniform(program->id,index);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getActiveUniform,return )

Array< ::Dynamic > GLRenderContext_obj::getAttachedShaders( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getAttachedShaders",0xd643dbf8,"lime.graphics.GLRenderContext.getAttachedShaders","lime/graphics/GLRenderContext.hx",766,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(766)
	return program->getShaders();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getAttachedShaders,return )

int GLRenderContext_obj::getAttribLocation( ::lime::graphics::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getAttribLocation",0x7b35c211,"lime.graphics.GLRenderContext.getAttribLocation","lime/graphics/GLRenderContext.hx",773,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(773)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_attrib_location(program->id,name);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getAttribLocation,return )

int GLRenderContext_obj::getBufferParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getBufferParameter",0x578105d7,"lime.graphics.GLRenderContext.getBufferParameter","lime/graphics/GLRenderContext.hx",780,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(780)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_buffer_paramerter(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getBufferParameter,return )

Dynamic GLRenderContext_obj::getContextAttributes( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getContextAttributes",0xbf276074,"lime.graphics.GLRenderContext.getContextAttributes","lime/graphics/GLRenderContext.hx",787,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(787)
	Dynamic base = ::lime::graphics::opengl::GL_obj::lime_gl_get_context_attributes();		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(787)
	base->__FieldRef(HX_CSTRING("premultipliedAlpha")) = false;
	HX_STACK_LINE(787)
	base->__FieldRef(HX_CSTRING("preserveDrawingBuffer")) = false;
	HX_STACK_LINE(787)
	return base;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,getContextAttributes,return )

int GLRenderContext_obj::getError( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getError",0xcb9d0b96,"lime.graphics.GLRenderContext.getError","lime/graphics/GLRenderContext.hx",794,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(794)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_error();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,getError,return )

Dynamic GLRenderContext_obj::getExtension( ::String name){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getExtension",0xce1ad24d,"lime.graphics.GLRenderContext.getExtension","lime/graphics/GLRenderContext.hx",801,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(801)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getExtension,return )

int GLRenderContext_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getFramebufferAttachmentParameter",0x36d69ecb,"lime.graphics.GLRenderContext.getFramebufferAttachmentParameter","lime/graphics/GLRenderContext.hx",808,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(808)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_framebuffer_attachment_parameter(target,attachment,pname);
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,getFramebufferAttachmentParameter,return )

Dynamic GLRenderContext_obj::getParameter( int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getParameter",0x31ba7477,"lime.graphics.GLRenderContext.getParameter","lime/graphics/GLRenderContext.hx",815,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(815)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_parameter(pname);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getParameter,return )

::String GLRenderContext_obj::getProgramInfoLog( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getProgramInfoLog",0xec189904,"lime.graphics.GLRenderContext.getProgramInfoLog","lime/graphics/GLRenderContext.hx",822,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(822)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_program_info_log(program->id);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getProgramInfoLog,return )

int GLRenderContext_obj::getProgramParameter( ::lime::graphics::opengl::GLProgram program,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getProgramParameter",0xc6e7b177,"lime.graphics.GLRenderContext.getProgramParameter","lime/graphics/GLRenderContext.hx",829,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(829)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_program_parameter(program->id,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getProgramParameter,return )

int GLRenderContext_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getRenderbufferParameter",0xad97b9c1,"lime.graphics.GLRenderContext.getRenderbufferParameter","lime/graphics/GLRenderContext.hx",836,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(836)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_render_buffer_parameter(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getRenderbufferParameter,return )

::String GLRenderContext_obj::getShaderInfoLog( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderInfoLog",0x3434d1df,"lime.graphics.GLRenderContext.getShaderInfoLog","lime/graphics/GLRenderContext.hx",843,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(843)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_info_log(shader->id);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getShaderInfoLog,return )

int GLRenderContext_obj::getShaderParameter( ::lime::graphics::opengl::GLShader shader,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderParameter",0x79281712,"lime.graphics.GLRenderContext.getShaderParameter","lime/graphics/GLRenderContext.hx",850,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(850)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_parameter(shader->id,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getShaderParameter,return )

Dynamic GLRenderContext_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderPrecisionFormat",0x3f8fb13e,"lime.graphics.GLRenderContext.getShaderPrecisionFormat","lime/graphics/GLRenderContext.hx",857,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(857)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_precision_format(shadertype,precisiontype);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getShaderPrecisionFormat,return )

::String GLRenderContext_obj::getShaderSource( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderSource",0xfeb4c3d2,"lime.graphics.GLRenderContext.getShaderSource","lime/graphics/GLRenderContext.hx",864,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(864)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_source(shader->id);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getShaderSource,return )

Array< ::String > GLRenderContext_obj::getSupportedExtensions( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getSupportedExtensions",0xb3d41830,"lime.graphics.GLRenderContext.getSupportedExtensions","lime/graphics/GLRenderContext.hx",871,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(871)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(871)
	::lime::graphics::opengl::GL_obj::lime_gl_get_supported_extensions(result);
	HX_STACK_LINE(871)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,getSupportedExtensions,return )

int GLRenderContext_obj::getTexParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getTexParameter",0x0c83b8b4,"lime.graphics.GLRenderContext.getTexParameter","lime/graphics/GLRenderContext.hx",878,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(878)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_tex_parameter(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getTexParameter,return )

Dynamic GLRenderContext_obj::getUniform( ::lime::graphics::opengl::GLProgram program,int location){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getUniform",0x81019082,"lime.graphics.GLRenderContext.getUniform","lime/graphics/GLRenderContext.hx",885,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(885)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_uniform(program->id,location);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getUniform,return )

int GLRenderContext_obj::getUniformLocation( ::lime::graphics::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getUniformLocation",0x92a10cd7,"lime.graphics.GLRenderContext.getUniformLocation","lime/graphics/GLRenderContext.hx",892,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(892)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_uniform_location(program->id,name);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getUniformLocation,return )

int GLRenderContext_obj::getVertexAttrib( int index,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getVertexAttrib",0xdccc4fc0,"lime.graphics.GLRenderContext.getVertexAttrib","lime/graphics/GLRenderContext.hx",899,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(899)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_vertex_attrib(index,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getVertexAttrib,return )

int GLRenderContext_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getVertexAttribOffset",0x625eab73,"lime.graphics.GLRenderContext.getVertexAttribOffset","lime/graphics/GLRenderContext.hx",906,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(906)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_vertex_attrib_offset(index,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getVertexAttribOffset,return )

Void GLRenderContext_obj::hint( int target,int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","hint",0x3db3fbcb,"lime.graphics.GLRenderContext.hint","lime/graphics/GLRenderContext.hx",913,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(913)
		::lime::graphics::opengl::GL_obj::lime_gl_hint(target,mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,hint,(void))

bool GLRenderContext_obj::isBuffer( ::lime::graphics::opengl::GLBuffer buffer){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isBuffer",0x219a88ce,"lime.graphics.GLRenderContext.isBuffer","lime/graphics/GLRenderContext.hx",920,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(920)
	if (((bool((buffer != null())) && bool((buffer->id > (int)0))))){
		HX_STACK_LINE(920)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_buffer(buffer->id);
	}
	else{
		HX_STACK_LINE(920)
		return false;
	}
	HX_STACK_LINE(920)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isBuffer,return )

bool GLRenderContext_obj::isContextLost( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isContextLost",0xd15a38e5,"lime.graphics.GLRenderContext.isContextLost","lime/graphics/GLRenderContext.hx",927,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(927)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,isContextLost,return )

bool GLRenderContext_obj::isEnabled( int cap){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isEnabled",0x123d8cf3,"lime.graphics.GLRenderContext.isEnabled","lime/graphics/GLRenderContext.hx",934,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(934)
	return ::lime::graphics::opengl::GL_obj::lime_gl_is_enabled(cap);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isEnabled,return )

bool GLRenderContext_obj::isFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isFramebuffer",0x26e6be5f,"lime.graphics.GLRenderContext.isFramebuffer","lime/graphics/GLRenderContext.hx",941,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(941)
	if (((bool((framebuffer != null())) && bool((framebuffer->id > (int)0))))){
		HX_STACK_LINE(941)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_framebuffer(framebuffer->id);
	}
	else{
		HX_STACK_LINE(941)
		return false;
	}
	HX_STACK_LINE(941)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isFramebuffer,return )

bool GLRenderContext_obj::isProgram( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isProgram",0x8805d2f6,"lime.graphics.GLRenderContext.isProgram","lime/graphics/GLRenderContext.hx",948,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(948)
	if (((bool((program != null())) && bool((program->id > (int)0))))){
		HX_STACK_LINE(948)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_program(program->id);
	}
	else{
		HX_STACK_LINE(948)
		return false;
	}
	HX_STACK_LINE(948)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isProgram,return )

bool GLRenderContext_obj::isRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isRenderbuffer",0x698be724,"lime.graphics.GLRenderContext.isRenderbuffer","lime/graphics/GLRenderContext.hx",955,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(955)
	if (((bool((renderbuffer != null())) && bool((renderbuffer->id > (int)0))))){
		HX_STACK_LINE(955)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_renderbuffer(renderbuffer->id);
	}
	else{
		HX_STACK_LINE(955)
		return false;
	}
	HX_STACK_LINE(955)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isRenderbuffer,return )

bool GLRenderContext_obj::isShader( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isShader",0x6e268af3,"lime.graphics.GLRenderContext.isShader","lime/graphics/GLRenderContext.hx",962,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(962)
	if (((bool((shader != null())) && bool((shader->id > (int)0))))){
		HX_STACK_LINE(962)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_shader(shader->id);
	}
	else{
		HX_STACK_LINE(962)
		return false;
	}
	HX_STACK_LINE(962)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isShader,return )

bool GLRenderContext_obj::isTexture( ::lime::graphics::opengl::GLTexture texture){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isTexture",0x32ed514d,"lime.graphics.GLRenderContext.isTexture","lime/graphics/GLRenderContext.hx",969,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(969)
	if (((bool((texture != null())) && bool((texture->id > (int)0))))){
		HX_STACK_LINE(969)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_texture(texture->id);
	}
	else{
		HX_STACK_LINE(969)
		return false;
	}
	HX_STACK_LINE(969)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isTexture,return )

Void GLRenderContext_obj::lineWidth( Float width){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","lineWidth",0xa16bc4ae,"lime.graphics.GLRenderContext.lineWidth","lime/graphics/GLRenderContext.hx",976,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(976)
		::lime::graphics::opengl::GL_obj::lime_gl_line_width(width);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,lineWidth,(void))

Void GLRenderContext_obj::linkProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","linkProgram",0xc18fffe6,"lime.graphics.GLRenderContext.linkProgram","lime/graphics/GLRenderContext.hx",983,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(983)
		::lime::graphics::opengl::GL_obj::lime_gl_link_program(program->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,linkProgram,(void))

Void GLRenderContext_obj::pixelStorei( int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","pixelStorei",0xb8dc86ca,"lime.graphics.GLRenderContext.pixelStorei","lime/graphics/GLRenderContext.hx",990,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(990)
		::lime::graphics::opengl::GL_obj::lime_gl_pixel_storei(pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,pixelStorei,(void))

Void GLRenderContext_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","polygonOffset",0x09c77ee9,"lime.graphics.GLRenderContext.polygonOffset","lime/graphics/GLRenderContext.hx",997,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(997)
		::lime::graphics::opengl::GL_obj::lime_gl_polygon_offset(factor,units);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,polygonOffset,(void))

Void GLRenderContext_obj::readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","readPixels",0x02619c67,"lime.graphics.GLRenderContext.readPixels","lime/graphics/GLRenderContext.hx",1004,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1004)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1004)
		if (((pixels == null()))){
			HX_STACK_LINE(1004)
			_g = null();
		}
		else{
			HX_STACK_LINE(1004)
			_g = pixels->getByteBuffer();
		}
		HX_STACK_LINE(1004)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1004)
		if (((pixels == null()))){
			HX_STACK_LINE(1004)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(1004)
			_g1 = pixels->getStart();
		}
		HX_STACK_LINE(1004)
		::lime::graphics::opengl::GL_obj::lime_gl_read_pixels(x,y,width,height,format,type,_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(GLRenderContext_obj,readPixels,(void))

Void GLRenderContext_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","renderbufferStorage",0xb7bb8f41,"lime.graphics.GLRenderContext.renderbufferStorage","lime/graphics/GLRenderContext.hx",1011,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1011)
		::lime::graphics::opengl::GL_obj::lime_gl_renderbuffer_storage(target,internalformat,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,renderbufferStorage,(void))

Void GLRenderContext_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","sampleCoverage",0xa3152376,"lime.graphics.GLRenderContext.sampleCoverage","lime/graphics/GLRenderContext.hx",1018,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(1018)
		::lime::graphics::opengl::GL_obj::lime_gl_sample_coverage(value,invert);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,sampleCoverage,(void))

Void GLRenderContext_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","scissor",0x04deac58,"lime.graphics.GLRenderContext.scissor","lime/graphics/GLRenderContext.hx",1025,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1025)
		::lime::graphics::opengl::GL_obj::lime_gl_scissor(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,scissor,(void))

Void GLRenderContext_obj::shaderSource( ::lime::graphics::opengl::GLShader shader,::String source){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","shaderSource",0x7bcdf024,"lime.graphics.GLRenderContext.shaderSource","lime/graphics/GLRenderContext.hx",1032,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(1032)
		::lime::graphics::opengl::GL_obj::lime_gl_shader_source(shader->id,source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,shaderSource,(void))

Void GLRenderContext_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilFunc",0x78d2d59c,"lime.graphics.GLRenderContext.stencilFunc","lime/graphics/GLRenderContext.hx",1039,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1039)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(func,ref,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,stencilFunc,(void))

Void GLRenderContext_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilFuncSeparate",0xe319ad1f,"lime.graphics.GLRenderContext.stencilFuncSeparate","lime/graphics/GLRenderContext.hx",1046,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1046)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func_separate(face,func,ref,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,stencilFuncSeparate,(void))

Void GLRenderContext_obj::stencilMask( int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilMask",0x7d642b44,"lime.graphics.GLRenderContext.stencilMask","lime/graphics/GLRenderContext.hx",1053,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1053)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_mask(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,stencilMask,(void))

Void GLRenderContext_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilMaskSeparate",0xf6f4eac7,"lime.graphics.GLRenderContext.stencilMaskSeparate","lime/graphics/GLRenderContext.hx",1060,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1060)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_mask_separate(face,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,stencilMaskSeparate,(void))

Void GLRenderContext_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilOp",0xe6fa8579,"lime.graphics.GLRenderContext.stencilOp","lime/graphics/GLRenderContext.hx",1067,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1067)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(fail,zfail,zpass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,stencilOp,(void))

Void GLRenderContext_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilOpSeparate",0x717001fc,"lime.graphics.GLRenderContext.stencilOpSeparate","lime/graphics/GLRenderContext.hx",1074,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1074)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op_separate(face,fail,zfail,zpass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,stencilOpSeparate,(void))

Void GLRenderContext_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texImage2D",0x35a3460a,"lime.graphics.GLRenderContext.texImage2D","lime/graphics/GLRenderContext.hx",1081,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1081)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1081)
		if (((pixels == null()))){
			HX_STACK_LINE(1081)
			_g = null();
		}
		else{
			HX_STACK_LINE(1081)
			_g = pixels->getByteBuffer();
		}
		HX_STACK_LINE(1081)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1081)
		if (((pixels == null()))){
			HX_STACK_LINE(1081)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(1081)
			_g1 = pixels->getStart();
		}
		HX_STACK_LINE(1081)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(target,level,internalformat,width,height,border,format,type,_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(GLRenderContext_obj,texImage2D,(void))

Void GLRenderContext_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texParameterf",0xdfab80a0,"lime.graphics.GLRenderContext.texParameterf","lime/graphics/GLRenderContext.hx",1088,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1088)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameterf(target,pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,texParameterf,(void))

Void GLRenderContext_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texParameteri",0xdfab80a3,"lime.graphics.GLRenderContext.texParameteri","lime/graphics/GLRenderContext.hx",1095,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1095)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(target,pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,texParameteri,(void))

Void GLRenderContext_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texSubImage2D",0xcc0a8850,"lime.graphics.GLRenderContext.texSubImage2D","lime/graphics/GLRenderContext.hx",1102,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1102)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1102)
		if (((pixels == null()))){
			HX_STACK_LINE(1102)
			_g = null();
		}
		else{
			HX_STACK_LINE(1102)
			_g = pixels->getByteBuffer();
		}
		HX_STACK_LINE(1102)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1102)
		if (((pixels == null()))){
			HX_STACK_LINE(1102)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(1102)
			_g1 = pixels->getStart();
		}
		HX_STACK_LINE(1102)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,type,_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(GLRenderContext_obj,texSubImage2D,(void))

Void GLRenderContext_obj::uniform1f( int location,Float x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1f",0x97ec2c85,"lime.graphics.GLRenderContext.uniform1f","lime/graphics/GLRenderContext.hx",1109,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1109)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(location,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1f,(void))

Void GLRenderContext_obj::uniform1fv( int location,::lime::utils::Float32Array x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1fv",0x56bac851,"lime.graphics.GLRenderContext.uniform1fv","lime/graphics/GLRenderContext.hx",1116,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1116)
		::lime::utils::ByteArray _g = x->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1116)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1fv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1fv,(void))

Void GLRenderContext_obj::uniform1i( int location,int x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1i",0x97ec2c88,"lime.graphics.GLRenderContext.uniform1i","lime/graphics/GLRenderContext.hx",1123,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1123)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(location,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1i,(void))

Void GLRenderContext_obj::uniform1iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1iv",0x56bacaee,"lime.graphics.GLRenderContext.uniform1iv","lime/graphics/GLRenderContext.hx",1130,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1130)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1130)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1iv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1iv,(void))

Void GLRenderContext_obj::uniform2f( int location,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2f",0x97ec2d64,"lime.graphics.GLRenderContext.uniform2f","lime/graphics/GLRenderContext.hx",1137,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1137)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniform2f,(void))

Void GLRenderContext_obj::uniform2fv( int location,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2fv",0x56bb8a92,"lime.graphics.GLRenderContext.uniform2fv","lime/graphics/GLRenderContext.hx",1144,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1144)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1144)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2fv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform2fv,(void))

Void GLRenderContext_obj::uniform2i( int location,int x,int y){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2i",0x97ec2d67,"lime.graphics.GLRenderContext.uniform2i","lime/graphics/GLRenderContext.hx",1151,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1151)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2i(location,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniform2i,(void))

Void GLRenderContext_obj::uniform2iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2iv",0x56bb8d2f,"lime.graphics.GLRenderContext.uniform2iv","lime/graphics/GLRenderContext.hx",1158,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1158)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1158)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2iv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform2iv,(void))

Void GLRenderContext_obj::uniform3f( int location,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3f",0x97ec2e43,"lime.graphics.GLRenderContext.uniform3f","lime/graphics/GLRenderContext.hx",1165,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1165)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3f(location,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,uniform3f,(void))

Void GLRenderContext_obj::uniform3fv( int location,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3fv",0x56bc4cd3,"lime.graphics.GLRenderContext.uniform3fv","lime/graphics/GLRenderContext.hx",1172,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1172)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1172)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3fv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform3fv,(void))

Void GLRenderContext_obj::uniform3i( int location,int x,int y,int z){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3i",0x97ec2e46,"lime.graphics.GLRenderContext.uniform3i","lime/graphics/GLRenderContext.hx",1179,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1179)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3i(location,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,uniform3i,(void))

Void GLRenderContext_obj::uniform3iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3iv",0x56bc4f70,"lime.graphics.GLRenderContext.uniform3iv","lime/graphics/GLRenderContext.hx",1186,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1186)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1186)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3iv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform3iv,(void))

Void GLRenderContext_obj::uniform4f( int location,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4f",0x97ec2f22,"lime.graphics.GLRenderContext.uniform4f","lime/graphics/GLRenderContext.hx",1193,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1193)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,uniform4f,(void))

Void GLRenderContext_obj::uniform4fv( int location,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4fv",0x56bd0f14,"lime.graphics.GLRenderContext.uniform4fv","lime/graphics/GLRenderContext.hx",1200,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1200)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1200)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform4fv,(void))

Void GLRenderContext_obj::uniform4i( int location,int x,int y,int z,int w){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4i",0x97ec2f25,"lime.graphics.GLRenderContext.uniform4i","lime/graphics/GLRenderContext.hx",1207,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1207)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4i(location,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,uniform4i,(void))

Void GLRenderContext_obj::uniform4iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4iv",0x56bd11b1,"lime.graphics.GLRenderContext.uniform4iv","lime/graphics/GLRenderContext.hx",1214,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1214)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1214)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4iv(location,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform4iv,(void))

Void GLRenderContext_obj::uniformMatrix2fv( int location,bool transpose,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniformMatrix2fv",0x05c59ed1,"lime.graphics.GLRenderContext.uniformMatrix2fv","lime/graphics/GLRenderContext.hx",1221,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1221)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1221)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,transpose,_g,(int)2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniformMatrix2fv,(void))

Void GLRenderContext_obj::uniformMatrix3fv( int location,bool transpose,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniformMatrix3fv",0x05c66112,"lime.graphics.GLRenderContext.uniformMatrix3fv","lime/graphics/GLRenderContext.hx",1228,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1228)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1228)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,transpose,_g,(int)3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniformMatrix3fv,(void))

Void GLRenderContext_obj::uniformMatrix4fv( int location,bool transpose,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniformMatrix4fv",0x05c72353,"lime.graphics.GLRenderContext.uniformMatrix4fv","lime/graphics/GLRenderContext.hx",1235,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1235)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1235)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,transpose,_g,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniformMatrix4fv,(void))

Void GLRenderContext_obj::useProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","useProgram",0x72e83641,"lime.graphics.GLRenderContext.useProgram","lime/graphics/GLRenderContext.hx",1249,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1249)
		::lime::graphics::opengl::GL_obj::lime_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,useProgram,(void))

Void GLRenderContext_obj::validateProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","validateProgram",0x28bfa0ca,"lime.graphics.GLRenderContext.validateProgram","lime/graphics/GLRenderContext.hx",1256,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1256)
		::lime::graphics::opengl::GL_obj::lime_gl_validate_program(program->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,validateProgram,(void))

Void GLRenderContext_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib1f",0xbb4a4fa7,"lime.graphics.GLRenderContext.vertexAttrib1f","lime/graphics/GLRenderContext.hx",1263,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1263)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib1f(indx,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib1f,(void))

Void GLRenderContext_obj::vertexAttrib1fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib1fv",0x25bb62ef,"lime.graphics.GLRenderContext.vertexAttrib1fv","lime/graphics/GLRenderContext.hx",1270,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1270)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1270)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib1fv(indx,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib1fv,(void))

Void GLRenderContext_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib2f",0xbb4a5086,"lime.graphics.GLRenderContext.vertexAttrib2f","lime/graphics/GLRenderContext.hx",1277,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1277)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib2f(indx,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,vertexAttrib2f,(void))

Void GLRenderContext_obj::vertexAttrib2fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib2fv",0x25bc2530,"lime.graphics.GLRenderContext.vertexAttrib2fv","lime/graphics/GLRenderContext.hx",1284,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1284)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1284)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib2fv(indx,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib2fv,(void))

Void GLRenderContext_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib3f",0xbb4a5165,"lime.graphics.GLRenderContext.vertexAttrib3f","lime/graphics/GLRenderContext.hx",1291,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1291)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib3f(indx,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,vertexAttrib3f,(void))

Void GLRenderContext_obj::vertexAttrib3fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib3fv",0x25bce771,"lime.graphics.GLRenderContext.vertexAttrib3fv","lime/graphics/GLRenderContext.hx",1298,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1298)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1298)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib3fv(indx,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib3fv,(void))

Void GLRenderContext_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib4f",0xbb4a5244,"lime.graphics.GLRenderContext.vertexAttrib4f","lime/graphics/GLRenderContext.hx",1305,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1305)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib4f(indx,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,vertexAttrib4f,(void))

Void GLRenderContext_obj::vertexAttrib4fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib4fv",0x25bda9b2,"lime.graphics.GLRenderContext.vertexAttrib4fv","lime/graphics/GLRenderContext.hx",1312,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1312)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1312)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib4fv(indx,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib4fv,(void))

Void GLRenderContext_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttribPointer",0x7000f2cb,"lime.graphics.GLRenderContext.vertexAttribPointer","lime/graphics/GLRenderContext.hx",1319,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1319)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(indx,size,type,normalized,stride,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(GLRenderContext_obj,vertexAttribPointer,(void))

Void GLRenderContext_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","viewport",0x95417caa,"lime.graphics.GLRenderContext.viewport","lime/graphics/GLRenderContext.hx",1326,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1326)
		::lime::graphics::opengl::GL_obj::lime_gl_viewport(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,viewport,(void))

int GLRenderContext_obj::get_version( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","get_version",0x3b00996b,"lime.graphics.GLRenderContext.get_version","lime/graphics/GLRenderContext.hx",1331,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1331)
	return (int)2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,get_version,return )


GLRenderContext_obj::GLRenderContext_obj()
{
}

Dynamic GLRenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { return CW; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { return ONE; }
		if (HX_FIELD_EQ(inName,"CCW") ) { return CCW; }
		if (HX_FIELD_EQ(inName,"INT") ) { return INT; }
		if (HX_FIELD_EQ(inName,"RGB") ) { return RGB; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { return ZERO; }
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { return BYTE; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA; }
		if (HX_FIELD_EQ(inName,"LESS") ) { return LESS; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { return KEEP; }
		if (HX_FIELD_EQ(inName,"INCR") ) { return INCR; }
		if (HX_FIELD_EQ(inName,"DECR") ) { return DECR; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { return BOOL; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { return LINES; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { return BLEND; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { return SHORT; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { return NEVER; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { return RGBA4; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { return POINTS; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { return DITHER; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { return NICEST; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { return LEQUAL; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { return GEQUAL; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { return ALWAYS; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { return INVERT; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { return LINEAR; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { return REPEAT; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { return RGB565; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { return SAMPLES; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { return FASTEST; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { return GREATER; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { return REPLACE; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { return NEAREST; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { return TEXTURE; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { return LOW_INT; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { return RGB5_A1; }
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { return FUNC_ADD; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { return VIEWPORT; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { return RED_BITS; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { return NOTEQUAL; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { return TEXTURE0; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { return TEXTURE1; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { return TEXTURE2; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { return TEXTURE3; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { return TEXTURE4; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { return TEXTURE5; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { return TEXTURE6; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { return TEXTURE7; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { return TEXTURE8; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { return TEXTURE9; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { return INT_VEC2; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { return INT_VEC3; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { return INT_VEC4; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { return HIGH_INT; }
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { return LINE_LOOP; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { return TRIANGLES; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { return SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { return SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { return DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { return DST_COLOR; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { return CULL_FACE; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { return BLUE_BITS; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { return DONT_CARE; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { return LUMINANCE; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { return INCR_WRAP; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { return DECR_WRAP; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { return TEXTURE10; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { return TEXTURE11; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { return TEXTURE12; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { return TEXTURE13; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { return TEXTURE14; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { return TEXTURE15; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { return TEXTURE16; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { return TEXTURE17; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { return TEXTURE18; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { return TEXTURE19; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { return TEXTURE20; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { return TEXTURE21; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { return TEXTURE22; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { return TEXTURE23; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { return TEXTURE24; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { return TEXTURE25; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { return TEXTURE26; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { return TEXTURE27; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { return TEXTURE28; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { return TEXTURE29; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { return TEXTURE30; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { return TEXTURE31; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { return BOOL_VEC2; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { return BOOL_VEC3; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { return BOOL_VEC4; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { return LOW_FLOAT; }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { return LINE_STRIP; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { return DEPTH_TEST; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { return LINE_WIDTH; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { return FRONT_FACE; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { return DEPTH_FUNC; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { return GREEN_BITS; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { return ALPHA_BITS; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { return DEPTH_BITS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { return TEXTURE_2D; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { return FLOAT_VEC2; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { return FLOAT_VEC3; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { return FLOAT_VEC4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { return FLOAT_MAT2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { return FLOAT_MAT3; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { return FLOAT_MAT4; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { return SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { return HIGH_FLOAT; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { return MEDIUM_INT; }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRange") ) { return depthRange_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { return BLEND_COLOR; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { return STREAM_DRAW; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { return STATIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { return BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { return DEPTH_RANGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { return STENCIL_REF; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { return SCISSOR_BOX; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { return SHADER_TYPE; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { return LINK_STATUS; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { return FRAMEBUFFER; }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { return TRIANGLE_FAN; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { return ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { return DYNAMIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { return BUFFER_USAGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { return STENCIL_TEST; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { return SCISSOR_TEST; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { return STENCIL_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { return STENCIL_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { return STENCIL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return UNSIGNED_INT; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { return SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"POINT_SPRITE") ) { return POINT_SPRITE; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { return MEDIUM_FLOAT; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { return RENDERBUFFER; }
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { return FUNC_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { return BLEND_DST_RGB; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { return BLEND_SRC_RGB; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { return SUBPIXEL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { return UNSIGNED_BYTE; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { return VERTEX_SHADER; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { return DELETE_STATUS; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { return CLAMP_TO_EDGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { return STENCIL_INDEX; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { return DEPTH_STENCIL; }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"isContextLost") ) { return isContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { return TRIANGLE_STRIP; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { return BLEND_EQUATION; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { return CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { return CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { return FRONT_AND_BACK; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { return CULL_FACE_MODE; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { return PACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { return SAMPLE_BUFFERS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { return UNSIGNED_SHORT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { return TEXTURE_WRAP_S; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { return TEXTURE_WRAP_T; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { return ACTIVE_TEXTURE; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { return COMPILE_STATUS; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { return STENCIL_INDEX8; }
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { return BLEND_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { return BLEND_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { return SAMPLE_COVERAGE; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { return DEPTH_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { return COLOR_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { return DEPTH_COMPONENT; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { return LUMINANCE_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { return FRAGMENT_SHADER; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { return VALIDATE_STATUS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { return ACTIVE_UNIFORMS; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { return CURRENT_PROGRAM; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { return MIRRORED_REPEAT; }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { return DEPTH_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { return COLOR_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { return STENCIL_BACK_REF; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { return UNPACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { return MAX_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { return ATTACHED_SHADERS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { return TEXTURE_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { return DEPTH_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { return DEPTH_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { return STENCIL_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { return STENCIL_BACK_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { return STENCIL_BACK_FAIL; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { return COLOR_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { return MAX_VIEWPORT_DIMS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { return ACTIVE_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { return DEPTH_COMPONENT16; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { return COLOR_ATTACHMENT0; }
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { return STENCIL_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { return SRC_ALPHA_SATURATE; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { return BLEND_EQUATION_RGB; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { return STENCIL_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { return TEXTURE_BINDING_2D; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { return MAX_VERTEX_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { return TEXTURE_MAG_FILTER; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { return TEXTURE_MIN_FILTER; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { return RENDERBUFFER_WIDTH; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { return STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { return CONTEXT_LOST_WEBGL; }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { return ONE_MINUS_SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { return ONE_MINUS_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { return ONE_MINUS_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { return ONE_MINUS_DST_COLOR; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { return POLYGON_OFFSET_FILL; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { return STENCIL_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { return MAX_VARYING_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { return RENDERBUFFER_HEIGHT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { return FRAMEBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { return UNPACK_FLIP_Y_WEBGL; }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { return BLEND_EQUATION_ALPHA; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { return ELEMENT_ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { return ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { return POLYGON_OFFSET_UNITS; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { return GENERATE_MIPMAP_HINT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { return UNSIGNED_SHORT_5_6_5; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { return LINEAR_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { return FRAMEBUFFER_COMPLETE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { return RENDERBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { return FUNC_REVERSE_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { return CURRENT_VERTEX_ATTRIB; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { return POLYGON_OFFSET_FACTOR; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { return SAMPLE_COVERAGE_VALUE; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { return LINEAR_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { return NEAREST_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { return RENDERBUFFER_RED_SIZE; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { return MAX_RENDERBUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { return BROWSER_DEFAULT_WEBGL; }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { return getVertexAttribOffset_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { return STENCIL_BACK_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { return SAMPLE_COVERAGE_INVERT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { return UNSIGNED_SHORT_4_4_4_4; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { return UNSIGNED_SHORT_5_5_5_1; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { return NEAREST_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { return RENDERBUFFER_BLUE_SIZE; }
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { return STENCIL_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { return STENCIL_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { return STENCIL_BACK_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { return MAX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { return RENDERBUFFER_GREEN_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { return RENDERBUFFER_ALPHA_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { return RENDERBUFFER_DEPTH_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { return FRAMEBUFFER_UNSUPPORTED; }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { return ONE_MINUS_CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { return ONE_MINUS_CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { return SAMPLE_ALPHA_TO_COVERAGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { return ALIASED_POINT_SIZE_RANGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { return ALIASED_LINE_WIDTH_RANGE; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { return SHADING_LANGUAGE_VERSION; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { return TEXTURE_BINDING_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { return VERTEX_ATTRIB_ARRAY_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { return VERTEX_ATTRIB_ARRAY_TYPE; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { return DEPTH_STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { return MAX_CUBE_MAP_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_PROGRAM_POINT_SIZE") ) { return VERTEX_PROGRAM_POINT_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { return RENDERBUFFER_STENCIL_SIZE; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { return COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { return MAX_VERTEX_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { return VERTEX_ATTRIB_ARRAY_STRIDE; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { return TEXTURE_CUBE_MAP_POSITIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { return TEXTURE_CUBE_MAP_NEGATIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { return TEXTURE_CUBE_MAP_POSITIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { return TEXTURE_CUBE_MAP_POSITIVE_Z; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Z; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { return VERTEX_ATTRIB_ARRAY_ENABLED; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { return VERTEX_ATTRIB_ARRAY_POINTER; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { return ELEMENT_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { return STENCIL_BACK_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { return STENCIL_BACK_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { return MAX_FRAGMENT_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { return RENDERBUFFER_INTERNAL_FORMAT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { return INVALID_FRAMEBUFFER_OPERATION; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { return MAX_VERTEX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { return VERTEX_ATTRIB_ARRAY_NORMALIZED; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { return UNPACK_PREMULTIPLY_ALPHA_WEBGL; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { return MAX_COMBINED_TEXTURE_IMAGE_UNITS; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { return FRAMEBUFFER_INCOMPLETE_DIMENSIONS; }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { return VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { return UNPACK_COLORSPACE_CONVERSION_WEBGL; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { CW=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { ONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CCW") ) { CCW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT") ) { INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB") ) { RGB=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { ZERO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { RGBA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LESS") ) { LESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { KEEP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR") ) { INCR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR") ) { DECR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { BOOL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { LINES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { BLEND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { NEVER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { RGBA4=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { POINTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { DITHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { NICEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { LEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { GEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { ALWAYS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { RGB565=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { FASTEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { GREATER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { REPLACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { LOW_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { RGB5_A1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { FUNC_ADD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { VIEWPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { RED_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { NOTEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { TEXTURE0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { TEXTURE1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { TEXTURE2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { TEXTURE3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { TEXTURE4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { TEXTURE5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { TEXTURE6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { TEXTURE7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { TEXTURE8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { TEXTURE9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { INT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { INT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { INT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { HIGH_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { LINE_LOOP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { TRIANGLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { CULL_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { BLUE_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { DONT_CARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { LUMINANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { INCR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { DECR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { TEXTURE10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { TEXTURE11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { TEXTURE12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { TEXTURE13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { TEXTURE14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { TEXTURE15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { TEXTURE16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { TEXTURE17=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { TEXTURE18=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { TEXTURE19=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { TEXTURE20=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { TEXTURE21=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { TEXTURE22=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { TEXTURE23=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { TEXTURE24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { TEXTURE25=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { TEXTURE26=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { TEXTURE27=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { TEXTURE28=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { TEXTURE29=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { TEXTURE30=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { TEXTURE31=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { BOOL_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { BOOL_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { BOOL_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { LOW_FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { LINE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { DEPTH_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { LINE_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { FRONT_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { DEPTH_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { GREEN_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { ALPHA_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { DEPTH_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { TEXTURE_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { FLOAT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { FLOAT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { FLOAT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { FLOAT_MAT2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { FLOAT_MAT3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { FLOAT_MAT4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { HIGH_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { MEDIUM_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { BLEND_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { STREAM_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { STATIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { DEPTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { STENCIL_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { SCISSOR_BOX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { SHADER_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { LINK_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { TRIANGLE_FAN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { DYNAMIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { BUFFER_USAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { STENCIL_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { SCISSOR_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { STENCIL_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { STENCIL_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { STENCIL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POINT_SPRITE") ) { POINT_SPRITE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { MEDIUM_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { RENDERBUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { FUNC_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { BLEND_DST_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { BLEND_SRC_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { SUBPIXEL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { UNSIGNED_BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { VERTEX_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { DELETE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { CLAMP_TO_EDGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { STENCIL_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { DEPTH_STENCIL=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { TRIANGLE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { BLEND_EQUATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { FRONT_AND_BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { CULL_FACE_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { PACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { SAMPLE_BUFFERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { UNSIGNED_SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { TEXTURE_WRAP_S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { TEXTURE_WRAP_T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { ACTIVE_TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { COMPILE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { STENCIL_INDEX8=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { BLEND_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { BLEND_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { SAMPLE_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { DEPTH_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { COLOR_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { DEPTH_COMPONENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { LUMINANCE_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { FRAGMENT_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { VALIDATE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { ACTIVE_UNIFORMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { CURRENT_PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { MIRRORED_REPEAT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { DEPTH_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { COLOR_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { STENCIL_BACK_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { UNPACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { MAX_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { ATTACHED_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { TEXTURE_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { DEPTH_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { DEPTH_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { STENCIL_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { STENCIL_BACK_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { STENCIL_BACK_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { COLOR_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { MAX_VIEWPORT_DIMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { ACTIVE_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { DEPTH_COMPONENT16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { COLOR_ATTACHMENT0=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { STENCIL_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { SRC_ALPHA_SATURATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { BLEND_EQUATION_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { STENCIL_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { TEXTURE_BINDING_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { MAX_VERTEX_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { TEXTURE_MAG_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { TEXTURE_MIN_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { RENDERBUFFER_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { CONTEXT_LOST_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { ONE_MINUS_SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { ONE_MINUS_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { ONE_MINUS_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { ONE_MINUS_DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { POLYGON_OFFSET_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { STENCIL_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { MAX_VARYING_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { RENDERBUFFER_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { UNPACK_FLIP_Y_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { BLEND_EQUATION_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { ELEMENT_ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { POLYGON_OFFSET_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { GENERATE_MIPMAP_HINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { UNSIGNED_SHORT_5_6_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { LINEAR_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { FRAMEBUFFER_COMPLETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { RENDERBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { FUNC_REVERSE_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { CURRENT_VERTEX_ATTRIB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { POLYGON_OFFSET_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { SAMPLE_COVERAGE_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { LINEAR_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { NEAREST_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { RENDERBUFFER_RED_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { MAX_RENDERBUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { BROWSER_DEFAULT_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { STENCIL_BACK_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { SAMPLE_COVERAGE_INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { UNSIGNED_SHORT_4_4_4_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { UNSIGNED_SHORT_5_5_5_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { NEAREST_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { RENDERBUFFER_BLUE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { STENCIL_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { STENCIL_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { STENCIL_BACK_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { MAX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { RENDERBUFFER_GREEN_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { RENDERBUFFER_ALPHA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { RENDERBUFFER_DEPTH_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { FRAMEBUFFER_UNSUPPORTED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { ONE_MINUS_CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { ONE_MINUS_CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { SAMPLE_ALPHA_TO_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { ALIASED_POINT_SIZE_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { ALIASED_LINE_WIDTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { SHADING_LANGUAGE_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { TEXTURE_BINDING_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { VERTEX_ATTRIB_ARRAY_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { VERTEX_ATTRIB_ARRAY_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { DEPTH_STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { MAX_CUBE_MAP_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_PROGRAM_POINT_SIZE") ) { VERTEX_PROGRAM_POINT_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { RENDERBUFFER_STENCIL_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { MAX_VERTEX_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { VERTEX_ATTRIB_ARRAY_STRIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { TEXTURE_CUBE_MAP_POSITIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { TEXTURE_CUBE_MAP_NEGATIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { TEXTURE_CUBE_MAP_POSITIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { TEXTURE_CUBE_MAP_NEGATIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { TEXTURE_CUBE_MAP_POSITIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { TEXTURE_CUBE_MAP_NEGATIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { VERTEX_ATTRIB_ARRAY_ENABLED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { VERTEX_ATTRIB_ARRAY_POINTER=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { ELEMENT_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { STENCIL_BACK_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { STENCIL_BACK_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { MAX_FRAGMENT_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { RENDERBUFFER_INTERNAL_FORMAT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { INVALID_FRAMEBUFFER_OPERATION=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { MAX_VERTEX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { VERTEX_ATTRIB_ARRAY_NORMALIZED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { UNPACK_PREMULTIPLY_ALPHA_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { MAX_COMBINED_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { FRAMEBUFFER_INCOMPLETE_DIMENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { UNPACK_COLORSPACE_CONVERSION_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("DEPTH_BUFFER_BIT"));
	outFields->push(HX_CSTRING("STENCIL_BUFFER_BIT"));
	outFields->push(HX_CSTRING("COLOR_BUFFER_BIT"));
	outFields->push(HX_CSTRING("POINTS"));
	outFields->push(HX_CSTRING("LINES"));
	outFields->push(HX_CSTRING("LINE_LOOP"));
	outFields->push(HX_CSTRING("LINE_STRIP"));
	outFields->push(HX_CSTRING("TRIANGLES"));
	outFields->push(HX_CSTRING("TRIANGLE_STRIP"));
	outFields->push(HX_CSTRING("TRIANGLE_FAN"));
	outFields->push(HX_CSTRING("ZERO"));
	outFields->push(HX_CSTRING("ONE"));
	outFields->push(HX_CSTRING("SRC_COLOR"));
	outFields->push(HX_CSTRING("ONE_MINUS_SRC_COLOR"));
	outFields->push(HX_CSTRING("SRC_ALPHA"));
	outFields->push(HX_CSTRING("ONE_MINUS_SRC_ALPHA"));
	outFields->push(HX_CSTRING("DST_ALPHA"));
	outFields->push(HX_CSTRING("ONE_MINUS_DST_ALPHA"));
	outFields->push(HX_CSTRING("DST_COLOR"));
	outFields->push(HX_CSTRING("ONE_MINUS_DST_COLOR"));
	outFields->push(HX_CSTRING("SRC_ALPHA_SATURATE"));
	outFields->push(HX_CSTRING("FUNC_ADD"));
	outFields->push(HX_CSTRING("BLEND_EQUATION"));
	outFields->push(HX_CSTRING("BLEND_EQUATION_RGB"));
	outFields->push(HX_CSTRING("BLEND_EQUATION_ALPHA"));
	outFields->push(HX_CSTRING("FUNC_SUBTRACT"));
	outFields->push(HX_CSTRING("FUNC_REVERSE_SUBTRACT"));
	outFields->push(HX_CSTRING("BLEND_DST_RGB"));
	outFields->push(HX_CSTRING("BLEND_SRC_RGB"));
	outFields->push(HX_CSTRING("BLEND_DST_ALPHA"));
	outFields->push(HX_CSTRING("BLEND_SRC_ALPHA"));
	outFields->push(HX_CSTRING("CONSTANT_COLOR"));
	outFields->push(HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"));
	outFields->push(HX_CSTRING("CONSTANT_ALPHA"));
	outFields->push(HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"));
	outFields->push(HX_CSTRING("BLEND_COLOR"));
	outFields->push(HX_CSTRING("ARRAY_BUFFER"));
	outFields->push(HX_CSTRING("ELEMENT_ARRAY_BUFFER"));
	outFields->push(HX_CSTRING("ARRAY_BUFFER_BINDING"));
	outFields->push(HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"));
	outFields->push(HX_CSTRING("STREAM_DRAW"));
	outFields->push(HX_CSTRING("STATIC_DRAW"));
	outFields->push(HX_CSTRING("DYNAMIC_DRAW"));
	outFields->push(HX_CSTRING("BUFFER_SIZE"));
	outFields->push(HX_CSTRING("BUFFER_USAGE"));
	outFields->push(HX_CSTRING("CURRENT_VERTEX_ATTRIB"));
	outFields->push(HX_CSTRING("FRONT"));
	outFields->push(HX_CSTRING("BACK"));
	outFields->push(HX_CSTRING("FRONT_AND_BACK"));
	outFields->push(HX_CSTRING("CULL_FACE"));
	outFields->push(HX_CSTRING("BLEND"));
	outFields->push(HX_CSTRING("DITHER"));
	outFields->push(HX_CSTRING("STENCIL_TEST"));
	outFields->push(HX_CSTRING("DEPTH_TEST"));
	outFields->push(HX_CSTRING("SCISSOR_TEST"));
	outFields->push(HX_CSTRING("POLYGON_OFFSET_FILL"));
	outFields->push(HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"));
	outFields->push(HX_CSTRING("SAMPLE_COVERAGE"));
	outFields->push(HX_CSTRING("NO_ERROR"));
	outFields->push(HX_CSTRING("INVALID_ENUM"));
	outFields->push(HX_CSTRING("INVALID_VALUE"));
	outFields->push(HX_CSTRING("INVALID_OPERATION"));
	outFields->push(HX_CSTRING("OUT_OF_MEMORY"));
	outFields->push(HX_CSTRING("CW"));
	outFields->push(HX_CSTRING("CCW"));
	outFields->push(HX_CSTRING("LINE_WIDTH"));
	outFields->push(HX_CSTRING("ALIASED_POINT_SIZE_RANGE"));
	outFields->push(HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"));
	outFields->push(HX_CSTRING("CULL_FACE_MODE"));
	outFields->push(HX_CSTRING("FRONT_FACE"));
	outFields->push(HX_CSTRING("DEPTH_RANGE"));
	outFields->push(HX_CSTRING("DEPTH_WRITEMASK"));
	outFields->push(HX_CSTRING("DEPTH_CLEAR_VALUE"));
	outFields->push(HX_CSTRING("DEPTH_FUNC"));
	outFields->push(HX_CSTRING("STENCIL_CLEAR_VALUE"));
	outFields->push(HX_CSTRING("STENCIL_FUNC"));
	outFields->push(HX_CSTRING("STENCIL_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_PASS_DEPTH_PASS"));
	outFields->push(HX_CSTRING("STENCIL_REF"));
	outFields->push(HX_CSTRING("STENCIL_VALUE_MASK"));
	outFields->push(HX_CSTRING("STENCIL_WRITEMASK"));
	outFields->push(HX_CSTRING("STENCIL_BACK_FUNC"));
	outFields->push(HX_CSTRING("STENCIL_BACK_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"));
	outFields->push(HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"));
	outFields->push(HX_CSTRING("STENCIL_BACK_REF"));
	outFields->push(HX_CSTRING("STENCIL_BACK_VALUE_MASK"));
	outFields->push(HX_CSTRING("STENCIL_BACK_WRITEMASK"));
	outFields->push(HX_CSTRING("VIEWPORT"));
	outFields->push(HX_CSTRING("SCISSOR_BOX"));
	outFields->push(HX_CSTRING("COLOR_CLEAR_VALUE"));
	outFields->push(HX_CSTRING("COLOR_WRITEMASK"));
	outFields->push(HX_CSTRING("UNPACK_ALIGNMENT"));
	outFields->push(HX_CSTRING("PACK_ALIGNMENT"));
	outFields->push(HX_CSTRING("MAX_TEXTURE_SIZE"));
	outFields->push(HX_CSTRING("MAX_VIEWPORT_DIMS"));
	outFields->push(HX_CSTRING("SUBPIXEL_BITS"));
	outFields->push(HX_CSTRING("RED_BITS"));
	outFields->push(HX_CSTRING("GREEN_BITS"));
	outFields->push(HX_CSTRING("BLUE_BITS"));
	outFields->push(HX_CSTRING("ALPHA_BITS"));
	outFields->push(HX_CSTRING("DEPTH_BITS"));
	outFields->push(HX_CSTRING("STENCIL_BITS"));
	outFields->push(HX_CSTRING("POLYGON_OFFSET_UNITS"));
	outFields->push(HX_CSTRING("POLYGON_OFFSET_FACTOR"));
	outFields->push(HX_CSTRING("TEXTURE_BINDING_2D"));
	outFields->push(HX_CSTRING("SAMPLE_BUFFERS"));
	outFields->push(HX_CSTRING("SAMPLES"));
	outFields->push(HX_CSTRING("SAMPLE_COVERAGE_VALUE"));
	outFields->push(HX_CSTRING("SAMPLE_COVERAGE_INVERT"));
	outFields->push(HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"));
	outFields->push(HX_CSTRING("DONT_CARE"));
	outFields->push(HX_CSTRING("FASTEST"));
	outFields->push(HX_CSTRING("NICEST"));
	outFields->push(HX_CSTRING("GENERATE_MIPMAP_HINT"));
	outFields->push(HX_CSTRING("BYTE"));
	outFields->push(HX_CSTRING("UNSIGNED_BYTE"));
	outFields->push(HX_CSTRING("SHORT"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT"));
	outFields->push(HX_CSTRING("INT"));
	outFields->push(HX_CSTRING("UNSIGNED_INT"));
	outFields->push(HX_CSTRING("FLOAT"));
	outFields->push(HX_CSTRING("DEPTH_COMPONENT"));
	outFields->push(HX_CSTRING("ALPHA"));
	outFields->push(HX_CSTRING("RGB"));
	outFields->push(HX_CSTRING("RGBA"));
	outFields->push(HX_CSTRING("LUMINANCE"));
	outFields->push(HX_CSTRING("LUMINANCE_ALPHA"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"));
	outFields->push(HX_CSTRING("UNSIGNED_SHORT_5_6_5"));
	outFields->push(HX_CSTRING("FRAGMENT_SHADER"));
	outFields->push(HX_CSTRING("VERTEX_SHADER"));
	outFields->push(HX_CSTRING("MAX_VERTEX_ATTRIBS"));
	outFields->push(HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"));
	outFields->push(HX_CSTRING("MAX_VARYING_VECTORS"));
	outFields->push(HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"));
	outFields->push(HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"));
	outFields->push(HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"));
	outFields->push(HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"));
	outFields->push(HX_CSTRING("SHADER_TYPE"));
	outFields->push(HX_CSTRING("DELETE_STATUS"));
	outFields->push(HX_CSTRING("LINK_STATUS"));
	outFields->push(HX_CSTRING("VALIDATE_STATUS"));
	outFields->push(HX_CSTRING("ATTACHED_SHADERS"));
	outFields->push(HX_CSTRING("ACTIVE_UNIFORMS"));
	outFields->push(HX_CSTRING("ACTIVE_ATTRIBUTES"));
	outFields->push(HX_CSTRING("SHADING_LANGUAGE_VERSION"));
	outFields->push(HX_CSTRING("CURRENT_PROGRAM"));
	outFields->push(HX_CSTRING("NEVER"));
	outFields->push(HX_CSTRING("LESS"));
	outFields->push(HX_CSTRING("EQUAL"));
	outFields->push(HX_CSTRING("LEQUAL"));
	outFields->push(HX_CSTRING("GREATER"));
	outFields->push(HX_CSTRING("NOTEQUAL"));
	outFields->push(HX_CSTRING("GEQUAL"));
	outFields->push(HX_CSTRING("ALWAYS"));
	outFields->push(HX_CSTRING("KEEP"));
	outFields->push(HX_CSTRING("REPLACE"));
	outFields->push(HX_CSTRING("INCR"));
	outFields->push(HX_CSTRING("DECR"));
	outFields->push(HX_CSTRING("INVERT"));
	outFields->push(HX_CSTRING("INCR_WRAP"));
	outFields->push(HX_CSTRING("DECR_WRAP"));
	outFields->push(HX_CSTRING("VENDOR"));
	outFields->push(HX_CSTRING("RENDERER"));
	outFields->push(HX_CSTRING("VERSION"));
	outFields->push(HX_CSTRING("NEAREST"));
	outFields->push(HX_CSTRING("LINEAR"));
	outFields->push(HX_CSTRING("NEAREST_MIPMAP_NEAREST"));
	outFields->push(HX_CSTRING("LINEAR_MIPMAP_NEAREST"));
	outFields->push(HX_CSTRING("NEAREST_MIPMAP_LINEAR"));
	outFields->push(HX_CSTRING("LINEAR_MIPMAP_LINEAR"));
	outFields->push(HX_CSTRING("TEXTURE_MAG_FILTER"));
	outFields->push(HX_CSTRING("TEXTURE_MIN_FILTER"));
	outFields->push(HX_CSTRING("TEXTURE_WRAP_S"));
	outFields->push(HX_CSTRING("TEXTURE_WRAP_T"));
	outFields->push(HX_CSTRING("TEXTURE_2D"));
	outFields->push(HX_CSTRING("TEXTURE"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP"));
	outFields->push(HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"));
	outFields->push(HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"));
	outFields->push(HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"));
	outFields->push(HX_CSTRING("TEXTURE0"));
	outFields->push(HX_CSTRING("TEXTURE1"));
	outFields->push(HX_CSTRING("TEXTURE2"));
	outFields->push(HX_CSTRING("TEXTURE3"));
	outFields->push(HX_CSTRING("TEXTURE4"));
	outFields->push(HX_CSTRING("TEXTURE5"));
	outFields->push(HX_CSTRING("TEXTURE6"));
	outFields->push(HX_CSTRING("TEXTURE7"));
	outFields->push(HX_CSTRING("TEXTURE8"));
	outFields->push(HX_CSTRING("TEXTURE9"));
	outFields->push(HX_CSTRING("TEXTURE10"));
	outFields->push(HX_CSTRING("TEXTURE11"));
	outFields->push(HX_CSTRING("TEXTURE12"));
	outFields->push(HX_CSTRING("TEXTURE13"));
	outFields->push(HX_CSTRING("TEXTURE14"));
	outFields->push(HX_CSTRING("TEXTURE15"));
	outFields->push(HX_CSTRING("TEXTURE16"));
	outFields->push(HX_CSTRING("TEXTURE17"));
	outFields->push(HX_CSTRING("TEXTURE18"));
	outFields->push(HX_CSTRING("TEXTURE19"));
	outFields->push(HX_CSTRING("TEXTURE20"));
	outFields->push(HX_CSTRING("TEXTURE21"));
	outFields->push(HX_CSTRING("TEXTURE22"));
	outFields->push(HX_CSTRING("TEXTURE23"));
	outFields->push(HX_CSTRING("TEXTURE24"));
	outFields->push(HX_CSTRING("TEXTURE25"));
	outFields->push(HX_CSTRING("TEXTURE26"));
	outFields->push(HX_CSTRING("TEXTURE27"));
	outFields->push(HX_CSTRING("TEXTURE28"));
	outFields->push(HX_CSTRING("TEXTURE29"));
	outFields->push(HX_CSTRING("TEXTURE30"));
	outFields->push(HX_CSTRING("TEXTURE31"));
	outFields->push(HX_CSTRING("ACTIVE_TEXTURE"));
	outFields->push(HX_CSTRING("REPEAT"));
	outFields->push(HX_CSTRING("CLAMP_TO_EDGE"));
	outFields->push(HX_CSTRING("MIRRORED_REPEAT"));
	outFields->push(HX_CSTRING("FLOAT_VEC2"));
	outFields->push(HX_CSTRING("FLOAT_VEC3"));
	outFields->push(HX_CSTRING("FLOAT_VEC4"));
	outFields->push(HX_CSTRING("INT_VEC2"));
	outFields->push(HX_CSTRING("INT_VEC3"));
	outFields->push(HX_CSTRING("INT_VEC4"));
	outFields->push(HX_CSTRING("BOOL"));
	outFields->push(HX_CSTRING("BOOL_VEC2"));
	outFields->push(HX_CSTRING("BOOL_VEC3"));
	outFields->push(HX_CSTRING("BOOL_VEC4"));
	outFields->push(HX_CSTRING("FLOAT_MAT2"));
	outFields->push(HX_CSTRING("FLOAT_MAT3"));
	outFields->push(HX_CSTRING("FLOAT_MAT4"));
	outFields->push(HX_CSTRING("SAMPLER_2D"));
	outFields->push(HX_CSTRING("SAMPLER_CUBE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"));
	outFields->push(HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"));
	outFields->push(HX_CSTRING("VERTEX_PROGRAM_POINT_SIZE"));
	outFields->push(HX_CSTRING("POINT_SPRITE"));
	outFields->push(HX_CSTRING("COMPILE_STATUS"));
	outFields->push(HX_CSTRING("LOW_FLOAT"));
	outFields->push(HX_CSTRING("MEDIUM_FLOAT"));
	outFields->push(HX_CSTRING("HIGH_FLOAT"));
	outFields->push(HX_CSTRING("LOW_INT"));
	outFields->push(HX_CSTRING("MEDIUM_INT"));
	outFields->push(HX_CSTRING("HIGH_INT"));
	outFields->push(HX_CSTRING("FRAMEBUFFER"));
	outFields->push(HX_CSTRING("RENDERBUFFER"));
	outFields->push(HX_CSTRING("RGBA4"));
	outFields->push(HX_CSTRING("RGB5_A1"));
	outFields->push(HX_CSTRING("RGB565"));
	outFields->push(HX_CSTRING("DEPTH_COMPONENT16"));
	outFields->push(HX_CSTRING("STENCIL_INDEX"));
	outFields->push(HX_CSTRING("STENCIL_INDEX8"));
	outFields->push(HX_CSTRING("DEPTH_STENCIL"));
	outFields->push(HX_CSTRING("RENDERBUFFER_WIDTH"));
	outFields->push(HX_CSTRING("RENDERBUFFER_HEIGHT"));
	outFields->push(HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"));
	outFields->push(HX_CSTRING("RENDERBUFFER_RED_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_GREEN_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_BLUE_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"));
	outFields->push(HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"));
	outFields->push(HX_CSTRING("COLOR_ATTACHMENT0"));
	outFields->push(HX_CSTRING("DEPTH_ATTACHMENT"));
	outFields->push(HX_CSTRING("STENCIL_ATTACHMENT"));
	outFields->push(HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"));
	outFields->push(HX_CSTRING("NONE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_COMPLETE"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"));
	outFields->push(HX_CSTRING("FRAMEBUFFER_BINDING"));
	outFields->push(HX_CSTRING("RENDERBUFFER_BINDING"));
	outFields->push(HX_CSTRING("MAX_RENDERBUFFER_SIZE"));
	outFields->push(HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"));
	outFields->push(HX_CSTRING("UNPACK_FLIP_Y_WEBGL"));
	outFields->push(HX_CSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL"));
	outFields->push(HX_CSTRING("CONTEXT_LOST_WEBGL"));
	outFields->push(HX_CSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL"));
	outFields->push(HX_CSTRING("BROWSER_DEFAULT_WEBGL"));
	outFields->push(HX_CSTRING("version"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_BUFFER_BIT),HX_CSTRING("DEPTH_BUFFER_BIT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BUFFER_BIT),HX_CSTRING("STENCIL_BUFFER_BIT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_BUFFER_BIT),HX_CSTRING("COLOR_BUFFER_BIT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POINTS),HX_CSTRING("POINTS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINES),HX_CSTRING("LINES")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINE_LOOP),HX_CSTRING("LINE_LOOP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINE_STRIP),HX_CSTRING("LINE_STRIP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TRIANGLES),HX_CSTRING("TRIANGLES")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TRIANGLE_STRIP),HX_CSTRING("TRIANGLE_STRIP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TRIANGLE_FAN),HX_CSTRING("TRIANGLE_FAN")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ZERO),HX_CSTRING("ZERO")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE),HX_CSTRING("ONE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SRC_COLOR),HX_CSTRING("SRC_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_SRC_COLOR),HX_CSTRING("ONE_MINUS_SRC_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SRC_ALPHA),HX_CSTRING("SRC_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_SRC_ALPHA),HX_CSTRING("ONE_MINUS_SRC_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DST_ALPHA),HX_CSTRING("DST_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_DST_ALPHA),HX_CSTRING("ONE_MINUS_DST_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DST_COLOR),HX_CSTRING("DST_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_DST_COLOR),HX_CSTRING("ONE_MINUS_DST_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SRC_ALPHA_SATURATE),HX_CSTRING("SRC_ALPHA_SATURATE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FUNC_ADD),HX_CSTRING("FUNC_ADD")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_EQUATION),HX_CSTRING("BLEND_EQUATION")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_EQUATION_RGB),HX_CSTRING("BLEND_EQUATION_RGB")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_EQUATION_ALPHA),HX_CSTRING("BLEND_EQUATION_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FUNC_SUBTRACT),HX_CSTRING("FUNC_SUBTRACT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FUNC_REVERSE_SUBTRACT),HX_CSTRING("FUNC_REVERSE_SUBTRACT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_DST_RGB),HX_CSTRING("BLEND_DST_RGB")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_SRC_RGB),HX_CSTRING("BLEND_SRC_RGB")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_DST_ALPHA),HX_CSTRING("BLEND_DST_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_SRC_ALPHA),HX_CSTRING("BLEND_SRC_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CONSTANT_COLOR),HX_CSTRING("CONSTANT_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_CONSTANT_COLOR),HX_CSTRING("ONE_MINUS_CONSTANT_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CONSTANT_ALPHA),HX_CSTRING("CONSTANT_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_CONSTANT_ALPHA),HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_COLOR),HX_CSTRING("BLEND_COLOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ARRAY_BUFFER),HX_CSTRING("ARRAY_BUFFER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ELEMENT_ARRAY_BUFFER),HX_CSTRING("ELEMENT_ARRAY_BUFFER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ARRAY_BUFFER_BINDING),HX_CSTRING("ARRAY_BUFFER_BINDING")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ELEMENT_ARRAY_BUFFER_BINDING),HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STREAM_DRAW),HX_CSTRING("STREAM_DRAW")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STATIC_DRAW),HX_CSTRING("STATIC_DRAW")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DYNAMIC_DRAW),HX_CSTRING("DYNAMIC_DRAW")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BUFFER_SIZE),HX_CSTRING("BUFFER_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BUFFER_USAGE),HX_CSTRING("BUFFER_USAGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CURRENT_VERTEX_ATTRIB),HX_CSTRING("CURRENT_VERTEX_ATTRIB")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRONT),HX_CSTRING("FRONT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BACK),HX_CSTRING("BACK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRONT_AND_BACK),HX_CSTRING("FRONT_AND_BACK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CULL_FACE),HX_CSTRING("CULL_FACE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND),HX_CSTRING("BLEND")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DITHER),HX_CSTRING("DITHER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_TEST),HX_CSTRING("STENCIL_TEST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_TEST),HX_CSTRING("DEPTH_TEST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SCISSOR_TEST),HX_CSTRING("SCISSOR_TEST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POLYGON_OFFSET_FILL),HX_CSTRING("POLYGON_OFFSET_FILL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_ALPHA_TO_COVERAGE),HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_COVERAGE),HX_CSTRING("SAMPLE_COVERAGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NO_ERROR),HX_CSTRING("NO_ERROR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_ENUM),HX_CSTRING("INVALID_ENUM")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_VALUE),HX_CSTRING("INVALID_VALUE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_OPERATION),HX_CSTRING("INVALID_OPERATION")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,OUT_OF_MEMORY),HX_CSTRING("OUT_OF_MEMORY")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CW),HX_CSTRING("CW")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CCW),HX_CSTRING("CCW")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINE_WIDTH),HX_CSTRING("LINE_WIDTH")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALIASED_POINT_SIZE_RANGE),HX_CSTRING("ALIASED_POINT_SIZE_RANGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALIASED_LINE_WIDTH_RANGE),HX_CSTRING("ALIASED_LINE_WIDTH_RANGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CULL_FACE_MODE),HX_CSTRING("CULL_FACE_MODE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRONT_FACE),HX_CSTRING("FRONT_FACE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_RANGE),HX_CSTRING("DEPTH_RANGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_WRITEMASK),HX_CSTRING("DEPTH_WRITEMASK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_CLEAR_VALUE),HX_CSTRING("DEPTH_CLEAR_VALUE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_FUNC),HX_CSTRING("DEPTH_FUNC")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_CLEAR_VALUE),HX_CSTRING("STENCIL_CLEAR_VALUE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_FUNC),HX_CSTRING("STENCIL_FUNC")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_FAIL),HX_CSTRING("STENCIL_FAIL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_PASS_DEPTH_FAIL),HX_CSTRING("STENCIL_PASS_DEPTH_FAIL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_PASS_DEPTH_PASS),HX_CSTRING("STENCIL_PASS_DEPTH_PASS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_REF),HX_CSTRING("STENCIL_REF")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_VALUE_MASK),HX_CSTRING("STENCIL_VALUE_MASK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_WRITEMASK),HX_CSTRING("STENCIL_WRITEMASK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_FUNC),HX_CSTRING("STENCIL_BACK_FUNC")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_FAIL),HX_CSTRING("STENCIL_BACK_FAIL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_PASS_DEPTH_FAIL),HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_PASS_DEPTH_PASS),HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_REF),HX_CSTRING("STENCIL_BACK_REF")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_VALUE_MASK),HX_CSTRING("STENCIL_BACK_VALUE_MASK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_WRITEMASK),HX_CSTRING("STENCIL_BACK_WRITEMASK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VIEWPORT),HX_CSTRING("VIEWPORT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SCISSOR_BOX),HX_CSTRING("SCISSOR_BOX")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_CLEAR_VALUE),HX_CSTRING("COLOR_CLEAR_VALUE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_WRITEMASK),HX_CSTRING("COLOR_WRITEMASK")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_ALIGNMENT),HX_CSTRING("UNPACK_ALIGNMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,PACK_ALIGNMENT),HX_CSTRING("PACK_ALIGNMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_TEXTURE_SIZE),HX_CSTRING("MAX_TEXTURE_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VIEWPORT_DIMS),HX_CSTRING("MAX_VIEWPORT_DIMS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SUBPIXEL_BITS),HX_CSTRING("SUBPIXEL_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RED_BITS),HX_CSTRING("RED_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GREEN_BITS),HX_CSTRING("GREEN_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLUE_BITS),HX_CSTRING("BLUE_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALPHA_BITS),HX_CSTRING("ALPHA_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_BITS),HX_CSTRING("DEPTH_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BITS),HX_CSTRING("STENCIL_BITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POLYGON_OFFSET_UNITS),HX_CSTRING("POLYGON_OFFSET_UNITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POLYGON_OFFSET_FACTOR),HX_CSTRING("POLYGON_OFFSET_FACTOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_BINDING_2D),HX_CSTRING("TEXTURE_BINDING_2D")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_BUFFERS),HX_CSTRING("SAMPLE_BUFFERS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLES),HX_CSTRING("SAMPLES")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_COVERAGE_VALUE),HX_CSTRING("SAMPLE_COVERAGE_VALUE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_COVERAGE_INVERT),HX_CSTRING("SAMPLE_COVERAGE_INVERT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COMPRESSED_TEXTURE_FORMATS),HX_CSTRING("COMPRESSED_TEXTURE_FORMATS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DONT_CARE),HX_CSTRING("DONT_CARE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FASTEST),HX_CSTRING("FASTEST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NICEST),HX_CSTRING("NICEST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GENERATE_MIPMAP_HINT),HX_CSTRING("GENERATE_MIPMAP_HINT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BYTE),HX_CSTRING("BYTE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_BYTE),HX_CSTRING("UNSIGNED_BYTE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SHORT),HX_CSTRING("SHORT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT),HX_CSTRING("UNSIGNED_SHORT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT),HX_CSTRING("INT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_INT),HX_CSTRING("UNSIGNED_INT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT),HX_CSTRING("FLOAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_COMPONENT),HX_CSTRING("DEPTH_COMPONENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALPHA),HX_CSTRING("ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGB),HX_CSTRING("RGB")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGBA),HX_CSTRING("RGBA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LUMINANCE),HX_CSTRING("LUMINANCE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LUMINANCE_ALPHA),HX_CSTRING("LUMINANCE_ALPHA")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT_4_4_4_4),HX_CSTRING("UNSIGNED_SHORT_4_4_4_4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT_5_5_5_1),HX_CSTRING("UNSIGNED_SHORT_5_5_5_1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT_5_6_5),HX_CSTRING("UNSIGNED_SHORT_5_6_5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAGMENT_SHADER),HX_CSTRING("FRAGMENT_SHADER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_SHADER),HX_CSTRING("VERTEX_SHADER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VERTEX_ATTRIBS),HX_CSTRING("MAX_VERTEX_ATTRIBS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VERTEX_UNIFORM_VECTORS),HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VARYING_VECTORS),HX_CSTRING("MAX_VARYING_VECTORS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_COMBINED_TEXTURE_IMAGE_UNITS),HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VERTEX_TEXTURE_IMAGE_UNITS),HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_TEXTURE_IMAGE_UNITS),HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_FRAGMENT_UNIFORM_VECTORS),HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SHADER_TYPE),HX_CSTRING("SHADER_TYPE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DELETE_STATUS),HX_CSTRING("DELETE_STATUS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINK_STATUS),HX_CSTRING("LINK_STATUS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VALIDATE_STATUS),HX_CSTRING("VALIDATE_STATUS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ATTACHED_SHADERS),HX_CSTRING("ATTACHED_SHADERS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ACTIVE_UNIFORMS),HX_CSTRING("ACTIVE_UNIFORMS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ACTIVE_ATTRIBUTES),HX_CSTRING("ACTIVE_ATTRIBUTES")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SHADING_LANGUAGE_VERSION),HX_CSTRING("SHADING_LANGUAGE_VERSION")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CURRENT_PROGRAM),HX_CSTRING("CURRENT_PROGRAM")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEVER),HX_CSTRING("NEVER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LESS),HX_CSTRING("LESS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,EQUAL),HX_CSTRING("EQUAL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LEQUAL),HX_CSTRING("LEQUAL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GREATER),HX_CSTRING("GREATER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NOTEQUAL),HX_CSTRING("NOTEQUAL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GEQUAL),HX_CSTRING("GEQUAL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALWAYS),HX_CSTRING("ALWAYS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,KEEP),HX_CSTRING("KEEP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,REPLACE),HX_CSTRING("REPLACE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INCR),HX_CSTRING("INCR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DECR),HX_CSTRING("DECR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVERT),HX_CSTRING("INVERT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INCR_WRAP),HX_CSTRING("INCR_WRAP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DECR_WRAP),HX_CSTRING("DECR_WRAP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VENDOR),HX_CSTRING("VENDOR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERER),HX_CSTRING("RENDERER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERSION),HX_CSTRING("VERSION")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEAREST),HX_CSTRING("NEAREST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINEAR),HX_CSTRING("LINEAR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEAREST_MIPMAP_NEAREST),HX_CSTRING("NEAREST_MIPMAP_NEAREST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINEAR_MIPMAP_NEAREST),HX_CSTRING("LINEAR_MIPMAP_NEAREST")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEAREST_MIPMAP_LINEAR),HX_CSTRING("NEAREST_MIPMAP_LINEAR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINEAR_MIPMAP_LINEAR),HX_CSTRING("LINEAR_MIPMAP_LINEAR")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_MAG_FILTER),HX_CSTRING("TEXTURE_MAG_FILTER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_MIN_FILTER),HX_CSTRING("TEXTURE_MIN_FILTER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_WRAP_S),HX_CSTRING("TEXTURE_WRAP_S")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_WRAP_T),HX_CSTRING("TEXTURE_WRAP_T")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_2D),HX_CSTRING("TEXTURE_2D")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE),HX_CSTRING("TEXTURE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP),HX_CSTRING("TEXTURE_CUBE_MAP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_BINDING_CUBE_MAP),HX_CSTRING("TEXTURE_BINDING_CUBE_MAP")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_X),HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_X),HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_Y),HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_Y),HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_Z),HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_Z),HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_CUBE_MAP_TEXTURE_SIZE),HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE0),HX_CSTRING("TEXTURE0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE1),HX_CSTRING("TEXTURE1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE2),HX_CSTRING("TEXTURE2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE3),HX_CSTRING("TEXTURE3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE4),HX_CSTRING("TEXTURE4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE5),HX_CSTRING("TEXTURE5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE6),HX_CSTRING("TEXTURE6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE7),HX_CSTRING("TEXTURE7")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE8),HX_CSTRING("TEXTURE8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE9),HX_CSTRING("TEXTURE9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE10),HX_CSTRING("TEXTURE10")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE11),HX_CSTRING("TEXTURE11")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE12),HX_CSTRING("TEXTURE12")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE13),HX_CSTRING("TEXTURE13")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE14),HX_CSTRING("TEXTURE14")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE15),HX_CSTRING("TEXTURE15")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE16),HX_CSTRING("TEXTURE16")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE17),HX_CSTRING("TEXTURE17")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE18),HX_CSTRING("TEXTURE18")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE19),HX_CSTRING("TEXTURE19")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE20),HX_CSTRING("TEXTURE20")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE21),HX_CSTRING("TEXTURE21")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE22),HX_CSTRING("TEXTURE22")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE23),HX_CSTRING("TEXTURE23")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE24),HX_CSTRING("TEXTURE24")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE25),HX_CSTRING("TEXTURE25")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE26),HX_CSTRING("TEXTURE26")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE27),HX_CSTRING("TEXTURE27")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE28),HX_CSTRING("TEXTURE28")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE29),HX_CSTRING("TEXTURE29")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE30),HX_CSTRING("TEXTURE30")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE31),HX_CSTRING("TEXTURE31")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ACTIVE_TEXTURE),HX_CSTRING("ACTIVE_TEXTURE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,REPEAT),HX_CSTRING("REPEAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CLAMP_TO_EDGE),HX_CSTRING("CLAMP_TO_EDGE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MIRRORED_REPEAT),HX_CSTRING("MIRRORED_REPEAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_VEC2),HX_CSTRING("FLOAT_VEC2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_VEC3),HX_CSTRING("FLOAT_VEC3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_VEC4),HX_CSTRING("FLOAT_VEC4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT_VEC2),HX_CSTRING("INT_VEC2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT_VEC3),HX_CSTRING("INT_VEC3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT_VEC4),HX_CSTRING("INT_VEC4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL),HX_CSTRING("BOOL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL_VEC2),HX_CSTRING("BOOL_VEC2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL_VEC3),HX_CSTRING("BOOL_VEC3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL_VEC4),HX_CSTRING("BOOL_VEC4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_MAT2),HX_CSTRING("FLOAT_MAT2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_MAT3),HX_CSTRING("FLOAT_MAT3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_MAT4),HX_CSTRING("FLOAT_MAT4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLER_2D),HX_CSTRING("SAMPLER_2D")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLER_CUBE),HX_CSTRING("SAMPLER_CUBE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_ENABLED),HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_SIZE),HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_STRIDE),HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_TYPE),HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_NORMALIZED),HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_POINTER),HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_BUFFER_BINDING),HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_PROGRAM_POINT_SIZE),HX_CSTRING("VERTEX_PROGRAM_POINT_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POINT_SPRITE),HX_CSTRING("POINT_SPRITE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COMPILE_STATUS),HX_CSTRING("COMPILE_STATUS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LOW_FLOAT),HX_CSTRING("LOW_FLOAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MEDIUM_FLOAT),HX_CSTRING("MEDIUM_FLOAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,HIGH_FLOAT),HX_CSTRING("HIGH_FLOAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LOW_INT),HX_CSTRING("LOW_INT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MEDIUM_INT),HX_CSTRING("MEDIUM_INT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,HIGH_INT),HX_CSTRING("HIGH_INT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER),HX_CSTRING("FRAMEBUFFER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER),HX_CSTRING("RENDERBUFFER")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGBA4),HX_CSTRING("RGBA4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGB5_A1),HX_CSTRING("RGB5_A1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGB565),HX_CSTRING("RGB565")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_COMPONENT16),HX_CSTRING("DEPTH_COMPONENT16")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_INDEX),HX_CSTRING("STENCIL_INDEX")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_INDEX8),HX_CSTRING("STENCIL_INDEX8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_STENCIL),HX_CSTRING("DEPTH_STENCIL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_WIDTH),HX_CSTRING("RENDERBUFFER_WIDTH")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_HEIGHT),HX_CSTRING("RENDERBUFFER_HEIGHT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_INTERNAL_FORMAT),HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_RED_SIZE),HX_CSTRING("RENDERBUFFER_RED_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_GREEN_SIZE),HX_CSTRING("RENDERBUFFER_GREEN_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_BLUE_SIZE),HX_CSTRING("RENDERBUFFER_BLUE_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_ALPHA_SIZE),HX_CSTRING("RENDERBUFFER_ALPHA_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_DEPTH_SIZE),HX_CSTRING("RENDERBUFFER_DEPTH_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_STENCIL_SIZE),HX_CSTRING("RENDERBUFFER_STENCIL_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE),HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_OBJECT_NAME),HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL),HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE),HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_ATTACHMENT0),HX_CSTRING("COLOR_ATTACHMENT0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_ATTACHMENT),HX_CSTRING("DEPTH_ATTACHMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_ATTACHMENT),HX_CSTRING("STENCIL_ATTACHMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_STENCIL_ATTACHMENT),HX_CSTRING("DEPTH_STENCIL_ATTACHMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NONE),HX_CSTRING("NONE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_COMPLETE),HX_CSTRING("FRAMEBUFFER_COMPLETE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_ATTACHMENT),HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT),HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_DIMENSIONS),HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_UNSUPPORTED),HX_CSTRING("FRAMEBUFFER_UNSUPPORTED")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_BINDING),HX_CSTRING("FRAMEBUFFER_BINDING")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_BINDING),HX_CSTRING("RENDERBUFFER_BINDING")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_RENDERBUFFER_SIZE),HX_CSTRING("MAX_RENDERBUFFER_SIZE")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_FRAMEBUFFER_OPERATION),HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_FLIP_Y_WEBGL),HX_CSTRING("UNPACK_FLIP_Y_WEBGL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_PREMULTIPLY_ALPHA_WEBGL),HX_CSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CONTEXT_LOST_WEBGL),HX_CSTRING("CONTEXT_LOST_WEBGL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_COLORSPACE_CONVERSION_WEBGL),HX_CSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BROWSER_DEFAULT_WEBGL),HX_CSTRING("BROWSER_DEFAULT_WEBGL")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,version),HX_CSTRING("version")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("DEPTH_BUFFER_BIT"),
	HX_CSTRING("STENCIL_BUFFER_BIT"),
	HX_CSTRING("COLOR_BUFFER_BIT"),
	HX_CSTRING("POINTS"),
	HX_CSTRING("LINES"),
	HX_CSTRING("LINE_LOOP"),
	HX_CSTRING("LINE_STRIP"),
	HX_CSTRING("TRIANGLES"),
	HX_CSTRING("TRIANGLE_STRIP"),
	HX_CSTRING("TRIANGLE_FAN"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("SRC_COLOR"),
	HX_CSTRING("ONE_MINUS_SRC_COLOR"),
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("DST_ALPHA"),
	HX_CSTRING("ONE_MINUS_DST_ALPHA"),
	HX_CSTRING("DST_COLOR"),
	HX_CSTRING("ONE_MINUS_DST_COLOR"),
	HX_CSTRING("SRC_ALPHA_SATURATE"),
	HX_CSTRING("FUNC_ADD"),
	HX_CSTRING("BLEND_EQUATION"),
	HX_CSTRING("BLEND_EQUATION_RGB"),
	HX_CSTRING("BLEND_EQUATION_ALPHA"),
	HX_CSTRING("FUNC_SUBTRACT"),
	HX_CSTRING("FUNC_REVERSE_SUBTRACT"),
	HX_CSTRING("BLEND_DST_RGB"),
	HX_CSTRING("BLEND_SRC_RGB"),
	HX_CSTRING("BLEND_DST_ALPHA"),
	HX_CSTRING("BLEND_SRC_ALPHA"),
	HX_CSTRING("CONSTANT_COLOR"),
	HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"),
	HX_CSTRING("CONSTANT_ALPHA"),
	HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"),
	HX_CSTRING("BLEND_COLOR"),
	HX_CSTRING("ARRAY_BUFFER"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER"),
	HX_CSTRING("ARRAY_BUFFER_BINDING"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("STREAM_DRAW"),
	HX_CSTRING("STATIC_DRAW"),
	HX_CSTRING("DYNAMIC_DRAW"),
	HX_CSTRING("BUFFER_SIZE"),
	HX_CSTRING("BUFFER_USAGE"),
	HX_CSTRING("CURRENT_VERTEX_ATTRIB"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("CULL_FACE"),
	HX_CSTRING("BLEND"),
	HX_CSTRING("DITHER"),
	HX_CSTRING("STENCIL_TEST"),
	HX_CSTRING("DEPTH_TEST"),
	HX_CSTRING("SCISSOR_TEST"),
	HX_CSTRING("POLYGON_OFFSET_FILL"),
	HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"),
	HX_CSTRING("SAMPLE_COVERAGE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("CW"),
	HX_CSTRING("CCW"),
	HX_CSTRING("LINE_WIDTH"),
	HX_CSTRING("ALIASED_POINT_SIZE_RANGE"),
	HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"),
	HX_CSTRING("CULL_FACE_MODE"),
	HX_CSTRING("FRONT_FACE"),
	HX_CSTRING("DEPTH_RANGE"),
	HX_CSTRING("DEPTH_WRITEMASK"),
	HX_CSTRING("DEPTH_CLEAR_VALUE"),
	HX_CSTRING("DEPTH_FUNC"),
	HX_CSTRING("STENCIL_CLEAR_VALUE"),
	HX_CSTRING("STENCIL_FUNC"),
	HX_CSTRING("STENCIL_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_REF"),
	HX_CSTRING("STENCIL_VALUE_MASK"),
	HX_CSTRING("STENCIL_WRITEMASK"),
	HX_CSTRING("STENCIL_BACK_FUNC"),
	HX_CSTRING("STENCIL_BACK_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_BACK_REF"),
	HX_CSTRING("STENCIL_BACK_VALUE_MASK"),
	HX_CSTRING("STENCIL_BACK_WRITEMASK"),
	HX_CSTRING("VIEWPORT"),
	HX_CSTRING("SCISSOR_BOX"),
	HX_CSTRING("COLOR_CLEAR_VALUE"),
	HX_CSTRING("COLOR_WRITEMASK"),
	HX_CSTRING("UNPACK_ALIGNMENT"),
	HX_CSTRING("PACK_ALIGNMENT"),
	HX_CSTRING("MAX_TEXTURE_SIZE"),
	HX_CSTRING("MAX_VIEWPORT_DIMS"),
	HX_CSTRING("SUBPIXEL_BITS"),
	HX_CSTRING("RED_BITS"),
	HX_CSTRING("GREEN_BITS"),
	HX_CSTRING("BLUE_BITS"),
	HX_CSTRING("ALPHA_BITS"),
	HX_CSTRING("DEPTH_BITS"),
	HX_CSTRING("STENCIL_BITS"),
	HX_CSTRING("POLYGON_OFFSET_UNITS"),
	HX_CSTRING("POLYGON_OFFSET_FACTOR"),
	HX_CSTRING("TEXTURE_BINDING_2D"),
	HX_CSTRING("SAMPLE_BUFFERS"),
	HX_CSTRING("SAMPLES"),
	HX_CSTRING("SAMPLE_COVERAGE_VALUE"),
	HX_CSTRING("SAMPLE_COVERAGE_INVERT"),
	HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"),
	HX_CSTRING("DONT_CARE"),
	HX_CSTRING("FASTEST"),
	HX_CSTRING("NICEST"),
	HX_CSTRING("GENERATE_MIPMAP_HINT"),
	HX_CSTRING("BYTE"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("SHORT"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("INT"),
	HX_CSTRING("UNSIGNED_INT"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("DEPTH_COMPONENT"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("RGB"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("LUMINANCE"),
	HX_CSTRING("LUMINANCE_ALPHA"),
	HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"),
	HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"),
	HX_CSTRING("UNSIGNED_SHORT_5_6_5"),
	HX_CSTRING("FRAGMENT_SHADER"),
	HX_CSTRING("VERTEX_SHADER"),
	HX_CSTRING("MAX_VERTEX_ATTRIBS"),
	HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"),
	HX_CSTRING("MAX_VARYING_VECTORS"),
	HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"),
	HX_CSTRING("SHADER_TYPE"),
	HX_CSTRING("DELETE_STATUS"),
	HX_CSTRING("LINK_STATUS"),
	HX_CSTRING("VALIDATE_STATUS"),
	HX_CSTRING("ATTACHED_SHADERS"),
	HX_CSTRING("ACTIVE_UNIFORMS"),
	HX_CSTRING("ACTIVE_ATTRIBUTES"),
	HX_CSTRING("SHADING_LANGUAGE_VERSION"),
	HX_CSTRING("CURRENT_PROGRAM"),
	HX_CSTRING("NEVER"),
	HX_CSTRING("LESS"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("LEQUAL"),
	HX_CSTRING("GREATER"),
	HX_CSTRING("NOTEQUAL"),
	HX_CSTRING("GEQUAL"),
	HX_CSTRING("ALWAYS"),
	HX_CSTRING("KEEP"),
	HX_CSTRING("REPLACE"),
	HX_CSTRING("INCR"),
	HX_CSTRING("DECR"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("INCR_WRAP"),
	HX_CSTRING("DECR_WRAP"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST_MIPMAP_NEAREST"),
	HX_CSTRING("LINEAR_MIPMAP_NEAREST"),
	HX_CSTRING("NEAREST_MIPMAP_LINEAR"),
	HX_CSTRING("LINEAR_MIPMAP_LINEAR"),
	HX_CSTRING("TEXTURE_MAG_FILTER"),
	HX_CSTRING("TEXTURE_MIN_FILTER"),
	HX_CSTRING("TEXTURE_WRAP_S"),
	HX_CSTRING("TEXTURE_WRAP_T"),
	HX_CSTRING("TEXTURE_2D"),
	HX_CSTRING("TEXTURE"),
	HX_CSTRING("TEXTURE_CUBE_MAP"),
	HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"),
	HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"),
	HX_CSTRING("TEXTURE0"),
	HX_CSTRING("TEXTURE1"),
	HX_CSTRING("TEXTURE2"),
	HX_CSTRING("TEXTURE3"),
	HX_CSTRING("TEXTURE4"),
	HX_CSTRING("TEXTURE5"),
	HX_CSTRING("TEXTURE6"),
	HX_CSTRING("TEXTURE7"),
	HX_CSTRING("TEXTURE8"),
	HX_CSTRING("TEXTURE9"),
	HX_CSTRING("TEXTURE10"),
	HX_CSTRING("TEXTURE11"),
	HX_CSTRING("TEXTURE12"),
	HX_CSTRING("TEXTURE13"),
	HX_CSTRING("TEXTURE14"),
	HX_CSTRING("TEXTURE15"),
	HX_CSTRING("TEXTURE16"),
	HX_CSTRING("TEXTURE17"),
	HX_CSTRING("TEXTURE18"),
	HX_CSTRING("TEXTURE19"),
	HX_CSTRING("TEXTURE20"),
	HX_CSTRING("TEXTURE21"),
	HX_CSTRING("TEXTURE22"),
	HX_CSTRING("TEXTURE23"),
	HX_CSTRING("TEXTURE24"),
	HX_CSTRING("TEXTURE25"),
	HX_CSTRING("TEXTURE26"),
	HX_CSTRING("TEXTURE27"),
	HX_CSTRING("TEXTURE28"),
	HX_CSTRING("TEXTURE29"),
	HX_CSTRING("TEXTURE30"),
	HX_CSTRING("TEXTURE31"),
	HX_CSTRING("ACTIVE_TEXTURE"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("CLAMP_TO_EDGE"),
	HX_CSTRING("MIRRORED_REPEAT"),
	HX_CSTRING("FLOAT_VEC2"),
	HX_CSTRING("FLOAT_VEC3"),
	HX_CSTRING("FLOAT_VEC4"),
	HX_CSTRING("INT_VEC2"),
	HX_CSTRING("INT_VEC3"),
	HX_CSTRING("INT_VEC4"),
	HX_CSTRING("BOOL"),
	HX_CSTRING("BOOL_VEC2"),
	HX_CSTRING("BOOL_VEC3"),
	HX_CSTRING("BOOL_VEC4"),
	HX_CSTRING("FLOAT_MAT2"),
	HX_CSTRING("FLOAT_MAT3"),
	HX_CSTRING("FLOAT_MAT4"),
	HX_CSTRING("SAMPLER_2D"),
	HX_CSTRING("SAMPLER_CUBE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("VERTEX_PROGRAM_POINT_SIZE"),
	HX_CSTRING("POINT_SPRITE"),
	HX_CSTRING("COMPILE_STATUS"),
	HX_CSTRING("LOW_FLOAT"),
	HX_CSTRING("MEDIUM_FLOAT"),
	HX_CSTRING("HIGH_FLOAT"),
	HX_CSTRING("LOW_INT"),
	HX_CSTRING("MEDIUM_INT"),
	HX_CSTRING("HIGH_INT"),
	HX_CSTRING("FRAMEBUFFER"),
	HX_CSTRING("RENDERBUFFER"),
	HX_CSTRING("RGBA4"),
	HX_CSTRING("RGB5_A1"),
	HX_CSTRING("RGB565"),
	HX_CSTRING("DEPTH_COMPONENT16"),
	HX_CSTRING("STENCIL_INDEX"),
	HX_CSTRING("STENCIL_INDEX8"),
	HX_CSTRING("DEPTH_STENCIL"),
	HX_CSTRING("RENDERBUFFER_WIDTH"),
	HX_CSTRING("RENDERBUFFER_HEIGHT"),
	HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"),
	HX_CSTRING("RENDERBUFFER_RED_SIZE"),
	HX_CSTRING("RENDERBUFFER_GREEN_SIZE"),
	HX_CSTRING("RENDERBUFFER_BLUE_SIZE"),
	HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"),
	HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"),
	HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"),
	HX_CSTRING("COLOR_ATTACHMENT0"),
	HX_CSTRING("DEPTH_ATTACHMENT"),
	HX_CSTRING("STENCIL_ATTACHMENT"),
	HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("FRAMEBUFFER_COMPLETE"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"),
	HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"),
	HX_CSTRING("FRAMEBUFFER_BINDING"),
	HX_CSTRING("RENDERBUFFER_BINDING"),
	HX_CSTRING("MAX_RENDERBUFFER_SIZE"),
	HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"),
	HX_CSTRING("UNPACK_FLIP_Y_WEBGL"),
	HX_CSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL"),
	HX_CSTRING("CONTEXT_LOST_WEBGL"),
	HX_CSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL"),
	HX_CSTRING("BROWSER_DEFAULT_WEBGL"),
	HX_CSTRING("version"),
	HX_CSTRING("activeTexture"),
	HX_CSTRING("attachShader"),
	HX_CSTRING("bindAttribLocation"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("bindRenderbuffer"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("blendColor"),
	HX_CSTRING("blendEquation"),
	HX_CSTRING("blendEquationSeparate"),
	HX_CSTRING("blendFunc"),
	HX_CSTRING("blendFuncSeparate"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferSubData"),
	HX_CSTRING("checkFramebufferStatus"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("clearStencil"),
	HX_CSTRING("colorMask"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("compressedTexImage2D"),
	HX_CSTRING("compressedTexSubImage2D"),
	HX_CSTRING("copyTexImage2D"),
	HX_CSTRING("copyTexSubImage2D"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("createFramebuffer"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("createShader"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("cullFace"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("deleteFramebuffer"),
	HX_CSTRING("deleteProgram"),
	HX_CSTRING("deleteRenderbuffer"),
	HX_CSTRING("deleteShader"),
	HX_CSTRING("deleteTexture"),
	HX_CSTRING("depthFunc"),
	HX_CSTRING("depthMask"),
	HX_CSTRING("depthRange"),
	HX_CSTRING("detachShader"),
	HX_CSTRING("disable"),
	HX_CSTRING("disableVertexAttribArray"),
	HX_CSTRING("drawArrays"),
	HX_CSTRING("drawElements"),
	HX_CSTRING("enable"),
	HX_CSTRING("enableVertexAttribArray"),
	HX_CSTRING("finish"),
	HX_CSTRING("flush"),
	HX_CSTRING("framebufferRenderbuffer"),
	HX_CSTRING("framebufferTexture2D"),
	HX_CSTRING("frontFace"),
	HX_CSTRING("generateMipmap"),
	HX_CSTRING("getActiveAttrib"),
	HX_CSTRING("getActiveUniform"),
	HX_CSTRING("getAttachedShaders"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("getBufferParameter"),
	HX_CSTRING("getContextAttributes"),
	HX_CSTRING("getError"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("getFramebufferAttachmentParameter"),
	HX_CSTRING("getParameter"),
	HX_CSTRING("getProgramInfoLog"),
	HX_CSTRING("getProgramParameter"),
	HX_CSTRING("getRenderbufferParameter"),
	HX_CSTRING("getShaderInfoLog"),
	HX_CSTRING("getShaderParameter"),
	HX_CSTRING("getShaderPrecisionFormat"),
	HX_CSTRING("getShaderSource"),
	HX_CSTRING("getSupportedExtensions"),
	HX_CSTRING("getTexParameter"),
	HX_CSTRING("getUniform"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("getVertexAttrib"),
	HX_CSTRING("getVertexAttribOffset"),
	HX_CSTRING("hint"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("isContextLost"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isFramebuffer"),
	HX_CSTRING("isProgram"),
	HX_CSTRING("isRenderbuffer"),
	HX_CSTRING("isShader"),
	HX_CSTRING("isTexture"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("linkProgram"),
	HX_CSTRING("pixelStorei"),
	HX_CSTRING("polygonOffset"),
	HX_CSTRING("readPixels"),
	HX_CSTRING("renderbufferStorage"),
	HX_CSTRING("sampleCoverage"),
	HX_CSTRING("scissor"),
	HX_CSTRING("shaderSource"),
	HX_CSTRING("stencilFunc"),
	HX_CSTRING("stencilFuncSeparate"),
	HX_CSTRING("stencilMask"),
	HX_CSTRING("stencilMaskSeparate"),
	HX_CSTRING("stencilOp"),
	HX_CSTRING("stencilOpSeparate"),
	HX_CSTRING("texImage2D"),
	HX_CSTRING("texParameterf"),
	HX_CSTRING("texParameteri"),
	HX_CSTRING("texSubImage2D"),
	HX_CSTRING("uniform1f"),
	HX_CSTRING("uniform1fv"),
	HX_CSTRING("uniform1i"),
	HX_CSTRING("uniform1iv"),
	HX_CSTRING("uniform2f"),
	HX_CSTRING("uniform2fv"),
	HX_CSTRING("uniform2i"),
	HX_CSTRING("uniform2iv"),
	HX_CSTRING("uniform3f"),
	HX_CSTRING("uniform3fv"),
	HX_CSTRING("uniform3i"),
	HX_CSTRING("uniform3iv"),
	HX_CSTRING("uniform4f"),
	HX_CSTRING("uniform4fv"),
	HX_CSTRING("uniform4i"),
	HX_CSTRING("uniform4iv"),
	HX_CSTRING("uniformMatrix2fv"),
	HX_CSTRING("uniformMatrix3fv"),
	HX_CSTRING("uniformMatrix4fv"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("validateProgram"),
	HX_CSTRING("vertexAttrib1f"),
	HX_CSTRING("vertexAttrib1fv"),
	HX_CSTRING("vertexAttrib2f"),
	HX_CSTRING("vertexAttrib2fv"),
	HX_CSTRING("vertexAttrib3f"),
	HX_CSTRING("vertexAttrib3fv"),
	HX_CSTRING("vertexAttrib4f"),
	HX_CSTRING("vertexAttrib4fv"),
	HX_CSTRING("vertexAttribPointer"),
	HX_CSTRING("viewport"),
	HX_CSTRING("get_version"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderContext_obj::__mClass,"__mClass");
};

#endif

Class GLRenderContext_obj::__mClass;

void GLRenderContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.GLRenderContext"), hx::TCanCast< GLRenderContext_obj> ,sStaticFields,sMemberFields,
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

void GLRenderContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
