// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a07fa6861abdf37_31_new,"lime.utils.AssetManifest","new",0x762e683b,"lime.utils.AssetManifest.new","lime/utils/AssetManifest.hx",31,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_135_serialize,"lime.utils.AssetManifest","serialize",0x0634cbfb,"lime.utils.AssetManifest.serialize","lime/utils/AssetManifest.hx",135,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_42_fromBytes,"lime.utils.AssetManifest","fromBytes",0x836360bc,"lime.utils.AssetManifest.fromBytes","lime/utils/AssetManifest.hx",42,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_55_fromFile,"lime.utils.AssetManifest","fromFile",0x2911ab4b,"lime.utils.AssetManifest.fromFile","lime/utils/AssetManifest.hx",55,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_69_loadFromBytes,"lime.utils.AssetManifest","loadFromBytes",0x6e69db36,"lime.utils.AssetManifest.loadFromBytes","lime/utils/AssetManifest.hx",69,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_83_loadFromFile,"lime.utils.AssetManifest","loadFromFile",0xc63f9e11,"lime.utils.AssetManifest.loadFromFile","lime/utils/AssetManifest.hx",83,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_74_loadFromFile,"lime.utils.AssetManifest","loadFromFile",0xc63f9e11,"lime.utils.AssetManifest.loadFromFile","lime/utils/AssetManifest.hx",74,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_90_parse,"lime.utils.AssetManifest","parse",0x50ea14ce,"lime.utils.AssetManifest.parse","lime/utils/AssetManifest.hx",90,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_158___resolvePath,"lime.utils.AssetManifest","__resolvePath",0xa7e8632c,"lime.utils.AssetManifest.__resolvePath","lime/utils/AssetManifest.hx",158,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_204___resolveRootPath,"lime.utils.AssetManifest","__resolveRootPath",0x93ba05ee,"lime.utils.AssetManifest.__resolveRootPath","lime/utils/AssetManifest.hx",204,0x0cdd5257)
namespace lime{
namespace utils{

void AssetManifest_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_31_new)
HXLINE(  33)		this->assets = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  34)		this->libraryArgs = ::Array_obj< ::String >::__new(0);
HXLINE(  35)		this->version = (int)2;
            	}

Dynamic AssetManifest_obj::__CreateEmpty() { return new AssetManifest_obj; }

void *AssetManifest_obj::_hx_vtable = 0;

Dynamic AssetManifest_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetManifest_obj > _hx_result = new AssetManifest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetManifest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ad14d63;
}

::String AssetManifest_obj::serialize(){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_135_serialize)
HXLINE( 139)		 ::Dynamic manifestData =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 140)		manifestData->__SetField(HX_("version",18,e7,f1,7c),this->version,hx::paccDynamic);
HXLINE( 141)		manifestData->__SetField(HX_("libraryType",55,df,f0,ae),this->libraryType,hx::paccDynamic);
HXLINE( 142)		manifestData->__SetField(HX_("libraryArgs",f8,79,5c,a2),this->libraryArgs,hx::paccDynamic);
HXLINE( 143)		manifestData->__SetField(HX_("name",4b,72,ff,48),this->name,hx::paccDynamic);
HXLINE( 144)		manifestData->__SetField(HX_("assets",83,48,03,4c),::haxe::Serializer_obj::run(this->assets),hx::paccDynamic);
HXLINE( 145)		manifestData->__SetField(HX_("rootPath",e7,b8,88,e1),this->rootPath,hx::paccDynamic);
HXLINE( 147)		return ::haxe::format::JsonPrinter_obj::print(manifestData,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(AssetManifest_obj,serialize,return )

 ::lime::utils::AssetManifest AssetManifest_obj::fromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_42_fromBytes)
HXDLIN(  42)		if (hx::IsNotNull( bytes )) {
HXLINE(  44)			return ::lime::utils::AssetManifest_obj::parse(bytes->getString((int)0,bytes->length),rootPath);
            		}
            		else {
HXLINE(  48)			return null();
            		}
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromBytes,return )

 ::lime::utils::AssetManifest AssetManifest_obj::fromFile(::String path,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_55_fromFile)
HXLINE(  57)		path = ::lime::utils::AssetManifest_obj::_hx___resolvePath(path);
HXLINE(  58)		rootPath = ::lime::utils::AssetManifest_obj::_hx___resolveRootPath(rootPath,path);
HXLINE(  60)		if (hx::IsNull( path )) {
HXLINE(  60)			return null();
            		}
