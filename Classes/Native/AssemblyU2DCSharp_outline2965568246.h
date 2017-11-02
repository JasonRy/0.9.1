#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// outline
struct  outline_t2965568246  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera outline::outlineCamera
	Camera_t189460977 * ___outlineCamera_2;
	// UnityEngine.Shader outline::solidColorShader
	Shader_t2430389951 * ___solidColorShader_3;
	// UnityEngine.Material outline::m_solid
	Material_t193706927 * ___m_solid_4;
	// UnityEngine.Shader outline::compositeShader
	Shader_t2430389951 * ___compositeShader_5;
	// UnityEngine.Material outline::m_composite
	Material_t193706927 * ___m_composite_6;
	// UnityEngine.Shader outline::blurShader
	Shader_t2430389951 * ___blurShader_7;
	// UnityEngine.Material outline::m_blur
	Material_t193706927 * ___m_blur_8;
	// UnityEngine.Shader outline::cutoffShader
	Shader_t2430389951 * ___cutoffShader_9;
	// UnityEngine.Material outline::m_cutoff
	Material_t193706927 * ___m_cutoff_10;
	// UnityEngine.RenderTexture outline::outlineRenderTex
	RenderTexture_t2666733923 * ___outlineRenderTex_11;
	// System.Int32 outline::Iterations
	int32_t ___Iterations_12;
	// System.Single outline::Spread
	float ___Spread_13;

public:
	inline static int32_t get_offset_of_outlineCamera_2() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___outlineCamera_2)); }
	inline Camera_t189460977 * get_outlineCamera_2() const { return ___outlineCamera_2; }
	inline Camera_t189460977 ** get_address_of_outlineCamera_2() { return &___outlineCamera_2; }
	inline void set_outlineCamera_2(Camera_t189460977 * value)
	{
		___outlineCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___outlineCamera_2, value);
	}

	inline static int32_t get_offset_of_solidColorShader_3() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___solidColorShader_3)); }
	inline Shader_t2430389951 * get_solidColorShader_3() const { return ___solidColorShader_3; }
	inline Shader_t2430389951 ** get_address_of_solidColorShader_3() { return &___solidColorShader_3; }
	inline void set_solidColorShader_3(Shader_t2430389951 * value)
	{
		___solidColorShader_3 = value;
		Il2CppCodeGenWriteBarrier(&___solidColorShader_3, value);
	}

	inline static int32_t get_offset_of_m_solid_4() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___m_solid_4)); }
	inline Material_t193706927 * get_m_solid_4() const { return ___m_solid_4; }
	inline Material_t193706927 ** get_address_of_m_solid_4() { return &___m_solid_4; }
	inline void set_m_solid_4(Material_t193706927 * value)
	{
		___m_solid_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_solid_4, value);
	}

	inline static int32_t get_offset_of_compositeShader_5() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___compositeShader_5)); }
	inline Shader_t2430389951 * get_compositeShader_5() const { return ___compositeShader_5; }
	inline Shader_t2430389951 ** get_address_of_compositeShader_5() { return &___compositeShader_5; }
	inline void set_compositeShader_5(Shader_t2430389951 * value)
	{
		___compositeShader_5 = value;
		Il2CppCodeGenWriteBarrier(&___compositeShader_5, value);
	}

	inline static int32_t get_offset_of_m_composite_6() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___m_composite_6)); }
	inline Material_t193706927 * get_m_composite_6() const { return ___m_composite_6; }
	inline Material_t193706927 ** get_address_of_m_composite_6() { return &___m_composite_6; }
	inline void set_m_composite_6(Material_t193706927 * value)
	{
		___m_composite_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_composite_6, value);
	}

	inline static int32_t get_offset_of_blurShader_7() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___blurShader_7)); }
	inline Shader_t2430389951 * get_blurShader_7() const { return ___blurShader_7; }
	inline Shader_t2430389951 ** get_address_of_blurShader_7() { return &___blurShader_7; }
	inline void set_blurShader_7(Shader_t2430389951 * value)
	{
		___blurShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_7, value);
	}

	inline static int32_t get_offset_of_m_blur_8() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___m_blur_8)); }
	inline Material_t193706927 * get_m_blur_8() const { return ___m_blur_8; }
	inline Material_t193706927 ** get_address_of_m_blur_8() { return &___m_blur_8; }
	inline void set_m_blur_8(Material_t193706927 * value)
	{
		___m_blur_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_blur_8, value);
	}

	inline static int32_t get_offset_of_cutoffShader_9() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___cutoffShader_9)); }
	inline Shader_t2430389951 * get_cutoffShader_9() const { return ___cutoffShader_9; }
	inline Shader_t2430389951 ** get_address_of_cutoffShader_9() { return &___cutoffShader_9; }
	inline void set_cutoffShader_9(Shader_t2430389951 * value)
	{
		___cutoffShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___cutoffShader_9, value);
	}

	inline static int32_t get_offset_of_m_cutoff_10() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___m_cutoff_10)); }
	inline Material_t193706927 * get_m_cutoff_10() const { return ___m_cutoff_10; }
	inline Material_t193706927 ** get_address_of_m_cutoff_10() { return &___m_cutoff_10; }
	inline void set_m_cutoff_10(Material_t193706927 * value)
	{
		___m_cutoff_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_cutoff_10, value);
	}

	inline static int32_t get_offset_of_outlineRenderTex_11() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___outlineRenderTex_11)); }
	inline RenderTexture_t2666733923 * get_outlineRenderTex_11() const { return ___outlineRenderTex_11; }
	inline RenderTexture_t2666733923 ** get_address_of_outlineRenderTex_11() { return &___outlineRenderTex_11; }
	inline void set_outlineRenderTex_11(RenderTexture_t2666733923 * value)
	{
		___outlineRenderTex_11 = value;
		Il2CppCodeGenWriteBarrier(&___outlineRenderTex_11, value);
	}

	inline static int32_t get_offset_of_Iterations_12() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___Iterations_12)); }
	inline int32_t get_Iterations_12() const { return ___Iterations_12; }
	inline int32_t* get_address_of_Iterations_12() { return &___Iterations_12; }
	inline void set_Iterations_12(int32_t value)
	{
		___Iterations_12 = value;
	}

	inline static int32_t get_offset_of_Spread_13() { return static_cast<int32_t>(offsetof(outline_t2965568246, ___Spread_13)); }
	inline float get_Spread_13() const { return ___Spread_13; }
	inline float* get_address_of_Spread_13() { return &___Spread_13; }
	inline void set_Spread_13(float value)
	{
		___Spread_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
