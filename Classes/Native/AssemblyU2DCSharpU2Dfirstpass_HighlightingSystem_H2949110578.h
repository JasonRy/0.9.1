#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase>
struct List_1_t4000188241;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBlitter
struct  HighlightingBlitter_t2949110578  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<HighlightingSystem.HighlightingBase> HighlightingSystem.HighlightingBlitter::renderers
	List_1_t4000188241 * ___renderers_2;

public:
	inline static int32_t get_offset_of_renderers_2() { return static_cast<int32_t>(offsetof(HighlightingBlitter_t2949110578, ___renderers_2)); }
	inline List_1_t4000188241 * get_renderers_2() const { return ___renderers_2; }
	inline List_1_t4000188241 ** get_address_of_renderers_2() { return &___renderers_2; }
	inline void set_renderers_2(List_1_t4000188241 * value)
	{
		___renderers_2 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
