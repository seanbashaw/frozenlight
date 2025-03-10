// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_BITMAP_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_GRADIENT_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_SHADER_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::CUBIC_CURVE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::CURVE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_CIRCLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_ELLIPSE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_QUADS;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_RECT;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_ROUND_RECT;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_TILES;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_TRIANGLES;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::END_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_BITMAP_STYLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_GRADIENT_STYLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_STYLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::MOVE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::OVERRIDE_MATRIX;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::UNKNOWN;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::WINDING_EVEN_ODD;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::WINDING_NON_ZERO;

bool DrawCommandType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) { outValue = DrawCommandType_obj::BEGIN_BITMAP_FILL; return true; }
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) { outValue = DrawCommandType_obj::BEGIN_FILL; return true; }
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) { outValue = DrawCommandType_obj::BEGIN_GRADIENT_FILL; return true; }
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) { outValue = DrawCommandType_obj::BEGIN_SHADER_FILL; return true; }
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) { outValue = DrawCommandType_obj::CUBIC_CURVE_TO; return true; }
	if (inName==HX_("CURVE_TO",6b,de,71,42)) { outValue = DrawCommandType_obj::CURVE_TO; return true; }
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) { outValue = DrawCommandType_obj::DRAW_CIRCLE; return true; }
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) { outValue = DrawCommandType_obj::DRAW_ELLIPSE; return true; }
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) { outValue = DrawCommandType_obj::DRAW_QUADS; return true; }
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) { outValue = DrawCommandType_obj::DRAW_RECT; return true; }
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) { outValue = DrawCommandType_obj::DRAW_ROUND_RECT; return true; }
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) { outValue = DrawCommandType_obj::DRAW_TILES; return true; }
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) { outValue = DrawCommandType_obj::DRAW_TRIANGLES; return true; }
	if (inName==HX_("END_FILL",c7,2c,f5,27)) { outValue = DrawCommandType_obj::END_FILL; return true; }
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) { outValue = DrawCommandType_obj::LINE_BITMAP_STYLE; return true; }
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) { outValue = DrawCommandType_obj::LINE_GRADIENT_STYLE; return true; }
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) { outValue = DrawCommandType_obj::LINE_STYLE; return true; }
	if (inName==HX_("LINE_TO",26,f0,91,9f)) { outValue = DrawCommandType_obj::LINE_TO; return true; }
	if (inName==HX_("MOVE_TO",29,35,80,ca)) { outValue = DrawCommandType_obj::MOVE_TO; return true; }
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) { outValue = DrawCommandType_obj::OVERRIDE_MATRIX; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = DrawCommandType_obj::UNKNOWN; return true; }
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) { outValue = DrawCommandType_obj::WINDING_EVEN_ODD; return true; }
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) { outValue = DrawCommandType_obj::WINDING_NON_ZERO; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DrawCommandType_obj)

int DrawCommandType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) return 0;
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) return 1;
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) return 2;
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) return 3;
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) return 4;
	if (inName==HX_("CURVE_TO",6b,de,71,42)) return 5;
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) return 6;
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) return 7;
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) return 8;
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) return 9;
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) return 10;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return 11;
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) return 12;
	if (inName==HX_("END_FILL",c7,2c,f5,27)) return 13;
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) return 14;
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) return 15;
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) return 16;
	if (inName==HX_("LINE_TO",26,f0,91,9f)) return 17;
	if (inName==HX_("MOVE_TO",29,35,80,ca)) return 18;
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) return 19;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 22;
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) return 20;
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) return 21;
	return super::__FindIndex(inName);
}

