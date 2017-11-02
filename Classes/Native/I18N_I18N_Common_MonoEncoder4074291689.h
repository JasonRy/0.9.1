#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Text_Encoder751367874.h"

// I18N.Common.MonoEncoding
struct MonoEncoding_t2723633290;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoder
struct  MonoEncoder_t4074291689  : public Encoder_t751367874
{
public:
	// I18N.Common.MonoEncoding I18N.Common.MonoEncoder::encoding
	MonoEncoding_t2723633290 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(MonoEncoder_t4074291689, ___encoding_2)); }
	inline MonoEncoding_t2723633290 * get_encoding_2() const { return ___encoding_2; }
	inline MonoEncoding_t2723633290 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(MonoEncoding_t2723633290 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
