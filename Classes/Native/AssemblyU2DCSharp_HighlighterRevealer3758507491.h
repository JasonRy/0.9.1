#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// System.Collections.Generic.HashSet`1<HighlighterItem>
struct HashSet_1_t1267393722;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlighterRevealer
struct  HighlighterRevealer_t3758507491  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HighlighterRevealer::radius
	float ___radius_2;
	// UnityEngine.LayerMask HighlighterRevealer::layerMask
	LayerMask_t3188175821  ___layerMask_3;
	// System.Collections.Generic.HashSet`1<HighlighterItem> HighlighterRevealer::items
	HashSet_1_t1267393722 * ___items_4;
	// UnityEngine.Transform HighlighterRevealer::tr
	Transform_t3275118058 * ___tr_5;
	// UnityEngine.Mesh HighlighterRevealer::sphereMesh
	Mesh_t1356156583 * ___sphereMesh_6;
	// UnityEngine.Material HighlighterRevealer::sphereMaterial
	Material_t193706927 * ___sphereMaterial_7;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(HighlighterRevealer_t3758507491, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_layerMask_3() { return static_cast<int32_t>(offsetof(HighlighterRevealer_t3758507491, ___layerMask_3)); }
	inline LayerMask_t3188175821  get_layerMask_3() const { return ___layerMask_3; }
	inline LayerMask_t3188175821 * get_address_of_layerMask_3() { return &___layerMask_3; }
	inline void set_layerMask_3(LayerMask_t3188175821  value)
	{
		___layerMask_3 = value;
	}

	inline static int32_t get_offset_of_items_4() { return static_cast<int32_t>(offsetof(HighlighterRevealer_t3758507491, ___items_4)); }
	inline HashSet_1_t1267393722 * get_items_4() const { return ___items_4; }
	inline HashSet_1_t1267393722 ** get_address_of_items_4() { return &___items_4; }
	inline void set_items_4(HashSet_1_t1267393722 * value)
	{
		___items_4 = value;
		Il2CppCodeGenWriteBarrier(&___items_4, value);
	}

	inline static int32_t get_offset_of_tr_5() { return static_cast<int32_t>(offsetof(HighlighterRevealer_t3758507491, ___tr_5)); }
	inline Transform_t3275118058 * get_tr_5() const { return ___tr_5; }
	inline Transform_t3275118058 ** get_address_of_tr_5() { return &___tr_5; }
	inline void set_tr_5(Transform_t3275118058 * value)
	{
		___tr_5 = value;
		Il2CppCodeGenWriteBarrier(&___tr_5, value);
	}

	inline static int32_t get_offset_of_sphereMesh_6() { return static_cast<int32_t>(offsetof(HighlighterRevealer_t3758507491, ___sphereMesh_6)); }
	inline Mesh_t1356156583 * get_sphereMesh_6() const { return ___sphereMesh_6; }
	inline Mesh_t1356156583 ** get_address_of_sphereMesh_6() { return &___sphereMesh_6; }
	inline void set_sphereMesh_6(Mesh_t1356156583 * value)
	{
		___sphereMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&___sphereMesh_6, value);
	}

	inline static int32_t get_offset_of_sphereMaterial_7() { return static_cast<int32_t>(offsetof(HighlighterRevealer_t3758507491, ___sphereMaterial_7)); }
	inline Material_t193706927 * get_sphereMaterial_7() const { return ___sphereMaterial_7; }
	inline Material_t193706927 ** get_address_of_sphereMaterial_7() { return &___sphereMaterial_7; }
	inline void set_sphereMaterial_7(Material_t193706927 * value)
	{
		___sphereMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___sphereMaterial_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
