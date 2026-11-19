// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenSpaceAmbientOcclusion.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200018C")]
[SupportedOnRenderer(typeof(UniversalRendererData))]
[DisallowMultipleRendererFeature("Screen Space Ambient Occlusion")]
[Tooltip("The Ambient Occlusion effect darkens creases, holes, intersections and surfaces that are close to each other.")]
public class ScreenSpaceAmbientOcclusion : ScriptableRendererFeature
{
	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private ScreenSpaceAmbientOcclusionSettings m_Settings;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x28")]
	private Material m_Material;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x30")]
	private ScreenSpaceAmbientOcclusionPass m_SSAOPass;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x38")]
	private Shader m_Shader;

	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x40")]
	private Texture2D[] m_BlueNoise256Textures;

	[Token(Token = "0x40008D6")]
	internal const string k_AOInterleavedGradientKeyword = "_INTERLEAVED_GRADIENT";

	[Token(Token = "0x40008D7")]
	internal const string k_AOBlueNoiseKeyword = "_BLUE_NOISE";

	[Token(Token = "0x40008D8")]
	internal const string k_OrthographicCameraKeyword = "_ORTHOGRAPHIC";

	[Token(Token = "0x40008D9")]
	internal const string k_SourceDepthLowKeyword = "_SOURCE_DEPTH_LOW";

	[Token(Token = "0x40008DA")]
	internal const string k_SourceDepthMediumKeyword = "_SOURCE_DEPTH_MEDIUM";

	[Token(Token = "0x40008DB")]
	internal const string k_SourceDepthHighKeyword = "_SOURCE_DEPTH_HIGH";

	[Token(Token = "0x40008DC")]
	internal const string k_SourceDepthNormalsKeyword = "_SOURCE_DEPTH_NORMALS";

	[Token(Token = "0x40008DD")]
	internal const string k_SampleCountLowKeyword = "_SAMPLE_COUNT_LOW";

	[Token(Token = "0x40008DE")]
	internal const string k_SampleCountMediumKeyword = "_SAMPLE_COUNT_MEDIUM";

	[Token(Token = "0x40008DF")]
	internal const string k_SampleCountHighKeyword = "_SAMPLE_COUNT_HIGH";

	[Token(Token = "0x1700021C")]
	internal unsafe ref ScreenSpaceAmbientOcclusionSettings settings
	{
		[Token(Token = "0x6000895")]
		[Address(RVA = "0x667F920", Offset = "0x667E920", VA = "0x667F920")]
		get
		{
			return ref *(ScreenSpaceAmbientOcclusionSettings*)null;
		}
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x667F930", Offset = "0x667E930", VA = "0x667F930", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x667F9F0", Offset = "0x667E9F0", VA = "0x667F9F0", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x667FF40", Offset = "0x667EF40", VA = "0x667FF40", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x667FAB0", Offset = "0x667EAB0", VA = "0x667FAB0")]
	private bool TryPrepareResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x667FFC0", Offset = "0x667EFC0", VA = "0x667FFC0")]
	public ScreenSpaceAmbientOcclusion()
	{
	}
}
