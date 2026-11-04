// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererGroup
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000384")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Matrix4x4.h")]
public class BatchRendererGroup : IDisposable
{
	[Token(Token = "0x2000385")]
	public delegate JobHandle OnPerformCulling(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext, BatchCullingOutput cullingOutput, IntPtr userContext);

	[Token(Token = "0x2000386")]
	public delegate void OnFinishedCulling(IntPtr customCullingResult);

	[Token(Token = "0x2000387")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6001596")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(BatchRendererGroup batchRendererGroup)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000A99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_GroupHandle;

	[Token(Token = "0x4000A9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private OnPerformCulling m_PerformCulling;

	[Token(Token = "0x4000A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private OnFinishedCulling m_FinishedCulling;

	[Token(Token = "0x17000328")]
	public static BatchBufferTarget BufferTarget
	{
		[Token(Token = "0x6001585")]
		[Address(RVA = "0x2F605A0", Offset = "0x2F5EBA0", VA = "0x182F605A0")]
		get
		{
			return default(BatchBufferTarget);
		}
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x2F61020", Offset = "0x2F5F620", VA = "0x182F61020")]
	public BatchRendererGroup(BatchRendererGroupCreateInfo info)
	{
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x2F60550", Offset = "0x2F5EB50", VA = "0x182F60550", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x2F60420", Offset = "0x2F5EA20", VA = "0x182F60420")]
	private BatchID AddDrawCommandBatch(IntPtr values, int count, GraphicsBufferHandle buffer, uint bufferOffset, uint windowSize)
	{
		return default(BatchID);
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x2F602E0", Offset = "0x2F5E8E0", VA = "0x182F602E0")]
	public BatchID AddBatch(NativeArray<MetadataValue> batchMetadata, GraphicsBufferHandle buffer)
	{
		return default(BatchID);
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x2F60E60", Offset = "0x2F5F460", VA = "0x182F60E60")]
	private void RemoveDrawCommandBatch(BatchID batchID)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x2F60DB0", Offset = "0x2F5F3B0", VA = "0x182F60DB0")]
	public void RemoveBatch(BatchID batchID)
	{
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x2F60AD0", Offset = "0x2F5F0D0", VA = "0x182F60AD0")]
	internal void RegisterMaterials(ReadOnlySpan<EntityId> materialID, Span<BatchMaterialID> batchMaterialID)
	{
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x2F60F10", Offset = "0x2F5F510", VA = "0x182F60F10")]
	public void UnregisterMaterial(BatchMaterialID material)
	{
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x2F60C70", Offset = "0x2F5F270", VA = "0x182F60C70")]
	internal void RegisterMeshes(ReadOnlySpan<EntityId> meshID, Span<BatchMeshID> batchMeshID)
	{
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x2F60FC0", Offset = "0x2F5F5C0", VA = "0x182F60FC0")]
	public void UnregisterMesh(BatchMeshID mesh)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001584")]
	[Address(RVA = "0x2F605A0", Offset = "0x2F5EBA0", VA = "0x182F605A0")]
	private static extern BatchBufferTarget GetBufferTarget();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001586")]
	[Address(RVA = "0x2F604C0", Offset = "0x2F5EAC0", VA = "0x182F604C0")]
	private unsafe static extern IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] BatchRendererGroup group, void* userContext);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001587")]
	[Address(RVA = "0x2F60510", Offset = "0x2F5EB10", VA = "0x182F60510")]
	private static extern void Destroy(IntPtr groupHandle);

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x2F60630", Offset = "0x2F5EC30", VA = "0x182F60630")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPerformCulling(BatchRendererGroup group, ref BatchRendererCullingOutput context, ref LODParameters lodParameters, IntPtr userContext)
	{
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x2F605D0", Offset = "0x2F5EBD0", VA = "0x182F605D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnFinishedCulling(BatchRendererGroup group, IntPtr customCullingResult)
	{
	}

	[Token(Token = "0x600158A")]
	[Address(RVA = "0x2F60A20", Offset = "0x2F5F020", VA = "0x182F60A20")]
	[UnityEngine.Bindings.FreeFunction("BatchRendererGroup::OcclusionTestAABB", IsThreadSafe = true)]
	internal static bool OcclusionTestAABB(IntPtr occlusionBuffer, Bounds aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600158B")]
	[Address(RVA = "0x2F603D0", Offset = "0x2F5E9D0", VA = "0x182F603D0")]
	private static extern void AddDrawCommandBatch_Injected(IntPtr _unity_self, IntPtr values, int count, [In] ref GraphicsBufferHandle buffer, uint bufferOffset, uint windowSize, out BatchID ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600158C")]
	[Address(RVA = "0x2F60E10", Offset = "0x2F5F410", VA = "0x182F60E10")]
	private static extern void RemoveDrawCommandBatch_Injected(IntPtr _unity_self, [In] ref BatchID batchID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600158D")]
	[Address(RVA = "0x2F60A70", Offset = "0x2F5F070", VA = "0x182F60A70")]
	private static extern void RegisterMaterials_Injected(IntPtr _unity_self, ref ManagedSpanWrapper materialID, ref ManagedSpanWrapper batchMaterialID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600158E")]
	[Address(RVA = "0x2F60EC0", Offset = "0x2F5F4C0", VA = "0x182F60EC0")]
	private static extern void UnregisterMaterial_Injected(IntPtr _unity_self, [In] ref BatchMaterialID material);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600158F")]
	[Address(RVA = "0x2F60C10", Offset = "0x2F5F210", VA = "0x182F60C10")]
	private static extern void RegisterMeshes_Injected(IntPtr _unity_self, ref ManagedSpanWrapper meshID, ref ManagedSpanWrapper batchMeshID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001590")]
	[Address(RVA = "0x2F60F70", Offset = "0x2F5F570", VA = "0x182F60F70")]
	private static extern void UnregisterMesh_Injected(IntPtr _unity_self, [In] ref BatchMeshID mesh);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001591")]
	[Address(RVA = "0x2F609D0", Offset = "0x2F5EFD0", VA = "0x182F609D0")]
	private static extern bool OcclusionTestAABB_Injected(IntPtr occlusionBuffer, [In] ref Bounds aabb);
}
