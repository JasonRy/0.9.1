﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// DG.Tweening.EaseFunction
struct EaseFunction_t3306356708;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.EaseFactory/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t2066423765  : public Il2CppObject
{
public:
	// System.Single DG.Tweening.EaseFactory/<>c__DisplayClass2_0::motionDelay
	float ___motionDelay_0;
	// DG.Tweening.EaseFunction DG.Tweening.EaseFactory/<>c__DisplayClass2_0::customEase
	EaseFunction_t3306356708 * ___customEase_1;

public:
	inline static int32_t get_offset_of_motionDelay_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t2066423765, ___motionDelay_0)); }
	inline float get_motionDelay_0() const { return ___motionDelay_0; }
	inline float* get_address_of_motionDelay_0() { return &___motionDelay_0; }
	inline void set_motionDelay_0(float value)
	{
		___motionDelay_0 = value;
	}

	inline static int32_t get_offset_of_customEase_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t2066423765, ___customEase_1)); }
	inline EaseFunction_t3306356708 * get_customEase_1() const { return ___customEase_1; }
	inline EaseFunction_t3306356708 ** get_address_of_customEase_1() { return &___customEase_1; }
	inline void set_customEase_1(EaseFunction_t3306356708 * value)
	{
		___customEase_1 = value;
		Il2CppCodeGenWriteBarrier(&___customEase_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
