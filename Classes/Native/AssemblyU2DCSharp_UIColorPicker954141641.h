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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UIColorPicker
struct UIColorPicker_t954141641;
// UIWidget
struct UIWidget_t1453041918;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UnityEngine.Transform
struct Transform_t3275118058;
// UITexture
struct UITexture_t2537039969;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UICamera
struct UICamera_t1496819779;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIColorPicker
struct  UIColorPicker_t954141641  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color UIColorPicker::value
	Color_t2020392075  ___value_3;
	// UIWidget UIColorPicker::selectionWidget
	UIWidget_t1453041918 * ___selectionWidget_4;
	// System.Collections.Generic.List`1<EventDelegate> UIColorPicker::onChange
	List_1_t2865430313 * ___onChange_5;
	// UnityEngine.Transform UIColorPicker::mTrans
	Transform_t3275118058 * ___mTrans_6;
	// UITexture UIColorPicker::mUITex
	UITexture_t2537039969 * ___mUITex_7;
	// UnityEngine.Texture2D UIColorPicker::mTex
	Texture2D_t3542995729 * ___mTex_8;
	// UICamera UIColorPicker::mCam
	UICamera_t1496819779 * ___mCam_9;
	// UnityEngine.Vector2 UIColorPicker::mPos
	Vector2_t2243707579  ___mPos_10;
	// System.Int32 UIColorPicker::mWidth
	int32_t ___mWidth_11;
	// System.Int32 UIColorPicker::mHeight
	int32_t ___mHeight_12;

public:
	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___value_3)); }
	inline Color_t2020392075  get_value_3() const { return ___value_3; }
	inline Color_t2020392075 * get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(Color_t2020392075  value)
	{
		___value_3 = value;
	}

	inline static int32_t get_offset_of_selectionWidget_4() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___selectionWidget_4)); }
	inline UIWidget_t1453041918 * get_selectionWidget_4() const { return ___selectionWidget_4; }
	inline UIWidget_t1453041918 ** get_address_of_selectionWidget_4() { return &___selectionWidget_4; }
	inline void set_selectionWidget_4(UIWidget_t1453041918 * value)
	{
		___selectionWidget_4 = value;
		Il2CppCodeGenWriteBarrier(&___selectionWidget_4, value);
	}

	inline static int32_t get_offset_of_onChange_5() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___onChange_5)); }
	inline List_1_t2865430313 * get_onChange_5() const { return ___onChange_5; }
	inline List_1_t2865430313 ** get_address_of_onChange_5() { return &___onChange_5; }
	inline void set_onChange_5(List_1_t2865430313 * value)
	{
		___onChange_5 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_5, value);
	}

	inline static int32_t get_offset_of_mTrans_6() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mTrans_6)); }
	inline Transform_t3275118058 * get_mTrans_6() const { return ___mTrans_6; }
	inline Transform_t3275118058 ** get_address_of_mTrans_6() { return &___mTrans_6; }
	inline void set_mTrans_6(Transform_t3275118058 * value)
	{
		___mTrans_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_6, value);
	}

	inline static int32_t get_offset_of_mUITex_7() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mUITex_7)); }
	inline UITexture_t2537039969 * get_mUITex_7() const { return ___mUITex_7; }
	inline UITexture_t2537039969 ** get_address_of_mUITex_7() { return &___mUITex_7; }
	inline void set_mUITex_7(UITexture_t2537039969 * value)
	{
		___mUITex_7 = value;
		Il2CppCodeGenWriteBarrier(&___mUITex_7, value);
	}

	inline static int32_t get_offset_of_mTex_8() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mTex_8)); }
	inline Texture2D_t3542995729 * get_mTex_8() const { return ___mTex_8; }
	inline Texture2D_t3542995729 ** get_address_of_mTex_8() { return &___mTex_8; }
	inline void set_mTex_8(Texture2D_t3542995729 * value)
	{
		___mTex_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTex_8, value);
	}

	inline static int32_t get_offset_of_mCam_9() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mCam_9)); }
	inline UICamera_t1496819779 * get_mCam_9() const { return ___mCam_9; }
	inline UICamera_t1496819779 ** get_address_of_mCam_9() { return &___mCam_9; }
	inline void set_mCam_9(UICamera_t1496819779 * value)
	{
		___mCam_9 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_9, value);
	}

	inline static int32_t get_offset_of_mPos_10() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mPos_10)); }
	inline Vector2_t2243707579  get_mPos_10() const { return ___mPos_10; }
	inline Vector2_t2243707579 * get_address_of_mPos_10() { return &___mPos_10; }
	inline void set_mPos_10(Vector2_t2243707579  value)
	{
		___mPos_10 = value;
	}

	inline static int32_t get_offset_of_mWidth_11() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mWidth_11)); }
	inline int32_t get_mWidth_11() const { return ___mWidth_11; }
	inline int32_t* get_address_of_mWidth_11() { return &___mWidth_11; }
	inline void set_mWidth_11(int32_t value)
	{
		___mWidth_11 = value;
	}

	inline static int32_t get_offset_of_mHeight_12() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641, ___mHeight_12)); }
	inline int32_t get_mHeight_12() const { return ___mHeight_12; }
	inline int32_t* get_address_of_mHeight_12() { return &___mHeight_12; }
	inline void set_mHeight_12(int32_t value)
	{
		___mHeight_12 = value;
	}
};

