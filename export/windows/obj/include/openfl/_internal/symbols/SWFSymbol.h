// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#define INCLUDED_openfl__internal_symbols_SWFSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLite)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace symbols{


class HXCPP_CLASS_ATTRIBUTES SWFSymbol_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SWFSymbol_obj OBJ_;
		SWFSymbol_obj();

	public:
		enum { _hx_ClassId = 0x5bdcc22b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.symbols.SWFSymbol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.symbols.SWFSymbol"); }
		static hx::ObjectPtr< SWFSymbol_obj > __new();
		static hx::ObjectPtr< SWFSymbol_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SWFSymbol_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SWFSymbol","\x1a","\x70","\xba","\x56"); }

		::String className;
		int id;
		virtual  ::openfl::display::DisplayObject _hx___createObject( ::openfl::_internal::swf::SWFLite swf);
		::Dynamic _hx___createObject_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols

#endif /* INCLUDED_openfl__internal_symbols_SWFSymbol */ 
