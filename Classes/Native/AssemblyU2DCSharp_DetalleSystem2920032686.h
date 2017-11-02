#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t1411648341;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t3973682211;
// UnityEngine.Sprite
struct Sprite_t309593783;
// DetalleControl
struct DetalleControl_t634878088;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetalleSystem
struct  DetalleSystem_t2920032686  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> DetalleSystem::AllImageLists
	List_1_t1411648341 * ___AllImageLists_2;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> DetalleSystem::clickSprites
	List_1_t3973682211 * ___clickSprites_3;
	// UnityEngine.Sprite DetalleSystem::clickSprite
	Sprite_t309593783 * ___clickSprite_4;
	// UnityEngine.Sprite DetalleSystem::normalSprite
	Sprite_t309593783 * ___normalSprite_5;
	// UnityEngine.Sprite DetalleSystem::runningSprite
	Sprite_t309593783 * ___runningSprite_6;
	// UnityEngine.Sprite DetalleSystem::faultSprite
	Sprite_t309593783 * ___faultSprite_7;
	// DetalleControl DetalleSystem::DC
	DetalleControl_t634878088 * ___DC_8;

public:
	inline static int32_t get_offset_of_AllImageLists_2() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___AllImageLists_2)); }
	inline List_1_t1411648341 * get_AllImageLists_2() const { return ___AllImageLists_2; }
	inline List_1_t1411648341 ** get_address_of_AllImageLists_2() { return &___AllImageLists_2; }
	inline void set_AllImageLists_2(List_1_t1411648341 * value)
	{
		___AllImageLists_2 = value;
		Il2CppCodeGenWriteBarrier(&___AllImageLists_2, value);
	}

	inline static int32_t get_offset_of_clickSprites_3() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___clickSprites_3)); }
	inline List_1_t3973682211 * get_clickSprites_3() const { return ___clickSprites_3; }
	inline List_1_t3973682211 ** get_address_of_clickSprites_3() { return &___clickSprites_3; }
	inline void set_clickSprites_3(List_1_t3973682211 * value)
	{
		___clickSprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___clickSprites_3, value);
	}

	inline static int32_t get_offset_of_clickSprite_4() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___clickSprite_4)); }
	inline Sprite_t309593783 * get_clickSprite_4() const { return ___clickSprite_4; }
	inline Sprite_t309593783 ** get_address_of_clickSprite_4() { return &___clickSprite_4; }
	inline void set_clickSprite_4(Sprite_t309593783 * value)
	{
		___clickSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___clickSprite_4, value);
	}

	inline static int32_t get_offset_of_normalSprite_5() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___normalSprite_5)); }
	inline Sprite_t309593783 * get_normalSprite_5() const { return ___normalSprite_5; }
	inline Sprite_t309593783 ** get_address_of_normalSprite_5() { return &___normalSprite_5; }
	inline void set_normalSprite_5(Sprite_t309593783 * value)
	{
		___normalSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___normalSprite_5, value);
	}

	inline static int32_t get_offset_of_runningSprite_6() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___runningSprite_6)); }
	inline Sprite_t309593783 * get_runningSprite_6() const { return ___runningSprite_6; }
	inline Sprite_t309593783 ** get_address_of_runningSprite_6() { return &___runningSprite_6; }
	inline void set_runningSprite_6(Sprite_t309593783 * value)
	{
		___runningSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___runningSprite_6, value);
	}

	inline static int32_t get_offset_of_faultSprite_7() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___faultSprite_7)); }
	inline Sprite_t309593783 * get_faultSprite_7() const { return ___faultSprite_7; }
	inline Sprite_t309593783 ** get_address_of_faultSprite_7() { return &___faultSprite_7; }
	inline void set_faultSprite_7(Sprite_t309593783 * value)
	{
		___faultSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___faultSprite_7, value);
	}

	inline static int32_t get_offset_of_DC_8() { return static_cast<int32_t>(offsetof(DetalleSystem_t2920032686, ___DC_8)); }
	inline DetalleControl_t634878088 * get_DC_8() const { return ___DC_8; }
	inline DetalleControl_t634878088 ** get_address_of_DC_8() { return &___DC_8; }
	inline void set_DC_8(DetalleControl_t634878088 * value)
	{
		___DC_8 = value;
		Il2CppCodeGenWriteBarrier(&___DC_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
