#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Pie_Graph
struct WMG_Pie_Graph_t252836487;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Simple_Pie
struct  WMG_X_Simple_Pie_t139636216  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WMG_X_Simple_Pie::emptyPiePrefab
	GameObject_t1756533147 * ___emptyPiePrefab_2;
	// WMG_Pie_Graph WMG_X_Simple_Pie::pieGraph
	WMG_Pie_Graph_t252836487 * ___pieGraph_3;
	// System.Collections.Generic.List`1<System.Single> WMG_X_Simple_Pie::testData
	List_1_t1445631064 * ___testData_4;
	// System.Collections.Generic.List`1<System.String> WMG_X_Simple_Pie::testStrings
	List_1_t1398341365 * ___testStrings_5;

public:
	inline static int32_t get_offset_of_emptyPiePrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Simple_Pie_t139636216, ___emptyPiePrefab_2)); }
	inline GameObject_t1756533147 * get_emptyPiePrefab_2() const { return ___emptyPiePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_emptyPiePrefab_2() { return &___emptyPiePrefab_2; }
	inline void set_emptyPiePrefab_2(GameObject_t1756533147 * value)
	{
		___emptyPiePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___emptyPiePrefab_2, value);
	}

	inline static int32_t get_offset_of_pieGraph_3() { return static_cast<int32_t>(offsetof(WMG_X_Simple_Pie_t139636216, ___pieGraph_3)); }
	inline WMG_Pie_Graph_t252836487 * get_pieGraph_3() const { return ___pieGraph_3; }
	inline WMG_Pie_Graph_t252836487 ** get_address_of_pieGraph_3() { return &___pieGraph_3; }
	inline void set_pieGraph_3(WMG_Pie_Graph_t252836487 * value)
	{
		___pieGraph_3 = value;
		Il2CppCodeGenWriteBarrier(&___pieGraph_3, value);
	}

	inline static int32_t get_offset_of_testData_4() { return static_cast<int32_t>(offsetof(WMG_X_Simple_Pie_t139636216, ___testData_4)); }
	inline List_1_t1445631064 * get_testData_4() const { return ___testData_4; }
	inline List_1_t1445631064 ** get_address_of_testData_4() { return &___testData_4; }
	inline void set_testData_4(List_1_t1445631064 * value)
	{
		___testData_4 = value;
		Il2CppCodeGenWriteBarrier(&___testData_4, value);
	}

	inline static int32_t get_offset_of_testStrings_5() { return static_cast<int32_t>(offsetof(WMG_X_Simple_Pie_t139636216, ___testStrings_5)); }
	inline List_1_t1398341365 * get_testStrings_5() const { return ___testStrings_5; }
	inline List_1_t1398341365 ** get_address_of_testStrings_5() { return &___testStrings_5; }
	inline void set_testStrings_5(List_1_t1398341365 * value)
	{
		___testStrings_5 = value;
		Il2CppCodeGenWriteBarrier(&___testStrings_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
