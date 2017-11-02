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
// UnityEngine.Camera
struct Camera_t189460977;
// UISlider
struct UISlider_t2191058247;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Move
struct  Move_t686167475  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Move::EditerCamera
	Camera_t189460977 * ___EditerCamera_3;
	// System.Single Move::distance
	float ___distance_4;
	// System.Single Move::xSpeed
	float ___xSpeed_5;
	// System.Single Move::ySpeed
	float ___ySpeed_6;
	// System.Single Move::yMinLimit
	float ___yMinLimit_7;
	// System.Single Move::yMaxLimit
	float ___yMaxLimit_8;
	// System.Single Move::x
	float ___x_9;
	// System.Single Move::y
	float ___y_10;
	// UnityEngine.Vector2 Move::oldPosition1
	Vector2_t2243707579  ___oldPosition1_11;
	// UnityEngine.Vector2 Move::oldPosition2
	Vector2_t2243707579  ___oldPosition2_12;
	// System.Single Move::curDist
	float ___curDist_14;
	// System.Single Move::lastDist
	float ___lastDist_15;
	// UISlider Move::USd
	UISlider_t2191058247 * ___USd_16;
	// UnityEngine.Vector2 Move::tempPosition1
	Vector2_t2243707579  ___tempPosition1_17;
	// UnityEngine.Vector2 Move::tempPosition2
	Vector2_t2243707579  ___tempPosition2_18;
	// System.Boolean Move::isTouch
	bool ___isTouch_19;
	// System.Single Move::xxx
	float ___xxx_21;
	// System.Single Move::yyy
	float ___yyy_22;
	// System.Single Move::mouseDistance
	float ___mouseDistance_23;

