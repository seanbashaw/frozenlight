// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_51__new,"openfl.utils._ByteArray.ByteArray_Impl_","_new",0x0c79e17f,"openfl.utils._ByteArray.ByteArray_Impl_._new","openfl/utils/ByteArray.hx",51,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_70_get,"openfl.utils._ByteArray.ByteArray_Impl_","get",0x47412238,"openfl.utils._ByteArray.ByteArray_Impl_.get","openfl/utils/ByteArray.hx",70,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_76_set,"openfl.utils._ByteArray.ByteArray_Impl_","set",0x474a3d44,"openfl.utils._ByteArray.ByteArray_Impl_.set","openfl/utils/ByteArray.hx",76,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_90_fromArrayBuffer,"openfl.utils._ByteArray.ByteArray_Impl_","fromArrayBuffer",0x09275ad1,"openfl.utils._ByteArray.ByteArray_Impl_.fromArrayBuffer","openfl/utils/ByteArray.hx",90,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_107_fromBytes,"openfl.utils._ByteArray.ByteArray_Impl_","fromBytes",0xcad779c3,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytes","openfl/utils/ByteArray.hx",107,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_136_fromBytesData,"openfl.utils._ByteArray.ByteArray_Impl_","fromBytesData",0x72e7998d,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytesData","openfl/utils/ByteArray.hx",136,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_153_fromFile,"openfl.utils._ByteArray.ByteArray_Impl_","fromFile",0x283dd024,"openfl.utils._ByteArray.ByteArray_Impl_.fromFile","openfl/utils/ByteArray.hx",153,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_160_loadFromBytes,"openfl.utils._ByteArray.ByteArray_Impl_","loadFromBytes",0x8c2c83bd,"openfl.utils._ByteArray.ByteArray_Impl_.loadFromBytes","openfl/utils/ByteArray.hx",160,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_172_loadFromFile,"openfl.utils._ByteArray.ByteArray_Impl_","loadFromFile",0x2a41a36a,"openfl.utils._ByteArray.ByteArray_Impl_.loadFromFile","openfl/utils/ByteArray.hx",172,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_184_fromLimeBytes,"openfl.utils._ByteArray.ByteArray_Impl_","fromLimeBytes",0xe68c926e,"openfl.utils._ByteArray.ByteArray_Impl_.fromLimeBytes","openfl/utils/ByteArray.hx",184,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_198_toArrayBuffer,"openfl.utils._ByteArray.ByteArray_Impl_","toArrayBuffer",0x56ee15e0,"openfl.utils._ByteArray.ByteArray_Impl_.toArrayBuffer","openfl/utils/ByteArray.hx",198,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_204_toBytePointer,"openfl.utils._ByteArray.ByteArray_Impl_","toBytePointer",0x1626f8fc,"openfl.utils._ByteArray.ByteArray_Impl_.toBytePointer","openfl/utils/ByteArray.hx",204,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_215_toDataPointer,"openfl.utils._ByteArray.ByteArray_Impl_","toDataPointer",0x2c1eca1a,"openfl.utils._ByteArray.ByteArray_Impl_.toDataPointer","openfl/utils/ByteArray.hx",215,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_233_toBytes,"openfl.utils._ByteArray.ByteArray_Impl_","toBytes",0xfc5d6f92,"openfl.utils._ByteArray.ByteArray_Impl_.toBytes","openfl/utils/ByteArray.hx",233,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_247_toBytesData,"openfl.utils._ByteArray.ByteArray_Impl_","toBytesData",0xa6fe22dc,"openfl.utils._ByteArray.ByteArray_Impl_.toBytesData","openfl/utils/ByteArray.hx",247,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_256_toLimeBytes,"openfl.utils._ByteArray.ByteArray_Impl_","toLimeBytes",0x1aa31bbd,"openfl.utils._ByteArray.ByteArray_Impl_.toLimeBytes","openfl/utils/ByteArray.hx",256,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_275_get_length,"openfl.utils._ByteArray.ByteArray_Impl_","get_length",0xd68ebb4d,"openfl.utils._ByteArray.ByteArray_Impl_.get_length","openfl/utils/ByteArray.hx",275,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_281_set_length,"openfl.utils._ByteArray.ByteArray_Impl_","set_length",0xda0c59c1,"openfl.utils._ByteArray.ByteArray_Impl_.set_length","openfl/utils/ByteArray.hx",281,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_44_boot,"openfl.utils._ByteArray.ByteArray_Impl_","boot",0x0e765050,"openfl.utils._ByteArray.ByteArray_Impl_.boot","openfl/utils/ByteArray.hx",44,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_46_boot,"openfl.utils._ByteArray.ByteArray_Impl_","boot",0x0e765050,"openfl.utils._ByteArray.ByteArray_Impl_.boot","openfl/utils/ByteArray.hx",46,0xaa5cee4a)
namespace openfl{
namespace utils{
namespace _ByteArray{

void ByteArray_Impl__obj::__construct() { }

Dynamic ByteArray_Impl__obj::__CreateEmpty() { return new ByteArray_Impl__obj; }

void *ByteArray_Impl__obj::_hx_vtable = 0;

Dynamic ByteArray_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ByteArray_Impl__obj > _hx_result = new ByteArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ByteArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ca37c26;
}

int ByteArray_Impl__obj::defaultObjectEncoding;

