// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Uniform
#include <openfl/display3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D_UniformMap
#include <openfl/display3D/UniformMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_485718db96d0565f_209_new,"openfl.display3D.UniformMap","new",0x9f6fba13,"openfl.display3D.UniformMap.new","openfl/display3D/Program3D.hx",209,0x0a985b04)
HX_DEFINE_STACK_FRAME(_hx_pos_485718db96d0565f_203_new,"openfl.display3D.UniformMap","new",0x9f6fba13,"openfl.display3D.UniformMap.new","openfl/display3D/Program3D.hx",203,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_244_flush,"openfl.display3D.UniformMap","flush",0x8fcb5f37,"openfl.display3D.UniformMap.flush","openfl/display3D/Program3D.hx",244,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_264_markAllDirty,"openfl.display3D.UniformMap","markAllDirty",0xabef284b,"openfl.display3D.UniformMap.markAllDirty","openfl/display3D/Program3D.hx",264,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_485718db96d0565f_272_markDirty,"openfl.display3D.UniformMap","markDirty",0xb895e2b8,"openfl.display3D.UniformMap.markDirty","openfl/display3D/Program3D.hx",272,0x0a985b04)
namespace openfl{
namespace display3D{

void UniformMap_obj::__construct(::Array< ::Dynamic> list){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::openfl::display3D::Uniform a, ::openfl::display3D::Uniform b){
            			HX_STACKFRAME(&_hx_pos_485718db96d0565f_209_new)
HXLINE( 209)			return ::Reflect_obj::compare(a->regIndex,b->regIndex);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_485718db96d0565f_203_new)
HXLINE( 205)		this->_hx___uniforms = list;
HXLINE( 207)		this->_hx___uniforms->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 213)		int total = (int)0;
HXLINE( 215)		{
HXLINE( 215)			int _g = (int)0;
HXDLIN( 215)			::Array< ::Dynamic> _g1 = this->_hx___uniforms;
HXDLIN( 215)			while((_g < _g1->length)){
HXLINE( 215)				 ::openfl::display3D::Uniform uniform = _g1->__get(_g).StaticCast<  ::openfl::display3D::Uniform >();
HXDLIN( 215)				_g = (_g + (int)1);
HXLINE( 217)				if (((uniform->regIndex + uniform->regCount) > total)) {
HXLINE( 219)					total = (uniform->regIndex + uniform->regCount);
            				}
            			}
            		}
HXLINE( 225)		bool fixed = null();
HXDLIN( 225)		this->_hx___registerLookup =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,total,fixed,null(),true);
HXLINE( 227)		{
HXLINE( 227)			int _g2 = (int)0;
HXDLIN( 227)			::Array< ::Dynamic> _g11 = this->_hx___uniforms;
HXDLIN( 227)			while((_g2 < _g11->length)){
HXLINE( 227)				 ::openfl::display3D::Uniform uniform1 = _g11->__get(_g2).StaticCast<  ::openfl::display3D::Uniform >();
HXDLIN( 227)				_g2 = (_g2 + (int)1);
HXLINE( 229)				{
HXLINE( 229)					int _g3 = (int)0;
HXDLIN( 229)					int _g21 = uniform1->regCount;
HXDLIN( 229)					while((_g3 < _g21)){
HXLINE( 229)						_g3 = (_g3 + (int)1);
HXDLIN( 229)						int i = (_g3 - (int)1);
HXLINE( 231)						this->_hx___registerLookup->set((uniform1->regIndex + i),uniform1).StaticCast<  ::openfl::display3D::Uniform >();
            					}
            				}
            			}
            		}
HXLINE( 237)		this->_hx___anyDirty = (this->_hx___allDirty = true);
            	}

Dynamic UniformMap_obj::__CreateEmpty() { return new UniformMap_obj; }

void *UniformMap_obj::_hx_vtable = 0;

Dynamic UniformMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UniformMap_obj > _hx_result = new UniformMap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool UniformMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16eab4bb;
}

void UniformMap_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_244_flush)
HXDLIN( 244)		if (this->_hx___anyDirty) {
HXLINE( 246)			{
HXLINE( 246)				int _g = (int)0;
HXDLIN( 246)				::Array< ::Dynamic> _g1 = this->_hx___uniforms;
HXDLIN( 246)				while((_g < _g1->length)){
HXLINE( 246)					 ::openfl::display3D::Uniform uniform = _g1->__get(_g).StaticCast<  ::openfl::display3D::Uniform >();
HXDLIN( 246)					_g = (_g + (int)1);
HXLINE( 248)					bool _hx_tmp;
HXDLIN( 248)					if (!(this->_hx___allDirty)) {
HXLINE( 248)						_hx_tmp = uniform->isDirty;
            					}
            					else {
HXLINE( 248)						_hx_tmp = true;
            					}
HXDLIN( 248)					if (_hx_tmp) {
HXLINE( 250)						uniform->flush();
HXLINE( 251)						uniform->isDirty = false;
            					}
            				}
            			}
HXLINE( 257)			this->_hx___anyDirty = (this->_hx___allDirty = false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,flush,(void))

void UniformMap_obj::markAllDirty(){
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_264_markAllDirty)
HXLINE( 266)		this->_hx___allDirty = true;
HXLINE( 267)		this->_hx___anyDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,markAllDirty,(void))

