// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20003C0")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Matrix4x4.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
public class BatchRendererGroup : IDisposable
{
	[Token(Token = "0x20003C1")]
	public delegate JobHandle OnPerformCulling(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext, BatchCullingOutput cullingOutput, IntPtr userContext);

	[Token(Token = "0x20003C2")]
	public delegate void OnFinishedCulling(IntPtr customCullingResult);

	[Token(Token = "0x20003C3")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600174C")]
		[Address(RVA = "0x6965CB0", Offset = "0x6964CB0", VA = "0x6965CB0")]
		public static IntPtr ConvertToNative(BatchRendererGroup batchRendererGroup)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_GroupHandle;

	[Token(Token = "0x4000C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private OnPerformCulling m_PerformCulling;

	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private OnFinishedCulling m_FinishedCulling;

	[Token(Token = "0x170003BA")]
	public static BatchBufferTarget BufferTarget
	{
		[Token(Token = "0x600173B")]
		[Address(RVA = "0x6965600", Offset = "0x6964600", VA = "0x6965600")]
		get
		{
			return default(BatchBufferTarget);
		}
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x6964D70", Offset = "0x6963D70", VA = "0x6964D70")]
	public BatchRendererGroup(BatchRendererGroupCreateInfo info)
	{
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x6964E40", Offset = "0x6963E40", VA = "0x6964E40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001732")]
	[Address(RVA = "0x6964EB0", Offset = "0x6963EB0", VA = "0x6964EB0")]
	private BatchID AddDrawCommandBatch(IntPtr values, int count, GraphicsBufferHandle buffer, uint bufferOffset, uint windowSize)
	{
		return default(BatchID);
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x6964FB0", Offset = "0x6963FB0", VA = "0x6964FB0")]
	public BatchID AddBatch(NativeArray<MetadataValue> batchMetadata, GraphicsBufferHandle buffer)
	{
		return default(BatchID);
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x6965090", Offset = "0x6964090", VA = "0x6965090")]
	private void RemoveDrawCommandBatch(BatchID batchID)
	{
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x6965130", Offset = "0x6964130", VA = "0x6965130")]
	public void RemoveBatch(BatchID batchID)
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x6965190", Offset = "0x6964190", VA = "0x6965190")]
	internal void RegisterMaterials(ReadOnlySpan<EntityId> materialID, Span<BatchMaterialID> batchMaterialID)
	{
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x6965310", Offset = "0x6964310", VA = "0x6965310")]
	public void UnregisterMaterial(BatchMaterialID material)
	{
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x69653B0", Offset = "0x69643B0", VA = "0x69653B0")]
	internal void RegisterMeshes(ReadOnlySpan<EntityId> meshID, Span<BatchMeshID> batchMeshID)
	{
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x6965530", Offset = "0x6964530", VA = "0x6965530")]
	public void UnregisterMesh(BatchMeshID mesh)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600173A")]
	[Address(RVA = "0x69655D0", Offset = "0x69645D0", VA = "0x69655D0")]
	private static extern BatchBufferTarget GetBufferTarget();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600173C")]
	[Address(RVA = "0x6964E00", Offset = "0x6963E00", VA = "0x6964E00")]
	private unsafe static extern IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] BatchRendererGroup group, void* userContext);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600173D")]
	[Address(RVA = "0x6964E80", Offset = "0x6963E80", VA = "0x6964E80")]
	private static extern void Destroy(IntPtr groupHandle);

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x6965630", Offset = "0x6964630", VA = "0x6965630")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPerformCulling(BatchRendererGroup group, ref BatchRendererCullingOutput context, ref LODParameters lodParameters, IntPtr userContext)
	{
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x6965980", Offset = "0x6964980", VA = "0x6965980")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnFinishedCulling(BatchRendererGroup group, IntPtr customCullingResult)
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x6965A50", Offset = "0x6964A50", VA = "0x6965A50")]
	[UnityEngine.Bindings.FreeFunction("BatchRendererGroup::OcclusionTestAABB", IsThreadSafe = true)]
	internal static bool OcclusionTestAABB(IntPtr occlusionBuffer, Bounds aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001741")]
	[Address(RVA = "0x6964F50", Offset = "0x6963F50", VA = "0x6964F50")]
	private static extern void AddDrawCommandBatch_Injected(IntPtr _unity_self, IntPtr values, int count, [In] ref GraphicsBufferHandle buffer, uint bufferOffset, uint windowSize, out BatchID ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001742")]
	[Address(RVA = "0x69650F0", Offset = "0x69640F0", VA = "0x69650F0")]
	private static extern void RemoveDrawCommandBatch_Injected(IntPtr _unity_self, [In] ref BatchID batchID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001743")]
	[Address(RVA = "0x69652D0", Offset = "0x69642D0", VA = "0x69652D0")]
	private static extern void RegisterMaterials_Injected(IntPtr _unity_self, ref ManagedSpanWrapper materialID, ref ManagedSpanWrapper batchMaterialID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001744")]
	[Address(RVA = "0x6965370", Offset = "0x6964370", VA = "0x6965370")]
	private static extern void UnregisterMaterial_Injected(IntPtr _unity_self, [In] ref BatchMaterialID material);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001745")]
	[Address(RVA = "0x69654F0", Offset = "0x69644F0", VA = "0x69654F0")]
	private static extern void RegisterMeshes_Injected(IntPtr _unity_self, ref ManagedSpanWrapper meshID, ref ManagedSpanWrapper batchMeshID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001746")]
	[Address(RVA = "0x6965590", Offset = "0x6964590", VA = "0x6965590")]
	private static extern void UnregisterMesh_Injected(IntPtr _unity_self, [In] ref BatchMeshID mesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001747")]
	[Address(RVA = "0x6965A90", Offset = "0x6964A90", VA = "0x6965A90")]
	private static extern bool OcclusionTestAABB_Injected(IntPtr occlusionBuffer, [In] ref Bounds aabb);
}
