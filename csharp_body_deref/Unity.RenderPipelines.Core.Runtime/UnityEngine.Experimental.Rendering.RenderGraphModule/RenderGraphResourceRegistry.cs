using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.Rendering.RendererUtils;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000050")]
internal class RenderGraphResourceRegistry
{
	[Token(Token = "0x2000051")]
	private delegate void ResourceCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res);

	[Token(Token = "0x2000052")]
	private class RenderGraphResourcesData
	{
		[Token(Token = "0x400013B")]
		[FieldOffset(Offset = "0x10")]
		public DynamicArray<IRenderGraphResource> resourceArray;

		[Token(Token = "0x400013C")]
		[FieldOffset(Offset = "0x18")]
		public int sharedResourcesCount;

		[Token(Token = "0x400013D")]
		[FieldOffset(Offset = "0x20")]
		public IRenderGraphResourcePool pool;

		[Token(Token = "0x400013E")]
		[FieldOffset(Offset = "0x28")]
		public ResourceCallback createResourceCallback;

		[Token(Token = "0x400013F")]
		[FieldOffset(Offset = "0x30")]
		public ResourceCallback releaseResourceCallback;

		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x486A550", Offset = "0x486A550", VA = "0x486A550")]
		public RenderGraphResourcesData()
		{
		}

		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x486D900", Offset = "0x486D900", VA = "0x486D900")]
		public void Clear(bool onException, int frameIndex)
		{
		}

		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x486DAD0", Offset = "0x486DAD0", VA = "0x486DAD0")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x486DA00", Offset = "0x486DA00", VA = "0x486DA00")]
		public void PurgeUnusedGraphicsResources(int frameIndex)
		{
		}

		[Token(Token = "0x60004FE")]
		public int AddNewRenderGraphResource<ResType>(out ResType outRes, bool pooledResource = true) where ResType : IRenderGraphResource, new()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400012E")]
	private const int kSharedResourceLifetime = 30;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x0")]
	private static RenderGraphResourceRegistry m_CurrentRegistry;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraphResourcesData[] m_RenderGraphResources;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x18")]
	private DynamicArray<RendererListResource> m_RendererListResources;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x20")]
	private DynamicArray<RendererListLegacyResource> m_RendererListLegacyResources;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x28")]
	private RenderGraphDebugParams m_RenderGraphDebug;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x30")]
	private RenderGraphLogger m_ResourceLogger;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x38")]
	private RenderGraphLogger m_FrameInformationLogger;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x40")]
	private int m_CurrentFrameIndex;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x44")]
	private int m_ExecutionCount;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x48")]
	private RTHandle m_CurrentBackbuffer;

	[Token(Token = "0x4000139")]
	private const int kInitialRendererListCount = 256;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x50")]
	private List<RendererList> m_ActiveRendererLists;

	[Token(Token = "0x17000047")]
	internal static RenderGraphResourceRegistry current
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x4869950", Offset = "0x4869950", VA = "0x4869950")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x4869990", Offset = "0x4869990", VA = "0x4869990")]
		set
		{
		}
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x48699E0", Offset = "0x48699E0", VA = "0x48699E0")]
	internal RTHandle GetTexture(in TextureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4862B40", Offset = "0x4862B40", VA = "0x4862B40")]
	internal bool TextureNeedsFallback(in TextureHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4869C00", Offset = "0x4869C00", VA = "0x4869C00")]
	internal RendererList GetRendererList(in RendererListHandle handle)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4868860", Offset = "0x4868860", VA = "0x4868860")]
	internal GraphicsBuffer GetBuffer(in BufferHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4869EA0", Offset = "0x4869EA0", VA = "0x4869EA0")]
	private RenderGraphResourceRegistry()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x486A080", Offset = "0x486A080", VA = "0x486A080")]
	internal RenderGraphResourceRegistry(RenderGraphDebugParams renderGraphDebug, RenderGraphLogger frameInformationLogger)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x486A740", Offset = "0x486A740", VA = "0x486A740")]
	internal void BeginRenderGraph(int executionCount)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x486A890", Offset = "0x486A890", VA = "0x486A890")]
	internal void BeginExecute(int currentFrameIndex)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x486AB70", Offset = "0x486AB70", VA = "0x486AB70")]
	internal void EndExecute()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x486ABC0", Offset = "0x486ABC0", VA = "0x486ABC0")]
	private void CheckHandleValidity(in ResourceHandle res)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x486AC10", Offset = "0x486AC10", VA = "0x486AC10")]
	private void CheckHandleValidity(RenderGraphResourceType type, int index)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4862600", Offset = "0x4862600", VA = "0x4862600")]
	internal void IncrementWriteCount(in ResourceHandle res)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x486AD50", Offset = "0x486AD50", VA = "0x486AD50")]
	internal void NewVersion(in ResourceHandle res)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x48647D0", Offset = "0x48647D0", VA = "0x48647D0")]
	internal ResourceHandle GetLatestVersionHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x48649A0", Offset = "0x48649A0", VA = "0x48649A0")]
	internal ResourceHandle GetZeroVersionedHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4864DB0", Offset = "0x4864DB0", VA = "0x4864DB0")]
	internal ResourceHandle GetNewVersionedHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4864A30", Offset = "0x4864A30", VA = "0x4864A30")]
	internal string GetRenderGraphResourceName(in ResourceHandle res)
	{
		return null;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x486AF50", Offset = "0x486AF50", VA = "0x486AF50")]
	internal string GetRenderGraphResourceName(RenderGraphResourceType type, int index)
	{
		return null;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x48629B0", Offset = "0x48629B0", VA = "0x48629B0")]
	internal bool IsRenderGraphResourceImported(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x486AFF0", Offset = "0x486AFF0", VA = "0x486AFF0")]
	internal bool IsRenderGraphResourceShared(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x486B040", Offset = "0x486B040", VA = "0x486B040")]
	internal bool IsRenderGraphResourceForceReleased(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x486B0D0", Offset = "0x486B0D0", VA = "0x486B0D0")]
	internal bool IsGraphicsResourceCreated(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x486B270", Offset = "0x486B270", VA = "0x486B270")]
	internal bool IsRendererListCreated(in RendererListHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x486B370", Offset = "0x486B370", VA = "0x486B370")]
	internal bool IsRenderGraphResourceImported(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4865E10", Offset = "0x4865E10", VA = "0x4865E10")]
	internal int GetRenderGraphResourceTransientIndex(in ResourceHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x486B400", Offset = "0x486B400", VA = "0x486B400")]
	internal TextureHandle ImportTexture(RTHandle rt, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x486B540", Offset = "0x486B540", VA = "0x486B540")]
	internal TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x486B7E0", Offset = "0x486B7E0", VA = "0x486B7E0")]
	internal void RefreshSharedTextureDesc(TextureHandle texture, in TextureDesc desc)
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x486BA10", Offset = "0x486BA10", VA = "0x486BA10")]
	internal void ReleaseSharedTexture(TextureHandle texture)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x486BCA0", Offset = "0x486BCA0", VA = "0x486BCA0")]
	internal TextureHandle ImportBackbuffer(RenderTargetIdentifier rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x48633A0", Offset = "0x48633A0", VA = "0x48633A0")]
	internal TextureHandle CreateTexture(in TextureDesc desc, int transientPassIndex = -1)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x486BEB0", Offset = "0x486BEB0", VA = "0x486BEB0")]
	internal int GetResourceCount(RenderGraphResourceType type)
	{
		return default(int);
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x486BF10", Offset = "0x486BF10", VA = "0x486BF10")]
	internal int GetTextureResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4862F10", Offset = "0x4862F10", VA = "0x4862F10")]
	internal TextureResource GetTextureResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4863770", Offset = "0x4863770", VA = "0x4863770")]
	internal TextureDesc GetTextureResourceDesc(in ResourceHandle handle)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x486BF60", Offset = "0x486BF60", VA = "0x486BF60")]
	internal RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x486C0E0", Offset = "0x486C0E0", VA = "0x486C0E0")]
	internal RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x486C190", Offset = "0x486C190", VA = "0x486C190")]
	internal RendererListHandle CreateShadowRendererList(ScriptableRenderContext context, ref ShadowDrawingSettings shadowDrawinSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x486C250", Offset = "0x486C250", VA = "0x486C250")]
	internal RendererListHandle CreateGizmoRendererList(ScriptableRenderContext context, in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x486C320", Offset = "0x486C320", VA = "0x486C320")]
	internal RendererListHandle CreateUIOverlayRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x486C3E0", Offset = "0x486C3E0", VA = "0x486C3E0")]
	internal RendererListHandle CreateWireOverlayRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x486C4A0", Offset = "0x486C4A0", VA = "0x486C4A0")]
	internal BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer, bool forceRelease = false)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x4863B20", Offset = "0x4863B20", VA = "0x4863B20")]
	internal BufferHandle CreateBuffer(in BufferDesc desc, int transientPassIndex = -1)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x4863D00", Offset = "0x4863D00", VA = "0x4863D00")]
	internal BufferDesc GetBufferResourceDesc(in ResourceHandle handle)
	{
		return default(BufferDesc);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x486C5E0", Offset = "0x486C5E0", VA = "0x486C5E0")]
	internal int GetBufferResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4869D60", Offset = "0x4869D60", VA = "0x4869D60")]
	private BufferResource GetBufferResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x486C630", Offset = "0x486C630", VA = "0x486C630")]
	internal void UpdateSharedResourceLastFrameIndex(int type, int index)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x486A8E0", Offset = "0x486A8E0", VA = "0x486A8E0")]
	private void ManageSharedRenderGraphResources()
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x486C6B0", Offset = "0x486C6B0", VA = "0x486C6B0")]
	internal void CreatePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x486C7C0", Offset = "0x486C7C0", VA = "0x486C7C0")]
	internal void CreatePooledResource(InternalRenderGraphContext rgContext, ResourceHandle handle)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x486C880", Offset = "0x486C880", VA = "0x486C880")]
	private void CreateTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x486CAE0", Offset = "0x486CAE0", VA = "0x486CAE0")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x486CC00", Offset = "0x486CC00", VA = "0x486CC00")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, ResourceHandle handle)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x486CCC0", Offset = "0x486CCC0", VA = "0x486CCC0")]
	private void ReleaseTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x486BEA0", Offset = "0x486BEA0", VA = "0x486BEA0")]
	private void ValidateTextureDesc(in TextureDesc desc)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x486C090", Offset = "0x486C090", VA = "0x486C090")]
	private void ValidateRendererListDesc(in RendererListDesc desc)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x486C5D0", Offset = "0x486C5D0", VA = "0x486C5D0")]
	private void ValidateBufferDesc(in BufferDesc desc)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x486CEA0", Offset = "0x486CEA0", VA = "0x486CEA0")]
	internal void CreateRendererLists(List<RendererListHandle> rendererLists, ScriptableRenderContext context, bool manualDispatch = false)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x486D2D0", Offset = "0x486D2D0", VA = "0x486D2D0")]
	internal void Clear(bool onException)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x486D980", Offset = "0x486D980", VA = "0x486D980")]
	internal void PurgeUnusedGraphicsResources()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x486DA30", Offset = "0x486DA30", VA = "0x486DA30")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x486DB80", Offset = "0x486DB80", VA = "0x486DB80")]
	internal void FlushLogs()
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x486D480", Offset = "0x486D480", VA = "0x486D480")]
	private void LogResources()
	{
	}
}
