using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200003A")]
internal class RenderGraphBuilders : IBaseRenderGraphBuilder, IDisposable, IComputeRenderGraphBuilder, IRasterRenderGraphBuilder, ILowLevelRenderGraphBuilder
{
	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraphPass m_RenderPass;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x18")]
	private RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x20")]
	private RenderGraph m_RenderGraph;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x28")]
	private bool m_Disposed;

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4864060", Offset = "0x4864060", VA = "0x4864060")]
	public RenderGraphBuilders()
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x48640B0", Offset = "0x48640B0", VA = "0x48640B0")]
	public void Setup(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4864150", Offset = "0x4864150", VA = "0x4864150", Slot = "11")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4864170", Offset = "0x4864170", VA = "0x4864170", Slot = "12")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4864190", Offset = "0x4864190", VA = "0x4864190", Slot = "13")]
	public void AllowGlobalStateModification(bool value)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x48641C0", Offset = "0x48641C0", VA = "0x48641C0")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4864230", Offset = "0x4864230", VA = "0x4864230")]
	public BufferHandle CreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x48642D0", Offset = "0x48642D0", VA = "0x48642D0")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4864340", Offset = "0x4864340", VA = "0x4864340")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4864400", Offset = "0x4864400", VA = "0x4864400", Slot = "14")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4864420", Offset = "0x4864420", VA = "0x4864420", Slot = "20")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4864450", Offset = "0x4864450", VA = "0x4864450")]
	private ResourceHandle UseResource(in ResourceHandle handle, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4864FE0", Offset = "0x4864FE0", VA = "0x4864FE0")]
	public BufferHandle UseBuffer(in BufferHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4865240", Offset = "0x4865240", VA = "0x4865240")]
	private void CheckNotUseFragment(TextureHandle tex, IBaseRenderGraphBuilder.AccessFlags flags)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4865250", Offset = "0x4865250", VA = "0x4865250")]
	public TextureHandle UseTexture(in TextureHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4865260", Offset = "0x4865260", VA = "0x4865260")]
	private void CheckUseFragment(TextureHandle tex, IBaseRenderGraphBuilder.AccessFlags flags)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4865270", Offset = "0x4865270", VA = "0x4865270", Slot = "16")]
	public TextureHandle UseTextureFragment(TextureHandle tex, int index, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4865820", Offset = "0x4865820", VA = "0x4865820", Slot = "17")]
	public TextureHandle UseTextureFragmentDepth(TextureHandle tex, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000404")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, ComputeGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x6000405")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RasterGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x6000406")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, LowLevelGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4865D70", Offset = "0x4865D70", VA = "0x4865D70")]
	public void UseRendererList(in RendererListHandle input)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4864F90", Offset = "0x4864F90", VA = "0x4864F90")]
	private ResourceHandle GetLatestVersionHandle(in ResourceHandle handle)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x48647B0", Offset = "0x48647B0", VA = "0x48647B0")]
	private void CheckResource(in ResourceHandle res, bool dontCheckTransientReadWrite = false)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4865FA0", Offset = "0x4865FA0", VA = "0x4865FA0", Slot = "4")]
	private TextureHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseTexture(in TextureHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4865FB0", Offset = "0x4865FB0", VA = "0x4865FB0", Slot = "5")]
	private BufferHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseBuffer(in BufferHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x4865FC0", Offset = "0x4865FC0", VA = "0x4865FC0", Slot = "6")]
	private TextureHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4866030", Offset = "0x4866030", VA = "0x4866030", Slot = "7")]
	private TextureHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4866040", Offset = "0x4866040", VA = "0x4866040", Slot = "8")]
	private BufferHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x48660B0", Offset = "0x48660B0", VA = "0x48660B0", Slot = "9")]
	private BufferHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x48660C0", Offset = "0x48660C0", VA = "0x48660C0", Slot = "10")]
	private void UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseRendererList(in RendererListHandle input)
	{
	}
}
