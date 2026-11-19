// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphBuilders
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000276")]
internal class RenderGraphBuilders : IBaseRenderGraphBuilder, IDisposable, IComputeRenderGraphBuilder, IRasterRenderGraphBuilder, IRenderAttachmentRenderGraphBuilder, IUnsafeRenderGraphBuilder
{
	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraphPass m_RenderPass;

	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x18")]
	private RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0x20")]
	private RenderGraph m_RenderGraph;

	[Token(Token = "0x4000B1F")]
	[FieldOffset(Offset = "0x28")]
	private bool m_Disposed;

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x655F3F0", Offset = "0x655E3F0", VA = "0x655F3F0")]
	public RenderGraphBuilders()
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x65733F0", Offset = "0x65723F0", VA = "0x65733F0")]
	public void Setup(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x6573490", Offset = "0x6572490", VA = "0x6573490", Slot = "14")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x65734B0", Offset = "0x65724B0", VA = "0x65734B0", Slot = "15")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x600115A")]
	[Address(RVA = "0x65734E0", Offset = "0x65724E0", VA = "0x65734E0", Slot = "16")]
	public void AllowGlobalStateModification(bool value)
	{
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x6573500", Offset = "0x6572500", VA = "0x6573500", Slot = "17")]
	public void EnableFoveatedRasterization(bool value)
	{
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x6573520", Offset = "0x6572520", VA = "0x6573520")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x6573620", Offset = "0x6572620", VA = "0x6573620")]
	public BufferHandle CreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x6573680", Offset = "0x6572680", VA = "0x6573680")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x65736D0", Offset = "0x65726D0", VA = "0x65736D0")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x6573740", Offset = "0x6572740", VA = "0x6573740", Slot = "18")]
	public void GenerateDebugData(bool value)
	{
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x6573760", Offset = "0x6572760", VA = "0x6573760", Slot = "19")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x6573780", Offset = "0x6572780", VA = "0x6573780", Slot = "36")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x6573E30", Offset = "0x6572E30", VA = "0x6573E30")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckWriteTo(in ResourceHandle handle)
	{
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x6573570", Offset = "0x6572570", VA = "0x6573570")]
	private ResourceHandle UseTransientResource(in ResourceHandle inputHandle)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x6574210", Offset = "0x6573210", VA = "0x6574210")]
	private ResourceHandle UseResource(in ResourceHandle inputHandle, AccessFlags flags)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x6574440", Offset = "0x6573440", VA = "0x6574440")]
	public BufferHandle UseBuffer(in BufferHandle input, AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x6574460", Offset = "0x6573460", VA = "0x6574460")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUseFragment(in TextureHandle tex)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x65749E0", Offset = "0x65739E0", VA = "0x65749E0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckTextureUVOriginIsValid(in ResourceHandle handle, TextureResource texRes)
	{
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x6573DD0", Offset = "0x6572DD0", VA = "0x6573DD0")]
	public void UseTexture(in TextureHandle input, AccessFlags flags)
	{
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x6574BC0", Offset = "0x6573BC0", VA = "0x6574BC0", Slot = "5")]
	public void UseGlobalTexture(int propertyId, AccessFlags flags)
	{
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x6574F50", Offset = "0x6573F50", VA = "0x6574F50", Slot = "6")]
	public void UseAllGlobalTextures(bool enable)
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x6574F70", Offset = "0x6573F70", VA = "0x6574F70")]
	public void SetGlobalTextureAfterPass(in TextureHandle input, int propertyId)
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x6575060", Offset = "0x6574060", VA = "0x6575060")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckUseFragment(in TextureHandle tex, bool isDepth)
	{
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x6576730", Offset = "0x6575730", VA = "0x6576730", Slot = "29")]
	public void SetRenderAttachment(TextureHandle tex, int index, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x65767D0", Offset = "0x65757D0", VA = "0x65767D0", Slot = "22")]
	public void SetInputAttachment(TextureHandle tex, int index, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x6576870", Offset = "0x6575870", VA = "0x6576870", Slot = "31")]
	public void SetRenderAttachmentDepth(TextureHandle tex, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x6576900", Offset = "0x6575900", VA = "0x6576900", Slot = "32")]
	public TextureHandle SetRandomAccessAttachment(TextureHandle input, int index, AccessFlags flags = AccessFlags.Read)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x6576970", Offset = "0x6575970", VA = "0x6576970")]
	public void SetShadingRateImageAttachment(in TextureHandle tex)
	{
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x65769D0", Offset = "0x65759D0", VA = "0x65769D0", Slot = "33")]
	public BufferHandle UseBufferRandomAccess(BufferHandle input, int index, AccessFlags flags = AccessFlags.Read)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x6576A40", Offset = "0x6575A40", VA = "0x6576A40", Slot = "34")]
	public BufferHandle UseBufferRandomAccess(BufferHandle input, int index, bool preserveCounterValue, AccessFlags flags = AccessFlags.Read)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001175")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, ComputeGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x6001176")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RasterGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x6001177")]
	public void SetRenderFunc<PassData>(BaseRenderFunc<PassData, UnsafeGraphContext> renderFunc) where PassData : class, new()
	{
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x6576AC0", Offset = "0x6575AC0", VA = "0x6576AC0")]
	public void UseRendererList(in RendererListHandle input)
	{
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x6576B60", Offset = "0x6575B60", VA = "0x6576B60")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckResource(in ResourceHandle res, bool checkTransientReadWrite = false)
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x65772A0", Offset = "0x65762A0", VA = "0x65772A0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckFrameBufferFetchEmulationIsSupported(in TextureHandle tex)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x65774B0", Offset = "0x65764B0", VA = "0x65774B0", Slot = "24")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x65774D0", Offset = "0x65764D0", VA = "0x65774D0", Slot = "25")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x65774F0", Offset = "0x65764F0", VA = "0x65774F0", Slot = "26")]
	public void SetExtendedFeatureFlags(ExtendedFeatureFlags extendedFeatureFlags)
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x6577510", Offset = "0x6576510", VA = "0x6577510", Slot = "23")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIRasterRenderGraphBuilder_002ESetShadingRateImageAttachment(in TextureHandle tex)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x6577570", Offset = "0x6576570", VA = "0x6577570", Slot = "4")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseTexture(in TextureHandle input, AccessFlags flags)
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x65775D0", Offset = "0x65765D0", VA = "0x65775D0", Slot = "7")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ESetGlobalTextureAfterPass(in TextureHandle input, int propertyId)
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x65775E0", Offset = "0x65765E0", VA = "0x65775E0", Slot = "8")]
	private BufferHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseBuffer(in BufferHandle input, AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x6577600", Offset = "0x6576600", VA = "0x6577600", Slot = "9")]
	private TextureHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x6577650", Offset = "0x6576650", VA = "0x6577650", Slot = "10")]
	private TextureHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x6577660", Offset = "0x6576660", VA = "0x6577660", Slot = "11")]
	private BufferHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x65776B0", Offset = "0x65766B0", VA = "0x65776B0", Slot = "12")]
	private BufferHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x65776C0", Offset = "0x65766C0", VA = "0x65776C0", Slot = "13")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseRendererList(in RendererListHandle input)
	{
	}
}
