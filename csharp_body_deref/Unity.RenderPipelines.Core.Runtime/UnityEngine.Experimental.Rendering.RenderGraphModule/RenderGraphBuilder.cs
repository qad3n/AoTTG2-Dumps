// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B87690", Offset = "0x4B87690", VA = "0x4B87690")]
	public TextureHandle UseColorBuffer(in TextureHandle input, int index)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4B87940", Offset = "0x4B87940", VA = "0x4B87940")]
	public TextureHandle UseDepthBuffer(in TextureHandle input, DepthAccess flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4B87D70", Offset = "0x4B87D70", VA = "0x4B87D70")]
	public TextureHandle ReadTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4B87CD0", Offset = "0x4B87CD0", VA = "0x4B87CD0")]
	public TextureHandle WriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4B883E0", Offset = "0x4B883E0", VA = "0x4B883E0")]
	public TextureHandle ReadWriteTexture(in TextureHandle input)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4B88430", Offset = "0x4B88430", VA = "0x4B88430")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4B887B0", Offset = "0x4B887B0", VA = "0x4B887B0")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4B889F0", Offset = "0x4B889F0", VA = "0x4B889F0")]
	public RendererListHandle UseRendererList(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4B88B40", Offset = "0x4B88B40", VA = "0x4B88B40")]
	public BufferHandle ReadBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4B88B60", Offset = "0x4B88B60", VA = "0x4B88B60")]
	public BufferHandle WriteBuffer(in BufferHandle input)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4B88BA0", Offset = "0x4B88BA0", VA = "0x4B88BA0")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4B88D60", Offset = "0x4B88D60", VA = "0x4B88D60")]
	public BufferHandle CreateTransientBuffer(in BufferHandle graphicsbuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003E8")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RenderGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4B88F40", Offset = "0x4B88F40", VA = "0x4B88F40")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4B88F70", Offset = "0x4B88F70", VA = "0x4B88F70")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4B88FA0", Offset = "0x4B88FA0", VA = "0x4B88FA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4B89000", Offset = "0x4B89000", VA = "0x4B89000")]
	public void AllowRendererListCulling(bool value)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4B89030", Offset = "0x4B89030", VA = "0x4B89030")]
	public RendererListHandle DependsOn(in RendererListHandle input)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4B890E0", Offset = "0x4B890E0", VA = "0x4B890E0")]
	internal RenderGraphBuilder(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4B88FD0", Offset = "0x4B88FD0", VA = "0x4B88FD0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4B876E0", Offset = "0x4B876E0", VA = "0x4B876E0")]
	private void CheckResource(in ResourceHandle res, bool dontCheckTransientReadWrite = false)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4B89120", Offset = "0x4B89120", VA = "0x4B89120")]
	internal void GenerateDebugData(bool value)
	{
	}
}
