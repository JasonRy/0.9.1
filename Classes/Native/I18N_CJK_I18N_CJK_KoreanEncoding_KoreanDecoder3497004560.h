#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_CJK_I18N_CJK_DbcsEncoding_DbcsDecoder4236833608.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.KoreanEncoding/KoreanDecoder
struct  KoreanDecoder_t3497004560  : public DbcsDecoder_t4236833608
{
public:
	// System.Boolean I18N.CJK.KoreanEncoding/KoreanDecoder::useUHC
	bool ___useUHC_3;
	// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::last_byte_conv
	int32_t ___last_byte_conv_5;

public:
	inline static int32_t get_offset_of_useUHC_3() { return static_cast<int32_t>(offsetof(KoreanDecoder_t3497004560, ___useUHC_3)); }
	inline bool get_useUHC_3() const { return ___useUHC_3; }
	inline bool* get_address_of_useUHC_3() { return &___useUHC_3; }
	inline void set_useUHC_3(bool value)
	{
		___useUHC_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(KoreanDecoder_t3497004560, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_conv_5() { return static_cast<int32_t>(offsetof(KoreanDecoder_t3497004560, ___last_byte_conv_5)); }
	inline int32_t get_last_byte_conv_5() const { return ___last_byte_conv_5; }
	inline int32_t* get_address_of_last_byte_conv_5() { return &___last_byte_conv_5; }
	inline void set_last_byte_conv_5(int32_t value)
	{
		___last_byte_conv_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
