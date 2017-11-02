#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Axis_Graph1917651748.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t172249107;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// WMG_List`1<System.String>
struct WMG_List_1_t181077265;
// System.Collections.Generic.List`1<WMG_Series>
struct List_1_t772101423;
// WMG_Series
struct WMG_Series_t1402980291;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Radar_Graph
struct  WMG_Radar_Graph_t3136528123  : public WMG_Axis_Graph_t1917651748
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Radar_Graph::_dataSeriesColors
	List_1_t1389513207 * ____dataSeriesColors_105;
	// WMG_List`1<UnityEngine.Color> WMG_Radar_Graph::dataSeriesColors
	WMG_List_1_t172249107 * ___dataSeriesColors_106;
	// System.Collections.Generic.List`1<System.String> WMG_Radar_Graph::_labelStrings
	List_1_t1398341365 * ____labelStrings_107;
	// WMG_List`1<System.String> WMG_Radar_Graph::labelStrings
	WMG_List_1_t181077265 * ___labelStrings_108;
	// System.Boolean WMG_Radar_Graph::randomData
	bool ___randomData_109;
	// System.Int32 WMG_Radar_Graph::_numPoints
	int32_t ____numPoints_110;
	// UnityEngine.Vector2 WMG_Radar_Graph::_offset
	Vector2_t2243707579  ____offset_111;
	// System.Single WMG_Radar_Graph::_degreeOffset
	float ____degreeOffset_112;
	// System.Single WMG_Radar_Graph::_radarMinVal
	float ____radarMinVal_113;
	// System.Single WMG_Radar_Graph::_radarMaxVal
	float ____radarMaxVal_114;
	// System.Int32 WMG_Radar_Graph::_numGrids
	int32_t ____numGrids_115;
	// System.Single WMG_Radar_Graph::_gridLineWidth
	float ____gridLineWidth_116;
	// UnityEngine.Color WMG_Radar_Graph::_gridColor
	Color_t2020392075  ____gridColor_117;
	// System.Int32 WMG_Radar_Graph::_numDataSeries
	int32_t ____numDataSeries_118;
	// System.Single WMG_Radar_Graph::_dataSeriesLineWidth
	float ____dataSeriesLineWidth_119;
	// UnityEngine.Color WMG_Radar_Graph::_labelsColor
	Color_t2020392075  ____labelsColor_120;
	// System.Single WMG_Radar_Graph::_labelsOffset
	float ____labelsOffset_121;
	// System.Int32 WMG_Radar_Graph::_fontSize
	int32_t ____fontSize_122;
	// System.Boolean WMG_Radar_Graph::_hideLabels
	bool ____hideLabels_123;
	// System.Collections.Generic.List`1<WMG_Series> WMG_Radar_Graph::grids
	List_1_t772101423 * ___grids_124;
	// System.Collections.Generic.List`1<WMG_Series> WMG_Radar_Graph::dataSeries
	List_1_t772101423 * ___dataSeries_125;
	// WMG_Series WMG_Radar_Graph::radarLabels
	WMG_Series_t1402980291 * ___radarLabels_126;
	// System.Boolean WMG_Radar_Graph::createdLabels
	bool ___createdLabels_127;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Radar_Graph::changeObjs
	List_1_t1684053944 * ___changeObjs_128;
	// WMG_Change_Obj WMG_Radar_Graph::radarGraphC
	WMG_Change_Obj_t2314932812 * ___radarGraphC_129;
	// WMG_Change_Obj WMG_Radar_Graph::gridsC
	WMG_Change_Obj_t2314932812 * ___gridsC_130;
	// WMG_Change_Obj WMG_Radar_Graph::labelsC
	WMG_Change_Obj_t2314932812 * ___labelsC_131;
	// WMG_Change_Obj WMG_Radar_Graph::dataSeriesC
	WMG_Change_Obj_t2314932812 * ___dataSeriesC_132;
	// System.Boolean WMG_Radar_Graph::hasInit2
	bool ___hasInit2_133;

