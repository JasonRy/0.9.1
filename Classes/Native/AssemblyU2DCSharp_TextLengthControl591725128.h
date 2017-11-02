#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextLengthControl
struct  TextLengthControl_t591725128  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text TextLengthControl::text
	Text_t356221433 * ___text_2;
	// System.Single TextLengthControl::length
	float ___length_3;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(TextLengthControl_t591725128, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(TextLengthControl_t591725128, ___length_3)); }
	inline float get_length_3() const { return ___length_3; }
	inline float* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(float value)
	{
		___length_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
