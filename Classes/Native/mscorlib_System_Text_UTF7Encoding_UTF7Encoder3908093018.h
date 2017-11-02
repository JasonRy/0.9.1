#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Text_Encoder751367874.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Encoder
struct  UTF7Encoder_t3908093018  : public Encoder_t751367874
{
public:
	// System.Boolean System.Text.UTF7Encoding/UTF7Encoder::allowOptionals
	bool ___allowOptionals_2;
	// System.Int32 System.Text.UTF7Encoding/UTF7Encoder::leftOver
	int32_t ___leftOver_3;
	// System.Boolean System.Text.UTF7Encoding/UTF7Encoder::isInShifted
	bool ___isInShifted_4;

public:
	inline static int32_t get_offset_of_allowOptionals_2() { return static_cast<int32_t>(offsetof(UTF7Encoder_t3908093018, ___allowOptionals_2)); }
	inline bool get_allowOptionals_2() const { return ___allowOptionals_2; }
	inline bool* get_address_of_allowOptionals_2() { return &___allowOptionals_2; }
	inline void set_allowOptionals_2(bool value)
	{
		___allowOptionals_2 = value;
	}

	inline static int32_t get_offset_of_leftOver_3() { return static_cast<int32_t>(offsetof(UTF7Encoder_t3908093018, ___leftOver_3)); }
	inline int32_t get_leftOver_3() const { return ___leftOver_3; }
	inline int32_t* get_address_of_leftOver_3() { return &___leftOver_3; }
	inline void set_leftOver_3(int32_t value)
	{
		___leftOver_3 = value;
	}

	inline static int32_t get_offset_of_isInShifted_4() { return static_cast<int32_t>(offsetof(UTF7Encoder_t3908093018, ___isInShifted_4)); }
	inline bool get_isInShifted_4() const { return ___isInShifted_4; }
	inline bool* get_address_of_isInShifted_4() { return &___isInShifted_4; }
	inline void set_isInShifted_4(bool value)
	{
		___isInShifted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
