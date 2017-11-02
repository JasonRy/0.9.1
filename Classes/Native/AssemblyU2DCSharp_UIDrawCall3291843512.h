#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_ColorSpace627621177.h"

// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t2464096223;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t2240780717;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t2690968101;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t2399520773;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDrawCall
struct  UIDrawCall_t3291843512  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UIDrawCall::widgetCount
	int32_t ___widgetCount_4;
	// System.Int32 UIDrawCall::depthStart
	int32_t ___depthStart_5;
	// System.Int32 UIDrawCall::depthEnd
	int32_t ___depthEnd_6;
	// UIPanel UIDrawCall::manager
	UIPanel_t1795085332 * ___manager_7;
	// UIPanel UIDrawCall::panel
	UIPanel_t1795085332 * ___panel_8;
	// UnityEngine.Texture2D UIDrawCall::clipTexture
	Texture2D_t3542995729 * ___clipTexture_9;
	// System.Boolean UIDrawCall::alwaysOnScreen
	bool ___alwaysOnScreen_10;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::verts
	BetterList_1_t2464096222 * ___verts_11;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::norms
	BetterList_1_t2464096222 * ___norms_12;
	// BetterList`1<UnityEngine.Vector4> UIDrawCall::tans
	BetterList_1_t2464096223 * ___tans_13;
	// BetterList`1<UnityEngine.Vector2> UIDrawCall::uvs
	BetterList_1_t2464096221 * ___uvs_14;
	// BetterList`1<UnityEngine.Color> UIDrawCall::cols
	BetterList_1_t2240780717 * ___cols_15;
	// UnityEngine.Material UIDrawCall::mMaterial
	Material_t193706927 * ___mMaterial_16;
	// UnityEngine.Texture UIDrawCall::mTexture
	Texture_t2243626319 * ___mTexture_17;
	// UnityEngine.Shader UIDrawCall::mShader
	Shader_t2430389951 * ___mShader_18;
	// System.Int32 UIDrawCall::mClipCount
	int32_t ___mClipCount_19;
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t3275118058 * ___mTrans_20;
	// UnityEngine.Mesh UIDrawCall::mMesh
	Mesh_t1356156583 * ___mMesh_21;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t3026937449 * ___mFilter_22;
	// UnityEngine.MeshRenderer UIDrawCall::mRenderer
	MeshRenderer_t1268241104 * ___mRenderer_23;
	// UnityEngine.Material UIDrawCall::mDynamicMat
	Material_t193706927 * ___mDynamicMat_24;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t3030399641* ___mIndices_25;
	// System.Boolean UIDrawCall::mRebuildMat
	bool ___mRebuildMat_26;
	// System.Boolean UIDrawCall::mLegacyShader
	bool ___mLegacyShader_27;
	// System.Int32 UIDrawCall::mRenderQueue
	int32_t ___mRenderQueue_28;
	// System.Int32 UIDrawCall::mTriangles
	int32_t ___mTriangles_29;
	// System.Boolean UIDrawCall::isDirty
	bool ___isDirty_30;
	// System.Boolean UIDrawCall::mTextureClip
	bool ___mTextureClip_31;
	// UIDrawCall/OnRenderCallback UIDrawCall::onRender
	OnRenderCallback_t2690968101 * ___onRender_32;
	// System.String UIDrawCall::mSortingLayerName
	String_t* ___mSortingLayerName_33;

