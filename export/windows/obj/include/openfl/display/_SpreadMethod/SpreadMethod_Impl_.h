// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display__SpreadMethod_SpreadMethod_Impl_
#define INCLUDED_openfl_display__SpreadMethod_SpreadMethod_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_SpreadMethod,SpreadMethod_Impl_)

namespace openfl{
namespace display{
namespace _SpreadMethod{


class HXCPP_CLASS_ATTRIBUTES SpreadMethod_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SpreadMethod_Impl__obj OBJ_;
		SpreadMethod_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5d5c0859 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._SpreadMethod.SpreadMethod_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._SpreadMethod.SpreadMethod_Impl_"); }

		hx::ObjectPtr< SpreadMethod_Impl__obj > __new() {
			hx::ObjectPtr< SpreadMethod_Impl__obj > __this = new SpreadMethod_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SpreadMethod_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			SpreadMethod_Impl__obj *__this = (SpreadMethod_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SpreadMethod_Impl__obj), false, "openfl.display._SpreadMethod.SpreadMethod_Impl_"));
			*(void **)__this = SpreadMethod_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpreadMethod_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SpreadMethod_Impl_","\x74","\xa5","\x98","\x88"); }

		static void __boot();
		static  ::Dynamic PAD;
		static  ::Dynamic REFLECT;
		static  ::Dynamic REPEAT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _SpreadMethod

#endif /* INCLUDED_openfl_display__SpreadMethod_SpreadMethod_Impl_ */ 
