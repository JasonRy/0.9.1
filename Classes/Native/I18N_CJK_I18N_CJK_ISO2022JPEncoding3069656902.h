#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_I18N_Common_MonoEncoding2723633290.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.ISO2022JPEncoding
struct  ISO2022JPEncoding_t3069656902  : public MonoEncoding_t2723633290
{
public:
	// System.Boolean I18N.CJK.ISO2022JPEncoding::allow_1byte_kana
	bool ___allow_1byte_kana_29;
	// System.Boolean I18N.CJK.ISO2022JPEncoding::allow_shift_io
	bool ___allow_shift_io_30;

public:
	inline static int32_t get_offset_of_allow_1byte_kana_29() { return static_cast<int32_t>(offsetof(ISO2022JPEncoding_t3069656902, ___allow_1byte_kana_29)); }
	inline bool get_allow_1byte_kana_29() const { return ___allow_1byte_kana_29; }
	inline bool* get_address_of_allow_1byte_kana_29() { return &___allow_1byte_kana_29; }
	inline void set_allow_1byte_kana_29(bool value)
	{
		___allow_1byte_kana_29 = value;
	}

	inline static int32_t get_offset_of_allow_shift_io_30() { return static_cast<int32_t>(offsetof(ISO2022JPEncoding_t3069656902, ___allow_shift_io_30)); }
	inline bool get_allow_shift_io_30() const { return ___allow_shift_io_30; }
	inline bool* get_address_of_allow_shift_io_30() { return &___allow_shift_io_30; }
	inline void set_allow_shift_io_30(bool value)
	{
		___allow_shift_io_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