int DrawCommandType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) return 0;
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) return 0;
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) return 0;
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) return 0;
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) return 0;
	if (inName==HX_("CURVE_TO",6b,de,71,42)) return 0;
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) return 0;
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) return 0;
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) return 0;
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) return 0;
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) return 0;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return 0;
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) return 0;
	if (inName==HX_("END_FILL",c7,2c,f5,27)) return 0;
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) return 0;
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) return 0;
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) return 0;
	if (inName==HX_("LINE_TO",26,f0,91,9f)) return 0;
	if (inName==HX_("MOVE_TO",29,35,80,ca)) return 0;
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) return 0;
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val DrawCommandType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5)) return BEGIN_BITMAP_FILL;
	if (inName==HX_("BEGIN_FILL",b9,8f,44,38)) return BEGIN_FILL;
	if (inName==HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec)) return BEGIN_GRADIENT_FILL;
	if (inName==HX_("BEGIN_SHADER_FILL",a7,fa,97,6c)) return BEGIN_SHADER_FILL;
	if (inName==HX_("CUBIC_CURVE_TO",60,8b,92,ac)) return CUBIC_CURVE_TO;
	if (inName==HX_("CURVE_TO",6b,de,71,42)) return CURVE_TO;
	if (inName==HX_("DRAW_CIRCLE",2b,84,66,49)) return DRAW_CIRCLE;
	if (inName==HX_("DRAW_ELLIPSE",43,06,1d,06)) return DRAW_ELLIPSE;
	if (inName==HX_("DRAW_QUADS",f1,c3,72,24)) return DRAW_QUADS;
	if (inName==HX_("DRAW_RECT",7f,2e,c1,9b)) return DRAW_RECT;
	if (inName==HX_("DRAW_ROUND_RECT",b0,a9,34,42)) return DRAW_ROUND_RECT;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return DRAW_TILES;
	if (inName==HX_("DRAW_TRIANGLES",50,bd,1f,61)) return DRAW_TRIANGLES;
	if (inName==HX_("END_FILL",c7,2c,f5,27)) return END_FILL;
	if (inName==HX_("LINE_BITMAP_STYLE",ec,c7,38,2d)) return LINE_BITMAP_STYLE;
	if (inName==HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1)) return LINE_GRADIENT_STYLE;
	if (inName==HX_("LINE_STYLE",46,73,8d,dd)) return LINE_STYLE;
	if (inName==HX_("LINE_TO",26,f0,91,9f)) return LINE_TO;
	if (inName==HX_("MOVE_TO",29,35,80,ca)) return MOVE_TO;
	if (inName==HX_("OVERRIDE_MATRIX",14,63,08,a8)) return OVERRIDE_MATRIX;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	if (inName==HX_("WINDING_EVEN_ODD",cf,a9,5e,c6)) return WINDING_EVEN_ODD;
	if (inName==HX_("WINDING_NON_ZERO",1f,ee,be,05)) return WINDING_NON_ZERO;
	return super::__Field(inName,inCallProp);
}

static ::String DrawCommandType_obj_sStaticFields[] = {
	HX_("BEGIN_BITMAP_FILL",9d,8d,c1,d5),
	HX_("BEGIN_FILL",b9,8f,44,38),
	HX_("BEGIN_GRADIENT_FILL",7c,12,1d,ec),
	HX_("BEGIN_SHADER_FILL",a7,fa,97,6c),
	HX_("CUBIC_CURVE_TO",60,8b,92,ac),
	HX_("CURVE_TO",6b,de,71,42),
	HX_("DRAW_CIRCLE",2b,84,66,49),
	HX_("DRAW_ELLIPSE",43,06,1d,06),
	HX_("DRAW_QUADS",f1,c3,72,24),
	HX_("DRAW_RECT",7f,2e,c1,9b),
	HX_("DRAW_ROUND_RECT",b0,a9,34,42),
	HX_("DRAW_TILES",aa,4b,c0,d6),
	HX_("DRAW_TRIANGLES",50,bd,1f,61),
	HX_("END_FILL",c7,2c,f5,27),
	HX_("LINE_BITMAP_STYLE",ec,c7,38,2d),
	HX_("LINE_GRADIENT_STYLE",6d,7d,1a,a1),
	HX_("LINE_STYLE",46,73,8d,dd),
	HX_("LINE_TO",26,f0,91,9f),
	HX_("MOVE_TO",29,35,80,ca),
	HX_("OVERRIDE_MATRIX",14,63,08,a8),
	HX_("WINDING_EVEN_ODD",cf,a9,5e,c6),
	HX_("WINDING_NON_ZERO",1f,ee,be,05),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

static void DrawCommandType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_BITMAP_FILL,"BEGIN_BITMAP_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_GRADIENT_FILL,"BEGIN_GRADIENT_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_SHADER_FILL,"BEGIN_SHADER_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::CURVE_TO,"CURVE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_CIRCLE,"DRAW_CIRCLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_ELLIPSE,"DRAW_ELLIPSE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_QUADS,"DRAW_QUADS");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_RECT,"DRAW_RECT");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_ROUND_RECT,"DRAW_ROUND_RECT");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_TILES,"DRAW_TILES");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_TRIANGLES,"DRAW_TRIANGLES");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::END_FILL,"END_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_BITMAP_STYLE,"LINE_BITMAP_STYLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_GRADIENT_STYLE,"LINE_GRADIENT_STYLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_STYLE,"LINE_STYLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_TO,"LINE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::MOVE_TO,"MOVE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::OVERRIDE_MATRIX,"OVERRIDE_MATRIX");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::UNKNOWN,"UNKNOWN");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::WINDING_EVEN_ODD,"WINDING_EVEN_ODD");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::WINDING_NON_ZERO,"WINDING_NON_ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawCommandType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_BITMAP_FILL,"BEGIN_BITMAP_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_GRADIENT_FILL,"BEGIN_GRADIENT_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_SHADER_FILL,"BEGIN_SHADER_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::CURVE_TO,"CURVE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_CIRCLE,"DRAW_CIRCLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_ELLIPSE,"DRAW_ELLIPSE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_QUADS,"DRAW_QUADS");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_RECT,"DRAW_RECT");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_ROUND_RECT,"DRAW_ROUND_RECT");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_TILES,"DRAW_TILES");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_TRIANGLES,"DRAW_TRIANGLES");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::END_FILL,"END_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_BITMAP_STYLE,"LINE_BITMAP_STYLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_GRADIENT_STYLE,"LINE_GRADIENT_STYLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_STYLE,"LINE_STYLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_TO,"LINE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::MOVE_TO,"MOVE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::OVERRIDE_MATRIX,"OVERRIDE_MATRIX");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::UNKNOWN,"UNKNOWN");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::WINDING_EVEN_ODD,"WINDING_EVEN_ODD");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::WINDING_NON_ZERO,"WINDING_NON_ZERO");
};
#endif

