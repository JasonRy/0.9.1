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
// System.String
struct String_t;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;
// WMG_Series
struct WMG_Series_t1402980291;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Equation_Plotter
struct  WMG_X_Equation_Plotter_t3633801868  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Object WMG_X_Equation_Plotter::emptyGraphPrefab
	Object_t1021602117 * ___emptyGraphPrefab_2;
	// System.String WMG_X_Equation_Plotter::equationStr
	String_t* ___equationStr_3;
	// System.Single WMG_X_Equation_Plotter::minX
	float ___minX_4;
	// System.Single WMG_X_Equation_Plotter::maxX
	float ___maxX_5;
	// System.Single WMG_X_Equation_Plotter::intervalX
	float ___intervalX_6;
	// System.Int32 WMG_X_Equation_Plotter::numDecimalsToRound
	int32_t ___numDecimalsToRound_7;
	// WMG_Axis_Graph WMG_X_Equation_Plotter::graph
	WMG_Axis_Graph_t1917651748 * ___graph_8;
	// WMG_Series WMG_X_Equation_Plotter::series
	WMG_Series_t1402980291 * ___series_9;
	// System.Single WMG_X_Equation_Plotter::decimalsMultiplier
	float ___decimalsMultiplier_10;
	// System.Text.RegularExpressions.Regex WMG_X_Equation_Plotter::operatorAndParenthesesRegex
	Regex_t1803876613 * ___operatorAndParenthesesRegex_11;

public:
	inline static int32_t get_offset_of_emptyGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___emptyGraphPrefab_2)); }
	inline Object_t1021602117 * get_emptyGraphPrefab_2() const { return ___emptyGraphPrefab_2; }
	inline Object_t1021602117 ** get_address_of_emptyGraphPrefab_2() { return &___emptyGraphPrefab_2; }
	inline void set_emptyGraphPrefab_2(Object_t1021602117 * value)
	{
		___emptyGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___emptyGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_equationStr_3() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___equationStr_3)); }
	inline String_t* get_equationStr_3() const { return ___equationStr_3; }
	inline String_t** get_address_of_equationStr_3() { return &___equationStr_3; }
	inline void set_equationStr_3(String_t* value)
	{
		___equationStr_3 = value;
		Il2CppCodeGenWriteBarrier(&___equationStr_3, value);
	}

	inline static int32_t get_offset_of_minX_4() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___minX_4)); }
	inline float get_minX_4() const { return ___minX_4; }
	inline float* get_address_of_minX_4() { return &___minX_4; }
	inline void set_minX_4(float value)
	{
		___minX_4 = value;
	}

	inline static int32_t get_offset_of_maxX_5() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___maxX_5)); }
	inline float get_maxX_5() const { return ___maxX_5; }
	inline float* get_address_of_maxX_5() { return &___maxX_5; }
	inline void set_maxX_5(float value)
	{
		___maxX_5 = value;
	}

	inline static int32_t get_offset_of_intervalX_6() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___intervalX_6)); }
	inline float get_intervalX_6() const { return ___intervalX_6; }
	inline float* get_address_of_intervalX_6() { return &___intervalX_6; }
	inline void set_intervalX_6(float value)
	{
		___intervalX_6 = value;
	}

	inline static int32_t get_offset_of_numDecimalsToRound_7() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___numDecimalsToRound_7)); }
	inline int32_t get_numDecimalsToRound_7() const { return ___numDecimalsToRound_7; }
	inline int32_t* get_address_of_numDecimalsToRound_7() { return &___numDecimalsToRound_7; }
	inline void set_numDecimalsToRound_7(int32_t value)
	{
		___numDecimalsToRound_7 = value;
	}

	inline static int32_t get_offset_of_graph_8() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___graph_8)); }
	inline WMG_Axis_Graph_t1917651748 * get_graph_8() const { return ___graph_8; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_graph_8() { return &___graph_8; }
	inline void set_graph_8(WMG_Axis_Graph_t1917651748 * value)
	{
		___graph_8 = value;
		Il2CppCodeGenWriteBarrier(&___graph_8, value);
	}

	inline static int32_t get_offset_of_series_9() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___series_9)); }
	inline WMG_Series_t1402980291 * get_series_9() const { return ___series_9; }
	inline WMG_Series_t1402980291 ** get_address_of_series_9() { return &___series_9; }
	inline void set_series_9(WMG_Series_t1402980291 * value)
	{
		___series_9 = value;
		Il2CppCodeGenWriteBarrier(&___series_9, value);
	}

	inline static int32_t get_offset_of_decimalsMultiplier_10() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___decimalsMultiplier_10)); }
	inline float get_decimalsMultiplier_10() const { return ___decimalsMultiplier_10; }
	inline float* get_address_of_decimalsMultiplier_10() { return &___decimalsMultiplier_10; }
	inline void set_decimalsMultiplier_10(float value)
	{
		___decimalsMultiplier_10 = value;
	}

	inline static int32_t get_offset_of_operatorAndParenthesesRegex_11() { return static_cast<int32_t>(offsetof(WMG_X_Equation_Plotter_t3633801868, ___operatorAndParenthesesRegex_11)); }
	inline Regex_t1803876613 * get_operatorAndParenthesesRegex_11() const { return ___operatorAndParenthesesRegex_11; }
	inline Regex_t1803876613 ** get_address_of_operatorAndParenthesesRegex_11() { return &___operatorAndParenthesesRegex_11; }
	inline void set_operatorAndParenthesesRegex_11(Regex_t1803876613 * value)
	{
		___operatorAndParenthesesRegex_11 = value;
		Il2CppCodeGenWriteBarrier(&___operatorAndParenthesesRegex_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
