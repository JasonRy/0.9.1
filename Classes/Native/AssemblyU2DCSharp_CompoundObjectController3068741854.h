#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;
// UnityEngine.Shader[]
struct ShaderU5BU5D_t1916779366;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// HighlightingSystem.Highlighter
struct Highlighter_t958778585;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompoundObjectController
struct  CompoundObjectController_t3068741854  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Mesh[] CompoundObjectController::meshes
	MeshU5BU5D_t894826206* ___meshes_2;
	// UnityEngine.Shader[] CompoundObjectController::shaders
	ShaderU5BU5D_t1916779366* ___shaders_3;
	// UnityEngine.Transform CompoundObjectController::tr
	Transform_t3275118058 * ___tr_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CompoundObjectController::objects
	List_1_t1125654279 * ___objects_5;
	// System.Int32 CompoundObjectController::shaderIndex
	int32_t ___shaderIndex_6;
	// HighlightingSystem.Highlighter CompoundObjectController::h
	Highlighter_t958778585 * ___h_7;

public:
	inline static int32_t get_offset_of_meshes_2() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___meshes_2)); }
	inline MeshU5BU5D_t894826206* get_meshes_2() const { return ___meshes_2; }
	inline MeshU5BU5D_t894826206** get_address_of_meshes_2() { return &___meshes_2; }
	inline void set_meshes_2(MeshU5BU5D_t894826206* value)
	{
		___meshes_2 = value;
		Il2CppCodeGenWriteBarrier(&___meshes_2, value);
	}

	inline static int32_t get_offset_of_shaders_3() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___shaders_3)); }
	inline ShaderU5BU5D_t1916779366* get_shaders_3() const { return ___shaders_3; }
	inline ShaderU5BU5D_t1916779366** get_address_of_shaders_3() { return &___shaders_3; }
	inline void set_shaders_3(ShaderU5BU5D_t1916779366* value)
	{
		___shaders_3 = value;
		Il2CppCodeGenWriteBarrier(&___shaders_3, value);
	}

	inline static int32_t get_offset_of_tr_4() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___tr_4)); }
	inline Transform_t3275118058 * get_tr_4() const { return ___tr_4; }
	inline Transform_t3275118058 ** get_address_of_tr_4() { return &___tr_4; }
	inline void set_tr_4(Transform_t3275118058 * value)
	{
		___tr_4 = value;
		Il2CppCodeGenWriteBarrier(&___tr_4, value);
	}

	inline static int32_t get_offset_of_objects_5() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___objects_5)); }
	inline List_1_t1125654279 * get_objects_5() const { return ___objects_5; }
	inline List_1_t1125654279 ** get_address_of_objects_5() { return &___objects_5; }
	inline void set_objects_5(List_1_t1125654279 * value)
	{
		___objects_5 = value;
		Il2CppCodeGenWriteBarrier(&___objects_5, value);
	}

	inline static int32_t get_offset_of_shaderIndex_6() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___shaderIndex_6)); }
	inline int32_t get_shaderIndex_6() const { return ___shaderIndex_6; }
	inline int32_t* get_address_of_shaderIndex_6() { return &___shaderIndex_6; }
	inline void set_shaderIndex_6(int32_t value)
	{
		___shaderIndex_6 = value;
	}

	inline static int32_t get_offset_of_h_7() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___h_7)); }
	inline Highlighter_t958778585 * get_h_7() const { return ___h_7; }
	inline Highlighter_t958778585 ** get_address_of_h_7() { return &___h_7; }
	inline void set_h_7(Highlighter_t958778585 * value)
	{
		___h_7 = value;
		Il2CppCodeGenWriteBarrier(&___h_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
