#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UISprite
struct UISprite_t603616735;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISpriteAnimation
struct  UISpriteAnimation_t97731357  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UISpriteAnimation::frameIndex
	int32_t ___frameIndex_2;
	// System.Int32 UISpriteAnimation::mFPS
	int32_t ___mFPS_3;
	// System.String UISpriteAnimation::mPrefix
	String_t* ___mPrefix_4;
	// System.Boolean UISpriteAnimation::mLoop
	bool ___mLoop_5;
	// System.Boolean UISpriteAnimation::mSnap
	bool ___mSnap_6;
	// UISprite UISpriteAnimation::mSprite
	UISprite_t603616735 * ___mSprite_7;
	// System.Single UISpriteAnimation::mDelta
	float ___mDelta_8;
	// System.Boolean UISpriteAnimation::mActive
	bool ___mActive_9;
	// System.Collections.Generic.List`1<System.String> UISpriteAnimation::mSpriteNames
	List_1_t1398341365 * ___mSpriteNames_10;

public:
	inline static int32_t get_offset_of_frameIndex_2() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___frameIndex_2)); }
	inline int32_t get_frameIndex_2() const { return ___frameIndex_2; }
	inline int32_t* get_address_of_frameIndex_2() { return &___frameIndex_2; }
	inline void set_frameIndex_2(int32_t value)
	{
		___frameIndex_2 = value;
	}

	inline static int32_t get_offset_of_mFPS_3() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mFPS_3)); }
	inline int32_t get_mFPS_3() const { return ___mFPS_3; }
	inline int32_t* get_address_of_mFPS_3() { return &___mFPS_3; }
	inline void set_mFPS_3(int32_t value)
	{
		___mFPS_3 = value;
	}

	inline static int32_t get_offset_of_mPrefix_4() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mPrefix_4)); }
	inline String_t* get_mPrefix_4() const { return ___mPrefix_4; }
	inline String_t** get_address_of_mPrefix_4() { return &___mPrefix_4; }
	inline void set_mPrefix_4(String_t* value)
	{
		___mPrefix_4 = value;
		Il2CppCodeGenWriteBarrier(&___mPrefix_4, value);
	}

	inline static int32_t get_offset_of_mLoop_5() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mLoop_5)); }
	inline bool get_mLoop_5() const { return ___mLoop_5; }
	inline bool* get_address_of_mLoop_5() { return &___mLoop_5; }
	inline void set_mLoop_5(bool value)
	{
		___mLoop_5 = value;
	}

	inline static int32_t get_offset_of_mSnap_6() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mSnap_6)); }
	inline bool get_mSnap_6() const { return ___mSnap_6; }
	inline bool* get_address_of_mSnap_6() { return &___mSnap_6; }
	inline void set_mSnap_6(bool value)
	{
		___mSnap_6 = value;
	}

	inline static int32_t get_offset_of_mSprite_7() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mSprite_7)); }
	inline UISprite_t603616735 * get_mSprite_7() const { return ___mSprite_7; }
	inline UISprite_t603616735 ** get_address_of_mSprite_7() { return &___mSprite_7; }
	inline void set_mSprite_7(UISprite_t603616735 * value)
	{
		___mSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_7, value);
	}

	inline static int32_t get_offset_of_mDelta_8() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mDelta_8)); }
	inline float get_mDelta_8() const { return ___mDelta_8; }
	inline float* get_address_of_mDelta_8() { return &___mDelta_8; }
	inline void set_mDelta_8(float value)
	{
		___mDelta_8 = value;
	}

	inline static int32_t get_offset_of_mActive_9() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mActive_9)); }
	inline bool get_mActive_9() const { return ___mActive_9; }
	inline bool* get_address_of_mActive_9() { return &___mActive_9; }
	inline void set_mActive_9(bool value)
	{
		___mActive_9 = value;
	}

	inline static int32_t get_offset_of_mSpriteNames_10() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t97731357, ___mSpriteNames_10)); }
	inline List_1_t1398341365 * get_mSpriteNames_10() const { return ___mSpriteNames_10; }
	inline List_1_t1398341365 ** get_address_of_mSpriteNames_10() { return &___mSpriteNames_10; }
	inline void set_mSpriteNames_10(List_1_t1398341365 * value)
	{
		___mSpriteNames_10 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteNames_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
