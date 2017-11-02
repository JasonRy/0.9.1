#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Rendering_CameraEvent2007842675.h"
#include "UnityEngine_UnityEngine_Rendering_RenderTargetIdent772440638.h"
#include "UnityEngine_UnityEngine_Rendering_GraphicsDeviceTyp872267891.h"

// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// HighlightingSystem.HighlightingBlitter
struct HighlightingBlitter_t2949110578;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Shader[]
struct ShaderU5BU5D_t1916779366;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.HashSet`1<UnityEngine.Camera>
struct HashSet_1_t2817889127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBase
struct  HighlightingBase_t336099813  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HighlightingSystem.HighlightingBase::offsetFactor
	float ___offsetFactor_9;
	// System.Single HighlightingSystem.HighlightingBase::offsetUnits
	float ___offsetUnits_10;
	// UnityEngine.Rendering.CommandBuffer HighlightingSystem.HighlightingBase::renderBuffer
	CommandBuffer_t1204166949 * ___renderBuffer_11;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedWidth
	int32_t ___cachedWidth_12;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedHeight
	int32_t ___cachedHeight_13;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedAA
	int32_t ___cachedAA_14;
	// System.Int32 HighlightingSystem.HighlightingBase::_downsampleFactor
	int32_t ____downsampleFactor_15;
	// System.Int32 HighlightingSystem.HighlightingBase::_iterations
	int32_t ____iterations_16;
	// System.Single HighlightingSystem.HighlightingBase::_blurMinSpread
	float ____blurMinSpread_17;
	// System.Single HighlightingSystem.HighlightingBase::_blurSpread
	float ____blurSpread_18;
	// System.Single HighlightingSystem.HighlightingBase::_blurIntensity
	float ____blurIntensity_19;
	// HighlightingSystem.HighlightingBlitter HighlightingSystem.HighlightingBase::_blitter
	HighlightingBlitter_t2949110578 * ____blitter_20;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::highlightingBufferID
	RenderTargetIdentifier_t772440638  ___highlightingBufferID_21;
	// UnityEngine.RenderTexture HighlightingSystem.HighlightingBase::highlightingBuffer
	RenderTexture_t2666733923 * ___highlightingBuffer_22;
	// UnityEngine.Camera HighlightingSystem.HighlightingBase::cam
	Camera_t189460977 * ___cam_23;
	// System.Boolean HighlightingSystem.HighlightingBase::isDepthAvailable
	bool ___isDepthAvailable_24;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::blurMaterial
	Material_t193706927 * ___blurMaterial_31;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::cutMaterial
	Material_t193706927 * ___cutMaterial_32;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::compMaterial
	Material_t193706927 * ___compMaterial_33;

public:
	inline static int32_t get_offset_of_offsetFactor_9() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___offsetFactor_9)); }
	inline float get_offsetFactor_9() const { return ___offsetFactor_9; }
	inline float* get_address_of_offsetFactor_9() { return &___offsetFactor_9; }
	inline void set_offsetFactor_9(float value)
	{
		___offsetFactor_9 = value;
	}

	inline static int32_t get_offset_of_offsetUnits_10() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___offsetUnits_10)); }
	inline float get_offsetUnits_10() const { return ___offsetUnits_10; }
	inline float* get_address_of_offsetUnits_10() { return &___offsetUnits_10; }
	inline void set_offsetUnits_10(float value)
	{
		___offsetUnits_10 = value;
	}

	inline static int32_t get_offset_of_renderBuffer_11() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___renderBuffer_11)); }
	inline CommandBuffer_t1204166949 * get_renderBuffer_11() const { return ___renderBuffer_11; }
	inline CommandBuffer_t1204166949 ** get_address_of_renderBuffer_11() { return &___renderBuffer_11; }
	inline void set_renderBuffer_11(CommandBuffer_t1204166949 * value)
	{
		___renderBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___renderBuffer_11, value);
	}

	inline static int32_t get_offset_of_cachedWidth_12() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cachedWidth_12)); }
	inline int32_t get_cachedWidth_12() const { return ___cachedWidth_12; }
	inline int32_t* get_address_of_cachedWidth_12() { return &___cachedWidth_12; }
	inline void set_cachedWidth_12(int32_t value)
	{
		___cachedWidth_12 = value;
	}

	inline static int32_t get_offset_of_cachedHeight_13() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cachedHeight_13)); }
	inline int32_t get_cachedHeight_13() const { return ___cachedHeight_13; }
	inline int32_t* get_address_of_cachedHeight_13() { return &___cachedHeight_13; }
	inline void set_cachedHeight_13(int32_t value)
	{
		___cachedHeight_13 = value;
	}

	inline static int32_t get_offset_of_cachedAA_14() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cachedAA_14)); }
	inline int32_t get_cachedAA_14() const { return ___cachedAA_14; }
	inline int32_t* get_address_of_cachedAA_14() { return &___cachedAA_14; }
	inline void set_cachedAA_14(int32_t value)
	{
		___cachedAA_14 = value;
	}

	inline static int32_t get_offset_of__downsampleFactor_15() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____downsampleFactor_15)); }
	inline int32_t get__downsampleFactor_15() const { return ____downsampleFactor_15; }
	inline int32_t* get_address_of__downsampleFactor_15() { return &____downsampleFactor_15; }
	inline void set__downsampleFactor_15(int32_t value)
	{
		____downsampleFactor_15 = value;
	}

	inline static int32_t get_offset_of__iterations_16() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____iterations_16)); }
	inline int32_t get__iterations_16() const { return ____iterations_16; }
	inline int32_t* get_address_of__iterations_16() { return &____iterations_16; }
	inline void set__iterations_16(int32_t value)
	{
		____iterations_16 = value;
	}

	inline static int32_t get_offset_of__blurMinSpread_17() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blurMinSpread_17)); }
	inline float get__blurMinSpread_17() const { return ____blurMinSpread_17; }
	inline float* get_address_of__blurMinSpread_17() { return &____blurMinSpread_17; }
	inline void set__blurMinSpread_17(float value)
	{
		____blurMinSpread_17 = value;
	}

	inline static int32_t get_offset_of__blurSpread_18() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blurSpread_18)); }
	inline float get__blurSpread_18() const { return ____blurSpread_18; }
	inline float* get_address_of__blurSpread_18() { return &____blurSpread_18; }
	inline void set__blurSpread_18(float value)
	{
		____blurSpread_18 = value;
	}

	inline static int32_t get_offset_of__blurIntensity_19() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blurIntensity_19)); }
	inline float get__blurIntensity_19() const { return ____blurIntensity_19; }
	inline float* get_address_of__blurIntensity_19() { return &____blurIntensity_19; }
	inline void set__blurIntensity_19(float value)
	{
		____blurIntensity_19 = value;
	}

	inline static int32_t get_offset_of__blitter_20() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ____blitter_20)); }
	inline HighlightingBlitter_t2949110578 * get__blitter_20() const { return ____blitter_20; }
	inline HighlightingBlitter_t2949110578 ** get_address_of__blitter_20() { return &____blitter_20; }
	inline void set__blitter_20(HighlightingBlitter_t2949110578 * value)
	{
		____blitter_20 = value;
		Il2CppCodeGenWriteBarrier(&____blitter_20, value);
	}

	inline static int32_t get_offset_of_highlightingBufferID_21() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___highlightingBufferID_21)); }
	inline RenderTargetIdentifier_t772440638  get_highlightingBufferID_21() const { return ___highlightingBufferID_21; }
	inline RenderTargetIdentifier_t772440638 * get_address_of_highlightingBufferID_21() { return &___highlightingBufferID_21; }
	inline void set_highlightingBufferID_21(RenderTargetIdentifier_t772440638  value)
	{
		___highlightingBufferID_21 = value;
	}

	inline static int32_t get_offset_of_highlightingBuffer_22() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___highlightingBuffer_22)); }
	inline RenderTexture_t2666733923 * get_highlightingBuffer_22() const { return ___highlightingBuffer_22; }
	inline RenderTexture_t2666733923 ** get_address_of_highlightingBuffer_22() { return &___highlightingBuffer_22; }
	inline void set_highlightingBuffer_22(RenderTexture_t2666733923 * value)
	{
		___highlightingBuffer_22 = value;
		Il2CppCodeGenWriteBarrier(&___highlightingBuffer_22, value);
	}

	inline static int32_t get_offset_of_cam_23() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cam_23)); }
	inline Camera_t189460977 * get_cam_23() const { return ___cam_23; }
	inline Camera_t189460977 ** get_address_of_cam_23() { return &___cam_23; }
	inline void set_cam_23(Camera_t189460977 * value)
	{
		___cam_23 = value;
		Il2CppCodeGenWriteBarrier(&___cam_23, value);
	}

	inline static int32_t get_offset_of_isDepthAvailable_24() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___isDepthAvailable_24)); }
	inline bool get_isDepthAvailable_24() const { return ___isDepthAvailable_24; }
	inline bool* get_address_of_isDepthAvailable_24() { return &___isDepthAvailable_24; }
	inline void set_isDepthAvailable_24(bool value)
	{
		___isDepthAvailable_24 = value;
	}

	inline static int32_t get_offset_of_blurMaterial_31() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___blurMaterial_31)); }
	inline Material_t193706927 * get_blurMaterial_31() const { return ___blurMaterial_31; }
	inline Material_t193706927 ** get_address_of_blurMaterial_31() { return &___blurMaterial_31; }
	inline void set_blurMaterial_31(Material_t193706927 * value)
	{
		___blurMaterial_31 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_31, value);
	}

	inline static int32_t get_offset_of_cutMaterial_32() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___cutMaterial_32)); }
	inline Material_t193706927 * get_cutMaterial_32() const { return ___cutMaterial_32; }
	inline Material_t193706927 ** get_address_of_cutMaterial_32() { return &___cutMaterial_32; }
	inline void set_cutMaterial_32(Material_t193706927 * value)
	{
		___cutMaterial_32 = value;
		Il2CppCodeGenWriteBarrier(&___cutMaterial_32, value);
	}

	inline static int32_t get_offset_of_compMaterial_33() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813, ___compMaterial_33)); }
	inline Material_t193706927 * get_compMaterial_33() const { return ___compMaterial_33; }
	inline Material_t193706927 ** get_address_of_compMaterial_33() { return &___compMaterial_33; }
	inline void set_compMaterial_33(Material_t193706927 * value)
	{
		___compMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___compMaterial_33, value);
	}
};

struct HighlightingBase_t336099813_StaticFields
{
public:
	// UnityEngine.Color HighlightingSystem.HighlightingBase::colorClear
	Color_t2020392075  ___colorClear_2;
	// System.String HighlightingSystem.HighlightingBase::renderBufferName
	String_t* ___renderBufferName_3;
	// UnityEngine.Matrix4x4 HighlightingSystem.HighlightingBase::identityMatrix
	Matrix4x4_t2933234003  ___identityMatrix_4;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::cameraTargetID
	RenderTargetIdentifier_t772440638  ___cameraTargetID_6;
	// UnityEngine.Mesh HighlightingSystem.HighlightingBase::quad
	Mesh_t1356156583 * ___quad_7;
	// UnityEngine.Rendering.GraphicsDeviceType HighlightingSystem.HighlightingBase::device
	int32_t ___device_8;
	// System.String[] HighlightingSystem.HighlightingBase::shaderPaths
	StringU5BU5D_t1642385972* ___shaderPaths_28;
	// UnityEngine.Shader[] HighlightingSystem.HighlightingBase::shaders
	ShaderU5BU5D_t1916779366* ___shaders_29;
	// UnityEngine.Material[] HighlightingSystem.HighlightingBase::materials
	MaterialU5BU5D_t3123989686* ___materials_30;
	// System.Boolean HighlightingSystem.HighlightingBase::initialized
	bool ___initialized_34;
	// System.Collections.Generic.HashSet`1<UnityEngine.Camera> HighlightingSystem.HighlightingBase::cameras
	HashSet_1_t2817889127 * ___cameras_35;

