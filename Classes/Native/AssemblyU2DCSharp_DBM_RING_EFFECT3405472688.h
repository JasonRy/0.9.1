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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBM_RING_EFFECT
struct  DBM_RING_EFFECT_t3405472688  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] DBM_RING_EFFECT::allRing
	GameObjectU5BU5D_t3057952154* ___allRing_2;
	// System.Collections.Generic.List`1<System.Int32> DBM_RING_EFFECT::value
	List_1_t1440998580 * ___value_3;

public:
	inline static int32_t get_offset_of_allRing_2() { return static_cast<int32_t>(offsetof(DBM_RING_EFFECT_t3405472688, ___allRing_2)); }
	inline GameObjectU5BU5D_t3057952154* get_allRing_2() const { return ___allRing_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_allRing_2() { return &___allRing_2; }
	inline void set_allRing_2(GameObjectU5BU5D_t3057952154* value)
	{
		___allRing_2 = value;
		Il2CppCodeGenWriteBarrier(&___allRing_2, value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(DBM_RING_EFFECT_t3405472688, ___value_3)); }
	inline List_1_t1440998580 * get_value_3() const { return ___value_3; }
	inline List_1_t1440998580 ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(List_1_t1440998580 * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
