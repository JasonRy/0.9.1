#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Graph_Manager1488325314.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t172249107;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// WMG_List`1<System.Single>
struct WMG_List_1_t228366964;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// WMG_List`1<System.String>
struct WMG_List_1_t181077265;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t3194695850;
// WMG_List`1<System.Boolean>
struct WMG_List_1_t1977431750;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Data_Source
struct WMG_Data_Source_t3507445670;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.ComputeShader
struct ComputeShader_t3573922338;
// UnityEngine.Font
struct Font_t4239498691;
// System.Collections.Generic.List`1<WMG_Ring>
struct List_1_t2455901852;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// WMG_Ring_Graph/DataLabeler
struct DataLabeler_t2502756599;
// WMG_Ring_Graph/TextureChanger
struct TextureChanger_t922487265;
// WMG_Ring_Graph/ColorChanger
struct ColorChanger_t23166627;
// WMG_Ring_Graph/BandColorsChanger
struct BandColorsChanger_t2486711437;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Ring_Graph
struct  WMG_Ring_Graph_t2652186449  : public WMG_Graph_Manager_t1488325314
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Ring_Graph::_bandColors
	List_1_t1389513207 * ____bandColors_19;
	// WMG_List`1<UnityEngine.Color> WMG_Ring_Graph::bandColors
	WMG_List_1_t172249107 * ___bandColors_20;
	// System.Collections.Generic.List`1<System.Single> WMG_Ring_Graph::_values
	List_1_t1445631064 * ____values_21;
	// WMG_List`1<System.Single> WMG_Ring_Graph::values
	WMG_List_1_t228366964 * ___values_22;
	// System.Collections.Generic.List`1<System.String> WMG_Ring_Graph::_labels
	List_1_t1398341365 * ____labels_23;
	// WMG_List`1<System.String> WMG_Ring_Graph::labels
	WMG_List_1_t181077265 * ___labels_24;
	// System.Collections.Generic.List`1<System.String> WMG_Ring_Graph::_ringIDs
	List_1_t1398341365 * ____ringIDs_25;
	// WMG_List`1<System.String> WMG_Ring_Graph::ringIDs
	WMG_List_1_t181077265 * ___ringIDs_26;
	// System.Collections.Generic.List`1<System.Boolean> WMG_Ring_Graph::_hideRings
	List_1_t3194695850 * ____hideRings_27;
	// WMG_List`1<System.Boolean> WMG_Ring_Graph::hideRings
	WMG_List_1_t1977431750 * ___hideRings_28;
	// System.Boolean WMG_Ring_Graph::animateData
	bool ___animateData_29;
	// System.Single WMG_Ring_Graph::animDuration
	float ___animDuration_30;
	// DG.Tweening.Ease WMG_Ring_Graph::animEaseType
	int32_t ___animEaseType_31;
	// UnityEngine.Object WMG_Ring_Graph::ringPrefab
	Object_t1021602117 * ___ringPrefab_32;
	// UnityEngine.GameObject WMG_Ring_Graph::extraRing
	GameObject_t1756533147 * ___extraRing_33;
	// UnityEngine.GameObject WMG_Ring_Graph::background
	GameObject_t1756533147 * ___background_34;
	// UnityEngine.GameObject WMG_Ring_Graph::zeroLine
	GameObject_t1756533147 * ___zeroLine_35;
	// UnityEngine.GameObject WMG_Ring_Graph::zeroLineText
	GameObject_t1756533147 * ___zeroLineText_36;
	// UnityEngine.GameObject WMG_Ring_Graph::ringsParent
	GameObject_t1756533147 * ___ringsParent_37;
	// UnityEngine.GameObject WMG_Ring_Graph::ringLabelsParent
	GameObject_t1756533147 * ___ringLabelsParent_38;
	// UnityEngine.GameObject WMG_Ring_Graph::contentParent
	GameObject_t1756533147 * ___contentParent_39;
	// WMG_Data_Source WMG_Ring_Graph::valuesDataSource
	WMG_Data_Source_t3507445670 * ___valuesDataSource_40;
	// WMG_Data_Source WMG_Ring_Graph::labelsDataSource
	WMG_Data_Source_t3507445670 * ___labelsDataSource_41;
	// WMG_Data_Source WMG_Ring_Graph::ringIDsDataSource
	WMG_Data_Source_t3507445670 * ___ringIDsDataSource_42;
	// UnityEngine.Sprite WMG_Ring_Graph::labelLineSprite
	Sprite_t309593783 * ___labelLineSprite_43;
	// UnityEngine.Sprite WMG_Ring_Graph::botLeftCorners
	Sprite_t309593783 * ___botLeftCorners_44;
	// UnityEngine.Sprite WMG_Ring_Graph::botRightCorners
	Sprite_t309593783 * ___botRightCorners_45;
	// UnityEngine.ComputeShader WMG_Ring_Graph::computeShader
	ComputeShader_t3573922338 * ___computeShader_46;
	// System.Int32 WMG_Ring_Graph::textureResolution
	int32_t ___textureResolution_47;
	// System.Boolean WMG_Ring_Graph::_bandMode
	bool ____bandMode_48;
	// System.Boolean WMG_Ring_Graph::_pieMode
	bool ____pieMode_49;
	// System.Single WMG_Ring_Graph::_pieModePaddingDegrees
	float ____pieModePaddingDegrees_50;
	// System.Single WMG_Ring_Graph::_pieModeDegreeOffset
	float ____pieModeDegreeOffset_51;
	// System.Single WMG_Ring_Graph::_innerRadiusPercentage
	float ____innerRadiusPercentage_52;
	// System.Single WMG_Ring_Graph::_degrees
	float ____degrees_53;
	// System.Single WMG_Ring_Graph::_minValue
	float ____minValue_54;
	// System.Single WMG_Ring_Graph::_maxValue
	float ____maxValue_55;
	// UnityEngine.Color WMG_Ring_Graph::_bandColor
	Color_t2020392075  ____bandColor_56;
	// System.Boolean WMG_Ring_Graph::_autoUpdateBandAlpha
	bool ____autoUpdateBandAlpha_57;
	// System.Boolean WMG_Ring_Graph::_autoUpdateBandAlphaReverse
	bool ____autoUpdateBandAlphaReverse_58;
	// UnityEngine.Color WMG_Ring_Graph::_ringColor
	Color_t2020392075  ____ringColor_59;
	// System.Single WMG_Ring_Graph::_ringWidth
	float ____ringWidth_60;
	// System.Single WMG_Ring_Graph::_ringPointWidthFactor
	float ____ringPointWidthFactor_61;
	// System.Single WMG_Ring_Graph::_bandPadding
	float ____bandPadding_62;
	// System.Boolean WMG_Ring_Graph::_hideZeroLabelLine
	bool ____hideZeroLabelLine_63;
	// System.Boolean WMG_Ring_Graph::_labelStartCenteredOnBand
	bool ____labelStartCenteredOnBand_64;
	// UnityEngine.Vector2 WMG_Ring_Graph::_labelPointSize
	Vector2_t2243707579  ____labelPointSize_65;
	// System.Single WMG_Ring_Graph::_labelLinePadding
	float ____labelLinePadding_66;
	// System.Single WMG_Ring_Graph::_labelTextOffset
	float ____labelTextOffset_67;
	// UnityEngine.Color WMG_Ring_Graph::_labelLineColor
	Color_t2020392075  ____labelLineColor_68;
	// UnityEngine.Color WMG_Ring_Graph::_labelPointColor
	Color_t2020392075  ____labelPointColor_69;
	// System.Int32 WMG_Ring_Graph::_labelsFontSize
	int32_t ____labelsFontSize_70;
	// UnityEngine.Color WMG_Ring_Graph::_labelsColor
	Color_t2020392075  ____labelsColor_71;
	// UnityEngine.FontStyle WMG_Ring_Graph::_labelsFontStyle
	int32_t ____labelsFontStyle_72;
	// UnityEngine.Font WMG_Ring_Graph::_labelsFont
	Font_t4239498691 * ____labelsFont_73;
	// System.Boolean WMG_Ring_Graph::_showDataLabels
	bool ____showDataLabels_74;
	// System.Int32 WMG_Ring_Graph::_dataLabelsFontSize
	int32_t ____dataLabelsFontSize_75;
	// UnityEngine.Color WMG_Ring_Graph::_dataLabelsColor
	Color_t2020392075  ____dataLabelsColor_76;
	// UnityEngine.FontStyle WMG_Ring_Graph::_dataLabelsFontStyle
	int32_t ____dataLabelsFontStyle_77;
	// UnityEngine.Font WMG_Ring_Graph::_dataLabelsFont
	Font_t4239498691 * ____dataLabelsFont_78;
	// UnityEngine.Vector2 WMG_Ring_Graph::_leftRightPadding
	Vector2_t2243707579  ____leftRightPadding_79;
	// UnityEngine.Vector2 WMG_Ring_Graph::_topBotPadding
	Vector2_t2243707579  ____topBotPadding_80;
	// System.Boolean WMG_Ring_Graph::_antiAliasing
	bool ____antiAliasing_81;
	// System.Single WMG_Ring_Graph::_antiAliasingStrength
	float ____antiAliasingStrength_82;
	// System.Boolean WMG_Ring_Graph::_useComputeShader
	bool ____useComputeShader_83;
	// System.Single WMG_Ring_Graph::<MaxDataVal>k__BackingField
	float ___U3CMaxDataValU3Ek__BackingField_84;
	// System.Single WMG_Ring_Graph::<MinDataVal>k__BackingField
	float ___U3CMinDataValU3Ek__BackingField_85;
	// System.Single WMG_Ring_Graph::origGraphWidth
	float ___origGraphWidth_86;
	// System.Single WMG_Ring_Graph::containerWidthCached
	float ___containerWidthCached_87;
	// System.Single WMG_Ring_Graph::containerHeightCached
	float ___containerHeightCached_88;
	// System.Collections.Generic.List`1<WMG_Ring> WMG_Ring_Graph::<rings>k__BackingField
	List_1_t2455901852 * ___U3CringsU3Ek__BackingField_89;
	// UnityEngine.Sprite WMG_Ring_Graph::extraRingSprite
	Sprite_t309593783 * ___extraRingSprite_90;
	// UnityEngine.Color[] WMG_Ring_Graph::texColors
	ColorU5BU5D_t672350442* ___texColors_91;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Ring_Graph::changeObjs
	List_1_t1684053944 * ___changeObjs_92;
	// WMG_Change_Obj WMG_Ring_Graph::numberRingsC
	WMG_Change_Obj_t2314932812 * ___numberRingsC_93;
	// WMG_Change_Obj WMG_Ring_Graph::bandColorC
	WMG_Change_Obj_t2314932812 * ___bandColorC_94;
	// WMG_Change_Obj WMG_Ring_Graph::ringColorC
	WMG_Change_Obj_t2314932812 * ___ringColorC_95;
	// WMG_Change_Obj WMG_Ring_Graph::labelLineColorC
	WMG_Change_Obj_t2314932812 * ___labelLineColorC_96;
	// WMG_Change_Obj WMG_Ring_Graph::labelsC
	WMG_Change_Obj_t2314932812 * ___labelsC_97;
	// WMG_Change_Obj WMG_Ring_Graph::degreesC
	WMG_Change_Obj_t2314932812 * ___degreesC_98;
	// WMG_Change_Obj WMG_Ring_Graph::aRingValC
	WMG_Change_Obj_t2314932812 * ___aRingValC_99;
	// WMG_Change_Obj WMG_Ring_Graph::radiusC
	WMG_Change_Obj_t2314932812 * ___radiusC_100;
	// WMG_Change_Obj WMG_Ring_Graph::textureC
	WMG_Change_Obj_t2314932812 * ___textureC_101;
	// WMG_Change_Obj WMG_Ring_Graph::hideRingsC
	WMG_Change_Obj_t2314932812 * ___hideRingsC_102;
	// WMG_Change_Obj WMG_Ring_Graph::labelLineC
	WMG_Change_Obj_t2314932812 * ___labelLineC_103;
	// WMG_Change_Obj WMG_Ring_Graph::computeShaderC
	WMG_Change_Obj_t2314932812 * ___computeShaderC_104;
	// System.Collections.Generic.List`1<System.Int32> WMG_Ring_Graph::aRingValChangeIndices
	List_1_t1440998580 * ___aRingValChangeIndices_105;
	// System.Collections.Generic.List`1<System.Int32> WMG_Ring_Graph::beforeValCount
	List_1_t1440998580 * ___beforeValCount_106;
	// System.Collections.Generic.List`1<System.Int32> WMG_Ring_Graph::afterValCount
	List_1_t1440998580 * ___afterValCount_107;
	// System.Boolean WMG_Ring_Graph::hasInit
	bool ___hasInit_108;
	// WMG_Ring_Graph/DataLabeler WMG_Ring_Graph::dataLabeler
	DataLabeler_t2502756599 * ___dataLabeler_109;
	// WMG_Ring_Graph/TextureChanger WMG_Ring_Graph::textureChanger
	TextureChanger_t922487265 * ___textureChanger_110;
	// WMG_Ring_Graph/ColorChanger WMG_Ring_Graph::colorChanger
	ColorChanger_t23166627 * ___colorChanger_111;
	// WMG_Ring_Graph/BandColorsChanger WMG_Ring_Graph::bandColorsChanger
	BandColorsChanger_t2486711437 * ___bandColorsChanger_112;

