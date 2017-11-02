#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Text_Decoder3792697818.h"

// I18N.CJK.DbcsConvert
struct DbcsConvert_t2235949023;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.DbcsEncoding/DbcsDecoder
struct  DbcsDecoder_t4236833608  : public Decoder_t3792697818
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding/DbcsDecoder::convert
	DbcsConvert_t2235949023 * ___convert_2;

public:
	inline static int32_t get_offset_of_convert_2() { return static_cast<int32_t>(offsetof(DbcsDecoder_t4236833608, ___convert_2)); }
	inline DbcsConvert_t2235949023 * get_convert_2() const { return ___convert_2; }
	inline DbcsConvert_t2235949023 ** get_address_of_convert_2() { return &___convert_2; }
	inline void set_convert_2(DbcsConvert_t2235949023 * value)
	{
		___convert_2 = value;
		Il2CppCodeGenWriteBarrier(&___convert_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
