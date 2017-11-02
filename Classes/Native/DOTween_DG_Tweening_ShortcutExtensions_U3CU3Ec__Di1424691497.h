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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass71_0
struct  U3CU3Ec__DisplayClass71_0_t1424691497  : public Il2CppObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions/<>c__DisplayClass71_0::to
	Color_t2020392075  ___to_0;
	// UnityEngine.Material DG.Tweening.ShortcutExtensions/<>c__DisplayClass71_0::target
	Material_t193706927 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t1424691497, ___to_0)); }
	inline Color_t2020392075  get_to_0() const { return ___to_0; }
	inline Color_t2020392075 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t2020392075  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t1424691497, ___target_1)); }
	inline Material_t193706927 * get_target_1() const { return ___target_1; }
	inline Material_t193706927 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Material_t193706927 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
