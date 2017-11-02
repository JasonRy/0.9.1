#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UICamera_ClickNotification3184017079.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/MouseOrTouch
struct  MouseOrTouch_t2470076277  : public Il2CppObject
{
public:
	// UnityEngine.KeyCode UICamera/MouseOrTouch::key
	int32_t ___key_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t2243707579  ___pos_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::lastPos
	Vector2_t2243707579  ___lastPos_2;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t2243707579  ___delta_3;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t2243707579  ___totalDelta_4;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t189460977 * ___pressedCam_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::last
	GameObject_t1756533147 * ___last_6;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t1756533147 * ___current_7;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t1756533147 * ___pressed_8;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t1756533147 * ___dragged_9;
	// System.Single UICamera/MouseOrTouch::pressTime
	float ___pressTime_10;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_11;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_12;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_13;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_14;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_15;
	// System.Int32 UICamera/MouseOrTouch::ignoreDelta
	int32_t ___ignoreDelta_16;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pos_1)); }
	inline Vector2_t2243707579  get_pos_1() const { return ___pos_1; }
	inline Vector2_t2243707579 * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Vector2_t2243707579  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_lastPos_2() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___lastPos_2)); }
	inline Vector2_t2243707579  get_lastPos_2() const { return ___lastPos_2; }
	inline Vector2_t2243707579 * get_address_of_lastPos_2() { return &___lastPos_2; }
	inline void set_lastPos_2(Vector2_t2243707579  value)
	{
		___lastPos_2 = value;
	}

	inline static int32_t get_offset_of_delta_3() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___delta_3)); }
	inline Vector2_t2243707579  get_delta_3() const { return ___delta_3; }
	inline Vector2_t2243707579 * get_address_of_delta_3() { return &___delta_3; }
	inline void set_delta_3(Vector2_t2243707579  value)
	{
		___delta_3 = value;
	}

	inline static int32_t get_offset_of_totalDelta_4() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___totalDelta_4)); }
	inline Vector2_t2243707579  get_totalDelta_4() const { return ___totalDelta_4; }
	inline Vector2_t2243707579 * get_address_of_totalDelta_4() { return &___totalDelta_4; }
	inline void set_totalDelta_4(Vector2_t2243707579  value)
	{
		___totalDelta_4 = value;
	}

	inline static int32_t get_offset_of_pressedCam_5() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressedCam_5)); }
	inline Camera_t189460977 * get_pressedCam_5() const { return ___pressedCam_5; }
	inline Camera_t189460977 ** get_address_of_pressedCam_5() { return &___pressedCam_5; }
	inline void set_pressedCam_5(Camera_t189460977 * value)
	{
		___pressedCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___pressedCam_5, value);
	}

	inline static int32_t get_offset_of_last_6() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___last_6)); }
	inline GameObject_t1756533147 * get_last_6() const { return ___last_6; }
	inline GameObject_t1756533147 ** get_address_of_last_6() { return &___last_6; }
	inline void set_last_6(GameObject_t1756533147 * value)
	{
		___last_6 = value;
		Il2CppCodeGenWriteBarrier(&___last_6, value);
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___current_7)); }
	inline GameObject_t1756533147 * get_current_7() const { return ___current_7; }
	inline GameObject_t1756533147 ** get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(GameObject_t1756533147 * value)
	{
		___current_7 = value;
		Il2CppCodeGenWriteBarrier(&___current_7, value);
	}

	inline static int32_t get_offset_of_pressed_8() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressed_8)); }
	inline GameObject_t1756533147 * get_pressed_8() const { return ___pressed_8; }
	inline GameObject_t1756533147 ** get_address_of_pressed_8() { return &___pressed_8; }
	inline void set_pressed_8(GameObject_t1756533147 * value)
	{
		___pressed_8 = value;
		Il2CppCodeGenWriteBarrier(&___pressed_8, value);
	}

	inline static int32_t get_offset_of_dragged_9() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___dragged_9)); }
	inline GameObject_t1756533147 * get_dragged_9() const { return ___dragged_9; }
	inline GameObject_t1756533147 ** get_address_of_dragged_9() { return &___dragged_9; }
	inline void set_dragged_9(GameObject_t1756533147 * value)
	{
		___dragged_9 = value;
		Il2CppCodeGenWriteBarrier(&___dragged_9, value);
	}

	inline static int32_t get_offset_of_pressTime_10() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressTime_10)); }
	inline float get_pressTime_10() const { return ___pressTime_10; }
	inline float* get_address_of_pressTime_10() { return &___pressTime_10; }
	inline void set_pressTime_10(float value)
	{
		___pressTime_10 = value;
	}

	inline static int32_t get_offset_of_clickTime_11() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___clickTime_11)); }
	inline float get_clickTime_11() const { return ___clickTime_11; }
	inline float* get_address_of_clickTime_11() { return &___clickTime_11; }
	inline void set_clickTime_11(float value)
	{
		___clickTime_11 = value;
	}

	inline static int32_t get_offset_of_clickNotification_12() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___clickNotification_12)); }
	inline int32_t get_clickNotification_12() const { return ___clickNotification_12; }
	inline int32_t* get_address_of_clickNotification_12() { return &___clickNotification_12; }
	inline void set_clickNotification_12(int32_t value)
	{
		___clickNotification_12 = value;
	}

	inline static int32_t get_offset_of_touchBegan_13() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___touchBegan_13)); }
	inline bool get_touchBegan_13() const { return ___touchBegan_13; }
	inline bool* get_address_of_touchBegan_13() { return &___touchBegan_13; }
	inline void set_touchBegan_13(bool value)
	{
		___touchBegan_13 = value;
	}

	inline static int32_t get_offset_of_pressStarted_14() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressStarted_14)); }
	inline bool get_pressStarted_14() const { return ___pressStarted_14; }
	inline bool* get_address_of_pressStarted_14() { return &___pressStarted_14; }
	inline void set_pressStarted_14(bool value)
	{
		___pressStarted_14 = value;
	}

	inline static int32_t get_offset_of_dragStarted_15() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___dragStarted_15)); }
	inline bool get_dragStarted_15() const { return ___dragStarted_15; }
	inline bool* get_address_of_dragStarted_15() { return &___dragStarted_15; }
	inline void set_dragStarted_15(bool value)
	{
		___dragStarted_15 = value;
	}

	inline static int32_t get_offset_of_ignoreDelta_16() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___ignoreDelta_16)); }
	inline int32_t get_ignoreDelta_16() const { return ___ignoreDelta_16; }
	inline int32_t* get_address_of_ignoreDelta_16() { return &___ignoreDelta_16; }
	inline void set_ignoreDelta_16(int32_t value)
	{
		___ignoreDelta_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
