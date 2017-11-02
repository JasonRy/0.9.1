#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SESSAO
struct  SESSAO_t1622268250  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material SESSAO::material
	Material_t193706927 * ___material_2;
	// System.Boolean SESSAO::visualizeSSAO
	bool ___visualizeSSAO_3;
	// UnityEngine.Texture2D SESSAO::ditherTexture
	Texture2D_t3542995729 * ___ditherTexture_4;
	// UnityEngine.Texture2D SESSAO::ditherTextureSmall
	Texture2D_t3542995729 * ___ditherTextureSmall_5;
	// System.Boolean SESSAO::skipThisFrame
	bool ___skipThisFrame_6;
	// System.Single SESSAO::radius
	float ___radius_7;
	// System.Single SESSAO::bias
	float ___bias_8;
	// System.Single SESSAO::bilateralDepthTolerance
	float ___bilateralDepthTolerance_9;
	// System.Single SESSAO::zThickness
	float ___zThickness_10;
	// System.Single SESSAO::occlusionIntensity
	float ___occlusionIntensity_11;
	// System.Single SESSAO::sampleDistributionCurve
	float ___sampleDistributionCurve_12;
	// System.Single SESSAO::colorBleedAmount
	float ___colorBleedAmount_13;
	// System.Single SESSAO::brightnessThreshold
	float ___brightnessThreshold_14;
	// System.Single SESSAO::drawDistance
	float ___drawDistance_15;
	// System.Single SESSAO::drawDistanceFadeSize
	float ___drawDistanceFadeSize_16;
	// System.Boolean SESSAO::reduceSelfBleeding
	bool ___reduceSelfBleeding_17;
	// System.Boolean SESSAO::useDownsampling
	bool ___useDownsampling_18;
	// System.Boolean SESSAO::halfSampling
	bool ___halfSampling_19;
	// System.Boolean SESSAO::preserveDetails
	bool ___preserveDetails_20;
	// UnityEngine.Camera SESSAO::attachedCamera
	Camera_t189460977 * ___attachedCamera_21;
	// System.Object SESSAO::initChecker
	Il2CppObject * ___initChecker_22;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_visualizeSSAO_3() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___visualizeSSAO_3)); }
	inline bool get_visualizeSSAO_3() const { return ___visualizeSSAO_3; }
	inline bool* get_address_of_visualizeSSAO_3() { return &___visualizeSSAO_3; }
	inline void set_visualizeSSAO_3(bool value)
	{
		___visualizeSSAO_3 = value;
	}

	inline static int32_t get_offset_of_ditherTexture_4() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___ditherTexture_4)); }
	inline Texture2D_t3542995729 * get_ditherTexture_4() const { return ___ditherTexture_4; }
	inline Texture2D_t3542995729 ** get_address_of_ditherTexture_4() { return &___ditherTexture_4; }
	inline void set_ditherTexture_4(Texture2D_t3542995729 * value)
	{
		___ditherTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___ditherTexture_4, value);
	}

	inline static int32_t get_offset_of_ditherTextureSmall_5() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___ditherTextureSmall_5)); }
	inline Texture2D_t3542995729 * get_ditherTextureSmall_5() const { return ___ditherTextureSmall_5; }
	inline Texture2D_t3542995729 ** get_address_of_ditherTextureSmall_5() { return &___ditherTextureSmall_5; }
	inline void set_ditherTextureSmall_5(Texture2D_t3542995729 * value)
	{
		___ditherTextureSmall_5 = value;
		Il2CppCodeGenWriteBarrier(&___ditherTextureSmall_5, value);
	}

	inline static int32_t get_offset_of_skipThisFrame_6() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___skipThisFrame_6)); }
	inline bool get_skipThisFrame_6() const { return ___skipThisFrame_6; }
	inline bool* get_address_of_skipThisFrame_6() { return &___skipThisFrame_6; }
	inline void set_skipThisFrame_6(bool value)
	{
		___skipThisFrame_6 = value;
	}

	inline static int32_t get_offset_of_radius_7() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___radius_7)); }
	inline float get_radius_7() const { return ___radius_7; }
	inline float* get_address_of_radius_7() { return &___radius_7; }
	inline void set_radius_7(float value)
	{
		___radius_7 = value;
	}

	inline static int32_t get_offset_of_bias_8() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___bias_8)); }
	inline float get_bias_8() const { return ___bias_8; }
	inline float* get_address_of_bias_8() { return &___bias_8; }
	inline void set_bias_8(float value)
	{
		___bias_8 = value;
	}

	inline static int32_t get_offset_of_bilateralDepthTolerance_9() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___bilateralDepthTolerance_9)); }
	inline float get_bilateralDepthTolerance_9() const { return ___bilateralDepthTolerance_9; }
	inline float* get_address_of_bilateralDepthTolerance_9() { return &___bilateralDepthTolerance_9; }
	inline void set_bilateralDepthTolerance_9(float value)
	{
		___bilateralDepthTolerance_9 = value;
	}

	inline static int32_t get_offset_of_zThickness_10() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___zThickness_10)); }
	inline float get_zThickness_10() const { return ___zThickness_10; }
	inline float* get_address_of_zThickness_10() { return &___zThickness_10; }
	inline void set_zThickness_10(float value)
	{
		___zThickness_10 = value;
	}

	inline static int32_t get_offset_of_occlusionIntensity_11() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___occlusionIntensity_11)); }
	inline float get_occlusionIntensity_11() const { return ___occlusionIntensity_11; }
	inline float* get_address_of_occlusionIntensity_11() { return &___occlusionIntensity_11; }
	inline void set_occlusionIntensity_11(float value)
	{
		___occlusionIntensity_11 = value;
	}

	inline static int32_t get_offset_of_sampleDistributionCurve_12() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___sampleDistributionCurve_12)); }
	inline float get_sampleDistributionCurve_12() const { return ___sampleDistributionCurve_12; }
	inline float* get_address_of_sampleDistributionCurve_12() { return &___sampleDistributionCurve_12; }
	inline void set_sampleDistributionCurve_12(float value)
	{
		___sampleDistributionCurve_12 = value;
	}

	inline static int32_t get_offset_of_colorBleedAmount_13() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___colorBleedAmount_13)); }
	inline float get_colorBleedAmount_13() const { return ___colorBleedAmount_13; }
	inline float* get_address_of_colorBleedAmount_13() { return &___colorBleedAmount_13; }
	inline void set_colorBleedAmount_13(float value)
	{
		___colorBleedAmount_13 = value;
	}

	inline static int32_t get_offset_of_brightnessThreshold_14() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___brightnessThreshold_14)); }
	inline float get_brightnessThreshold_14() const { return ___brightnessThreshold_14; }
	inline float* get_address_of_brightnessThreshold_14() { return &___brightnessThreshold_14; }
	inline void set_brightnessThreshold_14(float value)
	{
		___brightnessThreshold_14 = value;
	}

	inline static int32_t get_offset_of_drawDistance_15() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___drawDistance_15)); }
	inline float get_drawDistance_15() const { return ___drawDistance_15; }
	inline float* get_address_of_drawDistance_15() { return &___drawDistance_15; }
	inline void set_drawDistance_15(float value)
	{
		___drawDistance_15 = value;
	}

	inline static int32_t get_offset_of_drawDistanceFadeSize_16() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___drawDistanceFadeSize_16)); }
	inline float get_drawDistanceFadeSize_16() const { return ___drawDistanceFadeSize_16; }
	inline float* get_address_of_drawDistanceFadeSize_16() { return &___drawDistanceFadeSize_16; }
	inline void set_drawDistanceFadeSize_16(float value)
	{
		___drawDistanceFadeSize_16 = value;
	}

	inline static int32_t get_offset_of_reduceSelfBleeding_17() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___reduceSelfBleeding_17)); }
	inline bool get_reduceSelfBleeding_17() const { return ___reduceSelfBleeding_17; }
	inline bool* get_address_of_reduceSelfBleeding_17() { return &___reduceSelfBleeding_17; }
	inline void set_reduceSelfBleeding_17(bool value)
	{
		___reduceSelfBleeding_17 = value;
	}

	inline static int32_t get_offset_of_useDownsampling_18() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___useDownsampling_18)); }
	inline bool get_useDownsampling_18() const { return ___useDownsampling_18; }
	inline bool* get_address_of_useDownsampling_18() { return &___useDownsampling_18; }
	inline void set_useDownsampling_18(bool value)
	{
		___useDownsampling_18 = value;
	}

	inline static int32_t get_offset_of_halfSampling_19() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___halfSampling_19)); }
	inline bool get_halfSampling_19() const { return ___halfSampling_19; }
	inline bool* get_address_of_halfSampling_19() { return &___halfSampling_19; }
	inline void set_halfSampling_19(bool value)
	{
		___halfSampling_19 = value;
	}

	inline static int32_t get_offset_of_preserveDetails_20() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___preserveDetails_20)); }
	inline bool get_preserveDetails_20() const { return ___preserveDetails_20; }
	inline bool* get_address_of_preserveDetails_20() { return &___preserveDetails_20; }
	inline void set_preserveDetails_20(bool value)
	{
		___preserveDetails_20 = value;
	}

	inline static int32_t get_offset_of_attachedCamera_21() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___attachedCamera_21)); }
	inline Camera_t189460977 * get_attachedCamera_21() const { return ___attachedCamera_21; }
	inline Camera_t189460977 ** get_address_of_attachedCamera_21() { return &___attachedCamera_21; }
	inline void set_attachedCamera_21(Camera_t189460977 * value)
	{
		___attachedCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___attachedCamera_21, value);
	}

	inline static int32_t get_offset_of_initChecker_22() { return static_cast<int32_t>(offsetof(SESSAO_t1622268250, ___initChecker_22)); }
	inline Il2CppObject * get_initChecker_22() const { return ___initChecker_22; }
	inline Il2CppObject ** get_address_of_initChecker_22() { return &___initChecker_22; }
	inline void set_initChecker_22(Il2CppObject * value)
	{
		___initChecker_22 = value;
		Il2CppCodeGenWriteBarrier(&___initChecker_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
