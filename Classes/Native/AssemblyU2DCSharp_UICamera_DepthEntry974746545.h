#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/DepthEntry
struct  DepthEntry_t974746545 
{
public:
	// System.Int32 UICamera/DepthEntry::depth
	int32_t ___depth_0;
	// UnityEngine.RaycastHit UICamera/DepthEntry::hit
	RaycastHit_t87180320  ___hit_1;
	// UnityEngine.Vector3 UICamera/DepthEntry::point
	Vector3_t2243707580  ___point_2;
	// UnityEngine.GameObject UICamera/DepthEntry::go
	GameObject_t1756533147 * ___go_3;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(DepthEntry_t974746545, ___depth_0)); }
	inline int32_t get_depth_0() const { return ___depth_0; }
	inline int32_t* get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(int32_t value)
	{
		___depth_0 = value;
	}

	inline static int32_t get_offset_of_hit_1() { return static_cast<int32_t>(offsetof(DepthEntry_t974746545, ___hit_1)); }
	inline RaycastHit_t87180320  get_hit_1() const { return ___hit_1; }
	inline RaycastHit_t87180320 * get_address_of_hit_1() { return &___hit_1; }
	inline void set_hit_1(RaycastHit_t87180320  value)
	{
		___hit_1 = value;
	}

	inline static int32_t get_offset_of_point_2() { return static_cast<int32_t>(offsetof(DepthEntry_t974746545, ___point_2)); }
	inline Vector3_t2243707580  get_point_2() const { return ___point_2; }
	inline Vector3_t2243707580 * get_address_of_point_2() { return &___point_2; }
	inline void set_point_2(Vector3_t2243707580  value)
	{
		___point_2 = value;
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(DepthEntry_t974746545, ___go_3)); }
	inline GameObject_t1756533147 * get_go_3() const { return ___go_3; }
	inline GameObject_t1756533147 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_t1756533147 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier(&___go_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UICamera/DepthEntry
struct DepthEntry_t974746545_marshaled_pinvoke
{
	int32_t ___depth_0;
	RaycastHit_t87180320_marshaled_pinvoke ___hit_1;
	Vector3_t2243707580  ___point_2;
	GameObject_t1756533147 * ___go_3;
};
// Native definition for COM marshalling of UICamera/DepthEntry
struct DepthEntry_t974746545_marshaled_com
{
	int32_t ___depth_0;
	RaycastHit_t87180320_marshaled_com ___hit_1;
	Vector3_t2243707580  ___point_2;
	GameObject_t1756533147 * ___go_3;
};
