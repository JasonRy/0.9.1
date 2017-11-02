#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1917651748;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Dynamic
struct  WMG_X_Dynamic_t2558512  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WMG_X_Dynamic::graphPrefab
	GameObject_t1756533147 * ___graphPrefab_2;
	// WMG_Axis_Graph WMG_X_Dynamic::graph
	WMG_Axis_Graph_t1917651748 * ___graph_3;
	// System.Boolean WMG_X_Dynamic::performTests
	bool ___performTests_4;
	// System.Boolean WMG_X_Dynamic::noTestDelay
	bool ___noTestDelay_5;
	// System.Single WMG_X_Dynamic::testInterval
	float ___testInterval_6;
	// System.Single WMG_X_Dynamic::testGroupInterval
	float ___testGroupInterval_7;
	// DG.Tweening.Ease WMG_X_Dynamic::easeType
	int32_t ___easeType_8;
	// UnityEngine.GameObject WMG_X_Dynamic::realTimePrefab
	GameObject_t1756533147 * ___realTimePrefab_9;
	// UnityEngine.GameObject WMG_X_Dynamic::realTimeObj
	GameObject_t1756533147 * ___realTimeObj_10;
	// System.Single WMG_X_Dynamic::animDuration
	float ___animDuration_11;
	// UnityEngine.WaitForSeconds WMG_X_Dynamic::waitTime
	WaitForSeconds_t3839502067 * ___waitTime_12;

public:
	inline static int32_t get_offset_of_graphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___graphPrefab_2)); }
	inline GameObject_t1756533147 * get_graphPrefab_2() const { return ___graphPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_graphPrefab_2() { return &___graphPrefab_2; }
	inline void set_graphPrefab_2(GameObject_t1756533147 * value)
	{
		___graphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___graphPrefab_2, value);
	}

	inline static int32_t get_offset_of_graph_3() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___graph_3)); }
	inline WMG_Axis_Graph_t1917651748 * get_graph_3() const { return ___graph_3; }
	inline WMG_Axis_Graph_t1917651748 ** get_address_of_graph_3() { return &___graph_3; }
	inline void set_graph_3(WMG_Axis_Graph_t1917651748 * value)
	{
		___graph_3 = value;
		Il2CppCodeGenWriteBarrier(&___graph_3, value);
	}

	inline static int32_t get_offset_of_performTests_4() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___performTests_4)); }
	inline bool get_performTests_4() const { return ___performTests_4; }
	inline bool* get_address_of_performTests_4() { return &___performTests_4; }
	inline void set_performTests_4(bool value)
	{
		___performTests_4 = value;
	}

	inline static int32_t get_offset_of_noTestDelay_5() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___noTestDelay_5)); }
	inline bool get_noTestDelay_5() const { return ___noTestDelay_5; }
	inline bool* get_address_of_noTestDelay_5() { return &___noTestDelay_5; }
	inline void set_noTestDelay_5(bool value)
	{
		___noTestDelay_5 = value;
	}

	inline static int32_t get_offset_of_testInterval_6() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___testInterval_6)); }
	inline float get_testInterval_6() const { return ___testInterval_6; }
	inline float* get_address_of_testInterval_6() { return &___testInterval_6; }
	inline void set_testInterval_6(float value)
	{
		___testInterval_6 = value;
	}

	inline static int32_t get_offset_of_testGroupInterval_7() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___testGroupInterval_7)); }
	inline float get_testGroupInterval_7() const { return ___testGroupInterval_7; }
	inline float* get_address_of_testGroupInterval_7() { return &___testGroupInterval_7; }
	inline void set_testGroupInterval_7(float value)
	{
		___testGroupInterval_7 = value;
	}

	inline static int32_t get_offset_of_easeType_8() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___easeType_8)); }
	inline int32_t get_easeType_8() const { return ___easeType_8; }
	inline int32_t* get_address_of_easeType_8() { return &___easeType_8; }
	inline void set_easeType_8(int32_t value)
	{
		___easeType_8 = value;
	}

	inline static int32_t get_offset_of_realTimePrefab_9() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___realTimePrefab_9)); }
	inline GameObject_t1756533147 * get_realTimePrefab_9() const { return ___realTimePrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_realTimePrefab_9() { return &___realTimePrefab_9; }
	inline void set_realTimePrefab_9(GameObject_t1756533147 * value)
	{
		___realTimePrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___realTimePrefab_9, value);
	}

	inline static int32_t get_offset_of_realTimeObj_10() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___realTimeObj_10)); }
	inline GameObject_t1756533147 * get_realTimeObj_10() const { return ___realTimeObj_10; }
	inline GameObject_t1756533147 ** get_address_of_realTimeObj_10() { return &___realTimeObj_10; }
	inline void set_realTimeObj_10(GameObject_t1756533147 * value)
	{
		___realTimeObj_10 = value;
		Il2CppCodeGenWriteBarrier(&___realTimeObj_10, value);
	}

	inline static int32_t get_offset_of_animDuration_11() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___animDuration_11)); }
	inline float get_animDuration_11() const { return ___animDuration_11; }
	inline float* get_address_of_animDuration_11() { return &___animDuration_11; }
	inline void set_animDuration_11(float value)
	{
		___animDuration_11 = value;
	}

	inline static int32_t get_offset_of_waitTime_12() { return static_cast<int32_t>(offsetof(WMG_X_Dynamic_t2558512, ___waitTime_12)); }
	inline WaitForSeconds_t3839502067 * get_waitTime_12() const { return ___waitTime_12; }
	inline WaitForSeconds_t3839502067 ** get_address_of_waitTime_12() { return &___waitTime_12; }
	inline void set_waitTime_12(WaitForSeconds_t3839502067 * value)
	{
		___waitTime_12 = value;
		Il2CppCodeGenWriteBarrier(&___waitTime_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
