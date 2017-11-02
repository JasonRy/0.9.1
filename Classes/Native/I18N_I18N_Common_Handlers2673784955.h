#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.Handlers
struct  Handlers_t2673784955  : public Il2CppObject
{
public:

public:
};

struct Handlers_t2673784955_StaticFields
{
public:
	// System.String[] I18N.Common.Handlers::List
	StringU5BU5D_t1642385972* ___List_0;
	// System.Collections.Hashtable I18N.Common.Handlers::aliases
	Hashtable_t909839986 * ___aliases_1;

public:
	inline static int32_t get_offset_of_List_0() { return static_cast<int32_t>(offsetof(Handlers_t2673784955_StaticFields, ___List_0)); }
	inline StringU5BU5D_t1642385972* get_List_0() const { return ___List_0; }
	inline StringU5BU5D_t1642385972** get_address_of_List_0() { return &___List_0; }
	inline void set_List_0(StringU5BU5D_t1642385972* value)
	{
		___List_0 = value;
		Il2CppCodeGenWriteBarrier(&___List_0, value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(Handlers_t2673784955_StaticFields, ___aliases_1)); }
	inline Hashtable_t909839986 * get_aliases_1() const { return ___aliases_1; }
	inline Hashtable_t909839986 ** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(Hashtable_t909839986 * value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier(&___aliases_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