hx::Class DrawCommandType_obj::__mClass;

Dynamic __Create_DrawCommandType_obj() { return new DrawCommandType_obj; }

void DrawCommandType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._internal.renderer.DrawCommandType","\xe6","\x40","\xe3","\x94"), hx::TCanCast< DrawCommandType_obj >,DrawCommandType_obj_sStaticFields,0,
	&__Create_DrawCommandType_obj, &__Create,
	&super::__SGetClass(), &CreateDrawCommandType_obj, DrawCommandType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , DrawCommandType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DrawCommandType_obj::__GetStatic;
}

void DrawCommandType_obj::__boot()
{
BEGIN_BITMAP_FILL = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_BITMAP_FILL","\x9d","\x8d","\xc1","\xd5"),0,0);
BEGIN_FILL = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_FILL","\xb9","\x8f","\x44","\x38"),1,0);
BEGIN_GRADIENT_FILL = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_GRADIENT_FILL","\x7c","\x12","\x1d","\xec"),2,0);
BEGIN_SHADER_FILL = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_SHADER_FILL","\xa7","\xfa","\x97","\x6c"),3,0);
CUBIC_CURVE_TO = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac"),4,0);
CURVE_TO = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42"),5,0);
DRAW_CIRCLE = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_CIRCLE","\x2b","\x84","\x66","\x49"),6,0);
DRAW_ELLIPSE = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_ELLIPSE","\x43","\x06","\x1d","\x06"),7,0);
DRAW_QUADS = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_QUADS","\xf1","\xc3","\x72","\x24"),8,0);
DRAW_RECT = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_RECT","\x7f","\x2e","\xc1","\x9b"),9,0);
DRAW_ROUND_RECT = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_ROUND_RECT","\xb0","\xa9","\x34","\x42"),10,0);
DRAW_TILES = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6"),11,0);
DRAW_TRIANGLES = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_TRIANGLES","\x50","\xbd","\x1f","\x61"),12,0);
END_FILL = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27"),13,0);
LINE_BITMAP_STYLE = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_BITMAP_STYLE","\xec","\xc7","\x38","\x2d"),14,0);
LINE_GRADIENT_STYLE = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_GRADIENT_STYLE","\x6d","\x7d","\x1a","\xa1"),15,0);
LINE_STYLE = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_STYLE","\x46","\x73","\x8d","\xdd"),16,0);
LINE_TO = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f"),17,0);
MOVE_TO = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca"),18,0);
OVERRIDE_MATRIX = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("OVERRIDE_MATRIX","\x14","\x63","\x08","\xa8"),19,0);
UNKNOWN = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),22,0);
WINDING_EVEN_ODD = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("WINDING_EVEN_ODD","\xcf","\xa9","\x5e","\xc6"),20,0);
WINDING_NON_ZERO = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("WINDING_NON_ZERO","\x1f","\xee","\xbe","\x05"),21,0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
