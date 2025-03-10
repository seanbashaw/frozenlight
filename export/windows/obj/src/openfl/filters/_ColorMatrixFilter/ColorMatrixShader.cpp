// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#include <openfl/filters/_ColorMatrixFilter/ColorMatrixShader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_65d84bf4a5bd7bcf_201_new,"openfl.filters._ColorMatrixFilter.ColorMatrixShader","new",0xf11da59b,"openfl.filters._ColorMatrixFilter.ColorMatrixShader.new","openfl/filters/ColorMatrixFilter.hx",201,0xb64128b5)
static const Float _hx_array_data_a1263c29_1[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,
};
static const Float _hx_array_data_a1263c29_2[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_65d84bf4a5bd7bcf_213_init,"openfl.filters._ColorMatrixFilter.ColorMatrixShader","init",0x058bf975,"openfl.filters._ColorMatrixFilter.ColorMatrixShader.init","openfl/filters/ColorMatrixFilter.hx",213,0xb64128b5)
namespace openfl{
namespace filters{
namespace _ColorMatrixFilter{

void ColorMatrixShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_65d84bf4a5bd7bcf_201_new)
HXLINE( 202)		if (hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 202)			this->_hx___glFragmentSource = HX_("varying vec2 openfl_TextureCoordv;\n\t\tuniform sampler2D openfl_Texture;\n\t\t\n\t\tuniform mat4 uMultipliers;\n\t\tuniform vec4 uOffsets;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvec4 color = texture2D (openfl_Texture, openfl_TextureCoordv);\n\t\t\t\n\t\t\tif (color.a == 0.0) {\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t\t\t\n\t\t\t} else {\n\t\t\t\t\n\t\t\t\tcolor = vec4 (color.rgb / color.a, color.a);\n\t\t\t\tcolor = uOffsets + color * uMultipliers;\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (color.rgb * color.a, color.a);\n\t\t\t\t\n\t\t\t}\n\t\t\t\n\t\t}",43,e2,93,09);
            		}
HXLINE( 201)		if (hx::IsNull( this->_hx___glVertexSource )) {
HXDLIN( 201)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\t\n\t\tvarying vec2 openfl_TextureCoordv;\n\t\t\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\t\t\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t}",e4,da,86,49);
            		}
HXLINE( 203)		super::__construct(null());
HXLINE( 206)		this->uMultipliers->value = ::Array_obj< Float >::fromData( _hx_array_data_a1263c29_1,16);
HXLINE( 207)		this->uOffsets->value = ::Array_obj< Float >::fromData( _hx_array_data_a1263c29_2,4);
HXLINE(   1)		this->_hx___isGenerated = true;
HXDLIN(   1)		this->_hx___initGL();
            	}

Dynamic ColorMatrixShader_obj::__CreateEmpty() { return new ColorMatrixShader_obj; }

void *ColorMatrixShader_obj::_hx_vtable = 0;

Dynamic ColorMatrixShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorMatrixShader_obj > _hx_result = new ColorMatrixShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorMatrixShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ef70f6d) {
		if (inClassId<=(int)0x03978973) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03978973;
		} else {
			return inClassId==(int)0x2ef70f6d;
		}
	} else {
		return inClassId==(int)0x676ab1f7;
	}
}

void ColorMatrixShader_obj::init(::Array< Float > matrix){
            	HX_STACKFRAME(&_hx_pos_65d84bf4a5bd7bcf_213_init)
HXLINE( 216)		::Array< Float > multipliers = this->uMultipliers->value;
HXLINE( 217)		::Array< Float > offsets = this->uOffsets->value;
HXLINE( 219)		multipliers[(int)0] = matrix->__get((int)0);
HXLINE( 220)		multipliers[(int)1] = matrix->__get((int)1);
HXLINE( 221)		multipliers[(int)2] = matrix->__get((int)2);
HXLINE( 222)		multipliers[(int)3] = matrix->__get((int)3);
HXLINE( 223)		multipliers[(int)4] = matrix->__get((int)5);
HXLINE( 224)		multipliers[(int)5] = matrix->__get((int)6);
HXLINE( 225)		multipliers[(int)6] = matrix->__get((int)7);
HXLINE( 226)		multipliers[(int)7] = matrix->__get((int)8);
HXLINE( 227)		multipliers[(int)8] = matrix->__get((int)10);
HXLINE( 228)		multipliers[(int)9] = matrix->__get((int)11);
HXLINE( 229)		multipliers[(int)10] = matrix->__get((int)12);
HXLINE( 230)		multipliers[(int)11] = matrix->__get((int)13);
HXLINE( 231)		multipliers[(int)12] = matrix->__get((int)15);
HXLINE( 232)		multipliers[(int)13] = matrix->__get((int)16);
HXLINE( 233)		multipliers[(int)14] = matrix->__get((int)17);
HXLINE( 234)		multipliers[(int)15] = matrix->__get((int)18);
HXLINE( 236)		offsets[(int)0] = ((Float)matrix->__get((int)4) / (Float)((Float)255.0));
HXLINE( 237)		offsets[(int)1] = ((Float)matrix->__get((int)9) / (Float)((Float)255.0));
HXLINE( 238)		offsets[(int)2] = ((Float)matrix->__get((int)14) / (Float)((Float)255.0));
HXLINE( 239)		offsets[(int)3] = ((Float)matrix->__get((int)19) / (Float)((Float)255.0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrixShader_obj,init,(void))


hx::ObjectPtr< ColorMatrixShader_obj > ColorMatrixShader_obj::__new() {
	hx::ObjectPtr< ColorMatrixShader_obj > __this = new ColorMatrixShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ColorMatrixShader_obj > ColorMatrixShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	ColorMatrixShader_obj *__this = (ColorMatrixShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColorMatrixShader_obj), true, "openfl.filters._ColorMatrixFilter.ColorMatrixShader"));
	*(void **)__this = ColorMatrixShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ColorMatrixShader_obj::ColorMatrixShader_obj()
{
}

void ColorMatrixShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrixShader);
	HX_MARK_MEMBER_NAME(uMultipliers,"uMultipliers");
	HX_MARK_MEMBER_NAME(uOffsets,"uOffsets");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMatrixShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uMultipliers,"uMultipliers");
	HX_VISIT_MEMBER_NAME(uOffsets,"uOffsets");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ColorMatrixShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { return hx::Val( uOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uMultipliers") ) { return hx::Val( uMultipliers ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ColorMatrixShader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { uOffsets=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uMultipliers") ) { uMultipliers=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorMatrixShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5"));
	outFields->push(HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColorMatrixShader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(ColorMatrixShader_obj,uMultipliers),HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(ColorMatrixShader_obj,uOffsets),HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ColorMatrixShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorMatrixShader_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5"),
	HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8"),
	::String(null()) };

static void ColorMatrixShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrixShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorMatrixShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrixShader_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorMatrixShader_obj::__mClass;

void ColorMatrixShader_obj::__register()
{
	hx::Object *dummy = new ColorMatrixShader_obj;
	ColorMatrixShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._ColorMatrixFilter.ColorMatrixShader","\x29","\x3c","\x26","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColorMatrixShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColorMatrixShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorMatrixShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorMatrixShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrixShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrixShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _ColorMatrixFilter
