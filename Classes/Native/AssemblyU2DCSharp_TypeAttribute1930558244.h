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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/DeviceProperties>
struct List_1_t1561597113;
// DeviceAttributes
struct DeviceAttributes_t36892813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypeAttribute
struct  TypeAttribute_t1930558244  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text TypeAttribute::typeName
	Text_t356221433 * ___typeName_2;
	// System.Int32 TypeAttribute::normalNum
	int32_t ___normalNum_3;
	// System.Int32 TypeAttribute::faultNum
	int32_t ___faultNum_4;
	// System.Int32 TypeAttribute::offlineNum
	int32_t ___offlineNum_5;
	// UnityEngine.UI.Text TypeAttribute::normalTxt
	Text_t356221433 * ___normalTxt_6;
	// UnityEngine.UI.Text TypeAttribute::faultTxt
	Text_t356221433 * ___faultTxt_7;
	// UnityEngine.UI.Text TypeAttribute::offlineTxt
	Text_t356221433 * ___offlineTxt_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TypeAttribute::childList
	List_1_t1125654279 * ___childList_9;
	// UnityEngine.Transform TypeAttribute::TheSecondaryList
	Transform_t3275118058 * ___TheSecondaryList_10;
	// UnityEngine.GameObject TypeAttribute::itemChild_D
	GameObject_t1756533147 * ___itemChild_D_11;
	// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/DeviceProperties> TypeAttribute::lds
	List_1_t1561597113 * ___lds_12;
	// UnityEngine.GameObject TypeAttribute::allBuild
	GameObject_t1756533147 * ___allBuild_13;
	// UnityEngine.GameObject TypeAttribute::deviceRoonWall
	GameObject_t1756533147 * ___deviceRoonWall_14;
	// System.Boolean TypeAttribute::isSelect
	bool ___isSelect_15;
	// System.Boolean TypeAttribute::isClick
	bool ___isClick_16;
	// UnityEngine.GameObject TypeAttribute::deviceCardObj
	GameObject_t1756533147 * ___deviceCardObj_17;
	// UnityEngine.GameObject TypeAttribute::deviceInformationObj
	GameObject_t1756533147 * ___deviceInformationObj_18;
	// DeviceAttributes TypeAttribute::DA
	DeviceAttributes_t36892813 * ___DA_19;

