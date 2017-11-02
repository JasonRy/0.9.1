#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// StaffControl_MainInterface
struct StaffControl_MainInterface_t1010620252;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<DynamicEffect>
struct List_1_t3454581168;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonModel
struct  ButtonModel_t459036387  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button[] ButtonModel::allBtn
	ButtonU5BU5D_t3071100561* ___allBtn_2;
	// StaffControl_MainInterface ButtonModel::SCM
	StaffControl_MainInterface_t1010620252 * ___SCM_3;
	// UnityEngine.RectTransform ButtonModel::mainInterFace
	RectTransform_t3349966182 * ___mainInterFace_4;
	// UnityEngine.RectTransform ButtonModel::areaLeft
	RectTransform_t3349966182 * ___areaLeft_5;
	// UnityEngine.RectTransform ButtonModel::areaRight
	RectTransform_t3349966182 * ___areaRight_6;
	// UnityEngine.RectTransform ButtonModel::projectLeft
	RectTransform_t3349966182 * ___projectLeft_7;
	// UnityEngine.RectTransform ButtonModel::projectRight
	RectTransform_t3349966182 * ___projectRight_8;
	// UnityEngine.RectTransform ButtonModel::staffLeft
	RectTransform_t3349966182 * ___staffLeft_9;
	// UnityEngine.RectTransform ButtonModel::staffRight
	RectTransform_t3349966182 * ___staffRight_10;
	// UnityEngine.Transform ButtonModel::halfParent
	Transform_t3275118058 * ___halfParent_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ButtonModel::staffLeftObjs
	List_1_t1125654279 * ___staffLeftObjs_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ButtonModel::staffRightObjs
	List_1_t1125654279 * ___staffRightObjs_13;
	// System.Boolean ButtonModel::nowClickState
	bool ___nowClickState_14;
	// System.String ButtonModel::nowClickName
	String_t* ___nowClickName_15;
	// UnityEngine.GameObject ButtonModel::comingSoon
	GameObject_t1756533147 * ___comingSoon_16;
	// System.Collections.Generic.List`1<DynamicEffect> ButtonModel::DES
	List_1_t3454581168 * ___DES_17;

