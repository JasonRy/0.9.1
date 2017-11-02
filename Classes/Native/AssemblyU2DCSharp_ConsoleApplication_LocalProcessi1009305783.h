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

// ConsoleApplication.LocalProcessing/peoplePatrol
struct  peoplePatrol_t1009305783 
{
public:
	// System.Int32 ConsoleApplication.LocalProcessing/peoplePatrol::deivce_id
	int32_t ___deivce_id_0;
	// System.String ConsoleApplication.LocalProcessing/peoplePatrol::capture_at
	String_t* ___capture_at_1;
	// System.String ConsoleApplication.LocalProcessing/peoplePatrol::create_user
	String_t* ___create_user_2;
	// System.String ConsoleApplication.LocalProcessing/peoplePatrol::content
	String_t* ___content_3;
	// System.Int32 ConsoleApplication.LocalProcessing/peoplePatrol::status
	int32_t ___status_4;

public:
	inline static int32_t get_offset_of_deivce_id_0() { return static_cast<int32_t>(offsetof(peoplePatrol_t1009305783, ___deivce_id_0)); }
	inline int32_t get_deivce_id_0() const { return ___deivce_id_0; }
	inline int32_t* get_address_of_deivce_id_0() { return &___deivce_id_0; }
	inline void set_deivce_id_0(int32_t value)
	{
		___deivce_id_0 = value;
	}

	inline static int32_t get_offset_of_capture_at_1() { return static_cast<int32_t>(offsetof(peoplePatrol_t1009305783, ___capture_at_1)); }
	inline String_t* get_capture_at_1() const { return ___capture_at_1; }
	inline String_t** get_address_of_capture_at_1() { return &___capture_at_1; }
	inline void set_capture_at_1(String_t* value)
	{
		___capture_at_1 = value;
		Il2CppCodeGenWriteBarrier(&___capture_at_1, value);
	}

	inline static int32_t get_offset_of_create_user_2() { return static_cast<int32_t>(offsetof(peoplePatrol_t1009305783, ___create_user_2)); }
	inline String_t* get_create_user_2() const { return ___create_user_2; }
	inline String_t** get_address_of_create_user_2() { return &___create_user_2; }
	inline void set_create_user_2(String_t* value)
	{
		___create_user_2 = value;
		Il2CppCodeGenWriteBarrier(&___create_user_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(peoplePatrol_t1009305783, ___content_3)); }
	inline String_t* get_content_3() const { return ___content_3; }
	inline String_t** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(String_t* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(peoplePatrol_t1009305783, ___status_4)); }
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
// Native definition for P/Invoke marshalling of ConsoleApplication.LocalProcessing/peoplePatrol
struct peoplePatrol_t1009305783_marshaled_pinvoke
{
	int32_t ___deivce_id_0;
	char* ___capture_at_1;
	char* ___create_user_2;
	char* ___content_3;
	int32_t ___status_4;
};
// Native definition for COM marshalling of ConsoleApplication.LocalProcessing/peoplePatrol
struct peoplePatrol_t1009305783_marshaled_com
{
	int32_t ___deivce_id_0;
	Il2CppChar* ___capture_at_1;
	Il2CppChar* ___create_user_2;
	Il2CppChar* ___content_3;
	int32_t ___status_4;
};
