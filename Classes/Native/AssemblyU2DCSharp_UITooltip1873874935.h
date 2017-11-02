﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UITooltip
struct UITooltip_t1873874935;
// UnityEngine.Camera
struct Camera_t189460977;
// UILabel
struct UILabel_t1795115428;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UISprite
struct UISprite_t603616735;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIWidget[]
struct UIWidgetU5BU5D_t1747340619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITooltip
struct  UITooltip_t1873874935  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UITooltip::uiCamera
	Camera_t189460977 * ___uiCamera_3;
	// UILabel UITooltip::text
	UILabel_t1795115428 * ___text_4;
	// UnityEngine.GameObject UITooltip::tooltipRoot
	GameObject_t1756533147 * ___tooltipRoot_5;
	// UISprite UITooltip::background
	UISprite_t603616735 * ___background_6;
	// System.Single UITooltip::appearSpeed
	float ___appearSpeed_7;
	// System.Boolean UITooltip::scalingTransitions
	bool ___scalingTransitions_8;
	// UnityEngine.GameObject UITooltip::mTooltip
	GameObject_t1756533147 * ___mTooltip_9;
	// UnityEngine.Transform UITooltip::mTrans
	Transform_t3275118058 * ___mTrans_10;
	// System.Single UITooltip::mTarget
	float ___mTarget_11;
	// System.Single UITooltip::mCurrent
	float ___mCurrent_12;
	// UnityEngine.Vector3 UITooltip::mPos
	Vector3_t2243707580  ___mPos_13;
	// UnityEngine.Vector3 UITooltip::mSize
	Vector3_t2243707580  ___mSize_14;
	// UIWidget[] UITooltip::mWidgets
	UIWidgetU5BU5D_t1747340619* ___mWidgets_15;

public:
	inline static int32_t get_offset_of_uiCamera_3() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___uiCamera_3)); }
	inline Camera_t189460977 * get_uiCamera_3() const { return ___uiCamera_3; }
	inline Camera_t189460977 ** get_address_of_uiCamera_3() { return &___uiCamera_3; }
	inline void set_uiCamera_3(Camera_t189460977 * value)
	{
		___uiCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___text_4)); }
	inline UILabel_t1795115428 * get_text_4() const { return ___text_4; }
	inline UILabel_t1795115428 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(UILabel_t1795115428 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}

	inline static int32_t get_offset_of_tooltipRoot_5() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___tooltipRoot_5)); }
	inline GameObject_t1756533147 * get_tooltipRoot_5() const { return ___tooltipRoot_5; }
	inline GameObject_t1756533147 ** get_address_of_tooltipRoot_5() { return &___tooltipRoot_5; }
	inline void set_tooltipRoot_5(GameObject_t1756533147 * value)
	{
		___tooltipRoot_5 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipRoot_5, value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___background_6)); }
	inline UISprite_t603616735 * get_background_6() const { return ___background_6; }
	inline UISprite_t603616735 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(UISprite_t603616735 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier(&___background_6, value);
	}

	inline static int32_t get_offset_of_appearSpeed_7() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___appearSpeed_7)); }
	inline float get_appearSpeed_7() const { return ___appearSpeed_7; }
	inline float* get_address_of_appearSpeed_7() { return &___appearSpeed_7; }
	inline void set_appearSpeed_7(float value)
	{
		___appearSpeed_7 = value;
	}

	inline static int32_t get_offset_of_scalingTransitions_8() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___scalingTransitions_8)); }
	inline bool get_scalingTransitions_8() const { return ___scalingTransitions_8; }
	inline bool* get_address_of_scalingTransitions_8() { return &___scalingTransitions_8; }
	inline void set_scalingTransitions_8(bool value)
	{
		___scalingTransitions_8 = value;
	}

	inline static int32_t get_offset_of_mTooltip_9() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mTooltip_9)); }
	inline GameObject_t1756533147 * get_mTooltip_9() const { return ___mTooltip_9; }
	inline GameObject_t1756533147 ** get_address_of_mTooltip_9() { return &___mTooltip_9; }
	inline void set_mTooltip_9(GameObject_t1756533147 * value)
	{
		___mTooltip_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTooltip_9, value);
	}

	inline static int32_t get_offset_of_mTrans_10() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mTrans_10)); }
	inline Transform_t3275118058 * get_mTrans_10() const { return ___mTrans_10; }
	inline Transform_t3275118058 ** get_address_of_mTrans_10() { return &___mTrans_10; }
	inline void set_mTrans_10(Transform_t3275118058 * value)
	{
		___mTrans_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_10, value);
	}

	inline static int32_t get_offset_of_mTarget_11() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mTarget_11)); }
	inline float get_mTarget_11() const { return ___mTarget_11; }
	inline float* get_address_of_mTarget_11() { return &___mTarget_11; }
	inline void set_mTarget_11(float value)
	{
		___mTarget_11 = value;
	}

	inline static int32_t get_offset_of_mCurrent_12() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mCurrent_12)); }
	inline float get_mCurrent_12() const { return ___mCurrent_12; }
	inline float* get_address_of_mCurrent_12() { return &___mCurrent_12; }
	inline void set_mCurrent_12(float value)
	{
		___mCurrent_12 = value;
	}

	inline static int32_t get_offset_of_mPos_13() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mPos_13)); }
	inline Vector3_t2243707580  get_mPos_13() const { return ___mPos_13; }
	inline Vector3_t2243707580 * get_address_of_mPos_13() { return &___mPos_13; }
	inline void set_mPos_13(Vector3_t2243707580  value)
	{
		___mPos_13 = value;
	}

	inline static int32_t get_offset_of_mSize_14() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mSize_14)); }
	inline Vector3_t2243707580  get_mSize_14() const { return ___mSize_14; }
	inline Vector3_t2243707580 * get_address_of_mSize_14() { return &___mSize_14; }
	inline void set_mSize_14(Vector3_t2243707580  value)
	{
		___mSize_14 = value;
	}

	inline static int32_t get_offset_of_mWidgets_15() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935, ___mWidgets_15)); }
	inline UIWidgetU5BU5D_t1747340619* get_mWidgets_15() const { return ___mWidgets_15; }
	inline UIWidgetU5BU5D_t1747340619** get_address_of_mWidgets_15() { return &___mWidgets_15; }
	inline void set_mWidgets_15(UIWidgetU5BU5D_t1747340619* value)
	{
		___mWidgets_15 = value;
		Il2CppCodeGenWriteBarrier(&___mWidgets_15, value);
	}
};

struct UITooltip_t1873874935_StaticFields
{
public:
	// UITooltip UITooltip::mInstance
	UITooltip_t1873874935 * ___mInstance_2;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(UITooltip_t1873874935_StaticFields, ___mInstance_2)); }
	inline UITooltip_t1873874935 * get_mInstance_2() const { return ___mInstance_2; }
	inline UITooltip_t1873874935 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(UITooltip_t1873874935 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
