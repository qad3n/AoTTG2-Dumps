// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x657F4C0", Offset = "0x657E4C0", VA = "0x657F4C0")]
		public RenderGraphResourcesData()
		{
		}

		[Token(Token = "0x60012B9")]
		[Address(RVA = "0x6584990", Offset = "0x6583990", VA = "0x6584990")]
		public void Clear(bool onException, int frameIndex)
		{
		}

		[Token(Token = "0x60012BA")]
		[Address(RVA = "0x6584D60", Offset = "0x6583D60", VA = "0x6584D60")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x60012BB")]
		[Address(RVA = "0x6584AD0", Offset = "0x6583AD0", VA = "0x6584AD0")]
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
		[Address(RVA = "0x657E3D0", Offset = "0x657D3D0", VA = "0x657E3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001256")]
		[Address(RVA = "0x657E440", Offset = "0x657D440", VA = "0x657E440")]
		set
		{
		}
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x657E4B0", Offset = "0x657D4B0", VA = "0x657E4B0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckTextureResource(TextureResource texResource)
	{
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x657E560", Offset = "0x657D560", VA = "0x657E560")]
	internal RTHandle GetTexture(in TextureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x657E6C0", Offset = "0x657D6C0", VA = "0x657E6C0")]
	internal RTHandle GetTexture(int index)
	{
		return null;
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x657E7A0", Offset = "0x657D7A0", VA = "0x657E7A0")]
	internal bool TextureNeedsFallback(in TextureHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x657E920", Offset = "0x657D920", VA = "0x657E920")]
	internal RendererList GetRendererList(in RendererListHandle handle)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x657EA50", Offset = "0x657DA50", VA = "0x657EA50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckBufferResource(BufferResource bufferResource)
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x657DD60", Offset = "0x657CD60", VA = "0x657DD60")]
	internal GraphicsBuffer GetBuffer(in BufferHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x657EBF0", Offset = "0x657DBF0", VA = "0x657EBF0")]
	internal GraphicsBuffer GetBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x657D8F0", Offset = "0x657C8F0", VA = "0x657D8F0")]
	internal RayTracingAccelerationStructure GetRayTracingAccelerationStructure(in RayTracingAccelerationStructureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x657EDC0", Offset = "0x657DDC0", VA = "0x657EDC0")]
	internal int GetSharedResourceCount(RenderGraphResourceType type)
	{
		return default(int);
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x657EDF0", Offset = "0x657DDF0", VA = "0x657EDF0")]
	private RenderGraphResourceRegistry()
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x657EF70", Offset = "0x657DF70", VA = "0x657EF70")]
	internal RenderGraphResourceRegistry(RenderGraphDebugParams renderGraphDebug, RenderGraphLogger frameInformationLogger)
	{
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x657F7D0", Offset = "0x657E7D0", VA = "0x657F7D0")]
	internal void BeginRenderGraph(int executionCount)
	{
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x657F930", Offset = "0x657E930", VA = "0x657F930")]
	internal void BeginExecute(int currentFrameIndex)
	{
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x657FD60", Offset = "0x657ED60", VA = "0x657FD60")]
	internal void EndExecute()
	{
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x657FE10", Offset = "0x657EE10", VA = "0x657FE10")]
	internal void EnableIntraFrameMemoryAliasing(bool enabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001267")]
	[Address(RVA = "0x657FE80", Offset = "0x657EE80", VA = "0x657FE80")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckHandleValidity(in ResourceHandle res)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x657FE90", Offset = "0x657EE90", VA = "0x657FE90")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckHandleValidity(RenderGraphResourceType type, int index)
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x6580070", Offset = "0x657F070", VA = "0x6580070")]
	internal ResourceHandle IncrementWriteCount(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x6580220", Offset = "0x657F220", VA = "0x6580220")]
	internal void IncrementReadCount(in ResourceHandle res)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x6580320", Offset = "0x657F320", VA = "0x6580320")]
	internal ResourceHandle GetLatestVersionHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x6580460", Offset = "0x657F460", VA = "0x6580460")]
	internal ResourceHandle GetZeroVersionHandle(in ResourceHandle res)
	{
		return default(ResourceHandle);
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x65804B0", Offset = "0x657F4B0", VA = "0x65804B0")]
	internal IRenderGraphResource GetResourceLowLevel(in ResourceHandle res)
	{
		return null;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x6580590", Offset = "0x657F590", VA = "0x6580590")]
	internal string GetRenderGraphResourceName(in ResourceHandle res)
	{
		return null;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x6580690", Offset = "0x657F690", VA = "0x6580690")]
	internal string GetRenderGraphResourceName(RenderGraphResourceType type, int index)
	{
		return null;
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x657C280", Offset = "0x657B280", VA = "0x657C280")]
	internal bool IsRenderGraphResourceImported(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x6580720", Offset = "0x657F720", VA = "0x6580720")]
	internal bool IsRenderGraphResourceShared(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x6580750", Offset = "0x657F750", VA = "0x6580750")]
	internal bool IsRenderGraphResourceShared(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x65807F0", Offset = "0x657F7F0", VA = "0x65807F0")]
	internal bool IsGraphicsResourceCreated(in ResourceHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x65808F0", Offset = "0x657F8F0", VA = "0x65808F0")]
	internal bool IsRendererListCreated(in RendererListHandle res)
	{
		return default(bool);
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x65809F0", Offset = "0x657F9F0", VA = "0x65809F0")]
	internal bool IsRenderGraphResourceImported(RenderGraphResourceType type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x6580A70", Offset = "0x657FA70", VA = "0x6580A70")]
	internal int GetRenderGraphResourceTransientIndex(in ResourceHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x6580B60", Offset = "0x657FB60", VA = "0x6580B60")]
	internal TextureHandle ImportTexture(in RTHandle rt, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x6580B80", Offset = "0x657FB80", VA = "0x6580B80")]
	internal TextureHandle ImportTexture(in RTHandle rt, in ImportResourceParams importParams, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x6581080", Offset = "0x6580080", VA = "0x6581080")]
	internal TextureHandle ImportTexture(in RTHandle rt, RenderTargetInfo info, in ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x6581330", Offset = "0x6580330", VA = "0x6581330")]
	internal TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x65815B0", Offset = "0x65805B0", VA = "0x65815B0")]
	internal void RefreshSharedTextureDesc(in TextureHandle texture, in TextureDesc desc)
	{
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x6581640", Offset = "0x6580640", VA = "0x6581640")]
	internal void ReleaseSharedTexture(in TextureHandle texture)
	{
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x6581700", Offset = "0x6580700", VA = "0x6581700")]
	internal TextureHandle ImportBackbuffer(RenderTargetIdentifier rt, in RenderTargetInfo info, in ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x6581970", Offset = "0x6580970", VA = "0x6581970")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateRenderTarget(in ResourceHandle res)
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x6581A50", Offset = "0x6580A50", VA = "0x6581A50")]
	internal void GetRenderTargetInfo(in ResourceHandle res, out RenderTargetInfo outInfo)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x6581F30", Offset = "0x6580F30", VA = "0x6581F30")]
	internal GraphicsFormat GetFormat(GraphicsFormat color, GraphicsFormat depthStencil)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x6582020", Offset = "0x6581020", VA = "0x6582020")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void ValidateFormat(GraphicsFormat color, GraphicsFormat depthStencil)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x6582120", Offset = "0x6581120", VA = "0x6582120")]
	internal TextureHandle CreateTexture(in TextureDesc desc, int transientPassIndex = -1)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x6582280", Offset = "0x6581280", VA = "0x6582280")]
	internal void SetTextureAsMemoryLess(in ResourceHandle handle)
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x6582300", Offset = "0x6581300", VA = "0x6582300")]
	internal int GetResourceCount(RenderGraphResourceType type)
	{
		return default(int);
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x6582360", Offset = "0x6581360", VA = "0x6582360")]
	internal int GetTextureResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x657C370", Offset = "0x657B370", VA = "0x657C370")]
	internal TextureResource GetTextureResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x657E6E0", Offset = "0x657D6E0", VA = "0x657E6E0")]
	internal TextureResource GetTextureResource(int index)
	{
		return null;
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x657C460", Offset = "0x657B460", VA = "0x657C460")]
	internal unsafe ref TextureDesc GetTextureResourceDesc(in ResourceHandle handle, bool noThrowOnInvalidDesc = false)
	{
		return ref *(TextureDesc*)null;
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x65823B0", Offset = "0x65813B0", VA = "0x65823B0")]
	internal RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x65824E0", Offset = "0x65814E0", VA = "0x65824E0")]
	internal RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x6582590", Offset = "0x6581590", VA = "0x6582590")]
	internal RendererListHandle CreateShadowRendererList(ScriptableRenderContext context, ref ShadowDrawingSettings shadowDrawinSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x6582650", Offset = "0x6581650", VA = "0x6582650")]
	internal RendererListHandle CreateGizmoRendererList(ScriptableRenderContext context, in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x6582720", Offset = "0x6581720", VA = "0x6582720")]
	internal RendererListHandle CreateUIOverlayRendererList(ScriptableRenderContext context, in Camera camera, in UISubset uiSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x65827F0", Offset = "0x65817F0", VA = "0x65827F0")]
	internal RendererListHandle CreateWireOverlayRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x65828B0", Offset = "0x65818B0", VA = "0x65828B0")]
	internal RendererListHandle CreateSkyboxRendererList(ScriptableRenderContext context, in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x6582970", Offset = "0x6581970", VA = "0x6582970")]
	internal RendererListHandle CreateSkyboxRendererList(ScriptableRenderContext context, in Camera camera, Matrix4x4 projectionMatrix, Matrix4x4 viewMatrix)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x6582AC0", Offset = "0x6581AC0", VA = "0x6582AC0")]
	internal RendererListHandle CreateSkyboxRendererList(ScriptableRenderContext context, in Camera camera, Matrix4x4 projectionMatrixL, Matrix4x4 viewMatrixL, Matrix4x4 projectionMatrixR, Matrix4x4 viewMatrixR)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x6582C80", Offset = "0x6581C80", VA = "0x6582C80")]
	internal BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x6582D80", Offset = "0x6581D80", VA = "0x6582D80")]
	internal BufferHandle CreateBuffer(in BufferDesc desc, int transientPassIndex = -1)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x6582EA0", Offset = "0x6581EA0", VA = "0x6582EA0")]
	internal unsafe ref BufferDesc GetBufferResourceDesc(in ResourceHandle handle, bool noThrowOnInvalidDesc = false)
	{
		return ref *(BufferDesc*)null;
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x6582FF0", Offset = "0x6581FF0", VA = "0x6582FF0")]
	internal int GetBufferResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x657EB00", Offset = "0x657DB00", VA = "0x657EB00")]
	private BufferResource GetBufferResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x657EC10", Offset = "0x657DC10", VA = "0x657EC10")]
	private BufferResource GetBufferResource(int index)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x657ECD0", Offset = "0x657DCD0", VA = "0x657ECD0")]
	private RayTracingAccelerationStructureResource GetRayTracingAccelerationStructureResource(in ResourceHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x6583050", Offset = "0x6582050", VA = "0x6583050")]
	internal int GetRayTracingAccelerationStructureResourceCount()
	{
		return default(int);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x65830A0", Offset = "0x65820A0", VA = "0x65830A0")]
	internal RayTracingAccelerationStructureHandle ImportRayTracingAccelerationStructure(in RayTracingAccelerationStructure accelStruct, string name)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x65831C0", Offset = "0x65821C0", VA = "0x65831C0")]
	internal void UpdateSharedResourceLastFrameIndex(int type, int index)
	{
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x6583240", Offset = "0x6582240", VA = "0x6583240")]
	internal void UpdateSharedResourceLastFrameIndex(in ResourceHandle handle)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x657F9F0", Offset = "0x657E9F0", VA = "0x657F9F0")]
	private void ManageSharedRenderGraphResources()
	{
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x65832A0", Offset = "0x65822A0", VA = "0x65832A0")]
	internal bool CreatePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x6583430", Offset = "0x6582430", VA = "0x6583430")]
	internal bool CreatePooledResource(InternalRenderGraphContext rgContext, in ResourceHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x65834F0", Offset = "0x65824F0", VA = "0x65834F0")]
	private bool CreateTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x6583710", Offset = "0x6582710", VA = "0x6583710")]
	internal bool ClearResource(InternalRenderGraphContext rgContext, int type, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x65835D0", Offset = "0x65825D0", VA = "0x65835D0")]
	private void ClearTexture(InternalRenderGraphContext rgContext, TextureResource resource)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x65837E0", Offset = "0x65827E0", VA = "0x65837E0")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, int type, int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x6583900", Offset = "0x6582900", VA = "0x6583900")]
	internal void ReleasePooledResource(InternalRenderGraphContext rgContext, in ResourceHandle handle)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x65839C0", Offset = "0x65829C0", VA = "0x65839C0")]
	private void ReleaseTextureCallback(InternalRenderGraphContext rgContext, IRenderGraphResource res)
	{
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x6583B00", Offset = "0x6582B00", VA = "0x6583B00")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateTextureDesc(in TextureDesc desc)
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x6583D00", Offset = "0x6582D00", VA = "0x6583D00")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateRendererListDesc(in RendererListDesc desc)
	{
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x6583ED0", Offset = "0x6582ED0", VA = "0x6583ED0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void ValidateBufferDesc(in BufferDesc desc)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x6584000", Offset = "0x6583000", VA = "0x6584000")]
	internal void CreateRendererLists(List<RendererListHandle> rendererLists, ScriptableRenderContext context, bool manualDispatch = false)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x6584340", Offset = "0x6583340", VA = "0x6584340")]
	internal void Clear(bool onException)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x6584A10", Offset = "0x6583A10", VA = "0x6584A10")]
	internal void PurgeUnusedGraphicsResources()
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x6584AF0", Offset = "0x6583AF0", VA = "0x6584AF0")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x6584570", Offset = "0x6583570", VA = "0x6584570")]
	private void LogResources()
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x6584E10", Offset = "0x6583E10", VA = "0x6584E10")]
	internal void FlushLogs()
	{
	}
}
