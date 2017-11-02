template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterClass<ComputeShader>();
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 96 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. ComputeShader
	RegisterClass<ComputeShader>();
	//5. NamedObject
	RegisterClass<NamedObject>();
	//6. GameObject
	RegisterClass<GameObject>();
	//7. QualitySettings
	RegisterClass<QualitySettings>();
	//8. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//9. GameManager
	RegisterClass<GameManager>();
	//10. MeshFilter
	RegisterClass<MeshFilter>();
	//11. Renderer
	RegisterClass<Renderer>();
	//12. TrailRenderer
	RegisterClass<TrailRenderer>();
	//13. LineRenderer
	RegisterClass<LineRenderer>();
	//14. GUILayer
	RegisterClass<GUILayer>();
	//15. Light
	RegisterClass<Light>();
	//16. Mesh
	RegisterClass<Mesh>();
	//17. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//18. Shader
	RegisterClass<Shader>();
	//19. Material
	RegisterClass<Material>();
	//20. Sprite
	RegisterClass<Sprite>();
	//21. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//22. TextAsset
	RegisterClass<TextAsset>();
	//23. Texture
	RegisterClass<Texture>();
	//24. Texture2D
	RegisterClass<Texture2D>();
	//25. RenderTexture
	RegisterClass<RenderTexture>();
	//26. Transform
	RegisterClass<Transform>();
	//27. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//28. ParticleSystem
	RegisterClass<ParticleSystem>();
	//29. Rigidbody
	RegisterClass<Rigidbody>();
	//30. Unity::Joint
	RegisterClass<Unity::Joint>();
	//31. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//32. Collider
	RegisterClass<Collider>();
	//33. BoxCollider
	RegisterClass<BoxCollider>();
	//34. MeshCollider
	RegisterClass<MeshCollider>();
	//35. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//36. CharacterController
	RegisterClass<CharacterController>();
	//37. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//38. Collider2D
	RegisterClass<Collider2D>();
	//39. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//40. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//41. AudioClip
	RegisterClass<AudioClip>();
	//42. SampleClip
	RegisterClass<SampleClip>();
	//43. AudioSource
	RegisterClass<AudioSource>();
	//44. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//45. AnimationClip
	RegisterClass<AnimationClip>();
	//46. Motion
	RegisterClass<Motion>();
	//47. Animation
	RegisterClass<Animation>();
	//48. Animator
	RegisterClass<Animator>();
	//49. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//50. GUIElement
	RegisterClass<GUIElement>();
	//51. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//52. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//53. UI::Canvas
	RegisterClass<UI::Canvas>();
	//54. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//55. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//56. MeshRenderer
	RegisterClass<MeshRenderer>();
	//57. AudioListener
	RegisterClass<AudioListener>();
	//58. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//59. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//60. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//61. PreloadData
	RegisterClass<PreloadData>();
	//62. Cubemap
	RegisterClass<Cubemap>();
	//63. Texture3D
	RegisterClass<Texture3D>();
	//64. Texture2DArray
	RegisterClass<Texture2DArray>();
	//65. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//66. TimeManager
	RegisterClass<TimeManager>();
	//67. AudioManager
	RegisterClass<AudioManager>();
	//68. InputManager
	RegisterClass<InputManager>();
	//69. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//70. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//71. PhysicsManager
	RegisterClass<PhysicsManager>();
	//72. TagManager
	RegisterClass<TagManager>();
	//73. ScriptMapper
	RegisterClass<ScriptMapper>();
	//74. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//75. MonoScript
	RegisterClass<MonoScript>();
	//76. MonoManager
	RegisterClass<MonoManager>();
	//77. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//78. PlayerSettings
	RegisterClass<PlayerSettings>();
	//79. BuildSettings
	RegisterClass<BuildSettings>();
	//80. ResourceManager
	RegisterClass<ResourceManager>();
	//81. NetworkManager
	RegisterClass<NetworkManager>();
	//82. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//83. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//84. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//85. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//86. LevelGameManager
	RegisterClass<LevelGameManager>();
	//87. AnimatorController
	RegisterClass<AnimatorController>();
	//88. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//89. RenderSettings
	RegisterClass<RenderSettings>();
	//90. FlareLayer
	RegisterClass<FlareLayer>();
	//91. LightmapSettings
	RegisterClass<LightmapSettings>();
	//92. SphereCollider
	RegisterClass<SphereCollider>();
	//93. Avatar
	RegisterClass<Avatar>();
	//94. LightProbes
	RegisterClass<LightProbes>();
	//95. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
