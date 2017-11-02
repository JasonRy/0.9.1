#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ConsoleApplication_LocalProcessi2595872853.h"

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Transform
struct Transform_t3275118058;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;
// WMG_Series
struct WMG_Series_t1402980291;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DBM_CreatePlot
struct  DBM_CreatePlot_t304977209  : public MonoBehaviour_t1158329972
{
public:
	// ConsoleApplication.LocalProcessing/depData DBM_CreatePlot::depData
	depData_t2595872853  ___depData_2;
	// System.String DBM_CreatePlot::URL
	String_t* ___URL_3;
	// UnityEngine.Object DBM_CreatePlot::emptyGraphPrefab
	Object_t1021602117 * ___emptyGraphPrefab_4;
	// UnityEngine.Transform DBM_CreatePlot::targetParent
	Transform_t3275118058 * ___targetParent_5;
	// WMG_Axis_Graph DBM_CreatePlot::graph
	WMG_Axis_Graph_t1917651748 * ___graph_6;
	// WMG_Series DBM_CreatePlot::male
	WMG_Series_t1402980291 * ___male_7;
	// WMG_Series DBM_CreatePlot::female
	WMG_Series_t1402980291 * ___female_8;
	// System.Int32 DBM_CreatePlot::minX
	int32_t ___minX_9;
	// System.Int32 DBM_CreatePlot::maxX
	int32_t ___maxX_10;
	// System.Int32 DBM_CreatePlot::intervalX
	int32_t ___intervalX_11;
	// System.Int32 DBM_CreatePlot::maxY
	int32_t ___maxY_12;
	// System.Collections.Generic.List`1<System.Int32> DBM_CreatePlot::maleDeparture
	List_1_t1440998580 * ___maleDeparture_13;
	// System.Collections.Generic.List`1<System.Int32> DBM_CreatePlot::femaleDeparture
	List_1_t1440998580 * ___femaleDeparture_14;

public:
	inline static int32_t get_offset_of_depData_2() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___depData_2)); }
	inline depData_t2595872853  get_depData_2() const { return ___depData_2; }
	inline depData_t2595872853 * get_address_of_depData_2() { return &___depData_2; }
	inline void set_depData_2(depData_t2595872853  value)
	{
		___depData_2 = value;
	}

	inline static int32_t get_offset_of_URL_3() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___URL_3)); }
	inline String_t* get_URL_3() const { return ___URL_3; }
	inline String_t** get_address_of_URL_3() { return &___URL_3; }
	inline void set_URL_3(String_t* value)
	{
		___URL_3 = value;
		Il2CppCodeGenWriteBarrier(&___URL_3, value);
	}

	inline static int32_t get_offset_of_emptyGraphPrefab_4() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___emptyGraphPrefab_4)); }
	inline Object_t1021602117 * get_emptyGraphPrefab_4() const { return ___emptyGraphPrefab_4; }
	inline Object_t1021602117 ** get_address_of_emptyGraphPrefab_4() { return &___emptyGraphPrefab_4; }
	inline void set_emptyGraphPrefab_4(Object_t1021602117 * value)
	{
		___emptyGraphPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___emptyGraphPrefab_4, value);
	}

	inline static int32_t get_offset_of_targetParent_5() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___targetParent_5)); }
	inline Transform_t3275118058 * get_targetParent_5() const { return ___targetParent_5; }
	inline Transform_t3275118058 ** get_address_of_targetParent_5() { return &___targetParent_5; }
	inline void set_targetParent_5(Transform_t3275118058 * value)
	{
		___targetParent_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetParent_5, value);
	}

	inline static int32_t get_offset_of_graph_6() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___graph_6)); }
	inline WMG_Axis_Graph_t1917651748 * get_graph_6() const { return ___graph_6; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_graph_6() { return &___graph_6; }
	inline void set_graph_6(WMG_Axis_Graph_t1917651748 * value)
	{
		___graph_6 = value;
		Il2CppCodeGenWriteBarrier(&___graph_6, value);
	}

	inline static int32_t get_offset_of_male_7() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___male_7)); }
	inline WMG_Series_t1402980291 * get_male_7() const { return ___male_7; }
	inline WMG_Series_t1402980291 ** get_address_of_male_7() { return &___male_7; }
	inline void set_male_7(WMG_Series_t1402980291 * value)
	{
		___male_7 = value;
		Il2CppCodeGenWriteBarrier(&___male_7, value);
	}

	inline static int32_t get_offset_of_female_8() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___female_8)); }
	inline WMG_Series_t1402980291 * get_female_8() const { return ___female_8; }
	inline WMG_Series_t1402980291 ** get_address_of_female_8() { return &___female_8; }
	inline void set_female_8(WMG_Series_t1402980291 * value)
	{
		___female_8 = value;
		Il2CppCodeGenWriteBarrier(&___female_8, value);
	}

	inline static int32_t get_offset_of_minX_9() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___minX_9)); }
	inline int32_t get_minX_9() const { return ___minX_9; }
	inline int32_t* get_address_of_minX_9() { return &___minX_9; }
	inline void set_minX_9(int32_t value)
	{
		___minX_9 = value;
	}

	inline static int32_t get_offset_of_maxX_10() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___maxX_10)); }
	inline int32_t get_maxX_10() const { return ___maxX_10; }
	inline int32_t* get_address_of_maxX_10() { return &___maxX_10; }
	inline void set_maxX_10(int32_t value)
	{
		___maxX_10 = value;
	}

	inline static int32_t get_offset_of_intervalX_11() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___intervalX_11)); }
	inline int32_t get_intervalX_11() const { return ___intervalX_11; }
	inline int32_t* get_address_of_intervalX_11() { return &___intervalX_11; }
	inline void set_intervalX_11(int32_t value)
	{
		___intervalX_11 = value;
	}

	inline static int32_t get_offset_of_maxY_12() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___maxY_12)); }
	inline int32_t get_maxY_12() const { return ___maxY_12; }
	inline int32_t* get_address_of_maxY_12() { return &___maxY_12; }
	inline void set_maxY_12(int32_t value)
	{
		___maxY_12 = value;
	}

	inline static int32_t get_offset_of_maleDeparture_13() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___maleDeparture_13)); }
	inline List_1_t1440998580 * get_maleDeparture_13() const { return ___maleDeparture_13; }
	inline List_1_t1440998580 ** get_address_of_maleDeparture_13() { return &___maleDeparture_13; }
	inline void set_maleDeparture_13(List_1_t1440998580 * value)
	{
		___maleDeparture_13 = value;
		Il2CppCodeGenWriteBarrier(&___maleDeparture_13, value);
	}

	inline static int32_t get_offset_of_femaleDeparture_14() { return static_cast<int32_t>(offsetof(DBM_CreatePlot_t304977209, ___femaleDeparture_14)); }
	inline List_1_t1440998580 * get_femaleDeparture_14() const { return ___femaleDeparture_14; }
	inline List_1_t1440998580 ** get_address_of_femaleDeparture_14() { return &___femaleDeparture_14; }
	inline void set_femaleDeparture_14(List_1_t1440998580 * value)
	{
		___femaleDeparture_14 = value;
		Il2CppCodeGenWriteBarrier(&___femaleDeparture_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
