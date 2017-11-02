#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"

// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;
// WMG_Series
struct WMG_Series_t1402980291;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// DG.Tweening.Tween
struct Tween_t278478013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Plot_Overtime
struct  WMG_X_Plot_Overtime_t2667371262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Object WMG_X_Plot_Overtime::emptyGraphPrefab
	Object_t1021602117 * ___emptyGraphPrefab_2;
	// System.Boolean WMG_X_Plot_Overtime::plotOnStart
	bool ___plotOnStart_3;
	// System.Boolean WMG_X_Plot_Overtime::_plottingData
	bool ____plottingData_4;
	// System.Single WMG_X_Plot_Overtime::plotIntervalSeconds
	float ___plotIntervalSeconds_5;
	// System.Single WMG_X_Plot_Overtime::plotAnimationSeconds
	float ___plotAnimationSeconds_6;
	// DG.Tweening.Ease WMG_X_Plot_Overtime::plotEaseType
	int32_t ___plotEaseType_7;
	// System.Single WMG_X_Plot_Overtime::xInterval
	float ___xInterval_8;
	// System.Boolean WMG_X_Plot_Overtime::useAreaShading
	bool ___useAreaShading_9;
	// System.Boolean WMG_X_Plot_Overtime::useComputeShader
	bool ___useComputeShader_10;
	// System.Boolean WMG_X_Plot_Overtime::blinkCurrentPoint
	bool ___blinkCurrentPoint_11;
	// System.Single WMG_X_Plot_Overtime::blinkAnimDuration
	float ___blinkAnimDuration_12;
	// System.Single WMG_X_Plot_Overtime::blinkScale
	float ___blinkScale_13;
	// System.Boolean WMG_X_Plot_Overtime::moveXaxisMinimum
	bool ___moveXaxisMinimum_14;
	// UnityEngine.Object WMG_X_Plot_Overtime::indicatorPrefab
	Object_t1021602117 * ___indicatorPrefab_15;
	// System.Int32 WMG_X_Plot_Overtime::indicatorNumDecimals
	int32_t ___indicatorNumDecimals_16;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_X_Plot_Overtime::changeObjs
	List_1_t1684053944 * ___changeObjs_17;
	// WMG_Change_Obj WMG_X_Plot_Overtime::plottingDataC
	WMG_Change_Obj_t2314932812 * ___plottingDataC_18;
	// WMG_Axis_Graph WMG_X_Plot_Overtime::graph
	WMG_Axis_Graph_t1917651748 * ___graph_19;
	// WMG_Series WMG_X_Plot_Overtime::series1
	WMG_Series_t1402980291 * ___series1_20;
	// UnityEngine.GameObject WMG_X_Plot_Overtime::graphOverlay
	GameObject_t1756533147 * ___graphOverlay_21;
	// UnityEngine.GameObject WMG_X_Plot_Overtime::indicatorGO
	GameObject_t1756533147 * ___indicatorGO_22;
	// System.Globalization.NumberFormatInfo WMG_X_Plot_Overtime::tooltipNumberFormatInfo
	NumberFormatInfo_t104580544 * ___tooltipNumberFormatInfo_23;
	// System.Globalization.NumberFormatInfo WMG_X_Plot_Overtime::yAxisNumberFormatInfo
	NumberFormatInfo_t104580544 * ___yAxisNumberFormatInfo_24;
	// System.Globalization.NumberFormatInfo WMG_X_Plot_Overtime::seriesDataLabelsNumberFormatInfo
	NumberFormatInfo_t104580544 * ___seriesDataLabelsNumberFormatInfo_25;
	// System.Globalization.NumberFormatInfo WMG_X_Plot_Overtime::indicatorLabelNumberFormatInfo
	NumberFormatInfo_t104580544 * ___indicatorLabelNumberFormatInfo_26;
	// System.Single WMG_X_Plot_Overtime::addPointAnimTimeline
	float ___addPointAnimTimeline_27;
	// DG.Tweening.Tween WMG_X_Plot_Overtime::blinkingTween
	Tween_t278478013 * ___blinkingTween_28;

