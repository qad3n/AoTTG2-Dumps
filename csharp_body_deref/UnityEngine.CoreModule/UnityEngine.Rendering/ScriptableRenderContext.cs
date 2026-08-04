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

[Token(Token = "0x20002FA")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/ScriptableRenderLoop/ScriptableRenderContext.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableDrawRenderersUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderContext.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasManager.h")]
public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext>
{
	[Token(Token = "0x20002FB")]
	private struct CullShadowCastersContext
	{
		[Token(Token = "0x400090D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IntPtr cullResults;

		[Token(Token = "0x400090E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public unsafe ShadowSplitData* splitBuffer;

		[Token(Token = "0x400090F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int splitBufferCount;

		[Token(Token = "0x4000910")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public unsafe LightShadowCasterCullingInfo* perLightInfos;

		[Token(Token = "0x4000911")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int perLightInfoCount;
	}

	[Token(Token = "0x400090B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId kRenderTypeTag;

	[Token(Token = "0x400090C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr m_Ptr;

	[Token(Token = "0x6001093")]
	[Address(RVA = "0x4E31880", Offset = "0x4E31880", VA = "0x4E31880")]
	[UnityEngine.Bindings.FreeFunction("InitializeSortSettings")]
	internal static void InitializeSortSettings(Camera camera, out SortingSettings sortingSettings)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001094")]
	[Address(RVA = "0x4E319B0", Offset = "0x4E319B0", VA = "0x4E319B0")]
	private extern void GetCameras_Internal(Type listType, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001095")]
	[Address(RVA = "0x4E319F0", Offset = "0x4E319F0", VA = "0x4E319F0")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void ExecuteCommandBuffer_Internal(CommandBuffer commandBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001096")]
	[Address(RVA = "0x4E31A30", Offset = "0x4E31A30", VA = "0x4E31A30")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void ExecuteCommandBufferAsync_Internal(CommandBuffer commandBuffer, ComputeQueueType queueType);

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x4E31A70", Offset = "0x4E31A70", VA = "0x4E31A70")]
	private RendererList CreateRendererList_Internal(IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x4E31BC0", Offset = "0x4E31BC0", VA = "0x4E31BC0")]
	private RendererList CreateShadowRendererList_Internal(IntPtr shadowDrawinSettings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x4E31CB0", Offset = "0x4E31CB0", VA = "0x4E31CB0")]
	private RendererList CreateGizmoRendererList_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x4E31E20", Offset = "0x4E31E20", VA = "0x4E31E20")]
	private RendererList CreateUIOverlayRendererList_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x4E31F70", Offset = "0x4E31F70", VA = "0x4E31F70")]
	private RendererList CreateWireOverlayRendererList_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera)
	{
		return default(RendererList);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109C")]
	[Address(RVA = "0x4E320C0", Offset = "0x4E320C0", VA = "0x4E320C0")]
	private extern void PrepareRendererListsAsync_Internal(object rendererLists);

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x4E32100", Offset = "0x4E32100", VA = "0x4E32100")]
	private RendererListStatus QueryRendererListStatus_Internal(RendererList handle)
	{
		return default(RendererListStatus);
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x4E300F0", Offset = "0x4E300F0", VA = "0x4E300F0")]
	internal ScriptableRenderContext(IntPtr ptr)
	{
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x4E30100", Offset = "0x4E30100", VA = "0x4E30100")]
	internal void GetCameras(List<Camera> results)
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x4E321E0", Offset = "0x4E321E0", VA = "0x4E321E0")]
	public void ExecuteCommandBuffer(CommandBuffer commandBuffer)
	{
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x4E322F0", Offset = "0x4E322F0", VA = "0x4E322F0")]
	public void ExecuteCommandBufferAsync(CommandBuffer commandBuffer, ComputeQueueType queueType)
	{
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x4E32400", Offset = "0x4E32400", VA = "0x4E32400", Slot = "4")]
	public bool Equals(ScriptableRenderContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x4E32440", Offset = "0x4E32440", VA = "0x4E32440", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x4E32500", Offset = "0x4E32500", VA = "0x4E32500", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x4E32510", Offset = "0x4E32510", VA = "0x4E32510")]
	public RendererList CreateRendererList(ref RendererListParams param)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x4E32820", Offset = "0x4E32820", VA = "0x4E32820")]
	public RendererList CreateShadowRendererList(ref ShadowDrawingSettings settings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x4E32940", Offset = "0x4E32940", VA = "0x4E32940")]
	public RendererList CreateGizmoRendererList(Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x4E329D0", Offset = "0x4E329D0", VA = "0x4E329D0")]
	public RendererList CreateUIOverlayRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x4E32A60", Offset = "0x4E32A60", VA = "0x4E32A60")]
	public RendererList CreateWireOverlayRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x4E32AF0", Offset = "0x4E32AF0", VA = "0x4E32AF0")]
	public void PrepareRendererListsAsync(List<RendererList> rendererLists)
	{
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x4E32B80", Offset = "0x4E32B80", VA = "0x4E32B80")]
	public RendererListStatus QueryRendererListStatus(RendererList rendererList)
	{
		return default(RendererListStatus);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x4E31970", Offset = "0x4E31970", VA = "0x4E31970")]
	private static extern void InitializeSortSettings_Injected(IntPtr camera, out SortingSettings sortingSettings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x4E31B60", Offset = "0x4E31B60", VA = "0x4E31B60")]
	private static extern void CreateRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, [In] ref ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x4E31C70", Offset = "0x4E31C70", VA = "0x4E31C70")]
	private static extern void CreateShadowRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr shadowDrawinSettings, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x4E31DD0", Offset = "0x4E31DD0", VA = "0x4E31DD0")]
	private static extern void CreateGizmoRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, GizmoSubset gizmoSubset, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x4E31F30", Offset = "0x4E31F30", VA = "0x4E31F30")]
	private static extern void CreateUIOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x4E32080", Offset = "0x4E32080", VA = "0x4E32080")]
	private static extern void CreateWireOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x4E321A0", Offset = "0x4E321A0", VA = "0x4E321A0")]
	private static extern RendererListStatus QueryRendererListStatus_Internal_Injected(ref ScriptableRenderContext _unity_self, [In] ref RendererList handle);
}
