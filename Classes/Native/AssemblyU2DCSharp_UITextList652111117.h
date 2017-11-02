﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UITextList_Style3198392425.h"

// UILabel
struct UILabel_t1795115428;
// UIProgressBar
struct UIProgressBar_t3824507790;
// System.Char[]
struct CharU5BU5D_t1328083999;
// BetterList`1<UITextList/Paragraph>
struct BetterList_1_t2807483702;
// System.Collections.Generic.Dictionary`2<System.String,BetterList`1<UITextList/Paragraph>>
struct Dictionary_2_t427295668;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITextList
struct  UITextList_t652111117  : public MonoBehaviour_t1158329972
{
public:
	// UILabel UITextList::textLabel
	UILabel_t1795115428 * ___textLabel_2;
	// UIProgressBar UITextList::scrollBar
	UIProgressBar_t3824507790 * ___scrollBar_3;
	// UITextList/Style UITextList::style
	int32_t ___style_4;
	// System.Int32 UITextList::paragraphHistory
	int32_t ___paragraphHistory_5;
	// System.Char[] UITextList::mSeparator
	CharU5BU5D_t1328083999* ___mSeparator_6;
	// System.Single UITextList::mScroll
	float ___mScroll_7;
	// System.Int32 UITextList::mTotalLines
	int32_t ___mTotalLines_8;
	// System.Int32 UITextList::mLastWidth
	int32_t ___mLastWidth_9;
	// System.Int32 UITextList::mLastHeight
	int32_t ___mLastHeight_10;
	// BetterList`1<UITextList/Paragraph> UITextList::mParagraphs
	BetterList_1_t2807483702 * ___mParagraphs_11;

public:
	inline static int32_t get_offset_of_textLabel_2() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___textLabel_2)); }
	inline UILabel_t1795115428 * get_textLabel_2() const { return ___textLabel_2; }
	inline UILabel_t1795115428 ** get_address_of_textLabel_2() { return &___textLabel_2; }
	inline void set_textLabel_2(UILabel_t1795115428 * value)
	{
		___textLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_2, value);
	}

	inline static int32_t get_offset_of_scrollBar_3() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___scrollBar_3)); }
	inline UIProgressBar_t3824507790 * get_scrollBar_3() const { return ___scrollBar_3; }
	inline UIProgressBar_t3824507790 ** get_address_of_scrollBar_3() { return &___scrollBar_3; }
	inline void set_scrollBar_3(UIProgressBar_t3824507790 * value)
	{
		___scrollBar_3 = value;
		Il2CppCodeGenWriteBarrier(&___scrollBar_3, value);
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___style_4)); }
	inline int32_t get_style_4() const { return ___style_4; }
	inline int32_t* get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(int32_t value)
	{
		___style_4 = value;
	}

	inline static int32_t get_offset_of_paragraphHistory_5() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___paragraphHistory_5)); }
	inline int32_t get_paragraphHistory_5() const { return ___paragraphHistory_5; }
	inline int32_t* get_address_of_paragraphHistory_5() { return &___paragraphHistory_5; }
	inline void set_paragraphHistory_5(int32_t value)
	{
		___paragraphHistory_5 = value;
	}

	inline static int32_t get_offset_of_mSeparator_6() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mSeparator_6)); }
	inline CharU5BU5D_t1328083999* get_mSeparator_6() const { return ___mSeparator_6; }
	inline CharU5BU5D_t1328083999** get_address_of_mSeparator_6() { return &___mSeparator_6; }
	inline void set_mSeparator_6(CharU5BU5D_t1328083999* value)
	{
		___mSeparator_6 = value;
		Il2CppCodeGenWriteBarrier(&___mSeparator_6, value);
	}

	inline static int32_t get_offset_of_mScroll_7() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mScroll_7)); }
	inline float get_mScroll_7() const { return ___mScroll_7; }
	inline float* get_address_of_mScroll_7() { return &___mScroll_7; }
	inline void set_mScroll_7(float value)
	{
		___mScroll_7 = value;
	}

	inline static int32_t get_offset_of_mTotalLines_8() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mTotalLines_8)); }
	inline int32_t get_mTotalLines_8() const { return ___mTotalLines_8; }
	inline int32_t* get_address_of_mTotalLines_8() { return &___mTotalLines_8; }
	inline void set_mTotalLines_8(int32_t value)
	{
		___mTotalLines_8 = value;
	}

	inline static int32_t get_offset_of_mLastWidth_9() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mLastWidth_9)); }
	inline int32_t get_mLastWidth_9() const { return ___mLastWidth_9; }
	inline int32_t* get_address_of_mLastWidth_9() { return &___mLastWidth_9; }
	inline void set_mLastWidth_9(int32_t value)
	{
		___mLastWidth_9 = value;
	}

	inline static int32_t get_offset_of_mLastHeight_10() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mLastHeight_10)); }
	inline int32_t get_mLastHeight_10() const { return ___mLastHeight_10; }
	inline int32_t* get_address_of_mLastHeight_10() { return &___mLastHeight_10; }
	inline void set_mLastHeight_10(int32_t value)
	{
		___mLastHeight_10 = value;
	}

	inline static int32_t get_offset_of_mParagraphs_11() { return static_cast<int32_t>(offsetof(UITextList_t652111117, ___mParagraphs_11)); }
	inline BetterList_1_t2807483702 * get_mParagraphs_11() const { return ___mParagraphs_11; }
	inline BetterList_1_t2807483702 ** get_address_of_mParagraphs_11() { return &___mParagraphs_11; }
	inline void set_mParagraphs_11(BetterList_1_t2807483702 * value)
	{
		___mParagraphs_11 = value;
		Il2CppCodeGenWriteBarrier(&___mParagraphs_11, value);
	}
};

struct UITextList_t652111117_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,BetterList`1<UITextList/Paragraph>> UITextList::mHistory
	Dictionary_2_t427295668 * ___mHistory_12;

public:
	inline static int32_t get_offset_of_mHistory_12() { return static_cast<int32_t>(offsetof(UITextList_t652111117_StaticFields, ___mHistory_12)); }
	inline Dictionary_2_t427295668 * get_mHistory_12() const { return ___mHistory_12; }
	inline Dictionary_2_t427295668 ** get_address_of_mHistory_12() { return &___mHistory_12; }
	inline void set_mHistory_12(Dictionary_2_t427295668 * value)
	{
		___mHistory_12 = value;
		Il2CppCodeGenWriteBarrier(&___mHistory_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
