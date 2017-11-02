﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection1824020367.h"

// UIProgressBar
struct UIProgressBar_t3824507790;
// UIProgressBar/OnDragFinished
struct OnDragFinished_t2651612482;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIProgressBar
struct  UIProgressBar_t3824507790  : public UIWidgetContainer_t701016325
{
public:
	// UIProgressBar/OnDragFinished UIProgressBar::onDragFinished
	OnDragFinished_t2651612482 * ___onDragFinished_3;
	// UnityEngine.Transform UIProgressBar::thumb
	Transform_t3275118058 * ___thumb_4;
	// UIWidget UIProgressBar::mBG
	UIWidget_t1453041918 * ___mBG_5;
	// UIWidget UIProgressBar::mFG
	UIWidget_t1453041918 * ___mFG_6;
	// System.Single UIProgressBar::mValue
	float ___mValue_7;
	// UIProgressBar/FillDirection UIProgressBar::mFill
	int32_t ___mFill_8;
	// System.Boolean UIProgressBar::mStarted
	bool ___mStarted_9;
	// UnityEngine.Transform UIProgressBar::mTrans
	Transform_t3275118058 * ___mTrans_10;
	// System.Boolean UIProgressBar::mIsDirty
	bool ___mIsDirty_11;
	// UnityEngine.Camera UIProgressBar::mCam
	Camera_t189460977 * ___mCam_12;
	// System.Single UIProgressBar::mOffset
	float ___mOffset_13;
	// System.Int32 UIProgressBar::numberOfSteps
	int32_t ___numberOfSteps_14;
	// System.Collections.Generic.List`1<EventDelegate> UIProgressBar::onChange
	List_1_t2865430313 * ___onChange_15;

public:
	inline static int32_t get_offset_of_onDragFinished_3() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___onDragFinished_3)); }
	inline OnDragFinished_t2651612482 * get_onDragFinished_3() const { return ___onDragFinished_3; }
	inline OnDragFinished_t2651612482 ** get_address_of_onDragFinished_3() { return &___onDragFinished_3; }
	inline void set_onDragFinished_3(OnDragFinished_t2651612482 * value)
	{
		___onDragFinished_3 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_3, value);
	}

	inline static int32_t get_offset_of_thumb_4() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___thumb_4)); }
	inline Transform_t3275118058 * get_thumb_4() const { return ___thumb_4; }
	inline Transform_t3275118058 ** get_address_of_thumb_4() { return &___thumb_4; }
	inline void set_thumb_4(Transform_t3275118058 * value)
	{
		___thumb_4 = value;
		Il2CppCodeGenWriteBarrier(&___thumb_4, value);
	}

	inline static int32_t get_offset_of_mBG_5() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mBG_5)); }
	inline UIWidget_t1453041918 * get_mBG_5() const { return ___mBG_5; }
	inline UIWidget_t1453041918 ** get_address_of_mBG_5() { return &___mBG_5; }
	inline void set_mBG_5(UIWidget_t1453041918 * value)
	{
		___mBG_5 = value;
		Il2CppCodeGenWriteBarrier(&___mBG_5, value);
	}

	inline static int32_t get_offset_of_mFG_6() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mFG_6)); }
	inline UIWidget_t1453041918 * get_mFG_6() const { return ___mFG_6; }
	inline UIWidget_t1453041918 ** get_address_of_mFG_6() { return &___mFG_6; }
	inline void set_mFG_6(UIWidget_t1453041918 * value)
	{
		___mFG_6 = value;
		Il2CppCodeGenWriteBarrier(&___mFG_6, value);
	}

	inline static int32_t get_offset_of_mValue_7() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mValue_7)); }
	inline float get_mValue_7() const { return ___mValue_7; }
	inline float* get_address_of_mValue_7() { return &___mValue_7; }
	inline void set_mValue_7(float value)
	{
		___mValue_7 = value;
	}

	inline static int32_t get_offset_of_mFill_8() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mFill_8)); }
	inline int32_t get_mFill_8() const { return ___mFill_8; }
	inline int32_t* get_address_of_mFill_8() { return &___mFill_8; }
	inline void set_mFill_8(int32_t value)
	{
		___mFill_8 = value;
	}

	inline static int32_t get_offset_of_mStarted_9() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mStarted_9)); }
	inline bool get_mStarted_9() const { return ___mStarted_9; }
	inline bool* get_address_of_mStarted_9() { return &___mStarted_9; }
	inline void set_mStarted_9(bool value)
	{
		___mStarted_9 = value;
	}

	inline static int32_t get_offset_of_mTrans_10() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mTrans_10)); }
	inline Transform_t3275118058 * get_mTrans_10() const { return ___mTrans_10; }
	inline Transform_t3275118058 ** get_address_of_mTrans_10() { return &___mTrans_10; }
	inline void set_mTrans_10(Transform_t3275118058 * value)
	{
		___mTrans_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_10, value);
	}

	inline static int32_t get_offset_of_mIsDirty_11() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mIsDirty_11)); }
	inline bool get_mIsDirty_11() const { return ___mIsDirty_11; }
	inline bool* get_address_of_mIsDirty_11() { return &___mIsDirty_11; }
	inline void set_mIsDirty_11(bool value)
	{
		___mIsDirty_11 = value;
	}

	inline static int32_t get_offset_of_mCam_12() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mCam_12)); }
	inline Camera_t189460977 * get_mCam_12() const { return ___mCam_12; }
	inline Camera_t189460977 ** get_address_of_mCam_12() { return &___mCam_12; }
	inline void set_mCam_12(Camera_t189460977 * value)
	{
		___mCam_12 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_12, value);
	}

	inline static int32_t get_offset_of_mOffset_13() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___mOffset_13)); }
	inline float get_mOffset_13() const { return ___mOffset_13; }
	inline float* get_address_of_mOffset_13() { return &___mOffset_13; }
	inline void set_mOffset_13(float value)
	{
		___mOffset_13 = value;
	}

	inline static int32_t get_offset_of_numberOfSteps_14() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___numberOfSteps_14)); }
	inline int32_t get_numberOfSteps_14() const { return ___numberOfSteps_14; }
	inline int32_t* get_address_of_numberOfSteps_14() { return &___numberOfSteps_14; }
	inline void set_numberOfSteps_14(int32_t value)
	{
		___numberOfSteps_14 = value;
	}

	inline static int32_t get_offset_of_onChange_15() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790, ___onChange_15)); }
	inline List_1_t2865430313 * get_onChange_15() const { return ___onChange_15; }
	inline List_1_t2865430313 ** get_address_of_onChange_15() { return &___onChange_15; }
	inline void set_onChange_15(List_1_t2865430313 * value)
	{
		___onChange_15 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_15, value);
	}
};

struct UIProgressBar_t3824507790_StaticFields
{
public:
	// UIProgressBar UIProgressBar::current
	UIProgressBar_t3824507790 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIProgressBar_t3824507790_StaticFields, ___current_2)); }
	inline UIProgressBar_t3824507790 * get_current_2() const { return ___current_2; }
	inline UIProgressBar_t3824507790 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIProgressBar_t3824507790 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
