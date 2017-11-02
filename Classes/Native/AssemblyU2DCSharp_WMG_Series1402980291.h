#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_WMG_Series_comboTypes283680567.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_WMG_Series_areaShadingTypes4207240862.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_graphTypes1920111748.h"

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// WMG_List`1<UnityEngine.Vector2>
struct WMG_List_1_t395564611;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t172249107;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;
// WMG_Data_Source
struct WMG_Data_Source_t3507445670;
// WMG_Legend_Entry
struct WMG_Legend_Entry_t2252178308;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t4239498691;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t3194695850;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;
// WMG_Series/SeriesDataLabeler
struct SeriesDataLabeler_t652605318;
// WMG_Series/TooltipPointAnimator
struct TooltipPointAnimator_t1694657494;
// WMG_Series/SeriesAutoAnimStartedHandler
struct SeriesAutoAnimStartedHandler_t3393216812;
// WMG_Series/PointCreatedHandler
struct PointCreatedHandler_t115080874;
// WMG_Series/PointSpriteUpdatedHandler
struct PointSpriteUpdatedHandler_t1824833182;
// WMG_Series/PointShadingSpriteUpdatedHandler
struct PointShadingSpriteUpdatedHandler_t653935292;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t3505446430;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Series
struct  WMG_Series_t1402980291  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Series::_pointValues
	List_1_t1612828711 * ____pointValues_2;
	// WMG_List`1<UnityEngine.Vector2> WMG_Series::pointValues
	WMG_List_1_t395564611 * ___pointValues_3;
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Series::_pointColors
	List_1_t1389513207 * ____pointColors_4;
	// WMG_List`1<UnityEngine.Color> WMG_Series::pointColors
	WMG_List_1_t172249107 * ___pointColors_5;
	// UnityEngine.Object WMG_Series::dataLabelPrefab
	Object_t1021602117 * ___dataLabelPrefab_6;
	// UnityEngine.GameObject WMG_Series::dataLabelsParent
	GameObject_t1756533147 * ___dataLabelsParent_7;
	// UnityEngine.Material WMG_Series::areaShadingMatSolid
	Material_t193706927 * ___areaShadingMatSolid_8;
	// UnityEngine.Material WMG_Series::areaShadingMatGradient
	Material_t193706927 * ___areaShadingMatGradient_9;
	// UnityEngine.GameObject WMG_Series::areaShadingParent
	GameObject_t1756533147 * ___areaShadingParent_10;
	// UnityEngine.Object WMG_Series::areaShadingPrefab
	Object_t1021602117 * ___areaShadingPrefab_11;
	// UnityEngine.Object WMG_Series::areaShadingCSPrefab
	Object_t1021602117 * ___areaShadingCSPrefab_12;
	// WMG_Axis_Graph WMG_Series::theGraph
	WMG_Axis_Graph_t1917651748 * ___theGraph_13;
	// WMG_Data_Source WMG_Series::realTimeDataSource
	WMG_Data_Source_t3507445670 * ___realTimeDataSource_14;
	// WMG_Data_Source WMG_Series::pointValuesDataSource
	WMG_Data_Source_t3507445670 * ___pointValuesDataSource_15;
	// UnityEngine.Object WMG_Series::legendEntryPrefab
	Object_t1021602117 * ___legendEntryPrefab_16;
	// UnityEngine.GameObject WMG_Series::linkParent
	GameObject_t1756533147 * ___linkParent_17;
	// UnityEngine.GameObject WMG_Series::nodeParent
	GameObject_t1756533147 * ___nodeParent_18;
	// WMG_Legend_Entry WMG_Series::legendEntry
	WMG_Legend_Entry_t2252178308 * ___legendEntry_19;
	// System.Int32 WMG_Series::areaShadingTextureResolution
	int32_t ___areaShadingTextureResolution_20;
	// WMG_Series/comboTypes WMG_Series::_comboType
	int32_t ____comboType_21;
	// System.Boolean WMG_Series::_useSecondYaxis
	bool ____useSecondYaxis_22;
	// System.String WMG_Series::_seriesName
	String_t* ____seriesName_23;
	// System.Single WMG_Series::_pointWidthHeight
	float ____pointWidthHeight_24;
	// System.Single WMG_Series::_lineScale
	float ____lineScale_25;
	// UnityEngine.Color WMG_Series::_pointColor
	Color_t2020392075  ____pointColor_26;
	// System.Boolean WMG_Series::_usePointColors
	bool ____usePointColors_27;
	// UnityEngine.Color WMG_Series::_lineColor
	Color_t2020392075  ____lineColor_28;
	// System.Boolean WMG_Series::_UseXDistBetweenToSpace
	bool ____UseXDistBetweenToSpace_29;
	// System.Boolean WMG_Series::_ManuallySetXDistBetween
	bool ____ManuallySetXDistBetween_30;
	// System.Single WMG_Series::_xDistBetweenPoints
	float ____xDistBetweenPoints_31;
	// System.Boolean WMG_Series::_ManuallySetExtraXSpace
	bool ____ManuallySetExtraXSpace_32;
	// System.Single WMG_Series::_extraXSpace
	float ____extraXSpace_33;
	// System.Boolean WMG_Series::_hidePoints
	bool ____hidePoints_34;
	// System.Boolean WMG_Series::_hideLines
	bool ____hideLines_35;
	// System.Boolean WMG_Series::_connectFirstToLast
	bool ____connectFirstToLast_36;
	// System.Single WMG_Series::_linePadding
	float ____linePadding_37;
	// System.Boolean WMG_Series::_dataLabelsEnabled
	bool ____dataLabelsEnabled_38;
	// System.Int32 WMG_Series::_dataLabelsNumDecimals
	int32_t ____dataLabelsNumDecimals_39;
	// System.Int32 WMG_Series::_dataLabelsFontSize
	int32_t ____dataLabelsFontSize_40;
	// UnityEngine.Color WMG_Series::_dataLabelsColor
	Color_t2020392075  ____dataLabelsColor_41;
	// UnityEngine.FontStyle WMG_Series::_dataLabelsFontStyle
	int32_t ____dataLabelsFontStyle_42;
	// UnityEngine.Font WMG_Series::_dataLabelsFont
	Font_t4239498691 * ____dataLabelsFont_43;
	// System.Boolean WMG_Series::_dataLabelsAnchoredLeftBot
	bool ____dataLabelsAnchoredLeftBot_44;
	// UnityEngine.Vector2 WMG_Series::_dataLabelsOffset
	Vector2_t2243707579  ____dataLabelsOffset_45;
	// WMG_Series/areaShadingTypes WMG_Series::_areaShadingType
	int32_t ____areaShadingType_46;
	// System.Boolean WMG_Series::_areaShadingUsesComputeShader
	bool ____areaShadingUsesComputeShader_47;
	// UnityEngine.Color WMG_Series::_areaShadingColor
	Color_t2020392075  ____areaShadingColor_48;
	// System.Single WMG_Series::_areaShadingAxisValue
	float ____areaShadingAxisValue_49;
	// System.Int32 WMG_Series::_pointPrefab
	int32_t ____pointPrefab_50;
	// System.Int32 WMG_Series::_linkPrefab
	int32_t ____linkPrefab_51;
	// UnityEngine.Object WMG_Series::nodePrefab
	Object_t1021602117 * ___nodePrefab_52;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::points
	List_1_t1125654279 * ___points_53;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::lines
	List_1_t1125654279 * ___lines_54;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::areaShadingRects
	List_1_t1125654279 * ___areaShadingRects_55;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Series::dataLabels
	List_1_t1125654279 * ___dataLabels_56;
	// System.Collections.Generic.List`1<System.Boolean> WMG_Series::barIsNegative
	List_1_t3194695850 * ___barIsNegative_57;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::changedValIndices
	List_1_t1440998580 * ___changedValIndices_58;
	// System.Single WMG_Series::<origPointWidthHeight>k__BackingField
	float ___U3CorigPointWidthHeightU3Ek__BackingField_59;
	// System.Single WMG_Series::<origLineScale>k__BackingField
	float ___U3CorigLineScaleU3Ek__BackingField_60;
	// System.Int32 WMG_Series::<origDataLabelsFontSize>k__BackingField
	int32_t ___U3CorigDataLabelsFontSizeU3Ek__BackingField_61;
	// UnityEngine.Vector2 WMG_Series::<origDataLabelOffset>k__BackingField
	Vector2_t2243707579  ___U3CorigDataLabelOffsetU3Ek__BackingField_62;
	// WMG_Axis_Graph/graphTypes WMG_Series::cachedSeriesType
	int32_t ___cachedSeriesType_63;
	// System.Boolean WMG_Series::realTimeRunning
	bool ___realTimeRunning_64;
	// System.Single WMG_Series::realTimeLoopVar
	float ___realTimeLoopVar_65;
	// System.Single WMG_Series::realTimeOrigMax
	float ___realTimeOrigMax_66;
	// System.Boolean WMG_Series::beginningToAutoAnimate
	bool ___beginningToAutoAnimate_67;
	// System.Boolean WMG_Series::<currentlyAnimating>k__BackingField
	bool ___U3CcurrentlyAnimatingU3Ek__BackingField_68;
	// System.Single WMG_Series::<autoAnimationTimeline>k__BackingField
	float ___U3CautoAnimationTimelineU3Ek__BackingField_69;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Series::afterPositions
	List_1_t1612828711 * ___afterPositions_70;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::afterWidths
	List_1_t1440998580 * ___afterWidths_71;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::afterHeights
	List_1_t1440998580 * ___afterHeights_72;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Series::origPositions
	List_1_t1612828711 * ___origPositions_73;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::origWidths
	List_1_t1440998580 * ___origWidths_74;
	// System.Collections.Generic.List`1<System.Int32> WMG_Series::origHeights
	List_1_t1440998580 * ___origHeights_75;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Series::changeObjs
	List_1_t1684053944 * ___changeObjs_76;
	// WMG_Change_Obj WMG_Series::pointValuesC
	WMG_Change_Obj_t2314932812 * ___pointValuesC_77;
	// WMG_Change_Obj WMG_Series::pointValuesCountC
	WMG_Change_Obj_t2314932812 * ___pointValuesCountC_78;
	// WMG_Change_Obj WMG_Series::pointValuesValC
	WMG_Change_Obj_t2314932812 * ___pointValuesValC_79;
	// WMG_Change_Obj WMG_Series::lineScaleC
	WMG_Change_Obj_t2314932812 * ___lineScaleC_80;
	// WMG_Change_Obj WMG_Series::pointWidthHeightC
	WMG_Change_Obj_t2314932812 * ___pointWidthHeightC_81;
	// WMG_Change_Obj WMG_Series::dataLabelsC
	WMG_Change_Obj_t2314932812 * ___dataLabelsC_82;
	// WMG_Change_Obj WMG_Series::lineColorC
	WMG_Change_Obj_t2314932812 * ___lineColorC_83;
	// WMG_Change_Obj WMG_Series::pointColorC
	WMG_Change_Obj_t2314932812 * ___pointColorC_84;
	// WMG_Change_Obj WMG_Series::hideLineC
	WMG_Change_Obj_t2314932812 * ___hideLineC_85;
	// WMG_Change_Obj WMG_Series::hidePointC
	WMG_Change_Obj_t2314932812 * ___hidePointC_86;
	// WMG_Change_Obj WMG_Series::seriesNameC
	WMG_Change_Obj_t2314932812 * ___seriesNameC_87;
	// WMG_Change_Obj WMG_Series::linePaddingC
	WMG_Change_Obj_t2314932812 * ___linePaddingC_88;
	// WMG_Change_Obj WMG_Series::areaShadingTypeC
	WMG_Change_Obj_t2314932812 * ___areaShadingTypeC_89;
	// WMG_Change_Obj WMG_Series::areaShadingC
	WMG_Change_Obj_t2314932812 * ___areaShadingC_90;
	// WMG_Change_Obj WMG_Series::prefabC
	WMG_Change_Obj_t2314932812 * ___prefabC_91;
	// WMG_Change_Obj WMG_Series::connectFirstToLastC
	WMG_Change_Obj_t2314932812 * ___connectFirstToLastC_92;
	// System.Boolean WMG_Series::hasInit
	bool ___hasInit_93;
	// WMG_Series/SeriesDataLabeler WMG_Series::seriesDataLabeler
	SeriesDataLabeler_t652605318 * ___seriesDataLabeler_94;
	// WMG_Series/TooltipPointAnimator WMG_Series::tooltipPointAnimator
	TooltipPointAnimator_t1694657494 * ___tooltipPointAnimator_95;
	// WMG_Series/SeriesAutoAnimStartedHandler WMG_Series::SeriesAutoAnimStarted
	SeriesAutoAnimStartedHandler_t3393216812 * ___SeriesAutoAnimStarted_96;
	// WMG_Series/PointCreatedHandler WMG_Series::PointCreated
	PointCreatedHandler_t115080874 * ___PointCreated_97;
	// WMG_Series/PointSpriteUpdatedHandler WMG_Series::PointSpriteUpdated
	PointSpriteUpdatedHandler_t1824833182 * ___PointSpriteUpdated_98;
	// WMG_Series/PointShadingSpriteUpdatedHandler WMG_Series::PointShadingSpriteUpdated
	PointShadingSpriteUpdatedHandler_t653935292 * ___PointShadingSpriteUpdated_99;
	// System.Boolean WMG_Series::AutoUpdateXDistBetween
	bool ___AutoUpdateXDistBetween_100;

