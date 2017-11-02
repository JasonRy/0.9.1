#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetailedInformation
struct  DetailedInformation_t24218242  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text DetailedInformation::entityname
	Text_t356221433 * ___entityname_2;
	// UnityEngine.UI.Text DetailedInformation::entity
	Text_t356221433 * ___entity_3;
	// UnityEngine.UI.Text DetailedInformation::entityname_cn
	Text_t356221433 * ___entityname_cn_4;
	// UnityEngine.UI.Image DetailedInformation::entityIcon
	Image_t2042527209 * ___entityIcon_5;
	// UnityEngine.UI.Image DetailedInformation::nowEntityIcon
	Image_t2042527209 * ___nowEntityIcon_6;

public:
	inline static int32_t get_offset_of_entityname_2() { return static_cast<int32_t>(offsetof(DetailedInformation_t24218242, ___entityname_2)); }
	inline Text_t356221433 * get_entityname_2() const { return ___entityname_2; }
	inline Text_t356221433 ** get_address_of_entityname_2() { return &___entityname_2; }
	inline void set_entityname_2(Text_t356221433 * value)
	{
		___entityname_2 = value;
		Il2CppCodeGenWriteBarrier(&___entityname_2, value);
	}

	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(DetailedInformation_t24218242, ___entity_3)); }
	inline Text_t356221433 * get_entity_3() const { return ___entity_3; }
	inline Text_t356221433 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(Text_t356221433 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier(&___entity_3, value);
	}

	inline static int32_t get_offset_of_entityname_cn_4() { return static_cast<int32_t>(offsetof(DetailedInformation_t24218242, ___entityname_cn_4)); }
	inline Text_t356221433 * get_entityname_cn_4() const { return ___entityname_cn_4; }
	inline Text_t356221433 ** get_address_of_entityname_cn_4() { return &___entityname_cn_4; }
	inline void set_entityname_cn_4(Text_t356221433 * value)
	{
		___entityname_cn_4 = value;
		Il2CppCodeGenWriteBarrier(&___entityname_cn_4, value);
	}

	inline static int32_t get_offset_of_entityIcon_5() { return static_cast<int32_t>(offsetof(DetailedInformation_t24218242, ___entityIcon_5)); }
	inline Image_t2042527209 * get_entityIcon_5() const { return ___entityIcon_5; }
	inline Image_t2042527209 ** get_address_of_entityIcon_5() { return &___entityIcon_5; }
	inline void set_entityIcon_5(Image_t2042527209 * value)
	{
		___entityIcon_5 = value;
		Il2CppCodeGenWriteBarrier(&___entityIcon_5, value);
	}

	inline static int32_t get_offset_of_nowEntityIcon_6() { return static_cast<int32_t>(offsetof(DetailedInformation_t24218242, ___nowEntityIcon_6)); }
	inline Image_t2042527209 * get_nowEntityIcon_6() const { return ___nowEntityIcon_6; }
	inline Image_t2042527209 ** get_address_of_nowEntityIcon_6() { return &___nowEntityIcon_6; }
	inline void set_nowEntityIcon_6(Image_t2042527209 * value)
	{
		___nowEntityIcon_6 = value;
		Il2CppCodeGenWriteBarrier(&___nowEntityIcon_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
