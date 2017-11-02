#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoader
struct  SceneLoader_t1952549817  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.String> SceneLoader::sceneNames
	List_1_t1398341365 * ___sceneNames_5;
	// UnityEngine.UI.Text SceneLoader::title
	Text_t356221433 * ___title_6;
	// UnityEngine.UI.Text SceneLoader::description
	Text_t356221433 * ___description_7;
	// UnityEngine.UI.Dropdown SceneLoader::dropdown
	Dropdown_t1985816271 * ___dropdown_8;
	// UnityEngine.UI.Button SceneLoader::previous
	Button_t2872111280 * ___previous_9;
	// UnityEngine.UI.Button SceneLoader::next
	Button_t2872111280 * ___next_10;

public:
	inline static int32_t get_offset_of_sceneNames_5() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817, ___sceneNames_5)); }
	inline List_1_t1398341365 * get_sceneNames_5() const { return ___sceneNames_5; }
	inline List_1_t1398341365 ** get_address_of_sceneNames_5() { return &___sceneNames_5; }
	inline void set_sceneNames_5(List_1_t1398341365 * value)
	{
		___sceneNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNames_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817, ___title_6)); }
	inline Text_t356221433 * get_title_6() const { return ___title_6; }
	inline Text_t356221433 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Text_t356221433 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817, ___description_7)); }
	inline Text_t356221433 * get_description_7() const { return ___description_7; }
	inline Text_t356221433 ** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(Text_t356221433 * value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier(&___description_7, value);
	}

	inline static int32_t get_offset_of_dropdown_8() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817, ___dropdown_8)); }
	inline Dropdown_t1985816271 * get_dropdown_8() const { return ___dropdown_8; }
	inline Dropdown_t1985816271 ** get_address_of_dropdown_8() { return &___dropdown_8; }
	inline void set_dropdown_8(Dropdown_t1985816271 * value)
	{
		___dropdown_8 = value;
		Il2CppCodeGenWriteBarrier(&___dropdown_8, value);
	}

	inline static int32_t get_offset_of_previous_9() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817, ___previous_9)); }
	inline Button_t2872111280 * get_previous_9() const { return ___previous_9; }
	inline Button_t2872111280 ** get_address_of_previous_9() { return &___previous_9; }
	inline void set_previous_9(Button_t2872111280 * value)
	{
		___previous_9 = value;
		Il2CppCodeGenWriteBarrier(&___previous_9, value);
	}

	inline static int32_t get_offset_of_next_10() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817, ___next_10)); }
	inline Button_t2872111280 * get_next_10() const { return ___next_10; }
	inline Button_t2872111280 ** get_address_of_next_10() { return &___next_10; }
	inline void set_next_10(Button_t2872111280 * value)
	{
		___next_10 = value;
		Il2CppCodeGenWriteBarrier(&___next_10, value);
	}
};

struct SceneLoader_t1952549817_StaticFields
{
public:
	// System.String SceneLoader::descriptionDefault
	String_t* ___descriptionDefault_2;
	// System.String SceneLoader::descriptionConstant
	String_t* ___descriptionConstant_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SceneLoader::descriptions
	Dictionary_2_t3943999495 * ___descriptions_4;

public:
	inline static int32_t get_offset_of_descriptionDefault_2() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817_StaticFields, ___descriptionDefault_2)); }
	inline String_t* get_descriptionDefault_2() const { return ___descriptionDefault_2; }
	inline String_t** get_address_of_descriptionDefault_2() { return &___descriptionDefault_2; }
	inline void set_descriptionDefault_2(String_t* value)
	{
		___descriptionDefault_2 = value;
		Il2CppCodeGenWriteBarrier(&___descriptionDefault_2, value);
	}

	inline static int32_t get_offset_of_descriptionConstant_3() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817_StaticFields, ___descriptionConstant_3)); }
	inline String_t* get_descriptionConstant_3() const { return ___descriptionConstant_3; }
	inline String_t** get_address_of_descriptionConstant_3() { return &___descriptionConstant_3; }
	inline void set_descriptionConstant_3(String_t* value)
	{
		___descriptionConstant_3 = value;
		Il2CppCodeGenWriteBarrier(&___descriptionConstant_3, value);
	}

	inline static int32_t get_offset_of_descriptions_4() { return static_cast<int32_t>(offsetof(SceneLoader_t1952549817_StaticFields, ___descriptions_4)); }
	inline Dictionary_2_t3943999495 * get_descriptions_4() const { return ___descriptions_4; }
	inline Dictionary_2_t3943999495 ** get_address_of_descriptions_4() { return &___descriptions_4; }
	inline void set_descriptions_4(Dictionary_2_t3943999495 * value)
	{
		___descriptions_4 = value;
		Il2CppCodeGenWriteBarrier(&___descriptions_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
