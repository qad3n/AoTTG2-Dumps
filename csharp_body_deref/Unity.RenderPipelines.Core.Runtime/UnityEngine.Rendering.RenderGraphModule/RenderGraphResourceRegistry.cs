// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RendererUtils;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000293")]
internal class RenderGraphResourceRegistry
{
	[Token(Token = "0x2000294")]
	private delegate bool ResourceCreateCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res);

	[Token(Token = "0x2000295")]
	private delegate void ResourceCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res);

	[Token(Token = "0x2000296")]
	private class RenderGraphResourcesData
	{
		[Token(Token = "0x4000B94")]
		[FieldOffset(Offset = "0x10")]
		public DynamicArray<IRenderGraphResource> resourceArray;

		[Token(Token = "0x4000B95")]
		[FieldOffset(Offset = "0x18")]
		public int sharedResourcesCount;

		[Token(Token = "0x4000B96")]
		[FieldOffset(Offset = "0x20")]
		public IRenderGraphResourcePool pool;

		[Token(Token = "0x4000B97")]
		[FieldOffset(Offset = "0x28")]
		public ResourceCreateCallback createResourceCallback;

		[Token(Token = "0x4000B98")]
		[FieldOffset(Offset = "0x30")]
		public ResourceCallback releaseResourceCallback;

		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x2BA25E0", Offset = "0x2BA0BE0", VA = "0x182BA25E0")]
		public RenderGraphResourcesData()
		{
		}

		[Token(Token = "0x60012B9")]
		[Address(RVA = "0x2BA2530", Offset = "0x2BA0B30", VA = "0x182BA2530")]
		public void Clear(bool onException, int frameIndex)
		{
		}

		[Token(Token = "0x60012BA")]
		[Address(RVA = "0x2BA2490", Offset = "0x2BA0A90", VA = "0x182BA2490")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x60012BB")]
		[Address(RVA = "0x2BA25C0", Offset = "0x2BA0BC0", VA = "0x182BA25C0")]
		public void PurgeUnusedGraphicsResources(int frameIndex)
		{
		}

		[Token(Token = "0x60012BC")]
		public int AddNewRenderGraphResource<ResType>(out ResType outRes, bool pooledResource = true) where ResType : IRenderGraphResource, new()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000B84")]
	private const int kSharedResourceLifetime = 30;

	[Token(Token = "0x4000B85")]
	[FieldOffset(Offset = "0x0")]
	private static RenderGraphResourceRegistry m_CurrentRegistry;

	[Token(Token = "0x4000B86")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraphResourcesData[] m_RenderGraphResources;

	[Token(Token = "0x4000B87")]
	[FieldOffset(Offset = "0x18")]
	private DynamicArray<RendererListResource> m_RendererListResources;

	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x20")]
	private DynamicArray<RendererListLegacyResource> m_RendererListLegacyResources;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x28")]
	private RenderGraphDebugParams m_RenderGraphDebug;

	[Token(Token = "0x4000B8A")]
	[FieldOffset(Offset = "0x30")]
	private RenderGraphLogger m_ResourceLogger;

	[Token(Token = "0x4000B8B")]
	[FieldOffset(Offset = "0x38")]
	private RenderGraphLogger m_FrameInformationLogger;

	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x40")]
	private int m_CurrentFrameIndex;

	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x44")]
	private int m_ExecutionCount;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x48")]
	private RTHandle m_CurrentBackbuffer;

	[Token(Token = "0x4000B8F")]
	private const int kInitialRendererListCount = 256;

	[Token(Token = "0x4000B90")]
	[FieldOffset(Offset = "0x50")]
	private List<RendererList> m_ActiveRendererLists;

	[Token(Token = "0x4000B91")]
	[FieldOffset(Offset = "0x8")]
	private static RenderTargetIdentifier emptyId;

	[Token(Token = "0x4000B92")]
	[FieldOffset(Offset = "0x30")]
	private static RenderTargetIdentifier builtinCameraRenderTarget;

	[Token(Token = "0x4000B93")]
	[FieldOffset(Offset = "0x58")]
	internal bool forceManualClearOfResource;

	[Token(Token = "0x17000257")]
	internal static RenderGraphResourceRegistry current
	{
		[Token(Token = "0x6001255")]
		[Address(RVA = "0x2BA23D0", Offset = "0x2BA09D0", VA = "0x182BA23D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001256")]
		[Address(RVA = "0x2BA2420", Offset = "0x2BA0A20", VA = "0x182BA2420")]
		set
		{
		}
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x2B9BD40", Offset = "0x2B9A340", VA = "0x182B9BD40")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckTextureResource(TextureResource texResource)
	{
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x2B9F370", Offset = "0x2B9D970", VA = "0x182B9F370")]
	internal RTHandle GetTexture(in TextureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x2B9F430", Offset = "0x2B9DA30", VA = "0x182B9F430")]
	internal RTHandle GetTexture(int index)
	{
		return null;
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x2BA1100", Offset = "0x2B9F700", VA = "0x182BA1100")]
	internal bool TextureNeedsFallback(in TextureHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x2B9ED10", Offset = "0x2B9D310", VA = "0x182B9ED10")]
	internal RendererList GetRendererList(in RendererListHandle handle)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x2B9BA80", Offset = "0x2B9A080", VA = "0x182B9BA80")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckBufferResource(BufferResource bufferResource)
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x2B9DFD0", Offset = "0x2B9C5D0", VA = "0x182B9DFD0")]
	internal GraphicsBuffer GetBuffer(in BufferHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x2B9DF10", Offset = "0x2B9C510", VA = "0x182B9DF10")]
	internal GraphicsBuffer GetBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x2B9E3F0", Offset = "0x2B9C9F0", VA = "0x182B9E3F0")]
	internal RayTracingAccelerationStructure GetRayTracingAccelerationStructure(in RayTracingAccelerationStructureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x2B9EFA0", Offset = "0x2B9D5A0", VA = "0x182B9EFA0")]
	internal int GetSharedResourceCount(RenderGraphResourceType type)
	{
		return default(int);
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x2BA1C10", Offset = "0x2BA0210", VA = "0x182BA1C10")]
	private RenderGraphResourceRegistry()
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x2BA1D80", Offset = "0x2BA0380", VA = "0x182BA1D80")]
	internal RenderGraphResourceRegistry(RenderGraphDebugParams renderGraphDebug, RenderGraphLogger frameInformationLogger)
	{
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x2B9B900", Offset = "0x2B99F00", VA = "0x182B9B900")]
	internal void BeginRenderGraph(int executionCount)
	{
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x2B9B730", Offset = "0x2B99D30", VA = "0x182B9B730")]
	internal void BeginExecute(int currentFrameIndex)
	{
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x2B9DAC0", Offset = "0x2B9C0C0", VA = "0x182B9DAC0")]
	internal void EndExecute()
	{
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x2B9DA30", Offset = "0x2B9C030", VA = "0x182B9DA30")]
	internal void EnableIntraFrameMemoryAliasing(bool enabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001267")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckHandleValidity(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x2B9BB40", Offset = "0x2B9A140", VA = "0x182B9BB40")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckHandleValidity(RenderGraphResourceType type, int index)
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x2BA0390", Offset = "0x2B9E990", VA = "0x182BA0390")]
	internal ResourceHandle IncrementWriteCount(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x2BA02A0", Offset = "0x2B9E8A0", VA = "0x182BA02A0")]
	internal void IncrementReadCount(in ResourceHandle res)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x2B9E150", Offset = "0x2B9C750", VA = "0x182B9E150")]
	internal ResourceHandle GetLatestVersionHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x2B9F4F0", Offset = "0x2B9DAF0", VA = "0x182B9F4F0")]
	internal ResourceHandle GetZeroVersionHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x2B9EED0", Offset = "0x2B9D4D0", VA = "0x182B9EED0")]
	internal IRenderGraphResource GetResourceLowLevel(in ResourceHandle res)
	{
		return null;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x2B9E600", Offset = "0x2B9CC00", VA = "0x182B9E600")]
	internal string GetRenderGraphResourceName(in ResourceHandle res)
	{
		return null;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x2B9E560", Offset = "0x2B9CB60", VA = "0x182B9E560")]
	internal string GetRenderGraphResourceName(RenderGraphResourceType type, int index)
	{
		return null;
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x2BA0660", Offset = "0x2B9EC60", VA = "0x182BA0660")]
	internal bool IsRenderGraphResourceImported(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x2BA07C0", Offset = "0x2B9EDC0", VA = "0x182BA07C0")]
	internal bool IsRenderGraphResourceShared(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x2BA0740", Offset = "0x2B9ED40", VA = "0x182BA0740")]
	internal bool IsRenderGraphResourceShared(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x2BA04E0", Offset = "0x2B9EAE0", VA = "0x182BA04E0")]
	internal bool IsGraphicsResourceCreated(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x2BA0800", Offset = "0x2B9EE00", VA = "0x182BA0800")]
	internal bool IsRendererListCreated(in RendererListHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x2BA05D0", Offset = "0x2B9EBD0", VA = "0x182BA05D0")]
	internal bool IsRenderGraphResourceImported(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x2B9E6F0", Offset = "0x2B9CCF0", VA = "0x182B9E6F0")]
	internal int GetRenderGraphResourceTransientIndex(in ResourceHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x2B9FE10", Offset = "0x2B9E410", VA = "0x182B9FE10")]
	internal TextureHandle ImportTexture(in RTHandle rt, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x2B9FE50", Offset = "0x2B9E450", VA = "0x182B9FE50")]
	internal TextureHandle ImportTexture(in RTHandle rt, in ImportResourceParams importParams, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x2B9FA80", Offset = "0x2B9E080", VA = "0x182B9FA80")]
	internal TextureHandle ImportTexture(in RTHandle rt, RenderTargetInfo info, in ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x2B9CEF0", Offset = "0x2B9B4F0", VA = "0x182B9CEF0")]
	internal TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x2BA0BC0", Offset = "0x2B9F1C0", VA = "0x182BA0BC0")]
	internal void RefreshSharedTextureDesc(in TextureHandle texture, in TextureDesc desc)
	{
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x2BA0E30", Offset = "0x2B9F430", VA = "0x182BA0E30")]
	internal void ReleaseSharedTexture(in TextureHandle texture)
	{
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x2B9F560", Offset = "0x2B9DB60", VA = "0x182B9F560")]
	internal TextureHandle ImportBackbuffer(RenderTargetIdentifier rt, in RenderTargetInfo info, in ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x2BA1550", Offset = "0x2B9FB50", VA = "0x182BA1550")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateRenderTarget(in ResourceHandle res)
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x2B9E7D0", Offset = "0x2B9CDD0", VA = "0x182B9E7D0")]
	internal void GetRenderTargetInfo(in ResourceHandle res, out RenderTargetInfo outInfo)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x2B9E140", Offset = "0x2B9C740", VA = "0x182B9E140")]
	internal GraphicsFormat GetFormat(GraphicsFormat color, GraphicsFormat depthStencil)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x2BA1460", Offset = "0x2B9FA60", VA = "0x182BA1460")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void ValidateFormat(GraphicsFormat color, GraphicsFormat depthStencil)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x2B9D6C0", Offset = "0x2B9BCC0", VA = "0x182B9D6C0")]
	internal TextureHandle CreateTexture(in TextureDesc desc, int transientPassIndex = -1)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x2BA1070", Offset = "0x2B9F670", VA = "0x182BA1070")]
	internal void SetTextureAsMemoryLess(in ResourceHandle handle)
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x2B9EE60", Offset = "0x2B9D460", VA = "0x182B9EE60")]
	internal int GetResourceCount(RenderGraphResourceType type)
	{
		return default(int);
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x2B9EFE0", Offset = "0x2B9D5E0", VA = "0x182B9EFE0")]
	internal int GetTextureResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x2B9F270", Offset = "0x2B9D870", VA = "0x182B9F270")]
	internal TextureResource GetTextureResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x2B9F1A0", Offset = "0x2B9D7A0", VA = "0x182B9F1A0")]
	internal TextureResource GetTextureResource(int index)
	{
		return null;
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x2B9F040", Offset = "0x2B9D640", VA = "0x182B9F040")]
	internal unsafe ref TextureDesc GetTextureResourceDesc(in ResourceHandle handle, bool noThrowOnInvalidDesc = false)
	{
		return ref *(TextureDesc*)null;
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x2B9C970", Offset = "0x2B9AF70", VA = "0x182B9C970")]
	internal RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x2B9C830", Offset = "0x2B9AE30", VA = "0x182B9C830")]
	internal RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x2B9CE10", Offset = "0x2B9B410", VA = "0x182B9CE10")]
	internal RendererListHandle CreateShadowRendererList(ScriptableRenderContext context, ref ShadowDrawingSettings shadowDrawinSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x2B9C4F0", Offset = "0x2B9AAF0", VA = "0x182B9C4F0")]
	internal RendererListHandle CreateGizmoRendererList(ScriptableRenderContext context, in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x2B9D870", Offset = "0x2B9BE70", VA = "0x182B9D870")]
	internal RendererListHandle CreateUIOverlayRendererList(ScriptableRenderContext context, in Camera camera, in UISubset uiSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x2B9D950", Offset = "0x2B9BF50", VA = "0x182B9D950")]
	internal RendererListHandle CreateWireOverlayRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x2B9D1D0", Offset = "0x2B9B7D0", VA = "0x182B9D1D0")]
	internal RendererListHandle CreateSkyboxRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x2B9D450", Offset = "0x2B9BA50", VA = "0x182B9D450")]
	internal RendererListHandle CreateSkyboxRendererList(ScriptableRenderContext context, in Camera camera, Matrix4x4 projectionMatrix, Matrix4x4 viewMatrix)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x2B9D2B0", Offset = "0x2B9B8B0", VA = "0x182B9D2B0")]
	internal RendererListHandle CreateSkyboxRendererList(ScriptableRenderContext context, in Camera camera, Matrix4x4 projectionMatrixL, Matrix4x4 viewMatrixL, Matrix4x4 projectionMatrixR, Matrix4x4 viewMatrixR)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x2B9F860", Offset = "0x2B9DE60", VA = "0x182B9F860")]
	internal BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x2B9C3C0", Offset = "0x2B9A9C0", VA = "0x182B9C3C0")]
	internal BufferHandle CreateBuffer(in BufferDesc desc, int transientPassIndex = -1)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x2B9DBE0", Offset = "0x2B9C1E0", VA = "0x182B9DBE0")]
	internal unsafe ref BufferDesc GetBufferResourceDesc(in ResourceHandle handle, bool noThrowOnInvalidDesc = false)
	{
		return ref *(BufferDesc*)null;
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x2B9DB80", Offset = "0x2B9C180", VA = "0x182B9DB80")]
	internal int GetBufferResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x2B9DE10", Offset = "0x2B9C410", VA = "0x182B9DE10")]
	private BufferResource GetBufferResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x2B9DD40", Offset = "0x2B9C340", VA = "0x182B9DD40")]
	private BufferResource GetBufferResource(int index)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x2B9E2F0", Offset = "0x2B9C8F0", VA = "0x182B9E2F0")]
	private RayTracingAccelerationStructureResource GetRayTracingAccelerationStructureResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x2B9E290", Offset = "0x2B9C890", VA = "0x182B9E290")]
	internal int GetRayTracingAccelerationStructureResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x2B9F9A0", Offset = "0x2B9DFA0", VA = "0x182B9F9A0")]
	internal RayTracingAccelerationStructureHandle ImportRayTracingAccelerationStructure(in RayTracingAccelerationStructure accelStruct, string name)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x2BA11D0", Offset = "0x2B9F7D0", VA = "0x182BA11D0")]
	internal void UpdateSharedResourceLastFrameIndex(int type, int index)
	{
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x2BA1260", Offset = "0x2B9F860", VA = "0x182BA1260")]
	internal void UpdateSharedResourceLastFrameIndex(in ResourceHandle handle)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x2BA0A10", Offset = "0x2B9F010", VA = "0x182BA0A10")]
	private void ManageSharedRenderGraphResources()
	{
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x2B9C680", Offset = "0x2B9AC80", VA = "0x182B9C680")]
	internal bool CreatePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x2B9C5D0", Offset = "0x2B9ABD0", VA = "0x182B9C5D0")]
	internal bool CreatePooledResource(InternalRenderGraphContext rgContext, in ResourceHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x2B9D5C0", Offset = "0x2B9BBC0", VA = "0x182B9D5C0")]
	private bool CreateTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x2B9BF20", Offset = "0x2B9A520", VA = "0x182B9BF20")]
	internal bool ClearResource(InternalRenderGraphContext rgContext, int type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x2B9BFF0", Offset = "0x2B9A5F0", VA = "0x182B9BFF0")]
	private void ClearTexture(InternalRenderGraphContext rgContext, TextureResource resource)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x2BA0D20", Offset = "0x2B9F320", VA = "0x182BA0D20")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x2BA0C70", Offset = "0x2B9F270", VA = "0x182BA0C70")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, in ResourceHandle handle)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x2BA0F00", Offset = "0x2B9F500", VA = "0x182BA0F00")]
	private void ReleaseTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x2BA1890", Offset = "0x2B9FE90", VA = "0x182BA1890")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateTextureDesc(in TextureDesc desc)
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x2BA1610", Offset = "0x2B9FC10", VA = "0x182BA1610")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateRendererListDesc(in RendererListDesc desc)
	{
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x2BA1330", Offset = "0x2B9F930", VA = "0x182BA1330")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateBufferDesc(in BufferDesc desc)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x2B9CB70", Offset = "0x2B9B170", VA = "0x182B9CB70")]
	internal void CreateRendererLists(List<RendererListHandle> rendererLists, ScriptableRenderContext context, bool manualDispatch = false)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x2B9C160", Offset = "0x2B9A760", VA = "0x182B9C160")]
	internal void Clear(bool onException)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x2BA0B50", Offset = "0x2B9F150", VA = "0x182BA0B50")]
	internal void PurgeUnusedGraphicsResources()
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x2B9BE00", Offset = "0x2B9A400", VA = "0x182B9BE00")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x2BA08F0", Offset = "0x2B9EEF0", VA = "0x182BA08F0")]
	private void LogResources()
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x2B9DB60", Offset = "0x2B9C160", VA = "0x182B9DB60")]
	internal void FlushLogs()
	{
	}
}
