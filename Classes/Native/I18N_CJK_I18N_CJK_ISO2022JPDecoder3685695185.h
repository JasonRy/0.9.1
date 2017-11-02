#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Text_Decoder3792697818.h"
#include "I18N_CJK_I18N_CJK_ISO2022JPMode340003768.h"

// I18N.CJK.JISConvert
struct JISConvert_t3196154937;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.ISO2022JPDecoder
struct  ISO2022JPDecoder_t3685695185  : public Decoder_t3792697818
{
public:
	// System.Boolean I18N.CJK.ISO2022JPDecoder::allow_shift_io
	bool ___allow_shift_io_3;
	// I18N.CJK.ISO2022JPMode I18N.CJK.ISO2022JPDecoder::m
	int32_t ___m_4;
	// System.Boolean I18N.CJK.ISO2022JPDecoder::shifted_in_conv
	bool ___shifted_in_conv_5;
	// System.Boolean I18N.CJK.ISO2022JPDecoder::shifted_in_count
	bool ___shifted_in_count_6;

public:
	inline static int32_t get_offset_of_allow_shift_io_3() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t3685695185, ___allow_shift_io_3)); }
	inline bool get_allow_shift_io_3() const { return ___allow_shift_io_3; }
	inline bool* get_address_of_allow_shift_io_3() { return &___allow_shift_io_3; }
	inline void set_allow_shift_io_3(bool value)
	{
		___allow_shift_io_3 = value;
	}

	inline static int32_t get_offset_of_m_4() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t3685695185, ___m_4)); }
	inline int32_t get_m_4() const { return ___m_4; }
	inline int32_t* get_address_of_m_4() { return &___m_4; }
	inline void set_m_4(int32_t value)
	{
		___m_4 = value;
	}

	inline static int32_t get_offset_of_shifted_in_conv_5() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t3685695185, ___shifted_in_conv_5)); }
	inline bool get_shifted_in_conv_5() const { return ___shifted_in_conv_5; }
	inline bool* get_address_of_shifted_in_conv_5() { return &___shifted_in_conv_5; }
	inline void set_shifted_in_conv_5(bool value)
	{
		___shifted_in_conv_5 = value;
	}

	inline static int32_t get_offset_of_shifted_in_count_6() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t3685695185, ___shifted_in_count_6)); }
	inline bool get_shifted_in_count_6() const { return ___shifted_in_count_6; }
	inline bool* get_address_of_shifted_in_count_6() { return &___shifted_in_count_6; }
	inline void set_shifted_in_count_6(bool value)
	{
		___shifted_in_count_6 = value;
	}
};

struct ISO2022JPDecoder_t3685695185_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.ISO2022JPDecoder::convert
	JISConvert_t3196154937 * ___convert_2;

public:
	inline static int32_t get_offset_of_convert_2() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t3685695185_StaticFields, ___convert_2)); }
	inline JISConvert_t3196154937 * get_convert_2() const { return ___convert_2; }
	inline JISConvert_t3196154937 ** get_address_of_convert_2() { return &___convert_2; }
	inline void set_convert_2(JISConvert_t3196154937 * value)
	{
		___convert_2 = value;
		Il2CppCodeGenWriteBarrier(&___convert_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
