#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "I18N_I18N_Common_MonoEncoding2723633290.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ISCIIEncoding
struct  ISCIIEncoding_t1858614900  : public MonoEncoding_t2723633290
{
public:
	// System.Int32 I18N.Other.ISCIIEncoding::shift
	int32_t ___shift_29;
	// System.String I18N.Other.ISCIIEncoding::encodingName
	String_t* ___encodingName_30;
	// System.String I18N.Other.ISCIIEncoding::webName
	String_t* ___webName_31;

public:
	inline static int32_t get_offset_of_shift_29() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t1858614900, ___shift_29)); }
	inline int32_t get_shift_29() const { return ___shift_29; }
	inline int32_t* get_address_of_shift_29() { return &___shift_29; }
	inline void set_shift_29(int32_t value)
	{
		___shift_29 = value;
	}

	inline static int32_t get_offset_of_encodingName_30() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t1858614900, ___encodingName_30)); }
	inline String_t* get_encodingName_30() const { return ___encodingName_30; }
	inline String_t** get_address_of_encodingName_30() { return &___encodingName_30; }
	inline void set_encodingName_30(String_t* value)
	{
		___encodingName_30 = value;
		Il2CppCodeGenWriteBarrier(&___encodingName_30, value);
	}

	inline static int32_t get_offset_of_webName_31() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t1858614900, ___webName_31)); }
	inline String_t* get_webName_31() const { return ___webName_31; }
	inline String_t** get_address_of_webName_31() { return &___webName_31; }
	inline void set_webName_31(String_t* value)
	{
		___webName_31 = value;
		Il2CppCodeGenWriteBarrier(&___webName_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
