using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/ScriptableRenderLoop/ScriptableRenderContext.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableDrawRenderersUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderContext.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasManager.h")]
public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext>
{
	[Token(Token = "0x20002F8")]
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

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x4B09F50", Offset = "0x4B09F50", VA = "0x4B09F50")]
	[UnityEngine.Bindings.FreeFunction("InitializeSortSettings")]
	internal static void InitializeSortSettings(Camera camera, out SortingSettings sortingSettings)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001092")]
	[Address(RVA = "0x4B0A080", Offset = "0x4B0A080", VA = "0x4B0A080")]
	private extern void GetCameras_Internal(Type listType, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001093")]
	[Address(RVA = "0x4B0A0C0", Offset = "0x4B0A0C0", VA = "0x4B0A0C0")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void ExecuteCommandBuffer_Internal(CommandBuffer commandBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001094")]
	[Address(RVA = "0x4B0A100", Offset = "0x4B0A100", VA = "0x4B0A100")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void ExecuteCommandBufferAsync_Internal(CommandBuffer commandBuffer, ComputeQueueType queueType);

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x4B0A140", Offset = "0x4B0A140", VA = "0x4B0A140")]
	private RendererList CreateRendererList_Internal(IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001096")]
	[Address(RVA = "0x4B0A290", Offset = "0x4B0A290", VA = "0x4B0A290")]
	private RendererList CreateShadowRendererList_Internal(IntPtr shadowDrawinSettings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x4B0A380", Offset = "0x4B0A380", VA = "0x4B0A380")]
	private RendererList CreateGizmoRendererList_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x4B0A4F0", Offset = "0x4B0A4F0", VA = "0x4B0A4F0")]
	private RendererList CreateUIOverlayRendererList_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x4B0A640", Offset = "0x4B0A640", VA = "0x4B0A640")]
	private RendererList CreateWireOverlayRendererList_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera)
	{
		return default(RendererList);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109A")]
	[Address(RVA = "0x4B0A790", Offset = "0x4B0A790", VA = "0x4B0A790")]
	private extern void PrepareRendererListsAsync_Internal(object rendererLists);

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x4B0A7D0", Offset = "0x4B0A7D0", VA = "0x4B0A7D0")]
	private RendererListStatus QueryRendererListStatus_Internal(RendererList handle)
	{
		return default(RendererListStatus);
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x4B087C0", Offset = "0x4B087C0", VA = "0x4B087C0")]
	internal ScriptableRenderContext(IntPtr ptr)
	{
	}

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x4B087D0", Offset = "0x4B087D0", VA = "0x4B087D0")]
	internal void GetCameras(List<Camera> results)
	{
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x4B0A8B0", Offset = "0x4B0A8B0", VA = "0x4B0A8B0")]
	public void ExecuteCommandBuffer(CommandBuffer commandBuffer)
	{
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x4B0A9C0", Offset = "0x4B0A9C0", VA = "0x4B0A9C0")]
	public void ExecuteCommandBufferAsync(CommandBuffer commandBuffer, ComputeQueueType queueType)
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x4B0AAD0", Offset = "0x4B0AAD0", VA = "0x4B0AAD0", Slot = "4")]
	public bool Equals(ScriptableRenderContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x4B0AB10", Offset = "0x4B0AB10", VA = "0x4B0AB10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x4B0ABD0", Offset = "0x4B0ABD0", VA = "0x4B0ABD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x4B0ABE0", Offset = "0x4B0ABE0", VA = "0x4B0ABE0")]
	public RendererList CreateRendererList(ref RendererListParams param)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x4B0AEF0", Offset = "0x4B0AEF0", VA = "0x4B0AEF0")]
	public RendererList CreateShadowRendererList(ref ShadowDrawingSettings settings)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x4B0B010", Offset = "0x4B0B010", VA = "0x4B0B010")]
	public RendererList CreateGizmoRendererList(Camera camera, GizmoSubset gizmoSubset)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x4B0B0A0", Offset = "0x4B0B0A0", VA = "0x4B0B0A0")]
	public RendererList CreateUIOverlayRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x4B0B130", Offset = "0x4B0B130", VA = "0x4B0B130")]
	public RendererList CreateWireOverlayRendererList(Camera camera)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x4B0B1C0", Offset = "0x4B0B1C0", VA = "0x4B0B1C0")]
	public void PrepareRendererListsAsync(List<RendererList> rendererLists)
	{
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x4B0B250", Offset = "0x4B0B250", VA = "0x4B0B250")]
	public RendererListStatus QueryRendererListStatus(RendererList rendererList)
	{
		return default(RendererListStatus);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x4B0A040", Offset = "0x4B0A040", VA = "0x4B0A040")]
	private static extern void InitializeSortSettings_Injected(IntPtr camera, out SortingSettings sortingSettings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x4B0A230", Offset = "0x4B0A230", VA = "0x4B0A230")]
	private static extern void CreateRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, [In] ref ShaderTagId tagName, bool isPassTagName, IntPtr tagValues, IntPtr stateBlocks, int stateCount, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x4B0A340", Offset = "0x4B0A340", VA = "0x4B0A340")]
	private static extern void CreateShadowRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr shadowDrawinSettings, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x4B0A4A0", Offset = "0x4B0A4A0", VA = "0x4B0A4A0")]
	private static extern void CreateGizmoRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, GizmoSubset gizmoSubset, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x4B0A600", Offset = "0x4B0A600", VA = "0x4B0A600")]
	private static extern void CreateUIOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x4B0A750", Offset = "0x4B0A750", VA = "0x4B0A750")]
	private static extern void CreateWireOverlayRendererList_Internal_Injected(ref ScriptableRenderContext _unity_self, IntPtr camera, out RendererList ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x4B0A870", Offset = "0x4B0A870", VA = "0x4B0A870")]
	private static extern RendererListStatus QueryRendererListStatus_Internal_Injected(ref ScriptableRenderContext _unity_self, [In] ref RendererList handle);
}
