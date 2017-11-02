#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t4220419316;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowSelectedBump
struct  ShowSelectedBump_t2808182468  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader ShowSelectedBump::selectedShader
	Shader_t2430389951 * ___selectedShader_2;
	// UnityEngine.Color ShowSelectedBump::outterColor
	Color_t2020392075  ___outterColor_3;
	// UnityEngine.Color ShowSelectedBump::myColor
	Color_t2020392075  ___myColor_4;
	// UnityEngine.Shader ShowSelectedBump::myShader
	Shader_t2430389951 * ___myShader_5;
	// UnityEngine.SkinnedMeshRenderer ShowSelectedBump::sRenderer
	SkinnedMeshRenderer_t4220419316 * ___sRenderer_6;
	// System.Boolean ShowSelectedBump::Selected
	bool ___Selected_7;

public:
	inline static int32_t get_offset_of_selectedShader_2() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t2808182468, ___selectedShader_2)); }
	inline Shader_t2430389951 * get_selectedShader_2() const { return ___selectedShader_2; }
	inline Shader_t2430389951 ** get_address_of_selectedShader_2() { return &___selectedShader_2; }
	inline void set_selectedShader_2(Shader_t2430389951 * value)
	{
		___selectedShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectedShader_2, value);
	}

	inline static int32_t get_offset_of_outterColor_3() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t2808182468, ___outterColor_3)); }
	inline Color_t2020392075  get_outterColor_3() const { return ___outterColor_3; }
	inline Color_t2020392075 * get_address_of_outterColor_3() { return &___outterColor_3; }
	inline void set_outterColor_3(Color_t2020392075  value)
	{
		___outterColor_3 = value;
	}

	inline static int32_t get_offset_of_myColor_4() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t2808182468, ___myColor_4)); }
	inline Color_t2020392075  get_myColor_4() const { return ___myColor_4; }
	inline Color_t2020392075 * get_address_of_myColor_4() { return &___myColor_4; }
	inline void set_myColor_4(Color_t2020392075  value)
	{
		___myColor_4 = value;
	}

	inline static int32_t get_offset_of_myShader_5() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t2808182468, ___myShader_5)); }
	inline Shader_t2430389951 * get_myShader_5() const { return ___myShader_5; }
	inline Shader_t2430389951 ** get_address_of_myShader_5() { return &___myShader_5; }
	inline void set_myShader_5(Shader_t2430389951 * value)
	{
		___myShader_5 = value;
		Il2CppCodeGenWriteBarrier(&___myShader_5, value);
	}

	inline static int32_t get_offset_of_sRenderer_6() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t2808182468, ___sRenderer_6)); }
	inline SkinnedMeshRenderer_t4220419316 * get_sRenderer_6() const { return ___sRenderer_6; }
	inline SkinnedMeshRenderer_t4220419316 ** get_address_of_sRenderer_6() { return &___sRenderer_6; }
	inline void set_sRenderer_6(SkinnedMeshRenderer_t4220419316 * value)
	{
		___sRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___sRenderer_6, value);
	}

	inline static int32_t get_offset_of_Selected_7() { return static_cast<int32_t>(offsetof(ShowSelectedBump_t2808182468, ___Selected_7)); }
	inline bool get_Selected_7() const { return ___Selected_7; }
	inline bool* get_address_of_Selected_7() { return &___Selected_7; }
	inline void set_Selected_7(bool value)
	{
		___Selected_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
