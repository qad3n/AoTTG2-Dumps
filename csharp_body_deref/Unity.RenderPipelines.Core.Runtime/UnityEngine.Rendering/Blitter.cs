// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Blitter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001B7")]
public static class Blitter
{
	[Token(Token = "0x20001B8")]
	private static class BlitShaderIDs
	{
		[Token(Token = "0x400087C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly int _BlitTexture;

		[Token(Token = "0x400087D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public static readonly int _BlitCubeTexture;

		[Token(Token = "0x400087E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly int _BlitScaleBias;

		[Token(Token = "0x400087F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public static readonly int _BlitScaleBiasRt;

		[Token(Token = "0x4000880")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly int _SourceResolution;

		[Token(Token = "0x4000881")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static readonly int _BlitMipLevel;

		[Token(Token = "0x4000882")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly int _BlitTexArraySlice;

		[Token(Token = "0x4000883")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public static readonly int _BlitTextureSize;

		[Token(Token = "0x4000884")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly int _BlitPaddingSize;

		[Token(Token = "0x4000885")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public static readonly int _BlitDecodeInstructions;

		[Token(Token = "0x4000886")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static readonly int _InputDepth;

		[Token(Token = "0x4000887")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public static readonly int _InputDepthXR;

		[Token(Token = "0x4000888")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly int _InputDepthXRMS;
	}

	[Token(Token = "0x20001B9")]
	private enum BlitShaderPassNames
	{
		[Token(Token = "0x400088A")]
		Nearest,
		[Token(Token = "0x400088B")]
		Bilinear,
		[Token(Token = "0x400088C")]
		NearestQuad,
		[Token(Token = "0x400088D")]
		BilinearQuad,
		[Token(Token = "0x400088E")]
		NearestQuadPadding,
		[Token(Token = "0x400088F")]
		BilinearQuadPadding,
		[Token(Token = "0x4000890")]
		NearestQuadPaddingRepeat,
		[Token(Token = "0x4000891")]
		BilinearQuadPaddingRepeat,
		[Token(Token = "0x4000892")]
		BilinearQuadPaddingOctahedral,
		[Token(Token = "0x4000893")]
		NearestQuadPaddingAlphaBlend,
		[Token(Token = "0x4000894")]
		BilinearQuadPaddingAlphaBlend,
		[Token(Token = "0x4000895")]
		NearestQuadPaddingAlphaBlendRepeat,
		[Token(Token = "0x4000896")]
		BilinearQuadPaddingAlphaBlendRepeat,
		[Token(Token = "0x4000897")]
		BilinearQuadPaddingAlphaBlendOctahedral,
		[Token(Token = "0x4000898")]
		CubeToOctahedral,
		[Token(Token = "0x4000899")]
		CubeToOctahedralLuminance,
		[Token(Token = "0x400089A")]
		CubeToOctahedralAlpha,
		[Token(Token = "0x400089B")]
		CubeToOctahedralRed,
		[Token(Token = "0x400089C")]
		BilinearQuadLuminance,
		[Token(Token = "0x400089D")]
		BilinearQuadAlpha,
		[Token(Token = "0x400089E")]
		BilinearQuadRed,
		[Token(Token = "0x400089F")]
		NearestCubeToOctahedralPadding,
		[Token(Token = "0x40008A0")]
		BilinearCubeToOctahedralPadding
	}

	[Token(Token = "0x20001BA")]
	private enum BlitColorAndDepthPassNames
	{
		[Token(Token = "0x40008A2")]
		ColorOnly,
		[Token(Token = "0x40008A3")]
		ColorAndDepth,
		[Token(Token = "0x40008A4")]
		DepthOnly
	}

	[Token(Token = "0x400086E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Material s_Copy;

	[Token(Token = "0x400086F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Material s_Blit;

	[Token(Token = "0x4000870")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Material s_BlitTexArray;

	[Token(Token = "0x4000871")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Material s_BlitTexArraySingleSlice;

	[Token(Token = "0x4000872")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Material s_BlitColorAndDepth;

	[Token(Token = "0x4000873")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static MaterialPropertyBlock s_PropertyBlock;

	[Token(Token = "0x4000874")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Mesh s_TriangleMesh;

	[Token(Token = "0x4000875")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Mesh s_QuadMesh;

	[Token(Token = "0x4000876")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static LocalKeyword s_DecodeHdrKeyword;

	[Token(Token = "0x4000877")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static LocalKeyword s_ResolveDepthMSAA2X;

	[Token(Token = "0x4000878")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static LocalKeyword s_ResolveDepthMSAA4X;

	[Token(Token = "0x4000879")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static LocalKeyword s_ResolveDepthMSAA8X;

	[Token(Token = "0x400087A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static int[] s_BlitShaderPassIndicesMap;

	[Token(Token = "0x400087B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static int[] s_BlitColorAndDepthShaderPassIndicesMap;

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x653A740", Offset = "0x6539740", VA = "0x653A740")]
	public static void Initialize(Shader blitPS, Shader blitColorAndDepthPS)
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x653B670", Offset = "0x653A670", VA = "0x653B670")]
	public static void Cleanup()
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x653B840", Offset = "0x653A840", VA = "0x653B840")]
	public static Material GetBlitMaterial(TextureDimension dimension, bool singleSlice = false)
	{
		return null;
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x653B930", Offset = "0x653A930", VA = "0x653B930")]
	internal static void DrawTriangle(RasterCommandBuffer cmd, Material material, int shaderPass)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x653B9F0", Offset = "0x653A9F0", VA = "0x653B9F0")]
	internal static void DrawTriangle(CommandBuffer cmd, Material material, int shaderPass)
	{
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x653BA60", Offset = "0x653AA60", VA = "0x653BA60")]
	internal static void DrawTriangle(CommandBuffer cmd, Material material, int shaderPass, MaterialPropertyBlock propertyBlock)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x653BC80", Offset = "0x653AC80", VA = "0x653BC80")]
	internal static void DrawQuadMesh(CommandBuffer cmd, Material material, int shaderPass, MaterialPropertyBlock propertyBlock)
	{
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x653BDE0", Offset = "0x653ADE0", VA = "0x653BDE0")]
	internal static void DrawQuad(RasterCommandBuffer cmd, Material material, int shaderPass, MaterialPropertyBlock propertyBlock)
	{
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x653C070", Offset = "0x653B070", VA = "0x653C070")]
	internal static void DrawQuad(CommandBuffer cmd, Material material, int shaderPass)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x653BE50", Offset = "0x653AE50", VA = "0x653BE50")]
	internal static void DrawQuad(CommandBuffer cmd, Material material, int shaderPass, MaterialPropertyBlock propertyBlock)
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x653C0E0", Offset = "0x653B0E0", VA = "0x653C0E0")]
	internal static bool CanCopyMSAA()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x653C170", Offset = "0x653B170", VA = "0x653C170")]
	internal static bool CanCopyMSAA(bool srcBindTextureMS)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x653C210", Offset = "0x653B210", VA = "0x653C210")]
	internal static void CopyTexture(RasterCommandBuffer cmd, bool isMSAA, bool force2DForXR = false)
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x653C300", Offset = "0x653B300", VA = "0x653C300")]
	internal static void BlitTexture(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, float sourceMipLevel, int sourceDepthSlice, bool bilinear)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x653C490", Offset = "0x653B490", VA = "0x653C490")]
	internal static void BlitTexture(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, Material material, int pass, float sourceMipLevel, int sourceDepthSlice)
	{
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x653C750", Offset = "0x653B750", VA = "0x653C750")]
	public static void BlitTexture(RasterCommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x653C800", Offset = "0x653B800", VA = "0x653C800")]
	public static void BlitTexture(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x653CA70", Offset = "0x653BA70", VA = "0x653CA70")]
	public static void BlitTexture2D(RasterCommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x653CB20", Offset = "0x653BB20", VA = "0x653CB20")]
	public static void BlitTexture2D(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x653CCB0", Offset = "0x653BCB0", VA = "0x653CCB0")]
	public static void BlitColorAndDepth(RasterCommandBuffer cmd, Texture sourceColor, RenderTexture sourceDepth, Vector4 scaleBias, float mipLevel, bool blitDepth)
	{
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x653CD70", Offset = "0x653BD70", VA = "0x653CD70")]
	public static void BlitColorAndDepth(CommandBuffer cmd, Texture sourceColor, RenderTexture sourceDepth, Vector4 scaleBias, float mipLevel, bool blitDepth)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x653CFC0", Offset = "0x653BFC0", VA = "0x653CFC0")]
	public static void BlitDepth(CommandBuffer cmd, RenderTexture sourceDepth, Vector4 scaleBias, float mipLevel)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x653D330", Offset = "0x653C330", VA = "0x653D330")]
	public static void BlitTexture(RasterCommandBuffer cmd, RTHandle source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x653D3D0", Offset = "0x653C3D0", VA = "0x653D3D0")]
	public static void BlitTexture(UnsafeCommandBuffer cmd, RTHandle source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x653C5B0", Offset = "0x653B5B0", VA = "0x653C5B0")]
	public static void BlitTexture(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x653D470", Offset = "0x653C470", VA = "0x653D470")]
	public static void BlitTexture(RasterCommandBuffer cmd, RenderTargetIdentifier source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x653D500", Offset = "0x653C500", VA = "0x653D500")]
	public static void BlitTexture(CommandBuffer cmd, RenderTargetIdentifier source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x653D6A0", Offset = "0x653C6A0", VA = "0x653D6A0")]
	public static void BlitTexture(CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x653D8B0", Offset = "0x653C8B0", VA = "0x653D8B0")]
	public static void BlitTexture(CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x653DAF0", Offset = "0x653CAF0", VA = "0x653DAF0")]
	public static void BlitTexture(CommandBuffer cmd, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x653DC00", Offset = "0x653CC00", VA = "0x653DC00")]
	public static void BlitTexture(RasterCommandBuffer cmd, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x653DCD0", Offset = "0x653CCD0", VA = "0x653DCD0")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x653DE30", Offset = "0x653CE30", VA = "0x653DE30")]
	public static void BlitCameraTexture2D(CommandBuffer cmd, RTHandle source, RTHandle destination, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x653DF90", Offset = "0x653CF90", VA = "0x653DF90")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x653E0F0", Offset = "0x653D0F0", VA = "0x653E0F0")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Vector4 scaleBias, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x653E1D0", Offset = "0x653D1D0", VA = "0x653E1D0")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int pass)
	{
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x653E2F0", Offset = "0x653D2F0", VA = "0x653E2F0")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Vector4 scaleBias, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x653E3C0", Offset = "0x653D3C0", VA = "0x653E3C0")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Rect destViewport, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x6532320", Offset = "0x6531320", VA = "0x6532320")]
	public static void BlitQuad(CommandBuffer cmd, Texture source, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear)
	{
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x6528B10", Offset = "0x6527B10", VA = "0x6528B10")]
	public static void BlitQuadWithPadding(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x6528E30", Offset = "0x6527E30", VA = "0x6528E30")]
	public static void BlitQuadWithPaddingMultiply(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x6529150", Offset = "0x6528150", VA = "0x6529150")]
	public static void BlitOctahedralWithPadding(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x65293B0", Offset = "0x65283B0", VA = "0x65293B0")]
	public static void BlitOctahedralWithPaddingMultiply(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x6532B00", Offset = "0x6531B00", VA = "0x6532B00")]
	public static void BlitCubeToOctahedral2DQuad(CommandBuffer cmd, Texture source, Vector4 scaleBiasRT, int mipLevelTex)
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x653E540", Offset = "0x653D540", VA = "0x653E540")]
	public static void BlitCubeToOctahedral2DQuadWithPadding(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels, [Optional] Vector4? decodeInstructions)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x6532FC0", Offset = "0x6531FC0", VA = "0x6532FC0")]
	public static void BlitCubeToOctahedral2DQuadSingleChannel(CommandBuffer cmd, Texture source, Vector4 scaleBiasRT, int mipLevelTex)
	{
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x6532CF0", Offset = "0x6531CF0", VA = "0x6532CF0")]
	public static void BlitQuadSingleChannel(CommandBuffer cmd, Texture source, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex)
	{
	}
}