public:
	inline static int32_t get_offset_of_widgetCount_4() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___widgetCount_4)); }
	inline int32_t get_widgetCount_4() const { return ___widgetCount_4; }
	inline int32_t* get_address_of_widgetCount_4() { return &___widgetCount_4; }
	inline void set_widgetCount_4(int32_t value)
	{
		___widgetCount_4 = value;
	}

	inline static int32_t get_offset_of_depthStart_5() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___depthStart_5)); }
	inline int32_t get_depthStart_5() const { return ___depthStart_5; }
	inline int32_t* get_address_of_depthStart_5() { return &___depthStart_5; }
	inline void set_depthStart_5(int32_t value)
	{
		___depthStart_5 = value;
	}

	inline static int32_t get_offset_of_depthEnd_6() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___depthEnd_6)); }
	inline int32_t get_depthEnd_6() const { return ___depthEnd_6; }
	inline int32_t* get_address_of_depthEnd_6() { return &___depthEnd_6; }
	inline void set_depthEnd_6(int32_t value)
	{
		___depthEnd_6 = value;
	}

	inline static int32_t get_offset_of_manager_7() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___manager_7)); }
	inline UIPanel_t1795085332 * get_manager_7() const { return ___manager_7; }
	inline UIPanel_t1795085332 ** get_address_of_manager_7() { return &___manager_7; }
	inline void set_manager_7(UIPanel_t1795085332 * value)
	{
		___manager_7 = value;
		Il2CppCodeGenWriteBarrier(&___manager_7, value);
	}

	inline static int32_t get_offset_of_panel_8() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___panel_8)); }
	inline UIPanel_t1795085332 * get_panel_8() const { return ___panel_8; }
	inline UIPanel_t1795085332 ** get_address_of_panel_8() { return &___panel_8; }
	inline void set_panel_8(UIPanel_t1795085332 * value)
	{
		___panel_8 = value;
		Il2CppCodeGenWriteBarrier(&___panel_8, value);
	}

	inline static int32_t get_offset_of_clipTexture_9() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___clipTexture_9)); }
	inline Texture2D_t3542995729 * get_clipTexture_9() const { return ___clipTexture_9; }
	inline Texture2D_t3542995729 ** get_address_of_clipTexture_9() { return &___clipTexture_9; }
	inline void set_clipTexture_9(Texture2D_t3542995729 * value)
	{
		___clipTexture_9 = value;
		Il2CppCodeGenWriteBarrier(&___clipTexture_9, value);
	}

	inline static int32_t get_offset_of_alwaysOnScreen_10() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___alwaysOnScreen_10)); }
	inline bool get_alwaysOnScreen_10() const { return ___alwaysOnScreen_10; }
	inline bool* get_address_of_alwaysOnScreen_10() { return &___alwaysOnScreen_10; }
	inline void set_alwaysOnScreen_10(bool value)
	{
		___alwaysOnScreen_10 = value;
	}

	inline static int32_t get_offset_of_verts_11() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___verts_11)); }
	inline BetterList_1_t2464096222 * get_verts_11() const { return ___verts_11; }
	inline BetterList_1_t2464096222 ** get_address_of_verts_11() { return &___verts_11; }
	inline void set_verts_11(BetterList_1_t2464096222 * value)
	{
		___verts_11 = value;
		Il2CppCodeGenWriteBarrier(&___verts_11, value);
	}

	inline static int32_t get_offset_of_norms_12() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___norms_12)); }
	inline BetterList_1_t2464096222 * get_norms_12() const { return ___norms_12; }
	inline BetterList_1_t2464096222 ** get_address_of_norms_12() { return &___norms_12; }
	inline void set_norms_12(BetterList_1_t2464096222 * value)
	{
		___norms_12 = value;
		Il2CppCodeGenWriteBarrier(&___norms_12, value);
	}

	inline static int32_t get_offset_of_tans_13() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___tans_13)); }
	inline BetterList_1_t2464096223 * get_tans_13() const { return ___tans_13; }
	inline BetterList_1_t2464096223 ** get_address_of_tans_13() { return &___tans_13; }
	inline void set_tans_13(BetterList_1_t2464096223 * value)
	{
		___tans_13 = value;
		Il2CppCodeGenWriteBarrier(&___tans_13, value);
	}

	inline static int32_t get_offset_of_uvs_14() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___uvs_14)); }
	inline BetterList_1_t2464096221 * get_uvs_14() const { return ___uvs_14; }
	inline BetterList_1_t2464096221 ** get_address_of_uvs_14() { return &___uvs_14; }
	inline void set_uvs_14(BetterList_1_t2464096221 * value)
	{
		___uvs_14 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_14, value);
	}

	inline static int32_t get_offset_of_cols_15() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___cols_15)); }
	inline BetterList_1_t2240780717 * get_cols_15() const { return ___cols_15; }
	inline BetterList_1_t2240780717 ** get_address_of_cols_15() { return &___cols_15; }
	inline void set_cols_15(BetterList_1_t2240780717 * value)
	{
		___cols_15 = value;
		Il2CppCodeGenWriteBarrier(&___cols_15, value);
	}

	inline static int32_t get_offset_of_mMaterial_16() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMaterial_16)); }
	inline Material_t193706927 * get_mMaterial_16() const { return ___mMaterial_16; }
	inline Material_t193706927 ** get_address_of_mMaterial_16() { return &___mMaterial_16; }
	inline void set_mMaterial_16(Material_t193706927 * value)
	{
		___mMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterial_16, value);
	}

	inline static int32_t get_offset_of_mTexture_17() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTexture_17)); }
	inline Texture_t2243626319 * get_mTexture_17() const { return ___mTexture_17; }
	inline Texture_t2243626319 ** get_address_of_mTexture_17() { return &___mTexture_17; }
	inline void set_mTexture_17(Texture_t2243626319 * value)
	{
		___mTexture_17 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_17, value);
	}

	inline static int32_t get_offset_of_mShader_18() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mShader_18)); }
	inline Shader_t2430389951 * get_mShader_18() const { return ___mShader_18; }
	inline Shader_t2430389951 ** get_address_of_mShader_18() { return &___mShader_18; }
	inline void set_mShader_18(Shader_t2430389951 * value)
	{
		___mShader_18 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_18, value);
	}

	inline static int32_t get_offset_of_mClipCount_19() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipCount_19)); }
	inline int32_t get_mClipCount_19() const { return ___mClipCount_19; }
	inline int32_t* get_address_of_mClipCount_19() { return &___mClipCount_19; }
	inline void set_mClipCount_19(int32_t value)
	{
		___mClipCount_19 = value;
	}

	inline static int32_t get_offset_of_mTrans_20() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTrans_20)); }
	inline Transform_t3275118058 * get_mTrans_20() const { return ___mTrans_20; }
	inline Transform_t3275118058 ** get_address_of_mTrans_20() { return &___mTrans_20; }
	inline void set_mTrans_20(Transform_t3275118058 * value)
	{
		___mTrans_20 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_20, value);
	}

	inline static int32_t get_offset_of_mMesh_21() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMesh_21)); }
	inline Mesh_t1356156583 * get_mMesh_21() const { return ___mMesh_21; }
	inline Mesh_t1356156583 ** get_address_of_mMesh_21() { return &___mMesh_21; }
	inline void set_mMesh_21(Mesh_t1356156583 * value)
	{
		___mMesh_21 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_21, value);
	}

	inline static int32_t get_offset_of_mFilter_22() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mFilter_22)); }
	inline MeshFilter_t3026937449 * get_mFilter_22() const { return ___mFilter_22; }
	inline MeshFilter_t3026937449 ** get_address_of_mFilter_22() { return &___mFilter_22; }
	inline void set_mFilter_22(MeshFilter_t3026937449 * value)
	{
		___mFilter_22 = value;
		Il2CppCodeGenWriteBarrier(&___mFilter_22, value);
	}

	inline static int32_t get_offset_of_mRenderer_23() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRenderer_23)); }
	inline MeshRenderer_t1268241104 * get_mRenderer_23() const { return ___mRenderer_23; }
	inline MeshRenderer_t1268241104 ** get_address_of_mRenderer_23() { return &___mRenderer_23; }
	inline void set_mRenderer_23(MeshRenderer_t1268241104 * value)
	{
		___mRenderer_23 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderer_23, value);
	}

	inline static int32_t get_offset_of_mDynamicMat_24() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mDynamicMat_24)); }
	inline Material_t193706927 * get_mDynamicMat_24() const { return ___mDynamicMat_24; }
	inline Material_t193706927 ** get_address_of_mDynamicMat_24() { return &___mDynamicMat_24; }
	inline void set_mDynamicMat_24(Material_t193706927 * value)
	{
		___mDynamicMat_24 = value;
		Il2CppCodeGenWriteBarrier(&___mDynamicMat_24, value);
	}

	inline static int32_t get_offset_of_mIndices_25() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mIndices_25)); }
	inline Int32U5BU5D_t3030399641* get_mIndices_25() const { return ___mIndices_25; }
	inline Int32U5BU5D_t3030399641** get_address_of_mIndices_25() { return &___mIndices_25; }
	inline void set_mIndices_25(Int32U5BU5D_t3030399641* value)
	{
		___mIndices_25 = value;
		Il2CppCodeGenWriteBarrier(&___mIndices_25, value);
	}

	inline static int32_t get_offset_of_mRebuildMat_26() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRebuildMat_26)); }
	inline bool get_mRebuildMat_26() const { return ___mRebuildMat_26; }
	inline bool* get_address_of_mRebuildMat_26() { return &___mRebuildMat_26; }
	inline void set_mRebuildMat_26(bool value)
	{
		___mRebuildMat_26 = value;
	}

	inline static int32_t get_offset_of_mLegacyShader_27() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mLegacyShader_27)); }
	inline bool get_mLegacyShader_27() const { return ___mLegacyShader_27; }
	inline bool* get_address_of_mLegacyShader_27() { return &___mLegacyShader_27; }
	inline void set_mLegacyShader_27(bool value)
	{
		___mLegacyShader_27 = value;
	}

	inline static int32_t get_offset_of_mRenderQueue_28() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRenderQueue_28)); }
	inline int32_t get_mRenderQueue_28() const { return ___mRenderQueue_28; }
	inline int32_t* get_address_of_mRenderQueue_28() { return &___mRenderQueue_28; }
	inline void set_mRenderQueue_28(int32_t value)
	{
		___mRenderQueue_28 = value;
	}

	inline static int32_t get_offset_of_mTriangles_29() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTriangles_29)); }
	inline int32_t get_mTriangles_29() const { return ___mTriangles_29; }
	inline int32_t* get_address_of_mTriangles_29() { return &___mTriangles_29; }
	inline void set_mTriangles_29(int32_t value)
	{
		___mTriangles_29 = value;
	}

	inline static int32_t get_offset_of_isDirty_30() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___isDirty_30)); }
	inline bool get_isDirty_30() const { return ___isDirty_30; }
	inline bool* get_address_of_isDirty_30() { return &___isDirty_30; }
	inline void set_isDirty_30(bool value)
	{
		___isDirty_30 = value;
	}

	inline static int32_t get_offset_of_mTextureClip_31() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTextureClip_31)); }
	inline bool get_mTextureClip_31() const { return ___mTextureClip_31; }
	inline bool* get_address_of_mTextureClip_31() { return &___mTextureClip_31; }
	inline void set_mTextureClip_31(bool value)
	{
		___mTextureClip_31 = value;
	}

	inline static int32_t get_offset_of_onRender_32() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___onRender_32)); }
	inline OnRenderCallback_t2690968101 * get_onRender_32() const { return ___onRender_32; }
	inline OnRenderCallback_t2690968101 ** get_address_of_onRender_32() { return &___onRender_32; }
	inline void set_onRender_32(OnRenderCallback_t2690968101 * value)
	{
		___onRender_32 = value;
		Il2CppCodeGenWriteBarrier(&___onRender_32, value);
	}

	inline static int32_t get_offset_of_mSortingLayerName_33() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mSortingLayerName_33)); }
	inline String_t* get_mSortingLayerName_33() const { return ___mSortingLayerName_33; }
	inline String_t** get_address_of_mSortingLayerName_33() { return &___mSortingLayerName_33; }
	inline void set_mSortingLayerName_33(String_t* value)
	{
		___mSortingLayerName_33 = value;
		Il2CppCodeGenWriteBarrier(&___mSortingLayerName_33, value);
	}
};

