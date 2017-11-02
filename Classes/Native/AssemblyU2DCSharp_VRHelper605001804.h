#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_VR_VRDeviceType1735859614.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRHelper
struct  VRHelper_t605001804  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct VRHelper_t605001804_StaticFields
{
public:
	// System.Boolean VRHelper::isVRScene
	bool ___isVRScene_2;
	// UnityEngine.VR.VRDeviceType VRHelper::_vrDeviceType
	int32_t ____vrDeviceType_3;

public:
	inline static int32_t get_offset_of_isVRScene_2() { return static_cast<int32_t>(offsetof(VRHelper_t605001804_StaticFields, ___isVRScene_2)); }
	inline bool get_isVRScene_2() const { return ___isVRScene_2; }
	inline bool* get_address_of_isVRScene_2() { return &___isVRScene_2; }
	inline void set_isVRScene_2(bool value)
	{
		___isVRScene_2 = value;
	}

	inline static int32_t get_offset_of__vrDeviceType_3() { return static_cast<int32_t>(offsetof(VRHelper_t605001804_StaticFields, ____vrDeviceType_3)); }
	inline int32_t get__vrDeviceType_3() const { return ____vrDeviceType_3; }
	inline int32_t* get_address_of__vrDeviceType_3() { return &____vrDeviceType_3; }
	inline void set__vrDeviceType_3(int32_t value)
	{
		____vrDeviceType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
