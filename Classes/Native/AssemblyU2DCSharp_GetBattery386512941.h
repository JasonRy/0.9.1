#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// Timer
struct Timer_t2917042437;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetBattery
struct  GetBattery_t386512941  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image GetBattery::nowBattery
	Image_t2042527209 * ___nowBattery_2;
	// UnityEngine.UI.Text GetBattery::nowBatteryText
	Text_t356221433 * ___nowBatteryText_3;
	// Timer GetBattery::_timer
	Timer_t2917042437 * ____timer_4;
	// System.Single GetBattery::time
	float ___time_5;
	// System.Single GetBattery::timeDeltation
	float ___timeDeltation_6;
	// System.Double GetBattery::localBattery
	double ___localBattery_7;

public:
	inline static int32_t get_offset_of_nowBattery_2() { return static_cast<int32_t>(offsetof(GetBattery_t386512941, ___nowBattery_2)); }
	inline Image_t2042527209 * get_nowBattery_2() const { return ___nowBattery_2; }
	inline Image_t2042527209 ** get_address_of_nowBattery_2() { return &___nowBattery_2; }
	inline void set_nowBattery_2(Image_t2042527209 * value)
	{
		___nowBattery_2 = value;
		Il2CppCodeGenWriteBarrier(&___nowBattery_2, value);
	}

	inline static int32_t get_offset_of_nowBatteryText_3() { return static_cast<int32_t>(offsetof(GetBattery_t386512941, ___nowBatteryText_3)); }
	inline Text_t356221433 * get_nowBatteryText_3() const { return ___nowBatteryText_3; }
	inline Text_t356221433 ** get_address_of_nowBatteryText_3() { return &___nowBatteryText_3; }
	inline void set_nowBatteryText_3(Text_t356221433 * value)
	{
		___nowBatteryText_3 = value;
		Il2CppCodeGenWriteBarrier(&___nowBatteryText_3, value);
	}

	inline static int32_t get_offset_of__timer_4() { return static_cast<int32_t>(offsetof(GetBattery_t386512941, ____timer_4)); }
	inline Timer_t2917042437 * get__timer_4() const { return ____timer_4; }
	inline Timer_t2917042437 ** get_address_of__timer_4() { return &____timer_4; }
	inline void set__timer_4(Timer_t2917042437 * value)
	{
		____timer_4 = value;
		Il2CppCodeGenWriteBarrier(&____timer_4, value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(GetBattery_t386512941, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_timeDeltation_6() { return static_cast<int32_t>(offsetof(GetBattery_t386512941, ___timeDeltation_6)); }
	inline float get_timeDeltation_6() const { return ___timeDeltation_6; }
	inline float* get_address_of_timeDeltation_6() { return &___timeDeltation_6; }
	inline void set_timeDeltation_6(float value)
	{
		___timeDeltation_6 = value;
	}

	inline static int32_t get_offset_of_localBattery_7() { return static_cast<int32_t>(offsetof(GetBattery_t386512941, ___localBattery_7)); }
	inline double get_localBattery_7() const { return ___localBattery_7; }
	inline double* get_address_of_localBattery_7() { return &___localBattery_7; }
	inline void set_localBattery_7(double value)
	{
		___localBattery_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
