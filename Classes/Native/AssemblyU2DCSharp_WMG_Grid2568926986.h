#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Graph_Manager1488325314.h"
#include "AssemblyU2DCSharp_WMG_Grid_gridTypes1177259200.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<WMG_Node>>
struct List_1_t863737330;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Grid
struct  WMG_Grid_t2568926986  : public WMG_Graph_Manager_t1488325314
{
public:
	// System.Boolean WMG_Grid::autoRefresh
	bool ___autoRefresh_19;
	// WMG_Grid/gridTypes WMG_Grid::gridType
	int32_t ___gridType_20;
	// UnityEngine.Object WMG_Grid::nodePrefab
	Object_t1021602117 * ___nodePrefab_21;
	// UnityEngine.Object WMG_Grid::linkPrefab
	Object_t1021602117 * ___linkPrefab_22;
	// System.Int32 WMG_Grid::gridNumNodesX
	int32_t ___gridNumNodesX_23;
	// System.Int32 WMG_Grid::gridNumNodesY
	int32_t ___gridNumNodesY_24;
	// System.Single WMG_Grid::gridLinkLengthX
	float ___gridLinkLengthX_25;
	// System.Single WMG_Grid::gridLinkLengthY
	float ___gridLinkLengthY_26;
	// System.Boolean WMG_Grid::createLinks
	bool ___createLinks_27;
	// System.Boolean WMG_Grid::noVerticalLinks
	bool ___noVerticalLinks_28;
	// System.Boolean WMG_Grid::noHorizontalLinks
	bool ___noHorizontalLinks_29;
	// UnityEngine.Color WMG_Grid::linkColor
	Color_t2020392075  ___linkColor_30;
	// System.Int32 WMG_Grid::linkWidth
	int32_t ___linkWidth_31;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<WMG_Node>> WMG_Grid::gridNodesXY
	List_1_t863737330 * ___gridNodesXY_32;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Grid::gridLinks
	List_1_t1125654279 * ___gridLinks_33;
	// WMG_Grid/gridTypes WMG_Grid::cachedGridType
	int32_t ___cachedGridType_34;
	// UnityEngine.Object WMG_Grid::cachedNodePrefab
	Object_t1021602117 * ___cachedNodePrefab_35;
	// UnityEngine.Object WMG_Grid::cachedLinkPrefab
	Object_t1021602117 * ___cachedLinkPrefab_36;
	// System.Int32 WMG_Grid::cachedGridNumNodesX
	int32_t ___cachedGridNumNodesX_37;
	// System.Int32 WMG_Grid::cachedGridNumNodesY
	int32_t ___cachedGridNumNodesY_38;
	// System.Single WMG_Grid::cachedGridLinkLengthX
	float ___cachedGridLinkLengthX_39;
	// System.Single WMG_Grid::cachedGridLinkLengthY
	float ___cachedGridLinkLengthY_40;
	// System.Boolean WMG_Grid::cachedCreateLinks
	bool ___cachedCreateLinks_41;
	// System.Boolean WMG_Grid::cachedNoVerticalLinks
	bool ___cachedNoVerticalLinks_42;
	// System.Boolean WMG_Grid::cachedNoHorizontalLinks
	bool ___cachedNoHorizontalLinks_43;
	// UnityEngine.Color WMG_Grid::cachedLinkColor
	Color_t2020392075  ___cachedLinkColor_44;
	// System.Int32 WMG_Grid::cachedLinkWidth
	int32_t ___cachedLinkWidth_45;
	// System.Boolean WMG_Grid::gridChanged
	bool ___gridChanged_46;

public:
	inline static int32_t get_offset_of_autoRefresh_19() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___autoRefresh_19)); }
	inline bool get_autoRefresh_19() const { return ___autoRefresh_19; }
	inline bool* get_address_of_autoRefresh_19() { return &___autoRefresh_19; }
	inline void set_autoRefresh_19(bool value)
	{
		___autoRefresh_19 = value;
	}

	inline static int32_t get_offset_of_gridType_20() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridType_20)); }
	inline int32_t get_gridType_20() const { return ___gridType_20; }
	inline int32_t* get_address_of_gridType_20() { return &___gridType_20; }
	inline void set_gridType_20(int32_t value)
	{
		___gridType_20 = value;
	}

	inline static int32_t get_offset_of_nodePrefab_21() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___nodePrefab_21)); }
	inline Object_t1021602117 * get_nodePrefab_21() const { return ___nodePrefab_21; }
	inline Object_t1021602117 ** get_address_of_nodePrefab_21() { return &___nodePrefab_21; }
	inline void set_nodePrefab_21(Object_t1021602117 * value)
	{
		___nodePrefab_21 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefab_21, value);
	}

	inline static int32_t get_offset_of_linkPrefab_22() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___linkPrefab_22)); }
	inline Object_t1021602117 * get_linkPrefab_22() const { return ___linkPrefab_22; }
	inline Object_t1021602117 ** get_address_of_linkPrefab_22() { return &___linkPrefab_22; }
	inline void set_linkPrefab_22(Object_t1021602117 * value)
	{
		___linkPrefab_22 = value;
		Il2CppCodeGenWriteBarrier(&___linkPrefab_22, value);
	}

	inline static int32_t get_offset_of_gridNumNodesX_23() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridNumNodesX_23)); }
	inline int32_t get_gridNumNodesX_23() const { return ___gridNumNodesX_23; }
	inline int32_t* get_address_of_gridNumNodesX_23() { return &___gridNumNodesX_23; }
	inline void set_gridNumNodesX_23(int32_t value)
	{
		___gridNumNodesX_23 = value;
	}

	inline static int32_t get_offset_of_gridNumNodesY_24() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridNumNodesY_24)); }
	inline int32_t get_gridNumNodesY_24() const { return ___gridNumNodesY_24; }
	inline int32_t* get_address_of_gridNumNodesY_24() { return &___gridNumNodesY_24; }
	inline void set_gridNumNodesY_24(int32_t value)
	{
		___gridNumNodesY_24 = value;
	}

	inline static int32_t get_offset_of_gridLinkLengthX_25() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridLinkLengthX_25)); }
	inline float get_gridLinkLengthX_25() const { return ___gridLinkLengthX_25; }
	inline float* get_address_of_gridLinkLengthX_25() { return &___gridLinkLengthX_25; }
	inline void set_gridLinkLengthX_25(float value)
	{
		___gridLinkLengthX_25 = value;
	}

	inline static int32_t get_offset_of_gridLinkLengthY_26() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridLinkLengthY_26)); }
	inline float get_gridLinkLengthY_26() const { return ___gridLinkLengthY_26; }
	inline float* get_address_of_gridLinkLengthY_26() { return &___gridLinkLengthY_26; }
	inline void set_gridLinkLengthY_26(float value)
	{
		___gridLinkLengthY_26 = value;
	}

	inline static int32_t get_offset_of_createLinks_27() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___createLinks_27)); }
	inline bool get_createLinks_27() const { return ___createLinks_27; }
	inline bool* get_address_of_createLinks_27() { return &___createLinks_27; }
	inline void set_createLinks_27(bool value)
	{
		___createLinks_27 = value;
	}

	inline static int32_t get_offset_of_noVerticalLinks_28() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___noVerticalLinks_28)); }
	inline bool get_noVerticalLinks_28() const { return ___noVerticalLinks_28; }
	inline bool* get_address_of_noVerticalLinks_28() { return &___noVerticalLinks_28; }
	inline void set_noVerticalLinks_28(bool value)
	{
		___noVerticalLinks_28 = value;
	}

	inline static int32_t get_offset_of_noHorizontalLinks_29() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___noHorizontalLinks_29)); }
	inline bool get_noHorizontalLinks_29() const { return ___noHorizontalLinks_29; }
	inline bool* get_address_of_noHorizontalLinks_29() { return &___noHorizontalLinks_29; }
	inline void set_noHorizontalLinks_29(bool value)
	{
		___noHorizontalLinks_29 = value;
	}

	inline static int32_t get_offset_of_linkColor_30() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___linkColor_30)); }
	inline Color_t2020392075  get_linkColor_30() const { return ___linkColor_30; }
	inline Color_t2020392075 * get_address_of_linkColor_30() { return &___linkColor_30; }
	inline void set_linkColor_30(Color_t2020392075  value)
	{
		___linkColor_30 = value;
	}

	inline static int32_t get_offset_of_linkWidth_31() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___linkWidth_31)); }
	inline int32_t get_linkWidth_31() const { return ___linkWidth_31; }
	inline int32_t* get_address_of_linkWidth_31() { return &___linkWidth_31; }
	inline void set_linkWidth_31(int32_t value)
	{
		___linkWidth_31 = value;
	}

	inline static int32_t get_offset_of_gridNodesXY_32() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridNodesXY_32)); }
	inline List_1_t863737330 * get_gridNodesXY_32() const { return ___gridNodesXY_32; }
	inline List_1_t863737330 ** get_address_of_gridNodesXY_32() { return &___gridNodesXY_32; }
	inline void set_gridNodesXY_32(List_1_t863737330 * value)
	{
		___gridNodesXY_32 = value;
		Il2CppCodeGenWriteBarrier(&___gridNodesXY_32, value);
	}

	inline static int32_t get_offset_of_gridLinks_33() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridLinks_33)); }
	inline List_1_t1125654279 * get_gridLinks_33() const { return ___gridLinks_33; }
	inline List_1_t1125654279 ** get_address_of_gridLinks_33() { return &___gridLinks_33; }
	inline void set_gridLinks_33(List_1_t1125654279 * value)
	{
		___gridLinks_33 = value;
		Il2CppCodeGenWriteBarrier(&___gridLinks_33, value);
	}

	inline static int32_t get_offset_of_cachedGridType_34() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedGridType_34)); }
	inline int32_t get_cachedGridType_34() const { return ___cachedGridType_34; }
	inline int32_t* get_address_of_cachedGridType_34() { return &___cachedGridType_34; }
	inline void set_cachedGridType_34(int32_t value)
	{
		___cachedGridType_34 = value;
	}

	inline static int32_t get_offset_of_cachedNodePrefab_35() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedNodePrefab_35)); }
	inline Object_t1021602117 * get_cachedNodePrefab_35() const { return ___cachedNodePrefab_35; }
	inline Object_t1021602117 ** get_address_of_cachedNodePrefab_35() { return &___cachedNodePrefab_35; }
	inline void set_cachedNodePrefab_35(Object_t1021602117 * value)
	{
		___cachedNodePrefab_35 = value;
		Il2CppCodeGenWriteBarrier(&___cachedNodePrefab_35, value);
	}

	inline static int32_t get_offset_of_cachedLinkPrefab_36() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedLinkPrefab_36)); }
	inline Object_t1021602117 * get_cachedLinkPrefab_36() const { return ___cachedLinkPrefab_36; }
	inline Object_t1021602117 ** get_address_of_cachedLinkPrefab_36() { return &___cachedLinkPrefab_36; }
	inline void set_cachedLinkPrefab_36(Object_t1021602117 * value)
	{
		___cachedLinkPrefab_36 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLinkPrefab_36, value);
	}

	inline static int32_t get_offset_of_cachedGridNumNodesX_37() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedGridNumNodesX_37)); }
	inline int32_t get_cachedGridNumNodesX_37() const { return ___cachedGridNumNodesX_37; }
	inline int32_t* get_address_of_cachedGridNumNodesX_37() { return &___cachedGridNumNodesX_37; }
	inline void set_cachedGridNumNodesX_37(int32_t value)
	{
		___cachedGridNumNodesX_37 = value;
	}

	inline static int32_t get_offset_of_cachedGridNumNodesY_38() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedGridNumNodesY_38)); }
	inline int32_t get_cachedGridNumNodesY_38() const { return ___cachedGridNumNodesY_38; }
	inline int32_t* get_address_of_cachedGridNumNodesY_38() { return &___cachedGridNumNodesY_38; }
	inline void set_cachedGridNumNodesY_38(int32_t value)
	{
		___cachedGridNumNodesY_38 = value;
	}

	inline static int32_t get_offset_of_cachedGridLinkLengthX_39() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedGridLinkLengthX_39)); }
	inline float get_cachedGridLinkLengthX_39() const { return ___cachedGridLinkLengthX_39; }
	inline float* get_address_of_cachedGridLinkLengthX_39() { return &___cachedGridLinkLengthX_39; }
	inline void set_cachedGridLinkLengthX_39(float value)
	{
		___cachedGridLinkLengthX_39 = value;
	}

	inline static int32_t get_offset_of_cachedGridLinkLengthY_40() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedGridLinkLengthY_40)); }
	inline float get_cachedGridLinkLengthY_40() const { return ___cachedGridLinkLengthY_40; }
	inline float* get_address_of_cachedGridLinkLengthY_40() { return &___cachedGridLinkLengthY_40; }
	inline void set_cachedGridLinkLengthY_40(float value)
	{
		___cachedGridLinkLengthY_40 = value;
	}

	inline static int32_t get_offset_of_cachedCreateLinks_41() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedCreateLinks_41)); }
	inline bool get_cachedCreateLinks_41() const { return ___cachedCreateLinks_41; }
	inline bool* get_address_of_cachedCreateLinks_41() { return &___cachedCreateLinks_41; }
	inline void set_cachedCreateLinks_41(bool value)
	{
		___cachedCreateLinks_41 = value;
	}

	inline static int32_t get_offset_of_cachedNoVerticalLinks_42() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedNoVerticalLinks_42)); }
	inline bool get_cachedNoVerticalLinks_42() const { return ___cachedNoVerticalLinks_42; }
	inline bool* get_address_of_cachedNoVerticalLinks_42() { return &___cachedNoVerticalLinks_42; }
	inline void set_cachedNoVerticalLinks_42(bool value)
	{
		___cachedNoVerticalLinks_42 = value;
	}

	inline static int32_t get_offset_of_cachedNoHorizontalLinks_43() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedNoHorizontalLinks_43)); }
	inline bool get_cachedNoHorizontalLinks_43() const { return ___cachedNoHorizontalLinks_43; }
	inline bool* get_address_of_cachedNoHorizontalLinks_43() { return &___cachedNoHorizontalLinks_43; }
	inline void set_cachedNoHorizontalLinks_43(bool value)
	{
		___cachedNoHorizontalLinks_43 = value;
	}

	inline static int32_t get_offset_of_cachedLinkColor_44() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedLinkColor_44)); }
	inline Color_t2020392075  get_cachedLinkColor_44() const { return ___cachedLinkColor_44; }
	inline Color_t2020392075 * get_address_of_cachedLinkColor_44() { return &___cachedLinkColor_44; }
	inline void set_cachedLinkColor_44(Color_t2020392075  value)
	{
		___cachedLinkColor_44 = value;
	}

	inline static int32_t get_offset_of_cachedLinkWidth_45() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___cachedLinkWidth_45)); }
	inline int32_t get_cachedLinkWidth_45() const { return ___cachedLinkWidth_45; }
	inline int32_t* get_address_of_cachedLinkWidth_45() { return &___cachedLinkWidth_45; }
	inline void set_cachedLinkWidth_45(int32_t value)
	{
		___cachedLinkWidth_45 = value;
	}

	inline static int32_t get_offset_of_gridChanged_46() { return static_cast<int32_t>(offsetof(WMG_Grid_t2568926986, ___gridChanged_46)); }
	inline bool get_gridChanged_46() const { return ___gridChanged_46; }
	inline bool* get_address_of_gridChanged_46() { return &___gridChanged_46; }
	inline void set_gridChanged_46(bool value)
	{
		___gridChanged_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
