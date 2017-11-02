#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorldSpaceCanvas
struct  WorldSpaceCanvas_t4007337006  : public MonoBehaviour_t1158329972
{
public:
	// System.Single WorldSpaceCanvas::scale
	float ___scale_2;
	// UnityEngine.Transform WorldSpaceCanvas::tr
	Transform_t3275118058 * ___tr_3;
	// UnityEngine.Material WorldSpaceCanvas::_material
	Material_t193706927 * ____material_4;

public:
	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(WorldSpaceCanvas_t4007337006, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_tr_3() { return static_cast<int32_t>(offsetof(WorldSpaceCanvas_t4007337006, ___tr_3)); }
	inline Transform_t3275118058 * get_tr_3() const { return ___tr_3; }
	inline Transform_t3275118058 ** get_address_of_tr_3() { return &___tr_3; }
	inline void set_tr_3(Transform_t3275118058 * value)
	{
		___tr_3 = value;
		Il2CppCodeGenWriteBarrier(&___tr_3, value);
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(WorldSpaceCanvas_t4007337006, ____material_4)); }
	inline Material_t193706927 * get__material_4() const { return ____material_4; }
	inline Material_t193706927 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t193706927 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier(&____material_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
