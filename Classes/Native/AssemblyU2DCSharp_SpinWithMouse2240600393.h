#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpinWithMouse
struct  SpinWithMouse_t2240600393  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform SpinWithMouse::target
	Transform_t3275118058 * ___target_2;
	// System.Single SpinWithMouse::speed
	float ___speed_3;
	// UnityEngine.Transform SpinWithMouse::mTrans
	Transform_t3275118058 * ___mTrans_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SpinWithMouse_t2240600393, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(SpinWithMouse_t2240600393, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(SpinWithMouse_t2240600393, ___mTrans_4)); }
	inline Transform_t3275118058 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t3275118058 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t3275118058 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
