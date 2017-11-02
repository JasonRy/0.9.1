#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass72_0
struct  U3CU3Ec__DisplayClass72_0_t2728653412  : public Il2CppObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions/<>c__DisplayClass72_0::to
	Color_t2020392075  ___to_0;
	// UnityEngine.Material DG.Tweening.ShortcutExtensions/<>c__DisplayClass72_0::target
	Material_t193706927 * ___target_1;
	// System.String DG.Tweening.ShortcutExtensions/<>c__DisplayClass72_0::property
	String_t* ___property_2;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t2728653412, ___to_0)); }
	inline Color_t2020392075  get_to_0() const { return ___to_0; }
	inline Color_t2020392075 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t2020392075  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t2728653412, ___target_1)); }
	inline Material_t193706927 * get_target_1() const { return ___target_1; }
	inline Material_t193706927 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Material_t193706927 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}

	inline static int32_t get_offset_of_property_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_t2728653412, ___property_2)); }
	inline String_t* get_property_2() const { return ___property_2; }
	inline String_t** get_address_of_property_2() { return &___property_2; }
	inline void set_property_2(String_t* value)
	{
		___property_2 = value;
		Il2CppCodeGenWriteBarrier(&___property_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
