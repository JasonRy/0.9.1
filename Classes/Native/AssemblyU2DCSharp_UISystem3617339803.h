#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// DeviceAttributes
struct DeviceAttributes_t36892813;
// UnityEngine.Canvas
struct Canvas_t209405766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISystem
struct  UISystem_t3617339803  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image UISystem::floorSelectionIm
	Image_t2042527209 * ___floorSelectionIm_2;
	// System.Int32 UISystem::floorIndex
	int32_t ___floorIndex_3;
	// UnityEngine.GameObject UISystem::item_floor
	GameObject_t1756533147 * ___item_floor_4;
	// UnityEngine.GameObject UISystem::DFIObj
	GameObject_t1756533147 * ___DFIObj_5;
	// UnityEngine.Transform UISystem::itemparent
	Transform_t3275118058 * ___itemparent_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UISystem::floorItemList
	List_1_t1125654279 * ___floorItemList_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UISystem::allFloor
	List_1_t1125654279 * ___allFloor_8;
	// System.Int32 UISystem::nowFloorNum
	int32_t ___nowFloorNum_9;
	// UnityEngine.GameObject UISystem::targetObj
	GameObject_t1756533147 * ___targetObj_10;
	// UnityEngine.GameObject UISystem::DevcieCamera
	GameObject_t1756533147 * ___DevcieCamera_11;
	// UnityEngine.GameObject[] UISystem::peopleBuild
	GameObjectU5BU5D_t3057952154* ___peopleBuild_12;
	// UnityEngine.UI.Image UISystem::backgroud
	Image_t2042527209 * ___backgroud_13;
	// UnityEngine.UI.Image UISystem::introduction_top_Image
	Image_t2042527209 * ___introduction_top_Image_14;
	// UnityEngine.UI.Image UISystem::floorSelection_Image
	Image_t2042527209 * ___floorSelection_Image_15;
	// UnityEngine.UI.Image UISystem::fullScreen_Image
	Image_t2042527209 * ___fullScreen_Image_16;
	// System.Boolean UISystem::isFloor
	bool ___isFloor_17;
	// UnityEngine.Vector3 UISystem::floorSelectionMovePosition
	Vector3_t2243707580  ___floorSelectionMovePosition_18;
	// UnityEngine.Color UISystem::floorIconColor
	Color_t2020392075  ___floorIconColor_19;
	// UnityEngine.UI.InputField UISystem::floorText
	InputField_t1631627530 * ___floorText_20;
	// UnityEngine.GameObject UISystem::floorListObj
	GameObject_t1756533147 * ___floorListObj_21;
	// DeviceAttributes UISystem::DA
	DeviceAttributes_t36892813 * ___DA_22;
	// UnityEngine.GameObject UISystem::areaUI
	GameObject_t1756533147 * ___areaUI_23;
	// UnityEngine.Canvas UISystem::normalCanvas
	Canvas_t209405766 * ___normalCanvas_24;
	// UnityEngine.Canvas UISystem::maxCanvas
	Canvas_t209405766 * ___maxCanvas_25;

