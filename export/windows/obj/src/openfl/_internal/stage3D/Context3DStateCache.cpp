// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#include <openfl/_internal/stage3D/Context3DStateCache.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_16_new,"openfl._internal.stage3D.Context3DStateCache","new",0xfc35c194,"openfl._internal.stage3D.Context3DStateCache.new","openfl/_internal/stage3D/Context3DStateCache.hx",16,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_47_clearRegisters,"openfl._internal.stage3D.Context3DStateCache","clearRegisters",0x47eb38af,"openfl._internal.stage3D.Context3DStateCache.clearRegisters","openfl/_internal/stage3D/Context3DStateCache.hx",47,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_60_clearSettings,"openfl._internal.stage3D.Context3DStateCache","clearSettings",0x4de179c4,"openfl._internal.stage3D.Context3DStateCache.clearSettings","openfl/_internal/stage3D/Context3DStateCache.hx",60,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_81_updateActiveTextureSample,"openfl._internal.stage3D.Context3DStateCache","updateActiveTextureSample",0xbea3116a,"openfl._internal.stage3D.Context3DStateCache.updateActiveTextureSample","openfl/_internal/stage3D/Context3DStateCache.hx",81,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_95_updateActiveVertexArray,"openfl._internal.stage3D.Context3DStateCache","updateActiveVertexArray",0x147a1a5a,"openfl._internal.stage3D.Context3DStateCache.updateActiveVertexArray","openfl/_internal/stage3D/Context3DStateCache.hx",95,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_109_updateBlendDestFactor,"openfl._internal.stage3D.Context3DStateCache","updateBlendDestFactor",0xd0cb3ead,"openfl._internal.stage3D.Context3DStateCache.updateBlendDestFactor","openfl/_internal/stage3D/Context3DStateCache.hx",109,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_123_updateBlendSrcFactor,"openfl._internal.stage3D.Context3DStateCache","updateBlendSrcFactor",0x54a68877,"openfl._internal.stage3D.Context3DStateCache.updateBlendSrcFactor","openfl/_internal/stage3D/Context3DStateCache.hx",123,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_137_updateCullingMode,"openfl._internal.stage3D.Context3DStateCache","updateCullingMode",0x8ec7aa9e,"openfl._internal.stage3D.Context3DStateCache.updateCullingMode","openfl/_internal/stage3D/Context3DStateCache.hx",137,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_151_updateDepthCompareMode,"openfl._internal.stage3D.Context3DStateCache","updateDepthCompareMode",0xcaf041da,"openfl._internal.stage3D.Context3DStateCache.updateDepthCompareMode","openfl/_internal/stage3D/Context3DStateCache.hx",151,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_165_updateDepthTestEnabled,"openfl._internal.stage3D.Context3DStateCache","updateDepthTestEnabled",0x47bd6581,"openfl._internal.stage3D.Context3DStateCache.updateDepthTestEnabled","openfl/_internal/stage3D/Context3DStateCache.hx",165,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_179_updateDepthTestMask,"openfl._internal.stage3D.Context3DStateCache","updateDepthTestMask",0xcdb33fec,"openfl._internal.stage3D.Context3DStateCache.updateDepthTestMask","openfl/_internal/stage3D/Context3DStateCache.hx",179,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_193_updateProgram3D,"openfl._internal.stage3D.Context3DStateCache","updateProgram3D",0x56efe020,"openfl._internal.stage3D.Context3DStateCache.updateProgram3D","openfl/_internal/stage3D/Context3DStateCache.hx",193,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_209_updateRegisters,"openfl._internal.stage3D.Context3DStateCache","updateRegisters",0x353db09b,"openfl._internal.stage3D.Context3DStateCache.updateRegisters","openfl/_internal/stage3D/Context3DStateCache.hx",209,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_234_updateViewport,"openfl._internal.stage3D.Context3DStateCache","updateViewport",0xa0a332db,"openfl._internal.stage3D.Context3DStateCache.updateViewport","openfl/_internal/stage3D/Context3DStateCache.hx",234,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_19_boot,"openfl._internal.stage3D.Context3DStateCache","boot",0xaaeca07e,"openfl._internal.stage3D.Context3DStateCache.boot","openfl/_internal/stage3D/Context3DStateCache.hx",19,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_20_boot,"openfl._internal.stage3D.Context3DStateCache","boot",0xaaeca07e,"openfl._internal.stage3D.Context3DStateCache.boot","openfl/_internal/stage3D/Context3DStateCache.hx",20,0xc7f853df)
HX_LOCAL_STACK_FRAME(_hx_pos_f8511bb00bf8f55e_22_boot,"openfl._internal.stage3D.Context3DStateCache","boot",0xaaeca07e,"openfl._internal.stage3D.Context3DStateCache.boot","openfl/_internal/stage3D/Context3DStateCache.hx",22,0xc7f853df)
namespace openfl{
namespace _internal{
namespace stage3D{

void Context3DStateCache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_16_new)
HXLINE(  32)		bool fixed = null();
HXDLIN(  32)		this->_registers =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,(int)4096,fixed,null(),true);
HXLINE(  42)		this->clearSettings();
            	}