public:
	inline static int32_t get_offset_of__dataSeriesColors_105() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____dataSeriesColors_105)); }
	inline List_1_t1389513207 * get__dataSeriesColors_105() const { return ____dataSeriesColors_105; }
	inline List_1_t1389513207 ** get_address_of__dataSeriesColors_105() { return &____dataSeriesColors_105; }
	inline void set__dataSeriesColors_105(List_1_t1389513207 * value)
	{
		____dataSeriesColors_105 = value;
		Il2CppCodeGenWriteBarrier(&____dataSeriesColors_105, value);
	}

	inline static int32_t get_offset_of_dataSeriesColors_106() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___dataSeriesColors_106)); }
	inline WMG_List_1_t172249107 * get_dataSeriesColors_106() const { return ___dataSeriesColors_106; }
	inline WMG_List_1_t172249107 ** get_address_of_dataSeriesColors_106() { return &___dataSeriesColors_106; }
	inline void set_dataSeriesColors_106(WMG_List_1_t172249107 * value)
	{
		___dataSeriesColors_106 = value;
		Il2CppCodeGenWriteBarrier(&___dataSeriesColors_106, value);
	}

	inline static int32_t get_offset_of__labelStrings_107() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____labelStrings_107)); }
	inline List_1_t1398341365 * get__labelStrings_107() const { return ____labelStrings_107; }
	inline List_1_t1398341365 ** get_address_of__labelStrings_107() { return &____labelStrings_107; }
	inline void set__labelStrings_107(List_1_t1398341365 * value)
	{
		____labelStrings_107 = value;
		Il2CppCodeGenWriteBarrier(&____labelStrings_107, value);
	}

	inline static int32_t get_offset_of_labelStrings_108() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___labelStrings_108)); }
	inline WMG_List_1_t181077265 * get_labelStrings_108() const { return ___labelStrings_108; }
	inline WMG_List_1_t181077265 ** get_address_of_labelStrings_108() { return &___labelStrings_108; }
	inline void set_labelStrings_108(WMG_List_1_t181077265 * value)
	{
		___labelStrings_108 = value;
		Il2CppCodeGenWriteBarrier(&___labelStrings_108, value);
	}

	inline static int32_t get_offset_of_randomData_109() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___randomData_109)); }
	inline bool get_randomData_109() const { return ___randomData_109; }
	inline bool* get_address_of_randomData_109() { return &___randomData_109; }
	inline void set_randomData_109(bool value)
	{
		___randomData_109 = value;
	}

	inline static int32_t get_offset_of__numPoints_110() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____numPoints_110)); }
	inline int32_t get__numPoints_110() const { return ____numPoints_110; }
	inline int32_t* get_address_of__numPoints_110() { return &____numPoints_110; }
	inline void set__numPoints_110(int32_t value)
	{
		____numPoints_110 = value;
	}

	inline static int32_t get_offset_of__offset_111() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____offset_111)); }
	inline Vector2_t2243707579  get__offset_111() const { return ____offset_111; }
	inline Vector2_t2243707579 * get_address_of__offset_111() { return &____offset_111; }
	inline void set__offset_111(Vector2_t2243707579  value)
	{
		____offset_111 = value;
	}

	inline static int32_t get_offset_of__degreeOffset_112() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____degreeOffset_112)); }
	inline float get__degreeOffset_112() const { return ____degreeOffset_112; }
	inline float* get_address_of__degreeOffset_112() { return &____degreeOffset_112; }
	inline void set__degreeOffset_112(float value)
	{
		____degreeOffset_112 = value;
	}

	inline static int32_t get_offset_of__radarMinVal_113() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____radarMinVal_113)); }
	inline float get__radarMinVal_113() const { return ____radarMinVal_113; }
	inline float* get_address_of__radarMinVal_113() { return &____radarMinVal_113; }
	inline void set__radarMinVal_113(float value)
	{
		____radarMinVal_113 = value;
	}

	inline static int32_t get_offset_of__radarMaxVal_114() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____radarMaxVal_114)); }
	inline float get__radarMaxVal_114() const { return ____radarMaxVal_114; }
	inline float* get_address_of__radarMaxVal_114() { return &____radarMaxVal_114; }
	inline void set__radarMaxVal_114(float value)
	{
		____radarMaxVal_114 = value;
	}

	inline static int32_t get_offset_of__numGrids_115() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____numGrids_115)); }
	inline int32_t get__numGrids_115() const { return ____numGrids_115; }
	inline int32_t* get_address_of__numGrids_115() { return &____numGrids_115; }
	inline void set__numGrids_115(int32_t value)
	{
		____numGrids_115 = value;
	}

	inline static int32_t get_offset_of__gridLineWidth_116() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____gridLineWidth_116)); }
	inline float get__gridLineWidth_116() const { return ____gridLineWidth_116; }
	inline float* get_address_of__gridLineWidth_116() { return &____gridLineWidth_116; }
	inline void set__gridLineWidth_116(float value)
	{
		____gridLineWidth_116 = value;
	}

	inline static int32_t get_offset_of__gridColor_117() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____gridColor_117)); }
	inline Color_t2020392075  get__gridColor_117() const { return ____gridColor_117; }
	inline Color_t2020392075 * get_address_of__gridColor_117() { return &____gridColor_117; }
	inline void set__gridColor_117(Color_t2020392075  value)
	{
		____gridColor_117 = value;
	}

	inline static int32_t get_offset_of__numDataSeries_118() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____numDataSeries_118)); }
	inline int32_t get__numDataSeries_118() const { return ____numDataSeries_118; }
	inline int32_t* get_address_of__numDataSeries_118() { return &____numDataSeries_118; }
	inline void set__numDataSeries_118(int32_t value)
	{
		____numDataSeries_118 = value;
	}

	inline static int32_t get_offset_of__dataSeriesLineWidth_119() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____dataSeriesLineWidth_119)); }
	inline float get__dataSeriesLineWidth_119() const { return ____dataSeriesLineWidth_119; }
	inline float* get_address_of__dataSeriesLineWidth_119() { return &____dataSeriesLineWidth_119; }
	inline void set__dataSeriesLineWidth_119(float value)
	{
		____dataSeriesLineWidth_119 = value;
	}

	inline static int32_t get_offset_of__labelsColor_120() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____labelsColor_120)); }
	inline Color_t2020392075  get__labelsColor_120() const { return ____labelsColor_120; }
	inline Color_t2020392075 * get_address_of__labelsColor_120() { return &____labelsColor_120; }
	inline void set__labelsColor_120(Color_t2020392075  value)
	{
		____labelsColor_120 = value;
	}

	inline static int32_t get_offset_of__labelsOffset_121() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____labelsOffset_121)); }
	inline float get__labelsOffset_121() const { return ____labelsOffset_121; }
	inline float* get_address_of__labelsOffset_121() { return &____labelsOffset_121; }
	inline void set__labelsOffset_121(float value)
	{
		____labelsOffset_121 = value;
	}

	inline static int32_t get_offset_of__fontSize_122() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____fontSize_122)); }
	inline int32_t get__fontSize_122() const { return ____fontSize_122; }
	inline int32_t* get_address_of__fontSize_122() { return &____fontSize_122; }
	inline void set__fontSize_122(int32_t value)
	{
		____fontSize_122 = value;
	}

	inline static int32_t get_offset_of__hideLabels_123() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ____hideLabels_123)); }
	inline bool get__hideLabels_123() const { return ____hideLabels_123; }
	inline bool* get_address_of__hideLabels_123() { return &____hideLabels_123; }
	inline void set__hideLabels_123(bool value)
	{
		____hideLabels_123 = value;
	}

	inline static int32_t get_offset_of_grids_124() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___grids_124)); }
	inline List_1_t772101423 * get_grids_124() const { return ___grids_124; }
	inline List_1_t772101423 ** get_address_of_grids_124() { return &___grids_124; }
	inline void set_grids_124(List_1_t772101423 * value)
	{
		___grids_124 = value;
		Il2CppCodeGenWriteBarrier(&___grids_124, value);
	}

	inline static int32_t get_offset_of_dataSeries_125() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___dataSeries_125)); }
	inline List_1_t772101423 * get_dataSeries_125() const { return ___dataSeries_125; }
	inline List_1_t772101423 ** get_address_of_dataSeries_125() { return &___dataSeries_125; }
	inline void set_dataSeries_125(List_1_t772101423 * value)
	{
		___dataSeries_125 = value;
		Il2CppCodeGenWriteBarrier(&___dataSeries_125, value);
	}

	inline static int32_t get_offset_of_radarLabels_126() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___radarLabels_126)); }
	inline WMG_Series_t1402980291 * get_radarLabels_126() const { return ___radarLabels_126; }
	inline WMG_Series_t1402980291 ** get_address_of_radarLabels_126() { return &___radarLabels_126; }
	inline void set_radarLabels_126(WMG_Series_t1402980291 * value)
	{
		___radarLabels_126 = value;
		Il2CppCodeGenWriteBarrier(&___radarLabels_126, value);
	}

	inline static int32_t get_offset_of_createdLabels_127() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___createdLabels_127)); }
	inline bool get_createdLabels_127() const { return ___createdLabels_127; }
	inline bool* get_address_of_createdLabels_127() { return &___createdLabels_127; }
	inline void set_createdLabels_127(bool value)
	{
		___createdLabels_127 = value;
	}

	inline static int32_t get_offset_of_changeObjs_128() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___changeObjs_128)); }
	inline List_1_t1684053944 * get_changeObjs_128() const { return ___changeObjs_128; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_128() { return &___changeObjs_128; }
	inline void set_changeObjs_128(List_1_t1684053944 * value)
	{
		___changeObjs_128 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_128, value);
	}

	inline static int32_t get_offset_of_radarGraphC_129() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___radarGraphC_129)); }
	inline WMG_Change_Obj_t2314932812 * get_radarGraphC_129() const { return ___radarGraphC_129; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_radarGraphC_129() { return &___radarGraphC_129; }
	inline void set_radarGraphC_129(WMG_Change_Obj_t2314932812 * value)
	{
		___radarGraphC_129 = value;
		Il2CppCodeGenWriteBarrier(&___radarGraphC_129, value);
	}

	inline static int32_t get_offset_of_gridsC_130() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___gridsC_130)); }
	inline WMG_Change_Obj_t2314932812 * get_gridsC_130() const { return ___gridsC_130; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_gridsC_130() { return &___gridsC_130; }
	inline void set_gridsC_130(WMG_Change_Obj_t2314932812 * value)
	{
		___gridsC_130 = value;
		Il2CppCodeGenWriteBarrier(&___gridsC_130, value);
	}

	inline static int32_t get_offset_of_labelsC_131() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___labelsC_131)); }
	inline WMG_Change_Obj_t2314932812 * get_labelsC_131() const { return ___labelsC_131; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_labelsC_131() { return &___labelsC_131; }
	inline void set_labelsC_131(WMG_Change_Obj_t2314932812 * value)
	{
		___labelsC_131 = value;
		Il2CppCodeGenWriteBarrier(&___labelsC_131, value);
	}

	inline static int32_t get_offset_of_dataSeriesC_132() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___dataSeriesC_132)); }
	inline WMG_Change_Obj_t2314932812 * get_dataSeriesC_132() const { return ___dataSeriesC_132; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_dataSeriesC_132() { return &___dataSeriesC_132; }
	inline void set_dataSeriesC_132(WMG_Change_Obj_t2314932812 * value)
	{
		___dataSeriesC_132 = value;
		Il2CppCodeGenWriteBarrier(&___dataSeriesC_132, value);
	}

	inline static int32_t get_offset_of_hasInit2_133() { return static_cast<int32_t>(offsetof(WMG_Radar_Graph_t3136528123, ___hasInit2_133)); }
	inline bool get_hasInit2_133() const { return ___hasInit2_133; }
	inline bool* get_address_of_hasInit2_133() { return &___hasInit2_133; }
	inline void set_hasInit2_133(bool value)
	{
		___hasInit2_133 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
