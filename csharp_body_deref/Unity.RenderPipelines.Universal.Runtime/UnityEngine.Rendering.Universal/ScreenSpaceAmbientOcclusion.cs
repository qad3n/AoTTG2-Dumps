// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusion
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C38950", Offset = "0x2C36F50", VA = "0x182C38950")]
		get
		{
			return ref *(ScreenSpaceAmbientOcclusionSettings*)null;
		}
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x2C83610", Offset = "0x2C81C10", VA = "0x182C83610", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x2C83550", Offset = "0x2C81B50", VA = "0x182C83550", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x2C83870", Offset = "0x2C81E70", VA = "0x182C83870", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x2C838F0", Offset = "0x2C81EF0", VA = "0x182C838F0")]
	private bool TryPrepareResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x2C83C60", Offset = "0x2C82260", VA = "0x182C83C60")]
	public ScreenSpaceAmbientOcclusion()
	{
	}
}
