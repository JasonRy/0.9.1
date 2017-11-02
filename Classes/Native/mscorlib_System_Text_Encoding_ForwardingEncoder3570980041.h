#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Text_Encoder751367874.h"

// System.Text.Encoding
struct Encoding_t663144255;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingEncoder
struct  ForwardingEncoder_t3570980041  : public Encoder_t751367874
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingEncoder::encoding
	Encoding_t663144255 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingEncoder_t3570980041, ___encoding_2)); }
	inline Encoding_t663144255 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t663144255 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t663144255 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
