#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "AssemblyU2DCSharp_UIPopupList_Position1780870098.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment3620437664.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIPopupList_OpenOn3711353968.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UIPopupList
struct UIPopupList_t109953940;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIAtlas
struct UIAtlas_t1304615221;
// UIFont
struct UIFont_t389944949;
// UnityEngine.Font
struct Font_t4239498691;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UIPanel
struct UIPanel_t1795085332;
// UIBasicSprite
struct UIBasicSprite_t754925213;
// UILabel
struct UILabel_t1795115428;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t1164236560;
// UIPopupList/LegacyEvent
struct LegacyEvent_t3991167770;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPopupList
struct  UIPopupList_t109953940  : public UIWidgetContainer_t701016325
{
public:
	// UIAtlas UIPopupList::atlas
	UIAtlas_t1304615221 * ___atlas_6;
	// UIFont UIPopupList::bitmapFont
	UIFont_t389944949 * ___bitmapFont_7;
	// UnityEngine.Font UIPopupList::trueTypeFont
	Font_t4239498691 * ___trueTypeFont_8;
	// System.Int32 UIPopupList::fontSize
	int32_t ___fontSize_9;
	// UnityEngine.FontStyle UIPopupList::fontStyle
	int32_t ___fontStyle_10;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_11;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_12;
	// UnityEngine.Sprite UIPopupList::background2DSprite
	Sprite_t309593783 * ___background2DSprite_13;
	// UnityEngine.Sprite UIPopupList::highlight2DSprite
	Sprite_t309593783 * ___highlight2DSprite_14;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_15;
	// NGUIText/Alignment UIPopupList::alignment
	int32_t ___alignment_16;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t1398341365 * ___items_17;
	// System.Collections.Generic.List`1<System.Object> UIPopupList::itemData
	List_1_t2058570427 * ___itemData_18;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t2243707579  ___padding_19;
	// UnityEngine.Color UIPopupList::textColor
	Color_t2020392075  ___textColor_20;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t2020392075  ___backgroundColor_21;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t2020392075  ___highlightColor_22;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_23;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_24;
	// System.Boolean UIPopupList::separatePanel
	bool ___separatePanel_25;
	// System.Int32 UIPopupList::overlap
	int32_t ___overlap_26;
	// UIPopupList/OpenOn UIPopupList::openOn
	int32_t ___openOn_27;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t2865430313 * ___onChange_28;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_29;
	// UIPanel UIPopupList::mPanel
	UIPanel_t1795085332 * ___mPanel_30;
	// UIBasicSprite UIPopupList::mBackground
	UIBasicSprite_t754925213 * ___mBackground_31;
	// UIBasicSprite UIPopupList::mHighlight
	UIBasicSprite_t754925213 * ___mHighlight_32;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t1795115428 * ___mHighlightedLabel_33;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t1164236560 * ___mLabelList_34;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_35;
	// UnityEngine.GameObject UIPopupList::mSelection
	GameObject_t1756533147 * ___mSelection_36;
	// System.Int32 UIPopupList::mOpenFrame
	int32_t ___mOpenFrame_37;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t1756533147 * ___eventReceiver_38;
	// System.String UIPopupList::functionName
	String_t* ___functionName_39;
	// System.Single UIPopupList::textScale
	float ___textScale_40;
	// UIFont UIPopupList::font
	UIFont_t389944949 * ___font_41;
	// UILabel UIPopupList::textLabel
	UILabel_t1795115428 * ___textLabel_42;
	// UnityEngine.Vector3 UIPopupList::startingPosition
	Vector3_t2243707580  ___startingPosition_43;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t3991167770 * ___mLegacyEvent_44;
	// System.Boolean UIPopupList::mExecuting
	bool ___mExecuting_45;
	// System.Boolean UIPopupList::mUseDynamicFont
	bool ___mUseDynamicFont_46;
	// System.Boolean UIPopupList::mStarted
	bool ___mStarted_47;
	// System.Boolean UIPopupList::mTweening
	bool ___mTweening_48;
	// UnityEngine.GameObject UIPopupList::source
	GameObject_t1756533147 * ___source_49;

public:
	inline static int32_t get_offset_of_atlas_6() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___atlas_6)); }
	inline UIAtlas_t1304615221 * get_atlas_6() const { return ___atlas_6; }
	inline UIAtlas_t1304615221 ** get_address_of_atlas_6() { return &___atlas_6; }
	inline void set_atlas_6(UIAtlas_t1304615221 * value)
	{
		___atlas_6 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_6, value);
	}

	inline static int32_t get_offset_of_bitmapFont_7() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___bitmapFont_7)); }
	inline UIFont_t389944949 * get_bitmapFont_7() const { return ___bitmapFont_7; }
	inline UIFont_t389944949 ** get_address_of_bitmapFont_7() { return &___bitmapFont_7; }
	inline void set_bitmapFont_7(UIFont_t389944949 * value)
	{
		___bitmapFont_7 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_7, value);
	}

	inline static int32_t get_offset_of_trueTypeFont_8() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___trueTypeFont_8)); }
	inline Font_t4239498691 * get_trueTypeFont_8() const { return ___trueTypeFont_8; }
	inline Font_t4239498691 ** get_address_of_trueTypeFont_8() { return &___trueTypeFont_8; }
	inline void set_trueTypeFont_8(Font_t4239498691 * value)
	{
		___trueTypeFont_8 = value;
		Il2CppCodeGenWriteBarrier(&___trueTypeFont_8, value);
	}

	inline static int32_t get_offset_of_fontSize_9() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___fontSize_9)); }
	inline int32_t get_fontSize_9() const { return ___fontSize_9; }
	inline int32_t* get_address_of_fontSize_9() { return &___fontSize_9; }
	inline void set_fontSize_9(int32_t value)
	{
		___fontSize_9 = value;
	}

	inline static int32_t get_offset_of_fontStyle_10() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___fontStyle_10)); }
	inline int32_t get_fontStyle_10() const { return ___fontStyle_10; }
	inline int32_t* get_address_of_fontStyle_10() { return &___fontStyle_10; }
	inline void set_fontStyle_10(int32_t value)
	{
		___fontStyle_10 = value;
	}

	inline static int32_t get_offset_of_backgroundSprite_11() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundSprite_11)); }
	inline String_t* get_backgroundSprite_11() const { return ___backgroundSprite_11; }
	inline String_t** get_address_of_backgroundSprite_11() { return &___backgroundSprite_11; }
	inline void set_backgroundSprite_11(String_t* value)
	{
		___backgroundSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprite_11, value);
	}

	inline static int32_t get_offset_of_highlightSprite_12() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightSprite_12)); }
	inline String_t* get_highlightSprite_12() const { return ___highlightSprite_12; }
	inline String_t** get_address_of_highlightSprite_12() { return &___highlightSprite_12; }
	inline void set_highlightSprite_12(String_t* value)
	{
		___highlightSprite_12 = value;
		Il2CppCodeGenWriteBarrier(&___highlightSprite_12, value);
	}

	inline static int32_t get_offset_of_background2DSprite_13() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___background2DSprite_13)); }
	inline Sprite_t309593783 * get_background2DSprite_13() const { return ___background2DSprite_13; }
	inline Sprite_t309593783 ** get_address_of_background2DSprite_13() { return &___background2DSprite_13; }
	inline void set_background2DSprite_13(Sprite_t309593783 * value)
	{
		___background2DSprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___background2DSprite_13, value);
	}

	inline static int32_t get_offset_of_highlight2DSprite_14() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlight2DSprite_14)); }
	inline Sprite_t309593783 * get_highlight2DSprite_14() const { return ___highlight2DSprite_14; }
	inline Sprite_t309593783 ** get_address_of_highlight2DSprite_14() { return &___highlight2DSprite_14; }
	inline void set_highlight2DSprite_14(Sprite_t309593783 * value)
	{
		___highlight2DSprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___highlight2DSprite_14, value);
	}

	inline static int32_t get_offset_of_position_15() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___position_15)); }
	inline int32_t get_position_15() const { return ___position_15; }
	inline int32_t* get_address_of_position_15() { return &___position_15; }
	inline void set_position_15(int32_t value)
	{
		___position_15 = value;
	}

	inline static int32_t get_offset_of_alignment_16() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___alignment_16)); }
	inline int32_t get_alignment_16() const { return ___alignment_16; }
	inline int32_t* get_address_of_alignment_16() { return &___alignment_16; }
	inline void set_alignment_16(int32_t value)
	{
		___alignment_16 = value;
	}

	inline static int32_t get_offset_of_items_17() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___items_17)); }
	inline List_1_t1398341365 * get_items_17() const { return ___items_17; }
	inline List_1_t1398341365 ** get_address_of_items_17() { return &___items_17; }
	inline void set_items_17(List_1_t1398341365 * value)
	{
		___items_17 = value;
		Il2CppCodeGenWriteBarrier(&___items_17, value);
	}

	inline static int32_t get_offset_of_itemData_18() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___itemData_18)); }
	inline List_1_t2058570427 * get_itemData_18() const { return ___itemData_18; }
	inline List_1_t2058570427 ** get_address_of_itemData_18() { return &___itemData_18; }
	inline void set_itemData_18(List_1_t2058570427 * value)
	{
		___itemData_18 = value;
		Il2CppCodeGenWriteBarrier(&___itemData_18, value);
	}

	inline static int32_t get_offset_of_padding_19() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___padding_19)); }
	inline Vector2_t2243707579  get_padding_19() const { return ___padding_19; }
	inline Vector2_t2243707579 * get_address_of_padding_19() { return &___padding_19; }
	inline void set_padding_19(Vector2_t2243707579  value)
	{
		___padding_19 = value;
	}

	inline static int32_t get_offset_of_textColor_20() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textColor_20)); }
	inline Color_t2020392075  get_textColor_20() const { return ___textColor_20; }
	inline Color_t2020392075 * get_address_of_textColor_20() { return &___textColor_20; }
	inline void set_textColor_20(Color_t2020392075  value)
	{
		___textColor_20 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_21() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundColor_21)); }
	inline Color_t2020392075  get_backgroundColor_21() const { return ___backgroundColor_21; }
	inline Color_t2020392075 * get_address_of_backgroundColor_21() { return &___backgroundColor_21; }
	inline void set_backgroundColor_21(Color_t2020392075  value)
	{
		___backgroundColor_21 = value;
	}

	inline static int32_t get_offset_of_highlightColor_22() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightColor_22)); }
	inline Color_t2020392075  get_highlightColor_22() const { return ___highlightColor_22; }
	inline Color_t2020392075 * get_address_of_highlightColor_22() { return &___highlightColor_22; }
	inline void set_highlightColor_22(Color_t2020392075  value)
	{
		___highlightColor_22 = value;
	}

	inline static int32_t get_offset_of_isAnimated_23() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isAnimated_23)); }
	inline bool get_isAnimated_23() const { return ___isAnimated_23; }
	inline bool* get_address_of_isAnimated_23() { return &___isAnimated_23; }
	inline void set_isAnimated_23(bool value)
	{
		___isAnimated_23 = value;
	}

	inline static int32_t get_offset_of_isLocalized_24() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isLocalized_24)); }
	inline bool get_isLocalized_24() const { return ___isLocalized_24; }
	inline bool* get_address_of_isLocalized_24() { return &___isLocalized_24; }
	inline void set_isLocalized_24(bool value)
	{
		___isLocalized_24 = value;
	}

	inline static int32_t get_offset_of_separatePanel_25() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___separatePanel_25)); }
	inline bool get_separatePanel_25() const { return ___separatePanel_25; }
	inline bool* get_address_of_separatePanel_25() { return &___separatePanel_25; }
	inline void set_separatePanel_25(bool value)
	{
		___separatePanel_25 = value;
	}

	inline static int32_t get_offset_of_overlap_26() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___overlap_26)); }
	inline int32_t get_overlap_26() const { return ___overlap_26; }
	inline int32_t* get_address_of_overlap_26() { return &___overlap_26; }
	inline void set_overlap_26(int32_t value)
	{
		___overlap_26 = value;
	}

	inline static int32_t get_offset_of_openOn_27() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___openOn_27)); }
	inline int32_t get_openOn_27() const { return ___openOn_27; }
	inline int32_t* get_address_of_openOn_27() { return &___openOn_27; }
	inline void set_openOn_27(int32_t value)
	{
		___openOn_27 = value;
	}

	inline static int32_t get_offset_of_onChange_28() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___onChange_28)); }
	inline List_1_t2865430313 * get_onChange_28() const { return ___onChange_28; }
	inline List_1_t2865430313 ** get_address_of_onChange_28() { return &___onChange_28; }
	inline void set_onChange_28(List_1_t2865430313 * value)
	{
		___onChange_28 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_28, value);
	}

	inline static int32_t get_offset_of_mSelectedItem_29() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mSelectedItem_29)); }
	inline String_t* get_mSelectedItem_29() const { return ___mSelectedItem_29; }
	inline String_t** get_address_of_mSelectedItem_29() { return &___mSelectedItem_29; }
	inline void set_mSelectedItem_29(String_t* value)
	{
		___mSelectedItem_29 = value;
		Il2CppCodeGenWriteBarrier(&___mSelectedItem_29, value);
	}

	inline static int32_t get_offset_of_mPanel_30() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mPanel_30)); }
	inline UIPanel_t1795085332 * get_mPanel_30() const { return ___mPanel_30; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_30() { return &___mPanel_30; }
	inline void set_mPanel_30(UIPanel_t1795085332 * value)
	{
		___mPanel_30 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_30, value);
	}

	inline static int32_t get_offset_of_mBackground_31() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBackground_31)); }
	inline UIBasicSprite_t754925213 * get_mBackground_31() const { return ___mBackground_31; }
	inline UIBasicSprite_t754925213 ** get_address_of_mBackground_31() { return &___mBackground_31; }
	inline void set_mBackground_31(UIBasicSprite_t754925213 * value)
	{
		___mBackground_31 = value;
		Il2CppCodeGenWriteBarrier(&___mBackground_31, value);
	}

	inline static int32_t get_offset_of_mHighlight_32() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlight_32)); }
	inline UIBasicSprite_t754925213 * get_mHighlight_32() const { return ___mHighlight_32; }
	inline UIBasicSprite_t754925213 ** get_address_of_mHighlight_32() { return &___mHighlight_32; }
	inline void set_mHighlight_32(UIBasicSprite_t754925213 * value)
	{
		___mHighlight_32 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_32, value);
	}

	inline static int32_t get_offset_of_mHighlightedLabel_33() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlightedLabel_33)); }
	inline UILabel_t1795115428 * get_mHighlightedLabel_33() const { return ___mHighlightedLabel_33; }
	inline UILabel_t1795115428 ** get_address_of_mHighlightedLabel_33() { return &___mHighlightedLabel_33; }
	inline void set_mHighlightedLabel_33(UILabel_t1795115428 * value)
	{
		___mHighlightedLabel_33 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlightedLabel_33, value);
	}

	inline static int32_t get_offset_of_mLabelList_34() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLabelList_34)); }
	inline List_1_t1164236560 * get_mLabelList_34() const { return ___mLabelList_34; }
	inline List_1_t1164236560 ** get_address_of_mLabelList_34() { return &___mLabelList_34; }
	inline void set_mLabelList_34(List_1_t1164236560 * value)
	{
		___mLabelList_34 = value;
		Il2CppCodeGenWriteBarrier(&___mLabelList_34, value);
	}

	inline static int32_t get_offset_of_mBgBorder_35() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBgBorder_35)); }
	inline float get_mBgBorder_35() const { return ___mBgBorder_35; }
	inline float* get_address_of_mBgBorder_35() { return &___mBgBorder_35; }
	inline void set_mBgBorder_35(float value)
	{
		___mBgBorder_35 = value;
	}

	inline static int32_t get_offset_of_mSelection_36() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mSelection_36)); }
	inline GameObject_t1756533147 * get_mSelection_36() const { return ___mSelection_36; }
	inline GameObject_t1756533147 ** get_address_of_mSelection_36() { return &___mSelection_36; }
	inline void set_mSelection_36(GameObject_t1756533147 * value)
	{
		___mSelection_36 = value;
		Il2CppCodeGenWriteBarrier(&___mSelection_36, value);
	}

	inline static int32_t get_offset_of_mOpenFrame_37() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mOpenFrame_37)); }
	inline int32_t get_mOpenFrame_37() const { return ___mOpenFrame_37; }
	inline int32_t* get_address_of_mOpenFrame_37() { return &___mOpenFrame_37; }
	inline void set_mOpenFrame_37(int32_t value)
	{
		___mOpenFrame_37 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_38() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___eventReceiver_38)); }
	inline GameObject_t1756533147 * get_eventReceiver_38() const { return ___eventReceiver_38; }
	inline GameObject_t1756533147 ** get_address_of_eventReceiver_38() { return &___eventReceiver_38; }
	inline void set_eventReceiver_38(GameObject_t1756533147 * value)
	{
		___eventReceiver_38 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_38, value);
	}

	inline static int32_t get_offset_of_functionName_39() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___functionName_39)); }
	inline String_t* get_functionName_39() const { return ___functionName_39; }
	inline String_t** get_address_of_functionName_39() { return &___functionName_39; }
	inline void set_functionName_39(String_t* value)
	{
		___functionName_39 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_39, value);
	}

	inline static int32_t get_offset_of_textScale_40() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textScale_40)); }
	inline float get_textScale_40() const { return ___textScale_40; }
	inline float* get_address_of_textScale_40() { return &___textScale_40; }
	inline void set_textScale_40(float value)
	{
		___textScale_40 = value;
	}

	inline static int32_t get_offset_of_font_41() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___font_41)); }
	inline UIFont_t389944949 * get_font_41() const { return ___font_41; }
	inline UIFont_t389944949 ** get_address_of_font_41() { return &___font_41; }
	inline void set_font_41(UIFont_t389944949 * value)
	{
		___font_41 = value;
		Il2CppCodeGenWriteBarrier(&___font_41, value);
	}

	inline static int32_t get_offset_of_textLabel_42() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textLabel_42)); }
	inline UILabel_t1795115428 * get_textLabel_42() const { return ___textLabel_42; }
	inline UILabel_t1795115428 ** get_address_of_textLabel_42() { return &___textLabel_42; }
	inline void set_textLabel_42(UILabel_t1795115428 * value)
	{
		___textLabel_42 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_42, value);
	}

	inline static int32_t get_offset_of_startingPosition_43() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___startingPosition_43)); }
	inline Vector3_t2243707580  get_startingPosition_43() const { return ___startingPosition_43; }
	inline Vector3_t2243707580 * get_address_of_startingPosition_43() { return &___startingPosition_43; }
	inline void set_startingPosition_43(Vector3_t2243707580  value)
	{
		___startingPosition_43 = value;
	}

	inline static int32_t get_offset_of_mLegacyEvent_44() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLegacyEvent_44)); }
	inline LegacyEvent_t3991167770 * get_mLegacyEvent_44() const { return ___mLegacyEvent_44; }
	inline LegacyEvent_t3991167770 ** get_address_of_mLegacyEvent_44() { return &___mLegacyEvent_44; }
	inline void set_mLegacyEvent_44(LegacyEvent_t3991167770 * value)
	{
		___mLegacyEvent_44 = value;
		Il2CppCodeGenWriteBarrier(&___mLegacyEvent_44, value);
	}

	inline static int32_t get_offset_of_mExecuting_45() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mExecuting_45)); }
	inline bool get_mExecuting_45() const { return ___mExecuting_45; }
	inline bool* get_address_of_mExecuting_45() { return &___mExecuting_45; }
	inline void set_mExecuting_45(bool value)
	{
		___mExecuting_45 = value;
	}

	inline static int32_t get_offset_of_mUseDynamicFont_46() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mUseDynamicFont_46)); }
	inline bool get_mUseDynamicFont_46() const { return ___mUseDynamicFont_46; }
	inline bool* get_address_of_mUseDynamicFont_46() { return &___mUseDynamicFont_46; }
	inline void set_mUseDynamicFont_46(bool value)
	{
		___mUseDynamicFont_46 = value;
	}

	inline static int32_t get_offset_of_mStarted_47() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mStarted_47)); }
	inline bool get_mStarted_47() const { return ___mStarted_47; }
	inline bool* get_address_of_mStarted_47() { return &___mStarted_47; }
	inline void set_mStarted_47(bool value)
	{
		___mStarted_47 = value;
	}

	inline static int32_t get_offset_of_mTweening_48() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mTweening_48)); }
	inline bool get_mTweening_48() const { return ___mTweening_48; }
	inline bool* get_address_of_mTweening_48() { return &___mTweening_48; }
	inline void set_mTweening_48(bool value)
	{
		___mTweening_48 = value;
	}

	inline static int32_t get_offset_of_source_49() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___source_49)); }
	inline GameObject_t1756533147 * get_source_49() const { return ___source_49; }
	inline GameObject_t1756533147 ** get_address_of_source_49() { return &___source_49; }
	inline void set_source_49(GameObject_t1756533147 * value)
	{
		___source_49 = value;
		Il2CppCodeGenWriteBarrier(&___source_49, value);
	}
};