public:
	inline static int32_t get_offset_of_typeName_2() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___typeName_2)); }
	inline Text_t356221433 * get_typeName_2() const { return ___typeName_2; }
	inline Text_t356221433 ** get_address_of_typeName_2() { return &___typeName_2; }
	inline void set_typeName_2(Text_t356221433 * value)
	{
		___typeName_2 = value;
		Il2CppCodeGenWriteBarrier(&___typeName_2, value);
	}

	inline static int32_t get_offset_of_normalNum_3() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___normalNum_3)); }
	inline int32_t get_normalNum_3() const { return ___normalNum_3; }
	inline int32_t* get_address_of_normalNum_3() { return &___normalNum_3; }
	inline void set_normalNum_3(int32_t value)
	{
		___normalNum_3 = value;
	}

	inline static int32_t get_offset_of_faultNum_4() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___faultNum_4)); }
	inline int32_t get_faultNum_4() const { return ___faultNum_4; }
	inline int32_t* get_address_of_faultNum_4() { return &___faultNum_4; }
	inline void set_faultNum_4(int32_t value)
	{
		___faultNum_4 = value;
	}

	inline static int32_t get_offset_of_offlineNum_5() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___offlineNum_5)); }
	inline int32_t get_offlineNum_5() const { return ___offlineNum_5; }
	inline int32_t* get_address_of_offlineNum_5() { return &___offlineNum_5; }
	inline void set_offlineNum_5(int32_t value)
	{
		___offlineNum_5 = value;
	}

	inline static int32_t get_offset_of_normalTxt_6() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___normalTxt_6)); }
	inline Text_t356221433 * get_normalTxt_6() const { return ___normalTxt_6; }
	inline Text_t356221433 ** get_address_of_normalTxt_6() { return &___normalTxt_6; }
	inline void set_normalTxt_6(Text_t356221433 * value)
	{
		___normalTxt_6 = value;
		Il2CppCodeGenWriteBarrier(&___normalTxt_6, value);
	}

	inline static int32_t get_offset_of_faultTxt_7() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___faultTxt_7)); }
	inline Text_t356221433 * get_faultTxt_7() const { return ___faultTxt_7; }
	inline Text_t356221433 ** get_address_of_faultTxt_7() { return &___faultTxt_7; }
	inline void set_faultTxt_7(Text_t356221433 * value)
	{
		___faultTxt_7 = value;
		Il2CppCodeGenWriteBarrier(&___faultTxt_7, value);
	}

	inline static int32_t get_offset_of_offlineTxt_8() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___offlineTxt_8)); }
	inline Text_t356221433 * get_offlineTxt_8() const { return ___offlineTxt_8; }
	inline Text_t356221433 ** get_address_of_offlineTxt_8() { return &___offlineTxt_8; }
	inline void set_offlineTxt_8(Text_t356221433 * value)
	{
		___offlineTxt_8 = value;
		Il2CppCodeGenWriteBarrier(&___offlineTxt_8, value);
	}

	inline static int32_t get_offset_of_childList_9() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___childList_9)); }
	inline List_1_t1125654279 * get_childList_9() const { return ___childList_9; }
	inline List_1_t1125654279 ** get_address_of_childList_9() { return &___childList_9; }
	inline void set_childList_9(List_1_t1125654279 * value)
	{
		___childList_9 = value;
		Il2CppCodeGenWriteBarrier(&___childList_9, value);
	}

	inline static int32_t get_offset_of_TheSecondaryList_10() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___TheSecondaryList_10)); }
	inline Transform_t3275118058 * get_TheSecondaryList_10() const { return ___TheSecondaryList_10; }
	inline Transform_t3275118058 ** get_address_of_TheSecondaryList_10() { return &___TheSecondaryList_10; }
	inline void set_TheSecondaryList_10(Transform_t3275118058 * value)
	{
		___TheSecondaryList_10 = value;
		Il2CppCodeGenWriteBarrier(&___TheSecondaryList_10, value);
	}

	inline static int32_t get_offset_of_itemChild_D_11() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___itemChild_D_11)); }
	inline GameObject_t1756533147 * get_itemChild_D_11() const { return ___itemChild_D_11; }
	inline GameObject_t1756533147 ** get_address_of_itemChild_D_11() { return &___itemChild_D_11; }
	inline void set_itemChild_D_11(GameObject_t1756533147 * value)
	{
		___itemChild_D_11 = value;
		Il2CppCodeGenWriteBarrier(&___itemChild_D_11, value);
	}

	inline static int32_t get_offset_of_lds_12() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___lds_12)); }
	inline List_1_t1561597113 * get_lds_12() const { return ___lds_12; }
	inline List_1_t1561597113 ** get_address_of_lds_12() { return &___lds_12; }
	inline void set_lds_12(List_1_t1561597113 * value)
	{
		___lds_12 = value;
		Il2CppCodeGenWriteBarrier(&___lds_12, value);
	}

	inline static int32_t get_offset_of_allBuild_13() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___allBuild_13)); }
	inline GameObject_t1756533147 * get_allBuild_13() const { return ___allBuild_13; }
	inline GameObject_t1756533147 ** get_address_of_allBuild_13() { return &___allBuild_13; }
	inline void set_allBuild_13(GameObject_t1756533147 * value)
	{
		___allBuild_13 = value;
		Il2CppCodeGenWriteBarrier(&___allBuild_13, value);
	}

	inline static int32_t get_offset_of_deviceRoonWall_14() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___deviceRoonWall_14)); }
	inline GameObject_t1756533147 * get_deviceRoonWall_14() const { return ___deviceRoonWall_14; }
	inline GameObject_t1756533147 ** get_address_of_deviceRoonWall_14() { return &___deviceRoonWall_14; }
	inline void set_deviceRoonWall_14(GameObject_t1756533147 * value)
	{
		___deviceRoonWall_14 = value;
		Il2CppCodeGenWriteBarrier(&___deviceRoonWall_14, value);
	}

	inline static int32_t get_offset_of_isSelect_15() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___isSelect_15)); }
	inline bool get_isSelect_15() const { return ___isSelect_15; }
	inline bool* get_address_of_isSelect_15() { return &___isSelect_15; }
	inline void set_isSelect_15(bool value)
	{
		___isSelect_15 = value;
	}

	inline static int32_t get_offset_of_isClick_16() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___isClick_16)); }
	inline bool get_isClick_16() const { return ___isClick_16; }
	inline bool* get_address_of_isClick_16() { return &___isClick_16; }
	inline void set_isClick_16(bool value)
	{
		___isClick_16 = value;
	}

	inline static int32_t get_offset_of_deviceCardObj_17() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___deviceCardObj_17)); }
	inline GameObject_t1756533147 * get_deviceCardObj_17() const { return ___deviceCardObj_17; }
	inline GameObject_t1756533147 ** get_address_of_deviceCardObj_17() { return &___deviceCardObj_17; }
	inline void set_deviceCardObj_17(GameObject_t1756533147 * value)
	{
		___deviceCardObj_17 = value;
		Il2CppCodeGenWriteBarrier(&___deviceCardObj_17, value);
	}

	inline static int32_t get_offset_of_deviceInformationObj_18() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___deviceInformationObj_18)); }
	inline GameObject_t1756533147 * get_deviceInformationObj_18() const { return ___deviceInformationObj_18; }
	inline GameObject_t1756533147 ** get_address_of_deviceInformationObj_18() { return &___deviceInformationObj_18; }
	inline void set_deviceInformationObj_18(GameObject_t1756533147 * value)
	{
		___deviceInformationObj_18 = value;
		Il2CppCodeGenWriteBarrier(&___deviceInformationObj_18, value);
	}

	inline static int32_t get_offset_of_DA_19() { return static_cast<int32_t>(offsetof(TypeAttribute_t1930558244, ___DA_19)); }
	inline DeviceAttributes_t36892813 * get_DA_19() const { return ___DA_19; }
	inline DeviceAttributes_t36892813 ** get_address_of_DA_19() { return &___DA_19; }
	inline void set_DA_19(DeviceAttributes_t36892813 * value)
	{
		___DA_19 = value;
		Il2CppCodeGenWriteBarrier(&___DA_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