Dynamic Context3DStateCache_obj::__CreateEmpty() { return new Context3DStateCache_obj; }

void *Context3DStateCache_obj::_hx_vtable = 0;

Dynamic Context3DStateCache_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DStateCache_obj > _hx_result = new Context3DStateCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DStateCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10288b06;
}

void Context3DStateCache_obj::clearRegisters(){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_47_clearRegisters)
HXLINE(  49)		int numFloats = (int)4096;
HXLINE(  51)		{
HXLINE(  51)			int _g1 = (int)0;
HXDLIN(  51)			int _g = numFloats;
HXDLIN(  51)			while((_g1 < _g)){
HXLINE(  51)				_g1 = (_g1 + (int)1);
HXDLIN(  51)				int c = (_g1 - (int)1);
HXLINE(  53)				this->_registers->set(c,((Float)-999999999.0));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearRegisters,(void))

void Context3DStateCache_obj::clearSettings(){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_60_clearSettings)
HXLINE(  62)		this->_srcBlendFactor = null();
HXLINE(  63)		this->_destBlendFactor = null();
HXLINE(  64)		this->_depthTestEnabled = false;
HXLINE(  65)		this->_depthTestMask = false;
HXLINE(  66)		this->_depthTestCompareMode = null();
HXLINE(  67)		this->_program = null();
HXLINE(  68)		this->_cullingMode = null();
HXLINE(  69)		this->_activeTexture = (int)-1;
HXLINE(  70)		this->_activeVertexArray = (int)-1;
HXLINE(  71)		this->_viewportOriginX = (int)-1;
HXLINE(  72)		this->_viewportOriginY = (int)-1;
HXLINE(  73)		this->_viewportWidth = (int)-1;
HXLINE(  74)		this->_viewportHeight = (int)-1;
HXLINE(  76)		this->clearRegisters();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearSettings,(void))

bool Context3DStateCache_obj::updateActiveTextureSample(int texture){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_81_updateActiveTextureSample)
HXLINE(  89)		this->_activeTexture = texture;
HXLINE(  90)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveTextureSample,return )

bool Context3DStateCache_obj::updateActiveVertexArray(int vertexArray){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_95_updateActiveVertexArray)
HXLINE( 103)		this->_activeVertexArray = vertexArray;
HXLINE( 104)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveVertexArray,return )

bool Context3DStateCache_obj::updateBlendDestFactor( ::Dynamic factor){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_109_updateBlendDestFactor)
HXLINE( 117)		this->_destBlendFactor = factor;
HXLINE( 118)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendDestFactor,return )

bool Context3DStateCache_obj::updateBlendSrcFactor( ::Dynamic factor){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_123_updateBlendSrcFactor)
HXLINE( 131)		this->_srcBlendFactor = factor;
HXLINE( 132)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendSrcFactor,return )

bool Context3DStateCache_obj::updateCullingMode( ::Dynamic cullMode){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_137_updateCullingMode)
HXLINE( 145)		this->_cullingMode = cullMode;
HXLINE( 146)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateCullingMode,return )

bool Context3DStateCache_obj::updateDepthCompareMode( ::Dynamic mode){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_151_updateDepthCompareMode)
HXLINE( 159)		this->_depthTestCompareMode = mode;
HXLINE( 160)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthCompareMode,return )

bool Context3DStateCache_obj::updateDepthTestEnabled(bool test){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_165_updateDepthTestEnabled)
HXLINE( 173)		this->_depthTestEnabled = test;
HXLINE( 174)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestEnabled,return )

