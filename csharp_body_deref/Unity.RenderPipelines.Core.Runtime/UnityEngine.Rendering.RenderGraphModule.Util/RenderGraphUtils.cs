// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.Util;

[Token(Token = "0x20002A8")]
public static class RenderGraphUtils
{
	[Token(Token = "0x20002A9")]
	private class CopyPassData
	{
		[Token(Token = "0x4000BF3")]
		[FieldOffset(Offset = "0x10")]
		public bool isMSAA;

		[Token(Token = "0x4000BF4")]
		[FieldOffset(Offset = "0x11")]
		public bool force2DForXR;

		[Token(Token = "0x6001328")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CopyPassData()
		{
		}
	}

	[Token(Token = "0x20002AA")]
	public enum BlitFilterMode
	{
		[Token(Token = "0x4000BF6")]
		ClampNearest,
		[Token(Token = "0x4000BF7")]
		ClampBilinear
	}

	[Token(Token = "0x20002AB")]
	private class BlitPassData
	{
		[Token(Token = "0x4000BF8")]
		[FieldOffset(Offset = "0x10")]
		public TextureHandle source;

		[Token(Token = "0x4000BF9")]
		[FieldOffset(Offset = "0x20")]
		public TextureHandle destination;

		[Token(Token = "0x4000BFA")]
		[FieldOffset(Offset = "0x30")]
		public Vector2 scale;

		[Token(Token = "0x4000BFB")]
		[FieldOffset(Offset = "0x38")]
		public Vector2 offset;

		[Token(Token = "0x4000BFC")]
		[FieldOffset(Offset = "0x40")]
		public int sourceSlice;

		[Token(Token = "0x4000BFD")]
		[FieldOffset(Offset = "0x44")]
		public int destinationSlice;

		[Token(Token = "0x4000BFE")]
		[FieldOffset(Offset = "0x48")]
		public int numSlices;

		[Token(Token = "0x4000BFF")]
		[FieldOffset(Offset = "0x4C")]
		public int sourceMip;

		[Token(Token = "0x4000C00")]
		[FieldOffset(Offset = "0x50")]
		public int destinationMip;

		[Token(Token = "0x4000C01")]
		[FieldOffset(Offset = "0x54")]
		public int numMips;

		[Token(Token = "0x4000C02")]
		[FieldOffset(Offset = "0x58")]
		public BlitFilterMode filterMode;

		[Token(Token = "0x4000C03")]
		[FieldOffset(Offset = "0x5C")]
		public bool isXR;

		[Token(Token = "0x4000C04")]
		[FieldOffset(Offset = "0x5D")]
		public bool isDepth;

		[Token(Token = "0x6001329")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public BlitPassData()
		{
		}
	}

	[Token(Token = "0x20002AC")]
	public enum FullScreenGeometryType
	{
		[Token(Token = "0x4000C06")]
		Mesh,
		[Token(Token = "0x4000C07")]
		ProceduralTriangle,
		[Token(Token = "0x4000C08")]
		ProceduralQuad
	}

	[Token(Token = "0x20002AD")]
	public struct BlitMaterialParameters
	{
		[Token(Token = "0x4000C09")]
		[FieldOffset(Offset = "0x0")]
		private static readonly int blitTextureProperty;

		[Token(Token = "0x4000C0A")]
		[FieldOffset(Offset = "0x4")]
		private static readonly int blitSliceProperty;

		[Token(Token = "0x4000C0B")]
		[FieldOffset(Offset = "0x8")]
		private static readonly int blitMipProperty;

		[Token(Token = "0x4000C0C")]
		[FieldOffset(Offset = "0xC")]
		private static readonly int blitScaleBias;

		[Token(Token = "0x4000C0D")]
		[FieldOffset(Offset = "0x0")]
		public TextureHandle source;

		[Token(Token = "0x4000C0E")]
		[FieldOffset(Offset = "0x10")]
		public TextureHandle destination;