public:
	inline static int32_t get_offset_of__pointValues_2() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____pointValues_2)); }
	inline List_1_t1612828711 * get__pointValues_2() const { return ____pointValues_2; }
	inline List_1_t1612828711 ** get_address_of__pointValues_2() { return &____pointValues_2; }
	inline void set__pointValues_2(List_1_t1612828711 * value)
	{
		____pointValues_2 = value;
		Il2CppCodeGenWriteBarrier(&____pointValues_2, value);
	}

	inline static int32_t get_offset_of_pointValues_3() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointValues_3)); }
	inline WMG_List_1_t395564611 * get_pointValues_3() const { return ___pointValues_3; }
	inline WMG_List_1_t395564611 ** get_address_of_pointValues_3() { return &___pointValues_3; }
	inline void set_pointValues_3(WMG_List_1_t395564611 * value)
	{
		___pointValues_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointValues_3, value);
	}

	inline static int32_t get_offset_of__pointColors_4() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____pointColors_4)); }
	inline List_1_t1389513207 * get__pointColors_4() const { return ____pointColors_4; }
	inline List_1_t1389513207 ** get_address_of__pointColors_4() { return &____pointColors_4; }
	inline void set__pointColors_4(List_1_t1389513207 * value)
	{
		____pointColors_4 = value;
		Il2CppCodeGenWriteBarrier(&____pointColors_4, value);
	}

	inline static int32_t get_offset_of_pointColors_5() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointColors_5)); }
	inline WMG_List_1_t172249107 * get_pointColors_5() const { return ___pointColors_5; }
	inline WMG_List_1_t172249107 ** get_address_of_pointColors_5() { return &___pointColors_5; }
	inline void set_pointColors_5(WMG_List_1_t172249107 * value)
	{
		___pointColors_5 = value;
		Il2CppCodeGenWriteBarrier(&___pointColors_5, value);
	}

	inline static int32_t get_offset_of_dataLabelPrefab_6() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___dataLabelPrefab_6)); }
	inline Object_t1021602117 * get_dataLabelPrefab_6() const { return ___dataLabelPrefab_6; }
	inline Object_t1021602117 ** get_address_of_dataLabelPrefab_6() { return &___dataLabelPrefab_6; }
	inline void set_dataLabelPrefab_6(Object_t1021602117 * value)
	{
		___dataLabelPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabelPrefab_6, value);
	}

	inline static int32_t get_offset_of_dataLabelsParent_7() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___dataLabelsParent_7)); }
	inline GameObject_t1756533147 * get_dataLabelsParent_7() const { return ___dataLabelsParent_7; }
	inline GameObject_t1756533147 ** get_address_of_dataLabelsParent_7() { return &___dataLabelsParent_7; }
	inline void set_dataLabelsParent_7(GameObject_t1756533147 * value)
	{
		___dataLabelsParent_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabelsParent_7, value);
	}

	inline static int32_t get_offset_of_areaShadingMatSolid_8() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingMatSolid_8)); }
	inline Material_t193706927 * get_areaShadingMatSolid_8() const { return ___areaShadingMatSolid_8; }
	inline Material_t193706927 ** get_address_of_areaShadingMatSolid_8() { return &___areaShadingMatSolid_8; }
	inline void set_areaShadingMatSolid_8(Material_t193706927 * value)
	{
		___areaShadingMatSolid_8 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingMatSolid_8, value);
	}

	inline static int32_t get_offset_of_areaShadingMatGradient_9() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingMatGradient_9)); }
	inline Material_t193706927 * get_areaShadingMatGradient_9() const { return ___areaShadingMatGradient_9; }
	inline Material_t193706927 ** get_address_of_areaShadingMatGradient_9() { return &___areaShadingMatGradient_9; }
	inline void set_areaShadingMatGradient_9(Material_t193706927 * value)
	{
		___areaShadingMatGradient_9 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingMatGradient_9, value);
	}

	inline static int32_t get_offset_of_areaShadingParent_10() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingParent_10)); }
	inline GameObject_t1756533147 * get_areaShadingParent_10() const { return ___areaShadingParent_10; }
	inline GameObject_t1756533147 ** get_address_of_areaShadingParent_10() { return &___areaShadingParent_10; }
	inline void set_areaShadingParent_10(GameObject_t1756533147 * value)
	{
		___areaShadingParent_10 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingParent_10, value);
	}

	inline static int32_t get_offset_of_areaShadingPrefab_11() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingPrefab_11)); }
	inline Object_t1021602117 * get_areaShadingPrefab_11() const { return ___areaShadingPrefab_11; }
	inline Object_t1021602117 ** get_address_of_areaShadingPrefab_11() { return &___areaShadingPrefab_11; }
	inline void set_areaShadingPrefab_11(Object_t1021602117 * value)
	{
		___areaShadingPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingPrefab_11, value);
	}

	inline static int32_t get_offset_of_areaShadingCSPrefab_12() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingCSPrefab_12)); }
	inline Object_t1021602117 * get_areaShadingCSPrefab_12() const { return ___areaShadingCSPrefab_12; }
	inline Object_t1021602117 ** get_address_of_areaShadingCSPrefab_12() { return &___areaShadingCSPrefab_12; }
	inline void set_areaShadingCSPrefab_12(Object_t1021602117 * value)
	{
		___areaShadingCSPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingCSPrefab_12, value);
	}

	inline static int32_t get_offset_of_theGraph_13() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___theGraph_13)); }
	inline WMG_Axis_Graph_t1917651748 * get_theGraph_13() const { return ___theGraph_13; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_theGraph_13() { return &___theGraph_13; }
	inline void set_theGraph_13(WMG_Axis_Graph_t1917651748 * value)
	{
		___theGraph_13 = value;
		Il2CppCodeGenWriteBarrier(&___theGraph_13, value);
	}

	inline static int32_t get_offset_of_realTimeDataSource_14() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___realTimeDataSource_14)); }
	inline WMG_Data_Source_t3507445670 * get_realTimeDataSource_14() const { return ___realTimeDataSource_14; }
	inline WMG_Data_Source_t3507445670 ** get_address_of_realTimeDataSource_14() { return &___realTimeDataSource_14; }
	inline void set_realTimeDataSource_14(WMG_Data_Source_t3507445670 * value)
	{
		___realTimeDataSource_14 = value;
		Il2CppCodeGenWriteBarrier(&___realTimeDataSource_14, value);
	}

	inline static int32_t get_offset_of_pointValuesDataSource_15() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointValuesDataSource_15)); }
	inline WMG_Data_Source_t3507445670 * get_pointValuesDataSource_15() const { return ___pointValuesDataSource_15; }
	inline WMG_Data_Source_t3507445670 ** get_address_of_pointValuesDataSource_15() { return &___pointValuesDataSource_15; }
	inline void set_pointValuesDataSource_15(WMG_Data_Source_t3507445670 * value)
	{
		___pointValuesDataSource_15 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesDataSource_15, value);
	}

	inline static int32_t get_offset_of_legendEntryPrefab_16() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___legendEntryPrefab_16)); }
	inline Object_t1021602117 * get_legendEntryPrefab_16() const { return ___legendEntryPrefab_16; }
	inline Object_t1021602117 ** get_address_of_legendEntryPrefab_16() { return &___legendEntryPrefab_16; }
	inline void set_legendEntryPrefab_16(Object_t1021602117 * value)
	{
		___legendEntryPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___legendEntryPrefab_16, value);
	}

	inline static int32_t get_offset_of_linkParent_17() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___linkParent_17)); }
	inline GameObject_t1756533147 * get_linkParent_17() const { return ___linkParent_17; }
	inline GameObject_t1756533147 ** get_address_of_linkParent_17() { return &___linkParent_17; }
	inline void set_linkParent_17(GameObject_t1756533147 * value)
	{
		___linkParent_17 = value;
		Il2CppCodeGenWriteBarrier(&___linkParent_17, value);
	}

	inline static int32_t get_offset_of_nodeParent_18() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___nodeParent_18)); }
	inline GameObject_t1756533147 * get_nodeParent_18() const { return ___nodeParent_18; }
	inline GameObject_t1756533147 ** get_address_of_nodeParent_18() { return &___nodeParent_18; }
	inline void set_nodeParent_18(GameObject_t1756533147 * value)
	{
		___nodeParent_18 = value;
		Il2CppCodeGenWriteBarrier(&___nodeParent_18, value);
	}

	inline static int32_t get_offset_of_legendEntry_19() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___legendEntry_19)); }
	inline WMG_Legend_Entry_t2252178308 * get_legendEntry_19() const { return ___legendEntry_19; }
	inline WMG_Legend_Entry_t2252178308 ** get_address_of_legendEntry_19() { return &___legendEntry_19; }
	inline void set_legendEntry_19(WMG_Legend_Entry_t2252178308 * value)
	{
		___legendEntry_19 = value;
		Il2CppCodeGenWriteBarrier(&___legendEntry_19, value);
	}

	inline static int32_t get_offset_of_areaShadingTextureResolution_20() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingTextureResolution_20)); }
	inline int32_t get_areaShadingTextureResolution_20() const { return ___areaShadingTextureResolution_20; }
	inline int32_t* get_address_of_areaShadingTextureResolution_20() { return &___areaShadingTextureResolution_20; }
	inline void set_areaShadingTextureResolution_20(int32_t value)
	{
		___areaShadingTextureResolution_20 = value;
	}

	inline static int32_t get_offset_of__comboType_21() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____comboType_21)); }
	inline int32_t get__comboType_21() const { return ____comboType_21; }
	inline int32_t* get_address_of__comboType_21() { return &____comboType_21; }
	inline void set__comboType_21(int32_t value)
	{
		____comboType_21 = value;
	}

	inline static int32_t get_offset_of__useSecondYaxis_22() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____useSecondYaxis_22)); }
	inline bool get__useSecondYaxis_22() const { return ____useSecondYaxis_22; }
	inline bool* get_address_of__useSecondYaxis_22() { return &____useSecondYaxis_22; }
	inline void set__useSecondYaxis_22(bool value)
	{
		____useSecondYaxis_22 = value;
	}

	inline static int32_t get_offset_of__seriesName_23() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____seriesName_23)); }
	inline String_t* get__seriesName_23() const { return ____seriesName_23; }
	inline String_t** get_address_of__seriesName_23() { return &____seriesName_23; }
	inline void set__seriesName_23(String_t* value)
	{
		____seriesName_23 = value;
		Il2CppCodeGenWriteBarrier(&____seriesName_23, value);
	}

	inline static int32_t get_offset_of__pointWidthHeight_24() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____pointWidthHeight_24)); }
	inline float get__pointWidthHeight_24() const { return ____pointWidthHeight_24; }
	inline float* get_address_of__pointWidthHeight_24() { return &____pointWidthHeight_24; }
	inline void set__pointWidthHeight_24(float value)
	{
		____pointWidthHeight_24 = value;
	}

	inline static int32_t get_offset_of__lineScale_25() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____lineScale_25)); }
	inline float get__lineScale_25() const { return ____lineScale_25; }
	inline float* get_address_of__lineScale_25() { return &____lineScale_25; }
	inline void set__lineScale_25(float value)
	{
		____lineScale_25 = value;
	}

	inline static int32_t get_offset_of__pointColor_26() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____pointColor_26)); }
	inline Color_t2020392075  get__pointColor_26() const { return ____pointColor_26; }
	inline Color_t2020392075 * get_address_of__pointColor_26() { return &____pointColor_26; }
	inline void set__pointColor_26(Color_t2020392075  value)
	{
		____pointColor_26 = value;
	}

	inline static int32_t get_offset_of__usePointColors_27() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____usePointColors_27)); }
	inline bool get__usePointColors_27() const { return ____usePointColors_27; }
	inline bool* get_address_of__usePointColors_27() { return &____usePointColors_27; }
	inline void set__usePointColors_27(bool value)
	{
		____usePointColors_27 = value;
	}

	inline static int32_t get_offset_of__lineColor_28() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____lineColor_28)); }
	inline Color_t2020392075  get__lineColor_28() const { return ____lineColor_28; }
	inline Color_t2020392075 * get_address_of__lineColor_28() { return &____lineColor_28; }
	inline void set__lineColor_28(Color_t2020392075  value)
	{
		____lineColor_28 = value;
	}

	inline static int32_t get_offset_of__UseXDistBetweenToSpace_29() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____UseXDistBetweenToSpace_29)); }
	inline bool get__UseXDistBetweenToSpace_29() const { return ____UseXDistBetweenToSpace_29; }
	inline bool* get_address_of__UseXDistBetweenToSpace_29() { return &____UseXDistBetweenToSpace_29; }
	inline void set__UseXDistBetweenToSpace_29(bool value)
	{
		____UseXDistBetweenToSpace_29 = value;
	}

	inline static int32_t get_offset_of__ManuallySetXDistBetween_30() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____ManuallySetXDistBetween_30)); }
	inline bool get__ManuallySetXDistBetween_30() const { return ____ManuallySetXDistBetween_30; }
	inline bool* get_address_of__ManuallySetXDistBetween_30() { return &____ManuallySetXDistBetween_30; }
	inline void set__ManuallySetXDistBetween_30(bool value)
	{
		____ManuallySetXDistBetween_30 = value;
	}

	inline static int32_t get_offset_of__xDistBetweenPoints_31() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____xDistBetweenPoints_31)); }
	inline float get__xDistBetweenPoints_31() const { return ____xDistBetweenPoints_31; }
	inline float* get_address_of__xDistBetweenPoints_31() { return &____xDistBetweenPoints_31; }
	inline void set__xDistBetweenPoints_31(float value)
	{
		____xDistBetweenPoints_31 = value;
	}

	inline static int32_t get_offset_of__ManuallySetExtraXSpace_32() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____ManuallySetExtraXSpace_32)); }
	inline bool get__ManuallySetExtraXSpace_32() const { return ____ManuallySetExtraXSpace_32; }
	inline bool* get_address_of__ManuallySetExtraXSpace_32() { return &____ManuallySetExtraXSpace_32; }
	inline void set__ManuallySetExtraXSpace_32(bool value)
	{
		____ManuallySetExtraXSpace_32 = value;
	}

	inline static int32_t get_offset_of__extraXSpace_33() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____extraXSpace_33)); }
	inline float get__extraXSpace_33() const { return ____extraXSpace_33; }
	inline float* get_address_of__extraXSpace_33() { return &____extraXSpace_33; }
	inline void set__extraXSpace_33(float value)
	{
		____extraXSpace_33 = value;
	}

	inline static int32_t get_offset_of__hidePoints_34() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____hidePoints_34)); }
	inline bool get__hidePoints_34() const { return ____hidePoints_34; }
	inline bool* get_address_of__hidePoints_34() { return &____hidePoints_34; }
	inline void set__hidePoints_34(bool value)
	{
		____hidePoints_34 = value;
	}

	inline static int32_t get_offset_of__hideLines_35() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____hideLines_35)); }
	inline bool get__hideLines_35() const { return ____hideLines_35; }
	inline bool* get_address_of__hideLines_35() { return &____hideLines_35; }
	inline void set__hideLines_35(bool value)
	{
		____hideLines_35 = value;
	}

	inline static int32_t get_offset_of__connectFirstToLast_36() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____connectFirstToLast_36)); }
	inline bool get__connectFirstToLast_36() const { return ____connectFirstToLast_36; }
	inline bool* get_address_of__connectFirstToLast_36() { return &____connectFirstToLast_36; }
	inline void set__connectFirstToLast_36(bool value)
	{
		____connectFirstToLast_36 = value;
	}

	inline static int32_t get_offset_of__linePadding_37() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____linePadding_37)); }
	inline float get__linePadding_37() const { return ____linePadding_37; }
	inline float* get_address_of__linePadding_37() { return &____linePadding_37; }
	inline void set__linePadding_37(float value)
	{
		____linePadding_37 = value;
	}

	inline static int32_t get_offset_of__dataLabelsEnabled_38() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsEnabled_38)); }
	inline bool get__dataLabelsEnabled_38() const { return ____dataLabelsEnabled_38; }
	inline bool* get_address_of__dataLabelsEnabled_38() { return &____dataLabelsEnabled_38; }
	inline void set__dataLabelsEnabled_38(bool value)
	{
		____dataLabelsEnabled_38 = value;
	}

	inline static int32_t get_offset_of__dataLabelsNumDecimals_39() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsNumDecimals_39)); }
	inline int32_t get__dataLabelsNumDecimals_39() const { return ____dataLabelsNumDecimals_39; }
	inline int32_t* get_address_of__dataLabelsNumDecimals_39() { return &____dataLabelsNumDecimals_39; }
	inline void set__dataLabelsNumDecimals_39(int32_t value)
	{
		____dataLabelsNumDecimals_39 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontSize_40() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsFontSize_40)); }
	inline int32_t get__dataLabelsFontSize_40() const { return ____dataLabelsFontSize_40; }
	inline int32_t* get_address_of__dataLabelsFontSize_40() { return &____dataLabelsFontSize_40; }
	inline void set__dataLabelsFontSize_40(int32_t value)
	{
		____dataLabelsFontSize_40 = value;
	}

	inline static int32_t get_offset_of__dataLabelsColor_41() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsColor_41)); }
	inline Color_t2020392075  get__dataLabelsColor_41() const { return ____dataLabelsColor_41; }
	inline Color_t2020392075 * get_address_of__dataLabelsColor_41() { return &____dataLabelsColor_41; }
	inline void set__dataLabelsColor_41(Color_t2020392075  value)
	{
		____dataLabelsColor_41 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontStyle_42() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsFontStyle_42)); }
	inline int32_t get__dataLabelsFontStyle_42() const { return ____dataLabelsFontStyle_42; }
	inline int32_t* get_address_of__dataLabelsFontStyle_42() { return &____dataLabelsFontStyle_42; }
	inline void set__dataLabelsFontStyle_42(int32_t value)
	{
		____dataLabelsFontStyle_42 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFont_43() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsFont_43)); }
	inline Font_t4239498691 * get__dataLabelsFont_43() const { return ____dataLabelsFont_43; }
	inline Font_t4239498691 ** get_address_of__dataLabelsFont_43() { return &____dataLabelsFont_43; }
	inline void set__dataLabelsFont_43(Font_t4239498691 * value)
	{
		____dataLabelsFont_43 = value;
		Il2CppCodeGenWriteBarrier(&____dataLabelsFont_43, value);
	}

	inline static int32_t get_offset_of__dataLabelsAnchoredLeftBot_44() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsAnchoredLeftBot_44)); }
	inline bool get__dataLabelsAnchoredLeftBot_44() const { return ____dataLabelsAnchoredLeftBot_44; }
	inline bool* get_address_of__dataLabelsAnchoredLeftBot_44() { return &____dataLabelsAnchoredLeftBot_44; }
	inline void set__dataLabelsAnchoredLeftBot_44(bool value)
	{
		____dataLabelsAnchoredLeftBot_44 = value;
	}

	inline static int32_t get_offset_of__dataLabelsOffset_45() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____dataLabelsOffset_45)); }
	inline Vector2_t2243707579  get__dataLabelsOffset_45() const { return ____dataLabelsOffset_45; }
	inline Vector2_t2243707579 * get_address_of__dataLabelsOffset_45() { return &____dataLabelsOffset_45; }
	inline void set__dataLabelsOffset_45(Vector2_t2243707579  value)
	{
		____dataLabelsOffset_45 = value;
	}

	inline static int32_t get_offset_of__areaShadingType_46() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____areaShadingType_46)); }
	inline int32_t get__areaShadingType_46() const { return ____areaShadingType_46; }
	inline int32_t* get_address_of__areaShadingType_46() { return &____areaShadingType_46; }
	inline void set__areaShadingType_46(int32_t value)
	{
		____areaShadingType_46 = value;
	}

	inline static int32_t get_offset_of__areaShadingUsesComputeShader_47() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____areaShadingUsesComputeShader_47)); }
	inline bool get__areaShadingUsesComputeShader_47() const { return ____areaShadingUsesComputeShader_47; }
	inline bool* get_address_of__areaShadingUsesComputeShader_47() { return &____areaShadingUsesComputeShader_47; }
	inline void set__areaShadingUsesComputeShader_47(bool value)
	{
		____areaShadingUsesComputeShader_47 = value;
	}

	inline static int32_t get_offset_of__areaShadingColor_48() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____areaShadingColor_48)); }
	inline Color_t2020392075  get__areaShadingColor_48() const { return ____areaShadingColor_48; }
	inline Color_t2020392075 * get_address_of__areaShadingColor_48() { return &____areaShadingColor_48; }
	inline void set__areaShadingColor_48(Color_t2020392075  value)
	{
		____areaShadingColor_48 = value;
	}

	inline static int32_t get_offset_of__areaShadingAxisValue_49() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____areaShadingAxisValue_49)); }
	inline float get__areaShadingAxisValue_49() const { return ____areaShadingAxisValue_49; }
	inline float* get_address_of__areaShadingAxisValue_49() { return &____areaShadingAxisValue_49; }
	inline void set__areaShadingAxisValue_49(float value)
	{
		____areaShadingAxisValue_49 = value;
	}

	inline static int32_t get_offset_of__pointPrefab_50() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____pointPrefab_50)); }
	inline int32_t get__pointPrefab_50() const { return ____pointPrefab_50; }
	inline int32_t* get_address_of__pointPrefab_50() { return &____pointPrefab_50; }
	inline void set__pointPrefab_50(int32_t value)
	{
		____pointPrefab_50 = value;
	}

	inline static int32_t get_offset_of__linkPrefab_51() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ____linkPrefab_51)); }
	inline int32_t get__linkPrefab_51() const { return ____linkPrefab_51; }
	inline int32_t* get_address_of__linkPrefab_51() { return &____linkPrefab_51; }
	inline void set__linkPrefab_51(int32_t value)
	{
		____linkPrefab_51 = value;
	}

	inline static int32_t get_offset_of_nodePrefab_52() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___nodePrefab_52)); }
	inline Object_t1021602117 * get_nodePrefab_52() const { return ___nodePrefab_52; }
	inline Object_t1021602117 ** get_address_of_nodePrefab_52() { return &___nodePrefab_52; }
	inline void set_nodePrefab_52(Object_t1021602117 * value)
	{
		___nodePrefab_52 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefab_52, value);
	}

	inline static int32_t get_offset_of_points_53() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___points_53)); }
	inline List_1_t1125654279 * get_points_53() const { return ___points_53; }
	inline List_1_t1125654279 ** get_address_of_points_53() { return &___points_53; }
	inline void set_points_53(List_1_t1125654279 * value)
	{
		___points_53 = value;
		Il2CppCodeGenWriteBarrier(&___points_53, value);
	}

	inline static int32_t get_offset_of_lines_54() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___lines_54)); }
	inline List_1_t1125654279 * get_lines_54() const { return ___lines_54; }
	inline List_1_t1125654279 ** get_address_of_lines_54() { return &___lines_54; }
	inline void set_lines_54(List_1_t1125654279 * value)
	{
		___lines_54 = value;
		Il2CppCodeGenWriteBarrier(&___lines_54, value);
	}

	inline static int32_t get_offset_of_areaShadingRects_55() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingRects_55)); }
	inline List_1_t1125654279 * get_areaShadingRects_55() const { return ___areaShadingRects_55; }
	inline List_1_t1125654279 ** get_address_of_areaShadingRects_55() { return &___areaShadingRects_55; }
	inline void set_areaShadingRects_55(List_1_t1125654279 * value)
	{
		___areaShadingRects_55 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingRects_55, value);
	}

	inline static int32_t get_offset_of_dataLabels_56() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___dataLabels_56)); }
	inline List_1_t1125654279 * get_dataLabels_56() const { return ___dataLabels_56; }
	inline List_1_t1125654279 ** get_address_of_dataLabels_56() { return &___dataLabels_56; }
	inline void set_dataLabels_56(List_1_t1125654279 * value)
	{
		___dataLabels_56 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabels_56, value);
	}

	inline static int32_t get_offset_of_barIsNegative_57() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___barIsNegative_57)); }
	inline List_1_t3194695850 * get_barIsNegative_57() const { return ___barIsNegative_57; }
	inline List_1_t3194695850 ** get_address_of_barIsNegative_57() { return &___barIsNegative_57; }
	inline void set_barIsNegative_57(List_1_t3194695850 * value)
	{
		___barIsNegative_57 = value;
		Il2CppCodeGenWriteBarrier(&___barIsNegative_57, value);
	}

	inline static int32_t get_offset_of_changedValIndices_58() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___changedValIndices_58)); }
	inline List_1_t1440998580 * get_changedValIndices_58() const { return ___changedValIndices_58; }
	inline List_1_t1440998580 ** get_address_of_changedValIndices_58() { return &___changedValIndices_58; }
	inline void set_changedValIndices_58(List_1_t1440998580 * value)
	{
		___changedValIndices_58 = value;
		Il2CppCodeGenWriteBarrier(&___changedValIndices_58, value);
	}

	inline static int32_t get_offset_of_U3CorigPointWidthHeightU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___U3CorigPointWidthHeightU3Ek__BackingField_59)); }
	inline float get_U3CorigPointWidthHeightU3Ek__BackingField_59() const { return ___U3CorigPointWidthHeightU3Ek__BackingField_59; }
	inline float* get_address_of_U3CorigPointWidthHeightU3Ek__BackingField_59() { return &___U3CorigPointWidthHeightU3Ek__BackingField_59; }
	inline void set_U3CorigPointWidthHeightU3Ek__BackingField_59(float value)
	{
		___U3CorigPointWidthHeightU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CorigLineScaleU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___U3CorigLineScaleU3Ek__BackingField_60)); }
	inline float get_U3CorigLineScaleU3Ek__BackingField_60() const { return ___U3CorigLineScaleU3Ek__BackingField_60; }
	inline float* get_address_of_U3CorigLineScaleU3Ek__BackingField_60() { return &___U3CorigLineScaleU3Ek__BackingField_60; }
	inline void set_U3CorigLineScaleU3Ek__BackingField_60(float value)
	{
		___U3CorigLineScaleU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CorigDataLabelsFontSizeU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___U3CorigDataLabelsFontSizeU3Ek__BackingField_61)); }
	inline int32_t get_U3CorigDataLabelsFontSizeU3Ek__BackingField_61() const { return ___U3CorigDataLabelsFontSizeU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CorigDataLabelsFontSizeU3Ek__BackingField_61() { return &___U3CorigDataLabelsFontSizeU3Ek__BackingField_61; }
	inline void set_U3CorigDataLabelsFontSizeU3Ek__BackingField_61(int32_t value)
	{
		___U3CorigDataLabelsFontSizeU3Ek__BackingField_61 = value;
	}

	inline static int32_t get_offset_of_U3CorigDataLabelOffsetU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___U3CorigDataLabelOffsetU3Ek__BackingField_62)); }
	inline Vector2_t2243707579  get_U3CorigDataLabelOffsetU3Ek__BackingField_62() const { return ___U3CorigDataLabelOffsetU3Ek__BackingField_62; }
	inline Vector2_t2243707579 * get_address_of_U3CorigDataLabelOffsetU3Ek__BackingField_62() { return &___U3CorigDataLabelOffsetU3Ek__BackingField_62; }
	inline void set_U3CorigDataLabelOffsetU3Ek__BackingField_62(Vector2_t2243707579  value)
	{
		___U3CorigDataLabelOffsetU3Ek__BackingField_62 = value;
	}

	inline static int32_t get_offset_of_cachedSeriesType_63() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___cachedSeriesType_63)); }
	inline int32_t get_cachedSeriesType_63() const { return ___cachedSeriesType_63; }
	inline int32_t* get_address_of_cachedSeriesType_63() { return &___cachedSeriesType_63; }
	inline void set_cachedSeriesType_63(int32_t value)
	{
		___cachedSeriesType_63 = value;
	}

	inline static int32_t get_offset_of_realTimeRunning_64() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___realTimeRunning_64)); }
	inline bool get_realTimeRunning_64() const { return ___realTimeRunning_64; }
	inline bool* get_address_of_realTimeRunning_64() { return &___realTimeRunning_64; }
	inline void set_realTimeRunning_64(bool value)
	{
		___realTimeRunning_64 = value;
	}

	inline static int32_t get_offset_of_realTimeLoopVar_65() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___realTimeLoopVar_65)); }
	inline float get_realTimeLoopVar_65() const { return ___realTimeLoopVar_65; }
	inline float* get_address_of_realTimeLoopVar_65() { return &___realTimeLoopVar_65; }
	inline void set_realTimeLoopVar_65(float value)
	{
		___realTimeLoopVar_65 = value;
	}

	inline static int32_t get_offset_of_realTimeOrigMax_66() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___realTimeOrigMax_66)); }
	inline float get_realTimeOrigMax_66() const { return ___realTimeOrigMax_66; }
	inline float* get_address_of_realTimeOrigMax_66() { return &___realTimeOrigMax_66; }
	inline void set_realTimeOrigMax_66(float value)
	{
		___realTimeOrigMax_66 = value;
	}

	inline static int32_t get_offset_of_beginningToAutoAnimate_67() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___beginningToAutoAnimate_67)); }
	inline bool get_beginningToAutoAnimate_67() const { return ___beginningToAutoAnimate_67; }
	inline bool* get_address_of_beginningToAutoAnimate_67() { return &___beginningToAutoAnimate_67; }
	inline void set_beginningToAutoAnimate_67(bool value)
	{
		___beginningToAutoAnimate_67 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentlyAnimatingU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___U3CcurrentlyAnimatingU3Ek__BackingField_68)); }
	inline bool get_U3CcurrentlyAnimatingU3Ek__BackingField_68() const { return ___U3CcurrentlyAnimatingU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CcurrentlyAnimatingU3Ek__BackingField_68() { return &___U3CcurrentlyAnimatingU3Ek__BackingField_68; }
	inline void set_U3CcurrentlyAnimatingU3Ek__BackingField_68(bool value)
	{
		___U3CcurrentlyAnimatingU3Ek__BackingField_68 = value;
	}

	inline static int32_t get_offset_of_U3CautoAnimationTimelineU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___U3CautoAnimationTimelineU3Ek__BackingField_69)); }
	inline float get_U3CautoAnimationTimelineU3Ek__BackingField_69() const { return ___U3CautoAnimationTimelineU3Ek__BackingField_69; }
	inline float* get_address_of_U3CautoAnimationTimelineU3Ek__BackingField_69() { return &___U3CautoAnimationTimelineU3Ek__BackingField_69; }
	inline void set_U3CautoAnimationTimelineU3Ek__BackingField_69(float value)
	{
		___U3CautoAnimationTimelineU3Ek__BackingField_69 = value;
	}

	inline static int32_t get_offset_of_afterPositions_70() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___afterPositions_70)); }
	inline List_1_t1612828711 * get_afterPositions_70() const { return ___afterPositions_70; }
	inline List_1_t1612828711 ** get_address_of_afterPositions_70() { return &___afterPositions_70; }
	inline void set_afterPositions_70(List_1_t1612828711 * value)
	{
		___afterPositions_70 = value;
		Il2CppCodeGenWriteBarrier(&___afterPositions_70, value);
	}

	inline static int32_t get_offset_of_afterWidths_71() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___afterWidths_71)); }
	inline List_1_t1440998580 * get_afterWidths_71() const { return ___afterWidths_71; }
	inline List_1_t1440998580 ** get_address_of_afterWidths_71() { return &___afterWidths_71; }
	inline void set_afterWidths_71(List_1_t1440998580 * value)
	{
		___afterWidths_71 = value;
		Il2CppCodeGenWriteBarrier(&___afterWidths_71, value);
	}

	inline static int32_t get_offset_of_afterHeights_72() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___afterHeights_72)); }
	inline List_1_t1440998580 * get_afterHeights_72() const { return ___afterHeights_72; }
	inline List_1_t1440998580 ** get_address_of_afterHeights_72() { return &___afterHeights_72; }
	inline void set_afterHeights_72(List_1_t1440998580 * value)
	{
		___afterHeights_72 = value;
		Il2CppCodeGenWriteBarrier(&___afterHeights_72, value);
	}

	inline static int32_t get_offset_of_origPositions_73() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___origPositions_73)); }
	inline List_1_t1612828711 * get_origPositions_73() const { return ___origPositions_73; }
	inline List_1_t1612828711 ** get_address_of_origPositions_73() { return &___origPositions_73; }
	inline void set_origPositions_73(List_1_t1612828711 * value)
	{
		___origPositions_73 = value;
		Il2CppCodeGenWriteBarrier(&___origPositions_73, value);
	}

	inline static int32_t get_offset_of_origWidths_74() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___origWidths_74)); }
	inline List_1_t1440998580 * get_origWidths_74() const { return ___origWidths_74; }
	inline List_1_t1440998580 ** get_address_of_origWidths_74() { return &___origWidths_74; }
	inline void set_origWidths_74(List_1_t1440998580 * value)
	{
		___origWidths_74 = value;
		Il2CppCodeGenWriteBarrier(&___origWidths_74, value);
	}

	inline static int32_t get_offset_of_origHeights_75() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___origHeights_75)); }
	inline List_1_t1440998580 * get_origHeights_75() const { return ___origHeights_75; }
	inline List_1_t1440998580 ** get_address_of_origHeights_75() { return &___origHeights_75; }
	inline void set_origHeights_75(List_1_t1440998580 * value)
	{
		___origHeights_75 = value;
		Il2CppCodeGenWriteBarrier(&___origHeights_75, value);
	}

	inline static int32_t get_offset_of_changeObjs_76() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___changeObjs_76)); }
	inline List_1_t1684053944 * get_changeObjs_76() const { return ___changeObjs_76; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_76() { return &___changeObjs_76; }
	inline void set_changeObjs_76(List_1_t1684053944 * value)
	{
		___changeObjs_76 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_76, value);
	}

	inline static int32_t get_offset_of_pointValuesC_77() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointValuesC_77)); }
	inline WMG_Change_Obj_t2314932812 * get_pointValuesC_77() const { return ___pointValuesC_77; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_pointValuesC_77() { return &___pointValuesC_77; }
	inline void set_pointValuesC_77(WMG_Change_Obj_t2314932812 * value)
	{
		___pointValuesC_77 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesC_77, value);
	}

	inline static int32_t get_offset_of_pointValuesCountC_78() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointValuesCountC_78)); }
	inline WMG_Change_Obj_t2314932812 * get_pointValuesCountC_78() const { return ___pointValuesCountC_78; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_pointValuesCountC_78() { return &___pointValuesCountC_78; }
	inline void set_pointValuesCountC_78(WMG_Change_Obj_t2314932812 * value)
	{
		___pointValuesCountC_78 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesCountC_78, value);
	}

	inline static int32_t get_offset_of_pointValuesValC_79() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointValuesValC_79)); }
	inline WMG_Change_Obj_t2314932812 * get_pointValuesValC_79() const { return ___pointValuesValC_79; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_pointValuesValC_79() { return &___pointValuesValC_79; }
	inline void set_pointValuesValC_79(WMG_Change_Obj_t2314932812 * value)
	{
		___pointValuesValC_79 = value;
		Il2CppCodeGenWriteBarrier(&___pointValuesValC_79, value);
	}

	inline static int32_t get_offset_of_lineScaleC_80() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___lineScaleC_80)); }
	inline WMG_Change_Obj_t2314932812 * get_lineScaleC_80() const { return ___lineScaleC_80; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_lineScaleC_80() { return &___lineScaleC_80; }
	inline void set_lineScaleC_80(WMG_Change_Obj_t2314932812 * value)
	{
		___lineScaleC_80 = value;
		Il2CppCodeGenWriteBarrier(&___lineScaleC_80, value);
	}

	inline static int32_t get_offset_of_pointWidthHeightC_81() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointWidthHeightC_81)); }
	inline WMG_Change_Obj_t2314932812 * get_pointWidthHeightC_81() const { return ___pointWidthHeightC_81; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_pointWidthHeightC_81() { return &___pointWidthHeightC_81; }
	inline void set_pointWidthHeightC_81(WMG_Change_Obj_t2314932812 * value)
	{
		___pointWidthHeightC_81 = value;
		Il2CppCodeGenWriteBarrier(&___pointWidthHeightC_81, value);
	}

	inline static int32_t get_offset_of_dataLabelsC_82() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___dataLabelsC_82)); }
	inline WMG_Change_Obj_t2314932812 * get_dataLabelsC_82() const { return ___dataLabelsC_82; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_dataLabelsC_82() { return &___dataLabelsC_82; }
	inline void set_dataLabelsC_82(WMG_Change_Obj_t2314932812 * value)
	{
		___dataLabelsC_82 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabelsC_82, value);
	}

	inline static int32_t get_offset_of_lineColorC_83() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___lineColorC_83)); }
	inline WMG_Change_Obj_t2314932812 * get_lineColorC_83() const { return ___lineColorC_83; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_lineColorC_83() { return &___lineColorC_83; }
	inline void set_lineColorC_83(WMG_Change_Obj_t2314932812 * value)
	{
		___lineColorC_83 = value;
		Il2CppCodeGenWriteBarrier(&___lineColorC_83, value);
	}

	inline static int32_t get_offset_of_pointColorC_84() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___pointColorC_84)); }
	inline WMG_Change_Obj_t2314932812 * get_pointColorC_84() const { return ___pointColorC_84; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_pointColorC_84() { return &___pointColorC_84; }
	inline void set_pointColorC_84(WMG_Change_Obj_t2314932812 * value)
	{
		___pointColorC_84 = value;
		Il2CppCodeGenWriteBarrier(&___pointColorC_84, value);
	}

	inline static int32_t get_offset_of_hideLineC_85() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___hideLineC_85)); }
	inline WMG_Change_Obj_t2314932812 * get_hideLineC_85() const { return ___hideLineC_85; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_hideLineC_85() { return &___hideLineC_85; }
	inline void set_hideLineC_85(WMG_Change_Obj_t2314932812 * value)
	{
		___hideLineC_85 = value;
		Il2CppCodeGenWriteBarrier(&___hideLineC_85, value);
	}

	inline static int32_t get_offset_of_hidePointC_86() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___hidePointC_86)); }
	inline WMG_Change_Obj_t2314932812 * get_hidePointC_86() const { return ___hidePointC_86; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_hidePointC_86() { return &___hidePointC_86; }
	inline void set_hidePointC_86(WMG_Change_Obj_t2314932812 * value)
	{
		___hidePointC_86 = value;
		Il2CppCodeGenWriteBarrier(&___hidePointC_86, value);
	}

	inline static int32_t get_offset_of_seriesNameC_87() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___seriesNameC_87)); }
	inline WMG_Change_Obj_t2314932812 * get_seriesNameC_87() const { return ___seriesNameC_87; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_seriesNameC_87() { return &___seriesNameC_87; }
	inline void set_seriesNameC_87(WMG_Change_Obj_t2314932812 * value)
	{
		___seriesNameC_87 = value;
		Il2CppCodeGenWriteBarrier(&___seriesNameC_87, value);
	}

	inline static int32_t get_offset_of_linePaddingC_88() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___linePaddingC_88)); }
	inline WMG_Change_Obj_t2314932812 * get_linePaddingC_88() const { return ___linePaddingC_88; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_linePaddingC_88() { return &___linePaddingC_88; }
	inline void set_linePaddingC_88(WMG_Change_Obj_t2314932812 * value)
	{
		___linePaddingC_88 = value;
		Il2CppCodeGenWriteBarrier(&___linePaddingC_88, value);
	}

	inline static int32_t get_offset_of_areaShadingTypeC_89() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingTypeC_89)); }
	inline WMG_Change_Obj_t2314932812 * get_areaShadingTypeC_89() const { return ___areaShadingTypeC_89; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_areaShadingTypeC_89() { return &___areaShadingTypeC_89; }
	inline void set_areaShadingTypeC_89(WMG_Change_Obj_t2314932812 * value)
	{
		___areaShadingTypeC_89 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingTypeC_89, value);
	}

	inline static int32_t get_offset_of_areaShadingC_90() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___areaShadingC_90)); }
	inline WMG_Change_Obj_t2314932812 * get_areaShadingC_90() const { return ___areaShadingC_90; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_areaShadingC_90() { return &___areaShadingC_90; }
	inline void set_areaShadingC_90(WMG_Change_Obj_t2314932812 * value)
	{
		___areaShadingC_90 = value;
		Il2CppCodeGenWriteBarrier(&___areaShadingC_90, value);
	}

	inline static int32_t get_offset_of_prefabC_91() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___prefabC_91)); }
	inline WMG_Change_Obj_t2314932812 * get_prefabC_91() const { return ___prefabC_91; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_prefabC_91() { return &___prefabC_91; }
	inline void set_prefabC_91(WMG_Change_Obj_t2314932812 * value)
	{
		___prefabC_91 = value;
		Il2CppCodeGenWriteBarrier(&___prefabC_91, value);
	}

	inline static int32_t get_offset_of_connectFirstToLastC_92() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___connectFirstToLastC_92)); }
	inline WMG_Change_Obj_t2314932812 * get_connectFirstToLastC_92() const { return ___connectFirstToLastC_92; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_connectFirstToLastC_92() { return &___connectFirstToLastC_92; }
	inline void set_connectFirstToLastC_92(WMG_Change_Obj_t2314932812 * value)
	{
		___connectFirstToLastC_92 = value;
		Il2CppCodeGenWriteBarrier(&___connectFirstToLastC_92, value);
	}

	inline static int32_t get_offset_of_hasInit_93() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___hasInit_93)); }
	inline bool get_hasInit_93() const { return ___hasInit_93; }
	inline bool* get_address_of_hasInit_93() { return &___hasInit_93; }
	inline void set_hasInit_93(bool value)
	{
		___hasInit_93 = value;
	}

	inline static int32_t get_offset_of_seriesDataLabeler_94() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___seriesDataLabeler_94)); }
	inline SeriesDataLabeler_t652605318 * get_seriesDataLabeler_94() const { return ___seriesDataLabeler_94; }
	inline SeriesDataLabeler_t652605318 ** get_address_of_seriesDataLabeler_94() { return &___seriesDataLabeler_94; }
	inline void set_seriesDataLabeler_94(SeriesDataLabeler_t652605318 * value)
	{
		___seriesDataLabeler_94 = value;
		Il2CppCodeGenWriteBarrier(&___seriesDataLabeler_94, value);
	}

	inline static int32_t get_offset_of_tooltipPointAnimator_95() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___tooltipPointAnimator_95)); }
	inline TooltipPointAnimator_t1694657494 * get_tooltipPointAnimator_95() const { return ___tooltipPointAnimator_95; }
	inline TooltipPointAnimator_t1694657494 ** get_address_of_tooltipPointAnimator_95() { return &___tooltipPointAnimator_95; }
	inline void set_tooltipPointAnimator_95(TooltipPointAnimator_t1694657494 * value)
	{
		___tooltipPointAnimator_95 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipPointAnimator_95, value);
	}

	inline static int32_t get_offset_of_SeriesAutoAnimStarted_96() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___SeriesAutoAnimStarted_96)); }
	inline SeriesAutoAnimStartedHandler_t3393216812 * get_SeriesAutoAnimStarted_96() const { return ___SeriesAutoAnimStarted_96; }
	inline SeriesAutoAnimStartedHandler_t3393216812 ** get_address_of_SeriesAutoAnimStarted_96() { return &___SeriesAutoAnimStarted_96; }
	inline void set_SeriesAutoAnimStarted_96(SeriesAutoAnimStartedHandler_t3393216812 * value)
	{
		___SeriesAutoAnimStarted_96 = value;
		Il2CppCodeGenWriteBarrier(&___SeriesAutoAnimStarted_96, value);
	}

	inline static int32_t get_offset_of_PointCreated_97() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___PointCreated_97)); }
	inline PointCreatedHandler_t115080874 * get_PointCreated_97() const { return ___PointCreated_97; }
	inline PointCreatedHandler_t115080874 ** get_address_of_PointCreated_97() { return &___PointCreated_97; }
	inline void set_PointCreated_97(PointCreatedHandler_t115080874 * value)
	{
		___PointCreated_97 = value;
		Il2CppCodeGenWriteBarrier(&___PointCreated_97, value);
	}

	inline static int32_t get_offset_of_PointSpriteUpdated_98() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___PointSpriteUpdated_98)); }
	inline PointSpriteUpdatedHandler_t1824833182 * get_PointSpriteUpdated_98() const { return ___PointSpriteUpdated_98; }
	inline PointSpriteUpdatedHandler_t1824833182 ** get_address_of_PointSpriteUpdated_98() { return &___PointSpriteUpdated_98; }
	inline void set_PointSpriteUpdated_98(PointSpriteUpdatedHandler_t1824833182 * value)
	{
		___PointSpriteUpdated_98 = value;
		Il2CppCodeGenWriteBarrier(&___PointSpriteUpdated_98, value);
	}

	inline static int32_t get_offset_of_PointShadingSpriteUpdated_99() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___PointShadingSpriteUpdated_99)); }
	inline PointShadingSpriteUpdatedHandler_t653935292 * get_PointShadingSpriteUpdated_99() const { return ___PointShadingSpriteUpdated_99; }
	inline PointShadingSpriteUpdatedHandler_t653935292 ** get_address_of_PointShadingSpriteUpdated_99() { return &___PointShadingSpriteUpdated_99; }
	inline void set_PointShadingSpriteUpdated_99(PointShadingSpriteUpdatedHandler_t653935292 * value)
	{
		___PointShadingSpriteUpdated_99 = value;
		Il2CppCodeGenWriteBarrier(&___PointShadingSpriteUpdated_99, value);
	}

	inline static int32_t get_offset_of_AutoUpdateXDistBetween_100() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291, ___AutoUpdateXDistBetween_100)); }
	inline bool get_AutoUpdateXDistBetween_100() const { return ___AutoUpdateXDistBetween_100; }
	inline bool* get_address_of_AutoUpdateXDistBetween_100() { return &___AutoUpdateXDistBetween_100; }
	inline void set_AutoUpdateXDistBetween_100(bool value)
	{
		___AutoUpdateXDistBetween_100 = value;
	}
};