HXLINE(  62)		return ::lime::utils::AssetManifest_obj::fromBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path),rootPath);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromFile,return )

 ::lime::app::Future AssetManifest_obj::loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_69_loadFromBytes)
HXDLIN(  69)		return ::lime::app::Future_obj::withValue(::lime::utils::AssetManifest_obj::fromBytes(bytes,rootPath));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromBytes,return )

 ::lime::app::Future AssetManifest_obj::loadFromFile(::String path,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::String,rootPath) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::haxe::io::Bytes bytes){
            			HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_83_loadFromFile)
HXLINE(  83)			return ::lime::app::Future_obj::withValue(::lime::utils::AssetManifest_obj::fromBytes(bytes,rootPath));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_74_loadFromFile)
HXLINE(  76)		path = ::lime::utils::AssetManifest_obj::_hx___resolvePath(path);
HXLINE(  77)		rootPath = ::lime::utils::AssetManifest_obj::_hx___resolveRootPath(rootPath,path);
HXLINE(  79)		if (hx::IsNull( path )) {
HXLINE(  79)			return null();
            		}
HXLINE(  81)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0(rootPath)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromFile,return )

 ::lime::utils::AssetManifest AssetManifest_obj::parse(::String data,::String rootPath){
            	HX_GC_STACKFRAME(&_hx_pos_8a07fa6861abdf37_90_parse)
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (hx::IsNotNull( data )) {
HXLINE(  92)			_hx_tmp = (data == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  92)			_hx_tmp = true;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  92)			return null();
            		}
HXLINE(  96)		 ::Dynamic manifestData =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->parseRec();
HXLINE(  97)		 ::lime::utils::AssetManifest manifest =  ::lime::utils::AssetManifest_obj::__alloc( HX_CTX );
HXLINE(  99)		manifest->name = ( (::String)(manifestData->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE( 100)		manifest->libraryType = ( (::String)(manifestData->__Field(HX_("libraryType",55,df,f0,ae),hx::paccDynamic)) );
HXLINE( 101)		manifest->libraryArgs = ( (::Array< ::String >)(manifestData->__Field(HX_("libraryArgs",f8,79,5c,a2),hx::paccDynamic)) );
HXLINE( 102)		manifest->assets = ( (::cpp::VirtualArray)(::haxe::Unserializer_obj::run(( (::String)(manifestData->__Field(HX_("assets",83,48,03,4c),hx::paccDynamic)) ))) );
HXLINE( 104)		if (::Reflect_obj::hasField(manifestData,HX_("rootPath",e7,b8,88,e1))) {
HXLINE( 106)			manifest->rootPath = ( (::String)(manifestData->__Field(HX_("rootPath",e7,b8,88,e1),hx::paccDynamic)) );
            		}
HXLINE( 110)		bool _hx_tmp1;
HXDLIN( 110)		if (hx::IsNotNull( rootPath )) {
HXLINE( 110)			_hx_tmp1 = (rootPath != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 110)			_hx_tmp1 = false;
            		}
HXDLIN( 110)		if (_hx_tmp1) {
HXLINE( 112)			bool _hx_tmp2;
HXDLIN( 112)			if (hx::IsNotNull( manifest->rootPath )) {
HXLINE( 112)				_hx_tmp2 = (manifest->rootPath == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 112)				_hx_tmp2 = true;
            			}
HXDLIN( 112)			if (_hx_tmp2) {
HXLINE( 114)				manifest->rootPath = rootPath;
            			}
            			else {
HXLINE( 118)				manifest->rootPath = ((rootPath + HX_("/",2f,00,00,00)) + manifest->rootPath);
            			}
            		}
HXLINE( 124)		return manifest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,parse,return )

::String AssetManifest_obj::_hx___resolvePath(::String path){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_158___resolvePath)
HXLINE( 160)		if (hx::IsNull( path )) {
HXLINE( 160)			return null();
            		}
HXLINE( 162)		int queryIndex = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 163)		::String basePath;
HXLINE( 165)		if ((queryIndex > (int)-1)) {
HXLINE( 167)			basePath = path.substr((int)0,queryIndex);
            		}
            		else {
HXLINE( 171)			basePath = path;
            		}
HXLINE( 175)		::StringTools_obj::replace(basePath,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 177)		while(::StringTools_obj::endsWith(basePath,HX_("/",2f,00,00,00))){
HXLINE( 179)			basePath = basePath.substr((int)0,(basePath.length - (int)1));
            		}
