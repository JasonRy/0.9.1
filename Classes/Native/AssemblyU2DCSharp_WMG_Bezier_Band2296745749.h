#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_GUI_Functions3530287521.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// WMG_Bezier_Band_Graph
struct WMG_Bezier_Band_Graph_t3566287070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Bezier_Band
struct  WMG_Bezier_Band_t2296745749  : public WMG_GUI_Functions_t3530287521
{
public:
	// UnityEngine.GameObject WMG_Bezier_Band::bandFillSpriteGO
	GameObject_t1756533147 * ___bandFillSpriteGO_2;
	// UnityEngine.GameObject WMG_Bezier_Band::bandLineSpriteGO
	GameObject_t1756533147 * ___bandLineSpriteGO_3;
	// UnityEngine.GameObject WMG_Bezier_Band::labelParent
	GameObject_t1756533147 * ___labelParent_4;
	// UnityEngine.GameObject WMG_Bezier_Band::percentLabel
	GameObject_t1756533147 * ___percentLabel_5;
	// UnityEngine.GameObject WMG_Bezier_Band::label
	GameObject_t1756533147 * ___label_6;
	// UnityEngine.Sprite WMG_Bezier_Band::bandFillSprite
	Sprite_t309593783 * ___bandFillSprite_7;
	// UnityEngine.Sprite WMG_Bezier_Band::bandLineSprite
	Sprite_t309593783 * ___bandLineSprite_8;
	// UnityEngine.Material WMG_Bezier_Band::bandFillMat
	Material_t193706927 * ___bandFillMat_9;
	// UnityEngine.Material WMG_Bezier_Band::bandLineMat
	Material_t193706927 * ___bandLineMat_10;
	// UnityEngine.Color[] WMG_Bezier_Band::bandFillColors
	ColorU5BU5D_t672350442* ___bandFillColors_11;
	// UnityEngine.Color[] WMG_Bezier_Band::bandLineColors
	ColorU5BU5D_t672350442* ___bandLineColors_12;
	// System.Int32 WMG_Bezier_Band::texSize
	int32_t ___texSize_13;
	// WMG_Bezier_Band_Graph WMG_Bezier_Band::graph
	WMG_Bezier_Band_Graph_t3566287070 * ___graph_14;
	// System.Single WMG_Bezier_Band::cumulativePercent
	float ___cumulativePercent_15;
	// System.Single WMG_Bezier_Band::prevCumulativePercent
	float ___prevCumulativePercent_16;
	// System.Int32 WMG_Bezier_Band::superSamplingRate
	int32_t ___superSamplingRate_17;
	// System.Int32 WMG_Bezier_Band::xPad
	int32_t ___xPad_18;

public:
	inline static int32_t get_offset_of_bandFillSpriteGO_2() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandFillSpriteGO_2)); }
	inline GameObject_t1756533147 * get_bandFillSpriteGO_2() const { return ___bandFillSpriteGO_2; }
	inline GameObject_t1756533147 ** get_address_of_bandFillSpriteGO_2() { return &___bandFillSpriteGO_2; }
	inline void set_bandFillSpriteGO_2(GameObject_t1756533147 * value)
	{
		___bandFillSpriteGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___bandFillSpriteGO_2, value);
	}

	inline static int32_t get_offset_of_bandLineSpriteGO_3() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandLineSpriteGO_3)); }
	inline GameObject_t1756533147 * get_bandLineSpriteGO_3() const { return ___bandLineSpriteGO_3; }
	inline GameObject_t1756533147 ** get_address_of_bandLineSpriteGO_3() { return &___bandLineSpriteGO_3; }
	inline void set_bandLineSpriteGO_3(GameObject_t1756533147 * value)
	{
		___bandLineSpriteGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___bandLineSpriteGO_3, value);
	}

	inline static int32_t get_offset_of_labelParent_4() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___labelParent_4)); }
	inline GameObject_t1756533147 * get_labelParent_4() const { return ___labelParent_4; }
	inline GameObject_t1756533147 ** get_address_of_labelParent_4() { return &___labelParent_4; }
	inline void set_labelParent_4(GameObject_t1756533147 * value)
	{
		___labelParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___labelParent_4, value);
	}

	inline static int32_t get_offset_of_percentLabel_5() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___percentLabel_5)); }
	inline GameObject_t1756533147 * get_percentLabel_5() const { return ___percentLabel_5; }
	inline GameObject_t1756533147 ** get_address_of_percentLabel_5() { return &___percentLabel_5; }
	inline void set_percentLabel_5(GameObject_t1756533147 * value)
	{
		___percentLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___percentLabel_5, value);
	}

	inline static int32_t get_offset_of_label_6() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___label_6)); }
	inline GameObject_t1756533147 * get_label_6() const { return ___label_6; }
	inline GameObject_t1756533147 ** get_address_of_label_6() { return &___label_6; }
	inline void set_label_6(GameObject_t1756533147 * value)
	{
		___label_6 = value;
		Il2CppCodeGenWriteBarrier(&___label_6, value);
	}

	inline static int32_t get_offset_of_bandFillSprite_7() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandFillSprite_7)); }
	inline Sprite_t309593783 * get_bandFillSprite_7() const { return ___bandFillSprite_7; }
	inline Sprite_t309593783 ** get_address_of_bandFillSprite_7() { return &___bandFillSprite_7; }
	inline void set_bandFillSprite_7(Sprite_t309593783 * value)
	{
		___bandFillSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___bandFillSprite_7, value);
	}

	inline static int32_t get_offset_of_bandLineSprite_8() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandLineSprite_8)); }
	inline Sprite_t309593783 * get_bandLineSprite_8() const { return ___bandLineSprite_8; }
	inline Sprite_t309593783 ** get_address_of_bandLineSprite_8() { return &___bandLineSprite_8; }
	inline void set_bandLineSprite_8(Sprite_t309593783 * value)
	{
		___bandLineSprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___bandLineSprite_8, value);
	}

	inline static int32_t get_offset_of_bandFillMat_9() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandFillMat_9)); }
	inline Material_t193706927 * get_bandFillMat_9() const { return ___bandFillMat_9; }
	inline Material_t193706927 ** get_address_of_bandFillMat_9() { return &___bandFillMat_9; }
	inline void set_bandFillMat_9(Material_t193706927 * value)
	{
		___bandFillMat_9 = value;
		Il2CppCodeGenWriteBarrier(&___bandFillMat_9, value);
	}

	inline static int32_t get_offset_of_bandLineMat_10() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandLineMat_10)); }
	inline Material_t193706927 * get_bandLineMat_10() const { return ___bandLineMat_10; }
	inline Material_t193706927 ** get_address_of_bandLineMat_10() { return &___bandLineMat_10; }
	inline void set_bandLineMat_10(Material_t193706927 * value)
	{
		___bandLineMat_10 = value;
		Il2CppCodeGenWriteBarrier(&___bandLineMat_10, value);
	}

	inline static int32_t get_offset_of_bandFillColors_11() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandFillColors_11)); }
	inline ColorU5BU5D_t672350442* get_bandFillColors_11() const { return ___bandFillColors_11; }
	inline ColorU5BU5D_t672350442** get_address_of_bandFillColors_11() { return &___bandFillColors_11; }
	inline void set_bandFillColors_11(ColorU5BU5D_t672350442* value)
	{
		___bandFillColors_11 = value;
		Il2CppCodeGenWriteBarrier(&___bandFillColors_11, value);
	}

	inline static int32_t get_offset_of_bandLineColors_12() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___bandLineColors_12)); }
	inline ColorU5BU5D_t672350442* get_bandLineColors_12() const { return ___bandLineColors_12; }
	inline ColorU5BU5D_t672350442** get_address_of_bandLineColors_12() { return &___bandLineColors_12; }
	inline void set_bandLineColors_12(ColorU5BU5D_t672350442* value)
	{
		___bandLineColors_12 = value;
		Il2CppCodeGenWriteBarrier(&___bandLineColors_12, value);
	}

	inline static int32_t get_offset_of_texSize_13() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___texSize_13)); }
	inline int32_t get_texSize_13() const { return ___texSize_13; }
	inline int32_t* get_address_of_texSize_13() { return &___texSize_13; }
	inline void set_texSize_13(int32_t value)
	{
		___texSize_13 = value;
	}

	inline static int32_t get_offset_of_graph_14() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___graph_14)); }
	inline WMG_Bezier_Band_Graph_t3566287070 * get_graph_14() const { return ___graph_14; }
	inline WMG_Bezier_Band_Graph_t3566287070 ** get_address_of_graph_14() { return &___graph_14; }
	inline void set_graph_14(WMG_Bezier_Band_Graph_t3566287070 * value)
	{
		___graph_14 = value;
		Il2CppCodeGenWriteBarrier(&___graph_14, value);
	}

	inline static int32_t get_offset_of_cumulativePercent_15() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___cumulativePercent_15)); }
	inline float get_cumulativePercent_15() const { return ___cumulativePercent_15; }
	inline float* get_address_of_cumulativePercent_15() { return &___cumulativePercent_15; }
	inline void set_cumulativePercent_15(float value)
	{
		___cumulativePercent_15 = value;
	}

	inline static int32_t get_offset_of_prevCumulativePercent_16() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___prevCumulativePercent_16)); }
	inline float get_prevCumulativePercent_16() const { return ___prevCumulativePercent_16; }
	inline float* get_address_of_prevCumulativePercent_16() { return &___prevCumulativePercent_16; }
	inline void set_prevCumulativePercent_16(float value)
	{
		___prevCumulativePercent_16 = value;
	}

	inline static int32_t get_offset_of_superSamplingRate_17() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___superSamplingRate_17)); }
	inline int32_t get_superSamplingRate_17() const { return ___superSamplingRate_17; }
	inline int32_t* get_address_of_superSamplingRate_17() { return &___superSamplingRate_17; }
	inline void set_superSamplingRate_17(int32_t value)
	{
		___superSamplingRate_17 = value;
	}

	inline static int32_t get_offset_of_xPad_18() { return static_cast<int32_t>(offsetof(WMG_Bezier_Band_t2296745749, ___xPad_18)); }
	inline int32_t get_xPad_18() const { return ___xPad_18; }
	inline int32_t* get_address_of_xPad_18() { return &___xPad_18; }
	inline void set_xPad_18(int32_t value)
	{
		___xPad_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
