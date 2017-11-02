#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Events2095434391.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Comparison`1<WMG_Node>
struct Comparison_1_t3387233917;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Graph_Manager
struct  WMG_Graph_Manager_t1488325314  : public WMG_Events_t2095434391
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Graph_Manager::nodesParent
	List_1_t1125654279 * ___nodesParent_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Graph_Manager::linksParent
	List_1_t1125654279 * ___linksParent_16;

public:
	inline static int32_t get_offset_of_nodesParent_15() { return static_cast<int32_t>(offsetof(WMG_Graph_Manager_t1488325314, ___nodesParent_15)); }
	inline List_1_t1125654279 * get_nodesParent_15() const { return ___nodesParent_15; }
	inline List_1_t1125654279 ** get_address_of_nodesParent_15() { return &___nodesParent_15; }
	inline void set_nodesParent_15(List_1_t1125654279 * value)
	{
		___nodesParent_15 = value;
		Il2CppCodeGenWriteBarrier(&___nodesParent_15, value);
	}

	inline static int32_t get_offset_of_linksParent_16() { return static_cast<int32_t>(offsetof(WMG_Graph_Manager_t1488325314, ___linksParent_16)); }
	inline List_1_t1125654279 * get_linksParent_16() const { return ___linksParent_16; }
	inline List_1_t1125654279 ** get_address_of_linksParent_16() { return &___linksParent_16; }
	inline void set_linksParent_16(List_1_t1125654279 * value)
	{
		___linksParent_16 = value;
		Il2CppCodeGenWriteBarrier(&___linksParent_16, value);
	}
};

struct WMG_Graph_Manager_t1488325314_StaticFields
{
public:
	// System.Comparison`1<WMG_Node> WMG_Graph_Manager::<>f__am$cache0
	Comparison_1_t3387233917 * ___U3CU3Ef__amU24cache0_17;
	// System.Comparison`1<WMG_Node> WMG_Graph_Manager::<>f__am$cache1
	Comparison_1_t3387233917 * ___U3CU3Ef__amU24cache1_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_17() { return static_cast<int32_t>(offsetof(WMG_Graph_Manager_t1488325314_StaticFields, ___U3CU3Ef__amU24cache0_17)); }
	inline Comparison_1_t3387233917 * get_U3CU3Ef__amU24cache0_17() const { return ___U3CU3Ef__amU24cache0_17; }
	inline Comparison_1_t3387233917 ** get_address_of_U3CU3Ef__amU24cache0_17() { return &___U3CU3Ef__amU24cache0_17; }
	inline void set_U3CU3Ef__amU24cache0_17(Comparison_1_t3387233917 * value)
	{
		___U3CU3Ef__amU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_18() { return static_cast<int32_t>(offsetof(WMG_Graph_Manager_t1488325314_StaticFields, ___U3CU3Ef__amU24cache1_18)); }
	inline Comparison_1_t3387233917 * get_U3CU3Ef__amU24cache1_18() const { return ___U3CU3Ef__amU24cache1_18; }
	inline Comparison_1_t3387233917 ** get_address_of_U3CU3Ef__amU24cache1_18() { return &___U3CU3Ef__amU24cache1_18; }
	inline void set_U3CU3Ef__amU24cache1_18(Comparison_1_t3387233917 * value)
	{
		___U3CU3Ef__amU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
