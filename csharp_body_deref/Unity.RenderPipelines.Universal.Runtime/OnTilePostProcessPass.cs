// ==================== AoTTG2 cross-reference ====================
// Type: OnTilePostProcessPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.Universal;

[Token(Token = "0x2000006")]
public class OnTilePostProcessPass : ScriptableRenderPass
{
	[Token(Token = "0x2000007")]
	private enum UberShaderPasses
	{
		[Token(Token = "0x4000012")]
		Normal,
		[Token(Token = "0x4000013")]
		MSAASoftwareResolve,
		[Token(Token = "0x4000014")]
		TextureRead,
		[Token(Token = "0x4000015")]
		NormalVisMesh,
		[Token(Token = "0x4000016")]
		MSAASoftwareResolveVisMesh,
		[Token(Token = "0x4000017")]
		TextureReadVisMesh
	}

	[Token(Token = "0x2000008")]
	private class PassData
	{
		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle source;

		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle destination;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x30")]
		internal TextureHandle lutTexture;

		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x40")]
		internal TextureHandle userLutTexture;

		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x50")]
		internal Material material;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x58")]
		internal UberShaderPasses shaderPass;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x5C")]
		internal Vector4 scaleBias;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x6C")]
		internal bool useXRVisibilityMesh;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x70")]
		internal XRPass xr;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x78")]
		internal int msaaSamples;

		[Token(Token = "0x6000017")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x2000009")]
	private static class ShaderConstants
	{
		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _Vignette_Params1;

		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _Vignette_Params2;

		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _Vignette_ParamsXR;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _Lut_Params;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _UserLut_Params;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _InternalLut;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _UserLut;
	}

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x60")]
	internal bool m_UseMultisampleShaderResolve;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x61")]
	internal bool m_UseTextureReadFallback;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x68")]
	private RTHandle m_UserLut;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x70")]
	private Material m_OnTileUberMaterial;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_BlitScaleBias;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int s_BlitTexture;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x78")]
	private int m_DitheringTextureIndex;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x80")]
	private PostProcessData m_PostProcessData;

	[Token(Token = "0x400000F")]
	private const string m_PassName = "On Tile Post Processing";

	[Token(Token = "0x4000010")]
	private const string m_FallbackPassName = "On Tile Post Processing (sampling fallback) ";

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2C08940", Offset = "0x2C06F40", VA = "0x182C08940")]
	internal OnTilePostProcessPass(PostProcessData postProcessData)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2C08690", Offset = "0x2C06C90", VA = "0x182C08690")]
	internal void Setup(ref Material onTileUberMaterial)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2C06770", Offset = "0x2C04D70", VA = "0x182C06770")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2C06CB0", Offset = "0x2C052B0", VA = "0x182C06CB0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2C067D0", Offset = "0x2C04DD0", VA = "0x182C067D0")]
	private static void ExecuteFBFetchPass(PassData data, RasterGraphContext context)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2C086A0", Offset = "0x2C06CA0", VA = "0x182C086A0")]
	private TextureHandle TryGetCachedUserLutTextureHandle(ColorLookup colorLookup, RenderGraph renderGraph)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2C07F10", Offset = "0x2C06510", VA = "0x182C07F10")]
	private void SetupLut(Material material, ColorLookup colorLookup, ColorAdjustments colorAdjustments, int lutSize)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2C08380", Offset = "0x2C06980", VA = "0x182C08380")]
	private void SetupVignette(Material material, XRPass xrPass, int width, int height, Vignette vignette)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2C08260", Offset = "0x2C06860", VA = "0x182C08260")]
	private void SetupTonemapping(Material onTileUberMaterial, Tonemapping tonemapping, bool isHdrGrading)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2C07E60", Offset = "0x2C06460", VA = "0x182C07E60")]
	private void SetupGrain(Material onTileUberMaterial, UniversalCameraData cameraData, FilmGrain filmgrain, PostProcessData data)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2C07DD0", Offset = "0x2C063D0", VA = "0x182C07DD0")]
	private void SetupDithering(Material onTileUberMaterial, UniversalCameraData cameraData, PostProcessData data)
	{
	}
}
