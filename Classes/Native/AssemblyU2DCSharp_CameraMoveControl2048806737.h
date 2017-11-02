#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMoveControl
struct  CameraMoveControl_t2048806737  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraMoveControl::targetP
	GameObject_t1756533147 * ___targetP_2;
	// UnityEngine.GameObject CameraMoveControl::targetR
	GameObject_t1756533147 * ___targetR_3;
	// UnityEngine.GameObject[] CameraMoveControl::allChangeColorObjs
	GameObjectU5BU5D_t3057952154* ___allChangeColorObjs_4;
	// UnityEngine.Color CameraMoveControl::changeColor
	Color_t2020392075  ___changeColor_5;
	// UnityEngine.Material[] CameraMoveControl::allChangeMaterials
	MaterialU5BU5D_t3123989686* ___allChangeMaterials_6;
	// UnityEngine.GameObject CameraMoveControl::waitanIcon
	GameObject_t1756533147 * ___waitanIcon_7;

public:
	inline static int32_t get_offset_of_targetP_2() { return static_cast<int32_t>(offsetof(CameraMoveControl_t2048806737, ___targetP_2)); }
	inline GameObject_t1756533147 * get_targetP_2() const { return ___targetP_2; }
	inline GameObject_t1756533147 ** get_address_of_targetP_2() { return &___targetP_2; }
	inline void set_targetP_2(GameObject_t1756533147 * value)
	{
		___targetP_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetP_2, value);
	}

	inline static int32_t get_offset_of_targetR_3() { return static_cast<int32_t>(offsetof(CameraMoveControl_t2048806737, ___targetR_3)); }
	inline GameObject_t1756533147 * get_targetR_3() const { return ___targetR_3; }
	inline GameObject_t1756533147 ** get_address_of_targetR_3() { return &___targetR_3; }
	inline void set_targetR_3(GameObject_t1756533147 * value)
	{
		___targetR_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetR_3, value);
	}

	inline static int32_t get_offset_of_allChangeColorObjs_4() { return static_cast<int32_t>(offsetof(CameraMoveControl_t2048806737, ___allChangeColorObjs_4)); }
	inline GameObjectU5BU5D_t3057952154* get_allChangeColorObjs_4() const { return ___allChangeColorObjs_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_allChangeColorObjs_4() { return &___allChangeColorObjs_4; }
	inline void set_allChangeColorObjs_4(GameObjectU5BU5D_t3057952154* value)
	{
		___allChangeColorObjs_4 = value;
		Il2CppCodeGenWriteBarrier(&___allChangeColorObjs_4, value);
	}

	inline static int32_t get_offset_of_changeColor_5() { return static_cast<int32_t>(offsetof(CameraMoveControl_t2048806737, ___changeColor_5)); }
	inline Color_t2020392075  get_changeColor_5() const { return ___changeColor_5; }
	inline Color_t2020392075 * get_address_of_changeColor_5() { return &___changeColor_5; }
	inline void set_changeColor_5(Color_t2020392075  value)
	{
		___changeColor_5 = value;
	}

	inline static int32_t get_offset_of_allChangeMaterials_6() { return static_cast<int32_t>(offsetof(CameraMoveControl_t2048806737, ___allChangeMaterials_6)); }
	inline MaterialU5BU5D_t3123989686* get_allChangeMaterials_6() const { return ___allChangeMaterials_6; }
	inline MaterialU5BU5D_t3123989686** get_address_of_allChangeMaterials_6() { return &___allChangeMaterials_6; }
	inline void set_allChangeMaterials_6(MaterialU5BU5D_t3123989686* value)
	{
		___allChangeMaterials_6 = value;
		Il2CppCodeGenWriteBarrier(&___allChangeMaterials_6, value);
	}

	inline static int32_t get_offset_of_waitanIcon_7() { return static_cast<int32_t>(offsetof(CameraMoveControl_t2048806737, ___waitanIcon_7)); }
	inline GameObject_t1756533147 * get_waitanIcon_7() const { return ___waitanIcon_7; }
	inline GameObject_t1756533147 ** get_address_of_waitanIcon_7() { return &___waitanIcon_7; }
	inline void set_waitanIcon_7(GameObject_t1756533147 * value)
	{
		___waitanIcon_7 = value;
		Il2CppCodeGenWriteBarrier(&___waitanIcon_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
