// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display3D_Context3D
#define INCLUDED_openfl_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,Context3DStateCache)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS3(openfl,display3D,textures,VideoTexture)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Context3D_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();

	public:
		enum { _hx_ClassId = 0x6271873d };

		void __construct( ::openfl::display::Stage3D stage3D, ::openfl::display::DisplayObjectRenderer renderer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Context3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.Context3D"); }
		static hx::ObjectPtr< Context3D_obj > __new( ::openfl::display::Stage3D stage3D, ::openfl::display::DisplayObjectRenderer renderer);
		static hx::ObjectPtr< Context3D_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage3D stage3D, ::openfl::display::DisplayObjectRenderer renderer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3D","\x40","\x3c","\xcf","\xb8"); }

		static void __boot();
		static bool supportsVideoTexture;
		static int MAX_SAMPLERS;
		static int MAX_ATTRIBUTES;
		static int MAX_PROGRAM_REGISTERS;
		static int TEXTURE_MAX_ANISOTROPY_EXT;
		static int DEPTH_STENCIL;
		static  ::openfl::_internal::stage3D::Context3DStateCache _hx___stateCache;
		int backBufferHeight;
		int backBufferWidth;
		::String driverInfo;
		int maxBackBufferHeight;
		int maxBackBufferWidth;
		 ::Dynamic profile;
		int totalGPUMemory;
		int _hx___backBufferAntiAlias;
		bool _hx___backBufferEnableDepthAndStencil;
		bool _hx___backBufferWantsBestResolution;
		 ::lime::graphics::opengl::GLObject _hx___depthRenderBuffer;
		 ::lime::graphics::opengl::GLObject _hx___depthStencilRenderBuffer;
		bool _hx___enableErrorChecking;
		 ::Dynamic _hx___culling;
		 ::lime::utils::ArrayBufferView _hx___fragmentConstants;
		 ::lime::graphics::opengl::GLObject _hx___framebuffer;
		int _hx___frameCount;
		int _hx___maxAnisotropyCubeTexture;
		int _hx___maxAnisotropyTexture2D;
		 ::lime::utils::ArrayBufferView _hx___positionScale;
		 ::openfl::display3D::Program3D _hx___program;
		 ::openfl::display::DisplayObjectRenderer _hx___renderer;
		 ::openfl::display3D::textures::TextureBase _hx___renderToTexture;
		bool _hx___rttDepthAndStencil;
		int _hx___samplerDirty;
		 ::openfl::_Vector::ObjectVector _hx___samplerTextures;
		::Array< ::Dynamic> _hx___samplerStates;
		 ::openfl::geom::Rectangle _hx___scissorRectangle;
		 ::openfl::display::Stage3D _hx___stage3D;
		 ::openfl::_Vector::IntVector _hx___stats;
		 ::openfl::_Vector::IntVector _hx___statsCache;
		 ::Dynamic _hx___stencilCompareMode;
		int _hx___stencilRef;
		int _hx___stencilReadMask;
		 ::lime::graphics::opengl::GLObject _hx___stencilRenderBuffer;
		bool _hx___supportsAnisotropicFiltering;
		bool _hx___supportsPackedDepthStencil;
		 ::lime::utils::ArrayBufferView _hx___vertexConstants;
		void clear(hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< int >  stencil,hx::Null< int >  mask);
		::Dynamic clear_dyn();

		void configureBackBuffer(int width,int height,int antiAlias,hx::Null< bool >  enableDepthAndStencil,hx::Null< bool >  wantsBestResolution,hx::Null< bool >  wantsBestResolutionOnBrowserZoom);
		::Dynamic configureBackBuffer_dyn();

		 ::openfl::display3D::textures::CubeTexture createCubeTexture(int size, ::Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		::Dynamic createCubeTexture_dyn();

		 ::openfl::display3D::IndexBuffer3D createIndexBuffer(int numIndices, ::Dynamic bufferUsage);
		::Dynamic createIndexBuffer_dyn();

		 ::openfl::display3D::Program3D createProgram();
		::Dynamic createProgram_dyn();

		 ::openfl::display3D::textures::RectangleTexture createRectangleTexture(int width,int height, ::Dynamic format,bool optimizeForRenderToTexture);
		::Dynamic createRectangleTexture_dyn();

		 ::openfl::display3D::textures::Texture createTexture(int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		::Dynamic createTexture_dyn();

		 ::openfl::display3D::VertexBuffer3D createVertexBuffer(int numVertices,int data32PerVertex, ::Dynamic bufferUsage);
		::Dynamic createVertexBuffer_dyn();

		 ::openfl::display3D::textures::VideoTexture createVideoTexture();
		::Dynamic createVideoTexture_dyn();

		void dispose(hx::Null< bool >  recreate);
		::Dynamic dispose_dyn();

		void drawToBitmapData( ::openfl::display::BitmapData destination);
		::Dynamic drawToBitmapData_dyn();

		void drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);
		::Dynamic drawTriangles_dyn();

		void present();
		::Dynamic present_dyn();

		void setBlendFactors( ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		::Dynamic setBlendFactors_dyn();

		void setColorMask(bool red,bool green,bool blue,bool alpha);
		::Dynamic setColorMask_dyn();

		void setCulling( ::Dynamic triangleFaceToCull);
		::Dynamic setCulling_dyn();

		void setDepthTest(bool depthMask, ::Dynamic passCompareMode);
		::Dynamic setDepthTest_dyn();

		void setProgram( ::openfl::display3D::Program3D program);
		::Dynamic setProgram_dyn();

		void setProgramConstantsFromByteArray( ::Dynamic programType,int firstRegister,int numRegisters, ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		::Dynamic setProgramConstantsFromByteArray_dyn();

		void setProgramConstantsFromMatrix( ::Dynamic programType,int firstRegister, ::openfl::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);
		::Dynamic setProgramConstantsFromMatrix_dyn();

		void setProgramConstantsFromVector( ::Dynamic programType,int firstRegister, ::openfl::_Vector::FloatVector data,hx::Null< int >  numRegisters);
		::Dynamic setProgramConstantsFromVector_dyn();

		void setRenderToBackBuffer();
		::Dynamic setRenderToBackBuffer_dyn();

		void setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  enableDepthAndStencil,hx::Null< int >  antiAlias,hx::Null< int >  surfaceSelector);
		::Dynamic setRenderToTexture_dyn();

		void setSamplerStateAt(int sampler, ::Dynamic wrap, ::Dynamic filter, ::Dynamic mipfilter);
		::Dynamic setSamplerStateAt_dyn();

		void setScissorRectangle( ::openfl::geom::Rectangle rectangle);
		::Dynamic setScissorRectangle_dyn();

		void setStencilActions( ::Dynamic triangleFace, ::Dynamic compareMode, ::Dynamic actionOnBothPass, ::Dynamic actionOnDepthFail, ::Dynamic actionOnDepthPassStencilFail);
		::Dynamic setStencilActions_dyn();

		void setStencilReferenceValue(int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask);
		::Dynamic setStencilReferenceValue_dyn();

		void setTextureAt(int sampler, ::openfl::display3D::textures::TextureBase texture);
		::Dynamic setTextureAt_dyn();

		void setVertexBufferAt(int index, ::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  bufferOffset, ::Dynamic format);
		::Dynamic setVertexBufferAt_dyn();

		void _hx___updateBackbufferViewport();
		::Dynamic _hx___updateBackbufferViewport_dyn();

		void _hx___updateBlendFactors();
		::Dynamic _hx___updateBlendFactors_dyn();

		void _hx___updateCulling();
		::Dynamic _hx___updateCulling_dyn();

		void _hx___updateDepthAndStencilState();
		::Dynamic _hx___updateDepthAndStencilState_dyn();

		void _hx___updateScissorRectangle();
		::Dynamic _hx___updateScissorRectangle_dyn();

		bool get_enableErrorChecking();
		::Dynamic get_enableErrorChecking_dyn();

		bool set_enableErrorChecking(bool value);
		::Dynamic set_enableErrorChecking_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3D */ 