public:
	inline static int32_t get_offset_of_colorClear_2() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___colorClear_2)); }
	inline Color_t2020392075  get_colorClear_2() const { return ___colorClear_2; }
	inline Color_t2020392075 * get_address_of_colorClear_2() { return &___colorClear_2; }
	inline void set_colorClear_2(Color_t2020392075  value)
	{
		___colorClear_2 = value;
	}

	inline static int32_t get_offset_of_renderBufferName_3() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___renderBufferName_3)); }
	inline String_t* get_renderBufferName_3() const { return ___renderBufferName_3; }
	inline String_t** get_address_of_renderBufferName_3() { return &___renderBufferName_3; }
	inline void set_renderBufferName_3(String_t* value)
	{
		___renderBufferName_3 = value;
		Il2CppCodeGenWriteBarrier(&___renderBufferName_3, value);
	}

	inline static int32_t get_offset_of_identityMatrix_4() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___identityMatrix_4)); }
	inline Matrix4x4_t2933234003  get_identityMatrix_4() const { return ___identityMatrix_4; }
	inline Matrix4x4_t2933234003 * get_address_of_identityMatrix_4() { return &___identityMatrix_4; }
	inline void set_identityMatrix_4(Matrix4x4_t2933234003  value)
	{
		___identityMatrix_4 = value;
	}

	inline static int32_t get_offset_of_cameraTargetID_6() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___cameraTargetID_6)); }
	inline RenderTargetIdentifier_t772440638  get_cameraTargetID_6() const { return ___cameraTargetID_6; }
	inline RenderTargetIdentifier_t772440638 * get_address_of_cameraTargetID_6() { return &___cameraTargetID_6; }
	inline void set_cameraTargetID_6(RenderTargetIdentifier_t772440638  value)
	{
		___cameraTargetID_6 = value;
	}

	inline static int32_t get_offset_of_quad_7() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___quad_7)); }
	inline Mesh_t1356156583 * get_quad_7() const { return ___quad_7; }
	inline Mesh_t1356156583 ** get_address_of_quad_7() { return &___quad_7; }
	inline void set_quad_7(Mesh_t1356156583 * value)
	{
		___quad_7 = value;
		Il2CppCodeGenWriteBarrier(&___quad_7, value);
	}

	inline static int32_t get_offset_of_device_8() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___device_8)); }
	inline int32_t get_device_8() const { return ___device_8; }
	inline int32_t* get_address_of_device_8() { return &___device_8; }
	inline void set_device_8(int32_t value)
	{
		___device_8 = value;
	}

	inline static int32_t get_offset_of_shaderPaths_28() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___shaderPaths_28)); }
	inline StringU5BU5D_t1642385972* get_shaderPaths_28() const { return ___shaderPaths_28; }
	inline StringU5BU5D_t1642385972** get_address_of_shaderPaths_28() { return &___shaderPaths_28; }
	inline void set_shaderPaths_28(StringU5BU5D_t1642385972* value)
	{
		___shaderPaths_28 = value;
		Il2CppCodeGenWriteBarrier(&___shaderPaths_28, value);
	}

	inline static int32_t get_offset_of_shaders_29() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___shaders_29)); }
	inline ShaderU5BU5D_t1916779366* get_shaders_29() const { return ___shaders_29; }
	inline ShaderU5BU5D_t1916779366** get_address_of_shaders_29() { return &___shaders_29; }
	inline void set_shaders_29(ShaderU5BU5D_t1916779366* value)
	{
		___shaders_29 = value;
		Il2CppCodeGenWriteBarrier(&___shaders_29, value);
	}

	inline static int32_t get_offset_of_materials_30() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___materials_30)); }
	inline MaterialU5BU5D_t3123989686* get_materials_30() const { return ___materials_30; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_30() { return &___materials_30; }
	inline void set_materials_30(MaterialU5BU5D_t3123989686* value)
	{
		___materials_30 = value;
		Il2CppCodeGenWriteBarrier(&___materials_30, value);
	}

	inline static int32_t get_offset_of_initialized_34() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___initialized_34)); }
	inline bool get_initialized_34() const { return ___initialized_34; }
	inline bool* get_address_of_initialized_34() { return &___initialized_34; }
	inline void set_initialized_34(bool value)
	{
		___initialized_34 = value;
	}

	inline static int32_t get_offset_of_cameras_35() { return static_cast<int32_t>(offsetof(HighlightingBase_t336099813_StaticFields, ___cameras_35)); }
	inline HashSet_1_t2817889127 * get_cameras_35() const { return ___cameras_35; }
	inline HashSet_1_t2817889127 ** get_address_of_cameras_35() { return &___cameras_35; }
	inline void set_cameras_35(HashSet_1_t2817889127 * value)
	{
		___cameras_35 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
