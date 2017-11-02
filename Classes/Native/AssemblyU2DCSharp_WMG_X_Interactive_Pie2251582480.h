#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Object
struct Object_t1021602117;
// WMG_Pie_Graph
struct WMG_Pie_Graph_t252836487;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Interactive_Pie
struct  WMG_X_Interactive_Pie_t2251582480  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Object WMG_X_Interactive_Pie::pieGraphPrefab
	Object_t1021602117 * ___pieGraphPrefab_2;
	// WMG_Pie_Graph WMG_X_Interactive_Pie::graph
	WMG_Pie_Graph_t252836487 * ___graph_3;

public:
	inline static int32_t get_offset_of_pieGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Interactive_Pie_t2251582480, ___pieGraphPrefab_2)); }
	inline Object_t1021602117 * get_pieGraphPrefab_2() const { return ___pieGraphPrefab_2; }
	inline Object_t1021602117 ** get_address_of_pieGraphPrefab_2() { return &___pieGraphPrefab_2; }
	inline void set_pieGraphPrefab_2(Object_t1021602117 * value)
	{
		___pieGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___pieGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_graph_3() { return static_cast<int32_t>(offsetof(WMG_X_Interactive_Pie_t2251582480, ___graph_3)); }
	inline WMG_Pie_Graph_t252836487 * get_graph_3() const { return ___graph_3; }
	inline WMG_Pie_Graph_t252836487 ** get_address_of_graph_3() { return &___graph_3; }
	inline void set_graph_3(WMG_Pie_Graph_t252836487 * value)
	{
		___graph_3 = value;
		Il2CppCodeGenWriteBarrier(&___graph_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
