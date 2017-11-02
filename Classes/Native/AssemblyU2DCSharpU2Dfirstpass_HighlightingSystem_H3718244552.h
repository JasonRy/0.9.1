﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterRenderer/Data
struct  Data_t3718244552 
{
public:
	// UnityEngine.Material HighlightingSystem.HighlighterRenderer/Data::material
	Material_t193706927 * ___material_0;
	// System.Int32 HighlightingSystem.HighlighterRenderer/Data::submeshIndex
	int32_t ___submeshIndex_1;
	// System.Boolean HighlightingSystem.HighlighterRenderer/Data::transparent
	bool ___transparent_2;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(Data_t3718244552, ___material_0)); }
	inline Material_t193706927 * get_material_0() const { return ___material_0; }
	inline Material_t193706927 ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t193706927 * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier(&___material_0, value);
	}

	inline static int32_t get_offset_of_submeshIndex_1() { return static_cast<int32_t>(offsetof(Data_t3718244552, ___submeshIndex_1)); }
	inline int32_t get_submeshIndex_1() const { return ___submeshIndex_1; }
	inline int32_t* get_address_of_submeshIndex_1() { return &___submeshIndex_1; }
	inline void set_submeshIndex_1(int32_t value)
	{
		___submeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_transparent_2() { return static_cast<int32_t>(offsetof(Data_t3718244552, ___transparent_2)); }
	inline bool get_transparent_2() const { return ___transparent_2; }
	inline bool* get_address_of_transparent_2() { return &___transparent_2; }
	inline void set_transparent_2(bool value)
	{
		___transparent_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HighlightingSystem.HighlighterRenderer/Data
struct Data_t3718244552_marshaled_pinvoke
{
	Material_t193706927 * ___material_0;
	int32_t ___submeshIndex_1;
	int32_t ___transparent_2;
};
// Native definition for COM marshalling of HighlightingSystem.HighlighterRenderer/Data
struct Data_t3718244552_marshaled_com
{
	Material_t193706927 * ___material_0;
	int32_t ___submeshIndex_1;
	int32_t ___transparent_2;
};