HXLINE( 183)		if (::StringTools_obj::endsWith(basePath,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 185)			if ((queryIndex > (int)-1)) {
HXLINE( 187)				return ((basePath + HX_("/library.json",2a,a7,07,47)) + path.substr(queryIndex,null()));
            			}
            			else {
HXLINE( 191)				return (basePath + HX_("/library.json",2a,a7,07,47));
            			}
            		}
            		else {
HXLINE( 197)			return path;
            		}
HXLINE( 183)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetManifest_obj,_hx___resolvePath,return )

::String AssetManifest_obj::_hx___resolveRootPath(::String rootPath,::String path){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_204___resolveRootPath)
HXLINE( 206)		if (hx::IsNotNull( rootPath )) {
HXLINE( 206)			return rootPath;
            		}
HXLINE( 208)		int queryIndex = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 210)		if ((queryIndex > (int)-1)) {
HXLINE( 212)			rootPath = path.substr((int)0,queryIndex);
            		}
            		else {
HXLINE( 216)			rootPath = path;
            		}
HXLINE( 220)		::StringTools_obj::replace(rootPath,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 222)		while(::StringTools_obj::endsWith(rootPath,HX_("/",2f,00,00,00))){
HXLINE( 224)			if ((rootPath == HX_("/",2f,00,00,00))) {
HXLINE( 224)				return rootPath;
            			}
HXLINE( 225)			rootPath = rootPath.substr((int)0,(rootPath.length - (int)1));
            		}
HXLINE( 229)		if (::StringTools_obj::endsWith(rootPath,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 231)			return rootPath;
            		}
            		else {
HXLINE( 235)			return ::haxe::io::Path_obj::directory(rootPath);
            		}
HXLINE( 229)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,_hx___resolveRootPath,return )


hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__new() {
	hx::ObjectPtr< AssetManifest_obj > __this = new AssetManifest_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__alloc(hx::Ctx *_hx_ctx) {
	AssetManifest_obj *__this = (AssetManifest_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetManifest_obj), true, "lime.utils.AssetManifest"));
	*(void **)__this = AssetManifest_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetManifest_obj::AssetManifest_obj()
{
}

void AssetManifest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetManifest);
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(libraryArgs,"libraryArgs");
	HX_MARK_MEMBER_NAME(libraryType,"libraryType");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetManifest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(libraryArgs,"libraryArgs");
	HX_VISIT_MEMBER_NAME(libraryType,"libraryType");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
	HX_VISIT_MEMBER_NAME(version,"version");
}

hx::Val AssetManifest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return hx::Val( assets ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { return hx::Val( rootPath ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"serialize") ) { return hx::Val( serialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryArgs") ) { return hx::Val( libraryArgs ); }
		if (HX_FIELD_EQ(inName,"libraryType") ) { return hx::Val( libraryType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetManifest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__resolvePath") ) { outValue = _hx___resolvePath_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__resolveRootPath") ) { outValue = _hx___resolveRootPath_dyn(); return true; }
	}
	return false;
}

hx::Val AssetManifest_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryArgs") ) { libraryArgs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"libraryType") ) { libraryType=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetManifest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	outFields->push(HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2"));
	outFields->push(HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetManifest_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(AssetManifest_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(AssetManifest_obj,libraryArgs),HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2")},
	{hx::fsString,(int)offsetof(AssetManifest_obj,libraryType),HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae")},
	{hx::fsString,(int)offsetof(AssetManifest_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(AssetManifest_obj,rootPath),HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1")},
	{hx::fsInt,(int)offsetof(AssetManifest_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetManifest_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetManifest_obj_sMemberFields[] = {
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("libraryArgs","\xf8","\x79","\x5c","\xa2"),
	HX_HCSTRING("libraryType","\x55","\xdf","\xf0","\xae"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("rootPath","\xe7","\xb8","\x88","\xe1"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"),
	::String(null()) };

static void AssetManifest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetManifest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetManifest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetManifest_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetManifest_obj::__mClass;

static ::String AssetManifest_obj_sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("__resolvePath","\x91","\x4b","\x05","\x2e"),
	HX_HCSTRING("__resolveRootPath","\xd3","\x84","\xe3","\x75"),
	::String(null())
};

void AssetManifest_obj::__register()
{
	hx::Object *dummy = new AssetManifest_obj;
	AssetManifest_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.AssetManifest","\xc9","\x2e","\xb9","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetManifest_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetManifest_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AssetManifest_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetManifest_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetManifest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetManifest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetManifest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetManifest_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
