#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Node2125495066.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Pie_Graph
struct WMG_Pie_Graph_t252836487;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Pie_Graph_Slice
struct  WMG_Pie_Graph_Slice_t957532058  : public WMG_Node_t2125495066
{
public:
	// UnityEngine.GameObject WMG_Pie_Graph_Slice::objectToMask
	GameObject_t1756533147 * ___objectToMask_17;
	// System.Single WMG_Pie_Graph_Slice::slicePercent
	float ___slicePercent_18;
	// System.Single WMG_Pie_Graph_Slice::slicePercentPosition
	float ___slicePercentPosition_19;
	// WMG_Pie_Graph WMG_Pie_Graph_Slice::pieRef
	WMG_Pie_Graph_t252836487 * ___pieRef_20;
	// System.Int32 WMG_Pie_Graph_Slice::sliceIndex
	int32_t ___sliceIndex_21;

public:
	inline static int32_t get_offset_of_objectToMask_17() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_Slice_t957532058, ___objectToMask_17)); }
	inline GameObject_t1756533147 * get_objectToMask_17() const { return ___objectToMask_17; }
	inline GameObject_t1756533147 ** get_address_of_objectToMask_17() { return &___objectToMask_17; }
	inline void set_objectToMask_17(GameObject_t1756533147 * value)
	{
		___objectToMask_17 = value;
		Il2CppCodeGenWriteBarrier(&___objectToMask_17, value);
	}

	inline static int32_t get_offset_of_slicePercent_18() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_Slice_t957532058, ___slicePercent_18)); }
	inline float get_slicePercent_18() const { return ___slicePercent_18; }
	inline float* get_address_of_slicePercent_18() { return &___slicePercent_18; }
	inline void set_slicePercent_18(float value)
	{
		___slicePercent_18 = value;
	}

	inline static int32_t get_offset_of_slicePercentPosition_19() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_Slice_t957532058, ___slicePercentPosition_19)); }
	inline float get_slicePercentPosition_19() const { return ___slicePercentPosition_19; }
	inline float* get_address_of_slicePercentPosition_19() { return &___slicePercentPosition_19; }
	inline void set_slicePercentPosition_19(float value)
	{
		___slicePercentPosition_19 = value;
	}

	inline static int32_t get_offset_of_pieRef_20() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_Slice_t957532058, ___pieRef_20)); }
	inline WMG_Pie_Graph_t252836487 * get_pieRef_20() const { return ___pieRef_20; }
	inline WMG_Pie_Graph_t252836487 ** get_address_of_pieRef_20() { return &___pieRef_20; }
	inline void set_pieRef_20(WMG_Pie_Graph_t252836487 * value)
	{
		___pieRef_20 = value;
		Il2CppCodeGenWriteBarrier(&___pieRef_20, value);
	}

	inline static int32_t get_offset_of_sliceIndex_21() { return static_cast<int32_t>(offsetof(WMG_Pie_Graph_Slice_t957532058, ___sliceIndex_21)); }
	inline int32_t get_sliceIndex_21() const { return ___sliceIndex_21; }
	inline int32_t* get_address_of_sliceIndex_21() { return &___sliceIndex_21; }
	inline void set_sliceIndex_21(int32_t value)
	{
		___sliceIndex_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
