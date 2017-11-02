#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InformationBarFunction
struct  InformationBarFunction_t1765856949  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] InformationBarFunction::informationInterfaces
	GameObjectU5BU5D_t3057952154* ___informationInterfaces_2;
	// UnityEngine.UI.Text[] InformationBarFunction::informationInterfacesInfoTxt
	TextU5BU5D_t4216439300* ___informationInterfacesInfoTxt_3;
	// UnityEngine.UI.Image InformationBarFunction::scrollBar
	Image_t2042527209 * ___scrollBar_4;

public:
	inline static int32_t get_offset_of_informationInterfaces_2() { return static_cast<int32_t>(offsetof(InformationBarFunction_t1765856949, ___informationInterfaces_2)); }
	inline GameObjectU5BU5D_t3057952154* get_informationInterfaces_2() const { return ___informationInterfaces_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_informationInterfaces_2() { return &___informationInterfaces_2; }
	inline void set_informationInterfaces_2(GameObjectU5BU5D_t3057952154* value)
	{
		___informationInterfaces_2 = value;
		Il2CppCodeGenWriteBarrier(&___informationInterfaces_2, value);
	}

	inline static int32_t get_offset_of_informationInterfacesInfoTxt_3() { return static_cast<int32_t>(offsetof(InformationBarFunction_t1765856949, ___informationInterfacesInfoTxt_3)); }
	inline TextU5BU5D_t4216439300* get_informationInterfacesInfoTxt_3() const { return ___informationInterfacesInfoTxt_3; }
	inline TextU5BU5D_t4216439300** get_address_of_informationInterfacesInfoTxt_3() { return &___informationInterfacesInfoTxt_3; }
	inline void set_informationInterfacesInfoTxt_3(TextU5BU5D_t4216439300* value)
	{
		___informationInterfacesInfoTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___informationInterfacesInfoTxt_3, value);
	}

	inline static int32_t get_offset_of_scrollBar_4() { return static_cast<int32_t>(offsetof(InformationBarFunction_t1765856949, ___scrollBar_4)); }
	inline Image_t2042527209 * get_scrollBar_4() const { return ___scrollBar_4; }
	inline Image_t2042527209 ** get_address_of_scrollBar_4() { return &___scrollBar_4; }
	inline void set_scrollBar_4(Image_t2042527209 * value)
	{
		___scrollBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollBar_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
