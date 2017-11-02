#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Graph_Manager1488325314.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// WMG_List`1<System.Single>
struct WMG_List_1_t228366964;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// WMG_List`1<System.String>
struct WMG_List_1_t181077265;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// WMG_List`1<UnityEngine.Color>
struct WMG_List_1_t172249107;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<WMG_Bezier_Band>
struct List_1_t1665866881;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Bezier_Band_Graph
struct  WMG_Bezier_Band_Graph_t3566287070  : public WMG_Graph_Manager_t1488325314
{
public:
	// System.Collections.Generic.List`1<System.Single> WMG_Bezier_Band_Graph::_values
	List_1_t1445631064 * ____values_19;
	// WMG_List`1<System.Single> WMG_Bezier_Band_Graph::values
	WMG_List_1_t228366964 * ___values_20;
	// System.Collections.Generic.List`1<System.String> WMG_Bezier_Band_Graph::_labels
	List_1_t1398341365 * ____labels_21;
	// WMG_List`1<System.String> WMG_Bezier_Band_Graph::labels
	WMG_List_1_t181077265 * ___labels_22;
	// System.Collections.Generic.List`1<UnityEngine.Color> WMG_Bezier_Band_Graph::_fillColors
	List_1_t1389513207 * ____fillColors_23;
	// WMG_List`1<UnityEngine.Color> WMG_Bezier_Band_Graph::fillColors
	WMG_List_1_t172249107 * ___fillColors_24;
	// System.Int32 WMG_Bezier_Band_Graph::textureResolution
	int32_t ___textureResolution_25;
	// UnityEngine.GameObject WMG_Bezier_Band_Graph::bandsParent
	GameObject_t1756533147 * ___bandsParent_26;
	// UnityEngine.Object WMG_Bezier_Band_Graph::bandPrefab
	Object_t1021602117 * ___bandPrefab_27;
	// UnityEngine.Color WMG_Bezier_Band_Graph::_bandLineColor
	Color_t2020392075  ____bandLineColor_28;
	// System.Single WMG_Bezier_Band_Graph::_startHeightPercent
	float ____startHeightPercent_29;
	// System.Int32 WMG_Bezier_Band_Graph::_bandSpacing
	int32_t ____bandSpacing_30;
	// System.Int32 WMG_Bezier_Band_Graph::_bandLineWidth
	int32_t ____bandLineWidth_31;
	// UnityEngine.Vector2 WMG_Bezier_Band_Graph::_cubicBezierP1
	Vector2_t2243707579  ____cubicBezierP1_32;
	// UnityEngine.Vector2 WMG_Bezier_Band_Graph::_cubicBezierP2
	Vector2_t2243707579  ____cubicBezierP2_33;
	// System.Int32 WMG_Bezier_Band_Graph::_numDecimals
	int32_t ____numDecimals_34;
	// System.Int32 WMG_Bezier_Band_Graph::_fontSize
	int32_t ____fontSize_35;
	// System.Collections.Generic.List`1<WMG_Bezier_Band> WMG_Bezier_Band_Graph::<bands>k__BackingField
	List_1_t1665866881 * ___U3CbandsU3Ek__BackingField_36;
	// System.Single WMG_Bezier_Band_Graph::<TotalVal>k__BackingField
	float ___U3CTotalValU3Ek__BackingField_37;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Bezier_Band_Graph::changeObjs
	List_1_t1684053944 * ___changeObjs_38;
	// WMG_Change_Obj WMG_Bezier_Band_Graph::allC
	WMG_Change_Obj_t2314932812 * ___allC_39;
	// WMG_Change_Obj WMG_Bezier_Band_Graph::cubicBezierC
	WMG_Change_Obj_t2314932812 * ___cubicBezierC_40;
	// WMG_Change_Obj WMG_Bezier_Band_Graph::labelsC
	WMG_Change_Obj_t2314932812 * ___labelsC_41;
	// WMG_Change_Obj WMG_Bezier_Band_Graph::colorsC
	WMG_Change_Obj_t2314932812 * ___colorsC_42;
	// WMG_Change_Obj WMG_Bezier_Band_Graph::fontC
	WMG_Change_Obj_t2314932812 * ___fontC_43;
	// System.Boolean WMG_Bezier_Band_Graph::hasInit
	bool ___hasInit_44;

public:
	inline static int32_t get_offset_of__values_19() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____values_19)); }
	inline List_1_t1445631064 * get__values_19() const { return ____values_19; }
	inline List_1_t1445631064 ** get_address_of__values_19() { return &____values_19; }
	inline void set__values_19(List_1_t1445631064 * value)
	{
		____values_19 = value;
		Il2CppCodeGenWriteBarrier(&____values_19, value);
	}

	inline static int32_t get_offset_of_values_20() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___values_20)); }
	inline WMG_List_1_t228366964 * get_values_20() const { return ___values_20; }
	inline WMG_List_1_t228366964 ** get_address_of_values_20() { return &___values_20; }
	inline void set_values_20(WMG_List_1_t228366964 * value)
	{
		___values_20 = value;
		Il2CppCodeGenWriteBarrier(&___values_20, value);
	}

	inline static int32_t get_offset_of__labels_21() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____labels_21)); }
	inline List_1_t1398341365 * get__labels_21() const { return ____labels_21; }
	inline List_1_t1398341365 ** get_address_of__labels_21() { return &____labels_21; }
	inline void set__labels_21(List_1_t1398341365 * value)
	{
		____labels_21 = value;
		Il2CppCodeGenWriteBarrier(&____labels_21, value);
	}

	inline static int32_t get_offset_of_labels_22() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___labels_22)); }
	inline WMG_List_1_t181077265 * get_labels_22() const { return ___labels_22; }
	inline WMG_List_1_t181077265 ** get_address_of_labels_22() { return &___labels_22; }
	inline void set_labels_22(WMG_List_1_t181077265 * value)
	{
		___labels_22 = value;
		Il2CppCodeGenWriteBarrier(&___labels_22, value);
	}

	inline static int32_t get_offset_of__fillColors_23() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____fillColors_23)); }
	inline List_1_t1389513207 * get__fillColors_23() const { return ____fillColors_23; }
	inline List_1_t1389513207 ** get_address_of__fillColors_23() { return &____fillColors_23; }
	inline void set__fillColors_23(List_1_t1389513207 * value)
	{
		____fillColors_23 = value;
		Il2CppCodeGenWriteBarrier(&____fillColors_23, value);
	}

	inline static int32_t get_offset_of_fillColors_24() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___fillColors_24)); }
	inline WMG_List_1_t172249107 * get_fillColors_24() const { return ___fillColors_24; }
	inline WMG_List_1_t172249107 ** get_address_of_fillColors_24() { return &___fillColors_24; }
	inline void set_fillColors_24(WMG_List_1_t172249107 * value)
	{
		___fillColors_24 = value;
		Il2CppCodeGenWriteBarrier(&___fillColors_24, value);
	}

	inline static int32_t get_offset_of_textureResolution_25() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___textureResolution_25)); }
	inline int32_t get_textureResolution_25() const { return ___textureResolution_25; }
	inline int32_t* get_address_of_textureResolution_25() { return &___textureResolution_25; }
	inline void set_textureResolution_25(int32_t value)
	{
		___textureResolution_25 = value;
	}

	inline static int32_t get_offset_of_bandsParent_26() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___bandsParent_26)); }
	inline GameObject_t1756533147 * get_bandsParent_26() const { return ___bandsParent_26; }
	inline GameObject_t1756533147 ** get_address_of_bandsParent_26() { return &___bandsParent_26; }
	inline void set_bandsParent_26(GameObject_t1756533147 * value)
	{
		___bandsParent_26 = value;
		Il2CppCodeGenWriteBarrier(&___bandsParent_26, value);
	}

	inline static int32_t get_offset_of_bandPrefab_27() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___bandPrefab_27)); }
	inline Object_t1021602117 * get_bandPrefab_27() const { return ___bandPrefab_27; }
	inline Object_t1021602117 ** get_address_of_bandPrefab_27() { return &___bandPrefab_27; }
	inline void set_bandPrefab_27(Object_t1021602117 * value)
	{
		___bandPrefab_27 = value;
		Il2CppCodeGenWriteBarrier(&___bandPrefab_27, value);
	}

	inline static int32_t get_offset_of__bandLineColor_28() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____bandLineColor_28)); }
	inline Color_t2020392075  get__bandLineColor_28() const { return ____bandLineColor_28; }
	inline Color_t2020392075 * get_address_of__bandLineColor_28() { return &____bandLineColor_28; }
	inline void set__bandLineColor_28(Color_t2020392075  value)
	{
		____bandLineColor_28 = value;
	}

	inline static int32_t get_offset_of__startHeightPercent_29() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____startHeightPercent_29)); }
	inline float get__startHeightPercent_29() const { return ____startHeightPercent_29; }
	inline float* get_address_of__startHeightPercent_29() { return &____startHeightPercent_29; }
	inline void set__startHeightPercent_29(float value)
	{
		____startHeightPercent_29 = value;
	}

	inline static int32_t get_offset_of__bandSpacing_30() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____bandSpacing_30)); }
	inline int32_t get__bandSpacing_30() const { return ____bandSpacing_30; }
	inline int32_t* get_address_of__bandSpacing_30() { return &____bandSpacing_30; }
	inline void set__bandSpacing_30(int32_t value)
	{
		____bandSpacing_30 = value;
	}

	inline static int32_t get_offset_of__bandLineWidth_31() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____bandLineWidth_31)); }
	inline int32_t get__bandLineWidth_31() const { return ____bandLineWidth_31; }
	inline int32_t* get_address_of__bandLineWidth_31() { return &____bandLineWidth_31; }
	inline void set__bandLineWidth_31(int32_t value)
	{
		____bandLineWidth_31 = value;
	}

	inline static int32_t get_offset_of__cubicBezierP1_32() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____cubicBezierP1_32)); }
	inline Vector2_t2243707579  get__cubicBezierP1_32() const { return ____cubicBezierP1_32; }
	inline Vector2_t2243707579 * get_address_of__cubicBezierP1_32() { return &____cubicBezierP1_32; }
	inline void set__cubicBezierP1_32(Vector2_t2243707579  value)
	{
		____cubicBezierP1_32 = value;
	}

	inline static int32_t get_offset_of__cubicBezierP2_33() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____cubicBezierP2_33)); }
	inline Vector2_t2243707579  get__cubicBezierP2_33() const { return ____cubicBezierP2_33; }
	inline Vector2_t2243707579 * get_address_of__cubicBezierP2_33() { return &____cubicBezierP2_33; }
	inline void set__cubicBezierP2_33(Vector2_t2243707579  value)
	{
		____cubicBezierP2_33 = value;
	}

	inline static int32_t get_offset_of__numDecimals_34() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____numDecimals_34)); }
	inline int32_t get__numDecimals_34() const { return ____numDecimals_34; }
	inline int32_t* get_address_of__numDecimals_34() { return &____numDecimals_34; }
	inline void set__numDecimals_34(int32_t value)
	{
		____numDecimals_34 = value;
	}

	inline static int32_t get_offset_of__fontSize_35() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ____fontSize_35)); }
	inline int32_t get__fontSize_35() const { return ____fontSize_35; }
	inline int32_t* get_address_of__fontSize_35() { return &____fontSize_35; }
	inline void set__fontSize_35(int32_t value)
	{
		____fontSize_35 = value;
	}

	inline static int32_t get_offset_of_U3CbandsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___U3CbandsU3Ek__BackingField_36)); }
	inline List_1_t1665866881 * get_U3CbandsU3Ek__BackingField_36() const { return ___U3CbandsU3Ek__BackingField_36; }
	inline List_1_t1665866881 ** get_address_of_U3CbandsU3Ek__BackingField_36() { return &___U3CbandsU3Ek__BackingField_36; }
	inline void set_U3CbandsU3Ek__BackingField_36(List_1_t1665866881 * value)
	{
		___U3CbandsU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbandsU3Ek__BackingField_36, value);
	}

	inline static int32_t get_offset_of_U3CTotalValU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___U3CTotalValU3Ek__BackingField_37)); }
	inline float get_U3CTotalValU3Ek__BackingField_37() const { return ___U3CTotalValU3Ek__BackingField_37; }
	inline float* get_address_of_U3CTotalValU3Ek__BackingField_37() { return &___U3CTotalValU3Ek__BackingField_37; }
	inline void set_U3CTotalValU3Ek__BackingField_37(float value)
	{
		___U3CTotalValU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_changeObjs_38() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___changeObjs_38)); }
	inline List_1_t1684053944 * get_changeObjs_38() const { return ___changeObjs_38; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_38() { return &___changeObjs_38; }
	inline void set_changeObjs_38(List_1_t1684053944 * value)
	{
		___changeObjs_38 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_38, value);
	}

	inline static int32_t get_offset_of_allC_39() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___allC_39)); }
	inline WMG_Change_Obj_t2314932812 * get_allC_39() const { return ___allC_39; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_allC_39() { return &___allC_39; }
	inline void set_allC_39(WMG_Change_Obj_t2314932812 * value)
	{
		___allC_39 = value;
		Il2CppCodeGenWriteBarrier(&___allC_39, value);
	}

	inline static int32_t get_offset_of_cubicBezierC_40() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___cubicBezierC_40)); }
	inline WMG_Change_Obj_t2314932812 * get_cubicBezierC_40() const { return ___cubicBezierC_40; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_cubicBezierC_40() { return &___cubicBezierC_40; }
	inline void set_cubicBezierC_40(WMG_Change_Obj_t2314932812 * value)
	{
		___cubicBezierC_40 = value;
		Il2CppCodeGenWriteBarrier(&___cubicBezierC_40, value);
	}

	inline static int32_t get_offset_of_labelsC_41() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___labelsC_41)); }
	inline WMG_Change_Obj_t2314932812 * get_labelsC_41() const { return ___labelsC_41; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_labelsC_41() { return &___labelsC_41; }
	inline void set_labelsC_41(WMG_Change_Obj_t2314932812 * value)
	{
		___labelsC_41 = value;
		Il2CppCodeGenWriteBarrier(&___labelsC_41, value);
	}

	inline static int32_t get_offset_of_colorsC_42() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___colorsC_42)); }
	inline WMG_Change_Obj_t2314932812 * get_colorsC_42() const { return ___colorsC_42; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_colorsC_42() { return &___colorsC_42; }
	inline void set_colorsC_42(WMG_Change_Obj_t2314932812 * value)
	{
		___colorsC_42 = value;
		Il2CppCodeGenWriteBarrier(&___colorsC_42, value);
	}

	inline static int32_t get_offset_of_fontC_43() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___fontC_43)); }
	inline WMG_Change_Obj_t2314932812 * get_fontC_43() const { return ___fontC_43; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_fontC_43() { return &___fontC_43; }
	inline void set_fontC_43(WMG_Change_Obj_t2314932812 * value)
	{
		___fontC_43 = value;
		Il2CppCodeGenWriteBarrier(&___fontC_43, value);
	}

	inline static int32_t get_offset_of_hasInit_44() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_Graph_t3566287070, ___hasInit_44)); }
	inline bool get_hasInit_44() const { return ___hasInit_44; }
	inline bool* get_address_of_hasInit_44() { return &___hasInit_44; }
	inline void set_hasInit_44(bool value)
	{
		___hasInit_44 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
