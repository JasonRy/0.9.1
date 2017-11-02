#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OutlineSystem
struct  OutlineSystem_t135695375  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean OutlineSystem::solidOutline
	bool ___solidOutline_2;
	// System.Single OutlineSystem::outlineStrength
	float ___outlineStrength_3;
	// UnityEngine.LayerMask OutlineSystem::outlineLayer
	LayerMask_t3188175821  ___outlineLayer_4;
	// UnityEngine.Color OutlineSystem::outlineColor
	Color_t2020392075  ___outlineColor_5;
	// System.Int32 OutlineSystem::downsampleAmount
	int32_t ___downsampleAmount_6;
	// System.Single OutlineSystem::outlineSize
	float ___outlineSize_7;
	// System.Int32 OutlineSystem::outlineIterations
	int32_t ___outlineIterations_8;
	// System.Single OutlineSystem::outlineUpscale
	float ___outlineUpscale_9;
	// UnityEngine.Camera OutlineSystem::mainCamera
	Camera_t189460977 * ___mainCamera_10;
	// UnityEngine.RenderTexture OutlineSystem::renTexInput
	RenderTexture_t2666733923 * ___renTexInput_11;
	// UnityEngine.RenderTexture OutlineSystem::renTexRecolor
	RenderTexture_t2666733923 * ___renTexRecolor_12;
	// UnityEngine.RenderTexture OutlineSystem::renTexDownsample
	RenderTexture_t2666733923 * ___renTexDownsample_13;
	// UnityEngine.RenderTexture OutlineSystem::renTexBlur
	RenderTexture_t2666733923 * ___renTexBlur_14;
	// UnityEngine.RenderTexture OutlineSystem::renTexOut
	RenderTexture_t2666733923 * ___renTexOut_15;
	// UnityEngine.Material OutlineSystem::blurMaterial
	Material_t193706927 * ___blurMaterial_16;
	// UnityEngine.Material OutlineSystem::outlineMaterial
	Material_t193706927 * ___outlineMaterial_17;
	// UnityEngine.Vector2 OutlineSystem::prevSize
	Vector2_t2243707579  ___prevSize_18;

