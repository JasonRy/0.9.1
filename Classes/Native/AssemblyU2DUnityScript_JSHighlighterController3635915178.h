#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// HighlightingSystem.Highlighter
struct Highlighter_t958778585;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSHighlighterController
struct  JSHighlighterController_t3635915178  : public MonoBehaviour_t1158329972
{
public:
	// HighlightingSystem.Highlighter JSHighlighterController::h
	Highlighter_t958778585 * ___h_2;

public:
	inline static int32_t get_offset_of_h_2() { return static_cast<int32_t>(offsetof(JSHighlighterController_t3635915178, ___h_2)); }
	inline Highlighter_t958778585 * get_h_2() const { return ___h_2; }
	inline Highlighter_t958778585 ** get_address_of_h_2() { return &___h_2; }
	inline void set_h_2(Highlighter_t958778585 * value)
	{
		___h_2 = value;
		Il2CppCodeGenWriteBarrier(&___h_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
