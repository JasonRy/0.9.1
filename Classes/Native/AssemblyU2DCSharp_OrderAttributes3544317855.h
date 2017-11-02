#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderAttributes
struct  OrderAttributes_t3544317855  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text OrderAttributes::name
	Text_t356221433 * ___name_2;
	// UnityEngine.UI.Text OrderAttributes::date
	Text_t356221433 * ___date_3;
	// UnityEngine.UI.Text OrderAttributes::status
	Text_t356221433 * ___status_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(OrderAttributes_t3544317855, ___name_2)); }
	inline Text_t356221433 * get_name_2() const { return ___name_2; }
	inline Text_t356221433 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(Text_t356221433 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_date_3() { return static_cast<int32_t>(offsetof(OrderAttributes_t3544317855, ___date_3)); }
	inline Text_t356221433 * get_date_3() const { return ___date_3; }
	inline Text_t356221433 ** get_address_of_date_3() { return &___date_3; }
	inline void set_date_3(Text_t356221433 * value)
	{
		___date_3 = value;
		Il2CppCodeGenWriteBarrier(&___date_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(OrderAttributes_t3544317855, ___status_4)); }
	inline Text_t356221433 * get_status_4() const { return ___status_4; }
	inline Text_t356221433 ** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(Text_t356221433 * value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier(&___status_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
