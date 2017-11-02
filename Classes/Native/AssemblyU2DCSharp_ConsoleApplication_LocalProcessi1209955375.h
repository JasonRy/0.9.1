#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConsoleApplication.LocalProcessing/PeopleInformation
struct  PeopleInformation_t1209955375 
{
public:
	// System.String ConsoleApplication.LocalProcessing/PeopleInformation::position_name
	String_t* ___position_name_0;
	// System.Int32 ConsoleApplication.LocalProcessing/PeopleInformation::count
	int32_t ___count_1;
	// System.Int32 ConsoleApplication.LocalProcessing/PeopleInformation::position_id
	int32_t ___position_id_2;

public:
	inline static int32_t get_offset_of_position_name_0() { return static_cast<int32_t>(offsetof(PeopleInformation_t1209955375, ___position_name_0)); }
	inline String_t* get_position_name_0() const { return ___position_name_0; }
	inline String_t** get_address_of_position_name_0() { return &___position_name_0; }
	inline void set_position_name_0(String_t* value)
	{
		___position_name_0 = value;
		Il2CppCodeGenWriteBarrier(&___position_name_0, value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(PeopleInformation_t1209955375, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_position_id_2() { return static_cast<int32_t>(offsetof(PeopleInformation_t1209955375, ___position_id_2)); }
	inline int32_t get_position_id_2() const { return ___position_id_2; }
	inline int32_t* get_address_of_position_id_2() { return &___position_id_2; }
	inline void set_position_id_2(int32_t value)
	{
		___position_id_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ConsoleApplication.LocalProcessing/PeopleInformation
struct PeopleInformation_t1209955375_marshaled_pinvoke
{
	char* ___position_name_0;
	int32_t ___count_1;
	int32_t ___position_id_2;
};
// Native definition for COM marshalling of ConsoleApplication.LocalProcessing/PeopleInformation
struct PeopleInformation_t1209955375_marshaled_com
{
	Il2CppChar* ___position_name_0;
	int32_t ___count_1;
	int32_t ___position_id_2;
};
