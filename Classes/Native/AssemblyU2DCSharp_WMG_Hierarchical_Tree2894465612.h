#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Graph_Manager1488325314.h"
#include "AssemblyU2DCSharp_WMG_Hierarchical_Tree_ResizeProp3067266120.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t390723249;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<WMG_Change_Obj>
struct List_1_t1684053944;
// WMG_Change_Obj
struct WMG_Change_Obj_t2314932812;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Hierarchical_Tree
struct  WMG_Hierarchical_Tree_t2894465612  : public WMG_Graph_Manager_t1488325314
{
public:
	// UnityEngine.GameObject WMG_Hierarchical_Tree::nodeParent
	GameObject_t1756533147 * ___nodeParent_19;
	// UnityEngine.GameObject WMG_Hierarchical_Tree::linkParent
	GameObject_t1756533147 * ___linkParent_20;
	// UnityEngine.Object WMG_Hierarchical_Tree::defaultNodePrefab
	Object_t1021602117 * ___defaultNodePrefab_21;
	// UnityEngine.Object WMG_Hierarchical_Tree::linkPrefab
	Object_t1021602117 * ___linkPrefab_22;
	// System.Int32 WMG_Hierarchical_Tree::numNodes
	int32_t ___numNodes_23;
	// System.Int32 WMG_Hierarchical_Tree::numLinks
	int32_t ___numLinks_24;
	// System.Collections.Generic.List`1<UnityEngine.Object> WMG_Hierarchical_Tree::nodePrefabs
	List_1_t390723249 * ___nodePrefabs_25;
	// System.Collections.Generic.List`1<System.Int32> WMG_Hierarchical_Tree::nodeColumns
	List_1_t1440998580 * ___nodeColumns_26;
	// System.Collections.Generic.List`1<System.Int32> WMG_Hierarchical_Tree::nodeRows
	List_1_t1440998580 * ___nodeRows_27;
	// System.Collections.Generic.List`1<System.Int32> WMG_Hierarchical_Tree::linkNodeFromIDs
	List_1_t1440998580 * ___linkNodeFromIDs_28;
	// System.Collections.Generic.List`1<System.Int32> WMG_Hierarchical_Tree::linkNodeToIDs
	List_1_t1440998580 * ___linkNodeToIDs_29;
	// UnityEngine.Object WMG_Hierarchical_Tree::invisibleNodePrefab
	Object_t1021602117 * ___invisibleNodePrefab_30;
	// System.Int32 WMG_Hierarchical_Tree::numInvisibleNodes
	int32_t ___numInvisibleNodes_31;
	// System.Collections.Generic.List`1<System.Int32> WMG_Hierarchical_Tree::invisibleNodeColumns
	List_1_t1440998580 * ___invisibleNodeColumns_32;
	// System.Collections.Generic.List`1<System.Int32> WMG_Hierarchical_Tree::invisibleNodeRows
	List_1_t1440998580 * ___invisibleNodeRows_33;
	// System.Single WMG_Hierarchical_Tree::_gridLengthX
	float ____gridLengthX_34;
	// System.Single WMG_Hierarchical_Tree::_gridLengthY
	float ____gridLengthY_35;
	// System.Int32 WMG_Hierarchical_Tree::_nodeWidthHeight
	int32_t ____nodeWidthHeight_36;
	// System.Single WMG_Hierarchical_Tree::_nodeRadius
	float ____nodeRadius_37;
	// System.Boolean WMG_Hierarchical_Tree::_squareNodes
	bool ____squareNodes_38;
	// System.Boolean WMG_Hierarchical_Tree::_resizeEnabled
	bool ____resizeEnabled_39;
	// WMG_Hierarchical_Tree/ResizeProperties WMG_Hierarchical_Tree::_resizeProperties
	int32_t ____resizeProperties_40;
	// System.Single WMG_Hierarchical_Tree::cachedContainerWidth
	float ___cachedContainerWidth_41;
	// System.Single WMG_Hierarchical_Tree::cachedContainerHeight
	float ___cachedContainerHeight_42;
	// System.Single WMG_Hierarchical_Tree::origWidth
	float ___origWidth_43;
	// System.Single WMG_Hierarchical_Tree::origHeight
	float ___origHeight_44;
	// System.Int32 WMG_Hierarchical_Tree::origNodeWidthHeight
	int32_t ___origNodeWidthHeight_45;
	// System.Single WMG_Hierarchical_Tree::origNodeRadius
	float ___origNodeRadius_46;
	// System.Collections.Generic.List`1<WMG_Change_Obj> WMG_Hierarchical_Tree::changeObjs
	List_1_t1684053944 * ___changeObjs_47;
	// WMG_Change_Obj WMG_Hierarchical_Tree::treeC
	WMG_Change_Obj_t2314932812 * ___treeC_48;
	// WMG_Change_Obj WMG_Hierarchical_Tree::resizeC
	WMG_Change_Obj_t2314932812 * ___resizeC_49;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Hierarchical_Tree::treeNodes
	List_1_t1125654279 * ___treeNodes_50;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Hierarchical_Tree::treeLinks
	List_1_t1125654279 * ___treeLinks_51;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WMG_Hierarchical_Tree::treeInvisibleNodes
	List_1_t1125654279 * ___treeInvisibleNodes_52;
	// System.Boolean WMG_Hierarchical_Tree::hasInit
	bool ___hasInit_53;

public:
	inline static int32_t get_offset_of_nodeParent_19() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___nodeParent_19)); }
	inline GameObject_t1756533147 * get_nodeParent_19() const { return ___nodeParent_19; }
	inline GameObject_t1756533147 ** get_address_of_nodeParent_19() { return &___nodeParent_19; }
	inline void set_nodeParent_19(GameObject_t1756533147 * value)
	{
		___nodeParent_19 = value;
		Il2CppCodeGenWriteBarrier(&___nodeParent_19, value);
	}

	inline static int32_t get_offset_of_linkParent_20() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___linkParent_20)); }
	inline GameObject_t1756533147 * get_linkParent_20() const { return ___linkParent_20; }
	inline GameObject_t1756533147 ** get_address_of_linkParent_20() { return &___linkParent_20; }
	inline void set_linkParent_20(GameObject_t1756533147 * value)
	{
		___linkParent_20 = value;
		Il2CppCodeGenWriteBarrier(&___linkParent_20, value);
	}

	inline static int32_t get_offset_of_defaultNodePrefab_21() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___defaultNodePrefab_21)); }
	inline Object_t1021602117 * get_defaultNodePrefab_21() const { return ___defaultNodePrefab_21; }
	inline Object_t1021602117 ** get_address_of_defaultNodePrefab_21() { return &___defaultNodePrefab_21; }
	inline void set_defaultNodePrefab_21(Object_t1021602117 * value)
	{
		___defaultNodePrefab_21 = value;
		Il2CppCodeGenWriteBarrier(&___defaultNodePrefab_21, value);
	}

	inline static int32_t get_offset_of_linkPrefab_22() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___linkPrefab_22)); }
	inline Object_t1021602117 * get_linkPrefab_22() const { return ___linkPrefab_22; }
	inline Object_t1021602117 ** get_address_of_linkPrefab_22() { return &___linkPrefab_22; }
	inline void set_linkPrefab_22(Object_t1021602117 * value)
	{
		___linkPrefab_22 = value;
		Il2CppCodeGenWriteBarrier(&___linkPrefab_22, value);
	}

	inline static int32_t get_offset_of_numNodes_23() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___numNodes_23)); }
	inline int32_t get_numNodes_23() const { return ___numNodes_23; }
	inline int32_t* get_address_of_numNodes_23() { return &___numNodes_23; }
	inline void set_numNodes_23(int32_t value)
	{
		___numNodes_23 = value;
	}

	inline static int32_t get_offset_of_numLinks_24() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___numLinks_24)); }
	inline int32_t get_numLinks_24() const { return ___numLinks_24; }
	inline int32_t* get_address_of_numLinks_24() { return &___numLinks_24; }
	inline void set_numLinks_24(int32_t value)
	{
		___numLinks_24 = value;
	}

	inline static int32_t get_offset_of_nodePrefabs_25() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___nodePrefabs_25)); }
	inline List_1_t390723249 * get_nodePrefabs_25() const { return ___nodePrefabs_25; }
	inline List_1_t390723249 ** get_address_of_nodePrefabs_25() { return &___nodePrefabs_25; }
	inline void set_nodePrefabs_25(List_1_t390723249 * value)
	{
		___nodePrefabs_25 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefabs_25, value);
	}

	inline static int32_t get_offset_of_nodeColumns_26() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___nodeColumns_26)); }
	inline List_1_t1440998580 * get_nodeColumns_26() const { return ___nodeColumns_26; }
	inline List_1_t1440998580 ** get_address_of_nodeColumns_26() { return &___nodeColumns_26; }
	inline void set_nodeColumns_26(List_1_t1440998580 * value)
	{
		___nodeColumns_26 = value;
		Il2CppCodeGenWriteBarrier(&___nodeColumns_26, value);
	}

	inline static int32_t get_offset_of_nodeRows_27() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___nodeRows_27)); }
	inline List_1_t1440998580 * get_nodeRows_27() const { return ___nodeRows_27; }
	inline List_1_t1440998580 ** get_address_of_nodeRows_27() { return &___nodeRows_27; }
	inline void set_nodeRows_27(List_1_t1440998580 * value)
	{
		___nodeRows_27 = value;
		Il2CppCodeGenWriteBarrier(&___nodeRows_27, value);
	}

	inline static int32_t get_offset_of_linkNodeFromIDs_28() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___linkNodeFromIDs_28)); }
	inline List_1_t1440998580 * get_linkNodeFromIDs_28() const { return ___linkNodeFromIDs_28; }
	inline List_1_t1440998580 ** get_address_of_linkNodeFromIDs_28() { return &___linkNodeFromIDs_28; }
	inline void set_linkNodeFromIDs_28(List_1_t1440998580 * value)
	{
		___linkNodeFromIDs_28 = value;
		Il2CppCodeGenWriteBarrier(&___linkNodeFromIDs_28, value);
	}

	inline static int32_t get_offset_of_linkNodeToIDs_29() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___linkNodeToIDs_29)); }
	inline List_1_t1440998580 * get_linkNodeToIDs_29() const { return ___linkNodeToIDs_29; }
	inline List_1_t1440998580 ** get_address_of_linkNodeToIDs_29() { return &___linkNodeToIDs_29; }
	inline void set_linkNodeToIDs_29(List_1_t1440998580 * value)
	{
		___linkNodeToIDs_29 = value;
		Il2CppCodeGenWriteBarrier(&___linkNodeToIDs_29, value);
	}

	inline static int32_t get_offset_of_invisibleNodePrefab_30() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___invisibleNodePrefab_30)); }
	inline Object_t1021602117 * get_invisibleNodePrefab_30() const { return ___invisibleNodePrefab_30; }
	inline Object_t1021602117 ** get_address_of_invisibleNodePrefab_30() { return &___invisibleNodePrefab_30; }
	inline void set_invisibleNodePrefab_30(Object_t1021602117 * value)
	{
		___invisibleNodePrefab_30 = value;
		Il2CppCodeGenWriteBarrier(&___invisibleNodePrefab_30, value);
	}

	inline static int32_t get_offset_of_numInvisibleNodes_31() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___numInvisibleNodes_31)); }
	inline int32_t get_numInvisibleNodes_31() const { return ___numInvisibleNodes_31; }
	inline int32_t* get_address_of_numInvisibleNodes_31() { return &___numInvisibleNodes_31; }
	inline void set_numInvisibleNodes_31(int32_t value)
	{
		___numInvisibleNodes_31 = value;
	}

	inline static int32_t get_offset_of_invisibleNodeColumns_32() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___invisibleNodeColumns_32)); }
	inline List_1_t1440998580 * get_invisibleNodeColumns_32() const { return ___invisibleNodeColumns_32; }
	inline List_1_t1440998580 ** get_address_of_invisibleNodeColumns_32() { return &___invisibleNodeColumns_32; }
	inline void set_invisibleNodeColumns_32(List_1_t1440998580 * value)
	{
		___invisibleNodeColumns_32 = value;
		Il2CppCodeGenWriteBarrier(&___invisibleNodeColumns_32, value);
	}

	inline static int32_t get_offset_of_invisibleNodeRows_33() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___invisibleNodeRows_33)); }
	inline List_1_t1440998580 * get_invisibleNodeRows_33() const { return ___invisibleNodeRows_33; }
	inline List_1_t1440998580 ** get_address_of_invisibleNodeRows_33() { return &___invisibleNodeRows_33; }
	inline void set_invisibleNodeRows_33(List_1_t1440998580 * value)
	{
		___invisibleNodeRows_33 = value;
		Il2CppCodeGenWriteBarrier(&___invisibleNodeRows_33, value);
	}

	inline static int32_t get_offset_of__gridLengthX_34() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____gridLengthX_34)); }
	inline float get__gridLengthX_34() const { return ____gridLengthX_34; }
	inline float* get_address_of__gridLengthX_34() { return &____gridLengthX_34; }
	inline void set__gridLengthX_34(float value)
	{
		____gridLengthX_34 = value;
	}

	inline static int32_t get_offset_of__gridLengthY_35() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____gridLengthY_35)); }
	inline float get__gridLengthY_35() const { return ____gridLengthY_35; }
	inline float* get_address_of__gridLengthY_35() { return &____gridLengthY_35; }
	inline void set__gridLengthY_35(float value)
	{
		____gridLengthY_35 = value;
	}

	inline static int32_t get_offset_of__nodeWidthHeight_36() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____nodeWidthHeight_36)); }
	inline int32_t get__nodeWidthHeight_36() const { return ____nodeWidthHeight_36; }
	inline int32_t* get_address_of__nodeWidthHeight_36() { return &____nodeWidthHeight_36; }
	inline void set__nodeWidthHeight_36(int32_t value)
	{
		____nodeWidthHeight_36 = value;
	}

	inline static int32_t get_offset_of__nodeRadius_37() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____nodeRadius_37)); }
	inline float get__nodeRadius_37() const { return ____nodeRadius_37; }
	inline float* get_address_of__nodeRadius_37() { return &____nodeRadius_37; }
	inline void set__nodeRadius_37(float value)
	{
		____nodeRadius_37 = value;
	}

	inline static int32_t get_offset_of__squareNodes_38() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____squareNodes_38)); }
	inline bool get__squareNodes_38() const { return ____squareNodes_38; }
	inline bool* get_address_of__squareNodes_38() { return &____squareNodes_38; }
	inline void set__squareNodes_38(bool value)
	{
		____squareNodes_38 = value;
	}

	inline static int32_t get_offset_of__resizeEnabled_39() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____resizeEnabled_39)); }
	inline bool get__resizeEnabled_39() const { return ____resizeEnabled_39; }
	inline bool* get_address_of__resizeEnabled_39() { return &____resizeEnabled_39; }
	inline void set__resizeEnabled_39(bool value)
	{
		____resizeEnabled_39 = value;
	}

	inline static int32_t get_offset_of__resizeProperties_40() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ____resizeProperties_40)); }
	inline int32_t get__resizeProperties_40() const { return ____resizeProperties_40; }
	inline int32_t* get_address_of__resizeProperties_40() { return &____resizeProperties_40; }
	inline void set__resizeProperties_40(int32_t value)
	{
		____resizeProperties_40 = value;
	}

	inline static int32_t get_offset_of_cachedContainerWidth_41() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___cachedContainerWidth_41)); }
	inline float get_cachedContainerWidth_41() const { return ___cachedContainerWidth_41; }
	inline float* get_address_of_cachedContainerWidth_41() { return &___cachedContainerWidth_41; }
	inline void set_cachedContainerWidth_41(float value)
	{
		___cachedContainerWidth_41 = value;
	}

	inline static int32_t get_offset_of_cachedContainerHeight_42() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___cachedContainerHeight_42)); }
	inline float get_cachedContainerHeight_42() const { return ___cachedContainerHeight_42; }
	inline float* get_address_of_cachedContainerHeight_42() { return &___cachedContainerHeight_42; }
	inline void set_cachedContainerHeight_42(float value)
	{
		___cachedContainerHeight_42 = value;
	}

	inline static int32_t get_offset_of_origWidth_43() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___origWidth_43)); }
	inline float get_origWidth_43() const { return ___origWidth_43; }
	inline float* get_address_of_origWidth_43() { return &___origWidth_43; }
	inline void set_origWidth_43(float value)
	{
		___origWidth_43 = value;
	}

	inline static int32_t get_offset_of_origHeight_44() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___origHeight_44)); }
	inline float get_origHeight_44() const { return ___origHeight_44; }
	inline float* get_address_of_origHeight_44() { return &___origHeight_44; }
	inline void set_origHeight_44(float value)
	{
		___origHeight_44 = value;
	}

	inline static int32_t get_offset_of_origNodeWidthHeight_45() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___origNodeWidthHeight_45)); }
	inline int32_t get_origNodeWidthHeight_45() const { return ___origNodeWidthHeight_45; }
	inline int32_t* get_address_of_origNodeWidthHeight_45() { return &___origNodeWidthHeight_45; }
	inline void set_origNodeWidthHeight_45(int32_t value)
	{
		___origNodeWidthHeight_45 = value;
	}

	inline static int32_t get_offset_of_origNodeRadius_46() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___origNodeRadius_46)); }
	inline float get_origNodeRadius_46() const { return ___origNodeRadius_46; }
	inline float* get_address_of_origNodeRadius_46() { return &___origNodeRadius_46; }
	inline void set_origNodeRadius_46(float value)
	{
		___origNodeRadius_46 = value;
	}

	inline static int32_t get_offset_of_changeObjs_47() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___changeObjs_47)); }
	inline List_1_t1684053944 * get_changeObjs_47() const { return ___changeObjs_47; }
	inline List_1_t1684053944 ** get_address_of_changeObjs_47() { return &___changeObjs_47; }
	inline void set_changeObjs_47(List_1_t1684053944 * value)
	{
		___changeObjs_47 = value;
		Il2CppCodeGenWriteBarrier(&___changeObjs_47, value);
	}

	inline static int32_t get_offset_of_treeC_48() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___treeC_48)); }
	inline WMG_Change_Obj_t2314932812 * get_treeC_48() const { return ___treeC_48; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_treeC_48() { return &___treeC_48; }
	inline void set_treeC_48(WMG_Change_Obj_t2314932812 * value)
	{
		___treeC_48 = value;
		Il2CppCodeGenWriteBarrier(&___treeC_48, value);
	}

	inline static int32_t get_offset_of_resizeC_49() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___resizeC_49)); }
	inline WMG_Change_Obj_t2314932812 * get_resizeC_49() const { return ___resizeC_49; }
	inline WMG_Change_Obj_t2314932812 ** get_address_of_resizeC_49() { return &___resizeC_49; }
	inline void set_resizeC_49(WMG_Change_Obj_t2314932812 * value)
	{
		___resizeC_49 = value;
		Il2CppCodeGenWriteBarrier(&___resizeC_49, value);
	}

	inline static int32_t get_offset_of_treeNodes_50() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___treeNodes_50)); }
	inline List_1_t1125654279 * get_treeNodes_50() const { return ___treeNodes_50; }
	inline List_1_t1125654279 ** get_address_of_treeNodes_50() { return &___treeNodes_50; }
	inline void set_treeNodes_50(List_1_t1125654279 * value)
	{
		___treeNodes_50 = value;
		Il2CppCodeGenWriteBarrier(&___treeNodes_50, value);
	}

	inline static int32_t get_offset_of_treeLinks_51() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___treeLinks_51)); }
	inline List_1_t1125654279 * get_treeLinks_51() const { return ___treeLinks_51; }
	inline List_1_t1125654279 ** get_address_of_treeLinks_51() { return &___treeLinks_51; }
	inline void set_treeLinks_51(List_1_t1125654279 * value)
	{
		___treeLinks_51 = value;
		Il2CppCodeGenWriteBarrier(&___treeLinks_51, value);
	}

	inline static int32_t get_offset_of_treeInvisibleNodes_52() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___treeInvisibleNodes_52)); }
	inline List_1_t1125654279 * get_treeInvisibleNodes_52() const { return ___treeInvisibleNodes_52; }
	inline List_1_t1125654279 ** get_address_of_treeInvisibleNodes_52() { return &___treeInvisibleNodes_52; }
	inline void set_treeInvisibleNodes_52(List_1_t1125654279 * value)
	{
		___treeInvisibleNodes_52 = value;
		Il2CppCodeGenWriteBarrier(&___treeInvisibleNodes_52, value);
	}

	inline static int32_t get_offset_of_hasInit_53() { return static_cast<int32_t>(offsetof(WMG_Hierarchical_Tree_t2894465612, ___hasInit_53)); }
	inline bool get_hasInit_53() const { return ___hasInit_53; }
	inline bool* get_address_of_hasInit_53() { return &___hasInit_53; }
	inline void set_hasInit_53(bool value)
	{
		___hasInit_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