public:
	inline static int32_t get_offset_of_emptyGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___emptyGraphPrefab_2)); }
	inline Object_t1021602117 * get_emptyGraphPrefab_2() const { return ___emptyGraphPrefab_2; }
	inline Object_t1021602117 ** get_address_of_emptyGraphPrefab_2() { return &___emptyGraphPrefab_2; }
	inline void set_emptyGraphPrefab_2(Object_t1021602117 * value)
	{
		___emptyGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___emptyGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_plotOnStart_3() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___plotOnStart_3)); }
	inline bool get_plotOnStart_3() const { return ___plotOnStart_3; }
	inline bool* get_address_of_plotOnStart_3() { return &___plotOnStart_3; }
	inline void set_plotOnStart_3(bool value)
	{
		___plotOnStart_3 = value;
	}

	inline static int32_t get_offset_of__plottingData_4() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ____plottingData_4)); }
	inline bool get__plottingData_4() const { return ____plottingData_4; }
	inline bool* get_address_of__plottingData_4() { return &____plottingData_4; }
	inline void set__plottingData_4(bool value)
	{
		____plottingData_4 = value;
	}

	inline static int32_t get_offset_of_plotIntervalSeconds_5() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___plotIntervalSeconds_5)); }
	inline float get_plotIntervalSeconds_5() const { return ___plotIntervalSeconds_5; }
	inline float* get_address_of_plotIntervalSeconds_5() { return &___plotIntervalSeconds_5; }
	inline void set_plotIntervalSeconds_5(float value)
	{
		___plotIntervalSeconds_5 = value;
	}

	inline static int32_t get_offset_of_plotAnimationSeconds_6() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___plotAnimationSeconds_6)); }
	inline float get_plotAnimationSeconds_6() const { return ___plotAnimationSeconds_6; }
	inline float* get_address_of_plotAnimationSeconds_6() { return &___plotAnimationSeconds_6; }
	inline void set_plotAnimationSeconds_6(float value)
	{
		___plotAnimationSeconds_6 = value;
	}

	inline static int32_t get_offset_of_plotEaseType_7() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___plotEaseType_7)); }
	inline int32_t get_plotEaseType_7() const { return ___plotEaseType_7; }
	inline int32_t* get_address_of_plotEaseType_7() { return &___plotEaseType_7; }
	inline void set_plotEaseType_7(int32_t value)
	{
		___plotEaseType_7 = value;
	}

	inline static int32_t get_offset_of_xInterval_8() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___xInterval_8)); }
	inline float get_xInterval_8() const { return ___xInterval_8; }
	inline float* get_address_of_xInterval_8() { return &___xInterval_8; }
	inline void set_xInterval_8(float value)
	{
		___xInterval_8 = value;
	}

	inline static int32_t get_offset_of_useAreaShading_9() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___useAreaShading_9)); }
	inline bool get_useAreaShading_9() const { return ___useAreaShading_9; }
	inline bool* get_address_of_useAreaShading_9() { return &___useAreaShading_9; }
	inline void set_useAreaShading_9(bool value)
	{
		___useAreaShading_9 = value;
	}

	inline static int32_t get_offset_of_useComputeShader_10() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___useComputeShader_10)); }
	inline bool get_useComputeShader_10() const { return ___useComputeShader_10; }
	inline bool* get_address_of_useComputeShader_10() { return &___useComputeShader_10; }
	inline void set_useComputeShader_10(bool value)
	{
		___useComputeShader_10 = value;
	}

	inline static int32_t get_offset_of_blinkCurrentPoint_11() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___blinkCurrentPoint_11)); }
	inline bool get_blinkCurrentPoint_11() const { return ___blinkCurrentPoint_11; }
	inline bool* get_address_of_blinkCurrentPoint_11() { return &___blinkCurrentPoint_11; }
	inline void set_blinkCurrentPoint_11(bool value)
	{
		___blinkCurrentPoint_11 = value;
	}

	inline static int32_t get_offset_of_blinkAnimDuration_12() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___blinkAnimDuration_12)); }
	inline float get_blinkAnimDuration_12() const { return ___blinkAnimDuration_12; }
	inline float* get_address_of_blinkAnimDuration_12() { return &___blinkAnimDuration_12; }
	inline void set_blinkAnimDuration_12(float value)
	{
		___blinkAnimDuration_12 = value;
	}

	inline static int32_t get_offset_of_blinkScale_13() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___blinkScale_13)); }
	inline float get_blinkScale_13() const { return ___blinkScale_13; }
	inline float* get_address_of_blinkScale_13() { return &___blinkScale_13; }
	inline void set_blinkScale_13(float value)
	{
		___blinkScale_13 = value;
	}

	inline static int32_t get_offset_of_moveXaxisMinimum_14() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___moveXaxisMinimum_14)); }
	inline bool get_moveXaxisMinimum_14() const { return ___moveXaxisMinimum_14; }
	inline bool* get_address_of_moveXaxisMinimum_14() { return &___moveXaxisMinimum_14; }
	inline void set_moveXaxisMinimum_14(bool value)
	{
		___moveXaxisMinimum_14 = value;
	}

	inline static int32_t get_offset_of_indicatorPrefab_15() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___indicatorPrefab_15)); }
	inline Object_t1021602117 * get_indicatorPrefab_15() const { return ___indicatorPrefab_15; }
	inline Object_t1021602117 ** get_address_of_indicatorPrefab_15() { return &___indicatorPrefab_15; }
	inline void set_indicatorPrefab_15(Object_t1021602117 * value)
	{
		___indicatorPrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&___indicatorPrefab_15, value);
	}

	inline static int32_t get_offset_of_indicatorNumDecimals_16() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___indicatorNumDecimals_16)); }
	inline int32_t get_indicatorNumDecimals_16() const { return ___indicatorNumDecimals_16; }
	inline int32_t* get_address_of_indicatorNumDecimals_16() { return &___indicatorNumDecimals_16; }
	inline void set_indicatorNumDecimals_16(int32_t value)
	{
		___indicatorNumDecimals_16 = value;
	}

	inline static int32_t get_offset_of_changeObjs_17() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___changeObjs_17)); }
	inline List_1_t1684053944 * get_changeObjs_17() const { return ___changeObjs_17; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_17() { return &___changeObjs_17; }
	inline void set_changeObjs_17(List_1_t1684053944 * value)
	{
		___changeObjs_17 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_17, value);
	}

	inline static int32_t get_offset_of_plottingDataC_18() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___plottingDataC_18)); }
	inline WMG_Change_Obj_t2314932812 * get_plottingDataC_18() const { return ___plottingDataC_18; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_plottingDataC_18() { return &___plottingDataC_18; }
	inline void set_plottingDataC_18(WMG_Change_Obj_t2314932812 * value)
	{
		___plottingDataC_18 = value;
		Il2CppCodeGenWriteBarrier(&___plottingDataC_18, value);
	}

	inline static int32_t get_offset_of_graph_19() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___graph_19)); }
	inline WMG_Axis_Graph_t1917651748 * get_graph_19() const { return ___graph_19; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_graph_19() { return &___graph_19; }
	inline void set_graph_19(WMG_Axis_Graph_t1917651748 * value)
	{
		___graph_19 = value;
		Il2CppCodeGenWriteBarrier(&___graph_19, value);
	}

	inline static int32_t get_offset_of_series1_20() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___series1_20)); }
	inline WMG_Series_t1402980291 * get_series1_20() const { return ___series1_20; }
	inline WMG_Series_t1402980291 ** get_address_of_series1_20() { return &___series1_20; }
	inline void set_series1_20(WMG_Series_t1402980291 * value)
	{
		___series1_20 = value;
		Il2CppCodeGenWriteBarrier(&___series1_20, value);
	}

	inline static int32_t get_offset_of_graphOverlay_21() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___graphOverlay_21)); }
	inline GameObject_t1756533147 * get_graphOverlay_21() const { return ___graphOverlay_21; }
	inline GameObject_t1756533147 ** get_address_of_graphOverlay_21() { return &___graphOverlay_21; }
	inline void set_graphOverlay_21(GameObject_t1756533147 * value)
	{
		___graphOverlay_21 = value;
		Il2CppCodeGenWriteBarrier(&___graphOverlay_21, value);
	}

	inline static int32_t get_offset_of_indicatorGO_22() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___indicatorGO_22)); }
	inline GameObject_t1756533147 * get_indicatorGO_22() const { return ___indicatorGO_22; }
	inline GameObject_t1756533147 ** get_address_of_indicatorGO_22() { return &___indicatorGO_22; }
	inline void set_indicatorGO_22(GameObject_t1756533147 * value)
	{
		___indicatorGO_22 = value;
		Il2CppCodeGenWriteBarrier(&___indicatorGO_22, value);
	}

	inline static int32_t get_offset_of_tooltipNumberFormatInfo_23() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___tooltipNumberFormatInfo_23)); }
	inline NumberFormatInfo_t104580544 * get_tooltipNumberFormatInfo_23() const { return ___tooltipNumberFormatInfo_23; }
	inline NumberFormatInfo_t104580544 ** get_address_of_tooltipNumberFormatInfo_23() { return &___tooltipNumberFormatInfo_23; }
	inline void set_tooltipNumberFormatInfo_23(NumberFormatInfo_t104580544 * value)
	{
		___tooltipNumberFormatInfo_23 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipNumberFormatInfo_23, value);
	}

	inline static int32_t get_offset_of_yAxisNumberFormatInfo_24() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___yAxisNumberFormatInfo_24)); }
	inline NumberFormatInfo_t104580544 * get_yAxisNumberFormatInfo_24() const { return ___yAxisNumberFormatInfo_24; }
	inline NumberFormatInfo_t104580544 ** get_address_of_yAxisNumberFormatInfo_24() { return &___yAxisNumberFormatInfo_24; }
	inline void set_yAxisNumberFormatInfo_24(NumberFormatInfo_t104580544 * value)
	{
		___yAxisNumberFormatInfo_24 = value;
		Il2CppCodeGenWriteBarrier(&___yAxisNumberFormatInfo_24, value);
	}

	inline static int32_t get_offset_of_seriesDataLabelsNumberFormatInfo_25() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___seriesDataLabelsNumberFormatInfo_25)); }
	inline NumberFormatInfo_t104580544 * get_seriesDataLabelsNumberFormatInfo_25() const { return ___seriesDataLabelsNumberFormatInfo_25; }
	inline NumberFormatInfo_t104580544 ** get_address_of_seriesDataLabelsNumberFormatInfo_25() { return &___seriesDataLabelsNumberFormatInfo_25; }
	inline void set_seriesDataLabelsNumberFormatInfo_25(NumberFormatInfo_t104580544 * value)
	{
		___seriesDataLabelsNumberFormatInfo_25 = value;
		Il2CppCodeGenWriteBarrier(&___seriesDataLabelsNumberFormatInfo_25, value);
	}

	inline static int32_t get_offset_of_indicatorLabelNumberFormatInfo_26() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___indicatorLabelNumberFormatInfo_26)); }
	inline NumberFormatInfo_t104580544 * get_indicatorLabelNumberFormatInfo_26() const { return ___indicatorLabelNumberFormatInfo_26; }
	inline NumberFormatInfo_t104580544 ** get_address_of_indicatorLabelNumberFormatInfo_26() { return &___indicatorLabelNumberFormatInfo_26; }
	inline void set_indicatorLabelNumberFormatInfo_26(NumberFormatInfo_t104580544 * value)
	{
		___indicatorLabelNumberFormatInfo_26 = value;
		Il2CppCodeGenWriteBarrier(&___indicatorLabelNumberFormatInfo_26, value);
	}

	inline static int32_t get_offset_of_addPointAnimTimeline_27() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___addPointAnimTimeline_27)); }
	inline float get_addPointAnimTimeline_27() const { return ___addPointAnimTimeline_27; }
	inline float* get_address_of_addPointAnimTimeline_27() { return &___addPointAnimTimeline_27; }
	inline void set_addPointAnimTimeline_27(float value)
	{
		___addPointAnimTimeline_27 = value;
	}

	inline static int32_t get_offset_of_blinkingTween_28() { return static_cast<int32_t>(offsetof(WMG_X_Plot_Overtime_t2667371262, ___blinkingTween_28)); }
	inline Tween_t278478013 * get_blinkingTween_28() const { return ___blinkingTween_28; }
	inline Tween_t278478013 ** get_address_of_blinkingTween_28() { return &___blinkingTween_28; }
	inline void set_blinkingTween_28(Tween_t278478013 * value)
	{
		___blinkingTween_28 = value;
		Il2CppCodeGenWriteBarrier(&___blinkingTween_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
