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
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NumericalState
struct  NumericalState_t2395445239  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text NumericalState::maxValueTxt
	Text_t356221433 * ___maxValueTxt_2;
	// UnityEngine.UI.Text NumericalState::nowValueTxt
	Text_t356221433 * ___nowValueTxt_3;
	// System.Single NumericalState::startPosXValue
	float ___startPosXValue_4;
	// System.Single NumericalState::endPosXValue
	float ___endPosXValue_5;
	// UnityEngine.UI.Image NumericalState::barImage
	Image_t2042527209 * ___barImage_6;
	// System.Single NumericalState::maxPowerNum
	float ___maxPowerNum_7;
	// System.Boolean NumericalState::isOnline
	bool ___isOnline_8;

public:
	inline static int32_t get_offset_of_maxValueTxt_2() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___maxValueTxt_2)); }
	inline Text_t356221433 * get_maxValueTxt_2() const { return ___maxValueTxt_2; }
	inline Text_t356221433 ** get_address_of_maxValueTxt_2() { return &___maxValueTxt_2; }
	inline void set_maxValueTxt_2(Text_t356221433 * value)
	{
		___maxValueTxt_2 = value;
		Il2CppCodeGenWriteBarrier(&___maxValueTxt_2, value);
	}

	inline static int32_t get_offset_of_nowValueTxt_3() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___nowValueTxt_3)); }
	inline Text_t356221433 * get_nowValueTxt_3() const { return ___nowValueTxt_3; }
	inline Text_t356221433 ** get_address_of_nowValueTxt_3() { return &___nowValueTxt_3; }
	inline void set_nowValueTxt_3(Text_t356221433 * value)
	{
		___nowValueTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___nowValueTxt_3, value);
	}

	inline static int32_t get_offset_of_startPosXValue_4() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___startPosXValue_4)); }
	inline float get_startPosXValue_4() const { return ___startPosXValue_4; }
	inline float* get_address_of_startPosXValue_4() { return &___startPosXValue_4; }
	inline void set_startPosXValue_4(float value)
	{
		___startPosXValue_4 = value;
	}

	inline static int32_t get_offset_of_endPosXValue_5() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___endPosXValue_5)); }
	inline float get_endPosXValue_5() const { return ___endPosXValue_5; }
	inline float* get_address_of_endPosXValue_5() { return &___endPosXValue_5; }
	inline void set_endPosXValue_5(float value)
	{
		___endPosXValue_5 = value;
	}

	inline static int32_t get_offset_of_barImage_6() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___barImage_6)); }
	inline Image_t2042527209 * get_barImage_6() const { return ___barImage_6; }
	inline Image_t2042527209 ** get_address_of_barImage_6() { return &___barImage_6; }
	inline void set_barImage_6(Image_t2042527209 * value)
	{
		___barImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___barImage_6, value);
	}

	inline static int32_t get_offset_of_maxPowerNum_7() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___maxPowerNum_7)); }
	inline float get_maxPowerNum_7() const { return ___maxPowerNum_7; }
	inline float* get_address_of_maxPowerNum_7() { return &___maxPowerNum_7; }
	inline void set_maxPowerNum_7(float value)
	{
		___maxPowerNum_7 = value;
	}

	inline static int32_t get_offset_of_isOnline_8() { return static_cast<int32_t>(offsetof(NumericalState_t2395445239, ___isOnline_8)); }
	inline bool get_isOnline_8() const { return ___isOnline_8; }
	inline bool* get_address_of_isOnline_8() { return &___isOnline_8; }
	inline void set_isOnline_8(bool value)
	{
		___isOnline_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