struct UIColorPicker_t954141641_StaticFields
{
public:
	// UIColorPicker UIColorPicker::current
	UIColorPicker_t954141641 * ___current_2;
	// UnityEngine.AnimationCurve UIColorPicker::mRed
	AnimationCurve_t3306541151 * ___mRed_13;
	// UnityEngine.AnimationCurve UIColorPicker::mGreen
	AnimationCurve_t3306541151 * ___mGreen_14;
	// UnityEngine.AnimationCurve UIColorPicker::mBlue
	AnimationCurve_t3306541151 * ___mBlue_15;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641_StaticFields, ___current_2)); }
	inline UIColorPicker_t954141641 * get_current_2() const { return ___current_2; }
	inline UIColorPicker_t954141641 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIColorPicker_t954141641 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}

	inline static int32_t get_offset_of_mRed_13() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641_StaticFields, ___mRed_13)); }
	inline AnimationCurve_t3306541151 * get_mRed_13() const { return ___mRed_13; }
	inline AnimationCurve_t3306541151 ** get_address_of_mRed_13() { return &___mRed_13; }
	inline void set_mRed_13(AnimationCurve_t3306541151 * value)
	{
		___mRed_13 = value;
		Il2CppCodeGenWriteBarrier(&___mRed_13, value);
	}

	inline static int32_t get_offset_of_mGreen_14() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641_StaticFields, ___mGreen_14)); }
	inline AnimationCurve_t3306541151 * get_mGreen_14() const { return ___mGreen_14; }
	inline AnimationCurve_t3306541151 ** get_address_of_mGreen_14() { return &___mGreen_14; }
	inline void set_mGreen_14(AnimationCurve_t3306541151 * value)
	{
		___mGreen_14 = value;
		Il2CppCodeGenWriteBarrier(&___mGreen_14, value);
	}

	inline static int32_t get_offset_of_mBlue_15() { return static_cast<int32_t>(offsetof(UIColorPicker_t954141641_StaticFields, ___mBlue_15)); }
	inline AnimationCurve_t3306541151 * get_mBlue_15() const { return ___mBlue_15; }
	inline AnimationCurve_t3306541151 ** get_address_of_mBlue_15() { return &___mBlue_15; }
	inline void set_mBlue_15(AnimationCurve_t3306541151 * value)
	{
		___mBlue_15 = value;
		Il2CppCodeGenWriteBarrier(&___mBlue_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
