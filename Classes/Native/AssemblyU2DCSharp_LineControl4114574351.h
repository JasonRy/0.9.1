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

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LineControl
struct  LineControl_t4114574351  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 LineControl::formPosition
	Vector3_t2243707580  ___formPosition_2;
	// UnityEngine.Vector3 LineControl::toPosition
	Vector3_t2243707580  ___toPosition_3;
	// UnityEngine.GameObject LineControl::formObj
	GameObject_t1756533147 * ___formObj_4;
	// UnityEngine.GameObject LineControl::toObj
	GameObject_t1756533147 * ___toObj_5;
	// System.Single LineControl::lineDistance
	float ___lineDistance_6;
	// System.Single LineControl::alpha
	float ___alpha_7;

public:
	inline static int32_t get_offset_of_formPosition_2() { return static_cast<int32_t>(offsetof(LineControl_t4114574351, ___formPosition_2)); }
	inline Vector3_t2243707580  get_formPosition_2() const { return ___formPosition_2; }
	inline Vector3_t2243707580 * get_address_of_formPosition_2() { return &___formPosition_2; }
	inline void set_formPosition_2(Vector3_t2243707580  value)
	{
		___formPosition_2 = value;
	}

	inline static int32_t get_offset_of_toPosition_3() { return static_cast<int32_t>(offsetof(LineControl_t4114574351, ___toPosition_3)); }
	inline Vector3_t2243707580  get_toPosition_3() const { return ___toPosition_3; }
	inline Vector3_t2243707580 * get_address_of_toPosition_3() { return &___toPosition_3; }
	inline void set_toPosition_3(Vector3_t2243707580  value)
	{
		___toPosition_3 = value;
	}

	inline static int32_t get_offset_of_formObj_4() { return static_cast<int32_t>(offsetof(LineControl_t4114574351, ___formObj_4)); }
	inline GameObject_t1756533147 * get_formObj_4() const { return ___formObj_4; }
	inline GameObject_t1756533147 ** get_address_of_formObj_4() { return &___formObj_4; }
	inline void set_formObj_4(GameObject_t1756533147 * value)
	{
		___formObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___formObj_4, value);
	}

	inline static int32_t get_offset_of_toObj_5() { return static_cast<int32_t>(offsetof(LineControl_t4114574351, ___toObj_5)); }
	inline GameObject_t1756533147 * get_toObj_5() const { return ___toObj_5; }
	inline GameObject_t1756533147 ** get_address_of_toObj_5() { return &___toObj_5; }
	inline void set_toObj_5(GameObject_t1756533147 * value)
	{
		___toObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___toObj_5, value);
	}

	inline static int32_t get_offset_of_lineDistance_6() { return static_cast<int32_t>(offsetof(LineControl_t4114574351, ___lineDistance_6)); }
	inline float get_lineDistance_6() const { return ___lineDistance_6; }
	inline float* get_address_of_lineDistance_6() { return &___lineDistance_6; }
	inline void set_lineDistance_6(float value)
	{
		___lineDistance_6 = value;
	}

	inline static int32_t get_offset_of_alpha_7() { return static_cast<int32_t>(offsetof(LineControl_t4114574351, ___alpha_7)); }
	inline float get_alpha_7() const { return ___alpha_7; }
	inline float* get_address_of_alpha_7() { return &___alpha_7; }
	inline void set_alpha_7(float value)
	{
		___alpha_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
