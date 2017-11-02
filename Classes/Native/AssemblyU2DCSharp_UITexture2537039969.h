#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UIBasicSprite754925213.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexture
struct  UITexture_t2537039969  : public UIBasicSprite_t754925213
{
public:
	// UnityEngine.Rect UITexture::mRect
	Rect_t3681755626  ___mRect_69;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t2243626319 * ___mTexture_70;
	// UnityEngine.Material UITexture::mMat
	Material_t193706927 * ___mMat_71;
	// UnityEngine.Shader UITexture::mShader
	Shader_t2430389951 * ___mShader_72;
	// UnityEngine.Vector4 UITexture::mBorder
	Vector4_t2243707581  ___mBorder_73;
	// System.Boolean UITexture::mFixedAspect
	bool ___mFixedAspect_74;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_75;

public:
	inline static int32_t get_offset_of_mRect_69() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mRect_69)); }
	inline Rect_t3681755626  get_mRect_69() const { return ___mRect_69; }
	inline Rect_t3681755626 * get_address_of_mRect_69() { return &___mRect_69; }
	inline void set_mRect_69(Rect_t3681755626  value)
	{
		___mRect_69 = value;
	}

	inline static int32_t get_offset_of_mTexture_70() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mTexture_70)); }
	inline Texture_t2243626319 * get_mTexture_70() const { return ___mTexture_70; }
	inline Texture_t2243626319 ** get_address_of_mTexture_70() { return &___mTexture_70; }
	inline void set_mTexture_70(Texture_t2243626319 * value)
	{
		___mTexture_70 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_70, value);
	}

	inline static int32_t get_offset_of_mMat_71() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mMat_71)); }
	inline Material_t193706927 * get_mMat_71() const { return ___mMat_71; }
	inline Material_t193706927 ** get_address_of_mMat_71() { return &___mMat_71; }
	inline void set_mMat_71(Material_t193706927 * value)
	{
		___mMat_71 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_71, value);
	}

	inline static int32_t get_offset_of_mShader_72() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mShader_72)); }
	inline Shader_t2430389951 * get_mShader_72() const { return ___mShader_72; }
	inline Shader_t2430389951 ** get_address_of_mShader_72() { return &___mShader_72; }
	inline void set_mShader_72(Shader_t2430389951 * value)
	{
		___mShader_72 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_72, value);
	}

	inline static int32_t get_offset_of_mBorder_73() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mBorder_73)); }
	inline Vector4_t2243707581  get_mBorder_73() const { return ___mBorder_73; }
	inline Vector4_t2243707581 * get_address_of_mBorder_73() { return &___mBorder_73; }
	inline void set_mBorder_73(Vector4_t2243707581  value)
	{
		___mBorder_73 = value;
	}

	inline static int32_t get_offset_of_mFixedAspect_74() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mFixedAspect_74)); }
	inline bool get_mFixedAspect_74() const { return ___mFixedAspect_74; }
	inline bool* get_address_of_mFixedAspect_74() { return &___mFixedAspect_74; }
	inline void set_mFixedAspect_74(bool value)
	{
		___mFixedAspect_74 = value;
	}

	inline static int32_t get_offset_of_mPMA_75() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mPMA_75)); }
	inline int32_t get_mPMA_75() const { return ___mPMA_75; }
	inline int32_t* get_address_of_mPMA_75() { return &___mPMA_75; }
	inline void set_mPMA_75(int32_t value)
	{
		___mPMA_75 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
