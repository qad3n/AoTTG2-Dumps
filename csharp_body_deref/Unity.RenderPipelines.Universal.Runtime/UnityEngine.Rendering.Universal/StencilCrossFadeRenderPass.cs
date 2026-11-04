// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StencilCrossFadeRenderPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
	[Address(RVA = "0x2C86A40", Offset = "0x2C85040", VA = "0x182C86A40")]
	internal StencilCrossFadeRenderPass(Shader shader)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x2C86420", Offset = "0x2C84A20", VA = "0x182C86420")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x2C86690", Offset = "0x2C84C90", VA = "0x182C86690")]
	public void Render(RenderGraph renderGraph, ScriptableRenderContext context, TextureHandle depthTarget)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x2C864D0", Offset = "0x2C84AD0", VA = "0x182C864D0")]
	private static void ExecutePass(RasterCommandBuffer cmd, RTHandle depthTarget, Material[] stencilDitherMaskSeedMaterials)
	{
	}
}
