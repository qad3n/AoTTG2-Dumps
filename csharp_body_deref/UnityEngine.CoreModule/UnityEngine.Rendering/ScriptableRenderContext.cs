// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ScriptableRenderContext
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C3")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasManager.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/ScriptableRenderLoop/ScriptableRenderContext.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableDrawRenderersUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderContext.bindings.h")]
public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext>
{
	[Token(Token = "0x20003C4")]
	private struct CullShadowCastersContext
	{
		[Token(Token = "0x4000C14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IntPtr cullResults;

		[Token(Token = "0x4000C15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public unsafe ShadowSplitData* splitBuffer;

		[Token(Token = "0x4000C16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int splitBufferLength;

		[Token(Token = "0x4000C17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public unsafe LightShadowCasterCullingInfo* perLightInfos;

		[Token(Token = "0x4000C18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int perLightInfoCount;
	}

	[Token(Token = "0x4000C12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId kRenderTypeTag;

	[Token(Token = "0x4000C13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr m_Ptr;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x2F705A0", Offset = "0x2F6EBA0", VA = "0x182F705A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks")]
	private static extern bool HasInvokeOnRenderObjectCallbacks_Internal();

	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x2F70840", Offset = "0x2F6EE40", VA = "0x182F70840")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::Internal_Cull")]
	private static void Internal_Cull(ref ScriptableCullingParameters parameters, ScriptableRenderContext renderLoop, IntPtr results)
	{
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x2F70770", Offset = "0x2F6ED70", VA = "0x182F70770")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::Internal_CullShadowCasters")]
	private static void Internal_CullShadowCasters(ScriptableRenderContext renderLoop, IntPtr context)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x2F70680", Offset = "0x2F6EC80", VA = "0x182F70680")]
	[UnityEngine.Bindings.FreeFunction("InitializeSortSettings")]
	internal static void InitializeSortSettings(Camera camera, out SortingSettings sortingSettings)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x2F70B20", Offset = "0x2F6F120", VA = "0x182F70B20")]
	private extern void Submit_Internal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x2F70480", Offset = "0x2F6EA80", VA = "0x182F70480")]
	private extern void GetCameras_Internal(Type listType, object resultList);

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x2F6FE80", Offset = "0x2F6E480", VA = "0x182F6FE80")]
	[UnityEngine.Bindings.FreeFunction("PlayerEmitCanvasGeometryForCamera")]
	public static void EmitGeometryForCamera(Camera camera)
	{
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x2F702B0", Offset = "0x2F6E8B0", VA = "0x182F702B0")]
	[UnityEngine.Bindings.NativeThrows]
	private void ExecuteCommandBuffer_Internal(CommandBuffer commandBuffer)
	{
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x2F70070", Offset = "0x2F6E670", VA = "0x182F70070")]
	[UnityEngine.Bindings.NativeThrows]
	private void ExecuteCommandBufferAsync_Internal(CommandBuffer commandBuffer, ComputeQueueType queueType)
	{
	}

	[Token(Token = "0x60016D2")]
	[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
	internal IntPtr Internal_GetPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60016D3")]
	[Address(RVA = "0x2F6E870", Offset = "0x2F6CE70", VA = "0x182F6E870")]
	private RendererList CreateRendererList_Internal(IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x2F6EBA0", Offset = "0x2F6D1A0", VA = "0x182F6EBA0")]
	private RendererList CreateShadowRendererList_Internal(IntPtr shadowDrawinSettings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x2F6ED90", Offset = "0x2F6D390", VA = "0x182F6ED90")]
	private RendererList CreateSkyboxRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera, int mode, Matrix4x4 proj, Matrix4x4 view, Matrix4x4 projR, Matrix4x4 viewR)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x2F6E5E0", Offset = "0x2F6CBE0", VA = "0x182F6E5E0")]
	private RendererList CreateGizmoRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x2F6F730", Offset = "0x2F6DD30", VA = "0x182F6F730")]
	private RendererList CreateUIOverlayRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera, UISubset uiSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x2F6F9C0", Offset = "0x2F6DFC0", VA = "0x182F6F9C0")]
	private RendererList CreateWireOverlayRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera)
	{
		return default(RendererList);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x2F708C0", Offset = "0x2F6EEC0", VA = "0x182F708C0")]
	private extern void PrepareRendererListsAsync_Internal(object rendererLists);

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x2F709E0", Offset = "0x2F6EFE0", VA = "0x182F709E0")]
	private RendererListStatus QueryRendererListStatus_Internal(RendererList handle)
	{
		return default(RendererListStatus);
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal ScriptableRenderContext(IntPtr ptr)
	{
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x2F70B60", Offset = "0x2F6F160", VA = "0x182F70B60")]
	public void Submit()
	{
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x2F705D0", Offset = "0x2F6EBD0", VA = "0x182F705D0")]
	public bool HasInvokeOnRenderObjectCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x2F704E0", Offset = "0x2F6EAE0", VA = "0x182F704E0")]
	internal void GetCameras(List<Camera> results)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x2F70330", Offset = "0x2F6E930", VA = "0x182F70330")]
	public void ExecuteCommandBuffer(CommandBuffer commandBuffer)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x2F70100", Offset = "0x2F6E700", VA = "0x182F70100")]
	public void ExecuteCommandBufferAsync(CommandBuffer commandBuffer, ComputeQueueType queueType)
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x2F6FD60", Offset = "0x2F6E360", VA = "0x182F6FD60")]
	public CullingResults Cull(ref ScriptableCullingParameters parameters)
	{
		return default(CullingResults);
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x2F6FC00", Offset = "0x2F6E200", VA = "0x182F6FC00")]
	public void CullShadowCasters(CullingResults cullingResults, ShadowCastersCullingInfos infos)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x2F6FFD0", Offset = "0x2F6E5D0", VA = "0x182F6FFD0", Slot = "4")]
	public bool Equals(ScriptableRenderContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x2F6FF10", Offset = "0x2F6E510", VA = "0x182F6FF10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x2F6E950", Offset = "0x2F6CF50", VA = "0x182F6E950")]
	public RendererList CreateRendererList(ref RendererListParams param)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x2F6EC40", Offset = "0x2F6D240", VA = "0x182F6EC40")]
	public RendererList CreateShadowRendererList(ref ShadowDrawingSettings settings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x2F6F160", Offset = "0x2F6D760", VA = "0x182F6F160")]
	public RendererList CreateSkyboxRendererList(Camera camera, Matrix4x4 projectionMatrixL, Matrix4x4 viewMatrixL, Matrix4x4 projectionMatrixR, Matrix4x4 viewMatrixR)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x2F6EEB0", Offset = "0x2F6D4B0", VA = "0x182F6EEB0")]
	public RendererList CreateSkyboxRendererList(Camera camera, Matrix4x4 projectionMatrix, Matrix4x4 viewMatrix)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x2F6F360", Offset = "0x2F6D960", VA = "0x182F6F360")]
	public RendererList CreateSkyboxRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x2F6E6D0", Offset = "0x2F6CCD0", VA = "0x182F6E6D0")]
	public RendererList CreateGizmoRendererList(Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x2F6F820", Offset = "0x2F6DE20", VA = "0x182F6F820")]
	public RendererList CreateUIOverlayRendererList(Camera camera, UISubset uiSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x2F6FAB0", Offset = "0x2F6E0B0", VA = "0x182F6FAB0")]
	public RendererList CreateWireOverlayRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x2F70910", Offset = "0x2F6EF10", VA = "0x182F70910")]
	public void PrepareRendererListsAsync(List<RendererList> rendererLists)
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x2F70A60", Offset = "0x2F6F060", VA = "0x182F70A60")]
	public RendererListStatus QueryRendererListStatus(RendererList rendererList)
	{
		return default(RendererListStatus);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x2F707E0", Offset = "0x2F6EDE0", VA = "0x182F707E0")]
	private static extern void Internal_Cull_Injected(ref ScriptableCullingParameters parameters, [In] ref ScriptableRenderContext renderLoop, IntPtr results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x2F70720", Offset = "0x2F6ED20", VA = "0x182F70720")]
	private static extern void Internal_CullShadowCasters_Injected([In] ref ScriptableRenderContext renderLoop, IntPtr context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x2F70630", Offset = "0x2F6EC30", VA = "0x182F70630")]
	private static extern void InitializeSortSettings_Injected(IntPtr camera, out SortingSettings sortingSettings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x2F6FE40", Offset = "0x2F6E440", VA = "0x182F6FE40")]
	private static extern void EmitGeometryForCamera_Injected(IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x2F70260", Offset = "0x2F6E860", VA = "0x182F70260")]
	private static extern void ExecuteCommandBuffer_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr commandBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x2F70010", Offset = "0x2F6E610", VA = "0x182F70010")]
	private static extern void ExecuteCommandBufferAsync_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr commandBuffer, ComputeQueueType queueType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x2F6E810", Offset = "0x2F6CE10", VA = "0x182F6E810")]
	private static extern void CreateRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, [In] ref ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x2F6EB40", Offset = "0x2F6D140", VA = "0x182F6EB40")]
	private static extern void CreateShadowRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr shadowDrawinSettings, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x2F6ED40", Offset = "0x2F6D340", VA = "0x182F6ED40")]
	private static extern void CreateSkyboxRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, int mode, [In] ref Matrix4x4 proj, [In] ref Matrix4x4 view, [In] ref Matrix4x4 projR, [In] ref Matrix4x4 viewR, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x2F6E590", Offset = "0x2F6CB90", VA = "0x182F6E590")]
	private static extern void CreateGizmoRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, GizmoSubset gizmoSubset, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x2F6F6E0", Offset = "0x2F6DCE0", VA = "0x182F6F6E0")]
	private static extern void CreateUIOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, UISubset uiSubset, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x2F6F960", Offset = "0x2F6DF60", VA = "0x182F6F960")]
	private static extern void CreateWireOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x2F70990", Offset = "0x2F6EF90", VA = "0x182F70990")]
	private static extern RendererListStatus QueryRendererListStatus_Internal_Injected(ref ScriptableRenderContext _unity_self, [In] ref RendererList handle);
}