public:
	inline static int32_t get_offset_of_EditerCamera_3() { return static_cast<int32_t>(offsetof(Move_t686167475, ___EditerCamera_3)); }
	inline Camera_t189460977 * get_EditerCamera_3() const { return ___EditerCamera_3; }
	inline Camera_t189460977 ** get_address_of_EditerCamera_3() { return &___EditerCamera_3; }
	inline void set_EditerCamera_3(Camera_t189460977 * value)
	{
		___EditerCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___EditerCamera_3, value);
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(Move_t686167475, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_xSpeed_5() { return static_cast<int32_t>(offsetof(Move_t686167475, ___xSpeed_5)); }
	inline float get_xSpeed_5() const { return ___xSpeed_5; }
	inline float* get_address_of_xSpeed_5() { return &___xSpeed_5; }
	inline void set_xSpeed_5(float value)
	{
		___xSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ySpeed_6() { return static_cast<int32_t>(offsetof(Move_t686167475, ___ySpeed_6)); }
	inline float get_ySpeed_6() const { return ___ySpeed_6; }
	inline float* get_address_of_ySpeed_6() { return &___ySpeed_6; }
	inline void set_ySpeed_6(float value)
	{
		___ySpeed_6 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_7() { return static_cast<int32_t>(offsetof(Move_t686167475, ___yMinLimit_7)); }
	inline float get_yMinLimit_7() const { return ___yMinLimit_7; }
	inline float* get_address_of_yMinLimit_7() { return &___yMinLimit_7; }
	inline void set_yMinLimit_7(float value)
	{
		___yMinLimit_7 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_8() { return static_cast<int32_t>(offsetof(Move_t686167475, ___yMaxLimit_8)); }
	inline float get_yMaxLimit_8() const { return ___yMaxLimit_8; }
	inline float* get_address_of_yMaxLimit_8() { return &___yMaxLimit_8; }
	inline void set_yMaxLimit_8(float value)
	{
		___yMaxLimit_8 = value;
	}

	inline static int32_t get_offset_of_x_9() { return static_cast<int32_t>(offsetof(Move_t686167475, ___x_9)); }
	inline float get_x_9() const { return ___x_9; }
	inline float* get_address_of_x_9() { return &___x_9; }
	inline void set_x_9(float value)
	{
		___x_9 = value;
	}

	inline static int32_t get_offset_of_y_10() { return static_cast<int32_t>(offsetof(Move_t686167475, ___y_10)); }
	inline float get_y_10() const { return ___y_10; }
	inline float* get_address_of_y_10() { return &___y_10; }
	inline void set_y_10(float value)
	{
		___y_10 = value;
	}

	inline static int32_t get_offset_of_oldPosition1_11() { return static_cast<int32_t>(offsetof(Move_t686167475, ___oldPosition1_11)); }
	inline Vector2_t2243707579  get_oldPosition1_11() const { return ___oldPosition1_11; }
	inline Vector2_t2243707579 * get_address_of_oldPosition1_11() { return &___oldPosition1_11; }
	inline void set_oldPosition1_11(Vector2_t2243707579  value)
	{
		___oldPosition1_11 = value;
	}

	inline static int32_t get_offset_of_oldPosition2_12() { return static_cast<int32_t>(offsetof(Move_t686167475, ___oldPosition2_12)); }
	inline Vector2_t2243707579  get_oldPosition2_12() const { return ___oldPosition2_12; }
	inline Vector2_t2243707579 * get_address_of_oldPosition2_12() { return &___oldPosition2_12; }
	inline void set_oldPosition2_12(Vector2_t2243707579  value)
	{
		___oldPosition2_12 = value;
	}

	inline static int32_t get_offset_of_curDist_14() { return static_cast<int32_t>(offsetof(Move_t686167475, ___curDist_14)); }
	inline float get_curDist_14() const { return ___curDist_14; }
	inline float* get_address_of_curDist_14() { return &___curDist_14; }
	inline void set_curDist_14(float value)
	{
		___curDist_14 = value;
	}

	inline static int32_t get_offset_of_lastDist_15() { return static_cast<int32_t>(offsetof(Move_t686167475, ___lastDist_15)); }
	inline float get_lastDist_15() const { return ___lastDist_15; }
	inline float* get_address_of_lastDist_15() { return &___lastDist_15; }
	inline void set_lastDist_15(float value)
	{
		___lastDist_15 = value;
	}

	inline static int32_t get_offset_of_USd_16() { return static_cast<int32_t>(offsetof(Move_t686167475, ___USd_16)); }
	inline UISlider_t2191058247 * get_USd_16() const { return ___USd_16; }
	inline UISlider_t2191058247 ** get_address_of_USd_16() { return &___USd_16; }
	inline void set_USd_16(UISlider_t2191058247 * value)
	{
		___USd_16 = value;
		Il2CppCodeGenWriteBarrier(&___USd_16, value);
	}

	inline static int32_t get_offset_of_tempPosition1_17() { return static_cast<int32_t>(offsetof(Move_t686167475, ___tempPosition1_17)); }
	inline Vector2_t2243707579  get_tempPosition1_17() const { return ___tempPosition1_17; }
	inline Vector2_t2243707579 * get_address_of_tempPosition1_17() { return &___tempPosition1_17; }
	inline void set_tempPosition1_17(Vector2_t2243707579  value)
	{
		___tempPosition1_17 = value;
	}

	inline static int32_t get_offset_of_tempPosition2_18() { return static_cast<int32_t>(offsetof(Move_t686167475, ___tempPosition2_18)); }
	inline Vector2_t2243707579  get_tempPosition2_18() const { return ___tempPosition2_18; }
	inline Vector2_t2243707579 * get_address_of_tempPosition2_18() { return &___tempPosition2_18; }
	inline void set_tempPosition2_18(Vector2_t2243707579  value)
	{
		___tempPosition2_18 = value;
	}

	inline static int32_t get_offset_of_isTouch_19() { return static_cast<int32_t>(offsetof(Move_t686167475, ___isTouch_19)); }
	inline bool get_isTouch_19() const { return ___isTouch_19; }
	inline bool* get_address_of_isTouch_19() { return &___isTouch_19; }
	inline void set_isTouch_19(bool value)
	{
		___isTouch_19 = value;
	}

	inline static int32_t get_offset_of_xxx_21() { return static_cast<int32_t>(offsetof(Move_t686167475, ___xxx_21)); }
	inline float get_xxx_21() const { return ___xxx_21; }
	inline float* get_address_of_xxx_21() { return &___xxx_21; }
	inline void set_xxx_21(float value)
	{
		___xxx_21 = value;
	}

	inline static int32_t get_offset_of_yyy_22() { return static_cast<int32_t>(offsetof(Move_t686167475, ___yyy_22)); }
	inline float get_yyy_22() const { return ___yyy_22; }
	inline float* get_address_of_yyy_22() { return &___yyy_22; }
	inline void set_yyy_22(float value)
	{
		___yyy_22 = value;
	}

	inline static int32_t get_offset_of_mouseDistance_23() { return static_cast<int32_t>(offsetof(Move_t686167475, ___mouseDistance_23)); }
	inline float get_mouseDistance_23() const { return ___mouseDistance_23; }
	inline float* get_address_of_mouseDistance_23() { return &___mouseDistance_23; }
	inline void set_mouseDistance_23(float value)
	{
		___mouseDistance_23 = value;
	}
};

struct Move_t686167475_StaticFields
{
public:
	// UnityEngine.Transform Move::target
	Transform_t3275118058 * ___target_2;
	// System.Single Move::yLength
	float ___yLength_13;
	// System.Boolean Move::isCamera
	bool ___isCamera_20;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Move_t686167475_StaticFields, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_yLength_13() { return static_cast<int32_t>(offsetof(Move_t686167475_StaticFields, ___yLength_13)); }
	inline float get_yLength_13() const { return ___yLength_13; }
	inline float* get_address_of_yLength_13() { return &___yLength_13; }
	inline void set_yLength_13(float value)
	{
		___yLength_13 = value;
	}

	inline static int32_t get_offset_of_isCamera_20() { return static_cast<int32_t>(offsetof(Move_t686167475_StaticFields, ___isCamera_20)); }
	inline bool get_isCamera_20() const { return ___isCamera_20; }
	inline bool* get_address_of_isCamera_20() { return &___isCamera_20; }
	inline void set_isCamera_20(bool value)
	{
		___isCamera_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
