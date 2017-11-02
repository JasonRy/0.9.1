#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_DBM_Bar_Attribute_DigitalScrollM3022850487.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBM_Bar_Attribute
struct  DBM_Bar_Attribute_t4251778376  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image DBM_Bar_Attribute::BG
	Image_t2042527209 * ___BG_2;
	// UnityEngine.UI.Image DBM_Bar_Attribute::Now
	Image_t2042527209 * ___Now_3;
	// UnityEngine.UI.Text DBM_Bar_Attribute::ValuePercentage
	Text_t356221433 * ___ValuePercentage_4;
	// UnityEngine.UI.Text DBM_Bar_Attribute::Value
	Text_t356221433 * ___Value_5;
	// DBM_Bar_Attribute/DigitalScrollMode DBM_Bar_Attribute::_digitalScrollMode
	int32_t ____digitalScrollMode_6;

public:
	inline static int32_t get_offset_of_BG_2() { return static_cast<int32_t>(offsetof(DBM_Bar_Attribute_t4251778376, ___BG_2)); }
	inline Image_t2042527209 * get_BG_2() const { return ___BG_2; }
	inline Image_t2042527209 ** get_address_of_BG_2() { return &___BG_2; }
	inline void set_BG_2(Image_t2042527209 * value)
	{
		___BG_2 = value;
		Il2CppCodeGenWriteBarrier(&___BG_2, value);
	}

	inline static int32_t get_offset_of_Now_3() { return static_cast<int32_t>(offsetof(DBM_Bar_Attribute_t4251778376, ___Now_3)); }
	inline Image_t2042527209 * get_Now_3() const { return ___Now_3; }
	inline Image_t2042527209 ** get_address_of_Now_3() { return &___Now_3; }
	inline void set_Now_3(Image_t2042527209 * value)
	{
		___Now_3 = value;
		Il2CppCodeGenWriteBarrier(&___Now_3, value);
	}

	inline static int32_t get_offset_of_ValuePercentage_4() { return static_cast<int32_t>(offsetof(DBM_Bar_Attribute_t4251778376, ___ValuePercentage_4)); }
	inline Text_t356221433 * get_ValuePercentage_4() const { return ___ValuePercentage_4; }
	inline Text_t356221433 ** get_address_of_ValuePercentage_4() { return &___ValuePercentage_4; }
	inline void set_ValuePercentage_4(Text_t356221433 * value)
	{
		___ValuePercentage_4 = value;
		Il2CppCodeGenWriteBarrier(&___ValuePercentage_4, value);
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(DBM_Bar_Attribute_t4251778376, ___Value_5)); }
	inline Text_t356221433 * get_Value_5() const { return ___Value_5; }
	inline Text_t356221433 ** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(Text_t356221433 * value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier(&___Value_5, value);
	}

	inline static int32_t get_offset_of__digitalScrollMode_6() { return static_cast<int32_t>(offsetof(DBM_Bar_Attribute_t4251778376, ____digitalScrollMode_6)); }
	inline int32_t get__digitalScrollMode_6() const { return ____digitalScrollMode_6; }
	inline int32_t* get_address_of__digitalScrollMode_6() { return &____digitalScrollMode_6; }
	inline void set__digitalScrollMode_6(int32_t value)
	{
		____digitalScrollMode_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
