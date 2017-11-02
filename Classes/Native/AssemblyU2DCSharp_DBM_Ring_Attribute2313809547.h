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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBM_Ring_Attribute
struct  DBM_Ring_Attribute_t2313809547  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image DBM_Ring_Attribute::bg
	Image_t2042527209 * ___bg_2;
	// UnityEngine.UI.Image DBM_Ring_Attribute::now
	Image_t2042527209 * ___now_3;
	// UnityEngine.UI.Text DBM_Ring_Attribute::value
	Text_t356221433 * ___value_4;
	// UnityEngine.UI.Text DBM_Ring_Attribute::valuePercentage
	Text_t356221433 * ___valuePercentage_5;

public:
	inline static int32_t get_offset_of_bg_2() { return static_cast<int32_t>(offsetof(DBM_Ring_Attribute_t2313809547, ___bg_2)); }
	inline Image_t2042527209 * get_bg_2() const { return ___bg_2; }
	inline Image_t2042527209 ** get_address_of_bg_2() { return &___bg_2; }
	inline void set_bg_2(Image_t2042527209 * value)
	{
		___bg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bg_2, value);
	}

	inline static int32_t get_offset_of_now_3() { return static_cast<int32_t>(offsetof(DBM_Ring_Attribute_t2313809547, ___now_3)); }
	inline Image_t2042527209 * get_now_3() const { return ___now_3; }
	inline Image_t2042527209 ** get_address_of_now_3() { return &___now_3; }
	inline void set_now_3(Image_t2042527209 * value)
	{
		___now_3 = value;
		Il2CppCodeGenWriteBarrier(&___now_3, value);
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DBM_Ring_Attribute_t2313809547, ___value_4)); }
	inline Text_t356221433 * get_value_4() const { return ___value_4; }
	inline Text_t356221433 ** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(Text_t356221433 * value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier(&___value_4, value);
	}

	inline static int32_t get_offset_of_valuePercentage_5() { return static_cast<int32_t>(offsetof(DBM_Ring_Attribute_t2313809547, ___valuePercentage_5)); }
	inline Text_t356221433 * get_valuePercentage_5() const { return ___valuePercentage_5; }
	inline Text_t356221433 ** get_address_of_valuePercentage_5() { return &___valuePercentage_5; }
	inline void set_valuePercentage_5(Text_t356221433 * value)
	{
		___valuePercentage_5 = value;
		Il2CppCodeGenWriteBarrier(&___valuePercentage_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
