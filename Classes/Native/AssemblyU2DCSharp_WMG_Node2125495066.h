#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_GUI_Functions3530287521.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// WMG_Series
struct WMG_Series_t1402980291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Node
struct  WMG_Node_t2125495066  : public WMG_GUI_Functions_t3530287521
{
public:
	// System.Int32 WMG_Node::id
	int32_t ___id_2;
	// System.Single WMG_Node::radius
	float ___radius_3;
	// System.Boolean WMG_Node::isSquare
	bool ___isSquare_4;
	// System.Int32 WMG_Node::numLinks
	int32_t ___numLinks_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Node::links
	List_1_t1125654279 * ___links_6;
	// System.Collections.Generic.List`1<System.Single> WMG_Node::linkAngles
	List_1_t1445631064 * ___linkAngles_7;
	// UnityEngine.GameObject WMG_Node::objectToScale
	GameObject_t1756533147 * ___objectToScale_8;
	// UnityEngine.GameObject WMG_Node::objectToColor
	GameObject_t1756533147 * ___objectToColor_9;
	// UnityEngine.GameObject WMG_Node::objectToLabel
	GameObject_t1756533147 * ___objectToLabel_10;
	// System.Boolean WMG_Node::isSelected
	bool ___isSelected_11;
	// System.Boolean WMG_Node::wasSelected
	bool ___wasSelected_12;
	// System.Boolean WMG_Node::BFS_mark
	bool ___BFS_mark_13;
	// System.Int32 WMG_Node::BFS_depth
	int32_t ___BFS_depth_14;
	// System.Single WMG_Node::Dijkstra_depth
	float ___Dijkstra_depth_15;
	// WMG_Series WMG_Node::seriesRef
	WMG_Series_t1402980291 * ___seriesRef_16;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_isSquare_4() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___isSquare_4)); }
	inline bool get_isSquare_4() const { return ___isSquare_4; }
	inline bool* get_address_of_isSquare_4() { return &___isSquare_4; }
	inline void set_isSquare_4(bool value)
	{
		___isSquare_4 = value;
	}

	inline static int32_t get_offset_of_numLinks_5() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___numLinks_5)); }
	inline int32_t get_numLinks_5() const { return ___numLinks_5; }
	inline int32_t* get_address_of_numLinks_5() { return &___numLinks_5; }
	inline void set_numLinks_5(int32_t value)
	{
		___numLinks_5 = value;
	}

	inline static int32_t get_offset_of_links_6() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___links_6)); }
	inline List_1_t1125654279 * get_links_6() const { return ___links_6; }
	inline List_1_t1125654279 ** get_address_of_links_6() { return &___links_6; }
	inline void set_links_6(List_1_t1125654279 * value)
	{
		___links_6 = value;
		Il2CppCodeGenWriteBarrier(&___links_6, value);
	}

	inline static int32_t get_offset_of_linkAngles_7() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___linkAngles_7)); }
	inline List_1_t1445631064 * get_linkAngles_7() const { return ___linkAngles_7; }
	inline List_1_t1445631064 ** get_address_of_linkAngles_7() { return &___linkAngles_7; }
	inline void set_linkAngles_7(List_1_t1445631064 * value)
	{
		___linkAngles_7 = value;
		Il2CppCodeGenWriteBarrier(&___linkAngles_7, value);
	}

	inline static int32_t get_offset_of_objectToScale_8() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___objectToScale_8)); }
	inline GameObject_t1756533147 * get_objectToScale_8() const { return ___objectToScale_8; }
	inline GameObject_t1756533147 ** get_address_of_objectToScale_8() { return &___objectToScale_8; }
	inline void set_objectToScale_8(GameObject_t1756533147 * value)
	{
		___objectToScale_8 = value;
		Il2CppCodeGenWriteBarrier(&___objectToScale_8, value);
	}

	inline static int32_t get_offset_of_objectToColor_9() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___objectToColor_9)); }
	inline GameObject_t1756533147 * get_objectToColor_9() const { return ___objectToColor_9; }
	inline GameObject_t1756533147 ** get_address_of_objectToColor_9() { return &___objectToColor_9; }
	inline void set_objectToColor_9(GameObject_t1756533147 * value)
	{
		___objectToColor_9 = value;
		Il2CppCodeGenWriteBarrier(&___objectToColor_9, value);
	}

	inline static int32_t get_offset_of_objectToLabel_10() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___objectToLabel_10)); }
	inline GameObject_t1756533147 * get_objectToLabel_10() const { return ___objectToLabel_10; }
	inline GameObject_t1756533147 ** get_address_of_objectToLabel_10() { return &___objectToLabel_10; }
	inline void set_objectToLabel_10(GameObject_t1756533147 * value)
	{
		___objectToLabel_10 = value;
		Il2CppCodeGenWriteBarrier(&___objectToLabel_10, value);
	}

	inline static int32_t get_offset_of_isSelected_11() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___isSelected_11)); }
	inline bool get_isSelected_11() const { return ___isSelected_11; }
	inline bool* get_address_of_isSelected_11() { return &___isSelected_11; }
	inline void set_isSelected_11(bool value)
	{
		___isSelected_11 = value;
	}

	inline static int32_t get_offset_of_wasSelected_12() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___wasSelected_12)); }
	inline bool get_wasSelected_12() const { return ___wasSelected_12; }
	inline bool* get_address_of_wasSelected_12() { return &___wasSelected_12; }
	inline void set_wasSelected_12(bool value)
	{
		___wasSelected_12 = value;
	}

	inline static int32_t get_offset_of_BFS_mark_13() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___BFS_mark_13)); }
	inline bool get_BFS_mark_13() const { return ___BFS_mark_13; }
	inline bool* get_address_of_BFS_mark_13() { return &___BFS_mark_13; }
	inline void set_BFS_mark_13(bool value)
	{
		___BFS_mark_13 = value;
	}

	inline static int32_t get_offset_of_BFS_depth_14() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___BFS_depth_14)); }
	inline int32_t get_BFS_depth_14() const { return ___BFS_depth_14; }
	inline int32_t* get_address_of_BFS_depth_14() { return &___BFS_depth_14; }
	inline void set_BFS_depth_14(int32_t value)
	{
		___BFS_depth_14 = value;
	}

	inline static int32_t get_offset_of_Dijkstra_depth_15() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___Dijkstra_depth_15)); }
	inline float get_Dijkstra_depth_15() const { return ___Dijkstra_depth_15; }
	inline float* get_address_of_Dijkstra_depth_15() { return &___Dijkstra_depth_15; }
	inline void set_Dijkstra_depth_15(float value)
	{
		___Dijkstra_depth_15 = value;
	}

	inline static int32_t get_offset_of_seriesRef_16() { return static_cast<int32_t>(offsetof(WMG_Node_t2125495066, ___seriesRef_16)); }
	inline WMG_Series_t1402980291 * get_seriesRef_16() const { return ___seriesRef_16; }
	inline WMG_Series_t1402980291 ** get_address_of_seriesRef_16() { return &___seriesRef_16; }
	inline void set_seriesRef_16(WMG_Series_t1402980291 * value)
	{
		___seriesRef_16 = value;
		Il2CppCodeGenWriteBarrier(&___seriesRef_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
