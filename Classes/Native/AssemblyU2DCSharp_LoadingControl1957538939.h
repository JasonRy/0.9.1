#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// BackGroundEffect
struct BackGroundEffect_t4074231987;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingControl
struct  LoadingControl_t1957538939  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image LoadingControl::percentageImage
	Image_t2042527209 * ___percentageImage_2;
	// UnityEngine.UI.Text LoadingControl::percentageNum
	Text_t356221433 * ___percentageNum_3;
	// UnityEngine.UI.Image LoadingControl::effectImage
	Image_t2042527209 * ___effectImage_4;
	// UnityEngine.UI.Image LoadingControl::loadingText
	Image_t2042527209 * ___loadingText_5;
	// BackGroundEffect LoadingControl::BGE
	BackGroundEffect_t4074231987 * ___BGE_7;
	// System.String LoadingControl::DBM_URL
	String_t* ___DBM_URL_8;
	// System.Collections.Generic.List`1<System.String> LoadingControl::allDeviceID_URL
	List_1_t1398341365 * ___allDeviceID_URL_9;
	// System.Int32 LoadingControl::loadingIndex
	int32_t ___loadingIndex_10;

public:
	inline static int32_t get_offset_of_percentageImage_2() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___percentageImage_2)); }
	inline Image_t2042527209 * get_percentageImage_2() const { return ___percentageImage_2; }
	inline Image_t2042527209 ** get_address_of_percentageImage_2() { return &___percentageImage_2; }
	inline void set_percentageImage_2(Image_t2042527209 * value)
	{
		___percentageImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___percentageImage_2, value);
	}

	inline static int32_t get_offset_of_percentageNum_3() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___percentageNum_3)); }
	inline Text_t356221433 * get_percentageNum_3() const { return ___percentageNum_3; }
	inline Text_t356221433 ** get_address_of_percentageNum_3() { return &___percentageNum_3; }
	inline void set_percentageNum_3(Text_t356221433 * value)
	{
		___percentageNum_3 = value;
		Il2CppCodeGenWriteBarrier(&___percentageNum_3, value);
	}

	inline static int32_t get_offset_of_effectImage_4() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___effectImage_4)); }
	inline Image_t2042527209 * get_effectImage_4() const { return ___effectImage_4; }
	inline Image_t2042527209 ** get_address_of_effectImage_4() { return &___effectImage_4; }
	inline void set_effectImage_4(Image_t2042527209 * value)
	{
		___effectImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___effectImage_4, value);
	}

	inline static int32_t get_offset_of_loadingText_5() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___loadingText_5)); }
	inline Image_t2042527209 * get_loadingText_5() const { return ___loadingText_5; }
	inline Image_t2042527209 ** get_address_of_loadingText_5() { return &___loadingText_5; }
	inline void set_loadingText_5(Image_t2042527209 * value)
	{
		___loadingText_5 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_5, value);
	}

	inline static int32_t get_offset_of_BGE_7() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___BGE_7)); }
	inline BackGroundEffect_t4074231987 * get_BGE_7() const { return ___BGE_7; }
	inline BackGroundEffect_t4074231987 ** get_address_of_BGE_7() { return &___BGE_7; }
	inline void set_BGE_7(BackGroundEffect_t4074231987 * value)
	{
		___BGE_7 = value;
		Il2CppCodeGenWriteBarrier(&___BGE_7, value);
	}

	inline static int32_t get_offset_of_DBM_URL_8() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___DBM_URL_8)); }
	inline String_t* get_DBM_URL_8() const { return ___DBM_URL_8; }
	inline String_t** get_address_of_DBM_URL_8() { return &___DBM_URL_8; }
	inline void set_DBM_URL_8(String_t* value)
	{
		___DBM_URL_8 = value;
		Il2CppCodeGenWriteBarrier(&___DBM_URL_8, value);
	}

	inline static int32_t get_offset_of_allDeviceID_URL_9() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___allDeviceID_URL_9)); }
	inline List_1_t1398341365 * get_allDeviceID_URL_9() const { return ___allDeviceID_URL_9; }
	inline List_1_t1398341365 ** get_address_of_allDeviceID_URL_9() { return &___allDeviceID_URL_9; }
	inline void set_allDeviceID_URL_9(List_1_t1398341365 * value)
	{
		___allDeviceID_URL_9 = value;
		Il2CppCodeGenWriteBarrier(&___allDeviceID_URL_9, value);
	}

	inline static int32_t get_offset_of_loadingIndex_10() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939, ___loadingIndex_10)); }
	inline int32_t get_loadingIndex_10() const { return ___loadingIndex_10; }
	inline int32_t* get_address_of_loadingIndex_10() { return &___loadingIndex_10; }
	inline void set_loadingIndex_10(int32_t value)
	{
		___loadingIndex_10 = value;
	}
};

struct LoadingControl_t1957538939_StaticFields
{
public:
	// System.Int32 LoadingControl::sceneIndex
	int32_t ___sceneIndex_6;

public:
	inline static int32_t get_offset_of_sceneIndex_6() { return static_cast<int32_t>(offsetof(LoadingControl_t1957538939_StaticFields, ___sceneIndex_6)); }
	inline int32_t get_sceneIndex_6() const { return ___sceneIndex_6; }
	inline int32_t* get_address_of_sceneIndex_6() { return &___sceneIndex_6; }
	inline void set_sceneIndex_6(int32_t value)
	{
		___sceneIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
