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
// I18N.Common.Manager
struct Manager_t572059519;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.Manager
struct  Manager_t572059519  : public Il2CppObject
{
public:
	// System.Collections.Hashtable I18N.Common.Manager::handlers
	Hashtable_t909839986 * ___handlers_2;
	// System.Collections.Hashtable I18N.Common.Manager::active
	Hashtable_t909839986 * ___active_3;
	// System.Collections.Hashtable I18N.Common.Manager::assemblies
	Hashtable_t909839986 * ___assemblies_4;

public:
	inline static int32_t get_offset_of_handlers_2() { return static_cast<int32_t>(offsetof(Manager_t572059519, ___handlers_2)); }
	inline Hashtable_t909839986 * get_handlers_2() const { return ___handlers_2; }
	inline Hashtable_t909839986 ** get_address_of_handlers_2() { return &___handlers_2; }
	inline void set_handlers_2(Hashtable_t909839986 * value)
	{
		___handlers_2 = value;
		Il2CppCodeGenWriteBarrier(&___handlers_2, value);
	}

	inline static int32_t get_offset_of_active_3() { return static_cast<int32_t>(offsetof(Manager_t572059519, ___active_3)); }
	inline Hashtable_t909839986 * get_active_3() const { return ___active_3; }
	inline Hashtable_t909839986 ** get_address_of_active_3() { return &___active_3; }
	inline void set_active_3(Hashtable_t909839986 * value)
	{
		___active_3 = value;
		Il2CppCodeGenWriteBarrier(&___active_3, value);
	}

	inline static int32_t get_offset_of_assemblies_4() { return static_cast<int32_t>(offsetof(Manager_t572059519, ___assemblies_4)); }
	inline Hashtable_t909839986 * get_assemblies_4() const { return ___assemblies_4; }
	inline Hashtable_t909839986 ** get_address_of_assemblies_4() { return &___assemblies_4; }
	inline void set_assemblies_4(Hashtable_t909839986 * value)
	{
		___assemblies_4 = value;
		Il2CppCodeGenWriteBarrier(&___assemblies_4, value);
	}
};

struct Manager_t572059519_StaticFields
{
public:
	// I18N.Common.Manager I18N.Common.Manager::manager
	Manager_t572059519 * ___manager_1;
	// System.Object I18N.Common.Manager::lockobj
	Il2CppObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_manager_1() { return static_cast<int32_t>(offsetof(Manager_t572059519_StaticFields, ___manager_1)); }
	inline Manager_t572059519 * get_manager_1() const { return ___manager_1; }
	inline Manager_t572059519 ** get_address_of_manager_1() { return &___manager_1; }
	inline void set_manager_1(Manager_t572059519 * value)
	{
		___manager_1 = value;
		Il2CppCodeGenWriteBarrier(&___manager_1, value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(Manager_t572059519_StaticFields, ___lockobj_5)); }
	inline Il2CppObject * get_lockobj_5() const { return ___lockobj_5; }
	inline Il2CppObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(Il2CppObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier(&___lockobj_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