struct UIDrawCall_t3291843512_StaticFields
{
public:
	// BetterList`1<UIDrawCall> UIDrawCall::mActiveList
	BetterList_1_t3512232154 * ___mActiveList_2;
	// BetterList`1<UIDrawCall> UIDrawCall::mInactiveList
	BetterList_1_t3512232154 * ___mInactiveList_3;
	// UnityEngine.ColorSpace UIDrawCall::mColorSpace
	int32_t ___mColorSpace_34;
	// System.Collections.Generic.List`1<System.Int32[]> UIDrawCall::mCache
	List_1_t2399520773 * ___mCache_36;
	// System.Int32[] UIDrawCall::ClipRange
	Int32U5BU5D_t3030399641* ___ClipRange_37;
	// System.Int32[] UIDrawCall::ClipArgs
	Int32U5BU5D_t3030399641* ___ClipArgs_38;
	// System.Int32 UIDrawCall::dx9BugWorkaround
	int32_t ___dx9BugWorkaround_39;

public:
	inline static int32_t get_offset_of_mActiveList_2() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mActiveList_2)); }
	inline BetterList_1_t3512232154 * get_mActiveList_2() const { return ___mActiveList_2; }
	inline BetterList_1_t3512232154 ** get_address_of_mActiveList_2() { return &___mActiveList_2; }
	inline void set_mActiveList_2(BetterList_1_t3512232154 * value)
	{
		___mActiveList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveList_2, value);
	}

	inline static int32_t get_offset_of_mInactiveList_3() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mInactiveList_3)); }
	inline BetterList_1_t3512232154 * get_mInactiveList_3() const { return ___mInactiveList_3; }
	inline BetterList_1_t3512232154 ** get_address_of_mInactiveList_3() { return &___mInactiveList_3; }
	inline void set_mInactiveList_3(BetterList_1_t3512232154 * value)
	{
		___mInactiveList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInactiveList_3, value);
	}

	inline static int32_t get_offset_of_mColorSpace_34() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mColorSpace_34)); }
	inline int32_t get_mColorSpace_34() const { return ___mColorSpace_34; }
	inline int32_t* get_address_of_mColorSpace_34() { return &___mColorSpace_34; }
	inline void set_mColorSpace_34(int32_t value)
	{
		___mColorSpace_34 = value;
	}

	inline static int32_t get_offset_of_mCache_36() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mCache_36)); }
	inline List_1_t2399520773 * get_mCache_36() const { return ___mCache_36; }
	inline List_1_t2399520773 ** get_address_of_mCache_36() { return &___mCache_36; }
	inline void set_mCache_36(List_1_t2399520773 * value)
	{
		___mCache_36 = value;
		Il2CppCodeGenWriteBarrier(&___mCache_36, value);
	}

	inline static int32_t get_offset_of_ClipRange_37() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___ClipRange_37)); }
	inline Int32U5BU5D_t3030399641* get_ClipRange_37() const { return ___ClipRange_37; }
	inline Int32U5BU5D_t3030399641** get_address_of_ClipRange_37() { return &___ClipRange_37; }
	inline void set_ClipRange_37(Int32U5BU5D_t3030399641* value)
	{
		___ClipRange_37 = value;
		Il2CppCodeGenWriteBarrier(&___ClipRange_37, value);
	}

	inline static int32_t get_offset_of_ClipArgs_38() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___ClipArgs_38)); }
	inline Int32U5BU5D_t3030399641* get_ClipArgs_38() const { return ___ClipArgs_38; }
	inline Int32U5BU5D_t3030399641** get_address_of_ClipArgs_38() { return &___ClipArgs_38; }
	inline void set_ClipArgs_38(Int32U5BU5D_t3030399641* value)
	{
		___ClipArgs_38 = value;
		Il2CppCodeGenWriteBarrier(&___ClipArgs_38, value);
	}

	inline static int32_t get_offset_of_dx9BugWorkaround_39() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___dx9BugWorkaround_39)); }
	inline int32_t get_dx9BugWorkaround_39() const { return ___dx9BugWorkaround_39; }
	inline int32_t* get_address_of_dx9BugWorkaround_39() { return &___dx9BugWorkaround_39; }
	inline void set_dx9BugWorkaround_39(int32_t value)
	{
		___dx9BugWorkaround_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
