#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AllSingleton_workTypeList2702288860.h"

// DBM_BAR_EFFECT
struct DBM_BAR_EFFECT_t787948571;
// DBM_RING_EFFECT
struct DBM_RING_EFFECT_t3405472688;
// SetRingsGraph
struct SetRingsGraph_t3114359917;
// StaffControl_MainInterface
struct StaffControl_MainInterface_t1010620252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicEffect
struct  DynamicEffect_t4085460036  : public MonoBehaviour_t1158329972
{
public:
	// AllSingleton/workTypeList DynamicEffect::workTypeList
	workTypeList_t2702288860  ___workTypeList_2;
	// DBM_BAR_EFFECT DynamicEffect::age
	DBM_BAR_EFFECT_t787948571 * ___age_3;
	// DBM_RING_EFFECT DynamicEffect::gender
	DBM_RING_EFFECT_t3405472688 * ___gender_4;
	// DBM_BAR_EFFECT DynamicEffect::education
	DBM_BAR_EFFECT_t787948571 * ___education_5;
	// SetRingsGraph DynamicEffect::ringsGraph
	SetRingsGraph_t3114359917 * ___ringsGraph_6;
	// System.Int32 DynamicEffect::defulatDivision
	int32_t ___defulatDivision_7;
	// StaffControl_MainInterface DynamicEffect::SCM
	StaffControl_MainInterface_t1010620252 * ___SCM_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DynamicEffect::deps
	List_1_t1125654279 * ___deps_9;

public:
	inline static int32_t get_offset_of_workTypeList_2() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___workTypeList_2)); }
	inline workTypeList_t2702288860  get_workTypeList_2() const { return ___workTypeList_2; }
	inline workTypeList_t2702288860 * get_address_of_workTypeList_2() { return &___workTypeList_2; }
	inline void set_workTypeList_2(workTypeList_t2702288860  value)
	{
		___workTypeList_2 = value;
	}

	inline static int32_t get_offset_of_age_3() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___age_3)); }
	inline DBM_BAR_EFFECT_t787948571 * get_age_3() const { return ___age_3; }
	inline DBM_BAR_EFFECT_t787948571 ** get_address_of_age_3() { return &___age_3; }
	inline void set_age_3(DBM_BAR_EFFECT_t787948571 * value)
	{
		___age_3 = value;
		Il2CppCodeGenWriteBarrier(&___age_3, value);
	}

	inline static int32_t get_offset_of_gender_4() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___gender_4)); }
	inline DBM_RING_EFFECT_t3405472688 * get_gender_4() const { return ___gender_4; }
	inline DBM_RING_EFFECT_t3405472688 ** get_address_of_gender_4() { return &___gender_4; }
	inline void set_gender_4(DBM_RING_EFFECT_t3405472688 * value)
	{
		___gender_4 = value;
		Il2CppCodeGenWriteBarrier(&___gender_4, value);
	}

	inline static int32_t get_offset_of_education_5() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___education_5)); }
	inline DBM_BAR_EFFECT_t787948571 * get_education_5() const { return ___education_5; }
	inline DBM_BAR_EFFECT_t787948571 ** get_address_of_education_5() { return &___education_5; }
	inline void set_education_5(DBM_BAR_EFFECT_t787948571 * value)
	{
		___education_5 = value;
		Il2CppCodeGenWriteBarrier(&___education_5, value);
	}

	inline static int32_t get_offset_of_ringsGraph_6() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___ringsGraph_6)); }
	inline SetRingsGraph_t3114359917 * get_ringsGraph_6() const { return ___ringsGraph_6; }
	inline SetRingsGraph_t3114359917 ** get_address_of_ringsGraph_6() { return &___ringsGraph_6; }
	inline void set_ringsGraph_6(SetRingsGraph_t3114359917 * value)
	{
		___ringsGraph_6 = value;
		Il2CppCodeGenWriteBarrier(&___ringsGraph_6, value);
	}

	inline static int32_t get_offset_of_defulatDivision_7() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___defulatDivision_7)); }
	inline int32_t get_defulatDivision_7() const { return ___defulatDivision_7; }
	inline int32_t* get_address_of_defulatDivision_7() { return &___defulatDivision_7; }
	inline void set_defulatDivision_7(int32_t value)
	{
		___defulatDivision_7 = value;
	}

	inline static int32_t get_offset_of_SCM_8() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___SCM_8)); }
	inline StaffControl_MainInterface_t1010620252 * get_SCM_8() const { return ___SCM_8; }
	inline StaffControl_MainInterface_t1010620252 ** get_address_of_SCM_8() { return &___SCM_8; }
	inline void set_SCM_8(StaffControl_MainInterface_t1010620252 * value)
	{
		___SCM_8 = value;
		Il2CppCodeGenWriteBarrier(&___SCM_8, value);
	}

	inline static int32_t get_offset_of_deps_9() { return static_cast<int32_t>(offsetof(DynamicEffect_t4085460036, ___deps_9)); }
	inline List_1_t1125654279 * get_deps_9() const { return ___deps_9; }
	inline List_1_t1125654279 ** get_address_of_deps_9() { return &___deps_9; }
	inline void set_deps_9(List_1_t1125654279 * value)
	{
		___deps_9 = value;
		Il2CppCodeGenWriteBarrier(&___deps_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
