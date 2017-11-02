#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwoFingersMove
struct  TwoFingersMove_t263129793  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TwoFingersMove::yMinLimit
	float ___yMinLimit_4;
	// System.Single TwoFingersMove::yMaxLimit
	float ___yMaxLimit_5;
	// System.Single TwoFingersMove::x
	float ___x_6;
	// System.Single TwoFingersMove::y
	float ___y_7;
	// UnityEngine.Vector2 TwoFingersMove::oldPosition1
	Vector2_t2243707579  ___oldPosition1_8;
	// UnityEngine.Vector2 TwoFingersMove::oldPosition2
	Vector2_t2243707579  ___oldPosition2_9;
	// System.Single TwoFingersMove::curDist
	float ___curDist_11;
	// System.Single TwoFingersMove::lastDist
	float ___lastDist_12;
	// System.Boolean TwoFingersMove::isTarget
	bool ___isTarget_13;
	// UnityEngine.UI.Text TwoFingersMove::text
	Text_t356221433 * ___text_14;

public:
	inline static int32_t get_offset_of_yMinLimit_4() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___yMinLimit_4)); }
	inline float get_yMinLimit_4() const { return ___yMinLimit_4; }
	inline float* get_address_of_yMinLimit_4() { return &___yMinLimit_4; }
	inline void set_yMinLimit_4(float value)
	{
		___yMinLimit_4 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_5() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___yMaxLimit_5)); }
	inline float get_yMaxLimit_5() const { return ___yMaxLimit_5; }
	inline float* get_address_of_yMaxLimit_5() { return &___yMaxLimit_5; }
	inline void set_yMaxLimit_5(float value)
	{
		___yMaxLimit_5 = value;
	}

	inline static int32_t get_offset_of_x_6() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___x_6)); }
	inline float get_x_6() const { return ___x_6; }
	inline float* get_address_of_x_6() { return &___x_6; }
	inline void set_x_6(float value)
	{
		___x_6 = value;
	}

	inline static int32_t get_offset_of_y_7() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___y_7)); }
	inline float get_y_7() const { return ___y_7; }
	inline float* get_address_of_y_7() { return &___y_7; }
	inline void set_y_7(float value)
	{
		___y_7 = value;
	}

	inline static int32_t get_offset_of_oldPosition1_8() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___oldPosition1_8)); }
	inline Vector2_t2243707579  get_oldPosition1_8() const { return ___oldPosition1_8; }
	inline Vector2_t2243707579 * get_address_of_oldPosition1_8() { return &___oldPosition1_8; }
	inline void set_oldPosition1_8(Vector2_t2243707579  value)
	{
		___oldPosition1_8 = value;
	}

	inline static int32_t get_offset_of_oldPosition2_9() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___oldPosition2_9)); }
	inline Vector2_t2243707579  get_oldPosition2_9() const { return ___oldPosition2_9; }
	inline Vector2_t2243707579 * get_address_of_oldPosition2_9() { return &___oldPosition2_9; }
	inline void set_oldPosition2_9(Vector2_t2243707579  value)
	{
		___oldPosition2_9 = value;
	}

	inline static int32_t get_offset_of_curDist_11() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___curDist_11)); }
	inline float get_curDist_11() const { return ___curDist_11; }
	inline float* get_address_of_curDist_11() { return &___curDist_11; }
	inline void set_curDist_11(float value)
	{
		___curDist_11 = value;
	}

	inline static int32_t get_offset_of_lastDist_12() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___lastDist_12)); }
	inline float get_lastDist_12() const { return ___lastDist_12; }
	inline float* get_address_of_lastDist_12() { return &___lastDist_12; }
	inline void set_lastDist_12(float value)
	{
		___lastDist_12 = value;
	}

	inline static int32_t get_offset_of_isTarget_13() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___isTarget_13)); }
	inline bool get_isTarget_13() const { return ___isTarget_13; }
	inline bool* get_address_of_isTarget_13() { return &___isTarget_13; }
	inline void set_isTarget_13(bool value)
	{
		___isTarget_13 = value;
	}

	inline static int32_t get_offset_of_text_14() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793, ___text_14)); }
	inline Text_t356221433 * get_text_14() const { return ___text_14; }
	inline Text_t356221433 ** get_address_of_text_14() { return &___text_14; }
	inline void set_text_14(Text_t356221433 * value)
	{
		___text_14 = value;
		Il2CppCodeGenWriteBarrier(&___text_14, value);
	}
};

struct TwoFingersMove_t263129793_StaticFields
{
public:
	// UnityEngine.Transform TwoFingersMove::target
	Transform_t3275118058 * ___target_2;
	// System.Single TwoFingersMove::distance
	float ___distance_3;
	// System.Single TwoFingersMove::yLength
	float ___yLength_10;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793_StaticFields, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793_StaticFields, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_yLength_10() { return static_cast<int32_t>(offsetof(TwoFingersMove_t263129793_StaticFields, ___yLength_10)); }
	inline float get_yLength_10() const { return ___yLength_10; }
	inline float* get_address_of_yLength_10() { return &___yLength_10; }
	inline void set_yLength_10(float value)
	{
		___yLength_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
