// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200014C")]
internal class ScreenSpaceAmbientOcclusionPass : ScriptableRenderPass
{
	[Token(Token = "0x200014D")]
	private enum BlurTypes
	{
		[Token(Token = "0x400079E")]
		Bilateral,
		[Token(Token = "0x400079F")]
		Gaussian,
		[Token(Token = "0x40007A0")]
		Kawase
	}

	[Token(Token = "0x200014E")]
	private enum ShaderPasses
	{
		[Token(Token = "0x40007A2")]
		AmbientOcclusion,
		[Token(Token = "0x40007A3")]
		BilateralBlurHorizontal,
		[Token(Token = "0x40007A4")]
		BilateralBlurVertical,
		[Token(Token = "0x40007A5")]
		BilateralBlurFinal,
		[Token(Token = "0x40007A6")]
		BilateralAfterOpaque,
		[Token(Token = "0x40007A7")]
		GaussianBlurHorizontal,
		[Token(Token = "0x40007A8")]
		GaussianBlurVertical,
		[Token(Token = "0x40007A9")]
		GaussianAfterOpaque,
		[Token(Token = "0x40007AA")]
		KawaseBlur,
		[Token(Token = "0x40007AB")]
		KawaseAfterOpaque
	}

	[Token(Token = "0x200014F")]
	private struct SSAOMaterialParams
	{
		[Token(Token = "0x40007AC")]
		[FieldOffset(Offset = "0x0")]
		internal bool orthographicCamera;

		[Token(Token = "0x40007AD")]
		[FieldOffset(Offset = "0x1")]
		internal bool aoBlueNoise;

		[Token(Token = "0x40007AE")]
		[FieldOffset(Offset = "0x2")]
		internal bool aoInterleavedGradient;

		[Token(Token = "0x40007AF")]
		[FieldOffset(Offset = "0x3")]
		internal bool sampleCountHigh;

		[Token(Token = "0x40007B0")]
		[FieldOffset(Offset = "0x4")]
		internal bool sampleCountMedium;

		[Token(Token = "0x40007B1")]
		[FieldOffset(Offset = "0x5")]
		internal bool sampleCountLow;

		[Token(Token = "0x40007B2")]
		[FieldOffset(Offset = "0x6")]
		internal bool sourceDepthNormals;

		[Token(Token = "0x40007B3")]
		[FieldOffset(Offset = "0x7")]
		internal bool sourceDepthHigh;

		[Token(Token = "0x40007B4")]
		[FieldOffset(Offset = "0x8")]
		internal bool sourceDepthMedium;

		[Token(Token = "0x40007B5")]
		[FieldOffset(Offset = "0x9")]
		internal bool sourceDepthLow;

		[Token(Token = "0x40007B6")]
		[FieldOffset(Offset = "0xC")]
		internal Vector4 ssaoParams;