struct UIPopupList_t109953940_StaticFields
{
public:
	// UIPopupList UIPopupList::current
	UIPopupList_t109953940 * ___current_2;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t1756533147 * ___mChild_3;
	// System.Single UIPopupList::mFadeOutComplete
	float ___mFadeOutComplete_4;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940_StaticFields, ___current_2)); }
	inline UIPopupList_t109953940 * get_current_2() const { return ___current_2; }
	inline UIPopupList_t109953940 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIPopupList_t109953940 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}

	inline static int32_t get_offset_of_mChild_3() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940_StaticFields, ___mChild_3)); }
	inline GameObject_t1756533147 * get_mChild_3() const { return ___mChild_3; }
	inline GameObject_t1756533147 ** get_address_of_mChild_3() { return &___mChild_3; }
	inline void set_mChild_3(GameObject_t1756533147 * value)
	{
		___mChild_3 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_3, value);
	}

	inline static int32_t get_offset_of_mFadeOutComplete_4() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940_StaticFields, ___mFadeOutComplete_4)); }
	inline float get_mFadeOutComplete_4() const { return ___mFadeOutComplete_4; }
	inline float* get_address_of_mFadeOutComplete_4() { return &___mFadeOutComplete_4; }
	inline void set_mFadeOutComplete_4(float value)
	{
		___mFadeOutComplete_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
