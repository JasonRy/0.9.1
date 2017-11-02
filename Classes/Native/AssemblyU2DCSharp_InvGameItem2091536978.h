#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InvGameItem_Quality3379381276.h"

// InvBaseItem
struct InvBaseItem_t3744336511;
// System.Comparison`1<InvStat>
struct Comparison_1_t376000804;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvGameItem
struct  InvGameItem_t2091536978  : public Il2CppObject
{
public:
	// System.Int32 InvGameItem::mBaseItemID
	int32_t ___mBaseItemID_0;
	// InvGameItem/Quality InvGameItem::quality
	int32_t ___quality_1;
	// System.Int32 InvGameItem::itemLevel
	int32_t ___itemLevel_2;
	// InvBaseItem InvGameItem::mBaseItem
	InvBaseItem_t3744336511 * ___mBaseItem_3;

public:
	inline static int32_t get_offset_of_mBaseItemID_0() { return static_cast<int32_t>(offsetof(InvGameItem_t2091536978, ___mBaseItemID_0)); }
	inline int32_t get_mBaseItemID_0() const { return ___mBaseItemID_0; }
	inline int32_t* get_address_of_mBaseItemID_0() { return &___mBaseItemID_0; }
	inline void set_mBaseItemID_0(int32_t value)
	{
		___mBaseItemID_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(InvGameItem_t2091536978, ___quality_1)); }
	inline int32_t get_quality_1() const { return ___quality_1; }
	inline int32_t* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(int32_t value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_itemLevel_2() { return static_cast<int32_t>(offsetof(InvGameItem_t2091536978, ___itemLevel_2)); }
	inline int32_t get_itemLevel_2() const { return ___itemLevel_2; }
	inline int32_t* get_address_of_itemLevel_2() { return &___itemLevel_2; }
	inline void set_itemLevel_2(int32_t value)
	{
		___itemLevel_2 = value;
	}

	inline static int32_t get_offset_of_mBaseItem_3() { return static_cast<int32_t>(offsetof(InvGameItem_t2091536978, ___mBaseItem_3)); }
	inline InvBaseItem_t3744336511 * get_mBaseItem_3() const { return ___mBaseItem_3; }
	inline InvBaseItem_t3744336511 ** get_address_of_mBaseItem_3() { return &___mBaseItem_3; }
	inline void set_mBaseItem_3(InvBaseItem_t3744336511 * value)
	{
		___mBaseItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___mBaseItem_3, value);
	}
};

struct InvGameItem_t2091536978_StaticFields
{
public:
	// System.Comparison`1<InvStat> InvGameItem::<>f__mg$cache0
	Comparison_1_t376000804 * ___U3CU3Ef__mgU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(InvGameItem_t2091536978_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline Comparison_1_t376000804 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline Comparison_1_t376000804 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(Comparison_1_t376000804 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
