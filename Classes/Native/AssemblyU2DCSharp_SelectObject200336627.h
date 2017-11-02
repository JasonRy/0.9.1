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

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
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

// SelectObject
struct  SelectObject_t200336627  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SelectObject::Iterations
	int32_t ___Iterations_2;
	// System.Single SelectObject::Spread
	float ___Spread_3;
	// UnityEngine.Color SelectObject::outterColor
	Color_t2020392075  ___outterColor_4;
	// UnityEngine.GameObject[] SelectObject::targetsGroup1
	GameObjectU5BU5D_t3057952154* ___targetsGroup1_5;
	// UnityEngine.GameObject[] SelectObject::targetsGroup2
	GameObjectU5BU5D_t3057952154* ___targetsGroup2_6;
	// UnityEngine.Camera SelectObject::outterLineCamera
	Camera_t189460977 * ___outterLineCamera_7;
	// UnityEngine.Shader SelectObject::compositeShader
	Shader_t2430389951 * ___compositeShader_8;
	// UnityEngine.Material SelectObject::m_CompositeMaterial
	Material_t193706927 * ___m_CompositeMaterial_9;
	// UnityEngine.Shader SelectObject::blurShader
	Shader_t2430389951 * ___blurShader_10;
	// UnityEngine.Material SelectObject::m_BlurMaterial
	Material_t193706927 * ___m_BlurMaterial_11;
	// UnityEngine.Shader SelectObject::cutoffShader
	Shader_t2430389951 * ___cutoffShader_12;
	// UnityEngine.Material SelectObject::m_cutoffMaterial
	Material_t193706927 * ___m_cutoffMaterial_13;
	// UnityEngine.Material SelectObject::m_outterLineMat
	Material_t193706927 * ___m_outterLineMat_14;
	// UnityEngine.RenderTexture SelectObject::outterLineTexture
	RenderTexture_t2666733923 * ___outterLineTexture_15;

