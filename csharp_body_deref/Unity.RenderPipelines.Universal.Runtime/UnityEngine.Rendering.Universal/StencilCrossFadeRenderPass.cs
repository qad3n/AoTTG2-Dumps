// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StencilCrossFadeRenderPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000156")]
internal sealed class StencilCrossFadeRenderPass
{
	[Token(Token = "0x2000157")]
	private class PassData
	{
		[Token(Token = "0x40007E5")]
		[FieldOffset(Offset = "0x10")]
		public TextureHandle depthTarget;

		[Token(Token = "0x40007E6")]
		[FieldOffset(Offset = "0x20")]
		public Material[] stencilDitherMaskSeedMaterials;

		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x6672D50", Offset = "0x6671D50", VA = "0x6672D50")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x40007E0")]
	[FieldOffset(Offset = "0x10")]
	private Material[] m_StencilDitherMaskSeedMaterials;

	[Token(Token = "0x40007E1")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _StencilDitherPattern;

	[Token(Token = "0x40007E2")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int _StencilRefDitherMask;

	[Token(Token = "0x40007E3")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _StencilWriteDitherMask;

	[Token(Token = "0x40007E4")]
	[FieldOffset(Offset = "0x28")]
	private readonly ProfilingSampler m_ProfilingSampler;

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x6672420", Offset = "0x6671420", VA = "0x6672420")]
	internal StencilCrossFadeRenderPass(Shader shader)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x6672700", Offset = "0x6671700", VA = "0x6672700")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x66727C0", Offset = "0x66717C0", VA = "0x66727C0")]
	public void Render(RenderGraph renderGraph, ScriptableRenderContext context, TextureHandle depthTarget)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x6672BA0", Offset = "0x6671BA0", VA = "0x6672BA0")]
	private static void ExecutePass(RasterCommandBuffer cmd, RTHandle depthTarget, Material[] stencilDitherMaskSeedMaterials)
	{
	}
}
