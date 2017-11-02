#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster410733016.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Raycaster
struct  WMG_Raycaster_t3137594770  : public GraphicRaycaster_t410733016
{
public:
	// System.Single WMG_Raycaster::AlphaThreshold
	float ___AlphaThreshold_10;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> WMG_Raycaster::exclusions
	List_1_t3685274804 * ___exclusions_11;

public:
	inline static int32_t get_offset_of_AlphaThreshold_10() { return static_cast<int32_t>(offsetof(WMG_Raycaster_t3137594770, ___AlphaThreshold_10)); }
	inline float get_AlphaThreshold_10() const { return ___AlphaThreshold_10; }
	inline float* get_address_of_AlphaThreshold_10() { return &___AlphaThreshold_10; }
	inline void set_AlphaThreshold_10(float value)
	{
		___AlphaThreshold_10 = value;
	}

	inline static int32_t get_offset_of_exclusions_11() { return static_cast<int32_t>(offsetof(WMG_Raycaster_t3137594770, ___exclusions_11)); }
	inline List_1_t3685274804 * get_exclusions_11() const { return ___exclusions_11; }
	inline List_1_t3685274804 ** get_address_of_exclusions_11() { return &___exclusions_11; }
	inline void set_exclusions_11(List_1_t3685274804 * value)
	{
		___exclusions_11 = value;
		Il2CppCodeGenWriteBarrier(&___exclusions_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