 ::lime::utils::BytePointerData ByteArray_Impl__obj::_hx___bytePointer;

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::_new(hx::Null< int >  __o_length){
int length = __o_length.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_67382ab39e6adff2_51__new)
HXDLIN(  51)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,length);
HXDLIN(  51)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,_new,return )

int ByteArray_Impl__obj::get( ::openfl::utils::ByteArrayData this1,int index){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_70_get)
HXDLIN(  70)		return this1->b->__get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,get,return )

int ByteArray_Impl__obj::set( ::openfl::utils::ByteArrayData this1,int index,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_76_set)
HXLINE(  82)		this1->_hx___resize((index + (int)1));
HXLINE(  83)		this1->b[index] = value;
HXLINE(  85)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_Impl__obj,set,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_90_fromArrayBuffer)
HXLINE(  92)		if (hx::IsNull( buffer )) {
HXLINE(  92)			return null();
            		}
HXLINE( 101)		return ::openfl::utils::ByteArrayData_obj::fromBytes(buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromArrayBuffer,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_107_fromBytes)
HXLINE( 109)		if (hx::IsNull( bytes )) {
HXLINE( 109)			return null();
            		}
HXLINE( 117)		if (::Std_obj::is(bytes,hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE( 119)			return ( ( ::openfl::utils::ByteArrayData)(bytes) );
            		}
            		else {
HXLINE( 126)			return ::openfl::utils::ByteArrayData_obj::fromBytes(bytes);
            		}
HXLINE( 117)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytes,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytesData(::Array< unsigned char > bytesData){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_136_fromBytesData)
HXLINE( 138)		if (hx::IsNull( bytesData )) {
HXLINE( 138)			return null();
            		}
HXLINE( 145)		return ::openfl::utils::ByteArrayData_obj::fromBytes(::haxe::io::Bytes_obj::ofData(bytesData));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytesData,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_153_fromFile)
HXDLIN( 153)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromFile,return )

 ::lime::app::Future ByteArray_Impl__obj::loadFromBytes( ::haxe::io::Bytes bytes){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::haxe::io::Bytes limeBytes){
            			HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_160_loadFromBytes)
HXLINE( 162)			 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(limeBytes);
HXLINE( 163)			return ::lime::app::Future_obj::withValue(byteArray);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_160_loadFromBytes)
HXDLIN( 160)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromBytes(bytes)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,loadFromBytes,return )

 ::lime::app::Future ByteArray_Impl__obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::haxe::io::Bytes limeBytes){
            			HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_172_loadFromFile)
HXLINE( 174)			 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(limeBytes);
HXLINE( 175)			return ::lime::app::Future_obj::withValue(byteArray);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_172_loadFromFile)
HXDLIN( 172)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,loadFromFile,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_184_fromLimeBytes)
HXDLIN( 184)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromLimeBytes,return )

 ::haxe::io::Bytes ByteArray_Impl__obj::toArrayBuffer( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_198_toArrayBuffer)