		[Token(Token = "0x4000C0F")]
		[FieldOffset(Offset = "0x20")]
		public Vector2 scale;

		[Token(Token = "0x4000C10")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 offset;

		[Token(Token = "0x4000C11")]
		[FieldOffset(Offset = "0x30")]
		public int sourceSlice;

		[Token(Token = "0x4000C12")]
		[FieldOffset(Offset = "0x34")]
		public int destinationSlice;

		[Token(Token = "0x4000C13")]
		[FieldOffset(Offset = "0x38")]
		public int numSlices;

		[Token(Token = "0x4000C14")]
		[FieldOffset(Offset = "0x3C")]
		public int sourceMip;

		[Token(Token = "0x4000C15")]
		[FieldOffset(Offset = "0x40")]
		public int destinationMip;

		[Token(Token = "0x4000C16")]
		[FieldOffset(Offset = "0x44")]
		public int numMips;

		[Token(Token = "0x4000C17")]
		[FieldOffset(Offset = "0x48")]
		public Material material;

		[Token(Token = "0x4000C18")]
		[FieldOffset(Offset = "0x50")]
		public int shaderPass;

		[Token(Token = "0x4000C19")]
		[FieldOffset(Offset = "0x58")]
		public MaterialPropertyBlock propertyBlock;

		[Token(Token = "0x4000C1A")]
		[FieldOffset(Offset = "0x60")]
		public int sourceTexturePropertyID;

		[Token(Token = "0x4000C1B")]
		[FieldOffset(Offset = "0x64")]
		public int sourceSlicePropertyID;

		[Token(Token = "0x4000C1C")]
		[FieldOffset(Offset = "0x68")]
		public int sourceMipPropertyID;

		[Token(Token = "0x4000C1D")]
		[FieldOffset(Offset = "0x6C")]
		public int scaleBiasPropertyID;

		[Token(Token = "0x4000C1E")]
		[FieldOffset(Offset = "0x70")]
		public FullScreenGeometryType geometry;

		[Token(Token = "0x600132A")]
		[Address(RVA = "0x2B887E0", Offset = "0x2B86DE0", VA = "0x182B887E0")]
		public BlitMaterialParameters(TextureHandle source, TextureHandle destination, Material material, int shaderPass)
		{
		}

		[Token(Token = "0x600132B")]
		[Address(RVA = "0x2B88270", Offset = "0x2B86870", VA = "0x182B88270")]
		public BlitMaterialParameters(TextureHandle source, TextureHandle destination, Vector2 scale, Vector2 offset, Material material, int shaderPass)
		{
		}

		[Token(Token = "0x600132C")]
		[Address(RVA = "0x2B88070", Offset = "0x2B86670", VA = "0x182B88070")]
		public BlitMaterialParameters(TextureHandle source, TextureHandle destination, Material material, int shaderPass, MaterialPropertyBlock mpb, int destinationSlice, int destinationMip, int numSlices = -1, int numMips = 1, int sourceSlice = -1, int sourceMip = -1, FullScreenGeometryType geometry = FullScreenGeometryType.Mesh, int sourceTexturePropertyID = -1, int sourceSlicePropertyID = -1, int sourceMipPropertyID = -1)
		{
		}

		[Token(Token = "0x600132D")]
		[Address(RVA = "0x2B88680", Offset = "0x2B86C80", VA = "0x182B88680")]
		public BlitMaterialParameters(TextureHandle source, TextureHandle destination, Vector2 scale, Vector2 offset, Material material, int shaderPass, MaterialPropertyBlock mpb, int destinationSlice, int destinationMip, int numSlices = -1, int numMips = 1, int sourceSlice = -1, int sourceMip = -1, FullScreenGeometryType geometry = FullScreenGeometryType.Mesh, int sourceTexturePropertyID = -1, int sourceSlicePropertyID = -1, int sourceMipPropertyID = -1, int scaleBiasPropertyID = -1)
		{
		}

		[Token(Token = "0x600132E")]
		[Address(RVA = "0x2B884C0", Offset = "0x2B86AC0", VA = "0x182B884C0")]
		public BlitMaterialParameters(TextureHandle source, TextureHandle destination, Material material, int shaderPass, MaterialPropertyBlock mpb, FullScreenGeometryType geometry = FullScreenGeometryType.Mesh, int sourceTexturePropertyID = -1, int sourceSlicePropertyID = -1, int sourceMipPropertyID = -1)
		{
		}

		[Token(Token = "0x600132F")]
		[Address(RVA = "0x2B883A0", Offset = "0x2B869A0", VA = "0x182B883A0")]
		public BlitMaterialParameters(TextureHandle source, TextureHandle destination, Vector2 scale, Vector2 offset, Material material, int shaderPass, MaterialPropertyBlock mpb, FullScreenGeometryType geometry = FullScreenGeometryType.Mesh, int sourceTexturePropertyID = -1, int sourceSlicePropertyID = -1, int sourceMipPropertyID = -1, int scaleBiasPropertyID = -1)
		{
		}
	}

