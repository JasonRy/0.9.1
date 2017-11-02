#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weather
struct  Weather_t654545032  : public MonoBehaviour_t1158329972
{
public:
	// System.String Weather::m_url
	String_t* ___m_url_2;
	// UnityEngine.UI.Text Weather::lbCity
	Text_t356221433 * ___lbCity_3;
	// UnityEngine.UI.Text Weather::lbTemperature
	Text_t356221433 * ___lbTemperature_4;
	// UnityEngine.UI.Text Weather::lbWeahter
	Text_t356221433 * ___lbWeahter_5;
	// UnityEngine.UI.Text Weather::lbTime
	Text_t356221433 * ___lbTime_6;
	// UnityEngine.UI.Text Weather::lbHour
	Text_t356221433 * ___lbHour_7;
	// UnityEngine.UI.Text Weather::lbMinute
	Text_t356221433 * ___lbMinute_8;
	// UnityEngine.UI.Text Weather::lbColon
	Text_t356221433 * ___lbColon_9;
	// System.DateTime Weather::dNow
	DateTime_t693205669  ___dNow_10;
	// System.String[] Weather::dow
	StringU5BU5D_t1642385972* ___dow_11;
	// System.Single Weather::deltaTime
	float ___deltaTime_12;
	// System.Single Weather::timeDeltation
	float ___timeDeltation_13;
	// System.Single Weather::deltaTimeforWeather
	float ___deltaTimeforWeather_14;
	// System.Single Weather::howlongToUpdate
	float ___howlongToUpdate_15;
	// System.Single Weather::index
	float ___index_16;

public:
	inline static int32_t get_offset_of_m_url_2() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___m_url_2)); }
	inline String_t* get_m_url_2() const { return ___m_url_2; }
	inline String_t** get_address_of_m_url_2() { return &___m_url_2; }
	inline void set_m_url_2(String_t* value)
	{
		___m_url_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_url_2, value);
	}

	inline static int32_t get_offset_of_lbCity_3() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbCity_3)); }
	inline Text_t356221433 * get_lbCity_3() const { return ___lbCity_3; }
	inline Text_t356221433 ** get_address_of_lbCity_3() { return &___lbCity_3; }
	inline void set_lbCity_3(Text_t356221433 * value)
	{
		___lbCity_3 = value;
		Il2CppCodeGenWriteBarrier(&___lbCity_3, value);
	}

	inline static int32_t get_offset_of_lbTemperature_4() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbTemperature_4)); }
	inline Text_t356221433 * get_lbTemperature_4() const { return ___lbTemperature_4; }
	inline Text_t356221433 ** get_address_of_lbTemperature_4() { return &___lbTemperature_4; }
	inline void set_lbTemperature_4(Text_t356221433 * value)
	{
		___lbTemperature_4 = value;
		Il2CppCodeGenWriteBarrier(&___lbTemperature_4, value);
	}

	inline static int32_t get_offset_of_lbWeahter_5() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbWeahter_5)); }
	inline Text_t356221433 * get_lbWeahter_5() const { return ___lbWeahter_5; }
	inline Text_t356221433 ** get_address_of_lbWeahter_5() { return &___lbWeahter_5; }
	inline void set_lbWeahter_5(Text_t356221433 * value)
	{
		___lbWeahter_5 = value;
		Il2CppCodeGenWriteBarrier(&___lbWeahter_5, value);
	}

	inline static int32_t get_offset_of_lbTime_6() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbTime_6)); }
	inline Text_t356221433 * get_lbTime_6() const { return ___lbTime_6; }
	inline Text_t356221433 ** get_address_of_lbTime_6() { return &___lbTime_6; }
	inline void set_lbTime_6(Text_t356221433 * value)
	{
		___lbTime_6 = value;
		Il2CppCodeGenWriteBarrier(&___lbTime_6, value);
	}

	inline static int32_t get_offset_of_lbHour_7() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbHour_7)); }
	inline Text_t356221433 * get_lbHour_7() const { return ___lbHour_7; }
	inline Text_t356221433 ** get_address_of_lbHour_7() { return &___lbHour_7; }
	inline void set_lbHour_7(Text_t356221433 * value)
	{
		___lbHour_7 = value;
		Il2CppCodeGenWriteBarrier(&___lbHour_7, value);
	}

	inline static int32_t get_offset_of_lbMinute_8() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbMinute_8)); }
	inline Text_t356221433 * get_lbMinute_8() const { return ___lbMinute_8; }
	inline Text_t356221433 ** get_address_of_lbMinute_8() { return &___lbMinute_8; }
	inline void set_lbMinute_8(Text_t356221433 * value)
	{
		___lbMinute_8 = value;
		Il2CppCodeGenWriteBarrier(&___lbMinute_8, value);
	}

	inline static int32_t get_offset_of_lbColon_9() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___lbColon_9)); }
	inline Text_t356221433 * get_lbColon_9() const { return ___lbColon_9; }
	inline Text_t356221433 ** get_address_of_lbColon_9() { return &___lbColon_9; }
	inline void set_lbColon_9(Text_t356221433 * value)
	{
		___lbColon_9 = value;
		Il2CppCodeGenWriteBarrier(&___lbColon_9, value);
	}

	inline static int32_t get_offset_of_dNow_10() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___dNow_10)); }
	inline DateTime_t693205669  get_dNow_10() const { return ___dNow_10; }
	inline DateTime_t693205669 * get_address_of_dNow_10() { return &___dNow_10; }
	inline void set_dNow_10(DateTime_t693205669  value)
	{
		___dNow_10 = value;
	}

	inline static int32_t get_offset_of_dow_11() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___dow_11)); }
	inline StringU5BU5D_t1642385972* get_dow_11() const { return ___dow_11; }
	inline StringU5BU5D_t1642385972** get_address_of_dow_11() { return &___dow_11; }
	inline void set_dow_11(StringU5BU5D_t1642385972* value)
	{
		___dow_11 = value;
		Il2CppCodeGenWriteBarrier(&___dow_11, value);
	}

	inline static int32_t get_offset_of_deltaTime_12() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___deltaTime_12)); }
	inline float get_deltaTime_12() const { return ___deltaTime_12; }
	inline float* get_address_of_deltaTime_12() { return &___deltaTime_12; }
	inline void set_deltaTime_12(float value)
	{
		___deltaTime_12 = value;
	}

	inline static int32_t get_offset_of_timeDeltation_13() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___timeDeltation_13)); }
	inline float get_timeDeltation_13() const { return ___timeDeltation_13; }
	inline float* get_address_of_timeDeltation_13() { return &___timeDeltation_13; }
	inline void set_timeDeltation_13(float value)
	{
		___timeDeltation_13 = value;
	}

	inline static int32_t get_offset_of_deltaTimeforWeather_14() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___deltaTimeforWeather_14)); }
	inline float get_deltaTimeforWeather_14() const { return ___deltaTimeforWeather_14; }
	inline float* get_address_of_deltaTimeforWeather_14() { return &___deltaTimeforWeather_14; }
	inline void set_deltaTimeforWeather_14(float value)
	{
		___deltaTimeforWeather_14 = value;
	}

	inline static int32_t get_offset_of_howlongToUpdate_15() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___howlongToUpdate_15)); }
	inline float get_howlongToUpdate_15() const { return ___howlongToUpdate_15; }
	inline float* get_address_of_howlongToUpdate_15() { return &___howlongToUpdate_15; }
	inline void set_howlongToUpdate_15(float value)
	{
		___howlongToUpdate_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(Weather_t654545032, ___index_16)); }
	inline float get_index_16() const { return ___index_16; }
	inline float* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(float value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
