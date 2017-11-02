#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCamera
struct  GameCamera_t2776184625  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GameCamera::_unityCamera
	Camera_t189460977 * ____unityCamera_2;

public:
	inline static int32_t get_offset_of__unityCamera_2() { return static_cast<int32_t>(offsetof(GameCamera_t2776184625, ____unityCamera_2)); }
	inline Camera_t189460977 * get__unityCamera_2() const { return ____unityCamera_2; }
	inline Camera_t189460977 ** get_address_of__unityCamera_2() { return &____unityCamera_2; }
	inline void set__unityCamera_2(Camera_t189460977 * value)
	{
		____unityCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&____unityCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
