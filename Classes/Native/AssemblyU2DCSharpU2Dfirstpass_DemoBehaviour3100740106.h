#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// OutlineSystem
struct OutlineSystem_t135695375;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoBehaviour
struct  DemoBehaviour_t3100740106  : public MonoBehaviour_t1158329972
{
public:
	// OutlineSystem DemoBehaviour::outlineSystem
	OutlineSystem_t135695375 * ___outlineSystem_2;
	// UnityEngine.GameObject DemoBehaviour::targetGameobject
	GameObject_t1756533147 * ___targetGameobject_3;

public:
	inline static int32_t get_offset_of_outlineSystem_2() { return static_cast<int32_t>(offsetof(DemoBehaviour_t3100740106, ___outlineSystem_2)); }
	inline OutlineSystem_t135695375 * get_outlineSystem_2() const { return ___outlineSystem_2; }
	inline OutlineSystem_t135695375 ** get_address_of_outlineSystem_2() { return &___outlineSystem_2; }
	inline void set_outlineSystem_2(OutlineSystem_t135695375 * value)
	{
		___outlineSystem_2 = value;
		Il2CppCodeGenWriteBarrier(&___outlineSystem_2, value);
	}

	inline static int32_t get_offset_of_targetGameobject_3() { return static_cast<int32_t>(offsetof(DemoBehaviour_t3100740106, ___targetGameobject_3)); }
	inline GameObject_t1756533147 * get_targetGameobject_3() const { return ___targetGameobject_3; }
	inline GameObject_t1756533147 ** get_address_of_targetGameobject_3() { return &___targetGameobject_3; }
	inline void set_targetGameobject_3(GameObject_t1756533147 * value)
	{
		___targetGameobject_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetGameobject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
