#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_JSHighlighterController3635915178.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightingSystem_Hi958778585.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_Single2076509932.h"

// JSHighlighterController
struct JSHighlighterController_t3635915178;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Type
struct Type_t;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HighlightingSystem.Highlighter
struct Highlighter_t958778585;
extern const Il2CppType* Highlighter_t958778585_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Highlighter_t958778585_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t JSHighlighterController_Awake_m3195879649_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m432505302 (Il2CppObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t3819376471 * Component_GetComponent_m4225719715 (Component_t3819376471 * __this, Type_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3764089466 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t3819376471 * GameObject_AddComponent_m3757565614 (GameObject_t1756533147 * __this, Type_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m1909920690 (Color_t2020392075 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void Highlighter_FlashingOn_m2927979613 (Highlighter_t958778585 * __this, Color_t2020392075  p0, Color_t2020392075  p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSHighlighterController::.ctor()
extern "C"  void JSHighlighterController__ctor_m786199926 (JSHighlighterController_t3635915178 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSHighlighterController::Awake()
extern "C"  void JSHighlighterController_Awake_m3195879649 (JSHighlighterController_t3635915178 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSHighlighterController_Awake_m3195879649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Highlighter_t958778585_0_0_0_var), /*hidden argument*/NULL);
		Component_t3819376471 * L_1 = Component_GetComponent_m4225719715(__this, L_0, /*hidden argument*/NULL);
		__this->set_h_2(((Highlighter_t958778585 *)CastclassClass(L_1, Highlighter_t958778585_il2cpp_TypeInfo_var)));
		Highlighter_t958778585 * L_2 = __this->get_h_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_2, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Highlighter_t958778585_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Component_t3819376471 * L_6 = GameObject_AddComponent_m3757565614(L_4, L_5, /*hidden argument*/NULL);
		__this->set_h_2(((Highlighter_t958778585 *)CastclassClass(L_6, Highlighter_t958778585_il2cpp_TypeInfo_var)));
	}

IL_004c:
	{
		return;
	}
}
// System.Void JSHighlighterController::Start()
extern "C"  void JSHighlighterController_Start_m758399262 (JSHighlighterController_t3635915178 * __this, const MethodInfo* method)
{
	{
		Highlighter_t958778585 * L_0 = __this->get_h_2();
		Color_t2020392075  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m1909920690(&L_1, (1.0f), (1.0f), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Color_t2020392075  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m1909920690(&L_2, (1.0f), (1.0f), (((float)((float)0))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Highlighter_FlashingOn_m2927979613(L_0, L_1, L_2, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
