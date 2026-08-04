// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B8F640", Offset = "0x4B8F640", VA = "0x4B8F640")]
		public RenderGraphResourcesData()
		{
		}

		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x4B929F0", Offset = "0x4B929F0", VA = "0x4B929F0")]
		public void Clear(bool onException, int frameIndex)
		{
		}

		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x4B92BC0", Offset = "0x4B92BC0", VA = "0x4B92BC0")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x4B92AF0", Offset = "0x4B92AF0", VA = "0x4B92AF0")]
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
		[Address(RVA = "0x4B8EA40", Offset = "0x4B8EA40", VA = "0x4B8EA40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x4B8EA80", Offset = "0x4B8EA80", VA = "0x4B8EA80")]
		set
		{
		}
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4B8EAD0", Offset = "0x4B8EAD0", VA = "0x4B8EAD0")]
	internal RTHandle GetTexture(in TextureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4B87C30", Offset = "0x4B87C30", VA = "0x4B87C30")]
	internal bool TextureNeedsFallback(in TextureHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4B8ECF0", Offset = "0x4B8ECF0", VA = "0x4B8ECF0")]
	internal RendererList GetRendererList(in RendererListHandle handle)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4B8D950", Offset = "0x4B8D950", VA = "0x4B8D950")]
	internal GraphicsBuffer GetBuffer(in BufferHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4B8EF90", Offset = "0x4B8EF90", VA = "0x4B8EF90")]
	private RenderGraphResourceRegistry()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4B8F170", Offset = "0x4B8F170", VA = "0x4B8F170")]
	internal RenderGraphResourceRegistry(RenderGraphDebugParams renderGraphDebug, RenderGraphLogger frameInformationLogger)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4B8F830", Offset = "0x4B8F830", VA = "0x4B8F830")]
	internal void BeginRenderGraph(int executionCount)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4B8F980", Offset = "0x4B8F980", VA = "0x4B8F980")]
	internal void BeginExecute(int currentFrameIndex)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4B8FC60", Offset = "0x4B8FC60", VA = "0x4B8FC60")]
	internal void EndExecute()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4B8FCB0", Offset = "0x4B8FCB0", VA = "0x4B8FCB0")]
	private void CheckHandleValidity(in ResourceHandle res)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4B8FD00", Offset = "0x4B8FD00", VA = "0x4B8FD00")]
	private void CheckHandleValidity(RenderGraphResourceType type, int index)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4B876F0", Offset = "0x4B876F0", VA = "0x4B876F0")]
	internal void IncrementWriteCount(in ResourceHandle res)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4B8FE40", Offset = "0x4B8FE40", VA = "0x4B8FE40")]
	internal void NewVersion(in ResourceHandle res)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x4B898C0", Offset = "0x4B898C0", VA = "0x4B898C0")]
	internal ResourceHandle GetLatestVersionHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4B89A90", Offset = "0x4B89A90", VA = "0x4B89A90")]
	internal ResourceHandle GetZeroVersionedHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4B89EA0", Offset = "0x4B89EA0", VA = "0x4B89EA0")]
	internal ResourceHandle GetNewVersionedHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4B89B20", Offset = "0x4B89B20", VA = "0x4B89B20")]
	internal string GetRenderGraphResourceName(in ResourceHandle res)
	{
		return null;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4B90040", Offset = "0x4B90040", VA = "0x4B90040")]
	internal string GetRenderGraphResourceName(RenderGraphResourceType type, int index)
	{
		return null;
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4B87AA0", Offset = "0x4B87AA0", VA = "0x4B87AA0")]
	internal bool IsRenderGraphResourceImported(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4B900E0", Offset = "0x4B900E0", VA = "0x4B900E0")]
	internal bool IsRenderGraphResourceShared(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4B90130", Offset = "0x4B90130", VA = "0x4B90130")]
	internal bool IsRenderGraphResourceForceReleased(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4B901C0", Offset = "0x4B901C0", VA = "0x4B901C0")]
	internal bool IsGraphicsResourceCreated(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4B90360", Offset = "0x4B90360", VA = "0x4B90360")]
	internal bool IsRendererListCreated(in RendererListHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4B90460", Offset = "0x4B90460", VA = "0x4B90460")]
	internal bool IsRenderGraphResourceImported(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4B8AF00", Offset = "0x4B8AF00", VA = "0x4B8AF00")]
	internal int GetRenderGraphResourceTransientIndex(in ResourceHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4B904F0", Offset = "0x4B904F0", VA = "0x4B904F0")]
	internal TextureHandle ImportTexture(RTHandle rt, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4B90630", Offset = "0x4B90630", VA = "0x4B90630")]
	internal TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4B908D0", Offset = "0x4B908D0", VA = "0x4B908D0")]
	internal void RefreshSharedTextureDesc(TextureHandle texture, in TextureDesc desc)
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4B90B00", Offset = "0x4B90B00", VA = "0x4B90B00")]
	internal void ReleaseSharedTexture(TextureHandle texture)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x4B90D90", Offset = "0x4B90D90", VA = "0x4B90D90")]
	internal TextureHandle ImportBackbuffer(RenderTargetIdentifier rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4B88490", Offset = "0x4B88490", VA = "0x4B88490")]
	internal TextureHandle CreateTexture(in TextureDesc desc, int transientPassIndex = -1)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4B90FA0", Offset = "0x4B90FA0", VA = "0x4B90FA0")]
	internal int GetResourceCount(RenderGraphResourceType type)
	{
		return default(int);
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x4B91000", Offset = "0x4B91000", VA = "0x4B91000")]
	internal int GetTextureResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x4B88000", Offset = "0x4B88000", VA = "0x4B88000")]
	internal TextureResource GetTextureResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4B88860", Offset = "0x4B88860", VA = "0x4B88860")]
	internal TextureDesc GetTextureResourceDesc(in ResourceHandle handle)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x4B91050", Offset = "0x4B91050", VA = "0x4B91050")]
	internal RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x4B911D0", Offset = "0x4B911D0", VA = "0x4B911D0")]
	internal RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x4B91280", Offset = "0x4B91280", VA = "0x4B91280")]
	internal RendererListHandle CreateShadowRendererList(ScriptableRenderContext context, ref ShadowDrawingSettings shadowDrawinSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4B91340", Offset = "0x4B91340", VA = "0x4B91340")]
	internal RendererListHandle CreateGizmoRendererList(ScriptableRenderContext context, in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x4B91410", Offset = "0x4B91410", VA = "0x4B91410")]
	internal RendererListHandle CreateUIOverlayRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x4B914D0", Offset = "0x4B914D0", VA = "0x4B914D0")]
	internal RendererListHandle CreateWireOverlayRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x4B91590", Offset = "0x4B91590", VA = "0x4B91590")]
	internal BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer, bool forceRelease = false)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x4B88C10", Offset = "0x4B88C10", VA = "0x4B88C10")]
	internal BufferHandle CreateBuffer(in BufferDesc desc, int transientPassIndex = -1)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x4B88DF0", Offset = "0x4B88DF0", VA = "0x4B88DF0")]
	internal BufferDesc GetBufferResourceDesc(in ResourceHandle handle)
	{
		return default(BufferDesc);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x4B916D0", Offset = "0x4B916D0", VA = "0x4B916D0")]
	internal int GetBufferResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x4B8EE50", Offset = "0x4B8EE50", VA = "0x4B8EE50")]
	private BufferResource GetBufferResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x4B91720", Offset = "0x4B91720", VA = "0x4B91720")]
	internal void UpdateSharedResourceLastFrameIndex(int type, int index)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x4B8F9D0", Offset = "0x4B8F9D0", VA = "0x4B8F9D0")]
	private void ManageSharedRenderGraphResources()
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x4B917A0", Offset = "0x4B917A0", VA = "0x4B917A0")]
	internal void CreatePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x4B918B0", Offset = "0x4B918B0", VA = "0x4B918B0")]
	internal void CreatePooledResource(InternalRenderGraphContext rgContext, ResourceHandle handle)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x4B91970", Offset = "0x4B91970", VA = "0x4B91970")]
	private void CreateTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4B91BD0", Offset = "0x4B91BD0", VA = "0x4B91BD0")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x4B91CF0", Offset = "0x4B91CF0", VA = "0x4B91CF0")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, ResourceHandle handle)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x4B91DB0", Offset = "0x4B91DB0", VA = "0x4B91DB0")]
	private void ReleaseTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4B90F90", Offset = "0x4B90F90", VA = "0x4B90F90")]
	private void ValidateTextureDesc(in TextureDesc desc)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4B91180", Offset = "0x4B91180", VA = "0x4B91180")]
	private void ValidateRendererListDesc(in RendererListDesc desc)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x4B916C0", Offset = "0x4B916C0", VA = "0x4B916C0")]
	private void ValidateBufferDesc(in BufferDesc desc)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x4B91F90", Offset = "0x4B91F90", VA = "0x4B91F90")]
	internal void CreateRendererLists(List<RendererListHandle> rendererLists, ScriptableRenderContext context, bool manualDispatch = false)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4B923C0", Offset = "0x4B923C0", VA = "0x4B923C0")]
	internal void Clear(bool onException)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4B92A70", Offset = "0x4B92A70", VA = "0x4B92A70")]
	internal void PurgeUnusedGraphicsResources()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4B92B20", Offset = "0x4B92B20", VA = "0x4B92B20")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4B92C70", Offset = "0x4B92C70", VA = "0x4B92C70")]
	internal void FlushLogs()
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x4B92570", Offset = "0x4B92570", VA = "0x4B92570")]
	private void LogResources()
	{
	}
}
