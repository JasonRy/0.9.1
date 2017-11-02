#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Events.UnityAction`2<UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData>
struct UnityAction_2_t2138558730;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Events/<AddEventTrigger>c__AnonStorey0
struct  U3CAddEventTriggerU3Ec__AnonStorey0_t4115898400  : public Il2CppObject
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData> WMG_Events/<AddEventTrigger>c__AnonStorey0::action
	UnityAction_2_t2138558730 * ___action_0;
	// UnityEngine.GameObject WMG_Events/<AddEventTrigger>c__AnonStorey0::go
	GameObject_t1756533147 * ___go_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey0_t4115898400, ___action_0)); }
	inline UnityAction_2_t2138558730 * get_action_0() const { return ___action_0; }
	inline UnityAction_2_t2138558730 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_2_t2138558730 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_go_1() { return static_cast<int32_t>(offsetof(U3CAddEventTriggerU3Ec__AnonStorey0_t4115898400, ___go_1)); }
	inline GameObject_t1756533147 * get_go_1() const { return ___go_1; }
	inline GameObject_t1756533147 ** get_address_of_go_1() { return &___go_1; }
	inline void set_go_1(GameObject_t1756533147 * value)
	{
		___go_1 = value;
		Il2CppCodeGenWriteBarrier(&___go_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
