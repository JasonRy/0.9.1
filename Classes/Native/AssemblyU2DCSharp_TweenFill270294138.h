#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UITweener2986641582.h"

// UIBasicSprite
struct UIBasicSprite_t754925213;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenFill
struct  TweenFill_t270294138  : public UITweener_t2986641582
{
public:
	// System.Single TweenFill::from
	float ___from_20;
	// System.Single TweenFill::to
	float ___to_21;
	// System.Boolean TweenFill::mCached
	bool ___mCached_22;
	// UIBasicSprite TweenFill::mSprite
	UIBasicSprite_t754925213 * ___mSprite_23;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenFill_t270294138, ___from_20)); }
	inline float get_from_20() const { return ___from_20; }
	inline float* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(float value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenFill_t270294138, ___to_21)); }
	inline float get_to_21() const { return ___to_21; }
	inline float* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(float value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mCached_22() { return static_cast<int32_t>(offsetof(TweenFill_t270294138, ___mCached_22)); }
	inline bool get_mCached_22() const { return ___mCached_22; }
	inline bool* get_address_of_mCached_22() { return &___mCached_22; }
	inline void set_mCached_22(bool value)
	{
		___mCached_22 = value;
	}

	inline static int32_t get_offset_of_mSprite_23() { return static_cast<int32_t>(offsetof(TweenFill_t270294138, ___mSprite_23)); }
	inline UIBasicSprite_t754925213 * get_mSprite_23() const { return ___mSprite_23; }
	inline UIBasicSprite_t754925213 ** get_address_of_mSprite_23() { return &___mSprite_23; }
	inline void set_mSprite_23(UIBasicSprite_t754925213 * value)
	{
		___mSprite_23 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
