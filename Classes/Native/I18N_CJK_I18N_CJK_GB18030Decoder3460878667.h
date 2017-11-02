#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_CJK_I18N_CJK_DbcsEncoding_DbcsDecoder4236833608.h"

// I18N.CJK.DbcsConvert
struct DbcsConvert_t2235949023;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.GB18030Decoder
struct  GB18030Decoder_t3460878667  : public DbcsDecoder_t4236833608
{
public:

public:
};

struct GB18030Decoder_t3460878667_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Decoder::gb2312
	DbcsConvert_t2235949023 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Decoder_t3460878667_StaticFields, ___gb2312_3)); }
	inline DbcsConvert_t2235949023 * get_gb2312_3() const { return ___gb2312_3; }
	inline DbcsConvert_t2235949023 ** get_address_of_gb2312_3() { return &___gb2312_3; }
	inline void set_gb2312_3(DbcsConvert_t2235949023 * value)
	{
		___gb2312_3 = value;
		Il2CppCodeGenWriteBarrier(&___gb2312_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
