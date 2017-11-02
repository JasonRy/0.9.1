#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// WMG_Change_Obj/ObjChangedHandler
struct ObjChangedHandler_t3393583158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Change_Obj
struct  WMG_Change_Obj_t2314932812  : public Il2CppObject
{
public:
	// System.Boolean WMG_Change_Obj::changesPaused
	bool ___changesPaused_0;
	// System.Boolean WMG_Change_Obj::changePaused
	bool ___changePaused_1;
	// WMG_Change_Obj/ObjChangedHandler WMG_Change_Obj::OnChange
	ObjChangedHandler_t3393583158 * ___OnChange_2;

public:
	inline static int32_t get_offset_of_changesPaused_0() { return static_cast<int32_t>(offsetof(WMG_Change_Obj_t2314932812, ___changesPaused_0)); }
	inline bool get_changesPaused_0() const { return ___changesPaused_0; }
	inline bool* get_address_of_changesPaused_0() { return &___changesPaused_0; }
	inline void set_changesPaused_0(bool value)
	{
		___changesPaused_0 = value;
	}

	inline static int32_t get_offset_of_changePaused_1() { return static_cast<int32_t>(offsetof(WMG_Change_Obj_t2314932812, ___changePaused_1)); }
	inline bool get_changePaused_1() const { return ___changePaused_1; }
	inline bool* get_address_of_changePaused_1() { return &___changePaused_1; }
	inline void set_changePaused_1(bool value)
	{
		___changePaused_1 = value;
	}

	inline static int32_t get_offset_of_OnChange_2() { return static_cast<int32_t>(offsetof(WMG_Change_Obj_t2314932812, ___OnChange_2)); }
	inline ObjChangedHandler_t3393583158 * get_OnChange_2() const { return ___OnChange_2; }
	inline ObjChangedHandler_t3393583158 ** get_address_of_OnChange_2() { return &___OnChange_2; }
	inline void set_OnChange_2(ObjChangedHandler_t3393583158 * value)
	{
		___OnChange_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnChange_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
