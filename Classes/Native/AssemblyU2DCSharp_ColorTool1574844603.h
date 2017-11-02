#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorTool
struct  ColorTool_t1574844603  : public Il2CppObject
{
public:

public:
};

struct ColorTool_t1574844603_StaticFields
{
public:
	// System.Int32[] ColorTool::colorComponentOffsets
	Int32U5BU5D_t3030399641* ___colorComponentOffsets_1;
	// System.Single[] ColorTool::colorComponents
	SingleU5BU5D_t577127397* ___colorComponents_2;
	// UnityEngine.Color ColorTool::colorResult
	Color_t2020392075  ___colorResult_3;

public:
	inline static int32_t get_offset_of_colorComponentOffsets_1() { return static_cast<int32_t>(offsetof(ColorTool_t1574844603_StaticFields, ___colorComponentOffsets_1)); }
	inline Int32U5BU5D_t3030399641* get_colorComponentOffsets_1() const { return ___colorComponentOffsets_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_colorComponentOffsets_1() { return &___colorComponentOffsets_1; }
	inline void set_colorComponentOffsets_1(Int32U5BU5D_t3030399641* value)
	{
		___colorComponentOffsets_1 = value;
		Il2CppCodeGenWriteBarrier(&___colorComponentOffsets_1, value);
	}

	inline static int32_t get_offset_of_colorComponents_2() { return static_cast<int32_t>(offsetof(ColorTool_t1574844603_StaticFields, ___colorComponents_2)); }
	inline SingleU5BU5D_t577127397* get_colorComponents_2() const { return ___colorComponents_2; }
	inline SingleU5BU5D_t577127397** get_address_of_colorComponents_2() { return &___colorComponents_2; }
	inline void set_colorComponents_2(SingleU5BU5D_t577127397* value)
	{
		___colorComponents_2 = value;
		Il2CppCodeGenWriteBarrier(&___colorComponents_2, value);
	}

	inline static int32_t get_offset_of_colorResult_3() { return static_cast<int32_t>(offsetof(ColorTool_t1574844603_StaticFields, ___colorResult_3)); }
	inline Color_t2020392075  get_colorResult_3() const { return ___colorResult_3; }
	inline Color_t2020392075 * get_address_of_colorResult_3() { return &___colorResult_3; }
	inline void set_colorResult_3(Color_t2020392075  value)
	{
		___colorResult_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
