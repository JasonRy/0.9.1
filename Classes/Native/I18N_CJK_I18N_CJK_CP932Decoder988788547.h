#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_CJK_I18N_CJK_DbcsEncoding_DbcsDecoder4236833608.h"

// I18N.CJK.JISConvert
struct JISConvert_t3196154937;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.CP932Decoder
struct  CP932Decoder_t988788547  : public DbcsDecoder_t4236833608
{
public:
	// I18N.CJK.JISConvert I18N.CJK.CP932Decoder::convert
	JISConvert_t3196154937 * ___convert_3;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_chars
	int32_t ___last_byte_chars_5;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(CP932Decoder_t988788547, ___convert_3)); }
	inline JISConvert_t3196154937 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t3196154937 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t3196154937 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier(&___convert_3, value);
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(CP932Decoder_t988788547, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_chars_5() { return static_cast<int32_t>(offsetof(CP932Decoder_t988788547, ___last_byte_chars_5)); }
	inline int32_t get_last_byte_chars_5() const { return ___last_byte_chars_5; }
	inline int32_t* get_address_of_last_byte_chars_5() { return &___last_byte_chars_5; }
	inline void set_last_byte_chars_5(int32_t value)
	{
		___last_byte_chars_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
