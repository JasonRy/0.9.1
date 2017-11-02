#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lovatto.SceneLoader.bl_SceneLoaderInfo
struct  bl_SceneLoaderInfo_t603275792  : public Il2CppObject
{
public:
	// System.String Lovatto.SceneLoader.bl_SceneLoaderInfo::SceneName
	String_t* ___SceneName_0;
	// System.String Lovatto.SceneLoader.bl_SceneLoaderInfo::DisplayName
	String_t* ___DisplayName_1;
	// System.String Lovatto.SceneLoader.bl_SceneLoaderInfo::Description
	String_t* ___Description_2;
	// UnityEngine.Sprite[] Lovatto.SceneLoader.bl_SceneLoaderInfo::Backgrounds
	SpriteU5BU5D_t3359083662* ___Backgrounds_3;

public:
	inline static int32_t get_offset_of_SceneName_0() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_t603275792, ___SceneName_0)); }
	inline String_t* get_SceneName_0() const { return ___SceneName_0; }
	inline String_t** get_address_of_SceneName_0() { return &___SceneName_0; }
	inline void set_SceneName_0(String_t* value)
	{
		___SceneName_0 = value;
		Il2CppCodeGenWriteBarrier(&___SceneName_0, value);
	}

	inline static int32_t get_offset_of_DisplayName_1() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_t603275792, ___DisplayName_1)); }
	inline String_t* get_DisplayName_1() const { return ___DisplayName_1; }
	inline String_t** get_address_of_DisplayName_1() { return &___DisplayName_1; }
	inline void set_DisplayName_1(String_t* value)
	{
		___DisplayName_1 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayName_1, value);
	}

	inline static int32_t get_offset_of_Description_2() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_t603275792, ___Description_2)); }
	inline String_t* get_Description_2() const { return ___Description_2; }
	inline String_t** get_address_of_Description_2() { return &___Description_2; }
	inline void set_Description_2(String_t* value)
	{
		___Description_2 = value;
		Il2CppCodeGenWriteBarrier(&___Description_2, value);
	}

	inline static int32_t get_offset_of_Backgrounds_3() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_t603275792, ___Backgrounds_3)); }
	inline SpriteU5BU5D_t3359083662* get_Backgrounds_3() const { return ___Backgrounds_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_Backgrounds_3() { return &___Backgrounds_3; }
	inline void set_Backgrounds_3(SpriteU5BU5D_t3359083662* value)
	{
		___Backgrounds_3 = value;
		Il2CppCodeGenWriteBarrier(&___Backgrounds_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
