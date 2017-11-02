#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIDragDropItem_Restriction3942216849.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UIButton
struct UIButton_t3377238306;
// UIRoot
struct UIRoot_t389944298;
// UIGrid
struct UIGrid_t2420180906;
// UITable
struct UITable_t3717403602;
// UIDragScrollView
struct UIDragScrollView_t2942595320;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2470076277;
// System.Collections.Generic.List`1<UIDragDropItem>
struct List_1_t3478598994;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragDropItem
struct  UIDragDropItem_t4109477862  : public MonoBehaviour_t1158329972
{
public:
	// UIDragDropItem/Restriction UIDragDropItem::restriction
	int32_t ___restriction_2;
	// System.Boolean UIDragDropItem::cloneOnDrag
	bool ___cloneOnDrag_3;
	// System.Single UIDragDropItem::pressAndHoldDelay
	float ___pressAndHoldDelay_4;
	// System.Boolean UIDragDropItem::interactable
	bool ___interactable_5;
	// UnityEngine.Transform UIDragDropItem::mTrans
	Transform_t3275118058 * ___mTrans_6;
	// UnityEngine.Transform UIDragDropItem::mParent
	Transform_t3275118058 * ___mParent_7;
	// UnityEngine.Collider UIDragDropItem::mCollider
	Collider_t3497673348 * ___mCollider_8;
	// UnityEngine.Collider2D UIDragDropItem::mCollider2D
	Collider2D_t646061738 * ___mCollider2D_9;
	// UIButton UIDragDropItem::mButton
	UIButton_t3377238306 * ___mButton_10;
	// UIRoot UIDragDropItem::mRoot
	UIRoot_t389944298 * ___mRoot_11;
	// UIGrid UIDragDropItem::mGrid
	UIGrid_t2420180906 * ___mGrid_12;
	// UITable UIDragDropItem::mTable
	UITable_t3717403602 * ___mTable_13;
	// System.Single UIDragDropItem::mDragStartTime
	float ___mDragStartTime_14;
	// UIDragScrollView UIDragDropItem::mDragScrollView
	UIDragScrollView_t2942595320 * ___mDragScrollView_15;
	// System.Boolean UIDragDropItem::mPressed
	bool ___mPressed_16;
	// System.Boolean UIDragDropItem::mDragging
	bool ___mDragging_17;
	// UICamera/MouseOrTouch UIDragDropItem::mTouch
	MouseOrTouch_t2470076277 * ___mTouch_18;

public:
	inline static int32_t get_offset_of_restriction_2() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___restriction_2)); }
	inline int32_t get_restriction_2() const { return ___restriction_2; }
	inline int32_t* get_address_of_restriction_2() { return &___restriction_2; }
	inline void set_restriction_2(int32_t value)
	{
		___restriction_2 = value;
	}

	inline static int32_t get_offset_of_cloneOnDrag_3() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___cloneOnDrag_3)); }
	inline bool get_cloneOnDrag_3() const { return ___cloneOnDrag_3; }
	inline bool* get_address_of_cloneOnDrag_3() { return &___cloneOnDrag_3; }
	inline void set_cloneOnDrag_3(bool value)
	{
		___cloneOnDrag_3 = value;
	}

	inline static int32_t get_offset_of_pressAndHoldDelay_4() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___pressAndHoldDelay_4)); }
	inline float get_pressAndHoldDelay_4() const { return ___pressAndHoldDelay_4; }
	inline float* get_address_of_pressAndHoldDelay_4() { return &___pressAndHoldDelay_4; }
	inline void set_pressAndHoldDelay_4(float value)
	{
		___pressAndHoldDelay_4 = value;
	}

	inline static int32_t get_offset_of_interactable_5() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___interactable_5)); }
	inline bool get_interactable_5() const { return ___interactable_5; }
	inline bool* get_address_of_interactable_5() { return &___interactable_5; }
	inline void set_interactable_5(bool value)
	{
		___interactable_5 = value;
	}

	inline static int32_t get_offset_of_mTrans_6() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mTrans_6)); }
	inline Transform_t3275118058 * get_mTrans_6() const { return ___mTrans_6; }
	inline Transform_t3275118058 ** get_address_of_mTrans_6() { return &___mTrans_6; }
	inline void set_mTrans_6(Transform_t3275118058 * value)
	{
		___mTrans_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_6, value);
	}

	inline static int32_t get_offset_of_mParent_7() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mParent_7)); }
	inline Transform_t3275118058 * get_mParent_7() const { return ___mParent_7; }
	inline Transform_t3275118058 ** get_address_of_mParent_7() { return &___mParent_7; }
	inline void set_mParent_7(Transform_t3275118058 * value)
	{
		___mParent_7 = value;
		Il2CppCodeGenWriteBarrier(&___mParent_7, value);
	}

	inline static int32_t get_offset_of_mCollider_8() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mCollider_8)); }
	inline Collider_t3497673348 * get_mCollider_8() const { return ___mCollider_8; }
	inline Collider_t3497673348 ** get_address_of_mCollider_8() { return &___mCollider_8; }
	inline void set_mCollider_8(Collider_t3497673348 * value)
	{
		___mCollider_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCollider_8, value);
	}

	inline static int32_t get_offset_of_mCollider2D_9() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mCollider2D_9)); }
	inline Collider2D_t646061738 * get_mCollider2D_9() const { return ___mCollider2D_9; }
	inline Collider2D_t646061738 ** get_address_of_mCollider2D_9() { return &___mCollider2D_9; }
	inline void set_mCollider2D_9(Collider2D_t646061738 * value)
	{
		___mCollider2D_9 = value;
		Il2CppCodeGenWriteBarrier(&___mCollider2D_9, value);
	}

	inline static int32_t get_offset_of_mButton_10() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mButton_10)); }
	inline UIButton_t3377238306 * get_mButton_10() const { return ___mButton_10; }
	inline UIButton_t3377238306 ** get_address_of_mButton_10() { return &___mButton_10; }
	inline void set_mButton_10(UIButton_t3377238306 * value)
	{
		___mButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___mButton_10, value);
	}

	inline static int32_t get_offset_of_mRoot_11() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mRoot_11)); }
	inline UIRoot_t389944298 * get_mRoot_11() const { return ___mRoot_11; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_11() { return &___mRoot_11; }
	inline void set_mRoot_11(UIRoot_t389944298 * value)
	{
		___mRoot_11 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_11, value);
	}

	inline static int32_t get_offset_of_mGrid_12() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mGrid_12)); }
	inline UIGrid_t2420180906 * get_mGrid_12() const { return ___mGrid_12; }
	inline UIGrid_t2420180906 ** get_address_of_mGrid_12() { return &___mGrid_12; }
	inline void set_mGrid_12(UIGrid_t2420180906 * value)
	{
		___mGrid_12 = value;
		Il2CppCodeGenWriteBarrier(&___mGrid_12, value);
	}

	inline static int32_t get_offset_of_mTable_13() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mTable_13)); }
	inline UITable_t3717403602 * get_mTable_13() const { return ___mTable_13; }
	inline UITable_t3717403602 ** get_address_of_mTable_13() { return &___mTable_13; }
	inline void set_mTable_13(UITable_t3717403602 * value)
	{
		___mTable_13 = value;
		Il2CppCodeGenWriteBarrier(&___mTable_13, value);
	}

	inline static int32_t get_offset_of_mDragStartTime_14() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mDragStartTime_14)); }
	inline float get_mDragStartTime_14() const { return ___mDragStartTime_14; }
	inline float* get_address_of_mDragStartTime_14() { return &___mDragStartTime_14; }
	inline void set_mDragStartTime_14(float value)
	{
		___mDragStartTime_14 = value;
	}

	inline static int32_t get_offset_of_mDragScrollView_15() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mDragScrollView_15)); }
	inline UIDragScrollView_t2942595320 * get_mDragScrollView_15() const { return ___mDragScrollView_15; }
	inline UIDragScrollView_t2942595320 ** get_address_of_mDragScrollView_15() { return &___mDragScrollView_15; }
	inline void set_mDragScrollView_15(UIDragScrollView_t2942595320 * value)
	{
		___mDragScrollView_15 = value;
		Il2CppCodeGenWriteBarrier(&___mDragScrollView_15, value);
	}

	inline static int32_t get_offset_of_mPressed_16() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mPressed_16)); }
	inline bool get_mPressed_16() const { return ___mPressed_16; }
	inline bool* get_address_of_mPressed_16() { return &___mPressed_16; }
	inline void set_mPressed_16(bool value)
	{
		___mPressed_16 = value;
	}

	inline static int32_t get_offset_of_mDragging_17() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mDragging_17)); }
	inline bool get_mDragging_17() const { return ___mDragging_17; }
	inline bool* get_address_of_mDragging_17() { return &___mDragging_17; }
	inline void set_mDragging_17(bool value)
	{
		___mDragging_17 = value;
	}

	inline static int32_t get_offset_of_mTouch_18() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mTouch_18)); }
	inline MouseOrTouch_t2470076277 * get_mTouch_18() const { return ___mTouch_18; }
	inline MouseOrTouch_t2470076277 ** get_address_of_mTouch_18() { return &___mTouch_18; }
	inline void set_mTouch_18(MouseOrTouch_t2470076277 * value)
	{
		___mTouch_18 = value;
		Il2CppCodeGenWriteBarrier(&___mTouch_18, value);
	}
};

struct UIDragDropItem_t4109477862_StaticFields
{
public:
	// System.Collections.Generic.List`1<UIDragDropItem> UIDragDropItem::draggedItems
	List_1_t3478598994 * ___draggedItems_19;

public:
	inline static int32_t get_offset_of_draggedItems_19() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862_StaticFields, ___draggedItems_19)); }
	inline List_1_t3478598994 * get_draggedItems_19() const { return ___draggedItems_19; }
	inline List_1_t3478598994 ** get_address_of_draggedItems_19() { return &___draggedItems_19; }
	inline void set_draggedItems_19(List_1_t3478598994 * value)
	{
		___draggedItems_19 = value;
		Il2CppCodeGenWriteBarrier(&___draggedItems_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
