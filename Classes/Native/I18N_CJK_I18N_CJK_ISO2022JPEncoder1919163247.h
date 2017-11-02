#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_I18N_Common_MonoEncoder4074291689.h"
#include "I18N_CJK_I18N_CJK_ISO2022JPMode340003768.h"

// I18N.CJK.JISConvert
struct JISConvert_t3196154937;
// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.ISO2022JPEncoder
struct  ISO2022JPEncoder_t1919163247  : public MonoEncoder_t4074291689
{
public:
	// System.Boolean I18N.CJK.ISO2022JPEncoder::allow_1byte_kana
	bool ___allow_1byte_kana_4;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::allow_shift_io
	bool ___allow_shift_io_5;
	// I18N.CJK.ISO2022JPMode I18N.CJK.ISO2022JPEncoder::m
	int32_t ___m_6;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::shifted_in_count
	bool ___shifted_in_count_7;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::shifted_in_conv
	bool ___shifted_in_conv_8;

public:
	inline static int32_t get_offset_of_allow_1byte_kana_4() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247, ___allow_1byte_kana_4)); }
	inline bool get_allow_1byte_kana_4() const { return ___allow_1byte_kana_4; }
	inline bool* get_address_of_allow_1byte_kana_4() { return &___allow_1byte_kana_4; }
	inline void set_allow_1byte_kana_4(bool value)
	{
		___allow_1byte_kana_4 = value;
	}

	inline static int32_t get_offset_of_allow_shift_io_5() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247, ___allow_shift_io_5)); }
	inline bool get_allow_shift_io_5() const { return ___allow_shift_io_5; }
	inline bool* get_address_of_allow_shift_io_5() { return &___allow_shift_io_5; }
	inline void set_allow_shift_io_5(bool value)
	{
		___allow_shift_io_5 = value;
	}

	inline static int32_t get_offset_of_m_6() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247, ___m_6)); }
	inline int32_t get_m_6() const { return ___m_6; }
	inline int32_t* get_address_of_m_6() { return &___m_6; }
	inline void set_m_6(int32_t value)
	{
		___m_6 = value;
	}

	inline static int32_t get_offset_of_shifted_in_count_7() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247, ___shifted_in_count_7)); }
	inline bool get_shifted_in_count_7() const { return ___shifted_in_count_7; }
	inline bool* get_address_of_shifted_in_count_7() { return &___shifted_in_count_7; }
	inline void set_shifted_in_count_7(bool value)
	{
		___shifted_in_count_7 = value;
	}

	inline static int32_t get_offset_of_shifted_in_conv_8() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247, ___shifted_in_conv_8)); }
	inline bool get_shifted_in_conv_8() const { return ___shifted_in_conv_8; }
	inline bool* get_address_of_shifted_in_conv_8() { return &___shifted_in_conv_8; }
	inline void set_shifted_in_conv_8(bool value)
	{
		___shifted_in_conv_8 = value;
	}
};

struct ISO2022JPEncoder_t1919163247_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.ISO2022JPEncoder::convert
	JISConvert_t3196154937 * ___convert_3;
	// System.Char[] I18N.CJK.ISO2022JPEncoder::full_width_map
	CharU5BU5D_t1328083999* ___full_width_map_9;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247_StaticFields, ___convert_3)); }
	inline JISConvert_t3196154937 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t3196154937 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t3196154937 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier(&___convert_3, value);
	}

	inline static int32_t get_offset_of_full_width_map_9() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_t1919163247_StaticFields, ___full_width_map_9)); }
	inline CharU5BU5D_t1328083999* get_full_width_map_9() const { return ___full_width_map_9; }
	inline CharU5BU5D_t1328083999** get_address_of_full_width_map_9() { return &___full_width_map_9; }
	inline void set_full_width_map_9(CharU5BU5D_t1328083999* value)
	{
		___full_width_map_9 = value;
		Il2CppCodeGenWriteBarrier(&___full_width_map_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
