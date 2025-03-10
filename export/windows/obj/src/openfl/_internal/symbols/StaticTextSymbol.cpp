// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#include <openfl/_internal/symbols/FontSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#include <openfl/_internal/symbols/StaticTextRecord.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextSymbol
#include <openfl/_internal/symbols/StaticTextSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_text_StaticText
#include <openfl/text/StaticText.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9cb7cf8686767cce_26_new,"openfl._internal.symbols.StaticTextSymbol","new",0x75321c28,"openfl._internal.symbols.StaticTextSymbol.new","openfl/_internal/symbols/StaticTextSymbol.hx",26,0x451958e5)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb7cf8686767cce_31___createObject,"openfl._internal.symbols.StaticTextSymbol","__createObject",0xe6e27b33,"openfl._internal.symbols.StaticTextSymbol.__createObject","openfl/_internal/symbols/StaticTextSymbol.hx",31,0x451958e5)
namespace openfl{
namespace _internal{
namespace symbols{

void StaticTextSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9cb7cf8686767cce_26_new)
HXDLIN(  26)		super::__construct();
            	}

Dynamic StaticTextSymbol_obj::__CreateEmpty() { return new StaticTextSymbol_obj; }

void *StaticTextSymbol_obj::_hx_vtable = 0;

Dynamic StaticTextSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticTextSymbol_obj > _hx_result = new StaticTextSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticTextSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17935462) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x17935462;
	} else {
		return inClassId==(int)0x5bdcc22b;
	}
}

 ::openfl::display::DisplayObject StaticTextSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_9cb7cf8686767cce_31___createObject)
HXLINE(  33)		 ::openfl::text::StaticText staticText =  ::openfl::text::StaticText_obj::__alloc( HX_CTX );
HXLINE(  34)		 ::openfl::display::Graphics graphics = staticText->_hx___graphics;
HXLINE(  36)		if (hx::IsNotNull( this->rendered )) {
HXLINE(  38)			staticText->text = this->rendered->text;
HXLINE(  39)			graphics->copyFrom(this->rendered->_hx___graphics);
HXLINE(  40)			return staticText;
            		}
