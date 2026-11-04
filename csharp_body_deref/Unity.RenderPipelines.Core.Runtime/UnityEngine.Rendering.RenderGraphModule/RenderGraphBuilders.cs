// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphBuilders
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B70960", Offset = "0x2B6EF60", VA = "0x182B70960")]
	public RenderGraphBuilders()
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x2B6FFD0", Offset = "0x2B6E5D0", VA = "0x182B6FFD0")]
	public void Setup(RenderGraphPass renderPass, RenderGraphResourceRegistry resources, RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x2B6F940", Offset = "0x2B6DF40", VA = "0x182B6F940", Slot = "14")]
	public void EnableAsyncCompute(bool value)
	{
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x2B6C420", Offset = "0x2B6AA20", VA = "0x182B6C420", Slot = "15")]
	public void AllowPassCulling(bool value)
	{
	}

	[Token(Token = "0x600115A")]
	[Address(RVA = "0x2B6C3F0", Offset = "0x2B6A9F0", VA = "0x182B6C3F0", Slot = "16")]
	public void AllowGlobalStateModification(bool value)
	{
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x2B6F960", Offset = "0x2B6DF60", VA = "0x182B6F960", Slot = "17")]
	public void EnableFoveatedRasterization(bool value)
	{
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x2B6F0F0", Offset = "0x2B6D6F0", VA = "0x182B6F0F0")]
	public BufferHandle CreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x2B6F090", Offset = "0x2B6D690", VA = "0x182B6F090")]
	public BufferHandle CreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x2B6F1E0", Offset = "0x2B6D7E0", VA = "0x182B6F1E0")]
	public TextureHandle CreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x2B6F2D0", Offset = "0x2B6D8D0", VA = "0x182B6F2D0")]
	public TextureHandle CreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x2B6F980", Offset = "0x2B6DF80", VA = "0x182B6F980", Slot = "18")]
	public void GenerateDebugData(bool value)
	{
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x2B6F920", Offset = "0x2B6DF20", VA = "0x182B6F920", Slot = "19")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x2B6F330", Offset = "0x2B6D930", VA = "0x182B6F330", Slot = "36")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x2B6EAE0", Offset = "0x2B6D0E0", VA = "0x182B6EAE0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckWriteTo(in ResourceHandle handle)
	{
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x2B708A0", Offset = "0x2B6EEA0", VA = "0x182B708A0")]
	private ResourceHandle UseTransientResource(in ResourceHandle inputHandle)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x2B705D0", Offset = "0x2B6EBD0", VA = "0x182B705D0")]
	private ResourceHandle UseResource(in ResourceHandle inputHandle, AccessFlags flags)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x2B700D0", Offset = "0x2B6E6D0", VA = "0x182B700D0")]
	public BufferHandle UseBuffer(in BufferHandle input, AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x2B6C690", Offset = "0x2B6AC90", VA = "0x182B6C690")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUseFragment(in TextureHandle tex)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x2B6D1D0", Offset = "0x2B6B7D0", VA = "0x182B6D1D0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckTextureUVOriginIsValid(in ResourceHandle handle, TextureResource texRes)
	{
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x2B70810", Offset = "0x2B6EE10", VA = "0x182B70810")]
	public void UseTexture(in TextureHandle input, AccessFlags flags)
	{
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x2B70290", Offset = "0x2B6E890", VA = "0x182B70290", Slot = "5")]
	public void UseGlobalTexture(int propertyId, AccessFlags flags)
	{
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x2B70140", Offset = "0x2B6E740", VA = "0x182B70140", Slot = "6")]
	public void UseAllGlobalTextures(bool enable)
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x2B6F9C0", Offset = "0x2B6DFC0", VA = "0x182B6F9C0")]
	public void SetGlobalTextureAfterPass(in TextureHandle input, int propertyId)
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x2B6D400", Offset = "0x2B6BA00", VA = "0x182B6D400")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckUseFragment(in TextureHandle tex, bool isDepth)
	{
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x2B6FE30", Offset = "0x2B6E430", VA = "0x182B6FE30", Slot = "29")]
	public void SetRenderAttachment(TextureHandle tex, int index, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x2B6FAD0", Offset = "0x2B6E0D0", VA = "0x182B6FAD0", Slot = "22")]
	public void SetInputAttachment(TextureHandle tex, int index, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x2B6FC30", Offset = "0x2B6E230", VA = "0x182B6FC30", Slot = "31")]
	public void SetRenderAttachmentDepth(TextureHandle tex, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x2B6FBA0", Offset = "0x2B6E1A0", VA = "0x182B6FBA0", Slot = "32")]
	public TextureHandle SetRandomAccessAttachment(TextureHandle input, int index, AccessFlags flags = AccessFlags.Read)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x2B6FF40", Offset = "0x2B6E540", VA = "0x182B6FF40")]
	public void SetShadingRateImageAttachment(in TextureHandle tex)
	{
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x2B70160", Offset = "0x2B6E760", VA = "0x182B70160", Slot = "33")]
	public BufferHandle UseBufferRandomAccess(BufferHandle input, int index, AccessFlags flags = AccessFlags.Read)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x2B701F0", Offset = "0x2B6E7F0", VA = "0x182B701F0", Slot = "34")]
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
	[Address(RVA = "0x2B70110", Offset = "0x2B6E710", VA = "0x182B70110")]
	public void UseRendererList(in RendererListHandle input)
	{
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x2B6CAD0", Offset = "0x2B6B0D0", VA = "0x182B6CAD0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckResource(in ResourceHandle res, bool checkTransientReadWrite = false)
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x2B6C450", Offset = "0x2B6AA50", VA = "0x182B6C450")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckFrameBufferFetchEmulationIsSupported(in TextureHandle tex)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x2B6FF20", Offset = "0x2B6E520", VA = "0x182B6FF20", Slot = "24")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x2B6FF00", Offset = "0x2B6E500", VA = "0x182B6FF00", Slot = "25")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x2B6F9A0", Offset = "0x2B6DFA0", VA = "0x182B6F9A0", Slot = "26")]
	public void SetExtendedFeatureFlags(ExtendedFeatureFlags extendedFeatureFlags)
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x2B6FF40", Offset = "0x2B6E540", VA = "0x182B6FF40", Slot = "23")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIRasterRenderGraphBuilder_002ESetShadingRateImageAttachment(in TextureHandle tex)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x2B70130", Offset = "0x2B6E730", VA = "0x182B70130", Slot = "4")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseTexture(in TextureHandle input, AccessFlags flags)
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x2B6F9C0", Offset = "0x2B6DFC0", VA = "0x182B6F9C0", Slot = "7")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ESetGlobalTextureAfterPass(in TextureHandle input, int propertyId)
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x2B700D0", Offset = "0x2B6E6D0", VA = "0x182B700D0", Slot = "8")]
	private BufferHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseBuffer(in BufferHandle input, AccessFlags flags)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x2B700A0", Offset = "0x2B6E6A0", VA = "0x182B700A0", Slot = "9")]
	private TextureHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x2B6F2D0", Offset = "0x2B6D8D0", VA = "0x182B6F2D0", Slot = "10")]
	private TextureHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientTexture(in TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x2B70070", Offset = "0x2B6E670", VA = "0x182B70070", Slot = "11")]
	private BufferHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x2B6F090", Offset = "0x2B6D690", VA = "0x182B6F090", Slot = "12")]
	private BufferHandle UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002ECreateTransientBuffer(in BufferHandle computebuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x2B70110", Offset = "0x2B6E710", VA = "0x182B70110", Slot = "13")]
	private void UnityEngine_002ERendering_002ERenderGraphModule_002EIBaseRenderGraphBuilder_002EUseRendererList(in RendererListHandle input)
	{
	}
}
