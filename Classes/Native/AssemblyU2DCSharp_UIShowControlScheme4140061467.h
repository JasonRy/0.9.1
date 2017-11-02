#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIShowControlScheme
struct  UIShowControlScheme_t4140061467  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIShowControlScheme::target
	GameObject_t1756533147 * ___target_2;
	// System.Boolean UIShowControlScheme::mouse
	bool ___mouse_3;
	// System.Boolean UIShowControlScheme::touch
	bool ___touch_4;
	// System.Boolean UIShowControlScheme::controller
	bool ___controller_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIShowControlScheme_t4140061467, ___target_2)); }
	inline GameObject_t1756533147 * get_target_2() const { return ___target_2; }
	inline GameObject_t1756533147 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1756533147 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_mouse_3() { return static_cast<int32_t>(offsetof(UIShowControlScheme_t4140061467, ___mouse_3)); }
	inline bool get_mouse_3() const { return ___mouse_3; }
	inline bool* get_address_of_mouse_3() { return &___mouse_3; }
	inline void set_mouse_3(bool value)
	{
		___mouse_3 = value;
	}

	inline static int32_t get_offset_of_touch_4() { return static_cast<int32_t>(offsetof(UIShowControlScheme_t4140061467, ___touch_4)); }
	inline bool get_touch_4() const { return ___touch_4; }
	inline bool* get_address_of_touch_4() { return &___touch_4; }
	inline void set_touch_4(bool value)
	{
		___touch_4 = value;
	}

	inline static int32_t get_offset_of_controller_5() { return static_cast<int32_t>(offsetof(UIShowControlScheme_t4140061467, ___controller_5)); }
	inline bool get_controller_5() const { return ___controller_5; }
	inline bool* get_address_of_controller_5() { return &___controller_5; }
	inline void set_controller_5(bool value)
	{
		___controller_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
