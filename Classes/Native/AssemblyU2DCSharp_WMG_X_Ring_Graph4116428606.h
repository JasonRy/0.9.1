#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_GUI_Functions3530287521.h"

// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<WMG_Ring_Graph>
struct List_1_t2021307581;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Ring_Graph
struct  WMG_X_Ring_Graph_t4116428606  : public WMG_GUI_Functions_t3530287521
{
public:
	// UnityEngine.Object WMG_X_Ring_Graph::ringGraphPrefab
	Object_t1021602117 * ___ringGraphPrefab_2;
	// System.Boolean WMG_X_Ring_Graph::onlyRandomizeData
	bool ___onlyRandomizeData_3;
	// System.Collections.Generic.List`1<WMG_Ring_Graph> WMG_X_Ring_Graph::ringGraphs
	List_1_t2021307581 * ___ringGraphs_4;

public:
	inline static int32_t get_offset_of_ringGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Ring_Graph_t4116428606, ___ringGraphPrefab_2)); }
	inline Object_t1021602117 * get_ringGraphPrefab_2() const { return ___ringGraphPrefab_2; }
	inline Object_t1021602117 ** get_address_of_ringGraphPrefab_2() { return &___ringGraphPrefab_2; }
	inline void set_ringGraphPrefab_2(Object_t1021602117 * value)
	{
		___ringGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_onlyRandomizeData_3() { return static_cast<int32_t>(offsetof(WMG_X_Ring_Graph_t4116428606, ___onlyRandomizeData_3)); }
	inline bool get_onlyRandomizeData_3() const { return ___onlyRandomizeData_3; }
	inline bool* get_address_of_onlyRandomizeData_3() { return &___onlyRandomizeData_3; }
	inline void set_onlyRandomizeData_3(bool value)
	{
		___onlyRandomizeData_3 = value;
	}

	inline static int32_t get_offset_of_ringGraphs_4() { return static_cast<int32_t>(offsetof(WMG_X_Ring_Graph_t4116428606, ___ringGraphs_4)); }
	inline List_1_t2021307581 * get_ringGraphs_4() const { return ___ringGraphs_4; }
	inline List_1_t2021307581 ** get_address_of_ringGraphs_4() { return &___ringGraphs_4; }
	inline void set_ringGraphs_4(List_1_t2021307581 * value)
	{
		___ringGraphs_4 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphs_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
