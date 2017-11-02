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

// UnityEngine.Canvas
struct Canvas_t209405766;
// DeviceAttributes
struct DeviceAttributes_t36892813;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UISystem
struct UISystem_t3617339803;
// StaffControl
struct StaffControl_t2830068707;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullScreenControl
struct  FullScreenControl_t1269650786  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas FullScreenControl::normalScreen
	Canvas_t209405766 * ___normalScreen_2;
	// UnityEngine.Canvas FullScreenControl::fullScreen
	Canvas_t209405766 * ___fullScreen_3;
	// DeviceAttributes FullScreenControl::DA
	DeviceAttributes_t36892813 * ___DA_4;
	// UnityEngine.Vector3 FullScreenControl::v1
	Vector3_t2243707580  ___v1_5;
	// UnityEngine.Vector3 FullScreenControl::v2
	Vector3_t2243707580  ___v2_6;
	// UnityEngine.GameObject FullScreenControl::allBuild
	GameObject_t1756533147 * ___allBuild_7;
	// UISystem FullScreenControl::US
	UISystem_t3617339803 * ___US_8;
	// UnityEngine.GameObject FullScreenControl::EnvironmentObj
	GameObject_t1756533147 * ___EnvironmentObj_9;
	// StaffControl FullScreenControl::SC
	StaffControl_t2830068707 * ___SC_10;

public:
	inline static int32_t get_offset_of_normalScreen_2() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___normalScreen_2)); }
	inline Canvas_t209405766 * get_normalScreen_2() const { return ___normalScreen_2; }
	inline Canvas_t209405766 ** get_address_of_normalScreen_2() { return &___normalScreen_2; }
	inline void set_normalScreen_2(Canvas_t209405766 * value)
	{
		___normalScreen_2 = value;
		Il2CppCodeGenWriteBarrier(&___normalScreen_2, value);
	}

	inline static int32_t get_offset_of_fullScreen_3() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___fullScreen_3)); }
	inline Canvas_t209405766 * get_fullScreen_3() const { return ___fullScreen_3; }
	inline Canvas_t209405766 ** get_address_of_fullScreen_3() { return &___fullScreen_3; }
	inline void set_fullScreen_3(Canvas_t209405766 * value)
	{
		___fullScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&___fullScreen_3, value);
	}

	inline static int32_t get_offset_of_DA_4() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___DA_4)); }
	inline DeviceAttributes_t36892813 * get_DA_4() const { return ___DA_4; }
	inline DeviceAttributes_t36892813 ** get_address_of_DA_4() { return &___DA_4; }
	inline void set_DA_4(DeviceAttributes_t36892813 * value)
	{
		___DA_4 = value;
		Il2CppCodeGenWriteBarrier(&___DA_4, value);
	}

	inline static int32_t get_offset_of_v1_5() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___v1_5)); }
	inline Vector3_t2243707580  get_v1_5() const { return ___v1_5; }
	inline Vector3_t2243707580 * get_address_of_v1_5() { return &___v1_5; }
	inline void set_v1_5(Vector3_t2243707580  value)
	{
		___v1_5 = value;
	}

	inline static int32_t get_offset_of_v2_6() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___v2_6)); }
	inline Vector3_t2243707580  get_v2_6() const { return ___v2_6; }
	inline Vector3_t2243707580 * get_address_of_v2_6() { return &___v2_6; }
	inline void set_v2_6(Vector3_t2243707580  value)
	{
		___v2_6 = value;
	}

	inline static int32_t get_offset_of_allBuild_7() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___allBuild_7)); }
	inline GameObject_t1756533147 * get_allBuild_7() const { return ___allBuild_7; }
	inline GameObject_t1756533147 ** get_address_of_allBuild_7() { return &___allBuild_7; }
	inline void set_allBuild_7(GameObject_t1756533147 * value)
	{
		___allBuild_7 = value;
		Il2CppCodeGenWriteBarrier(&___allBuild_7, value);
	}

	inline static int32_t get_offset_of_US_8() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___US_8)); }
	inline UISystem_t3617339803 * get_US_8() const { return ___US_8; }
	inline UISystem_t3617339803 ** get_address_of_US_8() { return &___US_8; }
	inline void set_US_8(UISystem_t3617339803 * value)
	{
		___US_8 = value;
		Il2CppCodeGenWriteBarrier(&___US_8, value);
	}

	inline static int32_t get_offset_of_EnvironmentObj_9() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___EnvironmentObj_9)); }
	inline GameObject_t1756533147 * get_EnvironmentObj_9() const { return ___EnvironmentObj_9; }
	inline GameObject_t1756533147 ** get_address_of_EnvironmentObj_9() { return &___EnvironmentObj_9; }
	inline void set_EnvironmentObj_9(GameObject_t1756533147 * value)
	{
		___EnvironmentObj_9 = value;
		Il2CppCodeGenWriteBarrier(&___EnvironmentObj_9, value);
	}

	inline static int32_t get_offset_of_SC_10() { return static_cast<int32_t>(offsetof(FullScreenControl_t1269650786, ___SC_10)); }
	inline StaffControl_t2830068707 * get_SC_10() const { return ___SC_10; }
	inline StaffControl_t2830068707 ** get_address_of_SC_10() { return &___SC_10; }
	inline void set_SC_10(StaffControl_t2830068707 * value)
	{
		___SC_10 = value;
		Il2CppCodeGenWriteBarrier(&___SC_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