HXLINE(  44)		::String text = HX_("",00,00,00,00);
HXLINE(  46)		if (hx::IsNotNull( this->records )) {
HXLINE(  48)			 ::openfl::_internal::symbols::FontSymbol font = null();
HXLINE(  49)			int color = (int)16777215;
HXLINE(  50)			Float offsetX = this->matrix->tx;
HXLINE(  51)			Float offsetY = this->matrix->ty;
HXLINE(  53)			Float scale;
HXDLIN(  53)			int index;
HXDLIN(  53)			 ::Dynamic code;
HXLINE(  55)			{
HXLINE(  55)				int _g = (int)0;
HXDLIN(  55)				::Array< ::Dynamic> _g1 = this->records;
HXDLIN(  55)				while((_g < _g1->length)){
HXLINE(  55)					 ::openfl::_internal::symbols::StaticTextRecord record = _g1->__get(_g).StaticCast<  ::openfl::_internal::symbols::StaticTextRecord >();
HXDLIN(  55)					_g = (_g + (int)1);
HXLINE(  57)					if (hx::IsNotNull( record->fontID )) {
HXLINE(  57)						font = ( ( ::openfl::_internal::symbols::FontSymbol)(swf->symbols->get(record->fontID).StaticCast<  ::openfl::_internal::symbols::SWFSymbol >()) );
            					}
HXLINE(  58)					if (hx::IsNotNull( record->offsetX )) {
HXLINE(  58)						Float offsetX1 = this->matrix->tx;
HXDLIN(  58)						offsetX = (offsetX1 + (record->offsetX * ((Float)0.05)));
            					}
HXLINE(  59)					if (hx::IsNotNull( record->offsetY )) {
HXLINE(  59)						Float offsetY1 = this->matrix->ty;
HXDLIN(  59)						offsetY = (offsetY1 + (record->offsetY * ((Float)0.05)));
            					}
HXLINE(  60)					if (hx::IsNotNull( record->color )) {
HXLINE(  60)						color = record->color;
            					}
HXLINE(  62)					if (hx::IsNotNull( font )) {
HXLINE(  64)						scale = (((Float)record->fontHeight / (Float)(int)1024) * ((Float)0.05));
HXLINE(  66)						{
HXLINE(  66)							int _g3 = (int)0;
HXDLIN(  66)							int _g2 = record->glyphs->length;
HXDLIN(  66)							while((_g3 < _g2)){
HXLINE(  66)								_g3 = (_g3 + (int)1);
HXDLIN(  66)								int i = (_g3 - (int)1);
HXLINE(  68)								index = record->glyphs->__get(i);
HXLINE(  69)								text = (text + ::String::fromCharCode(font->codes->__get(index)));
HXLINE(  71)								{
HXLINE(  71)									int _g4 = (int)0;
HXDLIN(  71)									::Array< ::Dynamic> _g5 = font->glyphs->__get(index).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  71)									while((_g4 < _g5->length)){
HXLINE(  71)										 ::openfl::_internal::swf::ShapeCommand command = _g5->__get(_g4).StaticCast<  ::openfl::_internal::swf::ShapeCommand >();
HXDLIN(  71)										_g4 = (_g4 + (int)1);
HXLINE(  73)										switch((int)(_hx_getEnumValueIndex(command))){
            											case (int)1: {
HXLINE(  75)												Float alpha = command->_hx_getFloat(1);
HXLINE(  77)												graphics->beginFill(((int)color & (int)(int)16777215),((Float)((int)((int)color >> (int)(int)24) & (int)(int)255) / (Float)(int)255));
            											}
            											break;
            											case (int)3: {
HXLINE(  79)												Float anchorY = command->_hx_getFloat(3);
HXDLIN(  79)												Float anchorX = command->_hx_getFloat(2);
HXDLIN(  79)												Float controlY = command->_hx_getFloat(1);
HXDLIN(  79)												Float controlX = command->_hx_getFloat(0);
HXLINE(  81)												graphics->curveTo(((controlX * scale) + offsetX),((controlY * scale) + offsetY),((anchorX * scale) + offsetX),((anchorY * scale) + offsetY));
            											}
            											break;
            											case (int)4: {
HXLINE(  85)												graphics->endFill();
            											}
            											break;
            											case (int)5: {
HXLINE(  87)												 ::Dynamic miterLimit = command->_hx_getObject(7);
HXDLIN(  87)												 ::Dynamic joints = command->_hx_getObject(6);
HXDLIN(  87)												 ::Dynamic caps = command->_hx_getObject(5);
HXDLIN(  87)												 ::Dynamic scaleMode = command->_hx_getObject(4);
HXDLIN(  87)												 ::Dynamic pixelHinting = command->_hx_getObject(3);
HXDLIN(  87)												 ::Dynamic alpha1 = command->_hx_getObject(2);
HXDLIN(  87)												 ::Dynamic color1 = command->_hx_getObject(1);
HXDLIN(  87)												 ::Dynamic thickness = command->_hx_getObject(0);
HXLINE(  89)												if (hx::IsNotNull( thickness )) {
HXLINE(  91)													graphics->lineStyle(thickness,color1,alpha1,pixelHinting,scaleMode,caps,joints,miterLimit);
            												}
            												else {
HXLINE(  95)													graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            												}
            											}
            											break;
            											case (int)6: {
HXLINE(  99)												Float y = command->_hx_getFloat(1);
HXDLIN(  99)												Float x = command->_hx_getFloat(0);
HXLINE( 101)												graphics->lineTo(((x * scale) + offsetX),((y * scale) + offsetY));
            											}
            											break;
            											case (int)7: {
HXLINE( 103)												Float y1 = command->_hx_getFloat(1);
HXDLIN( 103)												Float x1 = command->_hx_getFloat(0);
HXLINE( 105)												graphics->moveTo(((x1 * scale) + offsetX),((y1 * scale) + offsetY));
            											}
            											break;
            											default:{
            											}
            										}
            									}
            								}
HXLINE( 113)								offsetX = (offsetX + (record->advances->__get(i) * ((Float)0.05)));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 123)		staticText->text = text;
HXLINE( 125)		this->records = null();
HXLINE( 126)		this->rendered =  ::openfl::text::StaticText_obj::__alloc( HX_CTX );
HXLINE( 127)		this->rendered->text = text;
HXLINE( 128)		this->rendered->_hx___graphics->copyFrom(staticText->_hx___graphics);
HXLINE( 130)		return staticText;
            	}



hx::ObjectPtr< StaticTextSymbol_obj > StaticTextSymbol_obj::__new() {
	hx::ObjectPtr< StaticTextSymbol_obj > __this = new StaticTextSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< StaticTextSymbol_obj > StaticTextSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	StaticTextSymbol_obj *__this = (StaticTextSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticTextSymbol_obj), true, "openfl._internal.symbols.StaticTextSymbol"));
	*(void **)__this = StaticTextSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StaticTextSymbol_obj::StaticTextSymbol_obj()
{
}

void StaticTextSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticTextSymbol);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(records,"records");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticTextSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(records,"records");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val StaticTextSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { return hx::Val( records ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { return hx::Val( rendered ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StaticTextSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { records=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::text::StaticText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticTextSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("records","\xc2","\x48","\xfb","\x30"));
	outFields->push(HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StaticTextSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(StaticTextSymbol_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StaticTextSymbol_obj,records),HX_HCSTRING("records","\xc2","\x48","\xfb","\x30")},
	{hx::fsObject /*::openfl::text::StaticText*/ ,(int)offsetof(StaticTextSymbol_obj,rendered),HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StaticTextSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticTextSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("records","\xc2","\x48","\xfb","\x30"),
	HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void StaticTextSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticTextSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticTextSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticTextSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticTextSymbol_obj::__mClass;

void StaticTextSymbol_obj::__register()
{
	hx::Object *dummy = new StaticTextSymbol_obj;
	StaticTextSymbol_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.StaticTextSymbol","\x36","\x28","\x1f","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticTextSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StaticTextSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticTextSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticTextSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticTextSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticTextSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
