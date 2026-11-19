// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.CopyColorPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000210")]
public class CopyColorPass : ScriptableRenderPass
{
	[Token(Token = "0x2000211")]
	private class PassData
	{
		[Token(Token = "0x4000CDE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal TextureHandle source;

		[Token(Token = "0x4000CDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal TextureHandle destination;

		[Token(Token = "0x4000CE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal bool useProceduralBlit;

		[Token(Token = "0x4000CE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal Material samplingMaterial;

		[Token(Token = "0x4000CE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal Material copyColorMaterial;

		[Token(Token = "0x4000CE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal Downsampling downsamplingMethod;

		[Token(Token = "0x4000CE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		internal int sampleOffsetShaderHandle;

		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x66C5B70", Offset = "0x66C4B70", VA = "0x66C5B70")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000CD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int m_SampleOffsetShaderHandle;

	[Token(Token = "0x4000CD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Material m_SamplingMaterial;

	[Token(Token = "0x4000CDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Downsampling m_DownsamplingMethod;

	[Token(Token = "0x4000CDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Material m_CopyColorMaterial;

	[Token(Token = "0x4000CDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string k_CopyColorPassName;

	[Token(Token = "0x4000CDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly string k_DownsampleAndCopyPassName;

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x66C4960", Offset = "0x66C3960", VA = "0x66C4960", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x66C4970", Offset = "0x66C3970", VA = "0x66C4970", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x66C4980", Offset = "0x66C3980", VA = "0x66C4980")]
	public CopyColorPass(RenderPassEvent evt, Material samplingMaterial, [Optional] Material copyColorMaterial, [Optional] string customPassName)
	{
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x66C4A80", Offset = "0x66C3A80", VA = "0x66C4A80")]
	public static void ConfigureDescriptor(Downsampling downsamplingMethod, ref RenderTextureDescriptor descriptor, out FilterMode filterMode)
	{
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x66C4AE0", Offset = "0x66C3AE0", VA = "0x66C4AE0")]
	[Obsolete("Use RTHandles for source and destination #from(2022.1) #breakingFrom(2023.1).", true)]
	public void Setup(RenderTargetIdentifier source, RenderTargetHandle destination, Downsampling downsampling)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x66C4B30", Offset = "0x66C3B30", VA = "0x66C4B30")]
	public void Setup(RTHandle source, RTHandle destination, Downsampling downsampling)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x66C4B40", Offset = "0x66C3B40", VA = "0x66C4B40")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RTHandle source, bool useDrawProceduralBlit)
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x66C4F20", Offset = "0x66C3F20", VA = "0x66C4F20")]
	internal TextureHandle Render(RenderGraph renderGraph, ContextContainer frameData, out TextureHandle destination, in TextureHandle source, Downsampling downsampling)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x66C54E0", Offset = "0x66C44E0", VA = "0x66C54E0")]
	internal void RenderToExistingTexture(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle destination, in TextureHandle source, Downsampling downsampling = Downsampling.None)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x66C5170", Offset = "0x66C4170", VA = "0x66C5170")]
	private void RenderInternal(RenderGraph renderGraph, in TextureHandle destination, in TextureHandle source, bool useProceduralBlit)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x66C5580", Offset = "0x66C4580", VA = "0x66C5580")]
	private void AddDownsampleAndCopyColorRenderPass(RenderGraph renderGraph, in TextureHandle destination, in TextureHandle source, bool useProceduralBlit, string passName)
	{
	}
}