	[Token(Token = "0x20002AE")]
	private class BlitMaterialPassData
	{
		[Token(Token = "0x4000C1F")]
		[FieldOffset(Offset = "0x10")]
		public int sourceTexturePropertyID;

		[Token(Token = "0x4000C20")]
		[FieldOffset(Offset = "0x14")]
		public TextureHandle source;

		[Token(Token = "0x4000C21")]
		[FieldOffset(Offset = "0x24")]
		public TextureHandle destination;

		[Token(Token = "0x4000C22")]
		[FieldOffset(Offset = "0x34")]
		public Vector2 scale;

		[Token(Token = "0x4000C23")]
		[FieldOffset(Offset = "0x3C")]
		public Vector2 offset;

		[Token(Token = "0x4000C24")]
		[FieldOffset(Offset = "0x48")]
		public Material material;

		[Token(Token = "0x4000C25")]
		[FieldOffset(Offset = "0x50")]
		public int shaderPass;

		[Token(Token = "0x4000C26")]
		[FieldOffset(Offset = "0x58")]
		public MaterialPropertyBlock propertyBlock;

		[Token(Token = "0x4000C27")]
		[FieldOffset(Offset = "0x60")]
		public int sourceSlice;

		[Token(Token = "0x4000C28")]
		[FieldOffset(Offset = "0x64")]
		public int destinationSlice;

		[Token(Token = "0x4000C29")]
		[FieldOffset(Offset = "0x68")]
		public int numSlices;

		[Token(Token = "0x4000C2A")]
		[FieldOffset(Offset = "0x6C")]
		public int sourceMip;

		[Token(Token = "0x4000C2B")]
		[FieldOffset(Offset = "0x70")]
		public int destinationMip;

		[Token(Token = "0x4000C2C")]
		[FieldOffset(Offset = "0x74")]
		public int numMips;

		[Token(Token = "0x4000C2D")]
		[FieldOffset(Offset = "0x78")]
		public FullScreenGeometryType geometry;

		[Token(Token = "0x4000C2E")]
		[FieldOffset(Offset = "0x7C")]
		public int sourceSlicePropertyID;

		[Token(Token = "0x4000C2F")]
		[FieldOffset(Offset = "0x80")]
		public int sourceMipPropertyID;

		[Token(Token = "0x4000C30")]
		[FieldOffset(Offset = "0x84")]
		public int scaleBiasPropertyID;

		[Token(Token = "0x4000C31")]
		[FieldOffset(Offset = "0x88")]
		public bool isXR;

		[Token(Token = "0x6001331")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public BlitMaterialPassData()
		{
		}
	}

	[Token(Token = "0x4000BF1")]
	[FieldOffset(Offset = "0x0")]
	private static MaterialPropertyBlock s_PropertyBlock;

