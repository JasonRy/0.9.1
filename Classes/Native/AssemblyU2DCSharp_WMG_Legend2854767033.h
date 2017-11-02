#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_GUI_Functions3530287521.h"
#include "AssemblyU2DCSharp_WMG_Legend_legendTypes3974389206.h"
#include "AssemblyU2DCSharp_WMG_Enums_labelTypes3771076890.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"

// WMG_Graph_Manager
struct WMG_Graph_Manager_t1488325314;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<WMG_Legend_Entry>
struct List_1_t1621299440;
// WMG_Pie_Graph
struct WMG_Pie_Graph_t252836487;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;
// UnityEngine.Font
struct Font_t4239498691;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Legend
struct  WMG_Legend_t2854767033  : public WMG_GUI_Functions_t3530287521
{
public:
	// WMG_Graph_Manager WMG_Legend::theGraph
	WMG_Graph_Manager_t1488325314 * ___theGraph_2;
	// UnityEngine.GameObject WMG_Legend::background
	GameObject_t1756533147 * ___background_3;
	// UnityEngine.GameObject WMG_Legend::entriesParent
	GameObject_t1756533147 * ___entriesParent_4;
	// UnityEngine.Object WMG_Legend::emptyPrefab
	Object_t1021602117 * ___emptyPrefab_5;
	// System.Collections.Generic.List`1<WMG_Legend_Entry> WMG_Legend::legendEntries
	List_1_t1621299440 * ___legendEntries_6;
	// WMG_Pie_Graph WMG_Legend::pieGraph
	WMG_Pie_Graph_t252836487 * ___pieGraph_7;
	// WMG_Axis_Graph WMG_Legend::axisGraph
	WMG_Axis_Graph_t1917651748 * ___axisGraph_8;
	// System.Boolean WMG_Legend::_hideLegend
	bool ____hideLegend_9;
	// WMG_Legend/legendTypes WMG_Legend::_legendType
	int32_t ____legendType_10;
	// WMG_Enums/labelTypes WMG_Legend::_labelType
	int32_t ____labelType_11;
	// System.Boolean WMG_Legend::_showBackground
	bool ____showBackground_12;
	// System.Boolean WMG_Legend::_oppositeSideLegend
	bool ____oppositeSideLegend_13;
	// System.Single WMG_Legend::_offset
	float ____offset_14;
	// System.Single WMG_Legend::_legendEntryWidth
	float ____legendEntryWidth_15;
	// System.Boolean WMG_Legend::_setWidthFromLabels
	bool ____setWidthFromLabels_16;
	// System.Single WMG_Legend::_legendEntryHeight
	float ____legendEntryHeight_17;
	// System.Int32 WMG_Legend::_numRowsOrColumns
	int32_t ____numRowsOrColumns_18;
	// System.Int32 WMG_Legend::_numDecimals
	int32_t ____numDecimals_19;
	// System.Single WMG_Legend::_legendEntryLinkSpacing
	float ____legendEntryLinkSpacing_20;
	// System.Int32 WMG_Legend::_legendEntryFontSize
	int32_t ____legendEntryFontSize_21;
	// System.Single WMG_Legend::_legendEntrySpacing
	float ____legendEntrySpacing_22;
	// System.Single WMG_Legend::_pieSwatchSize
	float ____pieSwatchSize_23;
	// System.Single WMG_Legend::_backgroundPadding
	float ____backgroundPadding_24;
	// System.Boolean WMG_Legend::_autofitEnabled
	bool ____autofitEnabled_25;
	// UnityEngine.Color WMG_Legend::_labelColor
	Color_t2020392075  ____labelColor_26;
	// UnityEngine.FontStyle WMG_Legend::_legendEntryFontStyle
	int32_t ____legendEntryFontStyle_27;
	// UnityEngine.Font WMG_Legend::_legendEntryFont
	Font_t4239498691 * ____legendEntryFont_28;
	// System.Single WMG_Legend::<origLegendEntryWidth>k__BackingField
	float ___U3CorigLegendEntryWidthU3Ek__BackingField_29;
	// System.Single WMG_Legend::<origLegendEntryHeight>k__BackingField
	float ___U3CorigLegendEntryHeightU3Ek__BackingField_30;
	// System.Single WMG_Legend::<origLegendEntryLinkSpacing>k__BackingField
	float ___U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31;
	// System.Int32 WMG_Legend::<origLegendEntryFontSize>k__BackingField
	int32_t ___U3CorigLegendEntryFontSizeU3Ek__BackingField_32;
	// System.Single WMG_Legend::<origLegendEntrySpacing>k__BackingField
	float ___U3CorigLegendEntrySpacingU3Ek__BackingField_33;
	// System.Single WMG_Legend::<origPieSwatchSize>k__BackingField
	float ___U3CorigPieSwatchSizeU3Ek__BackingField_34;
	// System.Single WMG_Legend::<origOffset>k__BackingField
	float ___U3CorigOffsetU3Ek__BackingField_35;
	// System.Single WMG_Legend::<origBackgroundPadding>k__BackingField
	float ___U3CorigBackgroundPaddingU3Ek__BackingField_36;
	// System.Boolean WMG_Legend::hasInit
	bool ___hasInit_37;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Legend::changeObjs
	List_1_t1684053944 * ___changeObjs_38;
	// WMG_Change_Obj WMG_Legend::legendC
	WMG_Change_Obj_t2314932812 * ___legendC_39;

public:
	inline static int32_t get_offset_of_theGraph_2() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___theGraph_2)); }
	inline WMG_Graph_Manager_t1488325314 * get_theGraph_2() const { return ___theGraph_2; }
	inline WMG_Graph_Manager_t1488325314 ** get_address_of_theGraph_2() { return &___theGraph_2; }
	inline void set_theGraph_2(WMG_Graph_Manager_t1488325314 * value)
	{
		___theGraph_2 = value;
		Il2CppCodeGenWriteBarrier(&___theGraph_2, value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___background_3)); }
	inline GameObject_t1756533147 * get_background_3() const { return ___background_3; }
	inline GameObject_t1756533147 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(GameObject_t1756533147 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier(&___background_3, value);
	}

	inline static int32_t get_offset_of_entriesParent_4() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___entriesParent_4)); }
	inline GameObject_t1756533147 * get_entriesParent_4() const { return ___entriesParent_4; }
	inline GameObject_t1756533147 ** get_address_of_entriesParent_4() { return &___entriesParent_4; }
	inline void set_entriesParent_4(GameObject_t1756533147 * value)
	{
		___entriesParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___entriesParent_4, value);
	}

	inline static int32_t get_offset_of_emptyPrefab_5() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___emptyPrefab_5)); }
	inline Object_t1021602117 * get_emptyPrefab_5() const { return ___emptyPrefab_5; }
	inline Object_t1021602117 ** get_address_of_emptyPrefab_5() { return &___emptyPrefab_5; }
	inline void set_emptyPrefab_5(Object_t1021602117 * value)
	{
		___emptyPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___emptyPrefab_5, value);
	}

	inline static int32_t get_offset_of_legendEntries_6() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___legendEntries_6)); }
	inline List_1_t1621299440 * get_legendEntries_6() const { return ___legendEntries_6; }
	inline List_1_t1621299440 ** get_address_of_legendEntries_6() { return &___legendEntries_6; }
	inline void set_legendEntries_6(List_1_t1621299440 * value)
	{
		___legendEntries_6 = value;
		Il2CppCodeGenWriteBarrier(&___legendEntries_6, value);
	}

	inline static int32_t get_offset_of_pieGraph_7() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___pieGraph_7)); }
	inline WMG_Pie_Graph_t252836487 * get_pieGraph_7() const { return ___pieGraph_7; }
	inline WMG_Pie_Graph_t252836487 ** get_address_of_pieGraph_7() { return &___pieGraph_7; }
	inline void set_pieGraph_7(WMG_Pie_Graph_t252836487 * value)
	{
		___pieGraph_7 = value;
		Il2CppCodeGenWriteBarrier(&___pieGraph_7, value);
	}

	inline static int32_t get_offset_of_axisGraph_8() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___axisGraph_8)); }
	inline WMG_Axis_Graph_t1917651748 * get_axisGraph_8() const { return ___axisGraph_8; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_axisGraph_8() { return &___axisGraph_8; }
	inline void set_axisGraph_8(WMG_Axis_Graph_t1917651748 * value)
	{
		___axisGraph_8 = value;
		Il2CppCodeGenWriteBarrier(&___axisGraph_8, value);
	}

	inline static int32_t get_offset_of__hideLegend_9() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____hideLegend_9)); }
	inline bool get__hideLegend_9() const { return ____hideLegend_9; }
	inline bool* get_address_of__hideLegend_9() { return &____hideLegend_9; }
	inline void set__hideLegend_9(bool value)
	{
		____hideLegend_9 = value;
	}

	inline static int32_t get_offset_of__legendType_10() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendType_10)); }
	inline int32_t get__legendType_10() const { return ____legendType_10; }
	inline int32_t* get_address_of__legendType_10() { return &____legendType_10; }
	inline void set__legendType_10(int32_t value)
	{
		____legendType_10 = value;
	}

	inline static int32_t get_offset_of__labelType_11() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____labelType_11)); }
	inline int32_t get__labelType_11() const { return ____labelType_11; }
	inline int32_t* get_address_of__labelType_11() { return &____labelType_11; }
	inline void set__labelType_11(int32_t value)
	{
		____labelType_11 = value;
	}

	inline static int32_t get_offset_of__showBackground_12() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____showBackground_12)); }
	inline bool get__showBackground_12() const { return ____showBackground_12; }
	inline bool* get_address_of__showBackground_12() { return &____showBackground_12; }
	inline void set__showBackground_12(bool value)
	{
		____showBackground_12 = value;
	}

	inline static int32_t get_offset_of__oppositeSideLegend_13() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____oppositeSideLegend_13)); }
	inline bool get__oppositeSideLegend_13() const { return ____oppositeSideLegend_13; }
	inline bool* get_address_of__oppositeSideLegend_13() { return &____oppositeSideLegend_13; }
	inline void set__oppositeSideLegend_13(bool value)
	{
		____oppositeSideLegend_13 = value;
	}

	inline static int32_t get_offset_of__offset_14() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____offset_14)); }
	inline float get__offset_14() const { return ____offset_14; }
	inline float* get_address_of__offset_14() { return &____offset_14; }
	inline void set__offset_14(float value)
	{
		____offset_14 = value;
	}

	inline static int32_t get_offset_of__legendEntryWidth_15() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntryWidth_15)); }
	inline float get__legendEntryWidth_15() const { return ____legendEntryWidth_15; }
	inline float* get_address_of__legendEntryWidth_15() { return &____legendEntryWidth_15; }
	inline void set__legendEntryWidth_15(float value)
	{
		____legendEntryWidth_15 = value;
	}

	inline static int32_t get_offset_of__setWidthFromLabels_16() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____setWidthFromLabels_16)); }
	inline bool get__setWidthFromLabels_16() const { return ____setWidthFromLabels_16; }
	inline bool* get_address_of__setWidthFromLabels_16() { return &____setWidthFromLabels_16; }
	inline void set__setWidthFromLabels_16(bool value)
	{
		____setWidthFromLabels_16 = value;
	}

	inline static int32_t get_offset_of__legendEntryHeight_17() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntryHeight_17)); }
	inline float get__legendEntryHeight_17() const { return ____legendEntryHeight_17; }
	inline float* get_address_of__legendEntryHeight_17() { return &____legendEntryHeight_17; }
	inline void set__legendEntryHeight_17(float value)
	{
		____legendEntryHeight_17 = value;
	}

	inline static int32_t get_offset_of__numRowsOrColumns_18() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____numRowsOrColumns_18)); }
	inline int32_t get__numRowsOrColumns_18() const { return ____numRowsOrColumns_18; }
	inline int32_t* get_address_of__numRowsOrColumns_18() { return &____numRowsOrColumns_18; }
	inline void set__numRowsOrColumns_18(int32_t value)
	{
		____numRowsOrColumns_18 = value;
	}

	inline static int32_t get_offset_of__numDecimals_19() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____numDecimals_19)); }
	inline int32_t get__numDecimals_19() const { return ____numDecimals_19; }
	inline int32_t* get_address_of__numDecimals_19() { return &____numDecimals_19; }
	inline void set__numDecimals_19(int32_t value)
	{
		____numDecimals_19 = value;
	}

	inline static int32_t get_offset_of__legendEntryLinkSpacing_20() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntryLinkSpacing_20)); }
	inline float get__legendEntryLinkSpacing_20() const { return ____legendEntryLinkSpacing_20; }
	inline float* get_address_of__legendEntryLinkSpacing_20() { return &____legendEntryLinkSpacing_20; }
	inline void set__legendEntryLinkSpacing_20(float value)
	{
		____legendEntryLinkSpacing_20 = value;
	}

	inline static int32_t get_offset_of__legendEntryFontSize_21() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntryFontSize_21)); }
	inline int32_t get__legendEntryFontSize_21() const { return ____legendEntryFontSize_21; }
	inline int32_t* get_address_of__legendEntryFontSize_21() { return &____legendEntryFontSize_21; }
	inline void set__legendEntryFontSize_21(int32_t value)
	{
		____legendEntryFontSize_21 = value;
	}

	inline static int32_t get_offset_of__legendEntrySpacing_22() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntrySpacing_22)); }
	inline float get__legendEntrySpacing_22() const { return ____legendEntrySpacing_22; }
	inline float* get_address_of__legendEntrySpacing_22() { return &____legendEntrySpacing_22; }
	inline void set__legendEntrySpacing_22(float value)
	{
		____legendEntrySpacing_22 = value;
	}

	inline static int32_t get_offset_of__pieSwatchSize_23() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____pieSwatchSize_23)); }
	inline float get__pieSwatchSize_23() const { return ____pieSwatchSize_23; }
	inline float* get_address_of__pieSwatchSize_23() { return &____pieSwatchSize_23; }
	inline void set__pieSwatchSize_23(float value)
	{
		____pieSwatchSize_23 = value;
	}

	inline static int32_t get_offset_of__backgroundPadding_24() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____backgroundPadding_24)); }
	inline float get__backgroundPadding_24() const { return ____backgroundPadding_24; }
	inline float* get_address_of__backgroundPadding_24() { return &____backgroundPadding_24; }
	inline void set__backgroundPadding_24(float value)
	{
		____backgroundPadding_24 = value;
	}

	inline static int32_t get_offset_of__autofitEnabled_25() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____autofitEnabled_25)); }
	inline bool get__autofitEnabled_25() const { return ____autofitEnabled_25; }
	inline bool* get_address_of__autofitEnabled_25() { return &____autofitEnabled_25; }
	inline void set__autofitEnabled_25(bool value)
	{
		____autofitEnabled_25 = value;
	}

	inline static int32_t get_offset_of__labelColor_26() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____labelColor_26)); }
	inline Color_t2020392075  get__labelColor_26() const { return ____labelColor_26; }
	inline Color_t2020392075 * get_address_of__labelColor_26() { return &____labelColor_26; }
	inline void set__labelColor_26(Color_t2020392075  value)
	{
		____labelColor_26 = value;
	}

	inline static int32_t get_offset_of__legendEntryFontStyle_27() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntryFontStyle_27)); }
	inline int32_t get__legendEntryFontStyle_27() const { return ____legendEntryFontStyle_27; }
	inline int32_t* get_address_of__legendEntryFontStyle_27() { return &____legendEntryFontStyle_27; }
	inline void set__legendEntryFontStyle_27(int32_t value)
	{
		____legendEntryFontStyle_27 = value;
	}

	inline static int32_t get_offset_of__legendEntryFont_28() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ____legendEntryFont_28)); }
	inline Font_t4239498691 * get__legendEntryFont_28() const { return ____legendEntryFont_28; }
	inline Font_t4239498691 ** get_address_of__legendEntryFont_28() { return &____legendEntryFont_28; }
	inline void set__legendEntryFont_28(Font_t4239498691 * value)
	{
		____legendEntryFont_28 = value;
		Il2CppCodeGenWriteBarrier(&____legendEntryFont_28, value);
	}

	inline static int32_t get_offset_of_U3CorigLegendEntryWidthU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigLegendEntryWidthU3Ek__BackingField_29)); }
	inline float get_U3CorigLegendEntryWidthU3Ek__BackingField_29() const { return ___U3CorigLegendEntryWidthU3Ek__BackingField_29; }
	inline float* get_address_of_U3CorigLegendEntryWidthU3Ek__BackingField_29() { return &___U3CorigLegendEntryWidthU3Ek__BackingField_29; }
	inline void set_U3CorigLegendEntryWidthU3Ek__BackingField_29(float value)
	{
		___U3CorigLegendEntryWidthU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CorigLegendEntryHeightU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigLegendEntryHeightU3Ek__BackingField_30)); }
	inline float get_U3CorigLegendEntryHeightU3Ek__BackingField_30() const { return ___U3CorigLegendEntryHeightU3Ek__BackingField_30; }
	inline float* get_address_of_U3CorigLegendEntryHeightU3Ek__BackingField_30() { return &___U3CorigLegendEntryHeightU3Ek__BackingField_30; }
	inline void set_U3CorigLegendEntryHeightU3Ek__BackingField_30(float value)
	{
		___U3CorigLegendEntryHeightU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31)); }
	inline float get_U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31() const { return ___U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31; }
	inline float* get_address_of_U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31() { return &___U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31; }
	inline void set_U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31(float value)
	{
		___U3CorigLegendEntryLinkSpacingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CorigLegendEntryFontSizeU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigLegendEntryFontSizeU3Ek__BackingField_32)); }
	inline int32_t get_U3CorigLegendEntryFontSizeU3Ek__BackingField_32() const { return ___U3CorigLegendEntryFontSizeU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CorigLegendEntryFontSizeU3Ek__BackingField_32() { return &___U3CorigLegendEntryFontSizeU3Ek__BackingField_32; }
	inline void set_U3CorigLegendEntryFontSizeU3Ek__BackingField_32(int32_t value)
	{
		___U3CorigLegendEntryFontSizeU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CorigLegendEntrySpacingU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigLegendEntrySpacingU3Ek__BackingField_33)); }
	inline float get_U3CorigLegendEntrySpacingU3Ek__BackingField_33() const { return ___U3CorigLegendEntrySpacingU3Ek__BackingField_33; }
	inline float* get_address_of_U3CorigLegendEntrySpacingU3Ek__BackingField_33() { return &___U3CorigLegendEntrySpacingU3Ek__BackingField_33; }
	inline void set_U3CorigLegendEntrySpacingU3Ek__BackingField_33(float value)
	{
		___U3CorigLegendEntrySpacingU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CorigPieSwatchSizeU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigPieSwatchSizeU3Ek__BackingField_34)); }
	inline float get_U3CorigPieSwatchSizeU3Ek__BackingField_34() const { return ___U3CorigPieSwatchSizeU3Ek__BackingField_34; }
	inline float* get_address_of_U3CorigPieSwatchSizeU3Ek__BackingField_34() { return &___U3CorigPieSwatchSizeU3Ek__BackingField_34; }
	inline void set_U3CorigPieSwatchSizeU3Ek__BackingField_34(float value)
	{
		___U3CorigPieSwatchSizeU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CorigOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigOffsetU3Ek__BackingField_35)); }
	inline float get_U3CorigOffsetU3Ek__BackingField_35() const { return ___U3CorigOffsetU3Ek__BackingField_35; }
	inline float* get_address_of_U3CorigOffsetU3Ek__BackingField_35() { return &___U3CorigOffsetU3Ek__BackingField_35; }
	inline void set_U3CorigOffsetU3Ek__BackingField_35(float value)
	{
		___U3CorigOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CorigBackgroundPaddingU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___U3CorigBackgroundPaddingU3Ek__BackingField_36)); }
	inline float get_U3CorigBackgroundPaddingU3Ek__BackingField_36() const { return ___U3CorigBackgroundPaddingU3Ek__BackingField_36; }
	inline float* get_address_of_U3CorigBackgroundPaddingU3Ek__BackingField_36() { return &___U3CorigBackgroundPaddingU3Ek__BackingField_36; }
	inline void set_U3CorigBackgroundPaddingU3Ek__BackingField_36(float value)
	{
		___U3CorigBackgroundPaddingU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_hasInit_37() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___hasInit_37)); }
	inline bool get_hasInit_37() const { return ___hasInit_37; }
	inline bool* get_address_of_hasInit_37() { return &___hasInit_37; }
	inline void set_hasInit_37(bool value)
	{
		___hasInit_37 = value;
	}

	inline static int32_t get_offset_of_changeObjs_38() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___changeObjs_38)); }
	inline List_1_t1684053944 * get_changeObjs_38() const { return ___changeObjs_38; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_38() { return &___changeObjs_38; }
	inline void set_changeObjs_38(List_1_t1684053944 * value)
	{
		___changeObjs_38 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_38, value);
	}

	inline static int32_t get_offset_of_legendC_39() { return static_cast<int32_t>(offsetof(WMG_Legend_t2854767033, ___legendC_39)); }
	inline WMG_Change_Obj_t2314932812 * get_legendC_39() const { return ___legendC_39; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_legendC_39() { return &___legendC_39; }
	inline void set_legendC_39(WMG_Change_Obj_t2314932812 * value)
	{
		___legendC_39 = value;
		Il2CppCodeGenWriteBarrier(&___legendC_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