struct WMG_Series_t1402980291_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.Vector2> WMG_Series::<>f__am$cache0
	Comparison_1_t3505446430 * ___U3CU3Ef__amU24cache0_101;
	// System.Comparison`1<UnityEngine.Vector2> WMG_Series::<>f__am$cache1
	Comparison_1_t3505446430 * ___U3CU3Ef__amU24cache1_102;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_101() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291_StaticFields, ___U3CU3Ef__amU24cache0_101)); }
	inline Comparison_1_t3505446430 * get_U3CU3Ef__amU24cache0_101() const { return ___U3CU3Ef__amU24cache0_101; }
	inline Comparison_1_t3505446430 ** get_address_of_U3CU3Ef__amU24cache0_101() { return &___U3CU3Ef__amU24cache0_101; }
	inline void set_U3CU3Ef__amU24cache0_101(Comparison_1_t3505446430 * value)
	{
		___U3CU3Ef__amU24cache0_101 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_101, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_102() { return static_cast<int32_t>(offsetof(WMG_Series_t1402980291_StaticFields, ___U3CU3Ef__amU24cache1_102)); }
	inline Comparison_1_t3505446430 * get_U3CU3Ef__amU24cache1_102() const { return ___U3CU3Ef__amU24cache1_102; }
	inline Comparison_1_t3505446430 ** get_address_of_U3CU3Ef__amU24cache1_102() { return &___U3CU3Ef__amU24cache1_102; }
	inline void set_U3CU3Ef__amU24cache1_102(Comparison_1_t3505446430 * value)
	{
		___U3CU3Ef__amU24cache1_102 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_102, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
