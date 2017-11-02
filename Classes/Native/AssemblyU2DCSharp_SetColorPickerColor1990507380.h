#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UIWidget
struct UIWidget_t1453041918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetColorPickerColor
struct  SetColorPickerColor_t1990507380  : public MonoBehaviour_t1158329972
{
public:
	// UIWidget SetColorPickerColor::mWidget
	UIWidget_t1453041918 * ___mWidget_2;

public:
	inline static int32_t get_offset_of_mWidget_2() { return static_cast<int32_t>(offsetof(SetColorPickerColor_t1990507380, ___mWidget_2)); }
	inline UIWidget_t1453041918 * get_mWidget_2() const { return ___mWidget_2; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_2() { return &___mWidget_2; }
	inline void set_mWidget_2(UIWidget_t1453041918 * value)
	{
		___mWidget_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
