#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectionFloor
struct  SelectionFloor_t462243872  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SelectionFloor::transfromObjs
	List_1_t1125654279 * ___transfromObjs_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SelectionFloor::changeObjs
	List_1_t1125654279 * ___changeObjs_3;

public:
	inline static int32_t get_offset_of_transfromObjs_2() { return static_cast<int32_t>(offsetof(SelectionFloor_t462243872, ___transfromObjs_2)); }
	inline List_1_t1125654279 * get_transfromObjs_2() const { return ___transfromObjs_2; }
	inline List_1_t1125654279 ** get_address_of_transfromObjs_2() { return &___transfromObjs_2; }
	inline void set_transfromObjs_2(List_1_t1125654279 * value)
	{
		___transfromObjs_2 = value;
		Il2CppCodeGenWriteBarrier(&___transfromObjs_2, value);
	}

	inline static int32_t get_offset_of_changeObjs_3() { return static_cast<int32_t>(offsetof(SelectionFloor_t462243872, ___changeObjs_3)); }
	inline List_1_t1125654279 * get_changeObjs_3() const { return ___changeObjs_3; }
	inline List_1_t1125654279 ** get_address_of_changeObjs_3() { return &___changeObjs_3; }
	inline void set_changeObjs_3(List_1_t1125654279 * value)
	{
		___changeObjs_3 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
