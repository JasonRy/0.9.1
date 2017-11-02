#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserData
struct  UserData_t673683075  : public Il2CppObject
{
public:
	// System.String UserData::userName
	String_t* ___userName_0;
	// System.Int32 UserData::onlyId
	int32_t ___onlyId_1;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(UserData_t673683075, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier(&___userName_0, value);
	}

	inline static int32_t get_offset_of_onlyId_1() { return static_cast<int32_t>(offsetof(UserData_t673683075, ___onlyId_1)); }
	inline int32_t get_onlyId_1() const { return ___onlyId_1; }
	inline int32_t* get_address_of_onlyId_1() { return &___onlyId_1; }
	inline void set_onlyId_1(int32_t value)
	{
		___onlyId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
