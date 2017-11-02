#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_GUI_Functions3530287521.h"

// WMG_Legend
struct WMG_Legend_t2854767033;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Series
struct WMG_Series_t1402980291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Legend_Entry
struct  WMG_Legend_Entry_t2252178308  : public WMG_GUI_Functions_t3530287521
{
public:
	// WMG_Legend WMG_Legend_Entry::legend
	WMG_Legend_t2854767033 * ___legend_2;
	// UnityEngine.GameObject WMG_Legend_Entry::label
	GameObject_t1756533147 * ___label_3;
	// UnityEngine.GameObject WMG_Legend_Entry::swatchNode
	GameObject_t1756533147 * ___swatchNode_4;
	// UnityEngine.GameObject WMG_Legend_Entry::line
	GameObject_t1756533147 * ___line_5;
	// UnityEngine.GameObject WMG_Legend_Entry::nodeLeft
	GameObject_t1756533147 * ___nodeLeft_6;
	// UnityEngine.GameObject WMG_Legend_Entry::nodeRight
	GameObject_t1756533147 * ___nodeRight_7;
	// WMG_Series WMG_Legend_Entry::seriesRef
	WMG_Series_t1402980291 * ___seriesRef_8;

public:
	inline static int32_t get_offset_of_legend_2() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___legend_2)); }
	inline WMG_Legend_t2854767033 * get_legend_2() const { return ___legend_2; }
	inline WMG_Legend_t2854767033 ** get_address_of_legend_2() { return &___legend_2; }
	inline void set_legend_2(WMG_Legend_t2854767033 * value)
	{
		___legend_2 = value;
		Il2CppCodeGenWriteBarrier(&___legend_2, value);
	}

	inline static int32_t get_offset_of_label_3() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___label_3)); }
	inline GameObject_t1756533147 * get_label_3() const { return ___label_3; }
	inline GameObject_t1756533147 ** get_address_of_label_3() { return &___label_3; }
	inline void set_label_3(GameObject_t1756533147 * value)
	{
		___label_3 = value;
		Il2CppCodeGenWriteBarrier(&___label_3, value);
	}

	inline static int32_t get_offset_of_swatchNode_4() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___swatchNode_4)); }
	inline GameObject_t1756533147 * get_swatchNode_4() const { return ___swatchNode_4; }
	inline GameObject_t1756533147 ** get_address_of_swatchNode_4() { return &___swatchNode_4; }
	inline void set_swatchNode_4(GameObject_t1756533147 * value)
	{
		___swatchNode_4 = value;
		Il2CppCodeGenWriteBarrier(&___swatchNode_4, value);
	}

	inline static int32_t get_offset_of_line_5() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___line_5)); }
	inline GameObject_t1756533147 * get_line_5() const { return ___line_5; }
	inline GameObject_t1756533147 ** get_address_of_line_5() { return &___line_5; }
	inline void set_line_5(GameObject_t1756533147 * value)
	{
		___line_5 = value;
		Il2CppCodeGenWriteBarrier(&___line_5, value);
	}

	inline static int32_t get_offset_of_nodeLeft_6() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___nodeLeft_6)); }
	inline GameObject_t1756533147 * get_nodeLeft_6() const { return ___nodeLeft_6; }
	inline GameObject_t1756533147 ** get_address_of_nodeLeft_6() { return &___nodeLeft_6; }
	inline void set_nodeLeft_6(GameObject_t1756533147 * value)
	{
		___nodeLeft_6 = value;
		Il2CppCodeGenWriteBarrier(&___nodeLeft_6, value);
	}

	inline static int32_t get_offset_of_nodeRight_7() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___nodeRight_7)); }
	inline GameObject_t1756533147 * get_nodeRight_7() const { return ___nodeRight_7; }
	inline GameObject_t1756533147 ** get_address_of_nodeRight_7() { return &___nodeRight_7; }
	inline void set_nodeRight_7(GameObject_t1756533147 * value)
	{
		___nodeRight_7 = value;
		Il2CppCodeGenWriteBarrier(&___nodeRight_7, value);
	}

	inline static int32_t get_offset_of_seriesRef_8() { return static_cast<int32_t>(offsetof(WMG_Legend_Entry_t2252178308, ___seriesRef_8)); }
	inline WMG_Series_t1402980291 * get_seriesRef_8() const { return ___seriesRef_8; }
	inline WMG_Series_t1402980291 ** get_address_of_seriesRef_8() { return &___seriesRef_8; }
	inline void set_seriesRef_8(WMG_Series_t1402980291 * value)
	{
		___seriesRef_8 = value;
		Il2CppCodeGenWriteBarrier(&___seriesRef_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
