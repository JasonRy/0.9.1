#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Graph_Manager1488325314.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_graphTypes1920111748.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_orientationTypes133738122.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_axesTypes996308199.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_ResizeProperties554172928.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph_AutoPaddingProper4059460018.h"

// WMG_Axis
struct WMG_Axis_t1943926323;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// WMG_List`1<System.String>
struct WMG_List_1_t181077265;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t390723249;
// UnityEngine.Object
struct Object_t1021602117;
// WMG_Legend
struct WMG_Legend_t2854767033;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Graph_Tooltip
struct WMG_Graph_Tooltip_t492427502;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// WMG_Graph_Auto_Anim
struct WMG_Graph_Auto_Anim_t872713172;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;
// WMG_Axis_Graph/GraphBackgroundChangedHandler
struct GraphBackgroundChangedHandler_t2639770971;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Axis_Graph
struct  WMG_Axis_Graph_t1917651748  : public WMG_Graph_Manager_t1488325314
{
public:
	// WMG_Axis WMG_Axis_Graph::yAxis
	WMG_Axis_t1943926323 * ___yAxis_19;
	// WMG_Axis WMG_Axis_Graph::xAxis
	WMG_Axis_t1943926323 * ___xAxis_20;
	// WMG_Axis WMG_Axis_Graph::yAxis2
	WMG_Axis_t1943926323 * ___yAxis2_21;
	// System.Collections.Generic.List`1<System.String> WMG_Axis_Graph::_groups
	List_1_t1398341365 * ____groups_22;
	// WMG_List`1<System.String> WMG_Axis_Graph::groups
	WMG_List_1_t181077265 * ___groups_23;
	// UnityEngine.Vector2 WMG_Axis_Graph::tooltipOffset
	Vector2_t2243707579  ___tooltipOffset_24;
	// System.Int32 WMG_Axis_Graph::tooltipNumberDecimals
	int32_t ___tooltipNumberDecimals_25;
	// System.Boolean WMG_Axis_Graph::tooltipDisplaySeriesName
	bool ___tooltipDisplaySeriesName_26;
	// System.Boolean WMG_Axis_Graph::tooltipAnimationsEnabled
	bool ___tooltipAnimationsEnabled_27;
	// DG.Tweening.Ease WMG_Axis_Graph::tooltipAnimationsEasetype
	int32_t ___tooltipAnimationsEasetype_28;
	// System.Single WMG_Axis_Graph::tooltipAnimationsDuration
	float ___tooltipAnimationsDuration_29;
	// DG.Tweening.Ease WMG_Axis_Graph::autoAnimationsEasetype
	int32_t ___autoAnimationsEasetype_30;
	// System.Single WMG_Axis_Graph::autoAnimationsDuration
	float ___autoAnimationsDuration_31;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Axis_Graph::lineSeries
	List_1_t1125654279 * ___lineSeries_32;
	// System.Collections.Generic.List`1<UnityEngine.Object> WMG_Axis_Graph::pointPrefabs
	List_1_t390723249 * ___pointPrefabs_33;
	// System.Collections.Generic.List`1<UnityEngine.Object> WMG_Axis_Graph::linkPrefabs
	List_1_t390723249 * ___linkPrefabs_34;
	// UnityEngine.Object WMG_Axis_Graph::barPrefab
	Object_t1021602117 * ___barPrefab_35;
	// UnityEngine.Object WMG_Axis_Graph::seriesPrefab
	Object_t1021602117 * ___seriesPrefab_36;
	// WMG_Legend WMG_Axis_Graph::legend
	WMG_Legend_t2854767033 * ___legend_37;
	// UnityEngine.GameObject WMG_Axis_Graph::graphTitle
	GameObject_t1756533147 * ___graphTitle_38;
	// UnityEngine.GameObject WMG_Axis_Graph::graphBackground
	GameObject_t1756533147 * ___graphBackground_39;
	// UnityEngine.GameObject WMG_Axis_Graph::anchoredParent
	GameObject_t1756533147 * ___anchoredParent_40;
	// UnityEngine.GameObject WMG_Axis_Graph::graphAreaBoundsParent
	GameObject_t1756533147 * ___graphAreaBoundsParent_41;
	// UnityEngine.GameObject WMG_Axis_Graph::seriesParent
	GameObject_t1756533147 * ___seriesParent_42;
	// UnityEngine.GameObject WMG_Axis_Graph::toolTipPanel
	GameObject_t1756533147 * ___toolTipPanel_43;
	// UnityEngine.GameObject WMG_Axis_Graph::toolTipLabel
	GameObject_t1756533147 * ___toolTipLabel_44;
	// WMG_Graph_Tooltip WMG_Axis_Graph::theTooltip
	WMG_Graph_Tooltip_t492427502 * ___theTooltip_45;
	// System.Boolean WMG_Axis_Graph::resizingChangesFontScaleInsteadOfFontSize
	bool ___resizingChangesFontScaleInsteadOfFontSize_46;
	// WMG_Axis_Graph/graphTypes WMG_Axis_Graph::_graphType
	int32_t ____graphType_47;
	// WMG_Axis_Graph/orientationTypes WMG_Axis_Graph::_orientationType
	int32_t ____orientationType_48;
	// WMG_Axis_Graph/axesTypes WMG_Axis_Graph::_axesType
	int32_t ____axesType_49;
	// System.Boolean WMG_Axis_Graph::_resizeEnabled
	bool ____resizeEnabled_50;
	// WMG_Axis_Graph/ResizeProperties WMG_Axis_Graph::_resizeProperties
	int32_t ____resizeProperties_51;
	// System.Boolean WMG_Axis_Graph::_useGroups
	bool ____useGroups_52;
	// UnityEngine.Vector2 WMG_Axis_Graph::_paddingLeftRight
	Vector2_t2243707579  ____paddingLeftRight_53;
	// UnityEngine.Vector2 WMG_Axis_Graph::_paddingTopBottom
	Vector2_t2243707579  ____paddingTopBottom_54;
	// UnityEngine.Vector2 WMG_Axis_Graph::_theOrigin
	Vector2_t2243707579  ____theOrigin_55;
	// System.Single WMG_Axis_Graph::_barWidth
	float ____barWidth_56;
	// System.Single WMG_Axis_Graph::_barAxisValue
	float ____barAxisValue_57;
	// System.Boolean WMG_Axis_Graph::_autoUpdateOrigin
	bool ____autoUpdateOrigin_58;
	// System.Boolean WMG_Axis_Graph::_autoUpdateBarWidth
	bool ____autoUpdateBarWidth_59;
	// System.Single WMG_Axis_Graph::_autoUpdateBarWidthSpacing
	float ____autoUpdateBarWidthSpacing_60;
	// System.Boolean WMG_Axis_Graph::_autoUpdateSeriesAxisSpacing
	bool ____autoUpdateSeriesAxisSpacing_61;
	// System.Boolean WMG_Axis_Graph::_autoUpdateBarAxisValue
	bool ____autoUpdateBarAxisValue_62;
	// System.Int32 WMG_Axis_Graph::_axisWidth
	int32_t ____axisWidth_63;
	// System.Single WMG_Axis_Graph::_autoShrinkAtPercent
	float ____autoShrinkAtPercent_64;
	// System.Single WMG_Axis_Graph::_autoGrowAndShrinkByPercent
	float ____autoGrowAndShrinkByPercent_65;
	// System.Boolean WMG_Axis_Graph::_tooltipEnabled
	bool ____tooltipEnabled_66;
	// System.Boolean WMG_Axis_Graph::_autoAnimationsEnabled
	bool ____autoAnimationsEnabled_67;
	// WMG_Axis_Graph/AutoPaddingProperties WMG_Axis_Graph::_autoPaddingProperties
	int32_t ____autoPaddingProperties_68;
	// System.Boolean WMG_Axis_Graph::_autoPaddingEnabled
	bool ____autoPaddingEnabled_69;
	// System.Single WMG_Axis_Graph::_autoPaddingAmount
	float ____autoPaddingAmount_70;
	// UnityEngine.Vector2 WMG_Axis_Graph::_tickSize
	Vector2_t2243707579  ____tickSize_71;
	// System.String WMG_Axis_Graph::_graphTitleString
	String_t* ____graphTitleString_72;
	// UnityEngine.Vector2 WMG_Axis_Graph::_graphTitleOffset
	Vector2_t2243707579  ____graphTitleOffset_73;
	// System.Int32 WMG_Axis_Graph::_graphTitleSize
	int32_t ____graphTitleSize_74;
	// System.Collections.Generic.List`1<System.Single> WMG_Axis_Graph::totalPointValues
	List_1_t1445631064 * ___totalPointValues_75;
	// System.Int32 WMG_Axis_Graph::maxSeriesPointCount
	int32_t ___maxSeriesPointCount_76;
	// System.Int32 WMG_Axis_Graph::maxSeriesBarCount
	int32_t ___maxSeriesBarCount_77;
	// System.Int32 WMG_Axis_Graph::numComboBarSeries
	int32_t ___numComboBarSeries_78;
	// System.Single WMG_Axis_Graph::origWidth
	float ___origWidth_79;
	// System.Single WMG_Axis_Graph::origHeight
	float ___origHeight_80;
	// System.Single WMG_Axis_Graph::origBarWidth
	float ___origBarWidth_81;
	// System.Single WMG_Axis_Graph::origAxisWidth
	float ___origAxisWidth_82;
	// System.Single WMG_Axis_Graph::origAutoPaddingAmount
	float ___origAutoPaddingAmount_83;
	// UnityEngine.Vector2 WMG_Axis_Graph::origTickSize
	Vector2_t2243707579  ___origTickSize_84;
	// UnityEngine.Vector2 WMG_Axis_Graph::origPaddingLeftRight
	Vector2_t2243707579  ___origPaddingLeftRight_85;
	// UnityEngine.Vector2 WMG_Axis_Graph::origPaddingTopBottom
	Vector2_t2243707579  ___origPaddingTopBottom_86;
	// UnityEngine.Vector2 WMG_Axis_Graph::origGraphTitleOffset
	Vector2_t2243707579  ___origGraphTitleOffset_87;
	// System.Int32 WMG_Axis_Graph::origGraphTitleSize
	int32_t ___origGraphTitleSize_88;
	// System.Single WMG_Axis_Graph::cachedContainerWidth
	float ___cachedContainerWidth_89;
	// System.Single WMG_Axis_Graph::cachedContainerHeight
	float ___cachedContainerHeight_90;
	// WMG_Graph_Auto_Anim WMG_Axis_Graph::autoAnim
	WMG_Graph_Auto_Anim_t872713172 * ___autoAnim_91;
	// System.Boolean WMG_Axis_Graph::hasInit
	bool ___hasInit_92;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Axis_Graph::changeObjs
	List_1_t1684053944 * ___changeObjs_93;
	// WMG_Change_Obj WMG_Axis_Graph::graphC
	WMG_Change_Obj_t2314932812 * ___graphC_94;
	// WMG_Change_Obj WMG_Axis_Graph::seriesCountC
	WMG_Change_Obj_t2314932812 * ___seriesCountC_95;
	// WMG_Change_Obj WMG_Axis_Graph::seriesNoCountC
	WMG_Change_Obj_t2314932812 * ___seriesNoCountC_96;
	// WMG_Change_Obj WMG_Axis_Graph::tooltipEnabledC
	WMG_Change_Obj_t2314932812 * ___tooltipEnabledC_97;
	// WMG_Change_Obj WMG_Axis_Graph::autoAnimEnabledC
	WMG_Change_Obj_t2314932812 * ___autoAnimEnabledC_98;
	// WMG_Change_Obj WMG_Axis_Graph::orientationC
	WMG_Change_Obj_t2314932812 * ___orientationC_99;
	// WMG_Change_Obj WMG_Axis_Graph::graphTypeC
	WMG_Change_Obj_t2314932812 * ___graphTypeC_100;
	// WMG_Change_Obj WMG_Axis_Graph::autoPaddingC
	WMG_Change_Obj_t2314932812 * ___autoPaddingC_101;
	// WMG_Axis_Graph/GraphBackgroundChangedHandler WMG_Axis_Graph::GraphBackgroundChanged
	GraphBackgroundChangedHandler_t2639770971 * ___GraphBackgroundChanged_102;
	// System.Boolean WMG_Axis_Graph::<autoFitLabels>k__BackingField
	bool ___U3CautoFitLabelsU3Ek__BackingField_103;
	// System.Single WMG_Axis_Graph::<autoFitPadding>k__BackingField
	float ___U3CautoFitPaddingU3Ek__BackingField_104;

public:
	inline static int32_t get_offset_of_yAxis_19() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___yAxis_19)); }
	inline WMG_Axis_t1943926323 * get_yAxis_19() const { return ___yAxis_19; }
	inline WMG_Axis_t1943926323 ** get_address_of_yAxis_19() { return &___yAxis_19; }
	inline void set_yAxis_19(WMG_Axis_t1943926323 * value)
	{
		___yAxis_19 = value;
		Il2CppCodeGenWriteBarrier(&___yAxis_19, value);
	}

	inline static int32_t get_offset_of_xAxis_20() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___xAxis_20)); }
	inline WMG_Axis_t1943926323 * get_xAxis_20() const { return ___xAxis_20; }
	inline WMG_Axis_t1943926323 ** get_address_of_xAxis_20() { return &___xAxis_20; }
	inline void set_xAxis_20(WMG_Axis_t1943926323 * value)
	{
		___xAxis_20 = value;
		Il2CppCodeGenWriteBarrier(&___xAxis_20, value);
	}

	inline static int32_t get_offset_of_yAxis2_21() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___yAxis2_21)); }
	inline WMG_Axis_t1943926323 * get_yAxis2_21() const { return ___yAxis2_21; }
	inline WMG_Axis_t1943926323 ** get_address_of_yAxis2_21() { return &___yAxis2_21; }
	inline void set_yAxis2_21(WMG_Axis_t1943926323 * value)
	{
		___yAxis2_21 = value;
		Il2CppCodeGenWriteBarrier(&___yAxis2_21, value);
	}

	inline static int32_t get_offset_of__groups_22() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____groups_22)); }
	inline List_1_t1398341365 * get__groups_22() const { return ____groups_22; }
	inline List_1_t1398341365 ** get_address_of__groups_22() { return &____groups_22; }
	inline void set__groups_22(List_1_t1398341365 * value)
	{
		____groups_22 = value;
		Il2CppCodeGenWriteBarrier(&____groups_22, value);
	}

	inline static int32_t get_offset_of_groups_23() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___groups_23)); }
	inline WMG_List_1_t181077265 * get_groups_23() const { return ___groups_23; }
	inline WMG_List_1_t181077265 ** get_address_of_groups_23() { return &___groups_23; }
	inline void set_groups_23(WMG_List_1_t181077265 * value)
	{
		___groups_23 = value;
		Il2CppCodeGenWriteBarrier(&___groups_23, value);
	}

	inline static int32_t get_offset_of_tooltipOffset_24() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipOffset_24)); }
	inline Vector2_t2243707579  get_tooltipOffset_24() const { return ___tooltipOffset_24; }
	inline Vector2_t2243707579 * get_address_of_tooltipOffset_24() { return &___tooltipOffset_24; }
	inline void set_tooltipOffset_24(Vector2_t2243707579  value)
	{
		___tooltipOffset_24 = value;
	}

	inline static int32_t get_offset_of_tooltipNumberDecimals_25() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipNumberDecimals_25)); }
	inline int32_t get_tooltipNumberDecimals_25() const { return ___tooltipNumberDecimals_25; }
	inline int32_t* get_address_of_tooltipNumberDecimals_25() { return &___tooltipNumberDecimals_25; }
	inline void set_tooltipNumberDecimals_25(int32_t value)
	{
		___tooltipNumberDecimals_25 = value;
	}

	inline static int32_t get_offset_of_tooltipDisplaySeriesName_26() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipDisplaySeriesName_26)); }
	inline bool get_tooltipDisplaySeriesName_26() const { return ___tooltipDisplaySeriesName_26; }
	inline bool* get_address_of_tooltipDisplaySeriesName_26() { return &___tooltipDisplaySeriesName_26; }
	inline void set_tooltipDisplaySeriesName_26(bool value)
	{
		___tooltipDisplaySeriesName_26 = value;
	}

	inline static int32_t get_offset_of_tooltipAnimationsEnabled_27() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipAnimationsEnabled_27)); }
	inline bool get_tooltipAnimationsEnabled_27() const { return ___tooltipAnimationsEnabled_27; }
	inline bool* get_address_of_tooltipAnimationsEnabled_27() { return &___tooltipAnimationsEnabled_27; }
	inline void set_tooltipAnimationsEnabled_27(bool value)
	{
		___tooltipAnimationsEnabled_27 = value;
	}

	inline static int32_t get_offset_of_tooltipAnimationsEasetype_28() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipAnimationsEasetype_28)); }
	inline int32_t get_tooltipAnimationsEasetype_28() const { return ___tooltipAnimationsEasetype_28; }
	inline int32_t* get_address_of_tooltipAnimationsEasetype_28() { return &___tooltipAnimationsEasetype_28; }
	inline void set_tooltipAnimationsEasetype_28(int32_t value)
	{
		___tooltipAnimationsEasetype_28 = value;
	}

	inline static int32_t get_offset_of_tooltipAnimationsDuration_29() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipAnimationsDuration_29)); }
	inline float get_tooltipAnimationsDuration_29() const { return ___tooltipAnimationsDuration_29; }
	inline float* get_address_of_tooltipAnimationsDuration_29() { return &___tooltipAnimationsDuration_29; }
	inline void set_tooltipAnimationsDuration_29(float value)
	{
		___tooltipAnimationsDuration_29 = value;
	}

	inline static int32_t get_offset_of_autoAnimationsEasetype_30() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___autoAnimationsEasetype_30)); }
	inline int32_t get_autoAnimationsEasetype_30() const { return ___autoAnimationsEasetype_30; }
	inline int32_t* get_address_of_autoAnimationsEasetype_30() { return &___autoAnimationsEasetype_30; }
	inline void set_autoAnimationsEasetype_30(int32_t value)
	{
		___autoAnimationsEasetype_30 = value;
	}

	inline static int32_t get_offset_of_autoAnimationsDuration_31() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___autoAnimationsDuration_31)); }
	inline float get_autoAnimationsDuration_31() const { return ___autoAnimationsDuration_31; }
	inline float* get_address_of_autoAnimationsDuration_31() { return &___autoAnimationsDuration_31; }
	inline void set_autoAnimationsDuration_31(float value)
	{
		___autoAnimationsDuration_31 = value;
	}

	inline static int32_t get_offset_of_lineSeries_32() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___lineSeries_32)); }
	inline List_1_t1125654279 * get_lineSeries_32() const { return ___lineSeries_32; }
	inline List_1_t1125654279 ** get_address_of_lineSeries_32() { return &___lineSeries_32; }
	inline void set_lineSeries_32(List_1_t1125654279 * value)
	{
		___lineSeries_32 = value;
		Il2CppCodeGenWriteBarrier(&___lineSeries_32, value);
	}

	inline static int32_t get_offset_of_pointPrefabs_33() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___pointPrefabs_33)); }
	inline List_1_t390723249 * get_pointPrefabs_33() const { return ___pointPrefabs_33; }
	inline List_1_t390723249 ** get_address_of_pointPrefabs_33() { return &___pointPrefabs_33; }
	inline void set_pointPrefabs_33(List_1_t390723249 * value)
	{
		___pointPrefabs_33 = value;
		Il2CppCodeGenWriteBarrier(&___pointPrefabs_33, value);
	}

	inline static int32_t get_offset_of_linkPrefabs_34() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___linkPrefabs_34)); }
	inline List_1_t390723249 * get_linkPrefabs_34() const { return ___linkPrefabs_34; }
	inline List_1_t390723249 ** get_address_of_linkPrefabs_34() { return &___linkPrefabs_34; }
	inline void set_linkPrefabs_34(List_1_t390723249 * value)
	{
		___linkPrefabs_34 = value;
		Il2CppCodeGenWriteBarrier(&___linkPrefabs_34, value);
	}

	inline static int32_t get_offset_of_barPrefab_35() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___barPrefab_35)); }
	inline Object_t1021602117 * get_barPrefab_35() const { return ___barPrefab_35; }
	inline Object_t1021602117 ** get_address_of_barPrefab_35() { return &___barPrefab_35; }
	inline void set_barPrefab_35(Object_t1021602117 * value)
	{
		___barPrefab_35 = value;
		Il2CppCodeGenWriteBarrier(&___barPrefab_35, value);
	}

	inline static int32_t get_offset_of_seriesPrefab_36() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___seriesPrefab_36)); }
	inline Object_t1021602117 * get_seriesPrefab_36() const { return ___seriesPrefab_36; }
	inline Object_t1021602117 ** get_address_of_seriesPrefab_36() { return &___seriesPrefab_36; }
	inline void set_seriesPrefab_36(Object_t1021602117 * value)
	{
		___seriesPrefab_36 = value;
		Il2CppCodeGenWriteBarrier(&___seriesPrefab_36, value);
	}

	inline static int32_t get_offset_of_legend_37() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___legend_37)); }
	inline WMG_Legend_t2854767033 * get_legend_37() const { return ___legend_37; }
	inline WMG_Legend_t2854767033 ** get_address_of_legend_37() { return &___legend_37; }
	inline void set_legend_37(WMG_Legend_t2854767033 * value)
	{
		___legend_37 = value;
		Il2CppCodeGenWriteBarrier(&___legend_37, value);
	}

	inline static int32_t get_offset_of_graphTitle_38() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___graphTitle_38)); }
	inline GameObject_t1756533147 * get_graphTitle_38() const { return ___graphTitle_38; }
	inline GameObject_t1756533147 ** get_address_of_graphTitle_38() { return &___graphTitle_38; }
	inline void set_graphTitle_38(GameObject_t1756533147 * value)
	{
		___graphTitle_38 = value;
		Il2CppCodeGenWriteBarrier(&___graphTitle_38, value);
	}

	inline static int32_t get_offset_of_graphBackground_39() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___graphBackground_39)); }
	inline GameObject_t1756533147 * get_graphBackground_39() const { return ___graphBackground_39; }
	inline GameObject_t1756533147 ** get_address_of_graphBackground_39() { return &___graphBackground_39; }
	inline void set_graphBackground_39(GameObject_t1756533147 * value)
	{
		___graphBackground_39 = value;
		Il2CppCodeGenWriteBarrier(&___graphBackground_39, value);
	}

	inline static int32_t get_offset_of_anchoredParent_40() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___anchoredParent_40)); }
	inline GameObject_t1756533147 * get_anchoredParent_40() const { return ___anchoredParent_40; }
	inline GameObject_t1756533147 ** get_address_of_anchoredParent_40() { return &___anchoredParent_40; }
	inline void set_anchoredParent_40(GameObject_t1756533147 * value)
	{
		___anchoredParent_40 = value;
		Il2CppCodeGenWriteBarrier(&___anchoredParent_40, value);
	}

	inline static int32_t get_offset_of_graphAreaBoundsParent_41() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___graphAreaBoundsParent_41)); }
	inline GameObject_t1756533147 * get_graphAreaBoundsParent_41() const { return ___graphAreaBoundsParent_41; }
	inline GameObject_t1756533147 ** get_address_of_graphAreaBoundsParent_41() { return &___graphAreaBoundsParent_41; }
	inline void set_graphAreaBoundsParent_41(GameObject_t1756533147 * value)
	{
		___graphAreaBoundsParent_41 = value;
		Il2CppCodeGenWriteBarrier(&___graphAreaBoundsParent_41, value);
	}

	inline static int32_t get_offset_of_seriesParent_42() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___seriesParent_42)); }
	inline GameObject_t1756533147 * get_seriesParent_42() const { return ___seriesParent_42; }
	inline GameObject_t1756533147 ** get_address_of_seriesParent_42() { return &___seriesParent_42; }
	inline void set_seriesParent_42(GameObject_t1756533147 * value)
	{
		___seriesParent_42 = value;
		Il2CppCodeGenWriteBarrier(&___seriesParent_42, value);
	}

	inline static int32_t get_offset_of_toolTipPanel_43() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___toolTipPanel_43)); }
	inline GameObject_t1756533147 * get_toolTipPanel_43() const { return ___toolTipPanel_43; }
	inline GameObject_t1756533147 ** get_address_of_toolTipPanel_43() { return &___toolTipPanel_43; }
	inline void set_toolTipPanel_43(GameObject_t1756533147 * value)
	{
		___toolTipPanel_43 = value;
		Il2CppCodeGenWriteBarrier(&___toolTipPanel_43, value);
	}

	inline static int32_t get_offset_of_toolTipLabel_44() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___toolTipLabel_44)); }
	inline GameObject_t1756533147 * get_toolTipLabel_44() const { return ___toolTipLabel_44; }
	inline GameObject_t1756533147 ** get_address_of_toolTipLabel_44() { return &___toolTipLabel_44; }
	inline void set_toolTipLabel_44(GameObject_t1756533147 * value)
	{
		___toolTipLabel_44 = value;
		Il2CppCodeGenWriteBarrier(&___toolTipLabel_44, value);
	}

	inline static int32_t get_offset_of_theTooltip_45() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___theTooltip_45)); }
	inline WMG_Graph_Tooltip_t492427502 * get_theTooltip_45() const { return ___theTooltip_45; }
	inline WMG_Graph_Tooltip_t492427502 ** get_address_of_theTooltip_45() { return &___theTooltip_45; }
	inline void set_theTooltip_45(WMG_Graph_Tooltip_t492427502 * value)
	{
		___theTooltip_45 = value;
		Il2CppCodeGenWriteBarrier(&___theTooltip_45, value);
	}

	inline static int32_t get_offset_of_resizingChangesFontScaleInsteadOfFontSize_46() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___resizingChangesFontScaleInsteadOfFontSize_46)); }
	inline bool get_resizingChangesFontScaleInsteadOfFontSize_46() const { return ___resizingChangesFontScaleInsteadOfFontSize_46; }
	inline bool* get_address_of_resizingChangesFontScaleInsteadOfFontSize_46() { return &___resizingChangesFontScaleInsteadOfFontSize_46; }
	inline void set_resizingChangesFontScaleInsteadOfFontSize_46(bool value)
	{
		___resizingChangesFontScaleInsteadOfFontSize_46 = value;
	}

	inline static int32_t get_offset_of__graphType_47() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____graphType_47)); }
	inline int32_t get__graphType_47() const { return ____graphType_47; }
	inline int32_t* get_address_of__graphType_47() { return &____graphType_47; }
	inline void set__graphType_47(int32_t value)
	{
		____graphType_47 = value;
	}

	inline static int32_t get_offset_of__orientationType_48() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____orientationType_48)); }
	inline int32_t get__orientationType_48() const { return ____orientationType_48; }
	inline int32_t* get_address_of__orientationType_48() { return &____orientationType_48; }
	inline void set__orientationType_48(int32_t value)
	{
		____orientationType_48 = value;
	}

	inline static int32_t get_offset_of__axesType_49() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____axesType_49)); }
	inline int32_t get__axesType_49() const { return ____axesType_49; }
	inline int32_t* get_address_of__axesType_49() { return &____axesType_49; }
	inline void set__axesType_49(int32_t value)
	{
		____axesType_49 = value;
	}

	inline static int32_t get_offset_of__resizeEnabled_50() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____resizeEnabled_50)); }
	inline bool get__resizeEnabled_50() const { return ____resizeEnabled_50; }
	inline bool* get_address_of__resizeEnabled_50() { return &____resizeEnabled_50; }
	inline void set__resizeEnabled_50(bool value)
	{
		____resizeEnabled_50 = value;
	}

	inline static int32_t get_offset_of__resizeProperties_51() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____resizeProperties_51)); }
	inline int32_t get__resizeProperties_51() const { return ____resizeProperties_51; }
	inline int32_t* get_address_of__resizeProperties_51() { return &____resizeProperties_51; }
	inline void set__resizeProperties_51(int32_t value)
	{
		____resizeProperties_51 = value;
	}

	inline static int32_t get_offset_of__useGroups_52() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____useGroups_52)); }
	inline bool get__useGroups_52() const { return ____useGroups_52; }
	inline bool* get_address_of__useGroups_52() { return &____useGroups_52; }
	inline void set__useGroups_52(bool value)
	{
		____useGroups_52 = value;
	}

	inline static int32_t get_offset_of__paddingLeftRight_53() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____paddingLeftRight_53)); }
	inline Vector2_t2243707579  get__paddingLeftRight_53() const { return ____paddingLeftRight_53; }
	inline Vector2_t2243707579 * get_address_of__paddingLeftRight_53() { return &____paddingLeftRight_53; }
	inline void set__paddingLeftRight_53(Vector2_t2243707579  value)
	{
		____paddingLeftRight_53 = value;
	}

	inline static int32_t get_offset_of__paddingTopBottom_54() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____paddingTopBottom_54)); }
	inline Vector2_t2243707579  get__paddingTopBottom_54() const { return ____paddingTopBottom_54; }
	inline Vector2_t2243707579 * get_address_of__paddingTopBottom_54() { return &____paddingTopBottom_54; }
	inline void set__paddingTopBottom_54(Vector2_t2243707579  value)
	{
		____paddingTopBottom_54 = value;
	}

	inline static int32_t get_offset_of__theOrigin_55() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____theOrigin_55)); }
	inline Vector2_t2243707579  get__theOrigin_55() const { return ____theOrigin_55; }
	inline Vector2_t2243707579 * get_address_of__theOrigin_55() { return &____theOrigin_55; }
	inline void set__theOrigin_55(Vector2_t2243707579  value)
	{
		____theOrigin_55 = value;
	}

	inline static int32_t get_offset_of__barWidth_56() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____barWidth_56)); }
	inline float get__barWidth_56() const { return ____barWidth_56; }
	inline float* get_address_of__barWidth_56() { return &____barWidth_56; }
	inline void set__barWidth_56(float value)
	{
		____barWidth_56 = value;
	}

	inline static int32_t get_offset_of__barAxisValue_57() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____barAxisValue_57)); }
	inline float get__barAxisValue_57() const { return ____barAxisValue_57; }
	inline float* get_address_of__barAxisValue_57() { return &____barAxisValue_57; }
	inline void set__barAxisValue_57(float value)
	{
		____barAxisValue_57 = value;
	}

	inline static int32_t get_offset_of__autoUpdateOrigin_58() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoUpdateOrigin_58)); }
	inline bool get__autoUpdateOrigin_58() const { return ____autoUpdateOrigin_58; }
	inline bool* get_address_of__autoUpdateOrigin_58() { return &____autoUpdateOrigin_58; }
	inline void set__autoUpdateOrigin_58(bool value)
	{
		____autoUpdateOrigin_58 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBarWidth_59() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoUpdateBarWidth_59)); }
	inline bool get__autoUpdateBarWidth_59() const { return ____autoUpdateBarWidth_59; }
	inline bool* get_address_of__autoUpdateBarWidth_59() { return &____autoUpdateBarWidth_59; }
	inline void set__autoUpdateBarWidth_59(bool value)
	{
		____autoUpdateBarWidth_59 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBarWidthSpacing_60() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoUpdateBarWidthSpacing_60)); }
	inline float get__autoUpdateBarWidthSpacing_60() const { return ____autoUpdateBarWidthSpacing_60; }
	inline float* get_address_of__autoUpdateBarWidthSpacing_60() { return &____autoUpdateBarWidthSpacing_60; }
	inline void set__autoUpdateBarWidthSpacing_60(float value)
	{
		____autoUpdateBarWidthSpacing_60 = value;
	}

	inline static int32_t get_offset_of__autoUpdateSeriesAxisSpacing_61() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoUpdateSeriesAxisSpacing_61)); }
	inline bool get__autoUpdateSeriesAxisSpacing_61() const { return ____autoUpdateSeriesAxisSpacing_61; }
	inline bool* get_address_of__autoUpdateSeriesAxisSpacing_61() { return &____autoUpdateSeriesAxisSpacing_61; }
	inline void set__autoUpdateSeriesAxisSpacing_61(bool value)
	{
		____autoUpdateSeriesAxisSpacing_61 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBarAxisValue_62() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoUpdateBarAxisValue_62)); }
	inline bool get__autoUpdateBarAxisValue_62() const { return ____autoUpdateBarAxisValue_62; }
	inline bool* get_address_of__autoUpdateBarAxisValue_62() { return &____autoUpdateBarAxisValue_62; }
	inline void set__autoUpdateBarAxisValue_62(bool value)
	{
		____autoUpdateBarAxisValue_62 = value;
	}

	inline static int32_t get_offset_of__axisWidth_63() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____axisWidth_63)); }
	inline int32_t get__axisWidth_63() const { return ____axisWidth_63; }
	inline int32_t* get_address_of__axisWidth_63() { return &____axisWidth_63; }
	inline void set__axisWidth_63(int32_t value)
	{
		____axisWidth_63 = value;
	}

	inline static int32_t get_offset_of__autoShrinkAtPercent_64() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoShrinkAtPercent_64)); }
	inline float get__autoShrinkAtPercent_64() const { return ____autoShrinkAtPercent_64; }
	inline float* get_address_of__autoShrinkAtPercent_64() { return &____autoShrinkAtPercent_64; }
	inline void set__autoShrinkAtPercent_64(float value)
	{
		____autoShrinkAtPercent_64 = value;
	}

	inline static int32_t get_offset_of__autoGrowAndShrinkByPercent_65() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoGrowAndShrinkByPercent_65)); }
	inline float get__autoGrowAndShrinkByPercent_65() const { return ____autoGrowAndShrinkByPercent_65; }
	inline float* get_address_of__autoGrowAndShrinkByPercent_65() { return &____autoGrowAndShrinkByPercent_65; }
	inline void set__autoGrowAndShrinkByPercent_65(float value)
	{
		____autoGrowAndShrinkByPercent_65 = value;
	}

	inline static int32_t get_offset_of__tooltipEnabled_66() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____tooltipEnabled_66)); }
	inline bool get__tooltipEnabled_66() const { return ____tooltipEnabled_66; }
	inline bool* get_address_of__tooltipEnabled_66() { return &____tooltipEnabled_66; }
	inline void set__tooltipEnabled_66(bool value)
	{
		____tooltipEnabled_66 = value;
	}

	inline static int32_t get_offset_of__autoAnimationsEnabled_67() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoAnimationsEnabled_67)); }
	inline bool get__autoAnimationsEnabled_67() const { return ____autoAnimationsEnabled_67; }
	inline bool* get_address_of__autoAnimationsEnabled_67() { return &____autoAnimationsEnabled_67; }
	inline void set__autoAnimationsEnabled_67(bool value)
	{
		____autoAnimationsEnabled_67 = value;
	}

	inline static int32_t get_offset_of__autoPaddingProperties_68() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoPaddingProperties_68)); }
	inline int32_t get__autoPaddingProperties_68() const { return ____autoPaddingProperties_68; }
	inline int32_t* get_address_of__autoPaddingProperties_68() { return &____autoPaddingProperties_68; }
	inline void set__autoPaddingProperties_68(int32_t value)
	{
		____autoPaddingProperties_68 = value;
	}

	inline static int32_t get_offset_of__autoPaddingEnabled_69() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoPaddingEnabled_69)); }
	inline bool get__autoPaddingEnabled_69() const { return ____autoPaddingEnabled_69; }
	inline bool* get_address_of__autoPaddingEnabled_69() { return &____autoPaddingEnabled_69; }
	inline void set__autoPaddingEnabled_69(bool value)
	{
		____autoPaddingEnabled_69 = value;
	}

	inline static int32_t get_offset_of__autoPaddingAmount_70() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____autoPaddingAmount_70)); }
	inline float get__autoPaddingAmount_70() const { return ____autoPaddingAmount_70; }
	inline float* get_address_of__autoPaddingAmount_70() { return &____autoPaddingAmount_70; }
	inline void set__autoPaddingAmount_70(float value)
	{
		____autoPaddingAmount_70 = value;
	}

	inline static int32_t get_offset_of__tickSize_71() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____tickSize_71)); }
	inline Vector2_t2243707579  get__tickSize_71() const { return ____tickSize_71; }
	inline Vector2_t2243707579 * get_address_of__tickSize_71() { return &____tickSize_71; }
	inline void set__tickSize_71(Vector2_t2243707579  value)
	{
		____tickSize_71 = value;
	}

	inline static int32_t get_offset_of__graphTitleString_72() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____graphTitleString_72)); }
	inline String_t* get__graphTitleString_72() const { return ____graphTitleString_72; }
	inline String_t** get_address_of__graphTitleString_72() { return &____graphTitleString_72; }
	inline void set__graphTitleString_72(String_t* value)
	{
		____graphTitleString_72 = value;
		Il2CppCodeGenWriteBarrier(&____graphTitleString_72, value);
	}

	inline static int32_t get_offset_of__graphTitleOffset_73() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____graphTitleOffset_73)); }
	inline Vector2_t2243707579  get__graphTitleOffset_73() const { return ____graphTitleOffset_73; }
	inline Vector2_t2243707579 * get_address_of__graphTitleOffset_73() { return &____graphTitleOffset_73; }
	inline void set__graphTitleOffset_73(Vector2_t2243707579  value)
	{
		____graphTitleOffset_73 = value;
	}

	inline static int32_t get_offset_of__graphTitleSize_74() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ____graphTitleSize_74)); }
	inline int32_t get__graphTitleSize_74() const { return ____graphTitleSize_74; }
	inline int32_t* get_address_of__graphTitleSize_74() { return &____graphTitleSize_74; }
	inline void set__graphTitleSize_74(int32_t value)
	{
		____graphTitleSize_74 = value;
	}

	inline static int32_t get_offset_of_totalPointValues_75() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___totalPointValues_75)); }
	inline List_1_t1445631064 * get_totalPointValues_75() const { return ___totalPointValues_75; }
	inline List_1_t1445631064 ** get_address_of_totalPointValues_75() { return &___totalPointValues_75; }
	inline void set_totalPointValues_75(List_1_t1445631064 * value)
	{
		___totalPointValues_75 = value;
		Il2CppCodeGenWriteBarrier(&___totalPointValues_75, value);
	}

	inline static int32_t get_offset_of_maxSeriesPointCount_76() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___maxSeriesPointCount_76)); }
	inline int32_t get_maxSeriesPointCount_76() const { return ___maxSeriesPointCount_76; }
	inline int32_t* get_address_of_maxSeriesPointCount_76() { return &___maxSeriesPointCount_76; }
	inline void set_maxSeriesPointCount_76(int32_t value)
	{
		___maxSeriesPointCount_76 = value;
	}

	inline static int32_t get_offset_of_maxSeriesBarCount_77() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___maxSeriesBarCount_77)); }
	inline int32_t get_maxSeriesBarCount_77() const { return ___maxSeriesBarCount_77; }
	inline int32_t* get_address_of_maxSeriesBarCount_77() { return &___maxSeriesBarCount_77; }
	inline void set_maxSeriesBarCount_77(int32_t value)
	{
		___maxSeriesBarCount_77 = value;
	}

	inline static int32_t get_offset_of_numComboBarSeries_78() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___numComboBarSeries_78)); }
	inline int32_t get_numComboBarSeries_78() const { return ___numComboBarSeries_78; }
	inline int32_t* get_address_of_numComboBarSeries_78() { return &___numComboBarSeries_78; }
	inline void set_numComboBarSeries_78(int32_t value)
	{
		___numComboBarSeries_78 = value;
	}

	inline static int32_t get_offset_of_origWidth_79() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origWidth_79)); }
	inline float get_origWidth_79() const { return ___origWidth_79; }
	inline float* get_address_of_origWidth_79() { return &___origWidth_79; }
	inline void set_origWidth_79(float value)
	{
		___origWidth_79 = value;
	}

	inline static int32_t get_offset_of_origHeight_80() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origHeight_80)); }
	inline float get_origHeight_80() const { return ___origHeight_80; }
	inline float* get_address_of_origHeight_80() { return &___origHeight_80; }
	inline void set_origHeight_80(float value)
	{
		___origHeight_80 = value;
	}

	inline static int32_t get_offset_of_origBarWidth_81() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origBarWidth_81)); }
	inline float get_origBarWidth_81() const { return ___origBarWidth_81; }
	inline float* get_address_of_origBarWidth_81() { return &___origBarWidth_81; }
	inline void set_origBarWidth_81(float value)
	{
		___origBarWidth_81 = value;
	}

	inline static int32_t get_offset_of_origAxisWidth_82() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origAxisWidth_82)); }
	inline float get_origAxisWidth_82() const { return ___origAxisWidth_82; }
	inline float* get_address_of_origAxisWidth_82() { return &___origAxisWidth_82; }
	inline void set_origAxisWidth_82(float value)
	{
		___origAxisWidth_82 = value;
	}

	inline static int32_t get_offset_of_origAutoPaddingAmount_83() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origAutoPaddingAmount_83)); }
	inline float get_origAutoPaddingAmount_83() const { return ___origAutoPaddingAmount_83; }
	inline float* get_address_of_origAutoPaddingAmount_83() { return &___origAutoPaddingAmount_83; }
	inline void set_origAutoPaddingAmount_83(float value)
	{
		___origAutoPaddingAmount_83 = value;
	}

	inline static int32_t get_offset_of_origTickSize_84() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origTickSize_84)); }
	inline Vector2_t2243707579  get_origTickSize_84() const { return ___origTickSize_84; }
	inline Vector2_t2243707579 * get_address_of_origTickSize_84() { return &___origTickSize_84; }
	inline void set_origTickSize_84(Vector2_t2243707579  value)
	{
		___origTickSize_84 = value;
	}

	inline static int32_t get_offset_of_origPaddingLeftRight_85() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origPaddingLeftRight_85)); }
	inline Vector2_t2243707579  get_origPaddingLeftRight_85() const { return ___origPaddingLeftRight_85; }
	inline Vector2_t2243707579 * get_address_of_origPaddingLeftRight_85() { return &___origPaddingLeftRight_85; }
	inline void set_origPaddingLeftRight_85(Vector2_t2243707579  value)
	{
		___origPaddingLeftRight_85 = value;
	}

	inline static int32_t get_offset_of_origPaddingTopBottom_86() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origPaddingTopBottom_86)); }
	inline Vector2_t2243707579  get_origPaddingTopBottom_86() const { return ___origPaddingTopBottom_86; }
	inline Vector2_t2243707579 * get_address_of_origPaddingTopBottom_86() { return &___origPaddingTopBottom_86; }
	inline void set_origPaddingTopBottom_86(Vector2_t2243707579  value)
	{
		___origPaddingTopBottom_86 = value;
	}

	inline static int32_t get_offset_of_origGraphTitleOffset_87() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origGraphTitleOffset_87)); }
	inline Vector2_t2243707579  get_origGraphTitleOffset_87() const { return ___origGraphTitleOffset_87; }
	inline Vector2_t2243707579 * get_address_of_origGraphTitleOffset_87() { return &___origGraphTitleOffset_87; }
	inline void set_origGraphTitleOffset_87(Vector2_t2243707579  value)
	{
		___origGraphTitleOffset_87 = value;
	}

	inline static int32_t get_offset_of_origGraphTitleSize_88() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___origGraphTitleSize_88)); }
	inline int32_t get_origGraphTitleSize_88() const { return ___origGraphTitleSize_88; }
	inline int32_t* get_address_of_origGraphTitleSize_88() { return &___origGraphTitleSize_88; }
	inline void set_origGraphTitleSize_88(int32_t value)
	{
		___origGraphTitleSize_88 = value;
	}

	inline static int32_t get_offset_of_cachedContainerWidth_89() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___cachedContainerWidth_89)); }
	inline float get_cachedContainerWidth_89() const { return ___cachedContainerWidth_89; }
	inline float* get_address_of_cachedContainerWidth_89() { return &___cachedContainerWidth_89; }
	inline void set_cachedContainerWidth_89(float value)
	{
		___cachedContainerWidth_89 = value;
	}

	inline static int32_t get_offset_of_cachedContainerHeight_90() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___cachedContainerHeight_90)); }
	inline float get_cachedContainerHeight_90() const { return ___cachedContainerHeight_90; }
	inline float* get_address_of_cachedContainerHeight_90() { return &___cachedContainerHeight_90; }
	inline void set_cachedContainerHeight_90(float value)
	{
		___cachedContainerHeight_90 = value;
	}

	inline static int32_t get_offset_of_autoAnim_91() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___autoAnim_91)); }
	inline WMG_Graph_Auto_Anim_t872713172 * get_autoAnim_91() const { return ___autoAnim_91; }
	inline WMG_Graph_Auto_Anim_t872713172 ** get_address_of_autoAnim_91() { return &___autoAnim_91; }
	inline void set_autoAnim_91(WMG_Graph_Auto_Anim_t872713172 * value)
	{
		___autoAnim_91 = value;
		Il2CppCodeGenWriteBarrier(&___autoAnim_91, value);
	}

	inline static int32_t get_offset_of_hasInit_92() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___hasInit_92)); }
	inline bool get_hasInit_92() const { return ___hasInit_92; }
	inline bool* get_address_of_hasInit_92() { return &___hasInit_92; }
	inline void set_hasInit_92(bool value)
	{
		___hasInit_92 = value;
	}

	inline static int32_t get_offset_of_changeObjs_93() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___changeObjs_93)); }
	inline List_1_t1684053944 * get_changeObjs_93() const { return ___changeObjs_93; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_93() { return &___changeObjs_93; }
	inline void set_changeObjs_93(List_1_t1684053944 * value)
	{
		___changeObjs_93 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_93, value);
	}

	inline static int32_t get_offset_of_graphC_94() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___graphC_94)); }
	inline WMG_Change_Obj_t2314932812 * get_graphC_94() const { return ___graphC_94; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_graphC_94() { return &___graphC_94; }
	inline void set_graphC_94(WMG_Change_Obj_t2314932812 * value)
	{
		___graphC_94 = value;
		Il2CppCodeGenWriteBarrier(&___graphC_94, value);
	}

	inline static int32_t get_offset_of_seriesCountC_95() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___seriesCountC_95)); }
	inline WMG_Change_Obj_t2314932812 * get_seriesCountC_95() const { return ___seriesCountC_95; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_seriesCountC_95() { return &___seriesCountC_95; }
	inline void set_seriesCountC_95(WMG_Change_Obj_t2314932812 * value)
	{
		___seriesCountC_95 = value;
		Il2CppCodeGenWriteBarrier(&___seriesCountC_95, value);
	}

	inline static int32_t get_offset_of_seriesNoCountC_96() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___seriesNoCountC_96)); }
	inline WMG_Change_Obj_t2314932812 * get_seriesNoCountC_96() const { return ___seriesNoCountC_96; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_seriesNoCountC_96() { return &___seriesNoCountC_96; }
	inline void set_seriesNoCountC_96(WMG_Change_Obj_t2314932812 * value)
	{
		___seriesNoCountC_96 = value;
		Il2CppCodeGenWriteBarrier(&___seriesNoCountC_96, value);
	}

	inline static int32_t get_offset_of_tooltipEnabledC_97() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___tooltipEnabledC_97)); }
	inline WMG_Change_Obj_t2314932812 * get_tooltipEnabledC_97() const { return ___tooltipEnabledC_97; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_tooltipEnabledC_97() { return &___tooltipEnabledC_97; }
	inline void set_tooltipEnabledC_97(WMG_Change_Obj_t2314932812 * value)
	{
		___tooltipEnabledC_97 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipEnabledC_97, value);
	}

	inline static int32_t get_offset_of_autoAnimEnabledC_98() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___autoAnimEnabledC_98)); }
	inline WMG_Change_Obj_t2314932812 * get_autoAnimEnabledC_98() const { return ___autoAnimEnabledC_98; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_autoAnimEnabledC_98() { return &___autoAnimEnabledC_98; }
	inline void set_autoAnimEnabledC_98(WMG_Change_Obj_t2314932812 * value)
	{
		___autoAnimEnabledC_98 = value;
		Il2CppCodeGenWriteBarrier(&___autoAnimEnabledC_98, value);
	}

	inline static int32_t get_offset_of_orientationC_99() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___orientationC_99)); }
	inline WMG_Change_Obj_t2314932812 * get_orientationC_99() const { return ___orientationC_99; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_orientationC_99() { return &___orientationC_99; }
	inline void set_orientationC_99(WMG_Change_Obj_t2314932812 * value)
	{
		___orientationC_99 = value;
		Il2CppCodeGenWriteBarrier(&___orientationC_99, value);
	}

	inline static int32_t get_offset_of_graphTypeC_100() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___graphTypeC_100)); }
	inline WMG_Change_Obj_t2314932812 * get_graphTypeC_100() const { return ___graphTypeC_100; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_graphTypeC_100() { return &___graphTypeC_100; }
	inline void set_graphTypeC_100(WMG_Change_Obj_t2314932812 * value)
	{
		___graphTypeC_100 = value;
		Il2CppCodeGenWriteBarrier(&___graphTypeC_100, value);
	}

	inline static int32_t get_offset_of_autoPaddingC_101() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___autoPaddingC_101)); }
	inline WMG_Change_Obj_t2314932812 * get_autoPaddingC_101() const { return ___autoPaddingC_101; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_autoPaddingC_101() { return &___autoPaddingC_101; }
	inline void set_autoPaddingC_101(WMG_Change_Obj_t2314932812 * value)
	{
		___autoPaddingC_101 = value;
		Il2CppCodeGenWriteBarrier(&___autoPaddingC_101, value);
	}

	inline static int32_t get_offset_of_GraphBackgroundChanged_102() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___GraphBackgroundChanged_102)); }
	inline GraphBackgroundChangedHandler_t2639770971 * get_GraphBackgroundChanged_102() const { return ___GraphBackgroundChanged_102; }
	inline GraphBackgroundChangedHandler_t2639770971 ** get_address_of_GraphBackgroundChanged_102() { return &___GraphBackgroundChanged_102; }
	inline void set_GraphBackgroundChanged_102(GraphBackgroundChangedHandler_t2639770971 * value)
	{
		___GraphBackgroundChanged_102 = value;
		Il2CppCodeGenWriteBarrier(&___GraphBackgroundChanged_102, value);
	}

	inline static int32_t get_offset_of_U3CautoFitLabelsU3Ek__BackingField_103() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___U3CautoFitLabelsU3Ek__BackingField_103)); }
	inline bool get_U3CautoFitLabelsU3Ek__BackingField_103() const { return ___U3CautoFitLabelsU3Ek__BackingField_103; }
	inline bool* get_address_of_U3CautoFitLabelsU3Ek__BackingField_103() { return &___U3CautoFitLabelsU3Ek__BackingField_103; }
	inline void set_U3CautoFitLabelsU3Ek__BackingField_103(bool value)
	{
		___U3CautoFitLabelsU3Ek__BackingField_103 = value;
	}

	inline static int32_t get_offset_of_U3CautoFitPaddingU3Ek__BackingField_104() { return static_cast<int32_t>(offsetof(WMG_Axis_Graph_t1917651748, ___U3CautoFitPaddingU3Ek__BackingField_104)); }
	inline float get_U3CautoFitPaddingU3Ek__BackingField_104() const { return ___U3CautoFitPaddingU3Ek__BackingField_104; }
	inline float* get_address_of_U3CautoFitPaddingU3Ek__BackingField_104() { return &___U3CautoFitPaddingU3Ek__BackingField_104; }
	inline void set_U3CautoFitPaddingU3Ek__BackingField_104(float value)
	{
		___U3CautoFitPaddingU3Ek__BackingField_104 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
