#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HighlighterInteractive338727161.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Coroutine
struct Coroutine_t2299508840;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlighterFlashing
struct  HighlighterFlashing_t117323173  : public HighlighterInteractive_t338727161
{
public:
	// UnityEngine.Color HighlighterFlashing::flashingStartColor
	Color_t2020392075  ___flashingStartColor_4;
	// UnityEngine.Color HighlighterFlashing::flashingEndColor
	Color_t2020392075  ___flashingEndColor_5;
	// System.Single HighlighterFlashing::flashingDelay
	float ___flashingDelay_6;
	// System.Single HighlighterFlashing::flashingFrequency
	float ___flashingFrequency_7;
	// UnityEngine.Coroutine HighlighterFlashing::coroutine
	Coroutine_t2299508840 * ___coroutine_8;

public:
	inline static int32_t get_offset_of_flashingStartColor_4() { return static_cast<int32_t>(offsetof(HighlighterFlashing_t117323173, ___flashingStartColor_4)); }
	inline Color_t2020392075  get_flashingStartColor_4() const { return ___flashingStartColor_4; }
	inline Color_t2020392075 * get_address_of_flashingStartColor_4() { return &___flashingStartColor_4; }
	inline void set_flashingStartColor_4(Color_t2020392075  value)
	{
		___flashingStartColor_4 = value;
	}

	inline static int32_t get_offset_of_flashingEndColor_5() { return static_cast<int32_t>(offsetof(HighlighterFlashing_t117323173, ___flashingEndColor_5)); }
	inline Color_t2020392075  get_flashingEndColor_5() const { return ___flashingEndColor_5; }
	inline Color_t2020392075 * get_address_of_flashingEndColor_5() { return &___flashingEndColor_5; }
	inline void set_flashingEndColor_5(Color_t2020392075  value)
	{
		___flashingEndColor_5 = value;
	}

	inline static int32_t get_offset_of_flashingDelay_6() { return static_cast<int32_t>(offsetof(HighlighterFlashing_t117323173, ___flashingDelay_6)); }
	inline float get_flashingDelay_6() const { return ___flashingDelay_6; }
	inline float* get_address_of_flashingDelay_6() { return &___flashingDelay_6; }
	inline void set_flashingDelay_6(float value)
	{
		___flashingDelay_6 = value;
	}

	inline static int32_t get_offset_of_flashingFrequency_7() { return static_cast<int32_t>(offsetof(HighlighterFlashing_t117323173, ___flashingFrequency_7)); }
	inline float get_flashingFrequency_7() const { return ___flashingFrequency_7; }
	inline float* get_address_of_flashingFrequency_7() { return &___flashingFrequency_7; }
	inline void set_flashingFrequency_7(float value)
	{
		___flashingFrequency_7 = value;
	}

	inline static int32_t get_offset_of_coroutine_8() { return static_cast<int32_t>(offsetof(HighlighterFlashing_t117323173, ___coroutine_8)); }
	inline Coroutine_t2299508840 * get_coroutine_8() const { return ___coroutine_8; }
	inline Coroutine_t2299508840 ** get_address_of_coroutine_8() { return &___coroutine_8; }
	inline void set_coroutine_8(Coroutine_t2299508840 * value)
	{
		___coroutine_8 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
