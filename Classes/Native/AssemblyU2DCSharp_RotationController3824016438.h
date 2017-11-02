#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotationController
struct  RotationController_t3824016438  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RotationController::speedX
	float ___speedX_2;
	// System.Single RotationController::speedY
	float ___speedY_3;
	// System.Single RotationController::speedZ
	float ___speedZ_4;
	// UnityEngine.Transform RotationController::tr
	Transform_t3275118058 * ___tr_5;
	// System.Boolean RotationController::isRotate
	bool ___isRotate_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RotationController::allDevice
	List_1_t1125654279 * ___allDevice_7;

public:
	inline static int32_t get_offset_of_speedX_2() { return static_cast<int32_t>(offsetof(RotationController_t3824016438, ___speedX_2)); }
	inline float get_speedX_2() const { return ___speedX_2; }
	inline float* get_address_of_speedX_2() { return &___speedX_2; }
	inline void set_speedX_2(float value)
	{
		___speedX_2 = value;
	}

	inline static int32_t get_offset_of_speedY_3() { return static_cast<int32_t>(offsetof(RotationController_t3824016438, ___speedY_3)); }
	inline float get_speedY_3() const { return ___speedY_3; }
	inline float* get_address_of_speedY_3() { return &___speedY_3; }
	inline void set_speedY_3(float value)
	{
		___speedY_3 = value;
	}

	inline static int32_t get_offset_of_speedZ_4() { return static_cast<int32_t>(offsetof(RotationController_t3824016438, ___speedZ_4)); }
	inline float get_speedZ_4() const { return ___speedZ_4; }
	inline float* get_address_of_speedZ_4() { return &___speedZ_4; }
	inline void set_speedZ_4(float value)
	{
		___speedZ_4 = value;
	}

	inline static int32_t get_offset_of_tr_5() { return static_cast<int32_t>(offsetof(RotationController_t3824016438, ___tr_5)); }
	inline Transform_t3275118058 * get_tr_5() const { return ___tr_5; }
	inline Transform_t3275118058 ** get_address_of_tr_5() { return &___tr_5; }
	inline void set_tr_5(Transform_t3275118058 * value)
	{
		___tr_5 = value;
		Il2CppCodeGenWriteBarrier(&___tr_5, value);
	}

	inline static int32_t get_offset_of_isRotate_6() { return static_cast<int32_t>(offsetof(RotationController_t3824016438, ___isRotate_6)); }
	inline bool get_isRotate_6() const { return ___isRotate_6; }
	inline bool* get_address_of_isRotate_6() { return &___isRotate_6; }
	inline void set_isRotate_6(bool value)
	{
		___isRotate_6 = value;
	}

	inline static int32_t get_offset_of_allDevice_7() { return static_cast<int32_t>(offsetof(RotationController_t3824016438, ___allDevice_7)); }
	inline List_1_t1125654279 * get_allDevice_7() const { return ___allDevice_7; }
	inline List_1_t1125654279 ** get_address_of_allDevice_7() { return &___allDevice_7; }
	inline void set_allDevice_7(List_1_t1125654279 * value)
	{
		___allDevice_7 = value;
		Il2CppCodeGenWriteBarrier(&___allDevice_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
