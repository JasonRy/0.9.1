#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<DataLoading>
struct List_1_t401964108;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataLoading
struct  DataLoading_t1032842976  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DataLoading::loadingTime
	float ___loadingTime_2;
	// System.Collections.Generic.List`1<DataLoading> DataLoading::loadingImages
	List_1_t401964108 * ___loadingImages_3;

public:
	inline static int32_t get_offset_of_loadingTime_2() { return static_cast<int32_t>(offsetof(DataLoading_t1032842976, ___loadingTime_2)); }
	inline float get_loadingTime_2() const { return ___loadingTime_2; }
	inline float* get_address_of_loadingTime_2() { return &___loadingTime_2; }
	inline void set_loadingTime_2(float value)
	{
		___loadingTime_2 = value;
	}

	inline static int32_t get_offset_of_loadingImages_3() { return static_cast<int32_t>(offsetof(DataLoading_t1032842976, ___loadingImages_3)); }
	inline List_1_t401964108 * get_loadingImages_3() const { return ___loadingImages_3; }
	inline List_1_t401964108 ** get_address_of_loadingImages_3() { return &___loadingImages_3; }
	inline void set_loadingImages_3(List_1_t401964108 * value)
	{
		___loadingImages_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadingImages_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