		[Token(Token = "0x60007B0")]
		[Address(RVA = "0x2C80C40", Offset = "0x2C7F240", VA = "0x182C80C40")]
		internal SSAOMaterialParams(ref ScreenSpaceAmbientOcclusionSettings settings, bool isOrthographic)
		{
		}

		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x2C80B70", Offset = "0x2C7F170", VA = "0x182C80B70")]
		internal bool Equals(ref SSAOMaterialParams other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000150")]
	private class SSAOPassData
	{
		[Token(Token = "0x40007B7")]
		[FieldOffset(Offset = "0x10")]
		internal bool afterOpaque;

		[Token(Token = "0x40007B8")]
		[FieldOffset(Offset = "0x14")]
		internal ScreenSpaceAmbientOcclusionSettings.BlurQualityOptions BlurQuality;

		[Token(Token = "0x40007B9")]
		[FieldOffset(Offset = "0x18")]
		internal Material material;

		[Token(Token = "0x40007BA")]
		[FieldOffset(Offset = "0x20")]
		internal float directLightingStrength;

		[Token(Token = "0x40007BB")]
		[FieldOffset(Offset = "0x24")]
		internal TextureHandle cameraColor;

		[Token(Token = "0x40007BC")]
		[FieldOffset(Offset = "0x34")]
		internal TextureHandle AOTexture;

		[Token(Token = "0x40007BD")]
		[FieldOffset(Offset = "0x44")]
		internal TextureHandle finalTexture;

		[Token(Token = "0x40007BE")]
		[FieldOffset(Offset = "0x54")]
		internal TextureHandle blurTexture;

		[Token(Token = "0x40007BF")]
		[FieldOffset(Offset = "0x64")]
		internal TextureHandle cameraNormalsTexture;

		[Token(Token = "0x40007C0")]
		[FieldOffset(Offset = "0x78")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SSAOPassData()
		{
		}
	}

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x60")]
	private readonly bool m_SupportsR8RenderTextureFormat;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x64")]
	private int m_BlueNoiseTextureIndex;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x68")]
	private Material m_Material;

	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x70")]
	private Texture2D[] m_BlueNoiseTextures;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x78")]
	private Vector4[] m_CameraTopLeftCorner;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x80")]
	private Vector4[] m_CameraXExtent;

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x88")]
	private Vector4[] m_CameraYExtent;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x90")]
	private Vector4[] m_CameraZExtent;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x98")]
	private BlurTypes m_BlurType;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0xA0")]
	private Matrix4x4[] m_CameraViewProjections;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0xA8")]
	private ProfilingSampler m_ProfilingSampler;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0xB0")]
	private RenderTextureDescriptor m_AOPassDescriptor;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0xE8")]
	private ScreenSpaceAmbientOcclusionSettings m_CurrentSettings;

	[Token(Token = "0x400078E")]
	private const string k_SSAOTextureName = "_ScreenSpaceOcclusionTexture";

	[Token(Token = "0x400078F")]
	private const string k_AmbientOcclusionParamName = "_AmbientOcclusionParam";

	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int s_AmbientOcclusionParamID;

	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int s_SSAOParamsID;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int s_SSAOBlueNoiseParamsID;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int s_BlueNoiseTextureID;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_SSAOFinalTextureID;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int s_CameraViewXExtentID;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int s_CameraViewYExtentID;

	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int s_CameraViewZExtentID;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int s_ProjectionParams2ID;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int s_CameraViewProjectionsID;

	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int s_CameraViewTopLeftCornerID;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int s_CameraNormalsTextureID;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0xF0")]
	private SSAOMaterialParams m_SSAOParamsPrev;

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x2C832E0", Offset = "0x2C818E0", VA = "0x182C832E0")]
	internal ScreenSpaceAmbientOcclusionPass()
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x2C82E50", Offset = "0x2C81450", VA = "0x182C82E50")]
	internal bool Setup(ref ScreenSpaceAmbientOcclusionSettings featureSettings, ref ScriptableRenderer renderer, ref Material material, ref Texture2D[] blueNoiseTextures)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x2C81F00", Offset = "0x2C80500", VA = "0x182C81F00")]
	private void SetupKeywordsAndParameters(ref ScreenSpaceAmbientOcclusionSettings settings, ref UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x2C813B0", Offset = "0x2C7F9B0", VA = "0x182C813B0")]
	private void InitSSAOPassData(ref SSAOPassData data)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x2C80E10", Offset = "0x2C7F410", VA = "0x182C80E10")]
	private static Vector4 ComputeScaleBias(in UnsafeGraphContext context, in TextureHandle source, in TextureHandle destination)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x2C81500", Offset = "0x2C7FB00", VA = "0x182C81500", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x2C80F70", Offset = "0x2C7F570", VA = "0x182C80F70")]
	private void CreateRenderTextureHandles(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, out TextureHandle aoTexture, out TextureHandle blurTexture, out TextureHandle finalTexture)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x2C81440", Offset = "0x2C7FA40", VA = "0x182C81440", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x2C81390", Offset = "0x2C7F990", VA = "0x182C81390")]
	public void Dispose()
	{
	}
}
