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

// SelectObjectNew
struct  SelectObjectNew_t46616211  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SelectObjectNew::borderWidth
	int32_t ___borderWidth_2;
	// UnityEngine.Color SelectObjectNew::outterColor
	Color_t2020392075  ___outterColor_3;
	// UnityEngine.GameObject[] SelectObjectNew::targetsGroup1
	GameObjectU5BU5D_t3057952154* ___targetsGroup1_4;
	// UnityEngine.GameObject[] SelectObjectNew::targetsGroup2
	GameObjectU5BU5D_t3057952154* ___targetsGroup2_5;
	// UnityEngine.Camera SelectObjectNew::outterLineCamera
	Camera_t189460977 * ___outterLineCamera_6;
	// UnityEngine.Shader SelectObjectNew::compositeShader
	Shader_t2430389951 * ___compositeShader_7;
	// UnityEngine.Material SelectObjectNew::m_CompositeMaterial
	Material_t193706927 * ___m_CompositeMaterial_8;
	// UnityEngine.Shader SelectObjectNew::blurShader
	Shader_t2430389951 * ___blurShader_9;
	// UnityEngine.Material SelectObjectNew::m_BlurMaterial
	Material_t193706927 * ___m_BlurMaterial_10;
	// UnityEngine.Material SelectObjectNew::m_outterLineMat
	Material_t193706927 * ___m_outterLineMat_11;
	// UnityEngine.RenderTexture SelectObjectNew::outterLineTexture
	RenderTexture_t2666733923 * ___outterLineTexture_12;

public:
	inline static int32_t get_offset_of_borderWidth_2() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___borderWidth_2)); }
	inline int32_t get_borderWidth_2() const { return ___borderWidth_2; }
	inline int32_t* get_address_of_borderWidth_2() { return &___borderWidth_2; }
	inline void set_borderWidth_2(int32_t value)
	{
		___borderWidth_2 = value;
	}

	inline static int32_t get_offset_of_outterColor_3() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___outterColor_3)); }
	inline Color_t2020392075  get_outterColor_3() const { return ___outterColor_3; }
	inline Color_t2020392075 * get_address_of_outterColor_3() { return &___outterColor_3; }
	inline void set_outterColor_3(Color_t2020392075  value)
	{
		___outterColor_3 = value;
	}

	inline static int32_t get_offset_of_targetsGroup1_4() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___targetsGroup1_4)); }
	inline GameObjectU5BU5D_t3057952154* get_targetsGroup1_4() const { return ___targetsGroup1_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targetsGroup1_4() { return &___targetsGroup1_4; }
	inline void set_targetsGroup1_4(GameObjectU5BU5D_t3057952154* value)
	{
		___targetsGroup1_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup1_4, value);
	}

	inline static int32_t get_offset_of_targetsGroup2_5() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___targetsGroup2_5)); }
	inline GameObjectU5BU5D_t3057952154* get_targetsGroup2_5() const { return ___targetsGroup2_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targetsGroup2_5() { return &___targetsGroup2_5; }
	inline void set_targetsGroup2_5(GameObjectU5BU5D_t3057952154* value)
	{
		___targetsGroup2_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetsGroup2_5, value);
	}

	inline static int32_t get_offset_of_outterLineCamera_6() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___outterLineCamera_6)); }
	inline Camera_t189460977 * get_outterLineCamera_6() const { return ___outterLineCamera_6; }
	inline Camera_t189460977 ** get_address_of_outterLineCamera_6() { return &___outterLineCamera_6; }
	inline void set_outterLineCamera_6(Camera_t189460977 * value)
	{
		___outterLineCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineCamera_6, value);
	}

	inline static int32_t get_offset_of_compositeShader_7() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___compositeShader_7)); }
	inline Shader_t2430389951 * get_compositeShader_7() const { return ___compositeShader_7; }
	inline Shader_t2430389951 ** get_address_of_compositeShader_7() { return &___compositeShader_7; }
	inline void set_compositeShader_7(Shader_t2430389951 * value)
	{
		___compositeShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___compositeShader_7, value);
	}

	inline static int32_t get_offset_of_m_CompositeMaterial_8() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___m_CompositeMaterial_8)); }
	inline Material_t193706927 * get_m_CompositeMaterial_8() const { return ___m_CompositeMaterial_8; }
	inline Material_t193706927 ** get_address_of_m_CompositeMaterial_8() { return &___m_CompositeMaterial_8; }
	inline void set_m_CompositeMaterial_8(Material_t193706927 * value)
	{
		___m_CompositeMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CompositeMaterial_8, value);
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___blurShader_9)); }
	inline Shader_t2430389951 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t2430389951 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t2430389951 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_9, value);
	}

	inline static int32_t get_offset_of_m_BlurMaterial_10() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___m_BlurMaterial_10)); }
	inline Material_t193706927 * get_m_BlurMaterial_10() const { return ___m_BlurMaterial_10; }
	inline Material_t193706927 ** get_address_of_m_BlurMaterial_10() { return &___m_BlurMaterial_10; }
	inline void set_m_BlurMaterial_10(Material_t193706927 * value)
	{
		___m_BlurMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurMaterial_10, value);
	}

	inline static int32_t get_offset_of_m_outterLineMat_11() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___m_outterLineMat_11)); }
	inline Material_t193706927 * get_m_outterLineMat_11() const { return ___m_outterLineMat_11; }
	inline Material_t193706927 ** get_address_of_m_outterLineMat_11() { return &___m_outterLineMat_11; }
	inline void set_m_outterLineMat_11(Material_t193706927 * value)
	{
		___m_outterLineMat_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_outterLineMat_11, value);
	}

	inline static int32_t get_offset_of_outterLineTexture_12() { return static_cast<int32_t>(offsetof(SelectObjectNew_t46616211, ___outterLineTexture_12)); }
	inline RenderTexture_t2666733923 * get_outterLineTexture_12() const { return ___outterLineTexture_12; }
	inline RenderTexture_t2666733923 ** get_address_of_outterLineTexture_12() { return &___outterLineTexture_12; }
	inline void set_outterLineTexture_12(RenderTexture_t2666733923 * value)
	{
		___outterLineTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___outterLineTexture_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
