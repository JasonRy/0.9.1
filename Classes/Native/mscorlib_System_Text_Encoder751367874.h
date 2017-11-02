#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Text.EncoderFallback
struct EncoderFallback_t1756452756;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3883615514;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t751367874  : public Il2CppObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::fallback
	EncoderFallback_t1756452756 * ___fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::fallback_buffer
	EncoderFallbackBuffer_t3883615514 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t751367874, ___fallback_0)); }
	inline EncoderFallback_t1756452756 * get_fallback_0() const { return ___fallback_0; }
	inline EncoderFallback_t1756452756 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(EncoderFallback_t1756452756 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_0, value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Encoder_t751367874, ___fallback_buffer_1)); }
	inline EncoderFallbackBuffer_t3883615514 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline EncoderFallbackBuffer_t3883615514 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(EncoderFallbackBuffer_t3883615514 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
