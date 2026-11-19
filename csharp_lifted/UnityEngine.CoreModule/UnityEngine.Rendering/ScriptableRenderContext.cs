// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ScriptableRenderContext
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000397")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasManager.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderContext.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableDrawRenderersUtility.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/ScriptableRenderLoop/ScriptableRenderContext.h")]
public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext>
{
	[Token(Token = "0x2000398")]
	private struct CullShadowCastersContext
	{
		[Token(Token = "0x4000AF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IntPtr cullResults;

		[Token(Token = "0x4000AF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public unsafe ShadowSplitData* splitBuffer;

		[Token(Token = "0x4000AF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int splitBufferLength;

		[Token(Token = "0x4000AF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public unsafe LightShadowCasterCullingInfo* perLightInfos;

		[Token(Token = "0x4000AF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int perLightInfoCount;
	}

	[Token(Token = "0x4000AF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId kRenderTypeTag;

	[Token(Token = "0x4000AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr m_Ptr;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600166E")]
	[Address(RVA = "0x695F380", Offset = "0x695E380", VA = "0x695F380")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks")]
	private static extern bool HasInvokeOnRenderObjectCallbacks_Internal();

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x695F3B0", Offset = "0x695E3B0", VA = "0x695F3B0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::Internal_Cull")]
	private static void Internal_Cull(ref ScriptableCullingParameters parameters, ScriptableRenderContext renderLoop, IntPtr results)
	{
	}

	[Token(Token = "0x6001670")]
	[Address(RVA = "0x695F490", Offset = "0x695E490", VA = "0x695F490")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::Internal_CullShadowCasters")]
	private static void Internal_CullShadowCasters(ScriptableRenderContext renderLoop, IntPtr context)
	{
	}

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x695F570", Offset = "0x695E570", VA = "0x695F570")]
	[UnityEngine.Bindings.FreeFunction("InitializeSortSettings")]
	internal static void InitializeSortSettings(Camera camera, out SortingSettings sortingSettings)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001672")]
	[Address(RVA = "0x695F690", Offset = "0x695E690", VA = "0x695F690")]
	private extern void Submit_Internal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001673")]
	[Address(RVA = "0x695F6C0", Offset = "0x695E6C0", VA = "0x695F6C0")]
	private extern void GetCameras_Internal(Type listType, object resultList);

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x695F700", Offset = "0x695E700", VA = "0x695F700")]
	[UnityEngine.Bindings.FreeFunction("PlayerEmitCanvasGeometryForCamera")]
	public static void EmitGeometryForCamera(Camera camera)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x695F800", Offset = "0x695E800", VA = "0x695F800")]
	[UnityEngine.Bindings.NativeThrows]
	private void ExecuteCommandBuffer_Internal(CommandBuffer commandBuffer)
	{
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x695F8E0", Offset = "0x695E8E0", VA = "0x695F8E0")]
	[UnityEngine.Bindings.NativeThrows]
	private void ExecuteCommandBufferAsync_Internal(CommandBuffer commandBuffer, ComputeQueueType queueType)
	{
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x695F9C0", Offset = "0x695E9C0", VA = "0x695F9C0")]
	internal IntPtr Internal_GetPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x695F9D0", Offset = "0x695E9D0", VA = "0x695F9D0")]
	private RendererList CreateRendererList_Internal(IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x695FB20", Offset = "0x695EB20", VA = "0x695FB20")]
	private RendererList CreateShadowRendererList_Internal(IntPtr shadowDrawinSettings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x695FC10", Offset = "0x695EC10", VA = "0x695FC10")]
	private RendererList CreateSkyboxRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera, int mode, Matrix4x4 proj, Matrix4x4 view, Matrix4x4 projR, Matrix4x4 viewR)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x695FDE0", Offset = "0x695EDE0", VA = "0x695FDE0")]
	private RendererList CreateGizmoRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x695FF60", Offset = "0x695EF60", VA = "0x695FF60")]
	private RendererList CreateUIOverlayRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera, UISubset uiSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x69600E0", Offset = "0x695F0E0", VA = "0x69600E0")]
	private RendererList CreateWireOverlayRendererList_Internal([UnityEngine.Bindings.NotNull] Camera camera)
	{
		return default(RendererList);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600167E")]
	[Address(RVA = "0x6960240", Offset = "0x695F240", VA = "0x6960240")]
	private extern void PrepareRendererListsAsync_Internal(object rendererLists);

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x6960280", Offset = "0x695F280", VA = "0x6960280")]
	private RendererListStatus QueryRendererListStatus_Internal(RendererList handle)
	{
		return default(RendererListStatus);
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x695DA30", Offset = "0x695CA30", VA = "0x695DA30")]
	internal ScriptableRenderContext(IntPtr ptr)
	{
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x6960360", Offset = "0x695F360", VA = "0x6960360")]
	public void Submit()
	{
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x69603F0", Offset = "0x695F3F0", VA = "0x69603F0")]
	public bool HasInvokeOnRenderObjectCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x695DA40", Offset = "0x695CA40", VA = "0x695DA40")]
	internal void GetCameras(List<Camera> results)
	{
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x6960470", Offset = "0x695F470", VA = "0x6960470")]
	public void ExecuteCommandBuffer(CommandBuffer commandBuffer)
	{
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x69605C0", Offset = "0x695F5C0", VA = "0x69605C0")]
	public void ExecuteCommandBufferAsync(CommandBuffer commandBuffer, ComputeQueueType queueType)
	{
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x6960720", Offset = "0x695F720", VA = "0x6960720")]
	public CullingResults Cull(ref ScriptableCullingParameters parameters)
	{
		return default(CullingResults);
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x6960820", Offset = "0x695F820", VA = "0x6960820")]
	public void CullShadowCasters(CullingResults cullingResults, ShadowCastersCullingInfos infos)
	{
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x6960980", Offset = "0x695F980", VA = "0x6960980", Slot = "4")]
	public bool Equals(ScriptableRenderContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x69609C0", Offset = "0x695F9C0", VA = "0x69609C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x6960A80", Offset = "0x695FA80", VA = "0x6960A80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x6960A90", Offset = "0x695FA90", VA = "0x6960A90")]
	public RendererList CreateRendererList(ref RendererListParams param)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x6960DC0", Offset = "0x695FDC0", VA = "0x6960DC0")]
	public RendererList CreateShadowRendererList(ref ShadowDrawingSettings settings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x6960EE0", Offset = "0x695FEE0", VA = "0x6960EE0")]
	public RendererList CreateSkyboxRendererList(Camera camera, Matrix4x4 projectionMatrixL, Matrix4x4 viewMatrixL, Matrix4x4 projectionMatrixR, Matrix4x4 viewMatrixR)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x6961180", Offset = "0x6960180", VA = "0x6961180")]
	public RendererList CreateSkyboxRendererList(Camera camera, Matrix4x4 projectionMatrix, Matrix4x4 viewMatrix)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x69614A0", Offset = "0x69604A0", VA = "0x69614A0")]
	public RendererList CreateSkyboxRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x6961820", Offset = "0x6960820", VA = "0x6961820")]
	public RendererList CreateGizmoRendererList(Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x69618B0", Offset = "0x69608B0", VA = "0x69618B0")]
	public RendererList CreateUIOverlayRendererList(Camera camera, UISubset uiSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x6961940", Offset = "0x6960940", VA = "0x6961940")]
	public RendererList CreateWireOverlayRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x69619D0", Offset = "0x69609D0", VA = "0x69619D0")]
	public void PrepareRendererListsAsync(List<RendererList> rendererLists)
	{
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x6961A60", Offset = "0x6960A60", VA = "0x6961A60")]
	public RendererListStatus QueryRendererListStatus(RendererList rendererList)
	{
		return default(RendererListStatus);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001696")]
	[Address(RVA = "0x695F450", Offset = "0x695E450", VA = "0x695F450")]
	private static extern void Internal_Cull_Injected(ref ScriptableCullingParameters parameters, [In] ref ScriptableRenderContext renderLoop, IntPtr results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001697")]
	[Address(RVA = "0x695F530", Offset = "0x695E530", VA = "0x695F530")]
	private static extern void Internal_CullShadowCasters_Injected([In] ref ScriptableRenderContext renderLoop, IntPtr context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001698")]
	[Address(RVA = "0x695F650", Offset = "0x695E650", VA = "0x695F650")]
	private static extern void InitializeSortSettings_Injected(IntPtr camera, out SortingSettings sortingSettings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001699")]
	[Address(RVA = "0x695F7D0", Offset = "0x695E7D0", VA = "0x695F7D0")]
	private static extern void EmitGeometryForCamera_Injected(IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600169A")]
	[Address(RVA = "0x695F8A0", Offset = "0x695E8A0", VA = "0x695F8A0")]
	private static extern void ExecuteCommandBuffer_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr commandBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600169B")]
	[Address(RVA = "0x695F980", Offset = "0x695E980", VA = "0x695F980")]
	private static extern void ExecuteCommandBufferAsync_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr commandBuffer, ComputeQueueType queueType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600169C")]
	[Address(RVA = "0x695FAC0", Offset = "0x695EAC0", VA = "0x695FAC0")]
	private static extern void CreateRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, [In] ref ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600169D")]
	[Address(RVA = "0x695FBD0", Offset = "0x695EBD0", VA = "0x695FBD0")]
	private static extern void CreateShadowRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr shadowDrawinSettings, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600169E")]
	[Address(RVA = "0x695FD80", Offset = "0x695ED80", VA = "0x695FD80")]
	private static extern void CreateSkyboxRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, int mode, [In] ref Matrix4x4 proj, [In] ref Matrix4x4 view, [In] ref Matrix4x4 projR, [In] ref Matrix4x4 viewR, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600169F")]
	[Address(RVA = "0x695FF10", Offset = "0x695EF10", VA = "0x695FF10")]
	private static extern void CreateGizmoRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, GizmoSubset gizmoSubset, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x6960090", Offset = "0x695F090", VA = "0x6960090")]
	private static extern void CreateUIOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, UISubset uiSubset, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x6960200", Offset = "0x695F200", VA = "0x6960200")]
	private static extern void CreateWireOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x6960320", Offset = "0x695F320", VA = "0x6960320")]
	private static extern RendererListStatus QueryRendererListStatus_Internal_Injected(ref ScriptableRenderContext _unity_self, [In] ref RendererList handle);
}