public:
	inline static int32_t get_offset_of__bandColors_19() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____bandColors_19)); }
	inline List_1_t1389513207 * get__bandColors_19() const { return ____bandColors_19; }
	inline List_1_t1389513207 ** get_address_of__bandColors_19() { return &____bandColors_19; }
	inline void set__bandColors_19(List_1_t1389513207 * value)
	{
		____bandColors_19 = value;
		Il2CppCodeGenWriteBarrier(&____bandColors_19, value);
	}

	inline static int32_t get_offset_of_bandColors_20() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___bandColors_20)); }
	inline WMG_List_1_t172249107 * get_bandColors_20() const { return ___bandColors_20; }
	inline WMG_List_1_t172249107 ** get_address_of_bandColors_20() { return &___bandColors_20; }
	inline void set_bandColors_20(WMG_List_1_t172249107 * value)
	{
		___bandColors_20 = value;
		Il2CppCodeGenWriteBarrier(&___bandColors_20, value);
	}

	inline static int32_t get_offset_of__values_21() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____values_21)); }
	inline List_1_t1445631064 * get__values_21() const { return ____values_21; }
	inline List_1_t1445631064 ** get_address_of__values_21() { return &____values_21; }
	inline void set__values_21(List_1_t1445631064 * value)
	{
		____values_21 = value;
		Il2CppCodeGenWriteBarrier(&____values_21, value);
	}

	inline static int32_t get_offset_of_values_22() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___values_22)); }
	inline WMG_List_1_t228366964 * get_values_22() const { return ___values_22; }
	inline WMG_List_1_t228366964 ** get_address_of_values_22() { return &___values_22; }
	inline void set_values_22(WMG_List_1_t228366964 * value)
	{
		___values_22 = value;
		Il2CppCodeGenWriteBarrier(&___values_22, value);
	}

	inline static int32_t get_offset_of__labels_23() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labels_23)); }
	inline List_1_t1398341365 * get__labels_23() const { return ____labels_23; }
	inline List_1_t1398341365 ** get_address_of__labels_23() { return &____labels_23; }
	inline void set__labels_23(List_1_t1398341365 * value)
	{
		____labels_23 = value;
		Il2CppCodeGenWriteBarrier(&____labels_23, value);
	}

	inline static int32_t get_offset_of_labels_24() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___labels_24)); }
	inline WMG_List_1_t181077265 * get_labels_24() const { return ___labels_24; }
	inline WMG_List_1_t181077265 ** get_address_of_labels_24() { return &___labels_24; }
	inline void set_labels_24(WMG_List_1_t181077265 * value)
	{
		___labels_24 = value;
		Il2CppCodeGenWriteBarrier(&___labels_24, value);
	}

	inline static int32_t get_offset_of__ringIDs_25() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____ringIDs_25)); }
	inline List_1_t1398341365 * get__ringIDs_25() const { return ____ringIDs_25; }
	inline List_1_t1398341365 ** get_address_of__ringIDs_25() { return &____ringIDs_25; }
	inline void set__ringIDs_25(List_1_t1398341365 * value)
	{
		____ringIDs_25 = value;
		Il2CppCodeGenWriteBarrier(&____ringIDs_25, value);
	}

	inline static int32_t get_offset_of_ringIDs_26() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___ringIDs_26)); }
	inline WMG_List_1_t181077265 * get_ringIDs_26() const { return ___ringIDs_26; }
	inline WMG_List_1_t181077265 ** get_address_of_ringIDs_26() { return &___ringIDs_26; }
	inline void set_ringIDs_26(WMG_List_1_t181077265 * value)
	{
		___ringIDs_26 = value;
		Il2CppCodeGenWriteBarrier(&___ringIDs_26, value);
	}

	inline static int32_t get_offset_of__hideRings_27() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____hideRings_27)); }
	inline List_1_t3194695850 * get__hideRings_27() const { return ____hideRings_27; }
	inline List_1_t3194695850 ** get_address_of__hideRings_27() { return &____hideRings_27; }
	inline void set__hideRings_27(List_1_t3194695850 * value)
	{
		____hideRings_27 = value;
		Il2CppCodeGenWriteBarrier(&____hideRings_27, value);
	}

	inline static int32_t get_offset_of_hideRings_28() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___hideRings_28)); }
	inline WMG_List_1_t1977431750 * get_hideRings_28() const { return ___hideRings_28; }
	inline WMG_List_1_t1977431750 ** get_address_of_hideRings_28() { return &___hideRings_28; }
	inline void set_hideRings_28(WMG_List_1_t1977431750 * value)
	{
		___hideRings_28 = value;
		Il2CppCodeGenWriteBarrier(&___hideRings_28, value);
	}

	inline static int32_t get_offset_of_animateData_29() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___animateData_29)); }
	inline bool get_animateData_29() const { return ___animateData_29; }
	inline bool* get_address_of_animateData_29() { return &___animateData_29; }
	inline void set_animateData_29(bool value)
	{
		___animateData_29 = value;
	}

	inline static int32_t get_offset_of_animDuration_30() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___animDuration_30)); }
	inline float get_animDuration_30() const { return ___animDuration_30; }
	inline float* get_address_of_animDuration_30() { return &___animDuration_30; }
	inline void set_animDuration_30(float value)
	{
		___animDuration_30 = value;
	}

	inline static int32_t get_offset_of_animEaseType_31() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___animEaseType_31)); }
	inline int32_t get_animEaseType_31() const { return ___animEaseType_31; }
	inline int32_t* get_address_of_animEaseType_31() { return &___animEaseType_31; }
	inline void set_animEaseType_31(int32_t value)
	{
		___animEaseType_31 = value;
	}

	inline static int32_t get_offset_of_ringPrefab_32() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___ringPrefab_32)); }
	inline Object_t1021602117 * get_ringPrefab_32() const { return ___ringPrefab_32; }
	inline Object_t1021602117 ** get_address_of_ringPrefab_32() { return &___ringPrefab_32; }
	inline void set_ringPrefab_32(Object_t1021602117 * value)
	{
		___ringPrefab_32 = value;
		Il2CppCodeGenWriteBarrier(&___ringPrefab_32, value);
	}

	inline static int32_t get_offset_of_extraRing_33() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___extraRing_33)); }
	inline GameObject_t1756533147 * get_extraRing_33() const { return ___extraRing_33; }
	inline GameObject_t1756533147 ** get_address_of_extraRing_33() { return &___extraRing_33; }
	inline void set_extraRing_33(GameObject_t1756533147 * value)
	{
		___extraRing_33 = value;
		Il2CppCodeGenWriteBarrier(&___extraRing_33, value);
	}

	inline static int32_t get_offset_of_background_34() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___background_34)); }
	inline GameObject_t1756533147 * get_background_34() const { return ___background_34; }
	inline GameObject_t1756533147 ** get_address_of_background_34() { return &___background_34; }
	inline void set_background_34(GameObject_t1756533147 * value)
	{
		___background_34 = value;
		Il2CppCodeGenWriteBarrier(&___background_34, value);
	}

	inline static int32_t get_offset_of_zeroLine_35() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___zeroLine_35)); }
	inline GameObject_t1756533147 * get_zeroLine_35() const { return ___zeroLine_35; }
	inline GameObject_t1756533147 ** get_address_of_zeroLine_35() { return &___zeroLine_35; }
	inline void set_zeroLine_35(GameObject_t1756533147 * value)
	{
		___zeroLine_35 = value;
		Il2CppCodeGenWriteBarrier(&___zeroLine_35, value);
	}

	inline static int32_t get_offset_of_zeroLineText_36() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___zeroLineText_36)); }
	inline GameObject_t1756533147 * get_zeroLineText_36() const { return ___zeroLineText_36; }
	inline GameObject_t1756533147 ** get_address_of_zeroLineText_36() { return &___zeroLineText_36; }
	inline void set_zeroLineText_36(GameObject_t1756533147 * value)
	{
		___zeroLineText_36 = value;
		Il2CppCodeGenWriteBarrier(&___zeroLineText_36, value);
	}

	inline static int32_t get_offset_of_ringsParent_37() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___ringsParent_37)); }
	inline GameObject_t1756533147 * get_ringsParent_37() const { return ___ringsParent_37; }
	inline GameObject_t1756533147 ** get_address_of_ringsParent_37() { return &___ringsParent_37; }
	inline void set_ringsParent_37(GameObject_t1756533147 * value)
	{
		___ringsParent_37 = value;
		Il2CppCodeGenWriteBarrier(&___ringsParent_37, value);
	}

	inline static int32_t get_offset_of_ringLabelsParent_38() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___ringLabelsParent_38)); }
	inline GameObject_t1756533147 * get_ringLabelsParent_38() const { return ___ringLabelsParent_38; }
	inline GameObject_t1756533147 ** get_address_of_ringLabelsParent_38() { return &___ringLabelsParent_38; }
	inline void set_ringLabelsParent_38(GameObject_t1756533147 * value)
	{
		___ringLabelsParent_38 = value;
		Il2CppCodeGenWriteBarrier(&___ringLabelsParent_38, value);
	}

	inline static int32_t get_offset_of_contentParent_39() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___contentParent_39)); }
	inline GameObject_t1756533147 * get_contentParent_39() const { return ___contentParent_39; }
	inline GameObject_t1756533147 ** get_address_of_contentParent_39() { return &___contentParent_39; }
	inline void set_contentParent_39(GameObject_t1756533147 * value)
	{
		___contentParent_39 = value;
		Il2CppCodeGenWriteBarrier(&___contentParent_39, value);
	}

	inline static int32_t get_offset_of_valuesDataSource_40() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___valuesDataSource_40)); }
	inline WMG_Data_Source_t3507445670 * get_valuesDataSource_40() const { return ___valuesDataSource_40; }
	inline WMG_Data_Source_t3507445670 ** get_address_of_valuesDataSource_40() { return &___valuesDataSource_40; }
	inline void set_valuesDataSource_40(WMG_Data_Source_t3507445670 * value)
	{
		___valuesDataSource_40 = value;
		Il2CppCodeGenWriteBarrier(&___valuesDataSource_40, value);
	}

	inline static int32_t get_offset_of_labelsDataSource_41() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___labelsDataSource_41)); }
	inline WMG_Data_Source_t3507445670 * get_labelsDataSource_41() const { return ___labelsDataSource_41; }
	inline WMG_Data_Source_t3507445670 ** get_address_of_labelsDataSource_41() { return &___labelsDataSource_41; }
	inline void set_labelsDataSource_41(WMG_Data_Source_t3507445670 * value)
	{
		___labelsDataSource_41 = value;
		Il2CppCodeGenWriteBarrier(&___labelsDataSource_41, value);
	}

	inline static int32_t get_offset_of_ringIDsDataSource_42() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___ringIDsDataSource_42)); }
	inline WMG_Data_Source_t3507445670 * get_ringIDsDataSource_42() const { return ___ringIDsDataSource_42; }
	inline WMG_Data_Source_t3507445670 ** get_address_of_ringIDsDataSource_42() { return &___ringIDsDataSource_42; }
	inline void set_ringIDsDataSource_42(WMG_Data_Source_t3507445670 * value)
	{
		___ringIDsDataSource_42 = value;
		Il2CppCodeGenWriteBarrier(&___ringIDsDataSource_42, value);
	}

	inline static int32_t get_offset_of_labelLineSprite_43() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___labelLineSprite_43)); }
	inline Sprite_t309593783 * get_labelLineSprite_43() const { return ___labelLineSprite_43; }
	inline Sprite_t309593783 ** get_address_of_labelLineSprite_43() { return &___labelLineSprite_43; }
	inline void set_labelLineSprite_43(Sprite_t309593783 * value)
	{
		___labelLineSprite_43 = value;
		Il2CppCodeGenWriteBarrier(&___labelLineSprite_43, value);
	}

	inline static int32_t get_offset_of_botLeftCorners_44() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___botLeftCorners_44)); }
	inline Sprite_t309593783 * get_botLeftCorners_44() const { return ___botLeftCorners_44; }
	inline Sprite_t309593783 ** get_address_of_botLeftCorners_44() { return &___botLeftCorners_44; }
	inline void set_botLeftCorners_44(Sprite_t309593783 * value)
	{
		___botLeftCorners_44 = value;
		Il2CppCodeGenWriteBarrier(&___botLeftCorners_44, value);
	}

	inline static int32_t get_offset_of_botRightCorners_45() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___botRightCorners_45)); }
	inline Sprite_t309593783 * get_botRightCorners_45() const { return ___botRightCorners_45; }
	inline Sprite_t309593783 ** get_address_of_botRightCorners_45() { return &___botRightCorners_45; }
	inline void set_botRightCorners_45(Sprite_t309593783 * value)
	{
		___botRightCorners_45 = value;
		Il2CppCodeGenWriteBarrier(&___botRightCorners_45, value);
	}

	inline static int32_t get_offset_of_computeShader_46() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___computeShader_46)); }
	inline ComputeShader_t3573922338 * get_computeShader_46() const { return ___computeShader_46; }
	inline ComputeShader_t3573922338 ** get_address_of_computeShader_46() { return &___computeShader_46; }
	inline void set_computeShader_46(ComputeShader_t3573922338 * value)
	{
		___computeShader_46 = value;
		Il2CppCodeGenWriteBarrier(&___computeShader_46, value);
	}

	inline static int32_t get_offset_of_textureResolution_47() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___textureResolution_47)); }
	inline int32_t get_textureResolution_47() const { return ___textureResolution_47; }
	inline int32_t* get_address_of_textureResolution_47() { return &___textureResolution_47; }
	inline void set_textureResolution_47(int32_t value)
	{
		___textureResolution_47 = value;
	}

	inline static int32_t get_offset_of__bandMode_48() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____bandMode_48)); }
	inline bool get__bandMode_48() const { return ____bandMode_48; }
	inline bool* get_address_of__bandMode_48() { return &____bandMode_48; }
	inline void set__bandMode_48(bool value)
	{
		____bandMode_48 = value;
	}

	inline static int32_t get_offset_of__pieMode_49() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____pieMode_49)); }
	inline bool get__pieMode_49() const { return ____pieMode_49; }
	inline bool* get_address_of__pieMode_49() { return &____pieMode_49; }
	inline void set__pieMode_49(bool value)
	{
		____pieMode_49 = value;
	}

	inline static int32_t get_offset_of__pieModePaddingDegrees_50() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____pieModePaddingDegrees_50)); }
	inline float get__pieModePaddingDegrees_50() const { return ____pieModePaddingDegrees_50; }
	inline float* get_address_of__pieModePaddingDegrees_50() { return &____pieModePaddingDegrees_50; }
	inline void set__pieModePaddingDegrees_50(float value)
	{
		____pieModePaddingDegrees_50 = value;
	}

	inline static int32_t get_offset_of__pieModeDegreeOffset_51() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____pieModeDegreeOffset_51)); }
	inline float get__pieModeDegreeOffset_51() const { return ____pieModeDegreeOffset_51; }
	inline float* get_address_of__pieModeDegreeOffset_51() { return &____pieModeDegreeOffset_51; }
	inline void set__pieModeDegreeOffset_51(float value)
	{
		____pieModeDegreeOffset_51 = value;
	}

	inline static int32_t get_offset_of__innerRadiusPercentage_52() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____innerRadiusPercentage_52)); }
	inline float get__innerRadiusPercentage_52() const { return ____innerRadiusPercentage_52; }
	inline float* get_address_of__innerRadiusPercentage_52() { return &____innerRadiusPercentage_52; }
	inline void set__innerRadiusPercentage_52(float value)
	{
		____innerRadiusPercentage_52 = value;
	}

	inline static int32_t get_offset_of__degrees_53() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____degrees_53)); }
	inline float get__degrees_53() const { return ____degrees_53; }
	inline float* get_address_of__degrees_53() { return &____degrees_53; }
	inline void set__degrees_53(float value)
	{
		____degrees_53 = value;
	}

	inline static int32_t get_offset_of__minValue_54() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____minValue_54)); }
	inline float get__minValue_54() const { return ____minValue_54; }
	inline float* get_address_of__minValue_54() { return &____minValue_54; }
	inline void set__minValue_54(float value)
	{
		____minValue_54 = value;
	}

	inline static int32_t get_offset_of__maxValue_55() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____maxValue_55)); }
	inline float get__maxValue_55() const { return ____maxValue_55; }
	inline float* get_address_of__maxValue_55() { return &____maxValue_55; }
	inline void set__maxValue_55(float value)
	{
		____maxValue_55 = value;
	}

	inline static int32_t get_offset_of__bandColor_56() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____bandColor_56)); }
	inline Color_t2020392075  get__bandColor_56() const { return ____bandColor_56; }
	inline Color_t2020392075 * get_address_of__bandColor_56() { return &____bandColor_56; }
	inline void set__bandColor_56(Color_t2020392075  value)
	{
		____bandColor_56 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBandAlpha_57() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____autoUpdateBandAlpha_57)); }
	inline bool get__autoUpdateBandAlpha_57() const { return ____autoUpdateBandAlpha_57; }
	inline bool* get_address_of__autoUpdateBandAlpha_57() { return &____autoUpdateBandAlpha_57; }
	inline void set__autoUpdateBandAlpha_57(bool value)
	{
		____autoUpdateBandAlpha_57 = value;
	}

	inline static int32_t get_offset_of__autoUpdateBandAlphaReverse_58() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____autoUpdateBandAlphaReverse_58)); }
	inline bool get__autoUpdateBandAlphaReverse_58() const { return ____autoUpdateBandAlphaReverse_58; }
	inline bool* get_address_of__autoUpdateBandAlphaReverse_58() { return &____autoUpdateBandAlphaReverse_58; }
	inline void set__autoUpdateBandAlphaReverse_58(bool value)
	{
		____autoUpdateBandAlphaReverse_58 = value;
	}

	inline static int32_t get_offset_of__ringColor_59() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____ringColor_59)); }
	inline Color_t2020392075  get__ringColor_59() const { return ____ringColor_59; }
	inline Color_t2020392075 * get_address_of__ringColor_59() { return &____ringColor_59; }
	inline void set__ringColor_59(Color_t2020392075  value)
	{
		____ringColor_59 = value;
	}

	inline static int32_t get_offset_of__ringWidth_60() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____ringWidth_60)); }
	inline float get__ringWidth_60() const { return ____ringWidth_60; }
	inline float* get_address_of__ringWidth_60() { return &____ringWidth_60; }
	inline void set__ringWidth_60(float value)
	{
		____ringWidth_60 = value;
	}

	inline static int32_t get_offset_of__ringPointWidthFactor_61() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____ringPointWidthFactor_61)); }
	inline float get__ringPointWidthFactor_61() const { return ____ringPointWidthFactor_61; }
	inline float* get_address_of__ringPointWidthFactor_61() { return &____ringPointWidthFactor_61; }
	inline void set__ringPointWidthFactor_61(float value)
	{
		____ringPointWidthFactor_61 = value;
	}

	inline static int32_t get_offset_of__bandPadding_62() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____bandPadding_62)); }
	inline float get__bandPadding_62() const { return ____bandPadding_62; }
	inline float* get_address_of__bandPadding_62() { return &____bandPadding_62; }
	inline void set__bandPadding_62(float value)
	{
		____bandPadding_62 = value;
	}

	inline static int32_t get_offset_of__hideZeroLabelLine_63() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____hideZeroLabelLine_63)); }
	inline bool get__hideZeroLabelLine_63() const { return ____hideZeroLabelLine_63; }
	inline bool* get_address_of__hideZeroLabelLine_63() { return &____hideZeroLabelLine_63; }
	inline void set__hideZeroLabelLine_63(bool value)
	{
		____hideZeroLabelLine_63 = value;
	}

	inline static int32_t get_offset_of__labelStartCenteredOnBand_64() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelStartCenteredOnBand_64)); }
	inline bool get__labelStartCenteredOnBand_64() const { return ____labelStartCenteredOnBand_64; }
	inline bool* get_address_of__labelStartCenteredOnBand_64() { return &____labelStartCenteredOnBand_64; }
	inline void set__labelStartCenteredOnBand_64(bool value)
	{
		____labelStartCenteredOnBand_64 = value;
	}

	inline static int32_t get_offset_of__labelPointSize_65() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelPointSize_65)); }
	inline Vector2_t2243707579  get__labelPointSize_65() const { return ____labelPointSize_65; }
	inline Vector2_t2243707579 * get_address_of__labelPointSize_65() { return &____labelPointSize_65; }
	inline void set__labelPointSize_65(Vector2_t2243707579  value)
	{
		____labelPointSize_65 = value;
	}

	inline static int32_t get_offset_of__labelLinePadding_66() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelLinePadding_66)); }
	inline float get__labelLinePadding_66() const { return ____labelLinePadding_66; }
	inline float* get_address_of__labelLinePadding_66() { return &____labelLinePadding_66; }
	inline void set__labelLinePadding_66(float value)
	{
		____labelLinePadding_66 = value;
	}

	inline static int32_t get_offset_of__labelTextOffset_67() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelTextOffset_67)); }
	inline float get__labelTextOffset_67() const { return ____labelTextOffset_67; }
	inline float* get_address_of__labelTextOffset_67() { return &____labelTextOffset_67; }
	inline void set__labelTextOffset_67(float value)
	{
		____labelTextOffset_67 = value;
	}

	inline static int32_t get_offset_of__labelLineColor_68() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelLineColor_68)); }
	inline Color_t2020392075  get__labelLineColor_68() const { return ____labelLineColor_68; }
	inline Color_t2020392075 * get_address_of__labelLineColor_68() { return &____labelLineColor_68; }
	inline void set__labelLineColor_68(Color_t2020392075  value)
	{
		____labelLineColor_68 = value;
	}

	inline static int32_t get_offset_of__labelPointColor_69() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelPointColor_69)); }
	inline Color_t2020392075  get__labelPointColor_69() const { return ____labelPointColor_69; }
	inline Color_t2020392075 * get_address_of__labelPointColor_69() { return &____labelPointColor_69; }
	inline void set__labelPointColor_69(Color_t2020392075  value)
	{
		____labelPointColor_69 = value;
	}

	inline static int32_t get_offset_of__labelsFontSize_70() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelsFontSize_70)); }
	inline int32_t get__labelsFontSize_70() const { return ____labelsFontSize_70; }
	inline int32_t* get_address_of__labelsFontSize_70() { return &____labelsFontSize_70; }
	inline void set__labelsFontSize_70(int32_t value)
	{
		____labelsFontSize_70 = value;
	}

	inline static int32_t get_offset_of__labelsColor_71() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelsColor_71)); }
	inline Color_t2020392075  get__labelsColor_71() const { return ____labelsColor_71; }
	inline Color_t2020392075 * get_address_of__labelsColor_71() { return &____labelsColor_71; }
	inline void set__labelsColor_71(Color_t2020392075  value)
	{
		____labelsColor_71 = value;
	}

	inline static int32_t get_offset_of__labelsFontStyle_72() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelsFontStyle_72)); }
	inline int32_t get__labelsFontStyle_72() const { return ____labelsFontStyle_72; }
	inline int32_t* get_address_of__labelsFontStyle_72() { return &____labelsFontStyle_72; }
	inline void set__labelsFontStyle_72(int32_t value)
	{
		____labelsFontStyle_72 = value;
	}

	inline static int32_t get_offset_of__labelsFont_73() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____labelsFont_73)); }
	inline Font_t4239498691 * get__labelsFont_73() const { return ____labelsFont_73; }
	inline Font_t4239498691 ** get_address_of__labelsFont_73() { return &____labelsFont_73; }
	inline void set__labelsFont_73(Font_t4239498691 * value)
	{
		____labelsFont_73 = value;
		Il2CppCodeGenWriteBarrier(&____labelsFont_73, value);
	}

	inline static int32_t get_offset_of__showDataLabels_74() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____showDataLabels_74)); }
	inline bool get__showDataLabels_74() const { return ____showDataLabels_74; }
	inline bool* get_address_of__showDataLabels_74() { return &____showDataLabels_74; }
	inline void set__showDataLabels_74(bool value)
	{
		____showDataLabels_74 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontSize_75() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____dataLabelsFontSize_75)); }
	inline int32_t get__dataLabelsFontSize_75() const { return ____dataLabelsFontSize_75; }
	inline int32_t* get_address_of__dataLabelsFontSize_75() { return &____dataLabelsFontSize_75; }
	inline void set__dataLabelsFontSize_75(int32_t value)
	{
		____dataLabelsFontSize_75 = value;
	}

	inline static int32_t get_offset_of__dataLabelsColor_76() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____dataLabelsColor_76)); }
	inline Color_t2020392075  get__dataLabelsColor_76() const { return ____dataLabelsColor_76; }
	inline Color_t2020392075 * get_address_of__dataLabelsColor_76() { return &____dataLabelsColor_76; }
	inline void set__dataLabelsColor_76(Color_t2020392075  value)
	{
		____dataLabelsColor_76 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFontStyle_77() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____dataLabelsFontStyle_77)); }
	inline int32_t get__dataLabelsFontStyle_77() const { return ____dataLabelsFontStyle_77; }
	inline int32_t* get_address_of__dataLabelsFontStyle_77() { return &____dataLabelsFontStyle_77; }
	inline void set__dataLabelsFontStyle_77(int32_t value)
	{
		____dataLabelsFontStyle_77 = value;
	}

	inline static int32_t get_offset_of__dataLabelsFont_78() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____dataLabelsFont_78)); }
	inline Font_t4239498691 * get__dataLabelsFont_78() const { return ____dataLabelsFont_78; }
	inline Font_t4239498691 ** get_address_of__dataLabelsFont_78() { return &____dataLabelsFont_78; }
	inline void set__dataLabelsFont_78(Font_t4239498691 * value)
	{
		____dataLabelsFont_78 = value;
		Il2CppCodeGenWriteBarrier(&____dataLabelsFont_78, value);
	}

	inline static int32_t get_offset_of__leftRightPadding_79() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____leftRightPadding_79)); }
	inline Vector2_t2243707579  get__leftRightPadding_79() const { return ____leftRightPadding_79; }
	inline Vector2_t2243707579 * get_address_of__leftRightPadding_79() { return &____leftRightPadding_79; }
	inline void set__leftRightPadding_79(Vector2_t2243707579  value)
	{
		____leftRightPadding_79 = value;
	}

	inline static int32_t get_offset_of__topBotPadding_80() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____topBotPadding_80)); }
	inline Vector2_t2243707579  get__topBotPadding_80() const { return ____topBotPadding_80; }
	inline Vector2_t2243707579 * get_address_of__topBotPadding_80() { return &____topBotPadding_80; }
	inline void set__topBotPadding_80(Vector2_t2243707579  value)
	{
		____topBotPadding_80 = value;
	}

	inline static int32_t get_offset_of__antiAliasing_81() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____antiAliasing_81)); }
	inline bool get__antiAliasing_81() const { return ____antiAliasing_81; }
	inline bool* get_address_of__antiAliasing_81() { return &____antiAliasing_81; }
	inline void set__antiAliasing_81(bool value)
	{
		____antiAliasing_81 = value;
	}

	inline static int32_t get_offset_of__antiAliasingStrength_82() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____antiAliasingStrength_82)); }
	inline float get__antiAliasingStrength_82() const { return ____antiAliasingStrength_82; }
	inline float* get_address_of__antiAliasingStrength_82() { return &____antiAliasingStrength_82; }
	inline void set__antiAliasingStrength_82(float value)
	{
		____antiAliasingStrength_82 = value;
	}

	inline static int32_t get_offset_of__useComputeShader_83() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ____useComputeShader_83)); }
	inline bool get__useComputeShader_83() const { return ____useComputeShader_83; }
	inline bool* get_address_of__useComputeShader_83() { return &____useComputeShader_83; }
	inline void set__useComputeShader_83(bool value)
	{
		____useComputeShader_83 = value;
	}

	inline static int32_t get_offset_of_U3CMaxDataValU3Ek__BackingField_84() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___U3CMaxDataValU3Ek__BackingField_84)); }
	inline float get_U3CMaxDataValU3Ek__BackingField_84() const { return ___U3CMaxDataValU3Ek__BackingField_84; }
	inline float* get_address_of_U3CMaxDataValU3Ek__BackingField_84() { return &___U3CMaxDataValU3Ek__BackingField_84; }
	inline void set_U3CMaxDataValU3Ek__BackingField_84(float value)
	{
		___U3CMaxDataValU3Ek__BackingField_84 = value;
	}

	inline static int32_t get_offset_of_U3CMinDataValU3Ek__BackingField_85() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___U3CMinDataValU3Ek__BackingField_85)); }
	inline float get_U3CMinDataValU3Ek__BackingField_85() const { return ___U3CMinDataValU3Ek__BackingField_85; }
	inline float* get_address_of_U3CMinDataValU3Ek__BackingField_85() { return &___U3CMinDataValU3Ek__BackingField_85; }
	inline void set_U3CMinDataValU3Ek__BackingField_85(float value)
	{
		___U3CMinDataValU3Ek__BackingField_85 = value;
	}

	inline static int32_t get_offset_of_origGraphWidth_86() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___origGraphWidth_86)); }
	inline float get_origGraphWidth_86() const { return ___origGraphWidth_86; }
	inline float* get_address_of_origGraphWidth_86() { return &___origGraphWidth_86; }
	inline void set_origGraphWidth_86(float value)
	{
		___origGraphWidth_86 = value;
	}

	inline static int32_t get_offset_of_containerWidthCached_87() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___containerWidthCached_87)); }
	inline float get_containerWidthCached_87() const { return ___containerWidthCached_87; }
	inline float* get_address_of_containerWidthCached_87() { return &___containerWidthCached_87; }
	inline void set_containerWidthCached_87(float value)
	{
		___containerWidthCached_87 = value;
	}

	inline static int32_t get_offset_of_containerHeightCached_88() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___containerHeightCached_88)); }
	inline float get_containerHeightCached_88() const { return ___containerHeightCached_88; }
	inline float* get_address_of_containerHeightCached_88() { return &___containerHeightCached_88; }
	inline void set_containerHeightCached_88(float value)
	{
		___containerHeightCached_88 = value;
	}

	inline static int32_t get_offset_of_U3CringsU3Ek__BackingField_89() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___U3CringsU3Ek__BackingField_89)); }
	inline List_1_t2455901852 * get_U3CringsU3Ek__BackingField_89() const { return ___U3CringsU3Ek__BackingField_89; }
	inline List_1_t2455901852 ** get_address_of_U3CringsU3Ek__BackingField_89() { return &___U3CringsU3Ek__BackingField_89; }
	inline void set_U3CringsU3Ek__BackingField_89(List_1_t2455901852 * value)
	{
		___U3CringsU3Ek__BackingField_89 = value;
		Il2CppCodeGenWriteBarrier(&___U3CringsU3Ek__BackingField_89, value);
	}

	inline static int32_t get_offset_of_extraRingSprite_90() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___extraRingSprite_90)); }
	inline Sprite_t309593783 * get_extraRingSprite_90() const { return ___extraRingSprite_90; }
	inline Sprite_t309593783 ** get_address_of_extraRingSprite_90() { return &___extraRingSprite_90; }
	inline void set_extraRingSprite_90(Sprite_t309593783 * value)
	{
		___extraRingSprite_90 = value;
		Il2CppCodeGenWriteBarrier(&___extraRingSprite_90, value);
	}

	inline static int32_t get_offset_of_texColors_91() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___texColors_91)); }
	inline ColorU5BU5D_t672350442* get_texColors_91() const { return ___texColors_91; }
	inline ColorU5BU5D_t672350442** get_address_of_texColors_91() { return &___texColors_91; }
	inline void set_texColors_91(ColorU5BU5D_t672350442* value)
	{
		___texColors_91 = value;
		Il2CppCodeGenWriteBarrier(&___texColors_91, value);
	}

	inline static int32_t get_offset_of_changeObjs_92() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___changeObjs_92)); }
	inline List_1_t1684053944 * get_changeObjs_92() const { return ___changeObjs_92; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_92() { return &___changeObjs_92; }
	inline void set_changeObjs_92(List_1_t1684053944 * value)
	{
		___changeObjs_92 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_92, value);
	}

	inline static int32_t get_offset_of_numberRingsC_93() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___numberRingsC_93)); }
	inline WMG_Change_Obj_t2314932812 * get_numberRingsC_93() const { return ___numberRingsC_93; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_numberRingsC_93() { return &___numberRingsC_93; }
	inline void set_numberRingsC_93(WMG_Change_Obj_t2314932812 * value)
	{
		___numberRingsC_93 = value;
		Il2CppCodeGenWriteBarrier(&___numberRingsC_93, value);
	}

	inline static int32_t get_offset_of_bandColorC_94() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___bandColorC_94)); }
	inline WMG_Change_Obj_t2314932812 * get_bandColorC_94() const { return ___bandColorC_94; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_bandColorC_94() { return &___bandColorC_94; }
	inline void set_bandColorC_94(WMG_Change_Obj_t2314932812 * value)
	{
		___bandColorC_94 = value;
		Il2CppCodeGenWriteBarrier(&___bandColorC_94, value);
	}

	inline static int32_t get_offset_of_ringColorC_95() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___ringColorC_95)); }
	inline WMG_Change_Obj_t2314932812 * get_ringColorC_95() const { return ___ringColorC_95; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_ringColorC_95() { return &___ringColorC_95; }
	inline void set_ringColorC_95(WMG_Change_Obj_t2314932812 * value)
	{
		___ringColorC_95 = value;
		Il2CppCodeGenWriteBarrier(&___ringColorC_95, value);
	}

	inline static int32_t get_offset_of_labelLineColorC_96() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___labelLineColorC_96)); }
	inline WMG_Change_Obj_t2314932812 * get_labelLineColorC_96() const { return ___labelLineColorC_96; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_labelLineColorC_96() { return &___labelLineColorC_96; }
	inline void set_labelLineColorC_96(WMG_Change_Obj_t2314932812 * value)
	{
		___labelLineColorC_96 = value;
		Il2CppCodeGenWriteBarrier(&___labelLineColorC_96, value);
	}

	inline static int32_t get_offset_of_labelsC_97() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___labelsC_97)); }
	inline WMG_Change_Obj_t2314932812 * get_labelsC_97() const { return ___labelsC_97; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_labelsC_97() { return &___labelsC_97; }
	inline void set_labelsC_97(WMG_Change_Obj_t2314932812 * value)
	{
		___labelsC_97 = value;
		Il2CppCodeGenWriteBarrier(&___labelsC_97, value);
	}

	inline static int32_t get_offset_of_degreesC_98() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___degreesC_98)); }
	inline WMG_Change_Obj_t2314932812 * get_degreesC_98() const { return ___degreesC_98; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_degreesC_98() { return &___degreesC_98; }
	inline void set_degreesC_98(WMG_Change_Obj_t2314932812 * value)
	{
		___degreesC_98 = value;
		Il2CppCodeGenWriteBarrier(&___degreesC_98, value);
	}

	inline static int32_t get_offset_of_aRingValC_99() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___aRingValC_99)); }
	inline WMG_Change_Obj_t2314932812 * get_aRingValC_99() const { return ___aRingValC_99; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_aRingValC_99() { return &___aRingValC_99; }
	inline void set_aRingValC_99(WMG_Change_Obj_t2314932812 * value)
	{
		___aRingValC_99 = value;
		Il2CppCodeGenWriteBarrier(&___aRingValC_99, value);
	}

	inline static int32_t get_offset_of_radiusC_100() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___radiusC_100)); }
	inline WMG_Change_Obj_t2314932812 * get_radiusC_100() const { return ___radiusC_100; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_radiusC_100() { return &___radiusC_100; }
	inline void set_radiusC_100(WMG_Change_Obj_t2314932812 * value)
	{
		___radiusC_100 = value;
		Il2CppCodeGenWriteBarrier(&___radiusC_100, value);
	}

	inline static int32_t get_offset_of_textureC_101() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___textureC_101)); }
	inline WMG_Change_Obj_t2314932812 * get_textureC_101() const { return ___textureC_101; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_textureC_101() { return &___textureC_101; }
	inline void set_textureC_101(WMG_Change_Obj_t2314932812 * value)
	{
		___textureC_101 = value;
		Il2CppCodeGenWriteBarrier(&___textureC_101, value);
	}

	inline static int32_t get_offset_of_hideRingsC_102() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___hideRingsC_102)); }
	inline WMG_Change_Obj_t2314932812 * get_hideRingsC_102() const { return ___hideRingsC_102; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_hideRingsC_102() { return &___hideRingsC_102; }
	inline void set_hideRingsC_102(WMG_Change_Obj_t2314932812 * value)
	{
		___hideRingsC_102 = value;
		Il2CppCodeGenWriteBarrier(&___hideRingsC_102, value);
	}

	inline static int32_t get_offset_of_labelLineC_103() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___labelLineC_103)); }
	inline WMG_Change_Obj_t2314932812 * get_labelLineC_103() const { return ___labelLineC_103; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_labelLineC_103() { return &___labelLineC_103; }
	inline void set_labelLineC_103(WMG_Change_Obj_t2314932812 * value)
	{
		___labelLineC_103 = value;
		Il2CppCodeGenWriteBarrier(&___labelLineC_103, value);
	}

	inline static int32_t get_offset_of_computeShaderC_104() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___computeShaderC_104)); }
	inline WMG_Change_Obj_t2314932812 * get_computeShaderC_104() const { return ___computeShaderC_104; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_computeShaderC_104() { return &___computeShaderC_104; }
	inline void set_computeShaderC_104(WMG_Change_Obj_t2314932812 * value)
	{
		___computeShaderC_104 = value;
		Il2CppCodeGenWriteBarrier(&___computeShaderC_104, value);
	}

	inline static int32_t get_offset_of_aRingValChangeIndices_105() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___aRingValChangeIndices_105)); }
	inline List_1_t1440998580 * get_aRingValChangeIndices_105() const { return ___aRingValChangeIndices_105; }
	inline List_1_t1440998580 ** get_address_of_aRingValChangeIndices_105() { return &___aRingValChangeIndices_105; }
	inline void set_aRingValChangeIndices_105(List_1_t1440998580 * value)
	{
		___aRingValChangeIndices_105 = value;
		Il2CppCodeGenWriteBarrier(&___aRingValChangeIndices_105, value);
	}

	inline static int32_t get_offset_of_beforeValCount_106() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___beforeValCount_106)); }
	inline List_1_t1440998580 * get_beforeValCount_106() const { return ___beforeValCount_106; }
	inline List_1_t1440998580 ** get_address_of_beforeValCount_106() { return &___beforeValCount_106; }
	inline void set_beforeValCount_106(List_1_t1440998580 * value)
	{
		___beforeValCount_106 = value;
		Il2CppCodeGenWriteBarrier(&___beforeValCount_106, value);
	}

	inline static int32_t get_offset_of_afterValCount_107() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___afterValCount_107)); }
	inline List_1_t1440998580 * get_afterValCount_107() const { return ___afterValCount_107; }
	inline List_1_t1440998580 ** get_address_of_afterValCount_107() { return &___afterValCount_107; }
	inline void set_afterValCount_107(List_1_t1440998580 * value)
	{
		___afterValCount_107 = value;
		Il2CppCodeGenWriteBarrier(&___afterValCount_107, value);
	}

	inline static int32_t get_offset_of_hasInit_108() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___hasInit_108)); }
	inline bool get_hasInit_108() const { return ___hasInit_108; }
	inline bool* get_address_of_hasInit_108() { return &___hasInit_108; }
	inline void set_hasInit_108(bool value)
	{
		___hasInit_108 = value;
	}

	inline static int32_t get_offset_of_dataLabeler_109() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___dataLabeler_109)); }
	inline DataLabeler_t2502756599 * get_dataLabeler_109() const { return ___dataLabeler_109; }
	inline DataLabeler_t2502756599 ** get_address_of_dataLabeler_109() { return &___dataLabeler_109; }
	inline void set_dataLabeler_109(DataLabeler_t2502756599 * value)
	{
		___dataLabeler_109 = value;
		Il2CppCodeGenWriteBarrier(&___dataLabeler_109, value);
	}

	inline static int32_t get_offset_of_textureChanger_110() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___textureChanger_110)); }
	inline TextureChanger_t922487265 * get_textureChanger_110() const { return ___textureChanger_110; }
	inline TextureChanger_t922487265 ** get_address_of_textureChanger_110() { return &___textureChanger_110; }
	inline void set_textureChanger_110(TextureChanger_t922487265 * value)
	{
		___textureChanger_110 = value;
		Il2CppCodeGenWriteBarrier(&___textureChanger_110, value);
	}

	inline static int32_t get_offset_of_colorChanger_111() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___colorChanger_111)); }
	inline ColorChanger_t23166627 * get_colorChanger_111() const { return ___colorChanger_111; }
	inline ColorChanger_t23166627 ** get_address_of_colorChanger_111() { return &___colorChanger_111; }
	inline void set_colorChanger_111(ColorChanger_t23166627 * value)
	{
		___colorChanger_111 = value;
		Il2CppCodeGenWriteBarrier(&___colorChanger_111, value);
	}

	inline static int32_t get_offset_of_bandColorsChanger_112() { return static_cast<int32_t>(offsetof(WMG_Ring_Graph_t2652186449, ___bandColorsChanger_112)); }
	inline BandColorsChanger_t2486711437 * get_bandColorsChanger_112() const { return ___bandColorsChanger_112; }
	inline BandColorsChanger_t2486711437 ** get_address_of_bandColorsChanger_112() { return &___bandColorsChanger_112; }
	inline void set_bandColorsChanger_112(BandColorsChanger_t2486711437 * value)
	{
		___bandColorsChanger_112 = value;
		Il2CppCodeGenWriteBarrier(&___bandColorsChanger_112, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
