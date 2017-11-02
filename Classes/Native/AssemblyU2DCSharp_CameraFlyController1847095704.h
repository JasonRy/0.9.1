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

// CameraFlyController
struct  CameraFlyController_t1847095704  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraFlyController::speed
	float ___speed_2;
	// UnityEngine.Transform CameraFlyController::tr
	Transform_t3275118058 * ___tr_3;
	// System.Boolean CameraFlyController::rmbDownInRect
	bool ___rmbDownInRect_4;
	// UnityEngine.Vector3 CameraFlyController::mpStart
	Vector3_t2243707580  ___mpStart_5;
	// UnityEngine.Vector3 CameraFlyController::originalRotation
	Vector3_t2243707580  ___originalRotation_6;
	// System.Single CameraFlyController::t
	float ___t_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CameraFlyController_t1847095704, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tr_3() { return static_cast<int32_t>(offsetof(CameraFlyController_t1847095704, ___tr_3)); }
	inline Transform_t3275118058 * get_tr_3() const { return ___tr_3; }
	inline Transform_t3275118058 ** get_address_of_tr_3() { return &___tr_3; }
	inline void set_tr_3(Transform_t3275118058 * value)
	{
		___tr_3 = value;
		Il2CppCodeGenWriteBarrier(&___tr_3, value);
	}

	inline static int32_t get_offset_of_rmbDownInRect_4() { return static_cast<int32_t>(offsetof(CameraFlyController_t1847095704, ___rmbDownInRect_4)); }
	inline bool get_rmbDownInRect_4() const { return ___rmbDownInRect_4; }
	inline bool* get_address_of_rmbDownInRect_4() { return &___rmbDownInRect_4; }
	inline void set_rmbDownInRect_4(bool value)
	{
		___rmbDownInRect_4 = value;
	}

	inline static int32_t get_offset_of_mpStart_5() { return static_cast<int32_t>(offsetof(CameraFlyController_t1847095704, ___mpStart_5)); }
	inline Vector3_t2243707580  get_mpStart_5() const { return ___mpStart_5; }
	inline Vector3_t2243707580 * get_address_of_mpStart_5() { return &___mpStart_5; }
	inline void set_mpStart_5(Vector3_t2243707580  value)
	{
		___mpStart_5 = value;
	}

	inline static int32_t get_offset_of_originalRotation_6() { return static_cast<int32_t>(offsetof(CameraFlyController_t1847095704, ___originalRotation_6)); }
	inline Vector3_t2243707580  get_originalRotation_6() const { return ___originalRotation_6; }
	inline Vector3_t2243707580 * get_address_of_originalRotation_6() { return &___originalRotation_6; }
	inline void set_originalRotation_6(Vector3_t2243707580  value)
	{
		___originalRotation_6 = value;
	}

	inline static int32_t get_offset_of_t_7() { return static_cast<int32_t>(offsetof(CameraFlyController_t1847095704, ___t_7)); }
	inline float get_t_7() const { return ___t_7; }
	inline float* get_address_of_t_7() { return &___t_7; }
	inline void set_t_7(float value)
	{
		___t_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
