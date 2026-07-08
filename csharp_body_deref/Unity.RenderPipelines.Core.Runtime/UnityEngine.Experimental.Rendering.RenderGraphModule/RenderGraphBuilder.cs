using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000039")]
public struct RenderGraphBuilder : IDisposable
{
	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x0")]
	private RenderGraphPass m_RenderPass;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x8")]
	private RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraph m_RenderGraph;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Disposed;

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x48625A0", Offset = "0x48625A0", VA = "0x48625A0")]
	public TextureHandle UseColorBuffer(in TextureHandle input, int index)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4862850", Offset = "0x4862850", VA = "0x4862850")]
	public TextureHandle UseDepthBuffer(in TextureHandle input, DepthAccess flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4862C80", Offset = "0x4862C80", VA = "0x4862C80")]
	public TextureHandle ReadTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4862BE0", Offset = "0x4862BE0", VA = "0x4862BE0")]
	public TextureHandle WriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x48632F0", Offset = "0x48632F0", VA = "0x48632F0")]
	public TextureHandle ReadWriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4863340", Offset = "0x4863340", VA = "0x4863340")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x48636C0", Offset = "0x48636C0", VA = "0x48636C0")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4863900", Offset = "0x4863900", VA = "0x4863900")]
	public RendererListHandle UseRendererList(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4863A50", Offset = "0x4863A50", VA = "0x4863A50")]
	public BufferHandle ReadBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4863A70", Offset = "0x4863A70", VA = "0x4863A70")]
	public BufferHandle WriteBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4863AB0", Offset = "0x4863AB0", VA = "0x4863AB0")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4863C70", Offset = "0x4863C70", VA = "0x4863C70")]
	public BufferHandle CreateTransientBuffer(in BufferHandle graphicsbuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E8")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RenderGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4863E50", Offset = "0x4863E50", VA = "0x4863E50")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4863E80", Offset = "0x4863E80", VA = "0x4863E80")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4863EB0", Offset = "0x4863EB0", VA = "0x4863EB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4863F10", Offset = "0x4863F10", VA = "0x4863F10")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4863F40", Offset = "0x4863F40", VA = "0x4863F40")]
	public RendererListHandle DependsOn(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4863FF0", Offset = "0x4863FF0", VA = "0x4863FF0")]
	internal RenderGraphBuilder(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4863EE0", Offset = "0x4863EE0", VA = "0x4863EE0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x48625F0", Offset = "0x48625F0", VA = "0x48625F0")]
	private void CheckResource(in ResourceHandle res, bool dontCheckTransientReadWrite = false)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4864030", Offset = "0x4864030", VA = "0x4864030")]
	internal void GenerateDebugData(bool value)
	{
	}
}
