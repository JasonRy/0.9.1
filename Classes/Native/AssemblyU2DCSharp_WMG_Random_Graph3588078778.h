#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_WMG_Graph_Manager1488325314.h"

// UnityEngine.Object
struct Object_t1021602117;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Random_Graph
struct  WMG_Random_Graph_t3588078778  : public WMG_Graph_Manager_t1488325314
{
public:
	// UnityEngine.Object WMG_Random_Graph::nodePrefab
	Object_t1021602117 * ___nodePrefab_19;
	// UnityEngine.Object WMG_Random_Graph::linkPrefab
	Object_t1021602117 * ___linkPrefab_20;
	// System.Int32 WMG_Random_Graph::numNodes
	int32_t ___numNodes_21;
	// System.Single WMG_Random_Graph::minAngle
	float ___minAngle_22;
	// System.Single WMG_Random_Graph::minAngleRange
	float ___minAngleRange_23;
	// System.Single WMG_Random_Graph::maxAngleRange
	float ___maxAngleRange_24;
	// System.Int32 WMG_Random_Graph::minRandomNumberNeighbors
	int32_t ___minRandomNumberNeighbors_25;
	// System.Int32 WMG_Random_Graph::maxRandomNumberNeighbors
	int32_t ___maxRandomNumberNeighbors_26;
	// System.Single WMG_Random_Graph::minRandomLinkLength
	float ___minRandomLinkLength_27;
	// System.Single WMG_Random_Graph::maxRandomLinkLength
	float ___maxRandomLinkLength_28;
	// System.Boolean WMG_Random_Graph::centerPropogate
	bool ___centerPropogate_29;
	// System.Boolean WMG_Random_Graph::noLinkIntersection
	bool ___noLinkIntersection_30;
	// System.Boolean WMG_Random_Graph::noNodeIntersection
	bool ___noNodeIntersection_31;
	// System.Single WMG_Random_Graph::noNodeIntersectionRadiusPadding
	float ___noNodeIntersectionRadiusPadding_32;
	// System.Int32 WMG_Random_Graph::maxNeighborAttempts
	int32_t ___maxNeighborAttempts_33;
	// System.Boolean WMG_Random_Graph::noLinkNodeIntersection
	bool ___noLinkNodeIntersection_34;
	// System.Single WMG_Random_Graph::noLinkNodeIntersectionRadiusPadding
	float ___noLinkNodeIntersectionRadiusPadding_35;
	// System.Boolean WMG_Random_Graph::createOnStart
	bool ___createOnStart_36;
	// System.Boolean WMG_Random_Graph::debugRandomGraph
	bool ___debugRandomGraph_37;

public:
	inline static int32_t get_offset_of_nodePrefab_19() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___nodePrefab_19)); }
	inline Object_t1021602117 * get_nodePrefab_19() const { return ___nodePrefab_19; }
	inline Object_t1021602117 ** get_address_of_nodePrefab_19() { return &___nodePrefab_19; }
	inline void set_nodePrefab_19(Object_t1021602117 * value)
	{
		___nodePrefab_19 = value;
		Il2CppCodeGenWriteBarrier(&___nodePrefab_19, value);
	}

	inline static int32_t get_offset_of_linkPrefab_20() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___linkPrefab_20)); }
	inline Object_t1021602117 * get_linkPrefab_20() const { return ___linkPrefab_20; }
	inline Object_t1021602117 ** get_address_of_linkPrefab_20() { return &___linkPrefab_20; }
	inline void set_linkPrefab_20(Object_t1021602117 * value)
	{
		___linkPrefab_20 = value;
		Il2CppCodeGenWriteBarrier(&___linkPrefab_20, value);
	}

	inline static int32_t get_offset_of_numNodes_21() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___numNodes_21)); }
	inline int32_t get_numNodes_21() const { return ___numNodes_21; }
	inline int32_t* get_address_of_numNodes_21() { return &___numNodes_21; }
	inline void set_numNodes_21(int32_t value)
	{
		___numNodes_21 = value;
	}

	inline static int32_t get_offset_of_minAngle_22() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___minAngle_22)); }
	inline float get_minAngle_22() const { return ___minAngle_22; }
	inline float* get_address_of_minAngle_22() { return &___minAngle_22; }
	inline void set_minAngle_22(float value)
	{
		___minAngle_22 = value;
	}

	inline static int32_t get_offset_of_minAngleRange_23() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___minAngleRange_23)); }
	inline float get_minAngleRange_23() const { return ___minAngleRange_23; }
	inline float* get_address_of_minAngleRange_23() { return &___minAngleRange_23; }
	inline void set_minAngleRange_23(float value)
	{
		___minAngleRange_23 = value;
	}

	inline static int32_t get_offset_of_maxAngleRange_24() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___maxAngleRange_24)); }
	inline float get_maxAngleRange_24() const { return ___maxAngleRange_24; }
	inline float* get_address_of_maxAngleRange_24() { return &___maxAngleRange_24; }
	inline void set_maxAngleRange_24(float value)
	{
		___maxAngleRange_24 = value;
	}

	inline static int32_t get_offset_of_minRandomNumberNeighbors_25() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___minRandomNumberNeighbors_25)); }
	inline int32_t get_minRandomNumberNeighbors_25() const { return ___minRandomNumberNeighbors_25; }
	inline int32_t* get_address_of_minRandomNumberNeighbors_25() { return &___minRandomNumberNeighbors_25; }
	inline void set_minRandomNumberNeighbors_25(int32_t value)
	{
		___minRandomNumberNeighbors_25 = value;
	}

	inline static int32_t get_offset_of_maxRandomNumberNeighbors_26() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___maxRandomNumberNeighbors_26)); }
	inline int32_t get_maxRandomNumberNeighbors_26() const { return ___maxRandomNumberNeighbors_26; }
	inline int32_t* get_address_of_maxRandomNumberNeighbors_26() { return &___maxRandomNumberNeighbors_26; }
	inline void set_maxRandomNumberNeighbors_26(int32_t value)
	{
		___maxRandomNumberNeighbors_26 = value;
	}

	inline static int32_t get_offset_of_minRandomLinkLength_27() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___minRandomLinkLength_27)); }
	inline float get_minRandomLinkLength_27() const { return ___minRandomLinkLength_27; }
	inline float* get_address_of_minRandomLinkLength_27() { return &___minRandomLinkLength_27; }
	inline void set_minRandomLinkLength_27(float value)
	{
		___minRandomLinkLength_27 = value;
	}

	inline static int32_t get_offset_of_maxRandomLinkLength_28() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___maxRandomLinkLength_28)); }
	inline float get_maxRandomLinkLength_28() const { return ___maxRandomLinkLength_28; }
	inline float* get_address_of_maxRandomLinkLength_28() { return &___maxRandomLinkLength_28; }
	inline void set_maxRandomLinkLength_28(float value)
	{
		___maxRandomLinkLength_28 = value;
	}

	inline static int32_t get_offset_of_centerPropogate_29() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___centerPropogate_29)); }
	inline bool get_centerPropogate_29() const { return ___centerPropogate_29; }
	inline bool* get_address_of_centerPropogate_29() { return &___centerPropogate_29; }
	inline void set_centerPropogate_29(bool value)
	{
		___centerPropogate_29 = value;
	}

	inline static int32_t get_offset_of_noLinkIntersection_30() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___noLinkIntersection_30)); }
	inline bool get_noLinkIntersection_30() const { return ___noLinkIntersection_30; }
	inline bool* get_address_of_noLinkIntersection_30() { return &___noLinkIntersection_30; }
	inline void set_noLinkIntersection_30(bool value)
	{
		___noLinkIntersection_30 = value;
	}

	inline static int32_t get_offset_of_noNodeIntersection_31() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___noNodeIntersection_31)); }
	inline bool get_noNodeIntersection_31() const { return ___noNodeIntersection_31; }
	inline bool* get_address_of_noNodeIntersection_31() { return &___noNodeIntersection_31; }
	inline void set_noNodeIntersection_31(bool value)
	{
		___noNodeIntersection_31 = value;
	}

	inline static int32_t get_offset_of_noNodeIntersectionRadiusPadding_32() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___noNodeIntersectionRadiusPadding_32)); }
	inline float get_noNodeIntersectionRadiusPadding_32() const { return ___noNodeIntersectionRadiusPadding_32; }
	inline float* get_address_of_noNodeIntersectionRadiusPadding_32() { return &___noNodeIntersectionRadiusPadding_32; }
	inline void set_noNodeIntersectionRadiusPadding_32(float value)
	{
		___noNodeIntersectionRadiusPadding_32 = value;
	}

	inline static int32_t get_offset_of_maxNeighborAttempts_33() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___maxNeighborAttempts_33)); }
	inline int32_t get_maxNeighborAttempts_33() const { return ___maxNeighborAttempts_33; }
	inline int32_t* get_address_of_maxNeighborAttempts_33() { return &___maxNeighborAttempts_33; }
	inline void set_maxNeighborAttempts_33(int32_t value)
	{
		___maxNeighborAttempts_33 = value;
	}

	inline static int32_t get_offset_of_noLinkNodeIntersection_34() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___noLinkNodeIntersection_34)); }
	inline bool get_noLinkNodeIntersection_34() const { return ___noLinkNodeIntersection_34; }
	inline bool* get_address_of_noLinkNodeIntersection_34() { return &___noLinkNodeIntersection_34; }
	inline void set_noLinkNodeIntersection_34(bool value)
	{
		___noLinkNodeIntersection_34 = value;
	}

	inline static int32_t get_offset_of_noLinkNodeIntersectionRadiusPadding_35() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___noLinkNodeIntersectionRadiusPadding_35)); }
	inline float get_noLinkNodeIntersectionRadiusPadding_35() const { return ___noLinkNodeIntersectionRadiusPadding_35; }
	inline float* get_address_of_noLinkNodeIntersectionRadiusPadding_35() { return &___noLinkNodeIntersectionRadiusPadding_35; }
	inline void set_noLinkNodeIntersectionRadiusPadding_35(float value)
	{
		___noLinkNodeIntersectionRadiusPadding_35 = value;
	}

	inline static int32_t get_offset_of_createOnStart_36() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___createOnStart_36)); }
	inline bool get_createOnStart_36() const { return ___createOnStart_36; }
	inline bool* get_address_of_createOnStart_36() { return &___createOnStart_36; }
	inline void set_createOnStart_36(bool value)
	{
		___createOnStart_36 = value;
	}

	inline static int32_t get_offset_of_debugRandomGraph_37() { return static_cast<int32_t>(offsetof(WMG_Random_Graph_t3588078778, ___debugRandomGraph_37)); }
	inline bool get_debugRandomGraph_37() const { return ___debugRandomGraph_37; }
	inline bool* get_address_of_debugRandomGraph_37() { return &___debugRandomGraph_37; }
	inline void set_debugRandomGraph_37(bool value)
	{
		___debugRandomGraph_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
