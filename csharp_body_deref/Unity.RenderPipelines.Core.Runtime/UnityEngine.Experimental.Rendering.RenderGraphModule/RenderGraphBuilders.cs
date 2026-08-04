// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilders
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B89150", Offset = "0x4B89150", VA = "0x4B89150")]
	public RenderGraphBuilders()
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4B891A0", Offset = "0x4B891A0", VA = "0x4B891A0")]
	public void Setup(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4B89240", Offset = "0x4B89240", VA = "0x4B89240", Slot = "11")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4B89260", Offset = "0x4B89260", VA = "0x4B89260", Slot = "12")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4B89280", Offset = "0x4B89280", VA = "0x4B89280", Slot = "13")]
	public void AllowGlobalStateModification(bool value)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x4B892B0", Offset = "0x4B892B0", VA = "0x4B892B0")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4B89320", Offset = "0x4B89320", VA = "0x4B89320")]
	public BufferHandle CreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4B893C0", Offset = "0x4B893C0", VA = "0x4B893C0")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4B89430", Offset = "0x4B89430", VA = "0x4B89430")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4B894F0", Offset = "0x4B894F0", VA = "0x4B894F0", Slot = "14")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4B89510", Offset = "0x4B89510", VA = "0x4B89510", Slot = "20")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4B89540", Offset = "0x4B89540", VA = "0x4B89540")]
	private ResourceHandle UseResource(in ResourceHandle handle, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4B8A0D0", Offset = "0x4B8A0D0", VA = "0x4B8A0D0")]
	public BufferHandle UseBuffer(in BufferHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4B8A330", Offset = "0x4B8A330", VA = "0x4B8A330")]
	private void CheckNotUseFragment(TextureHandle tex, IBaseRenderGraphBuilder.AccessFlags flags)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4B8A340", Offset = "0x4B8A340", VA = "0x4B8A340")]
	public TextureHandle UseTexture(in TextureHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4B8A350", Offset = "0x4B8A350", VA = "0x4B8A350")]
	private void CheckUseFragment(TextureHandle tex, IBaseRenderGraphBuilder.AccessFlags flags)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4B8A360", Offset = "0x4B8A360", VA = "0x4B8A360", Slot = "16")]
	public TextureHandle UseTextureFragment(TextureHandle tex, int index, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4B8A910", Offset = "0x4B8A910", VA = "0x4B8A910", Slot = "17")]
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
	[Address(RVA = "0x4B8AE60", Offset = "0x4B8AE60", VA = "0x4B8AE60")]
	public void UseRendererList(in RendererListHandle input)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4B8A080", Offset = "0x4B8A080", VA = "0x4B8A080")]
	private ResourceHandle GetLatestVersionHandle(in ResourceHandle handle)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4B898A0", Offset = "0x4B898A0", VA = "0x4B898A0")]
	private void CheckResource(in ResourceHandle res, bool dontCheckTransientReadWrite = false)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4B8B090", Offset = "0x4B8B090", VA = "0x4B8B090", Slot = "4")]
	private TextureHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseTexture(in TextureHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4B8B0A0", Offset = "0x4B8B0A0", VA = "0x4B8B0A0", Slot = "5")]
	private BufferHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseBuffer(in BufferHandle input, IBaseRenderGraphBuilder.AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x4B8B0B0", Offset = "0x4B8B0B0", VA = "0x4B8B0B0", Slot = "6")]
	private TextureHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4B8B120", Offset = "0x4B8B120", VA = "0x4B8B120", Slot = "7")]
	private TextureHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4B8B130", Offset = "0x4B8B130", VA = "0x4B8B130", Slot = "8")]
	private BufferHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4B8B1A0", Offset = "0x4B8B1A0", VA = "0x4B8B1A0", Slot = "9")]
	private BufferHandle UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4B8B1B0", Offset = "0x4B8B1B0", VA = "0x4B8B1B0", Slot = "10")]
	private void UnityEngine_002EExperimental_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseRendererList(in RendererListHandle input)
	{
	}
}
