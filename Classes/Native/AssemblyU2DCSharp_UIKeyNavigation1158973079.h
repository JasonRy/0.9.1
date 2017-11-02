#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIKeyNavigation_Constraint1628080441.h"

// BetterList`1<UIKeyNavigation>
struct BetterList_1_t1379361721;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIKeyNavigation
struct  UIKeyNavigation_t1158973079  : public MonoBehaviour_t1158329972
{
public:
	// UIKeyNavigation/Constraint UIKeyNavigation::constraint
	int32_t ___constraint_3;
	// UnityEngine.GameObject UIKeyNavigation::onUp
	GameObject_t1756533147 * ___onUp_4;
	// UnityEngine.GameObject UIKeyNavigation::onDown
	GameObject_t1756533147 * ___onDown_5;
	// UnityEngine.GameObject UIKeyNavigation::onLeft
	GameObject_t1756533147 * ___onLeft_6;
	// UnityEngine.GameObject UIKeyNavigation::onRight
	GameObject_t1756533147 * ___onRight_7;
	// UnityEngine.GameObject UIKeyNavigation::onClick
	GameObject_t1756533147 * ___onClick_8;
	// UnityEngine.GameObject UIKeyNavigation::onTab
	GameObject_t1756533147 * ___onTab_9;
	// System.Boolean UIKeyNavigation::startsSelected
	bool ___startsSelected_10;
	// System.Boolean UIKeyNavigation::mStarted
	bool ___mStarted_11;

public:
	inline static int32_t get_offset_of_constraint_3() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___constraint_3)); }
	inline int32_t get_constraint_3() const { return ___constraint_3; }
	inline int32_t* get_address_of_constraint_3() { return &___constraint_3; }
	inline void set_constraint_3(int32_t value)
	{
		___constraint_3 = value;
	}

	inline static int32_t get_offset_of_onUp_4() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___onUp_4)); }
	inline GameObject_t1756533147 * get_onUp_4() const { return ___onUp_4; }
	inline GameObject_t1756533147 ** get_address_of_onUp_4() { return &___onUp_4; }
	inline void set_onUp_4(GameObject_t1756533147 * value)
	{
		___onUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___onUp_4, value);
	}

	inline static int32_t get_offset_of_onDown_5() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___onDown_5)); }
	inline GameObject_t1756533147 * get_onDown_5() const { return ___onDown_5; }
	inline GameObject_t1756533147 ** get_address_of_onDown_5() { return &___onDown_5; }
	inline void set_onDown_5(GameObject_t1756533147 * value)
	{
		___onDown_5 = value;
		Il2CppCodeGenWriteBarrier(&___onDown_5, value);
	}

	inline static int32_t get_offset_of_onLeft_6() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___onLeft_6)); }
	inline GameObject_t1756533147 * get_onLeft_6() const { return ___onLeft_6; }
	inline GameObject_t1756533147 ** get_address_of_onLeft_6() { return &___onLeft_6; }
	inline void set_onLeft_6(GameObject_t1756533147 * value)
	{
		___onLeft_6 = value;
		Il2CppCodeGenWriteBarrier(&___onLeft_6, value);
	}

	inline static int32_t get_offset_of_onRight_7() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___onRight_7)); }
	inline GameObject_t1756533147 * get_onRight_7() const { return ___onRight_7; }
	inline GameObject_t1756533147 ** get_address_of_onRight_7() { return &___onRight_7; }
	inline void set_onRight_7(GameObject_t1756533147 * value)
	{
		___onRight_7 = value;
		Il2CppCodeGenWriteBarrier(&___onRight_7, value);
	}

	inline static int32_t get_offset_of_onClick_8() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___onClick_8)); }
	inline GameObject_t1756533147 * get_onClick_8() const { return ___onClick_8; }
	inline GameObject_t1756533147 ** get_address_of_onClick_8() { return &___onClick_8; }
	inline void set_onClick_8(GameObject_t1756533147 * value)
	{
		___onClick_8 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_8, value);
	}

	inline static int32_t get_offset_of_onTab_9() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___onTab_9)); }
	inline GameObject_t1756533147 * get_onTab_9() const { return ___onTab_9; }
	inline GameObject_t1756533147 ** get_address_of_onTab_9() { return &___onTab_9; }
	inline void set_onTab_9(GameObject_t1756533147 * value)
	{
		___onTab_9 = value;
		Il2CppCodeGenWriteBarrier(&___onTab_9, value);
	}

	inline static int32_t get_offset_of_startsSelected_10() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___startsSelected_10)); }
	inline bool get_startsSelected_10() const { return ___startsSelected_10; }
	inline bool* get_address_of_startsSelected_10() { return &___startsSelected_10; }
	inline void set_startsSelected_10(bool value)
	{
		___startsSelected_10 = value;
	}

	inline static int32_t get_offset_of_mStarted_11() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079, ___mStarted_11)); }
	inline bool get_mStarted_11() const { return ___mStarted_11; }
	inline bool* get_address_of_mStarted_11() { return &___mStarted_11; }
	inline void set_mStarted_11(bool value)
	{
		___mStarted_11 = value;
	}
};

struct UIKeyNavigation_t1158973079_StaticFields
{
public:
	// BetterList`1<UIKeyNavigation> UIKeyNavigation::list
	BetterList_1_t1379361721 * ___list_2;
	// System.Int32 UIKeyNavigation::mLastFrame
	int32_t ___mLastFrame_12;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079_StaticFields, ___list_2)); }
	inline BetterList_1_t1379361721 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1379361721 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1379361721 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_mLastFrame_12() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1158973079_StaticFields, ___mLastFrame_12)); }
	inline int32_t get_mLastFrame_12() const { return ___mLastFrame_12; }
	inline int32_t* get_address_of_mLastFrame_12() { return &___mLastFrame_12; }
	inline void set_mLastFrame_12(int32_t value)
	{
		___mLastFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