public:
	inline static int32_t get_offset_of_Iterations_2() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___Iterations_2)); }
	inline int32_t get_Iterations_2() const { return ___Iterations_2; }
	inline int32_t* get_address_of_Iterations_2() { return &___Iterations_2; }
	inline void set_Iterations_2(int32_t value)
	{
		___Iterations_2 = value;
	}

	inline static int32_t get_offset_of_Spread_3() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___Spread_3)); }
	inline float get_Spread_3() const { return ___Spread_3; }
	inline float* get_address_of_Spread_3() { return &___Spread_3; }
	inline void set_Spread_3(float value)
	{
		___Spread_3 = value;
	}

	inline static int32_t get_offset_of_outterColor_4() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___outterColor_4)); }
	inline Color_t2020392075  get_outterColor_4() const { return ___outterColor_4; }
	inline Color_t2020392075 * get_address_of_outterColor_4() { return &___outterColor_4; }
	inline void set_outterColor_4(Color_t2020392075  value)
	{
		___outterColor_4 = value;
	}

	inline static int32_t get_offset_of_targetsGroup1_5() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___targetsGroup1_5)); }
	inline GameObjectU5BU5D_t3057952154* get_targetsGroup1_5() const { return ___targetsGroup1_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targetsGroup1_5() { return &___targetsGroup1_5; }
	inline void set_targetsGroup1_5(GameObjectU5BU5D_t3057952154* value)
	{
		___targetsGroup1_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup1_5, value);
	}

	inline static int32_t get_offset_of_targetsGroup2_6() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___targetsGroup2_6)); }
	inline GameObjectU5BU5D_t3057952154* get_targetsGroup2_6() const { return ___targetsGroup2_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targetsGroup2_6() { return &___targetsGroup2_6; }
	inline void set_targetsGroup2_6(GameObjectU5BU5D_t3057952154* value)
	{
		___targetsGroup2_6 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup2_6, value);
	}

	inline static int32_t get_offset_of_outterLineCamera_7() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___outterLineCamera_7)); }
	inline Camera_t189460977 * get_outterLineCamera_7() const { return ___outterLineCamera_7; }
	inline Camera_t189460977 ** get_address_of_outterLineCamera_7() { return &___outterLineCamera_7; }
	inline void set_outterLineCamera_7(Camera_t189460977 * value)
	{
		___outterLineCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineCamera_7, value);
	}

	inline static int32_t get_offset_of_compositeShader_8() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___compositeShader_8)); }
	inline Shader_t2430389951 * get_compositeShader_8() const { return ___compositeShader_8; }
	inline Shader_t2430389951 ** get_address_of_compositeShader_8() { return &___compositeShader_8; }
	inline void set_compositeShader_8(Shader_t2430389951 * value)
	{
		___compositeShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___compositeShader_8, value);
	}

	inline static int32_t get_offset_of_m_CompositeMaterial_9() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___m_CompositeMaterial_9)); }
	inline Material_t193706927 * get_m_CompositeMaterial_9() const { return ___m_CompositeMaterial_9; }
	inline Material_t193706927 ** get_address_of_m_CompositeMaterial_9() { return &___m_CompositeMaterial_9; }
	inline void set_m_CompositeMaterial_9(Material_t193706927 * value)
	{
		___m_CompositeMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_CompositeMaterial_9, value);
	}

	inline static int32_t get_offset_of_blurShader_10() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___blurShader_10)); }
	inline Shader_t2430389951 * get_blurShader_10() const { return ___blurShader_10; }
	inline Shader_t2430389951 ** get_address_of_blurShader_10() { return &___blurShader_10; }
	inline void set_blurShader_10(Shader_t2430389951 * value)
	{
		___blurShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_10, value);
	}

	inline static int32_t get_offset_of_m_BlurMaterial_11() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___m_BlurMaterial_11)); }
	inline Material_t193706927 * get_m_BlurMaterial_11() const { return ___m_BlurMaterial_11; }
	inline Material_t193706927 ** get_address_of_m_BlurMaterial_11() { return &___m_BlurMaterial_11; }
	inline void set_m_BlurMaterial_11(Material_t193706927 * value)
	{
		___m_BlurMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurMaterial_11, value);
	}

	inline static int32_t get_offset_of_cutoffShader_12() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___cutoffShader_12)); }
	inline Shader_t2430389951 * get_cutoffShader_12() const { return ___cutoffShader_12; }
	inline Shader_t2430389951 ** get_address_of_cutoffShader_12() { return &___cutoffShader_12; }
	inline void set_cutoffShader_12(Shader_t2430389951 * value)
	{
		___cutoffShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___cutoffShader_12, value);
	}

	inline static int32_t get_offset_of_m_cutoffMaterial_13() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___m_cutoffMaterial_13)); }
	inline Material_t193706927 * get_m_cutoffMaterial_13() const { return ___m_cutoffMaterial_13; }
	inline Material_t193706927 ** get_address_of_m_cutoffMaterial_13() { return &___m_cutoffMaterial_13; }
	inline void set_m_cutoffMaterial_13(Material_t193706927 * value)
	{
		___m_cutoffMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_cutoffMaterial_13, value);
	}

	inline static int32_t get_offset_of_m_outterLineMat_14() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___m_outterLineMat_14)); }
	inline Material_t193706927 * get_m_outterLineMat_14() const { return ___m_outterLineMat_14; }
	inline Material_t193706927 ** get_address_of_m_outterLineMat_14() { return &___m_outterLineMat_14; }
	inline void set_m_outterLineMat_14(Material_t193706927 * value)
	{
		___m_outterLineMat_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_outterLineMat_14, value);
	}

	inline static int32_t get_offset_of_outterLineTexture_15() { return static_cast<int32_t>(offsetof(SelectObject_t200336627, ___outterLineTexture_15)); }
	inline RenderTexture_t2666733923 * get_outterLineTexture_15() const { return ___outterLineTexture_15; }
	inline RenderTexture_t2666733923 ** get_address_of_outterLineTexture_15() { return &___outterLineTexture_15; }
	inline void set_outterLineTexture_15(RenderTexture_t2666733923 * value)
	{
		___outterLineTexture_15 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineTexture_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
