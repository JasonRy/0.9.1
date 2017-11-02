#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.Collections.Generic.List`1<Lovatto.SceneLoader.bl_SceneLoaderInfo>
struct List_1_t4267364220;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lovatto.SceneLoader.bl_SceneLoaderManager
struct  bl_SceneLoaderManager_t795200515  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<Lovatto.SceneLoader.bl_SceneLoaderInfo> Lovatto.SceneLoader.bl_SceneLoaderManager::SceneList
	List_1_t4267364220 * ___SceneList_2;
	// System.Collections.Generic.List`1<System.String> Lovatto.SceneLoader.bl_SceneLoaderManager::TipsList
	List_1_t1398341365 * ___TipsList_3;

public:
	inline static int32_t get_offset_of_SceneList_2() { return static_cast<int32_t>(offsetof(bl_SceneLoaderManager_t795200515, ___SceneList_2)); }
	inline List_1_t4267364220 * get_SceneList_2() const { return ___SceneList_2; }
	inline List_1_t4267364220 ** get_address_of_SceneList_2() { return &___SceneList_2; }
	inline void set_SceneList_2(List_1_t4267364220 * value)
	{
		___SceneList_2 = value;
		Il2CppCodeGenWriteBarrier(&___SceneList_2, value);
	}

	inline static int32_t get_offset_of_TipsList_3() { return static_cast<int32_t>(offsetof(bl_SceneLoaderManager_t795200515, ___TipsList_3)); }
	inline List_1_t1398341365 * get_TipsList_3() const { return ___TipsList_3; }
	inline List_1_t1398341365 ** get_address_of_TipsList_3() { return &___TipsList_3; }
	inline void set_TipsList_3(List_1_t1398341365 * value)
	{
		___TipsList_3 = value;
		Il2CppCodeGenWriteBarrier(&___TipsList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
