#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovementController
struct  MovementController_t61357913  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MovementController::moveX
	bool ___moveX_2;
	// System.Boolean MovementController::moveY
	bool ___moveY_3;
	// System.Boolean MovementController::moveZ
	bool ___moveZ_4;
	// System.Single MovementController::speed
	float ___speed_5;
	// UnityEngine.Vector3 MovementController::amplitude
	Vector3_t2243707580  ___amplitude_6;
	// UnityEngine.Transform MovementController::tr
	Transform_t3275118058 * ___tr_7;
	// System.Single MovementController::counter
	float ___counter_8;
	// UnityEngine.Vector3 MovementController::initialOffsets
	Vector3_t2243707580  ___initialOffsets_9;

public:
	inline static int32_t get_offset_of_moveX_2() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___moveX_2)); }
	inline bool get_moveX_2() const { return ___moveX_2; }
	inline bool* get_address_of_moveX_2() { return &___moveX_2; }
	inline void set_moveX_2(bool value)
	{
		___moveX_2 = value;
	}

	inline static int32_t get_offset_of_moveY_3() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___moveY_3)); }
	inline bool get_moveY_3() const { return ___moveY_3; }
	inline bool* get_address_of_moveY_3() { return &___moveY_3; }
	inline void set_moveY_3(bool value)
	{
		___moveY_3 = value;
	}

	inline static int32_t get_offset_of_moveZ_4() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___moveZ_4)); }
	inline bool get_moveZ_4() const { return ___moveZ_4; }
	inline bool* get_address_of_moveZ_4() { return &___moveZ_4; }
	inline void set_moveZ_4(bool value)
	{
		___moveZ_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_amplitude_6() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___amplitude_6)); }
	inline Vector3_t2243707580  get_amplitude_6() const { return ___amplitude_6; }
	inline Vector3_t2243707580 * get_address_of_amplitude_6() { return &___amplitude_6; }
	inline void set_amplitude_6(Vector3_t2243707580  value)
	{
		___amplitude_6 = value;
	}

	inline static int32_t get_offset_of_tr_7() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___tr_7)); }
	inline Transform_t3275118058 * get_tr_7() const { return ___tr_7; }
	inline Transform_t3275118058 ** get_address_of_tr_7() { return &___tr_7; }
	inline void set_tr_7(Transform_t3275118058 * value)
	{
		___tr_7 = value;
		Il2CppCodeGenWriteBarrier(&___tr_7, value);
	}

	inline static int32_t get_offset_of_counter_8() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___counter_8)); }
	inline float get_counter_8() const { return ___counter_8; }
	inline float* get_address_of_counter_8() { return &___counter_8; }
	inline void set_counter_8(float value)
	{
		___counter_8 = value;
	}

	inline static int32_t get_offset_of_initialOffsets_9() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___initialOffsets_9)); }
	inline Vector3_t2243707580  get_initialOffsets_9() const { return ___initialOffsets_9; }
	inline Vector3_t2243707580 * get_address_of_initialOffsets_9() { return &___initialOffsets_9; }
	inline void set_initialOffsets_9(Vector3_t2243707580  value)
	{
		___initialOffsets_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