bool Context3DStateCache_obj::updateDepthTestMask(bool mask){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_179_updateDepthTestMask)
HXLINE( 187)		this->_depthTestMask = mask;
HXLINE( 188)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestMask,return )

bool Context3DStateCache_obj::updateProgram3D( ::openfl::display3D::Program3D program3d){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_193_updateProgram3D)
HXLINE( 201)		this->_program = program3d;
HXLINE( 202)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateProgram3D,return )

bool Context3DStateCache_obj::updateRegisters( ::openfl::_Vector::FloatVector mTemp,int startRegister,int numRegisters){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_209_updateRegisters)
HXDLIN( 209)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Context3DStateCache_obj,updateRegisters,return )

bool Context3DStateCache_obj::updateViewport(int originX,int originY,int width,int height){
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_234_updateViewport)
HXLINE( 242)		this->_viewportOriginX = originX;
HXLINE( 243)		this->_viewportOriginY = originY;
HXLINE( 244)		this->_viewportWidth = width;
HXLINE( 245)		this->_viewportHeight = height;
HXLINE( 247)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Context3DStateCache_obj,updateViewport,return )

int Context3DStateCache_obj::FLOATS_PER_REGISTER;

int Context3DStateCache_obj::MAX_NUM_REGISTERS;

bool Context3DStateCache_obj::disableCache;


hx::ObjectPtr< Context3DStateCache_obj > Context3DStateCache_obj::__new() {
	hx::ObjectPtr< Context3DStateCache_obj > __this = new Context3DStateCache_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Context3DStateCache_obj > Context3DStateCache_obj::__alloc(hx::Ctx *_hx_ctx) {
	Context3DStateCache_obj *__this = (Context3DStateCache_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DStateCache_obj), true, "openfl._internal.stage3D.Context3DStateCache"));
	*(void **)__this = Context3DStateCache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Context3DStateCache_obj::Context3DStateCache_obj()
{
}

void Context3DStateCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DStateCache);
	HX_MARK_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_MARK_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_MARK_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_MARK_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_MARK_MEMBER_NAME(_depthTestEnabled,"_depthTestEnabled");
	HX_MARK_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_MARK_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_MARK_MEMBER_NAME(_program,"_program");
	HX_MARK_MEMBER_NAME(_registers,"_registers");
	HX_MARK_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_MARK_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_MARK_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_MARK_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_MARK_MEMBER_NAME(_viewportWidth,"_viewportWidth");
	HX_MARK_END_CLASS();
}

void Context3DStateCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_VISIT_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_VISIT_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_VISIT_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_VISIT_MEMBER_NAME(_depthTestEnabled,"_depthTestEnabled");
	HX_VISIT_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_VISIT_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_VISIT_MEMBER_NAME(_program,"_program");
	HX_VISIT_MEMBER_NAME(_registers,"_registers");
	HX_VISIT_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_VISIT_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_VISIT_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_VISIT_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_VISIT_MEMBER_NAME(_viewportWidth,"_viewportWidth");
}

