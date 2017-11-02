#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// DG.Tweening.Sequence
struct Sequence_t110643099;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0
struct  U3CU3Ec__DisplayClass34_0_t3575628542  : public Il2CppObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0::target
	Rigidbody_t4233889191 * ___target_0;
	// System.Boolean DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0::offsetYSet
	bool ___offsetYSet_1;
	// System.Single DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0::offsetY
	float ___offsetY_2;
	// DG.Tweening.Sequence DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0::s
	Sequence_t110643099 * ___s_3;
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0::endValue
	Vector3_t2243707580  ___endValue_4;
	// System.Single DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0::startPosY
	float ___startPosY_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t3575628542, ___target_0)); }
	inline Rigidbody_t4233889191 * get_target_0() const { return ___target_0; }
	inline Rigidbody_t4233889191 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t4233889191 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_offsetYSet_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t3575628542, ___offsetYSet_1)); }
	inline bool get_offsetYSet_1() const { return ___offsetYSet_1; }
	inline bool* get_address_of_offsetYSet_1() { return &___offsetYSet_1; }
	inline void set_offsetYSet_1(bool value)
	{
		___offsetYSet_1 = value;
	}

	inline static int32_t get_offset_of_offsetY_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t3575628542, ___offsetY_2)); }
	inline float get_offsetY_2() const { return ___offsetY_2; }
	inline float* get_address_of_offsetY_2() { return &___offsetY_2; }
	inline void set_offsetY_2(float value)
	{
		___offsetY_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t3575628542, ___s_3)); }
	inline Sequence_t110643099 * get_s_3() const { return ___s_3; }
	inline Sequence_t110643099 ** get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(Sequence_t110643099 * value)
	{
		___s_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_3, value);
	}

	inline static int32_t get_offset_of_endValue_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t3575628542, ___endValue_4)); }
	inline Vector3_t2243707580  get_endValue_4() const { return ___endValue_4; }
	inline Vector3_t2243707580 * get_address_of_endValue_4() { return &___endValue_4; }
	inline void set_endValue_4(Vector3_t2243707580  value)
	{
		___endValue_4 = value;
	}

	inline static int32_t get_offset_of_startPosY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t3575628542, ___startPosY_5)); }
	inline float get_startPosY_5() const { return ___startPosY_5; }
	inline float* get_address_of_startPosY_5() { return &___startPosY_5; }
	inline void set_startPosY_5(float value)
	{
		___startPosY_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
