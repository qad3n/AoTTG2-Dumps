// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Blitter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A0")]
public static class Blitter
{
	[Token(Token = "0x20001A1")]
	private static class BlitShaderIDs
	{
		[Token(Token = "0x400072E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly int _BlitTexture;

		[Token(Token = "0x400072F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public static readonly int _BlitCubeTexture;

		[Token(Token = "0x4000730")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly int _BlitScaleBias;

		[Token(Token = "0x4000731")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public static readonly int _BlitScaleBiasRt;

		[Token(Token = "0x4000732")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly int _BlitMipLevel;

		[Token(Token = "0x4000733")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static readonly int _BlitTextureSize;

		[Token(Token = "0x4000734")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly int _BlitPaddingSize;

		[Token(Token = "0x4000735")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public static readonly int _BlitDecodeInstructions;

		[Token(Token = "0x4000736")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly int _InputDepth;
	}

	[Token(Token = "0x4000726")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Material s_Blit;

	[Token(Token = "0x4000727")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Material s_BlitTexArray;

	[Token(Token = "0x4000728")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Material s_BlitTexArraySingleSlice;

	[Token(Token = "0x4000729")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Material s_BlitColorAndDepth;

	[Token(Token = "0x400072A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static MaterialPropertyBlock s_PropertyBlock;

	[Token(Token = "0x400072B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Mesh s_TriangleMesh;

	[Token(Token = "0x400072C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Mesh s_QuadMesh;

	[Token(Token = "0x400072D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static LocalKeyword s_DecodeHdrKeyword;

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4BF2950", Offset = "0x4BF2950", VA = "0x4BF2950")]
	public static void Initialize(Shader blitPS, Shader blitColorAndDepthPS)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4BF3430", Offset = "0x4BF3430", VA = "0x4BF3430")]
	public static void Cleanup()
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4BF3690", Offset = "0x4BF3690", VA = "0x4BF3690")]
	public static Material GetBlitMaterial(TextureDimension dimension, bool singleSlice = false)
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x4BF3720", Offset = "0x4BF3720", VA = "0x4BF3720")]
	private static void DrawTriangle(RasterCommandBuffer cmd, Material material, int shaderPass)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4BF3780", Offset = "0x4BF3780", VA = "0x4BF3780")]
	private static void DrawTriangle(CommandBuffer cmd, Material material, int shaderPass)
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4BF39C0", Offset = "0x4BF39C0", VA = "0x4BF39C0")]
	internal static void DrawQuad(CommandBuffer cmd, Material material, int shaderPass)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x4BF3C00", Offset = "0x4BF3C00", VA = "0x4BF3C00")]
	public static void BlitTexture(RasterCommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4BF3CB0", Offset = "0x4BF3CB0", VA = "0x4BF3CB0")]
	public static void BlitTexture(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4BF3FE0", Offset = "0x4BF3FE0", VA = "0x4BF3FE0")]
	public static void BlitTexture2D(RasterCommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4BF4090", Offset = "0x4BF4090", VA = "0x4BF4090")]
	public static void BlitTexture2D(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, float mipLevel, bool bilinear)
	{
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4BF41E0", Offset = "0x4BF41E0", VA = "0x4BF41E0")]
	public static void BlitColorAndDepth(RasterCommandBuffer cmd, Texture sourceColor, RenderTexture sourceDepth, Vector4 scaleBias, float mipLevel, bool blitDepth)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4BF42A0", Offset = "0x4BF42A0", VA = "0x4BF42A0")]
	public static void BlitColorAndDepth(CommandBuffer cmd, Texture sourceColor, RenderTexture sourceDepth, Vector4 scaleBias, float mipLevel, bool blitDepth)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4BF4490", Offset = "0x4BF4490", VA = "0x4BF4490")]
	public static void BlitTexture(RasterCommandBuffer cmd, RTHandle source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4BF3ED0", Offset = "0x4BF3ED0", VA = "0x4BF3ED0")]
	public static void BlitTexture(CommandBuffer cmd, RTHandle source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4BF4530", Offset = "0x4BF4530", VA = "0x4BF4530")]
	public static void BlitTexture(RasterCommandBuffer cmd, RenderTargetIdentifier source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4BF4610", Offset = "0x4BF4610", VA = "0x4BF4610")]
	public static void BlitTexture(CommandBuffer cmd, RenderTargetIdentifier source, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x4BF4750", Offset = "0x4BF4750", VA = "0x4BF4750")]
	public static void BlitTexture(CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4BF4870", Offset = "0x4BF4870", VA = "0x4BF4870")]
	public static void BlitTexture(CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4BF49A0", Offset = "0x4BF49A0", VA = "0x4BF49A0")]
	public static void BlitTexture(CommandBuffer cmd, Vector4 scaleBias, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4BF4A70", Offset = "0x4BF4A70", VA = "0x4BF4A70")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x4BF4CB0", Offset = "0x4BF4CB0", VA = "0x4BF4CB0")]
	public static void BlitCameraTexture2D(CommandBuffer cmd, RTHandle source, RTHandle destination, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4BF4E70", Offset = "0x4BF4E70", VA = "0x4BF4E70")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4BF5030", Offset = "0x4BF5030", VA = "0x4BF5030")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, Material material, int pass)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x4BF5390", Offset = "0x4BF5390", VA = "0x4BF5390")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Vector4 scaleBias, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x4BF54E0", Offset = "0x4BF54E0", VA = "0x4BF54E0")]
	public static void BlitCameraTexture(CommandBuffer cmd, RTHandle source, RTHandle destination, Rect destViewport, float mipLevel = 0f, bool bilinear = false)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x4BE7DD0", Offset = "0x4BE7DD0", VA = "0x4BE7DD0")]
	public static void BlitQuad(CommandBuffer cmd, Texture source, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x4BF56D0", Offset = "0x4BF56D0", VA = "0x4BF56D0")]
	public static void BlitQuadWithPadding(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x4BF59B0", Offset = "0x4BF59B0", VA = "0x4BF59B0")]
	public static void BlitQuadWithPaddingMultiply(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x4BF5C90", Offset = "0x4BF5C90", VA = "0x4BF5C90")]
	public static void BlitOctahedralWithPadding(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x4BF5F00", Offset = "0x4BF5F00", VA = "0x4BF5F00")]
	public static void BlitOctahedralWithPaddingMultiply(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4BE8710", Offset = "0x4BE8710", VA = "0x4BE8710")]
	public static void BlitCubeToOctahedral2DQuad(CommandBuffer cmd, Texture source, Vector4 scaleBiasRT, int mipLevelTex)
	{
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4BF6170", Offset = "0x4BF6170", VA = "0x4BF6170")]
	public static void BlitCubeToOctahedral2DQuadWithPadding(CommandBuffer cmd, Texture source, Vector2 textureSize, Vector4 scaleBiasRT, int mipLevelTex, bool bilinear, int paddingInPixels, [Optional] Vector4? decodeInstructions)
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4BE8BC0", Offset = "0x4BE8BC0", VA = "0x4BE8BC0")]
	public static void BlitCubeToOctahedral2DQuadSingleChannel(CommandBuffer cmd, Texture source, Vector4 scaleBiasRT, int mipLevelTex)
	{
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4BE8900", Offset = "0x4BE8900", VA = "0x4BE8900")]
	public static void BlitQuadSingleChannel(CommandBuffer cmd, Texture source, Vector4 scaleBiasTex, Vector4 scaleBiasRT, int mipLevelTex)
	{
	}
}