hx::Val Context3DStateCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { return hx::Val( _program ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { return hx::Val( _registers ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { return hx::Val( _cullingMode ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearSettings") ) { return hx::Val( clearSettings_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { return hx::Val( _activeTexture ); }
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { return hx::Val( _depthTestMask ); }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { return hx::Val( _viewportWidth ); }
		if (HX_FIELD_EQ(inName,"clearRegisters") ) { return hx::Val( clearRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateViewport") ) { return hx::Val( updateViewport_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { return hx::Val( _srcBlendFactor ); }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { return hx::Val( _viewportHeight ); }
		if (HX_FIELD_EQ(inName,"updateProgram3D") ) { return hx::Val( updateProgram3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateRegisters") ) { return hx::Val( updateRegisters_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { return hx::Val( _destBlendFactor ); }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { return hx::Val( _viewportOriginX ); }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { return hx::Val( _viewportOriginY ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthTestEnabled") ) { return hx::Val( _depthTestEnabled ); }
		if (HX_FIELD_EQ(inName,"updateCullingMode") ) { return hx::Val( updateCullingMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { return hx::Val( _activeVertexArray ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDepthTestMask") ) { return hx::Val( updateDepthTestMask_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateBlendSrcFactor") ) { return hx::Val( updateBlendSrcFactor_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { return hx::Val( _depthTestCompareMode ); }
		if (HX_FIELD_EQ(inName,"updateBlendDestFactor") ) { return hx::Val( updateBlendDestFactor_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateDepthCompareMode") ) { return hx::Val( updateDepthCompareMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDepthTestEnabled") ) { return hx::Val( updateDepthTestEnabled_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"updateActiveVertexArray") ) { return hx::Val( updateActiveVertexArray_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateActiveTextureSample") ) { return hx::Val( updateActiveTextureSample_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Context3DStateCache_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { _program=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { _registers=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { _cullingMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { _activeTexture=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { _depthTestMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { _viewportWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { _srcBlendFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { _viewportHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { _destBlendFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { _viewportOriginX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { _viewportOriginY=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthTestEnabled") ) { _depthTestEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { _activeVertexArray=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { _depthTestCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DStateCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"));
	outFields->push(HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"));
	outFields->push(HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"));
	outFields->push(HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"));
	outFields->push(HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca"));
	outFields->push(HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"));
	outFields->push(HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"));
	outFields->push(HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"));
	outFields->push(HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"));
	outFields->push(HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"));
	outFields->push(HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"));
	outFields->push(HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Context3DStateCache_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeTexture),HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeVertexArray),HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_cullingMode),HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_depthTestCompareMode),HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestEnabled),HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestMask),HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_destBlendFactor),HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3DStateCache_obj,_program),HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(Context3DStateCache_obj,_registers),HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_srcBlendFactor),HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportHeight),HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginX),HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginY),HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportWidth),HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Context3DStateCache_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DStateCache_obj::FLOATS_PER_REGISTER,HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08")},
	{hx::fsInt,(void *) &Context3DStateCache_obj::MAX_NUM_REGISTERS,HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55")},
	{hx::fsBool,(void *) &Context3DStateCache_obj::disableCache,HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Context3DStateCache_obj_sMemberFields[] = {
	HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"),
	HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"),
	HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"),
	HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"),
	HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca"),
	HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"),
	HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"),
	HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"),
	HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"),
	HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"),
	HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"),
	HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"),
	HX_HCSTRING("clearRegisters","\x63","\x45","\x17","\x79"),
	HX_HCSTRING("clearSettings","\x90","\x7f","\x9a","\xbe"),
	HX_HCSTRING("updateActiveTextureSample","\x36","\x99","\xb3","\x38"),
	HX_HCSTRING("updateActiveVertexArray","\x26","\xd7","\xc8","\x0f"),
	HX_HCSTRING("updateBlendDestFactor","\x79","\xf0","\xf0","\xf1"),
	HX_HCSTRING("updateBlendSrcFactor","\x2b","\x14","\x7b","\xed"),
	HX_HCSTRING("updateCullingMode","\x6a","\x86","\xa5","\xc6"),
	HX_HCSTRING("updateDepthCompareMode","\x8e","\x22","\xc6","\xaa"),
	HX_HCSTRING("updateDepthTestEnabled","\x35","\x46","\x93","\x27"),
	HX_HCSTRING("updateDepthTestMask","\xb8","\xa6","\x98","\x1d"),
	HX_HCSTRING("updateProgram3D","\xec","\xf0","\x4e","\x2c"),
	HX_HCSTRING("updateRegisters","\x67","\xc1","\x9c","\x0a"),
	HX_HCSTRING("updateViewport","\x8f","\x3f","\xcf","\xd1"),
	::String(null()) };

static void Context3DStateCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DStateCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
};

#endif

hx::Class Context3DStateCache_obj::__mClass;

static ::String Context3DStateCache_obj_sStaticFields[] = {
	HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08"),
	HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55"),
	HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f"),
	::String(null())
};

void Context3DStateCache_obj::__register()
{
	hx::Object *dummy = new Context3DStateCache_obj;
	Context3DStateCache_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.Context3DStateCache","\xa2","\xa7","\xb0","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DStateCache_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DStateCache_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Context3DStateCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DStateCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DStateCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DStateCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DStateCache_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DStateCache_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_19_boot)
HXDLIN(  19)		FLOATS_PER_REGISTER = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_20_boot)
HXDLIN(  20)		MAX_NUM_REGISTERS = (int)1024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f8511bb00bf8f55e_22_boot)
HXDLIN(  22)		disableCache = true;
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
