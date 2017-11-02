#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t3447136813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBM_BAR_EFFECT
struct  DBM_BAR_EFFECT_t787948571  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] DBM_BAR_EFFECT::allLine
	GameObjectU5BU5D_t3057952154* ___allLine_2;
	// System.Collections.Generic.List`1<System.Int32> DBM_BAR_EFFECT::value
	List_1_t1440998580 * ___value_3;
	// System.Collections.Generic.List`1<System.Double> DBM_BAR_EFFECT::value_double
	List_1_t3447136813 * ___value_double_4;

public:
	inline static int32_t get_offset_of_allLine_2() { return static_cast<int32_t>(offsetof(DBM_BAR_EFFECT_t787948571, ___allLine_2)); }
	inline GameObjectU5BU5D_t3057952154* get_allLine_2() const { return ___allLine_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_allLine_2() { return &___allLine_2; }
	inline void set_allLine_2(GameObjectU5BU5D_t3057952154* value)
	{
		___allLine_2 = value;
		Il2CppCodeGenWriteBarrier(&___allLine_2, value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(DBM_BAR_EFFECT_t787948571, ___value_3)); }
	inline List_1_t1440998580 * get_value_3() const { return ___value_3; }
	inline List_1_t1440998580 ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(List_1_t1440998580 * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}

	inline static int32_t get_offset_of_value_double_4() { return static_cast<int32_t>(offsetof(DBM_BAR_EFFECT_t787948571, ___value_double_4)); }
	inline List_1_t3447136813 * get_value_double_4() const { return ___value_double_4; }
	inline List_1_t3447136813 ** get_address_of_value_double_4() { return &___value_double_4; }
	inline void set_value_double_4(List_1_t3447136813 * value)
	{
		___value_double_4 = value;
		Il2CppCodeGenWriteBarrier(&___value_double_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
