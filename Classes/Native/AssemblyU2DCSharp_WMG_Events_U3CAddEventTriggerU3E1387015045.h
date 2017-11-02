#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Events.UnityAction`2<UnityEngine.GameObject,System.Boolean>
struct UnityAction_2_t69381429;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Events/<AddEventTrigger>c__AnonStorey1
struct  U3CAddEventTriggerU3Ec__AnonStorey1_t1387015045  : public Il2CppObject
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.GameObject,System.Boolean> WMG_Events/<AddEventTrigger>c__AnonStorey1::action
	UnityAction_2_t69381429 * ___action_0;
	// UnityEngine.GameObject WMG_Events/<AddEventTrigger>c__AnonStorey1::go
	GameObject_t1756533147 * ___go_1;
	// System.Boolean WMG_Events/<AddEventTrigger>c__AnonStorey1::state
	bool ___state_2;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey1_t1387015045, ___action_0)); }
	inline UnityAction_2_t69381429 * get_action_0() const { return ___action_0; }
	inline UnityAction_2_t69381429 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_2_t69381429 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_go_1() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey1_t1387015045, ___go_1)); }
	inline GameObject_t1756533147 * get_go_1() const { return ___go_1; }
	inline GameObject_t1756533147 ** get_address_of_go_1() { return &___go_1; }
	inline void set_go_1(GameObject_t1756533147 * value)
	{
		___go_1 = value;
		Il2CppCodeGenWriteBarrier(&___go_1, value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey1_t1387015045, ___state_2)); }
	inline bool get_state_2() const { return ___state_2; }
	inline bool* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(bool value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