	[Token(Token = "0x4000BF2")]
	[FieldOffset(Offset = "0x8")]
	private static Vector4 s_BlitScaleBias;

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x2BA5300", Offset = "0x2BA3900", VA = "0x182BA5300")]
	public static bool CanAddCopyPassMSAA()
	{
		return default(bool);
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x2BA5260", Offset = "0x2BA3860", VA = "0x182BA5260")]
	public static bool CanAddCopyPassMSAA(in TextureDesc sourceDesc)
	{
		return default(bool);
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x2BA5390", Offset = "0x2BA3990", VA = "0x182BA5390")]
	public static bool CanAddCopyPassMSAA(bool bindTextureMS)
	{
		return default(bool);
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	internal static bool IsFramebufferFetchEmulationSupportedOnCurrentPlatform()
	{
		return default(bool);
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x2BA5710", Offset = "0x2BA3D10", VA = "0x182BA5710")]
	internal static bool IsFramebufferFetchEmulationMSAASupportedOnCurrentPlatform()
	{
		return default(bool);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x2BA5750", Offset = "0x2BA3D50", VA = "0x182BA5750")]
	public static bool IsFramebufferFetchSupportedOnCurrentPlatform(this RenderGraph graph, in TextureHandle tex)
	{
		return default(bool);
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x2BA5430", Offset = "0x2BA3A30", VA = "0x182BA5430")]
	public static bool CanAddCopyPass(this RenderGraph graph, TextureHandle source, TextureHandle destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x2BA3EA0", Offset = "0x2BA24A0", VA = "0x182BA3EA0")]
	public static IBaseRenderGraphBuilder AddCopyPass(this RenderGraph graph, TextureHandle source, TextureHandle destination, string passName = "Copy Pass Utility", bool returnBuilder = false, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
		return null;
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x2BA3DF0", Offset = "0x2BA23F0", VA = "0x182BA3DF0")]
	public static void AddCopyPass(this RenderGraph graph, TextureHandle source, TextureHandle destination, int sourceSlice, int destinationSlice = 0, int sourceMip = 0, int destinationMip = 0, string passName = "Copy Pass Utility", [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x2BA5690", Offset = "0x2BA3C90", VA = "0x182BA5690")]
	private static void CopyRenderFunc(CopyPassData data, RasterGraphContext rgContext)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x2BA5820", Offset = "0x2BA3E20", VA = "0x182BA5820")]
	internal static bool IsTextureXR(ref RenderTargetInfo destDesc, int sourceSlice, int destinationSlice, int numSlices, int numMips)
	{
		return default(bool);
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x2BA3270", Offset = "0x2BA1870", VA = "0x182BA3270")]
	public static IBaseRenderGraphBuilder AddBlitPass(this RenderGraph graph, TextureHandle source, TextureHandle destination, Vector2 scale, Vector2 offset, int sourceSlice = 0, int destinationSlice = 0, int numSlices = -1, int sourceMip = 0, int destinationMip = 0, int numMips = 1, BlitFilterMode filterMode = BlitFilterMode.ClampBilinear, string passName = "Blit Pass Utility", bool returnBuilder = false, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
		return null;
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x2BA4CB0", Offset = "0x2BA32B0", VA = "0x182BA4CB0")]
	private static void BlitRenderFunc(BlitPassData data, UnsafeGraphContext context)
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x2BA2700", Offset = "0x2BA0D00", VA = "0x182BA2700")]
	public static IBaseRenderGraphBuilder AddBlitPass(this RenderGraph graph, BlitMaterialParameters blitParameters, string passName = "Blit Pass Utility w. Material", bool returnBuilder = false, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
		return null;
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x2BA45A0", Offset = "0x2BA2BA0", VA = "0x182BA45A0")]
	private static void BlitMaterialRenderFunc(BlitMaterialPassData data, UnsafeGraphContext context)
	{
	}
}
