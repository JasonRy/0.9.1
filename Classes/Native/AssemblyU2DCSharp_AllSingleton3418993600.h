#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// AllSingleton
struct AllSingleton_t3418993600;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AllSingleton
struct  AllSingleton_t3418993600  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AllSingleton_t3418993600_StaticFields
{
public:
	// AllSingleton modreq(System.Runtime.CompilerServices.IsVolatile) AllSingleton::_instance
	AllSingleton_t3418993600 * ____instance_2;
	// System.Object AllSingleton::lockHelper
	Il2CppObject * ___lockHelper_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> AllSingleton::<>f__switch$map2
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2_4;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(AllSingleton_t3418993600_StaticFields, ____instance_2)); }
	inline AllSingleton_t3418993600 * get__instance_2() const { return ____instance_2; }
	inline AllSingleton_t3418993600 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(AllSingleton_t3418993600 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_lockHelper_3() { return static_cast<int32_t>(offsetof(AllSingleton_t3418993600_StaticFields, ___lockHelper_3)); }
	inline Il2CppObject * get_lockHelper_3() const { return ___lockHelper_3; }
	inline Il2CppObject ** get_address_of_lockHelper_3() { return &___lockHelper_3; }
	inline void set_lockHelper_3(Il2CppObject * value)
	{
		___lockHelper_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockHelper_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_4() { return static_cast<int32_t>(offsetof(AllSingleton_t3418993600_StaticFields, ___U3CU3Ef__switchU24map2_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2_4() const { return ___U3CU3Ef__switchU24map2_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2_4() { return &___U3CU3Ef__switchU24map2_4; }
	inline void set_U3CU3Ef__switchU24map2_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
