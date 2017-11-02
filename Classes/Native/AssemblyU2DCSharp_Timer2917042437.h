#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public Il2CppObject
{
public:
	// System.Single Timer::<StartTime>k__BackingField
	float ___U3CStartTimeU3Ek__BackingField_0;
	// System.Single Timer::<Duration>k__BackingField
	float ___U3CDurationU3Ek__BackingField_1;
	// System.Single Timer::<EndTime>k__BackingField
	float ___U3CEndTimeU3Ek__BackingField_2;
	// System.Single Timer::<CurTime>k__BackingField
	float ___U3CCurTimeU3Ek__BackingField_3;
	// System.Boolean Timer::<IsStart>k__BackingField
	bool ___U3CIsStartU3Ek__BackingField_4;
	// System.Action Timer::<OnStart>k__BackingField
	Action_t3226471752 * ___U3COnStartU3Ek__BackingField_5;
	// System.Action Timer::<OnEnd>k__BackingField
	Action_t3226471752 * ___U3COnEndU3Ek__BackingField_6;
	// System.Action Timer::<OnUpdate>k__BackingField
	Action_t3226471752 * ___U3COnUpdateU3Ek__BackingField_7;
	// System.Int32 Timer::<StartCount>k__BackingField
	int32_t ___U3CStartCountU3Ek__BackingField_8;
	// System.Int32 Timer::<FinishCount>k__BackingField
	int32_t ___U3CFinishCountU3Ek__BackingField_9;
	// System.Action Timer::<OnCancel>k__BackingField
	Action_t3226471752 * ___U3COnCancelU3Ek__BackingField_10;
	// System.Action Timer::<OnPause>k__BackingField
	Action_t3226471752 * ___U3COnPauseU3Ek__BackingField_11;
	// System.Action Timer::<OnContinue>k__BackingField
	Action_t3226471752 * ___U3COnContinueU3Ek__BackingField_12;
	// System.Boolean Timer::<IsPause>k__BackingField
	bool ___U3CIsPauseU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CStartTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CStartTimeU3Ek__BackingField_0)); }
	inline float get_U3CStartTimeU3Ek__BackingField_0() const { return ___U3CStartTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CStartTimeU3Ek__BackingField_0() { return &___U3CStartTimeU3Ek__BackingField_0; }
	inline void set_U3CStartTimeU3Ek__BackingField_0(float value)
	{
		___U3CStartTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDurationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CDurationU3Ek__BackingField_1)); }
	inline float get_U3CDurationU3Ek__BackingField_1() const { return ___U3CDurationU3Ek__BackingField_1; }
	inline float* get_address_of_U3CDurationU3Ek__BackingField_1() { return &___U3CDurationU3Ek__BackingField_1; }
	inline void set_U3CDurationU3Ek__BackingField_1(float value)
	{
		___U3CDurationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEndTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CEndTimeU3Ek__BackingField_2)); }
	inline float get_U3CEndTimeU3Ek__BackingField_2() const { return ___U3CEndTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CEndTimeU3Ek__BackingField_2() { return &___U3CEndTimeU3Ek__BackingField_2; }
	inline void set_U3CEndTimeU3Ek__BackingField_2(float value)
	{
		___U3CEndTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCurTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CCurTimeU3Ek__BackingField_3)); }
	inline float get_U3CCurTimeU3Ek__BackingField_3() const { return ___U3CCurTimeU3Ek__BackingField_3; }
	inline float* get_address_of_U3CCurTimeU3Ek__BackingField_3() { return &___U3CCurTimeU3Ek__BackingField_3; }
	inline void set_U3CCurTimeU3Ek__BackingField_3(float value)
	{
		___U3CCurTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsStartU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CIsStartU3Ek__BackingField_4)); }
	inline bool get_U3CIsStartU3Ek__BackingField_4() const { return ___U3CIsStartU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsStartU3Ek__BackingField_4() { return &___U3CIsStartU3Ek__BackingField_4; }
	inline void set_U3CIsStartU3Ek__BackingField_4(bool value)
	{
		___U3CIsStartU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COnStartU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3COnStartU3Ek__BackingField_5)); }
	inline Action_t3226471752 * get_U3COnStartU3Ek__BackingField_5() const { return ___U3COnStartU3Ek__BackingField_5; }
	inline Action_t3226471752 ** get_address_of_U3COnStartU3Ek__BackingField_5() { return &___U3COnStartU3Ek__BackingField_5; }
	inline void set_U3COnStartU3Ek__BackingField_5(Action_t3226471752 * value)
	{
		___U3COnStartU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnStartU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3COnEndU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3COnEndU3Ek__BackingField_6)); }
	inline Action_t3226471752 * get_U3COnEndU3Ek__BackingField_6() const { return ___U3COnEndU3Ek__BackingField_6; }
	inline Action_t3226471752 ** get_address_of_U3COnEndU3Ek__BackingField_6() { return &___U3COnEndU3Ek__BackingField_6; }
	inline void set_U3COnEndU3Ek__BackingField_6(Action_t3226471752 * value)
	{
		___U3COnEndU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnEndU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3COnUpdateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3COnUpdateU3Ek__BackingField_7)); }
	inline Action_t3226471752 * get_U3COnUpdateU3Ek__BackingField_7() const { return ___U3COnUpdateU3Ek__BackingField_7; }
	inline Action_t3226471752 ** get_address_of_U3COnUpdateU3Ek__BackingField_7() { return &___U3COnUpdateU3Ek__BackingField_7; }
	inline void set_U3COnUpdateU3Ek__BackingField_7(Action_t3226471752 * value)
	{
		___U3COnUpdateU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnUpdateU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CStartCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CStartCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CStartCountU3Ek__BackingField_8() const { return ___U3CStartCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CStartCountU3Ek__BackingField_8() { return &___U3CStartCountU3Ek__BackingField_8; }
	inline void set_U3CStartCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CStartCountU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFinishCountU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CFinishCountU3Ek__BackingField_9)); }
	inline int32_t get_U3CFinishCountU3Ek__BackingField_9() const { return ___U3CFinishCountU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFinishCountU3Ek__BackingField_9() { return &___U3CFinishCountU3Ek__BackingField_9; }
	inline void set_U3CFinishCountU3Ek__BackingField_9(int32_t value)
	{
		___U3CFinishCountU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3COnCancelU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3COnCancelU3Ek__BackingField_10)); }
	inline Action_t3226471752 * get_U3COnCancelU3Ek__BackingField_10() const { return ___U3COnCancelU3Ek__BackingField_10; }
	inline Action_t3226471752 ** get_address_of_U3COnCancelU3Ek__BackingField_10() { return &___U3COnCancelU3Ek__BackingField_10; }
	inline void set_U3COnCancelU3Ek__BackingField_10(Action_t3226471752 * value)
	{
		___U3COnCancelU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnCancelU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3COnPauseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3COnPauseU3Ek__BackingField_11)); }
	inline Action_t3226471752 * get_U3COnPauseU3Ek__BackingField_11() const { return ___U3COnPauseU3Ek__BackingField_11; }
	inline Action_t3226471752 ** get_address_of_U3COnPauseU3Ek__BackingField_11() { return &___U3COnPauseU3Ek__BackingField_11; }
	inline void set_U3COnPauseU3Ek__BackingField_11(Action_t3226471752 * value)
	{
		___U3COnPauseU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnPauseU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3COnContinueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3COnContinueU3Ek__BackingField_12)); }
	inline Action_t3226471752 * get_U3COnContinueU3Ek__BackingField_12() const { return ___U3COnContinueU3Ek__BackingField_12; }
	inline Action_t3226471752 ** get_address_of_U3COnContinueU3Ek__BackingField_12() { return &___U3COnContinueU3Ek__BackingField_12; }
	inline void set_U3COnContinueU3Ek__BackingField_12(Action_t3226471752 * value)
	{
		___U3COnContinueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnContinueU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CIsPauseU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___U3CIsPauseU3Ek__BackingField_13)); }
	inline bool get_U3CIsPauseU3Ek__BackingField_13() const { return ___U3CIsPauseU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsPauseU3Ek__BackingField_13() { return &___U3CIsPauseU3Ek__BackingField_13; }
	inline void set_U3CIsPauseU3Ek__BackingField_13(bool value)
	{
		___U3CIsPauseU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
