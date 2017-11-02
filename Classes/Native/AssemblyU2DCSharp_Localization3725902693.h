#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Localization/LoadFunction
struct LoadFunction_t1013268478;
// Localization/OnLocalizeNotification
struct OnLocalizeNotification_t3819587589;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t3557165234;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Localization
struct  Localization_t3725902693  : public Il2CppObject
{
public:

public:
};

struct Localization_t3725902693_StaticFields
{
public:
	// Localization/LoadFunction Localization::loadFunction
	LoadFunction_t1013268478 * ___loadFunction_0;
	// Localization/OnLocalizeNotification Localization::onLocalize
	OnLocalizeNotification_t3819587589 * ___onLocalize_1;
	// System.Boolean Localization::localizationHasBeenSet
	bool ___localizationHasBeenSet_2;
	// System.String[] Localization::mLanguages
	StringU5BU5D_t1642385972* ___mLanguages_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mOldDictionary
	Dictionary_2_t3943999495 * ___mOldDictionary_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::mDictionary
	Dictionary_2_t3557165234 * ___mDictionary_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mReplacement
	Dictionary_2_t3943999495 * ___mReplacement_6;
	// System.Int32 Localization::mLanguageIndex
	int32_t ___mLanguageIndex_7;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_8;
	// System.Boolean Localization::mMerging
	bool ___mMerging_9;

public:
	inline static int32_t get_offset_of_loadFunction_0() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___loadFunction_0)); }
	inline LoadFunction_t1013268478 * get_loadFunction_0() const { return ___loadFunction_0; }
	inline LoadFunction_t1013268478 ** get_address_of_loadFunction_0() { return &___loadFunction_0; }
	inline void set_loadFunction_0(LoadFunction_t1013268478 * value)
	{
		___loadFunction_0 = value;
		Il2CppCodeGenWriteBarrier(&___loadFunction_0, value);
	}

	inline static int32_t get_offset_of_onLocalize_1() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___onLocalize_1)); }
	inline OnLocalizeNotification_t3819587589 * get_onLocalize_1() const { return ___onLocalize_1; }
	inline OnLocalizeNotification_t3819587589 ** get_address_of_onLocalize_1() { return &___onLocalize_1; }
	inline void set_onLocalize_1(OnLocalizeNotification_t3819587589 * value)
	{
		___onLocalize_1 = value;
		Il2CppCodeGenWriteBarrier(&___onLocalize_1, value);
	}

	inline static int32_t get_offset_of_localizationHasBeenSet_2() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___localizationHasBeenSet_2)); }
	inline bool get_localizationHasBeenSet_2() const { return ___localizationHasBeenSet_2; }
	inline bool* get_address_of_localizationHasBeenSet_2() { return &___localizationHasBeenSet_2; }
	inline void set_localizationHasBeenSet_2(bool value)
	{
		___localizationHasBeenSet_2 = value;
	}

	inline static int32_t get_offset_of_mLanguages_3() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguages_3)); }
	inline StringU5BU5D_t1642385972* get_mLanguages_3() const { return ___mLanguages_3; }
	inline StringU5BU5D_t1642385972** get_address_of_mLanguages_3() { return &___mLanguages_3; }
	inline void set_mLanguages_3(StringU5BU5D_t1642385972* value)
	{
		___mLanguages_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguages_3, value);
	}

	inline static int32_t get_offset_of_mOldDictionary_4() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mOldDictionary_4)); }
	inline Dictionary_2_t3943999495 * get_mOldDictionary_4() const { return ___mOldDictionary_4; }
	inline Dictionary_2_t3943999495 ** get_address_of_mOldDictionary_4() { return &___mOldDictionary_4; }
	inline void set_mOldDictionary_4(Dictionary_2_t3943999495 * value)
	{
		___mOldDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOldDictionary_4, value);
	}

	inline static int32_t get_offset_of_mDictionary_5() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mDictionary_5)); }
	inline Dictionary_2_t3557165234 * get_mDictionary_5() const { return ___mDictionary_5; }
	inline Dictionary_2_t3557165234 ** get_address_of_mDictionary_5() { return &___mDictionary_5; }
	inline void set_mDictionary_5(Dictionary_2_t3557165234 * value)
	{
		___mDictionary_5 = value;
		Il2CppCodeGenWriteBarrier(&___mDictionary_5, value);
	}

	inline static int32_t get_offset_of_mReplacement_6() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mReplacement_6)); }
	inline Dictionary_2_t3943999495 * get_mReplacement_6() const { return ___mReplacement_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_mReplacement_6() { return &___mReplacement_6; }
	inline void set_mReplacement_6(Dictionary_2_t3943999495 * value)
	{
		___mReplacement_6 = value;
		Il2CppCodeGenWriteBarrier(&___mReplacement_6, value);
	}

	inline static int32_t get_offset_of_mLanguageIndex_7() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguageIndex_7)); }
	inline int32_t get_mLanguageIndex_7() const { return ___mLanguageIndex_7; }
	inline int32_t* get_address_of_mLanguageIndex_7() { return &___mLanguageIndex_7; }
	inline void set_mLanguageIndex_7(int32_t value)
	{
		___mLanguageIndex_7 = value;
	}

	inline static int32_t get_offset_of_mLanguage_8() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguage_8)); }
	inline String_t* get_mLanguage_8() const { return ___mLanguage_8; }
	inline String_t** get_address_of_mLanguage_8() { return &___mLanguage_8; }
	inline void set_mLanguage_8(String_t* value)
	{
		___mLanguage_8 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguage_8, value);
	}

	inline static int32_t get_offset_of_mMerging_9() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mMerging_9)); }
	inline bool get_mMerging_9() const { return ___mMerging_9; }
	inline bool* get_address_of_mMerging_9() { return &___mMerging_9; }
	inline void set_mMerging_9(bool value)
	{
		___mMerging_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
