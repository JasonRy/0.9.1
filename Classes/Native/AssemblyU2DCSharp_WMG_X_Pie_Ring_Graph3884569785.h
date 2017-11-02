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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Pie_Ring_Graph
struct  WMG_X_Pie_Ring_Graph_t3884569785  : public WMG_GUI_Functions_t3530287521
{
public:
	// UnityEngine.Object WMG_X_Pie_Ring_Graph::ringGraphPrefab
	Object_t1021602117 * ___ringGraphPrefab_2;
	// UnityEngine.GameObject WMG_X_Pie_Ring_Graph::ringGO
	GameObject_t1756533147 * ___ringGO_3;

public:
	inline static int32_t get_offset_of_ringGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Pie_Ring_Graph_t3884569785, ___ringGraphPrefab_2)); }
	inline Object_t1021602117 * get_ringGraphPrefab_2() const { return ___ringGraphPrefab_2; }
	inline Object_t1021602117 ** get_address_of_ringGraphPrefab_2() { return &___ringGraphPrefab_2; }
	inline void set_ringGraphPrefab_2(Object_t1021602117 * value)
	{
		___ringGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_ringGO_3() { return static_cast<int32_t>(offsetof(WMG_X_Pie_Ring_Graph_t3884569785, ___ringGO_3)); }
	inline GameObject_t1756533147 * get_ringGO_3() const { return ___ringGO_3; }
	inline GameObject_t1756533147 ** get_address_of_ringGO_3() { return &___ringGO_3; }
	inline void set_ringGO_3(GameObject_t1756533147 * value)
	{
		___ringGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___ringGO_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
