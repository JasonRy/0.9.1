﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UIPopupList
struct UIPopupList_t109953940;
// EventDelegate/Callback
struct Callback_t2100910411;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LanguageSelection
struct  LanguageSelection_t3655407812  : public MonoBehaviour_t1158329972
{
public:
	// UIPopupList LanguageSelection::mList
	UIPopupList_t109953940 * ___mList_2;

public:
	inline static int32_t get_offset_of_mList_2() { return static_cast<int32_t>(offsetof(LanguageSelection_t3655407812, ___mList_2)); }
	inline UIPopupList_t109953940 * get_mList_2() const { return ___mList_2; }
	inline UIPopupList_t109953940 ** get_address_of_mList_2() { return &___mList_2; }
	inline void set_mList_2(UIPopupList_t109953940 * value)
	{
		___mList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mList_2, value);
	}
};

struct LanguageSelection_t3655407812_StaticFields
{
public:
	// EventDelegate/Callback LanguageSelection::<>f__am$cache0
	Callback_t2100910411 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(LanguageSelection_t3655407812_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Callback_t2100910411 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Callback_t2100910411 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Callback_t2100910411 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
