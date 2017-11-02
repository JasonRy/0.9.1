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

// MoveCamera
struct  MoveCamera_t3193441886  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MoveCamera::smoothTime
	float ___smoothTime_2;
	// System.Single MoveCamera::xVelocity
	float ___xVelocity_4;
	// System.Single MoveCamera::yVelocity
	float ___yVelocity_5;
	// System.Single MoveCamera::zVelocity
	float ___zVelocity_6;
	// System.Single MoveCamera::xA
	float ___xA_7;
	// System.Single MoveCamera::yA
	float ___yA_8;
	// System.Single MoveCamera::zA
	float ___zA_9;
	// UnityEngine.Vector3 MoveCamera::vvv
	Vector3_t2243707580  ___vvv_10;

public:
	inline static int32_t get_offset_of_smoothTime_2() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___smoothTime_2)); }
	inline float get_smoothTime_2() const { return ___smoothTime_2; }
	inline float* get_address_of_smoothTime_2() { return &___smoothTime_2; }
	inline void set_smoothTime_2(float value)
	{
		___smoothTime_2 = value;
	}

	inline static int32_t get_offset_of_xVelocity_4() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___xVelocity_4)); }
	inline float get_xVelocity_4() const { return ___xVelocity_4; }
	inline float* get_address_of_xVelocity_4() { return &___xVelocity_4; }
	inline void set_xVelocity_4(float value)
	{
		___xVelocity_4 = value;
	}

	inline static int32_t get_offset_of_yVelocity_5() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___yVelocity_5)); }
	inline float get_yVelocity_5() const { return ___yVelocity_5; }
	inline float* get_address_of_yVelocity_5() { return &___yVelocity_5; }
	inline void set_yVelocity_5(float value)
	{
		___yVelocity_5 = value;
	}

	inline static int32_t get_offset_of_zVelocity_6() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___zVelocity_6)); }
	inline float get_zVelocity_6() const { return ___zVelocity_6; }
	inline float* get_address_of_zVelocity_6() { return &___zVelocity_6; }
	inline void set_zVelocity_6(float value)
	{
		___zVelocity_6 = value;
	}

	inline static int32_t get_offset_of_xA_7() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___xA_7)); }
	inline float get_xA_7() const { return ___xA_7; }
	inline float* get_address_of_xA_7() { return &___xA_7; }
	inline void set_xA_7(float value)
	{
		___xA_7 = value;
	}

	inline static int32_t get_offset_of_yA_8() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___yA_8)); }
	inline float get_yA_8() const { return ___yA_8; }
	inline float* get_address_of_yA_8() { return &___yA_8; }
	inline void set_yA_8(float value)
	{
		___yA_8 = value;
	}

	inline static int32_t get_offset_of_zA_9() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___zA_9)); }
	inline float get_zA_9() const { return ___zA_9; }
	inline float* get_address_of_zA_9() { return &___zA_9; }
	inline void set_zA_9(float value)
	{
		___zA_9 = value;
	}

	inline static int32_t get_offset_of_vvv_10() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886, ___vvv_10)); }
	inline Vector3_t2243707580  get_vvv_10() const { return ___vvv_10; }
	inline Vector3_t2243707580 * get_address_of_vvv_10() { return &___vvv_10; }
	inline void set_vvv_10(Vector3_t2243707580  value)
	{
		___vvv_10 = value;
	}
};

struct MoveCamera_t3193441886_StaticFields
{
public:
	// UnityEngine.Transform MoveCamera::target
	Transform_t3275118058 * ___target_3;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(MoveCamera_t3193441886_StaticFields, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