public:
	inline static int32_t get_offset_of_solidOutline_2() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___solidOutline_2)); }
	inline bool get_solidOutline_2() const { return ___solidOutline_2; }
	inline bool* get_address_of_solidOutline_2() { return &___solidOutline_2; }
	inline void set_solidOutline_2(bool value)
	{
		___solidOutline_2 = value;
	}

	inline static int32_t get_offset_of_outlineStrength_3() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineStrength_3)); }
	inline float get_outlineStrength_3() const { return ___outlineStrength_3; }
	inline float* get_address_of_outlineStrength_3() { return &___outlineStrength_3; }
	inline void set_outlineStrength_3(float value)
	{
		___outlineStrength_3 = value;
	}

	inline static int32_t get_offset_of_outlineLayer_4() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineLayer_4)); }
	inline LayerMask_t3188175821  get_outlineLayer_4() const { return ___outlineLayer_4; }
	inline LayerMask_t3188175821 * get_address_of_outlineLayer_4() { return &___outlineLayer_4; }
	inline void set_outlineLayer_4(LayerMask_t3188175821  value)
	{
		___outlineLayer_4 = value;
	}

	inline static int32_t get_offset_of_outlineColor_5() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineColor_5)); }
	inline Color_t2020392075  get_outlineColor_5() const { return ___outlineColor_5; }
	inline Color_t2020392075 * get_address_of_outlineColor_5() { return &___outlineColor_5; }
	inline void set_outlineColor_5(Color_t2020392075  value)
	{
		___outlineColor_5 = value;
	}

	inline static int32_t get_offset_of_downsampleAmount_6() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___downsampleAmount_6)); }
	inline int32_t get_downsampleAmount_6() const { return ___downsampleAmount_6; }
	inline int32_t* get_address_of_downsampleAmount_6() { return &___downsampleAmount_6; }
	inline void set_downsampleAmount_6(int32_t value)
	{
		___downsampleAmount_6 = value;
	}

	inline static int32_t get_offset_of_outlineSize_7() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineSize_7)); }
	inline float get_outlineSize_7() const { return ___outlineSize_7; }
	inline float* get_address_of_outlineSize_7() { return &___outlineSize_7; }
	inline void set_outlineSize_7(float value)
	{
		___outlineSize_7 = value;
	}

	inline static int32_t get_offset_of_outlineIterations_8() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineIterations_8)); }
	inline int32_t get_outlineIterations_8() const { return ___outlineIterations_8; }
	inline int32_t* get_address_of_outlineIterations_8() { return &___outlineIterations_8; }
	inline void set_outlineIterations_8(int32_t value)
	{
		___outlineIterations_8 = value;
	}

	inline static int32_t get_offset_of_outlineUpscale_9() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineUpscale_9)); }
	inline float get_outlineUpscale_9() const { return ___outlineUpscale_9; }
	inline float* get_address_of_outlineUpscale_9() { return &___outlineUpscale_9; }
	inline void set_outlineUpscale_9(float value)
	{
		___outlineUpscale_9 = value;
	}

	inline static int32_t get_offset_of_mainCamera_10() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___mainCamera_10)); }
	inline Camera_t189460977 * get_mainCamera_10() const { return ___mainCamera_10; }
	inline Camera_t189460977 ** get_address_of_mainCamera_10() { return &___mainCamera_10; }
	inline void set_mainCamera_10(Camera_t189460977 * value)
	{
		___mainCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_10, value);
	}

	inline static int32_t get_offset_of_renTexInput_11() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___renTexInput_11)); }
	inline RenderTexture_t2666733923 * get_renTexInput_11() const { return ___renTexInput_11; }
	inline RenderTexture_t2666733923 ** get_address_of_renTexInput_11() { return &___renTexInput_11; }
	inline void set_renTexInput_11(RenderTexture_t2666733923 * value)
	{
		___renTexInput_11 = value;
		Il2CppCodeGenWriteBarrier(&___renTexInput_11, value);
	}

	inline static int32_t get_offset_of_renTexRecolor_12() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___renTexRecolor_12)); }
	inline RenderTexture_t2666733923 * get_renTexRecolor_12() const { return ___renTexRecolor_12; }
	inline RenderTexture_t2666733923 ** get_address_of_renTexRecolor_12() { return &___renTexRecolor_12; }
	inline void set_renTexRecolor_12(RenderTexture_t2666733923 * value)
	{
		___renTexRecolor_12 = value;
		Il2CppCodeGenWriteBarrier(&___renTexRecolor_12, value);
	}

	inline static int32_t get_offset_of_renTexDownsample_13() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___renTexDownsample_13)); }
	inline RenderTexture_t2666733923 * get_renTexDownsample_13() const { return ___renTexDownsample_13; }
	inline RenderTexture_t2666733923 ** get_address_of_renTexDownsample_13() { return &___renTexDownsample_13; }
	inline void set_renTexDownsample_13(RenderTexture_t2666733923 * value)
	{
		___renTexDownsample_13 = value;
		Il2CppCodeGenWriteBarrier(&___renTexDownsample_13, value);
	}

	inline static int32_t get_offset_of_renTexBlur_14() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___renTexBlur_14)); }
	inline RenderTexture_t2666733923 * get_renTexBlur_14() const { return ___renTexBlur_14; }
	inline RenderTexture_t2666733923 ** get_address_of_renTexBlur_14() { return &___renTexBlur_14; }
	inline void set_renTexBlur_14(RenderTexture_t2666733923 * value)
	{
		___renTexBlur_14 = value;
		Il2CppCodeGenWriteBarrier(&___renTexBlur_14, value);
	}

	inline static int32_t get_offset_of_renTexOut_15() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___renTexOut_15)); }
	inline RenderTexture_t2666733923 * get_renTexOut_15() const { return ___renTexOut_15; }
	inline RenderTexture_t2666733923 ** get_address_of_renTexOut_15() { return &___renTexOut_15; }
	inline void set_renTexOut_15(RenderTexture_t2666733923 * value)
	{
		___renTexOut_15 = value;
		Il2CppCodeGenWriteBarrier(&___renTexOut_15, value);
	}

	inline static int32_t get_offset_of_blurMaterial_16() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___blurMaterial_16)); }
	inline Material_t193706927 * get_blurMaterial_16() const { return ___blurMaterial_16; }
	inline Material_t193706927 ** get_address_of_blurMaterial_16() { return &___blurMaterial_16; }
	inline void set_blurMaterial_16(Material_t193706927 * value)
	{
		___blurMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_16, value);
	}

	inline static int32_t get_offset_of_outlineMaterial_17() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___outlineMaterial_17)); }
	inline Material_t193706927 * get_outlineMaterial_17() const { return ___outlineMaterial_17; }
	inline Material_t193706927 ** get_address_of_outlineMaterial_17() { return &___outlineMaterial_17; }
	inline void set_outlineMaterial_17(Material_t193706927 * value)
	{
		___outlineMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___outlineMaterial_17, value);
	}

	inline static int32_t get_offset_of_prevSize_18() { return static_cast<int32_t>(offsetof(OutlineSystem_t135695375, ___prevSize_18)); }
	inline Vector2_t2243707579  get_prevSize_18() const { return ___prevSize_18; }
	inline Vector2_t2243707579 * get_address_of_prevSize_18() { return &___prevSize_18; }
	inline void set_prevSize_18(Vector2_t2243707579  value)
	{
		___prevSize_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
