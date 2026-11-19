// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Vrs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x200022C")]
public static class Vrs
{
	[Token(Token = "0x200022D")]
	private class ConversionPassData
	{
		[Token(Token = "0x40009C0")]
		[FieldOffset(Offset = "0x10")]
		public TextureHandle sriTextureHandle;

		[Token(Token = "0x40009C1")]
		[FieldOffset(Offset = "0x20")]
		public TextureHandle mainTexHandle;

		[Token(Token = "0x40009C2")]
		[FieldOffset(Offset = "0x30")]
		public TextureDimension mainTexDimension;

		[Token(Token = "0x40009C3")]
		[FieldOffset(Offset = "0x34")]
		public BufferHandle mainTexLutHandle;

		[Token(Token = "0x40009C4")]
		[FieldOffset(Offset = "0x40")]
		public BufferHandle validatedShadingRateFragmentSizeHandle;

		[Token(Token = "0x40009C5")]
		[FieldOffset(Offset = "0x50")]
		public ComputeShader computeShader;

		[Token(Token = "0x40009C6")]
		[FieldOffset(Offset = "0x58")]
		public int kernelIndex;

		[Token(Token = "0x40009C7")]
		[FieldOffset(Offset = "0x5C")]
		public Vector4 scaleBias;

		[Token(Token = "0x40009C8")]
		[FieldOffset(Offset = "0x6C")]
		public Vector2Int dispatchSize;

		[Token(Token = "0x40009C9")]
		[FieldOffset(Offset = "0x74")]
		public bool yFlip;

		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x655A8C0", Offset = "0x65598C0", VA = "0x655A8C0")]
		public ConversionPassData()
		{
		}
	}

	[Token(Token = "0x200022E")]
	private class VisualizationPassData
	{
		[Token(Token = "0x40009CA")]
		[FieldOffset(Offset = "0x10")]
		public Material material;

		[Token(Token = "0x40009CB")]
		[FieldOffset(Offset = "0x18")]
		public TextureHandle source;

		[Token(Token = "0x40009CC")]
		[FieldOffset(Offset = "0x28")]
		public BufferHandle lut;

		[Token(Token = "0x40009CD")]
		[FieldOffset(Offset = "0x34")]
		public TextureHandle dummy;

		[Token(Token = "0x40009CE")]
		[FieldOffset(Offset = "0x44")]
		public Vector4 visualizationParams;

		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x655A8D0", Offset = "0x65598D0", VA = "0x655A8D0")]
		public VisualizationPassData()
		{
		}
	}

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int shadingRateFragmentSizeCount;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x8")]
	private static VrsResources s_VrsResources;

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x6558150", Offset = "0x6557150", VA = "0x6558150")]
	public static bool IsColorMaskTextureConversionSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x65581B0", Offset = "0x65571B0", VA = "0x65581B0")]
	public static bool IsInitialized()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x65582F0", Offset = "0x65572F0", VA = "0x65582F0")]
	public static void InitializeResources()
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x65584D0", Offset = "0x65574D0", VA = "0x65584D0")]
	public static void DisposeResources()
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x6558590", Offset = "0x6557590", VA = "0x6558590")]
	public static TextureHandle ColorMaskTextureToShadingRateImage(RenderGraph renderGraph, RTHandle sriRtHandle, RTHandle colorMaskRtHandle, bool yFlip)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x6558850", Offset = "0x6557850", VA = "0x6558850")]
	public static TextureHandle ColorMaskTextureToShadingRateImage(RenderGraph renderGraph, TextureHandle sriTextureHandle, TextureHandle colorMaskHandle, TextureDimension colorMaskDimension, bool yFlip)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x6559250", Offset = "0x6558250", VA = "0x6559250")]
	public static void ShadingRateImageToColorMaskTexture(RenderGraph renderGraph, in TextureHandle sriTextureHandle, in TextureHandle colorMaskHandle)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x6559D80", Offset = "0x6558D80", VA = "0x6559D80")]
	private static void ConversionDispatch(ComputeCommandBuffer cmd, ConversionPassData conversionPassData)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x655A010", Offset = "0x6559010", VA = "0x655A010")]
	public static void ColorMaskTextureToShadingRateImageDispatch(CommandBuffer cmd, RTHandle sriDestination, Texture colorMaskSource, bool yFlip = true)
	{
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x655A540", Offset = "0x6559540", VA = "0x655A540")]
	public static void ShadingRateImageToColorMaskTextureBlit(CommandBuffer cmd, RTHandle sriSource, RTHandle colorMaskDestination)
	{
	}
}
