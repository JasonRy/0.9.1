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

// AllSingleton/DeviceDetailedInformation
struct  DeviceDetailedInformation_t3803420831 
{
public:
	// System.String AllSingleton/DeviceDetailedInformation::unit
	String_t* ___unit_0;
	// System.String AllSingleton/DeviceDetailedInformation::data_name
	String_t* ___data_name_1;
	// System.Int32 AllSingleton/DeviceDetailedInformation::data_code
	int32_t ___data_code_2;
	// System.Double AllSingleton/DeviceDetailedInformation::collect_data
	double ___collect_data_3;
	// System.Double AllSingleton/DeviceDetailedInformation::high_limit
	double ___high_limit_4;

public:
	inline static int32_t get_offset_of_unit_0() { return static_cast<int32_t>(offsetof(DeviceDetailedInformation_t3803420831, ___unit_0)); }
	inline String_t* get_unit_0() const { return ___unit_0; }
	inline String_t** get_address_of_unit_0() { return &___unit_0; }
	inline void set_unit_0(String_t* value)
	{
		___unit_0 = value;
		Il2CppCodeGenWriteBarrier(&___unit_0, value);
	}

	inline static int32_t get_offset_of_data_name_1() { return static_cast<int32_t>(offsetof(DeviceDetailedInformation_t3803420831, ___data_name_1)); }
	inline String_t* get_data_name_1() const { return ___data_name_1; }
	inline String_t** get_address_of_data_name_1() { return &___data_name_1; }
	inline void set_data_name_1(String_t* value)
	{
		___data_name_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_name_1, value);
	}

	inline static int32_t get_offset_of_data_code_2() { return static_cast<int32_t>(offsetof(DeviceDetailedInformation_t3803420831, ___data_code_2)); }
	inline int32_t get_data_code_2() const { return ___data_code_2; }
	inline int32_t* get_address_of_data_code_2() { return &___data_code_2; }
	inline void set_data_code_2(int32_t value)
	{
		___data_code_2 = value;
	}

	inline static int32_t get_offset_of_collect_data_3() { return static_cast<int32_t>(offsetof(DeviceDetailedInformation_t3803420831, ___collect_data_3)); }
	inline double get_collect_data_3() const { return ___collect_data_3; }
	inline double* get_address_of_collect_data_3() { return &___collect_data_3; }
	inline void set_collect_data_3(double value)
	{
		___collect_data_3 = value;
	}

	inline static int32_t get_offset_of_high_limit_4() { return static_cast<int32_t>(offsetof(DeviceDetailedInformation_t3803420831, ___high_limit_4)); }
	inline double get_high_limit_4() const { return ___high_limit_4; }
	inline double* get_address_of_high_limit_4() { return &___high_limit_4; }
	inline void set_high_limit_4(double value)
	{
		___high_limit_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of AllSingleton/DeviceDetailedInformation
struct DeviceDetailedInformation_t3803420831_marshaled_pinvoke
{
	char* ___unit_0;
	char* ___data_name_1;
	int32_t ___data_code_2;
	double ___collect_data_3;
	double ___high_limit_4;
};
// Native definition for COM marshalling of AllSingleton/DeviceDetailedInformation
struct DeviceDetailedInformation_t3803420831_marshaled_com
{
	Il2CppChar* ___unit_0;
	Il2CppChar* ___data_name_1;
	int32_t ___data_code_2;
	double ___collect_data_3;
	double ___high_limit_4;
};