void UniformMap_obj::markDirty(int start,int count){
            	HX_STACKFRAME(&_hx_pos_485718db96d0565f_272_markDirty)
HXLINE( 274)		if (this->_hx___allDirty) {
HXLINE( 276)			return;
            		}
HXLINE( 280)		int end = (start + count);
HXLINE( 282)		if ((end > this->_hx___registerLookup->get_length())) {
HXLINE( 284)			end = this->_hx___registerLookup->get_length();
            		}
HXLINE( 288)		int index = start;
HXLINE( 290)		while((index < end)){
HXLINE( 292)			 ::openfl::display3D::Uniform uniform = this->_hx___registerLookup->get(index).StaticCast<  ::openfl::display3D::Uniform >();
HXLINE( 294)			if (hx::IsNotNull( uniform )) {
HXLINE( 296)				uniform->isDirty = true;
HXLINE( 297)				this->_hx___anyDirty = true;
HXLINE( 299)				index = (uniform->regIndex + uniform->regCount);
            			}
            			else {
HXLINE( 303)				index = (index + (int)1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(UniformMap_obj,markDirty,(void))


hx::ObjectPtr< UniformMap_obj > UniformMap_obj::__new(::Array< ::Dynamic> list) {
	hx::ObjectPtr< UniformMap_obj > __this = new UniformMap_obj();
	__this->__construct(list);
	return __this;
}

hx::ObjectPtr< UniformMap_obj > UniformMap_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> list) {
	UniformMap_obj *__this = (UniformMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UniformMap_obj), true, "openfl.display3D.UniformMap"));
	*(void **)__this = UniformMap_obj::_hx_vtable;
	__this->__construct(list);
	return __this;
}

UniformMap_obj::UniformMap_obj()
{
}

void UniformMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UniformMap);
	HX_MARK_MEMBER_NAME(_hx___allDirty,"__allDirty");
	HX_MARK_MEMBER_NAME(_hx___anyDirty,"__anyDirty");
	HX_MARK_MEMBER_NAME(_hx___registerLookup,"__registerLookup");
	HX_MARK_MEMBER_NAME(_hx___uniforms,"__uniforms");
	HX_MARK_END_CLASS();
}

void UniformMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___allDirty,"__allDirty");
	HX_VISIT_MEMBER_NAME(_hx___anyDirty,"__anyDirty");
	HX_VISIT_MEMBER_NAME(_hx___registerLookup,"__registerLookup");
	HX_VISIT_MEMBER_NAME(_hx___uniforms,"__uniforms");
}

hx::Val UniformMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return hx::Val( flush_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"markDirty") ) { return hx::Val( markDirty_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { return hx::Val( _hx___allDirty ); }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { return hx::Val( _hx___anyDirty ); }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return hx::Val( _hx___uniforms ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"markAllDirty") ) { return hx::Val( markAllDirty_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { return hx::Val( _hx___registerLookup ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val UniformMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { _hx___allDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { _hx___anyDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { _hx___uniforms=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { _hx___registerLookup=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UniformMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75"));
	outFields->push(HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb"));
	outFields->push(HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c"));
	outFields->push(HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo UniformMap_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UniformMap_obj,_hx___allDirty),HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75")},
	{hx::fsBool,(int)offsetof(UniformMap_obj,_hx___anyDirty),HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(UniformMap_obj,_hx___registerLookup),HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UniformMap_obj,_hx___uniforms),HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *UniformMap_obj_sStaticStorageInfo = 0;
#endif

static ::String UniformMap_obj_sMemberFields[] = {
	HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75"),
	HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb"),
	HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c"),
	HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("markAllDirty","\x5e","\x60","\x3e","\x4b"),
	HX_HCSTRING("markDirty","\xc5","\x30","\xa3","\x36"),
	::String(null()) };

static void UniformMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UniformMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UniformMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UniformMap_obj::__mClass,"__mClass");
};

#endif

hx::Class UniformMap_obj::__mClass;

void UniformMap_obj::__register()
{
	hx::Object *dummy = new UniformMap_obj;
	UniformMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.UniformMap","\xa1","\xb4","\xc6","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UniformMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UniformMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UniformMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UniformMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UniformMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UniformMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
