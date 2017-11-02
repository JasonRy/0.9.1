#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.ComputeShader
struct ComputeShader_t3573922338;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Compute_Shader
struct  WMG_Compute_Shader_t1525039799  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ComputeShader WMG_Compute_Shader::computeShader
	ComputeShader_t3573922338 * ___computeShader_2;
	// System.Int32 WMG_Compute_Shader::texSize
	int32_t ___texSize_3;
	// System.Int32 WMG_Compute_Shader::kernelHandle
	int32_t ___kernelHandle_4;
	// UnityEngine.RenderTexture WMG_Compute_Shader::renderTexture
	RenderTexture_t2666733923 * ___renderTexture_5;
	// UnityEngine.UI.RawImage WMG_Compute_Shader::rawImg
	RawImage_t2749640213 * ___rawImg_6;
	// System.Boolean WMG_Compute_Shader::hasInit
	bool ___hasInit_7;

public:
	inline static int32_t get_offset_of_computeShader_2() { return static_cast<int32_t>(offsetof(WMG_Compute_Shader_t1525039799, ___computeShader_2)); }
	inline ComputeShader_t3573922338 * get_computeShader_2() const { return ___computeShader_2; }
	inline ComputeShader_t3573922338 ** get_address_of_computeShader_2() { return &___computeShader_2; }
	inline void set_computeShader_2(ComputeShader_t3573922338 * value)
	{
		___computeShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___computeShader_2, value);
	}

	inline static int32_t get_offset_of_texSize_3() { return static_cast<int32_t>(offsetof(WMG_Compute_Shader_t1525039799, ___texSize_3)); }
	inline int32_t get_texSize_3() const { return ___texSize_3; }
	inline int32_t* get_address_of_texSize_3() { return &___texSize_3; }
	inline void set_texSize_3(int32_t value)
	{
		___texSize_3 = value;
	}

	inline static int32_t get_offset_of_kernelHandle_4() { return static_cast<int32_t>(offsetof(WMG_Compute_Shader_t1525039799, ___kernelHandle_4)); }
	inline int32_t get_kernelHandle_4() const { return ___kernelHandle_4; }
	inline int32_t* get_address_of_kernelHandle_4() { return &___kernelHandle_4; }
	inline void set_kernelHandle_4(int32_t value)
	{
		___kernelHandle_4 = value;
	}

	inline static int32_t get_offset_of_renderTexture_5() { return static_cast<int32_t>(offsetof(WMG_Compute_Shader_t1525039799, ___renderTexture_5)); }
	inline RenderTexture_t2666733923 * get_renderTexture_5() const { return ___renderTexture_5; }
	inline RenderTexture_t2666733923 ** get_address_of_renderTexture_5() { return &___renderTexture_5; }
	inline void set_renderTexture_5(RenderTexture_t2666733923 * value)
	{
		___renderTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___renderTexture_5, value);
	}

	inline static int32_t get_offset_of_rawImg_6() { return static_cast<int32_t>(offsetof(WMG_Compute_Shader_t1525039799, ___rawImg_6)); }
	inline RawImage_t2749640213 * get_rawImg_6() const { return ___rawImg_6; }
	inline RawImage_t2749640213 ** get_address_of_rawImg_6() { return &___rawImg_6; }
	inline void set_rawImg_6(RawImage_t2749640213 * value)
	{
		___rawImg_6 = value;
		Il2CppCodeGenWriteBarrier(&___rawImg_6, value);
	}

	inline static int32_t get_offset_of_hasInit_7() { return static_cast<int32_t>(offsetof(WMG_Compute_Shader_t1525039799, ___hasInit_7)); }
	inline bool get_hasInit_7() const { return ___hasInit_7; }
	inline bool* get_address_of_hasInit_7() { return &___hasInit_7; }
	inline void set_hasInit_7(bool value)
	{
		___hasInit_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
