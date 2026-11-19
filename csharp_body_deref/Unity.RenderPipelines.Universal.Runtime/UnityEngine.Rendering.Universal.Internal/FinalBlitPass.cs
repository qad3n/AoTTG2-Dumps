// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.FinalBlitPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000225")]
public class FinalBlitPass : ScriptableRenderPass
{
	[Token(Token = "0x2000226")]
	private static class BlitPassNames
	{
		[Token(Token = "0x4000D5B")]
		public const string NearestSampler = "NearestDebugDraw";

		[Token(Token = "0x4000D5C")]
		public const string BilinearSampler = "BilinearDebugDraw";
	}

	[Token(Token = "0x2000227")]
	private enum BlitType
	{
		[Token(Token = "0x4000D5E")]
		Core,
		[Token(Token = "0x4000D5F")]
		HDR,
		[Token(Token = "0x4000D60")]
		Count
	}

	[Token(Token = "0x2000228")]
	private struct BlitMaterialData
	{
		[Token(Token = "0x4000D61")]
		[FieldOffset(Offset = "0x0")]
		public Material material;

		[Token(Token = "0x4000D62")]
		[FieldOffset(Offset = "0x8")]
		public int nearestSamplerPass;

		[Token(Token = "0x4000D63")]
		[FieldOffset(Offset = "0xC")]
		public int bilinearSamplerPass;
	}

	[Token(Token = "0x2000229")]
	private class PassData
	{
		[Token(Token = "0x4000D64")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle source;

		[Token(Token = "0x4000D65")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle destination;

		[Token(Token = "0x4000D66")]
		[FieldOffset(Offset = "0x30")]
		internal int sourceID;

		[Token(Token = "0x4000D67")]
		[FieldOffset(Offset = "0x34")]
		internal Vector4 hdrOutputLuminanceParams;

		[Token(Token = "0x4000D68")]
		[FieldOffset(Offset = "0x44")]
		internal bool requireSrgbConversion;

		[Token(Token = "0x4000D69")]
		[FieldOffset(Offset = "0x45")]
		internal bool enableAlphaOutput;

		[Token(Token = "0x4000D6A")]
		[FieldOffset(Offset = "0x48")]
		internal BlitMaterialData blitMaterialData;

		[Token(Token = "0x4000D6B")]
		[FieldOffset(Offset = "0x58")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000D6C")]
		[FieldOffset(Offset = "0x60")]
		internal bool useFullScreenViewport;

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x66D2470", Offset = "0x66D1470", VA = "0x66D2470")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D59")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_CameraDepthTextureID;

	[Token(Token = "0x4000D5A")]
	[FieldOffset(Offset = "0x60")]
	private BlitMaterialData[] m_BlitMaterialData;

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x66D1080", Offset = "0x66D0080", VA = "0x66D1080", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x66D1090", Offset = "0x66D0090", VA = "0x66D1090", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x66D10A0", Offset = "0x66D00A0", VA = "0x66D10A0")]
	public FinalBlitPass(RenderPassEvent evt, Material blitMaterial, Material blitHDRMaterial)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x66D12C0", Offset = "0x66D02C0", VA = "0x66D12C0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x66D12D0", Offset = "0x66D02D0", VA = "0x66D12D0")]
	[Obsolete("Use RTHandles for colorHandle. #from(2022.1) #breakingFrom(2023.1)", true)]
	public void Setup(RenderTextureDescriptor baseDescriptor, RenderTargetHandle colorHandle)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x66D1320", Offset = "0x66D0320", VA = "0x66D1320")]
	public void Setup(RenderTextureDescriptor baseDescriptor, RTHandle colorHandle)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x66D1330", Offset = "0x66D0330", VA = "0x66D1330")]
	private static void SetupHDROutput(ColorGamut hdrDisplayColorGamut, Material material, HDROutputUtils.Operation hdrOperation, Vector4 hdrOutputParameters, bool rendersOverlayUI)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x66D1460", Offset = "0x66D0460", VA = "0x66D1460")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData data, RTHandle source, RTHandle destination, UniversalCameraData cameraData, Vector4 scaleBias)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x66D17A0", Offset = "0x66D07A0", VA = "0x66D17A0")]
	private void InitPassData(UniversalCameraData cameraData, ref PassData passData, BlitType blitType, bool enableAlphaOutput, bool useFullScreenViewport)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x66D1850", Offset = "0x66D0850", VA = "0x66D1850")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, UniversalCameraData cameraData, in TextureHandle src, in TextureHandle dest, TextureHandle overlayUITexture, bool useFullScreenViewport = false)
	{
	}
}
