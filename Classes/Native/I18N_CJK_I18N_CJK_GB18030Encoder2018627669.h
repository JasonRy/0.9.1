#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_I18N_Common_MonoEncoder4074291689.h"

// I18N.CJK.DbcsConvert
struct DbcsConvert_t2235949023;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.GB18030Encoder
struct  GB18030Encoder_t2018627669  : public MonoEncoder_t4074291689
{
public:
	// System.Char I18N.CJK.GB18030Encoder::incomplete_byte_count
	Il2CppChar ___incomplete_byte_count_4;
	// System.Char I18N.CJK.GB18030Encoder::incomplete_bytes
	Il2CppChar ___incomplete_bytes_5;

public:
	inline static int32_t get_offset_of_incomplete_byte_count_4() { return static_cast<int32_t>(offsetof(GB18030Encoder_t2018627669, ___incomplete_byte_count_4)); }
	inline Il2CppChar get_incomplete_byte_count_4() const { return ___incomplete_byte_count_4; }
	inline Il2CppChar* get_address_of_incomplete_byte_count_4() { return &___incomplete_byte_count_4; }
	inline void set_incomplete_byte_count_4(Il2CppChar value)
	{
		___incomplete_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_incomplete_bytes_5() { return static_cast<int32_t>(offsetof(GB18030Encoder_t2018627669, ___incomplete_bytes_5)); }
	inline Il2CppChar get_incomplete_bytes_5() const { return ___incomplete_bytes_5; }
	inline Il2CppChar* get_address_of_incomplete_bytes_5() { return &___incomplete_bytes_5; }
	inline void set_incomplete_bytes_5(Il2CppChar value)
	{
		___incomplete_bytes_5 = value;
	}
};

struct GB18030Encoder_t2018627669_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Encoder::gb2312
	DbcsConvert_t2235949023 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Encoder_t2018627669_StaticFields, ___gb2312_3)); }
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