HXDLIN( 198)		return byteArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toArrayBuffer,return )

 ::lime::utils::BytePointerData ByteArray_Impl__obj::toBytePointer( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_204_toBytePointer)
HXLINE( 207)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer,byteArray,null(),null(),byteArray->position);
HXLINE( 209)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytePointer,return )

Float ByteArray_Impl__obj::toDataPointer( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_215_toDataPointer)
HXLINE( 218)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer,byteArray,null(),null(),byteArray->position);
HXLINE( 220)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toDataPointer,return )

 ::haxe::io::Bytes ByteArray_Impl__obj::toBytes( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_233_toBytes)
HXDLIN( 233)		return byteArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytes,return )

::Array< unsigned char > ByteArray_Impl__obj::toBytesData( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_247_toBytesData)
HXDLIN( 247)		return byteArray->b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytesData,return )

 ::haxe::io::Bytes ByteArray_Impl__obj::toLimeBytes( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_256_toLimeBytes)
HXDLIN( 256)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toLimeBytes,return )

int ByteArray_Impl__obj::get_length( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_275_get_length)
HXDLIN( 275)		if (hx::IsNull( this1 )) {
HXDLIN( 275)			return (int)0;
            		}
            		else {
HXDLIN( 275)			return this1->length;
            		}
HXDLIN( 275)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_length,return )

int ByteArray_Impl__obj::set_length( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_281_set_length)
HXLINE( 289)		if ((value > (int)0)) {
HXLINE( 291)			this1->_hx___resize(value);
HXLINE( 292)			if ((value < this1->position)) {
HXLINE( 292)				this1->position = value;
            			}
            		}
HXLINE( 296)		this1->length = value;
HXLINE( 299)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_length,return )


ByteArray_Impl__obj::ByteArray_Impl__obj()
{
}

bool ByteArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toBytesData") ) { outValue = toBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLimeBytes") ) { outValue = toLimeBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toArrayBuffer") ) { outValue = toArrayBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytePointer") ) { outValue = toBytePointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDataPointer") ) { outValue = toDataPointer_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ByteArray_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo ByteArray_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ByteArray_Impl__obj::defaultObjectEncoding,HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff")},
	{hx::fsObject /*::lime::utils::BytePointerData*/ ,(void *) &ByteArray_Impl__obj::_hx___bytePointer,HX_HCSTRING("__bytePointer","\x75","\x7b","\x8d","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ByteArray_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::_hx___bytePointer,"__bytePointer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ByteArray_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::_hx___bytePointer,"__bytePointer");
};

#endif

hx::Class ByteArray_Impl__obj::__mClass;

static ::String ByteArray_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff"),
	HX_HCSTRING("__bytePointer","\x75","\x7b","\x8d","\xc5"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fromArrayBuffer","\x2f","\xce","\x77","\xec"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromBytesData","\x6b","\xd9","\x41","\xdb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("fromLimeBytes","\x4c","\xd2","\xe6","\x4e"),
	HX_HCSTRING("toArrayBuffer","\xbe","\x55","\x48","\xbf"),
	HX_HCSTRING("toBytePointer","\xda","\x38","\x81","\x7e"),
	HX_HCSTRING("toDataPointer","\xf8","\x09","\x79","\x94"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("toBytesData","\x3a","\x0f","\x3e","\xce"),
	HX_HCSTRING("toLimeBytes","\x1b","\x08","\xe3","\x41"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null())
};

void ByteArray_Impl__obj::__register()
{
	hx::Object *dummy = new ByteArray_Impl__obj;
	ByteArray_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._ByteArray.ByteArray_Impl_","\x10","\x09","\x69","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ByteArray_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ByteArray_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ByteArray_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ByteArray_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ByteArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ByteArray_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ByteArray_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_44_boot)
HXDLIN(  44)		defaultObjectEncoding = (int)10;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_67382ab39e6adff2_46_boot)
HXDLIN(  46)			 ::lime::utils::BytePointerData this1 =  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,null(),(int)0);
HXDLIN(  46)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_46_boot)
HXDLIN(  46)		_hx___bytePointer =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray
