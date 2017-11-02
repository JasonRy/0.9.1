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

// ConsoleApplication.LocalProcessing/peopleOrderPatrol
struct  peopleOrderPatrol_t1135943169 
{
public:
	// System.Int32 ConsoleApplication.LocalProcessing/peopleOrderPatrol::deivce_id
	int32_t ___deivce_id_0;
	// System.String ConsoleApplication.LocalProcessing/peopleOrderPatrol::update_at
	String_t* ___update_at_1;
	// System.String ConsoleApplication.LocalProcessing/peopleOrderPatrol::all_accountName_list
	String_t* ___all_accountName_list_2;
	// System.String ConsoleApplication.LocalProcessing/peopleOrderPatrol::content
	String_t* ___content_3;
	// System.Int32 ConsoleApplication.LocalProcessing/peopleOrderPatrol::status
	int32_t ___status_4;

public:
	inline static int32_t get_offset_of_deivce_id_0() { return static_cast<int32_t>(offsetof(peopleOrderPatrol_t1135943169, ___deivce_id_0)); }
	inline int32_t get_deivce_id_0() const { return ___deivce_id_0; }
	inline int32_t* get_address_of_deivce_id_0() { return &___deivce_id_0; }
	inline void set_deivce_id_0(int32_t value)
	{
		___deivce_id_0 = value;
	}

	inline static int32_t get_offset_of_update_at_1() { return static_cast<int32_t>(offsetof(peopleOrderPatrol_t1135943169, ___update_at_1)); }
	inline String_t* get_update_at_1() const { return ___update_at_1; }
	inline String_t** get_address_of_update_at_1() { return &___update_at_1; }
	inline void set_update_at_1(String_t* value)
	{
		___update_at_1 = value;
		Il2CppCodeGenWriteBarrier(&___update_at_1, value);
	}

	inline static int32_t get_offset_of_all_accountName_list_2() { return static_cast<int32_t>(offsetof(peopleOrderPatrol_t1135943169, ___all_accountName_list_2)); }
	inline String_t* get_all_accountName_list_2() const { return ___all_accountName_list_2; }
	inline String_t** get_address_of_all_accountName_list_2() { return &___all_accountName_list_2; }
	inline void set_all_accountName_list_2(String_t* value)
	{
		___all_accountName_list_2 = value;
		Il2CppCodeGenWriteBarrier(&___all_accountName_list_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(peopleOrderPatrol_t1135943169, ___content_3)); }
	inline String_t* get_content_3() const { return ___content_3; }
	inline String_t** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(String_t* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(peopleOrderPatrol_t1135943169, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ConsoleApplication.LocalProcessing/peopleOrderPatrol
struct peopleOrderPatrol_t1135943169_marshaled_pinvoke
{
	int32_t ___deivce_id_0;
	char* ___update_at_1;
	char* ___all_accountName_list_2;
	char* ___content_3;
	int32_t ___status_4;
};
// Native definition for COM marshalling of ConsoleApplication.LocalProcessing/peopleOrderPatrol
struct peopleOrderPatrol_t1135943169_marshaled_com
{
	int32_t ___deivce_id_0;
	Il2CppChar* ___update_at_1;
	Il2CppChar* ___all_accountName_list_2;
	Il2CppChar* ___content_3;
	int32_t ___status_4;
};
