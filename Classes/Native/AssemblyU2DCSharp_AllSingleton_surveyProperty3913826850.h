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

// AllSingleton/surveyProperty
struct  surveyProperty_t3913826850 
{
public:
	// System.Double AllSingleton/surveyProperty::score
	double ___score_0;
	// System.String AllSingleton/surveyProperty::start_at
	String_t* ___start_at_1;
	// System.String AllSingleton/surveyProperty::end_at
	String_t* ___end_at_2;
	// System.String AllSingleton/surveyProperty::name
	String_t* ___name_3;
	// System.Int32 AllSingleton/surveyProperty::projectID
	int32_t ___projectID_4;

public:
	inline static int32_t get_offset_of_score_0() { return static_cast<int32_t>(offsetof(surveyProperty_t3913826850, ___score_0)); }
	inline double get_score_0() const { return ___score_0; }
	inline double* get_address_of_score_0() { return &___score_0; }
	inline void set_score_0(double value)
	{
		___score_0 = value;
	}

	inline static int32_t get_offset_of_start_at_1() { return static_cast<int32_t>(offsetof(surveyProperty_t3913826850, ___start_at_1)); }
	inline String_t* get_start_at_1() const { return ___start_at_1; }
	inline String_t** get_address_of_start_at_1() { return &___start_at_1; }
	inline void set_start_at_1(String_t* value)
	{
		___start_at_1 = value;
		Il2CppCodeGenWriteBarrier(&___start_at_1, value);
	}

	inline static int32_t get_offset_of_end_at_2() { return static_cast<int32_t>(offsetof(surveyProperty_t3913826850, ___end_at_2)); }
	inline String_t* get_end_at_2() const { return ___end_at_2; }
	inline String_t** get_address_of_end_at_2() { return &___end_at_2; }
	inline void set_end_at_2(String_t* value)
	{
		___end_at_2 = value;
		Il2CppCodeGenWriteBarrier(&___end_at_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(surveyProperty_t3913826850, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_projectID_4() { return static_cast<int32_t>(offsetof(surveyProperty_t3913826850, ___projectID_4)); }
	inline int32_t get_projectID_4() const { return ___projectID_4; }
	inline int32_t* get_address_of_projectID_4() { return &___projectID_4; }
	inline void set_projectID_4(int32_t value)
	{
		___projectID_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of AllSingleton/surveyProperty
struct surveyProperty_t3913826850_marshaled_pinvoke
{
	double ___score_0;
	char* ___start_at_1;
	char* ___end_at_2;
	char* ___name_3;
	int32_t ___projectID_4;
};
// Native definition for COM marshalling of AllSingleton/surveyProperty
struct surveyProperty_t3913826850_marshaled_com
{
	double ___score_0;
	Il2CppChar* ___start_at_1;
	Il2CppChar* ___end_at_2;
	Il2CppChar* ___name_3;
	int32_t ___projectID_4;
};
