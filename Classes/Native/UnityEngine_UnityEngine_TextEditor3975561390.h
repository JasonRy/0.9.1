#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappin1119726228.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t3975561390  : public Il2CppObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t601950206 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t1799908754 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_6;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t2243707579  ___scrollOffset_7;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t4210063000 * ___m_Content_8;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_9;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_10;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_11;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_12;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_13;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_14;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_15;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_16;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t601950206 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t601950206 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardOnScreen_0, value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___style_2)); }
	inline GUIStyle_t1799908754 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t1799908754 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t1799908754 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier(&___style_2, value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_m_HasFocus_6() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_HasFocus_6)); }
	inline bool get_m_HasFocus_6() const { return ___m_HasFocus_6; }
	inline bool* get_address_of_m_HasFocus_6() { return &___m_HasFocus_6; }
	inline void set_m_HasFocus_6(bool value)
	{
		___m_HasFocus_6 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_7() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___scrollOffset_7)); }
	inline Vector2_t2243707579  get_scrollOffset_7() const { return ___scrollOffset_7; }
	inline Vector2_t2243707579 * get_address_of_scrollOffset_7() { return &___scrollOffset_7; }
	inline void set_scrollOffset_7(Vector2_t2243707579  value)
	{
		___scrollOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_Content_8() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_Content_8)); }
	inline GUIContent_t4210063000 * get_m_Content_8() const { return ___m_Content_8; }
	inline GUIContent_t4210063000 ** get_address_of_m_Content_8() { return &___m_Content_8; }
	inline void set_m_Content_8(GUIContent_t4210063000 * value)
	{
		___m_Content_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_8, value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_CursorIndex_9)); }
	inline int32_t get_m_CursorIndex_9() const { return ___m_CursorIndex_9; }
	inline int32_t* get_address_of_m_CursorIndex_9() { return &___m_CursorIndex_9; }
	inline void set_m_CursorIndex_9(int32_t value)
	{
		___m_CursorIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_10() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_SelectIndex_10)); }
	inline int32_t get_m_SelectIndex_10() const { return ___m_SelectIndex_10; }
	inline int32_t* get_address_of_m_SelectIndex_10() { return &___m_SelectIndex_10; }
	inline void set_m_SelectIndex_10(int32_t value)
	{
		___m_SelectIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_11() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_RevealCursor_11)); }
	inline bool get_m_RevealCursor_11() const { return ___m_RevealCursor_11; }
	inline bool* get_address_of_m_RevealCursor_11() { return &___m_RevealCursor_11; }
	inline void set_m_RevealCursor_11(bool value)
	{
		___m_RevealCursor_11 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_12() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_MouseDragSelectsWholeWords_12)); }
	inline bool get_m_MouseDragSelectsWholeWords_12() const { return ___m_MouseDragSelectsWholeWords_12; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_12() { return &___m_MouseDragSelectsWholeWords_12; }
	inline void set_m_MouseDragSelectsWholeWords_12(bool value)
	{
		___m_MouseDragSelectsWholeWords_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_13() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_DblClickInitPos_13)); }
	inline int32_t get_m_DblClickInitPos_13() const { return ___m_DblClickInitPos_13; }
	inline int32_t* get_address_of_m_DblClickInitPos_13() { return &___m_DblClickInitPos_13; }
	inline void set_m_DblClickInitPos_13(int32_t value)
	{
		___m_DblClickInitPos_13 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_14() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_DblClickSnap_14)); }
	inline uint8_t get_m_DblClickSnap_14() const { return ___m_DblClickSnap_14; }
	inline uint8_t* get_address_of_m_DblClickSnap_14() { return &___m_DblClickSnap_14; }
	inline void set_m_DblClickSnap_14(uint8_t value)
	{
		___m_DblClickSnap_14 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_15() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_bJustSelected_15)); }
	inline bool get_m_bJustSelected_15() const { return ___m_bJustSelected_15; }
	inline bool* get_address_of_m_bJustSelected_15() { return &___m_bJustSelected_15; }
	inline void set_m_bJustSelected_15(bool value)
	{
		___m_bJustSelected_15 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_16() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_iAltCursorPos_16)); }
	inline int32_t get_m_iAltCursorPos_16() const { return ___m_iAltCursorPos_16; }
	inline int32_t* get_address_of_m_iAltCursorPos_16() { return &___m_iAltCursorPos_16; }
	inline void set_m_iAltCursorPos_16(int32_t value)
	{
		___m_iAltCursorPos_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