public:
	inline static int32_t get_offset_of_floorSelectionIm_2() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorSelectionIm_2)); }
	inline Image_t2042527209 * get_floorSelectionIm_2() const { return ___floorSelectionIm_2; }
	inline Image_t2042527209 ** get_address_of_floorSelectionIm_2() { return &___floorSelectionIm_2; }
	inline void set_floorSelectionIm_2(Image_t2042527209 * value)
	{
		___floorSelectionIm_2 = value;
		Il2CppCodeGenWriteBarrier(&___floorSelectionIm_2, value);
	}

	inline static int32_t get_offset_of_floorIndex_3() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorIndex_3)); }
	inline int32_t get_floorIndex_3() const { return ___floorIndex_3; }
	inline int32_t* get_address_of_floorIndex_3() { return &___floorIndex_3; }
	inline void set_floorIndex_3(int32_t value)
	{
		___floorIndex_3 = value;
	}

	inline static int32_t get_offset_of_item_floor_4() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___item_floor_4)); }
	inline GameObject_t1756533147 * get_item_floor_4() const { return ___item_floor_4; }
	inline GameObject_t1756533147 ** get_address_of_item_floor_4() { return &___item_floor_4; }
	inline void set_item_floor_4(GameObject_t1756533147 * value)
	{
		___item_floor_4 = value;
		Il2CppCodeGenWriteBarrier(&___item_floor_4, value);
	}

	inline static int32_t get_offset_of_DFIObj_5() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___DFIObj_5)); }
	inline GameObject_t1756533147 * get_DFIObj_5() const { return ___DFIObj_5; }
	inline GameObject_t1756533147 ** get_address_of_DFIObj_5() { return &___DFIObj_5; }
	inline void set_DFIObj_5(GameObject_t1756533147 * value)
	{
		___DFIObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___DFIObj_5, value);
	}

	inline static int32_t get_offset_of_itemparent_6() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___itemparent_6)); }
	inline Transform_t3275118058 * get_itemparent_6() const { return ___itemparent_6; }
	inline Transform_t3275118058 ** get_address_of_itemparent_6() { return &___itemparent_6; }
	inline void set_itemparent_6(Transform_t3275118058 * value)
	{
		___itemparent_6 = value;
		Il2CppCodeGenWriteBarrier(&___itemparent_6, value);
	}

	inline static int32_t get_offset_of_floorItemList_7() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorItemList_7)); }
	inline List_1_t1125654279 * get_floorItemList_7() const { return ___floorItemList_7; }
	inline List_1_t1125654279 ** get_address_of_floorItemList_7() { return &___floorItemList_7; }
	inline void set_floorItemList_7(List_1_t1125654279 * value)
	{
		___floorItemList_7 = value;
		Il2CppCodeGenWriteBarrier(&___floorItemList_7, value);
	}

	inline static int32_t get_offset_of_allFloor_8() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___allFloor_8)); }
	inline List_1_t1125654279 * get_allFloor_8() const { return ___allFloor_8; }
	inline List_1_t1125654279 ** get_address_of_allFloor_8() { return &___allFloor_8; }
	inline void set_allFloor_8(List_1_t1125654279 * value)
	{
		___allFloor_8 = value;
		Il2CppCodeGenWriteBarrier(&___allFloor_8, value);
	}

	inline static int32_t get_offset_of_nowFloorNum_9() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___nowFloorNum_9)); }
	inline int32_t get_nowFloorNum_9() const { return ___nowFloorNum_9; }
	inline int32_t* get_address_of_nowFloorNum_9() { return &___nowFloorNum_9; }
	inline void set_nowFloorNum_9(int32_t value)
	{
		___nowFloorNum_9 = value;
	}

	inline static int32_t get_offset_of_targetObj_10() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___targetObj_10)); }
	inline GameObject_t1756533147 * get_targetObj_10() const { return ___targetObj_10; }
	inline GameObject_t1756533147 ** get_address_of_targetObj_10() { return &___targetObj_10; }
	inline void set_targetObj_10(GameObject_t1756533147 * value)
	{
		___targetObj_10 = value;
		Il2CppCodeGenWriteBarrier(&___targetObj_10, value);
	}

	inline static int32_t get_offset_of_DevcieCamera_11() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___DevcieCamera_11)); }
	inline GameObject_t1756533147 * get_DevcieCamera_11() const { return ___DevcieCamera_11; }
	inline GameObject_t1756533147 ** get_address_of_DevcieCamera_11() { return &___DevcieCamera_11; }
	inline void set_DevcieCamera_11(GameObject_t1756533147 * value)
	{
		___DevcieCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___DevcieCamera_11, value);
	}

	inline static int32_t get_offset_of_peopleBuild_12() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___peopleBuild_12)); }
	inline GameObjectU5BU5D_t3057952154* get_peopleBuild_12() const { return ___peopleBuild_12; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_peopleBuild_12() { return &___peopleBuild_12; }
	inline void set_peopleBuild_12(GameObjectU5BU5D_t3057952154* value)
	{
		___peopleBuild_12 = value;
		Il2CppCodeGenWriteBarrier(&___peopleBuild_12, value);
	}

	inline static int32_t get_offset_of_backgroud_13() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___backgroud_13)); }
	inline Image_t2042527209 * get_backgroud_13() const { return ___backgroud_13; }
	inline Image_t2042527209 ** get_address_of_backgroud_13() { return &___backgroud_13; }
	inline void set_backgroud_13(Image_t2042527209 * value)
	{
		___backgroud_13 = value;
		Il2CppCodeGenWriteBarrier(&___backgroud_13, value);
	}

	inline static int32_t get_offset_of_introduction_top_Image_14() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___introduction_top_Image_14)); }
	inline Image_t2042527209 * get_introduction_top_Image_14() const { return ___introduction_top_Image_14; }
	inline Image_t2042527209 ** get_address_of_introduction_top_Image_14() { return &___introduction_top_Image_14; }
	inline void set_introduction_top_Image_14(Image_t2042527209 * value)
	{
		___introduction_top_Image_14 = value;
		Il2CppCodeGenWriteBarrier(&___introduction_top_Image_14, value);
	}

	inline static int32_t get_offset_of_floorSelection_Image_15() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorSelection_Image_15)); }
	inline Image_t2042527209 * get_floorSelection_Image_15() const { return ___floorSelection_Image_15; }
	inline Image_t2042527209 ** get_address_of_floorSelection_Image_15() { return &___floorSelection_Image_15; }
	inline void set_floorSelection_Image_15(Image_t2042527209 * value)
	{
		___floorSelection_Image_15 = value;
		Il2CppCodeGenWriteBarrier(&___floorSelection_Image_15, value);
	}

	inline static int32_t get_offset_of_fullScreen_Image_16() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___fullScreen_Image_16)); }
	inline Image_t2042527209 * get_fullScreen_Image_16() const { return ___fullScreen_Image_16; }
	inline Image_t2042527209 ** get_address_of_fullScreen_Image_16() { return &___fullScreen_Image_16; }
	inline void set_fullScreen_Image_16(Image_t2042527209 * value)
	{
		___fullScreen_Image_16 = value;
		Il2CppCodeGenWriteBarrier(&___fullScreen_Image_16, value);
	}

	inline static int32_t get_offset_of_isFloor_17() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___isFloor_17)); }
	inline bool get_isFloor_17() const { return ___isFloor_17; }
	inline bool* get_address_of_isFloor_17() { return &___isFloor_17; }
	inline void set_isFloor_17(bool value)
	{
		___isFloor_17 = value;
	}

	inline static int32_t get_offset_of_floorSelectionMovePosition_18() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorSelectionMovePosition_18)); }
	inline Vector3_t2243707580  get_floorSelectionMovePosition_18() const { return ___floorSelectionMovePosition_18; }
	inline Vector3_t2243707580 * get_address_of_floorSelectionMovePosition_18() { return &___floorSelectionMovePosition_18; }
	inline void set_floorSelectionMovePosition_18(Vector3_t2243707580  value)
	{
		___floorSelectionMovePosition_18 = value;
	}

	inline static int32_t get_offset_of_floorIconColor_19() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorIconColor_19)); }
	inline Color_t2020392075  get_floorIconColor_19() const { return ___floorIconColor_19; }
	inline Color_t2020392075 * get_address_of_floorIconColor_19() { return &___floorIconColor_19; }
	inline void set_floorIconColor_19(Color_t2020392075  value)
	{
		___floorIconColor_19 = value;
	}

	inline static int32_t get_offset_of_floorText_20() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorText_20)); }
	inline InputField_t1631627530 * get_floorText_20() const { return ___floorText_20; }
	inline InputField_t1631627530 ** get_address_of_floorText_20() { return &___floorText_20; }
	inline void set_floorText_20(InputField_t1631627530 * value)
	{
		___floorText_20 = value;
		Il2CppCodeGenWriteBarrier(&___floorText_20, value);
	}

	inline static int32_t get_offset_of_floorListObj_21() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___floorListObj_21)); }
	inline GameObject_t1756533147 * get_floorListObj_21() const { return ___floorListObj_21; }
	inline GameObject_t1756533147 ** get_address_of_floorListObj_21() { return &___floorListObj_21; }
	inline void set_floorListObj_21(GameObject_t1756533147 * value)
	{
		___floorListObj_21 = value;
		Il2CppCodeGenWriteBarrier(&___floorListObj_21, value);
	}

	inline static int32_t get_offset_of_DA_22() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___DA_22)); }
	inline DeviceAttributes_t36892813 * get_DA_22() const { return ___DA_22; }
	inline DeviceAttributes_t36892813 ** get_address_of_DA_22() { return &___DA_22; }
	inline void set_DA_22(DeviceAttributes_t36892813 * value)
	{
		___DA_22 = value;
		Il2CppCodeGenWriteBarrier(&___DA_22, value);
	}

	inline static int32_t get_offset_of_areaUI_23() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___areaUI_23)); }
	inline GameObject_t1756533147 * get_areaUI_23() const { return ___areaUI_23; }
	inline GameObject_t1756533147 ** get_address_of_areaUI_23() { return &___areaUI_23; }
	inline void set_areaUI_23(GameObject_t1756533147 * value)
	{
		___areaUI_23 = value;
		Il2CppCodeGenWriteBarrier(&___areaUI_23, value);
	}

	inline static int32_t get_offset_of_normalCanvas_24() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___normalCanvas_24)); }
	inline Canvas_t209405766 * get_normalCanvas_24() const { return ___normalCanvas_24; }
	inline Canvas_t209405766 ** get_address_of_normalCanvas_24() { return &___normalCanvas_24; }
	inline void set_normalCanvas_24(Canvas_t209405766 * value)
	{
		___normalCanvas_24 = value;
		Il2CppCodeGenWriteBarrier(&___normalCanvas_24, value);
	}

	inline static int32_t get_offset_of_maxCanvas_25() { return static_cast<int32_t>(offsetof(UISystem_t3617339803, ___maxCanvas_25)); }
	inline Canvas_t209405766 * get_maxCanvas_25() const { return ___maxCanvas_25; }
	inline Canvas_t209405766 ** get_address_of_maxCanvas_25() { return &___maxCanvas_25; }
	inline void set_maxCanvas_25(Canvas_t209405766 * value)
	{
		___maxCanvas_25 = value;
		Il2CppCodeGenWriteBarrier(&___maxCanvas_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
