#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UIBasicSprite754925213.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI2DSprite
struct  UI2DSprite_t1082505957  : public UIBasicSprite_t754925213
{
public:
	// UnityEngine.Sprite UI2DSprite::mSprite
	Sprite_t309593783 * ___mSprite_69;
	// UnityEngine.Material UI2DSprite::mMat
	Material_t193706927 * ___mMat_70;
	// UnityEngine.Shader UI2DSprite::mShader
	Shader_t2430389951 * ___mShader_71;
	// UnityEngine.Vector4 UI2DSprite::mBorder
	Vector4_t2243707581  ___mBorder_72;
	// System.Boolean UI2DSprite::mFixedAspect
	bool ___mFixedAspect_73;
	// System.Single UI2DSprite::mPixelSize
	float ___mPixelSize_74;
	// UnityEngine.Sprite UI2DSprite::nextSprite
	Sprite_t309593783 * ___nextSprite_75;
	// System.Int32 UI2DSprite::mPMA
	int32_t ___mPMA_76;

public:
	inline static int32_t get_offset_of_mSprite_69() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mSprite_69)); }
	inline Sprite_t309593783 * get_mSprite_69() const { return ___mSprite_69; }
	inline Sprite_t309593783 ** get_address_of_mSprite_69() { return &___mSprite_69; }
	inline void set_mSprite_69(Sprite_t309593783 * value)
	{
		___mSprite_69 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_69, value);
	}

	inline static int32_t get_offset_of_mMat_70() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mMat_70)); }
	inline Material_t193706927 * get_mMat_70() const { return ___mMat_70; }
	inline Material_t193706927 ** get_address_of_mMat_70() { return &___mMat_70; }
	inline void set_mMat_70(Material_t193706927 * value)
	{
		___mMat_70 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_70, value);
	}

	inline static int32_t get_offset_of_mShader_71() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mShader_71)); }
	inline Shader_t2430389951 * get_mShader_71() const { return ___mShader_71; }
	inline Shader_t2430389951 ** get_address_of_mShader_71() { return &___mShader_71; }
	inline void set_mShader_71(Shader_t2430389951 * value)
	{
		___mShader_71 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_71, value);
	}

	inline static int32_t get_offset_of_mBorder_72() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mBorder_72)); }
	inline Vector4_t2243707581  get_mBorder_72() const { return ___mBorder_72; }
	inline Vector4_t2243707581 * get_address_of_mBorder_72() { return &___mBorder_72; }
	inline void set_mBorder_72(Vector4_t2243707581  value)
	{
		___mBorder_72 = value;
	}

	inline static int32_t get_offset_of_mFixedAspect_73() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mFixedAspect_73)); }
	inline bool get_mFixedAspect_73() const { return ___mFixedAspect_73; }
	inline bool* get_address_of_mFixedAspect_73() { return &___mFixedAspect_73; }
	inline void set_mFixedAspect_73(bool value)
	{
		___mFixedAspect_73 = value;
	}

	inline static int32_t get_offset_of_mPixelSize_74() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mPixelSize_74)); }
	inline float get_mPixelSize_74() const { return ___mPixelSize_74; }
	inline float* get_address_of_mPixelSize_74() { return &___mPixelSize_74; }
	inline void set_mPixelSize_74(float value)
	{
		___mPixelSize_74 = value;
	}

	inline static int32_t get_offset_of_nextSprite_75() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___nextSprite_75)); }
	inline Sprite_t309593783 * get_nextSprite_75() const { return ___nextSprite_75; }
	inline Sprite_t309593783 ** get_address_of_nextSprite_75() { return &___nextSprite_75; }
	inline void set_nextSprite_75(Sprite_t309593783 * value)
	{
		___nextSprite_75 = value;
		Il2CppCodeGenWriteBarrier(&___nextSprite_75, value);
	}

	inline static int32_t get_offset_of_mPMA_76() { return static_cast<int32_t>(offsetof(UI2DSprite_t1082505957, ___mPMA_76)); }
	inline int32_t get_mPMA_76() const { return ___mPMA_76; }
	inline int32_t* get_address_of_mPMA_76() { return &___mPMA_76; }
	inline void set_mPMA_76(int32_t value)
	{
		___mPMA_76 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