public:
	inline static int32_t get_offset_of_allBtn_2() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___allBtn_2)); }
	inline ButtonU5BU5D_t3071100561* get_allBtn_2() const { return ___allBtn_2; }
	inline ButtonU5BU5D_t3071100561** get_address_of_allBtn_2() { return &___allBtn_2; }
	inline void set_allBtn_2(ButtonU5BU5D_t3071100561* value)
	{
		___allBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___allBtn_2, value);
	}

	inline static int32_t get_offset_of_SCM_3() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___SCM_3)); }
	inline StaffControl_MainInterface_t1010620252 * get_SCM_3() const { return ___SCM_3; }
	inline StaffControl_MainInterface_t1010620252 ** get_address_of_SCM_3() { return &___SCM_3; }
	inline void set_SCM_3(StaffControl_MainInterface_t1010620252 * value)
	{
		___SCM_3 = value;
		Il2CppCodeGenWriteBarrier(&___SCM_3, value);
	}

	inline static int32_t get_offset_of_mainInterFace_4() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___mainInterFace_4)); }
	inline RectTransform_t3349966182 * get_mainInterFace_4() const { return ___mainInterFace_4; }
	inline RectTransform_t3349966182 ** get_address_of_mainInterFace_4() { return &___mainInterFace_4; }
	inline void set_mainInterFace_4(RectTransform_t3349966182 * value)
	{
		___mainInterFace_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainInterFace_4, value);
	}

	inline static int32_t get_offset_of_areaLeft_5() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___areaLeft_5)); }
	inline RectTransform_t3349966182 * get_areaLeft_5() const { return ___areaLeft_5; }
	inline RectTransform_t3349966182 ** get_address_of_areaLeft_5() { return &___areaLeft_5; }
	inline void set_areaLeft_5(RectTransform_t3349966182 * value)
	{
		___areaLeft_5 = value;
		Il2CppCodeGenWriteBarrier(&___areaLeft_5, value);
	}

	inline static int32_t get_offset_of_areaRight_6() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___areaRight_6)); }
	inline RectTransform_t3349966182 * get_areaRight_6() const { return ___areaRight_6; }
	inline RectTransform_t3349966182 ** get_address_of_areaRight_6() { return &___areaRight_6; }
	inline void set_areaRight_6(RectTransform_t3349966182 * value)
	{
		___areaRight_6 = value;
		Il2CppCodeGenWriteBarrier(&___areaRight_6, value);
	}

	inline static int32_t get_offset_of_projectLeft_7() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___projectLeft_7)); }
	inline RectTransform_t3349966182 * get_projectLeft_7() const { return ___projectLeft_7; }
	inline RectTransform_t3349966182 ** get_address_of_projectLeft_7() { return &___projectLeft_7; }
	inline void set_projectLeft_7(RectTransform_t3349966182 * value)
	{
		___projectLeft_7 = value;
		Il2CppCodeGenWriteBarrier(&___projectLeft_7, value);
	}

	inline static int32_t get_offset_of_projectRight_8() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___projectRight_8)); }
	inline RectTransform_t3349966182 * get_projectRight_8() const { return ___projectRight_8; }
	inline RectTransform_t3349966182 ** get_address_of_projectRight_8() { return &___projectRight_8; }
	inline void set_projectRight_8(RectTransform_t3349966182 * value)
	{
		___projectRight_8 = value;
		Il2CppCodeGenWriteBarrier(&___projectRight_8, value);
	}

	inline static int32_t get_offset_of_staffLeft_9() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___staffLeft_9)); }
	inline RectTransform_t3349966182 * get_staffLeft_9() const { return ___staffLeft_9; }
	inline RectTransform_t3349966182 ** get_address_of_staffLeft_9() { return &___staffLeft_9; }
	inline void set_staffLeft_9(RectTransform_t3349966182 * value)
	{
		___staffLeft_9 = value;
		Il2CppCodeGenWriteBarrier(&___staffLeft_9, value);
	}

	inline static int32_t get_offset_of_staffRight_10() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___staffRight_10)); }
	inline RectTransform_t3349966182 * get_staffRight_10() const { return ___staffRight_10; }
	inline RectTransform_t3349966182 ** get_address_of_staffRight_10() { return &___staffRight_10; }
	inline void set_staffRight_10(RectTransform_t3349966182 * value)
	{
		___staffRight_10 = value;
		Il2CppCodeGenWriteBarrier(&___staffRight_10, value);
	}

	inline static int32_t get_offset_of_halfParent_11() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___halfParent_11)); }
	inline Transform_t3275118058 * get_halfParent_11() const { return ___halfParent_11; }
	inline Transform_t3275118058 ** get_address_of_halfParent_11() { return &___halfParent_11; }
	inline void set_halfParent_11(Transform_t3275118058 * value)
	{
		___halfParent_11 = value;
		Il2CppCodeGenWriteBarrier(&___halfParent_11, value);
	}

	inline static int32_t get_offset_of_staffLeftObjs_12() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___staffLeftObjs_12)); }
	inline List_1_t1125654279 * get_staffLeftObjs_12() const { return ___staffLeftObjs_12; }
	inline List_1_t1125654279 ** get_address_of_staffLeftObjs_12() { return &___staffLeftObjs_12; }
	inline void set_staffLeftObjs_12(List_1_t1125654279 * value)
	{
		___staffLeftObjs_12 = value;
		Il2CppCodeGenWriteBarrier(&___staffLeftObjs_12, value);
	}

	inline static int32_t get_offset_of_staffRightObjs_13() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___staffRightObjs_13)); }
	inline List_1_t1125654279 * get_staffRightObjs_13() const { return ___staffRightObjs_13; }
	inline List_1_t1125654279 ** get_address_of_staffRightObjs_13() { return &___staffRightObjs_13; }
	inline void set_staffRightObjs_13(List_1_t1125654279 * value)
	{
		___staffRightObjs_13 = value;
		Il2CppCodeGenWriteBarrier(&___staffRightObjs_13, value);
	}

	inline static int32_t get_offset_of_nowClickState_14() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___nowClickState_14)); }
	inline bool get_nowClickState_14() const { return ___nowClickState_14; }
	inline bool* get_address_of_nowClickState_14() { return &___nowClickState_14; }
	inline void set_nowClickState_14(bool value)
	{
		___nowClickState_14 = value;
	}

	inline static int32_t get_offset_of_nowClickName_15() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___nowClickName_15)); }
	inline String_t* get_nowClickName_15() const { return ___nowClickName_15; }
	inline String_t** get_address_of_nowClickName_15() { return &___nowClickName_15; }
	inline void set_nowClickName_15(String_t* value)
	{
		___nowClickName_15 = value;
		Il2CppCodeGenWriteBarrier(&___nowClickName_15, value);
	}

	inline static int32_t get_offset_of_comingSoon_16() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___comingSoon_16)); }
	inline GameObject_t1756533147 * get_comingSoon_16() const { return ___comingSoon_16; }
	inline GameObject_t1756533147 ** get_address_of_comingSoon_16() { return &___comingSoon_16; }
	inline void set_comingSoon_16(GameObject_t1756533147 * value)
	{
		___comingSoon_16 = value;
		Il2CppCodeGenWriteBarrier(&___comingSoon_16, value);
	}

	inline static int32_t get_offset_of_DES_17() { return static_cast<int32_t>(offsetof(ButtonModel_t459036387, ___DES_17)); }
	inline List_1_t3454581168 * get_DES_17() const { return ___DES_17; }
	inline List_1_t3454581168 ** get_address_of_DES_17() { return &___DES_17; }
	inline void set_DES_17(List_1_t3454581168 * value)
	{
		___DES_17 = value;
		Il2CppCodeGenWriteBarrier(&___DES_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
