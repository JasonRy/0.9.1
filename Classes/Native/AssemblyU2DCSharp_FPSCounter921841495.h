#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSCounter
struct  FPSCounter_t921841495  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.Single> FPSCounter::frameTimes
	List_1_t1445631064 * ___frameTimes_3;
	// System.Single FPSCounter::sum
	float ___sum_4;
	// System.Single FPSCounter::i
	float ___i_5;
	// System.Single FPSCounter::avgAcc
	float ___avgAcc_6;
	// System.Single FPSCounter::medAcc
	float ___medAcc_7;
	// UnityEngine.UI.Text FPSCounter::text
	Text_t356221433 * ___text_8;

public:
	inline static int32_t get_offset_of_frameTimes_3() { return static_cast<int32_t>(offsetof(FPSCounter_t921841495, ___frameTimes_3)); }
	inline List_1_t1445631064 * get_frameTimes_3() const { return ___frameTimes_3; }
	inline List_1_t1445631064 ** get_address_of_frameTimes_3() { return &___frameTimes_3; }
	inline void set_frameTimes_3(List_1_t1445631064 * value)
	{
		___frameTimes_3 = value;
		Il2CppCodeGenWriteBarrier(&___frameTimes_3, value);
	}

	inline static int32_t get_offset_of_sum_4() { return static_cast<int32_t>(offsetof(FPSCounter_t921841495, ___sum_4)); }
	inline float get_sum_4() const { return ___sum_4; }
	inline float* get_address_of_sum_4() { return &___sum_4; }
	inline void set_sum_4(float value)
	{
		___sum_4 = value;
	}

	inline static int32_t get_offset_of_i_5() { return static_cast<int32_t>(offsetof(FPSCounter_t921841495, ___i_5)); }
	inline float get_i_5() const { return ___i_5; }
	inline float* get_address_of_i_5() { return &___i_5; }
	inline void set_i_5(float value)
	{
		___i_5 = value;
	}

	inline static int32_t get_offset_of_avgAcc_6() { return static_cast<int32_t>(offsetof(FPSCounter_t921841495, ___avgAcc_6)); }
	inline float get_avgAcc_6() const { return ___avgAcc_6; }
	inline float* get_address_of_avgAcc_6() { return &___avgAcc_6; }
	inline void set_avgAcc_6(float value)
	{
		___avgAcc_6 = value;
	}

	inline static int32_t get_offset_of_medAcc_7() { return static_cast<int32_t>(offsetof(FPSCounter_t921841495, ___medAcc_7)); }
	inline float get_medAcc_7() const { return ___medAcc_7; }
	inline float* get_address_of_medAcc_7() { return &___medAcc_7; }
	inline void set_medAcc_7(float value)
	{
		___medAcc_7 = value;
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(FPSCounter_t921841495, ___text_8)); }
	inline Text_t356221433 * get_text_8() const { return ___text_8; }
	inline Text_t356221433 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(Text_t356221433 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier(&___text_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
