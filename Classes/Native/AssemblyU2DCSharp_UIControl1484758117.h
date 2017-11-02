#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UILabel
struct UILabel_t1795115428;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIControl
struct  UIControl_t1484758117  : public MonoBehaviour_t1158329972
{
public:
	// UILabel UIControl::passwordLabel
	UILabel_t1795115428 * ___passwordLabel_2;
	// UnityEngine.GameObject[] UIControl::loginBtn
	GameObjectU5BU5D_t3057952154* ___loginBtn_3;
	// UnityEngine.UI.Image UIControl::mImage
	Image_t2042527209 * ___mImage_4;
	// System.Boolean UIControl::isGoto
	bool ___isGoto_5;

public:
	inline static int32_t get_offset_of_passwordLabel_2() { return static_cast<int32_t>(offsetof(UIControl_t1484758117, ___passwordLabel_2)); }
	inline UILabel_t1795115428 * get_passwordLabel_2() const { return ___passwordLabel_2; }
	inline UILabel_t1795115428 ** get_address_of_passwordLabel_2() { return &___passwordLabel_2; }
	inline void set_passwordLabel_2(UILabel_t1795115428 * value)
	{
		___passwordLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___passwordLabel_2, value);
	}

	inline static int32_t get_offset_of_loginBtn_3() { return static_cast<int32_t>(offsetof(UIControl_t1484758117, ___loginBtn_3)); }
	inline GameObjectU5BU5D_t3057952154* get_loginBtn_3() const { return ___loginBtn_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_loginBtn_3() { return &___loginBtn_3; }
	inline void set_loginBtn_3(GameObjectU5BU5D_t3057952154* value)
	{
		___loginBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___loginBtn_3, value);
	}

	inline static int32_t get_offset_of_mImage_4() { return static_cast<int32_t>(offsetof(UIControl_t1484758117, ___mImage_4)); }
	inline Image_t2042527209 * get_mImage_4() const { return ___mImage_4; }
	inline Image_t2042527209 ** get_address_of_mImage_4() { return &___mImage_4; }
	inline void set_mImage_4(Image_t2042527209 * value)
	{
		___mImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___mImage_4, value);
	}

	inline static int32_t get_offset_of_isGoto_5() { return static_cast<int32_t>(offsetof(UIControl_t1484758117, ___isGoto_5)); }
	inline bool get_isGoto_5() const { return ___isGoto_5; }
	inline bool* get_address_of_isGoto_5() { return &___isGoto_5; }
	inline void set_isGoto_5(bool value)
	{
		___isGoto_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
