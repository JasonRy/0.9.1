#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Graph_Auto_Anim
struct  WMG_Graph_Auto_Anim_t872713172  : public MonoBehaviour_t1158329972
{
public:
	// WMG_Axis_Graph WMG_Graph_Auto_Anim::theGraph
	WMG_Axis_Graph_t1917651748 * ___theGraph_2;

public:
	inline static int32_t get_offset_of_theGraph_2() { return static_cast<int32_t>(offsetof(WMG_Graph_Auto_Anim_t872713172, ___theGraph_2)); }
	inline WMG_Axis_Graph_t1917651748 * get_theGraph_2() const { return ___theGraph_2; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_theGraph_2() { return &___theGraph_2; }
	inline void set_theGraph_2(WMG_Axis_Graph_t1917651748 * value)
	{
		___theGraph_2 = value;
		Il2CppCodeGenWriteBarrier(&___theGraph_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
