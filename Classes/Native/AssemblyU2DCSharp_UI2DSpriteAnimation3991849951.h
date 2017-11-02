#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UI2DSprite
struct UI2DSprite_t1082505957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI2DSpriteAnimation
struct  UI2DSpriteAnimation_t3991849951  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UI2DSpriteAnimation::frameIndex
	int32_t ___frameIndex_2;
	// System.Int32 UI2DSpriteAnimation::framerate
	int32_t ___framerate_3;
	// System.Boolean UI2DSpriteAnimation::ignoreTimeScale
	bool ___ignoreTimeScale_4;
	// System.Boolean UI2DSpriteAnimation::loop
	bool ___loop_5;
	// UnityEngine.Sprite[] UI2DSpriteAnimation::frames
	SpriteU5BU5D_t3359083662* ___frames_6;
	// UnityEngine.SpriteRenderer UI2DSpriteAnimation::mUnitySprite
	SpriteRenderer_t1209076198 * ___mUnitySprite_7;
	// UI2DSprite UI2DSpriteAnimation::mNguiSprite
	UI2DSprite_t1082505957 * ___mNguiSprite_8;
	// System.Single UI2DSpriteAnimation::mUpdate
	float ___mUpdate_9;

public:
	inline static int32_t get_offset_of_frameIndex_2() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___frameIndex_2)); }
	inline int32_t get_frameIndex_2() const { return ___frameIndex_2; }
	inline int32_t* get_address_of_frameIndex_2() { return &___frameIndex_2; }
	inline void set_frameIndex_2(int32_t value)
	{
		___frameIndex_2 = value;
	}

	inline static int32_t get_offset_of_framerate_3() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___framerate_3)); }
	inline int32_t get_framerate_3() const { return ___framerate_3; }
	inline int32_t* get_address_of_framerate_3() { return &___framerate_3; }
	inline void set_framerate_3(int32_t value)
	{
		___framerate_3 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_4() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___ignoreTimeScale_4)); }
	inline bool get_ignoreTimeScale_4() const { return ___ignoreTimeScale_4; }
	inline bool* get_address_of_ignoreTimeScale_4() { return &___ignoreTimeScale_4; }
	inline void set_ignoreTimeScale_4(bool value)
	{
		___ignoreTimeScale_4 = value;
	}

	inline static int32_t get_offset_of_loop_5() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___loop_5)); }
	inline bool get_loop_5() const { return ___loop_5; }
	inline bool* get_address_of_loop_5() { return &___loop_5; }
	inline void set_loop_5(bool value)
	{
		___loop_5 = value;
	}

	inline static int32_t get_offset_of_frames_6() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___frames_6)); }
	inline SpriteU5BU5D_t3359083662* get_frames_6() const { return ___frames_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of_frames_6() { return &___frames_6; }
	inline void set_frames_6(SpriteU5BU5D_t3359083662* value)
	{
		___frames_6 = value;
		Il2CppCodeGenWriteBarrier(&___frames_6, value);
	}

	inline static int32_t get_offset_of_mUnitySprite_7() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mUnitySprite_7)); }
	inline SpriteRenderer_t1209076198 * get_mUnitySprite_7() const { return ___mUnitySprite_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_mUnitySprite_7() { return &___mUnitySprite_7; }
	inline void set_mUnitySprite_7(SpriteRenderer_t1209076198 * value)
	{
		___mUnitySprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___mUnitySprite_7, value);
	}

	inline static int32_t get_offset_of_mNguiSprite_8() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mNguiSprite_8)); }
	inline UI2DSprite_t1082505957 * get_mNguiSprite_8() const { return ___mNguiSprite_8; }
	inline UI2DSprite_t1082505957 ** get_address_of_mNguiSprite_8() { return &___mNguiSprite_8; }
	inline void set_mNguiSprite_8(UI2DSprite_t1082505957 * value)
	{
		___mNguiSprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___mNguiSprite_8, value);
	}

	inline static int32_t get_offset_of_mUpdate_9() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mUpdate_9)); }
	inline float get_mUpdate_9() const { return ___mUpdate_9; }
	inline float* get_address_of_mUpdate_9() { return &___mUpdate_9; }
	inline void set_mUpdate_9(float value)
	{
		___mUpdate_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
