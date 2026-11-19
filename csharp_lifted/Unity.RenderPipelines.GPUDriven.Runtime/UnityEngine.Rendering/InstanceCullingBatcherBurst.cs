// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullingBatcherBurst
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000060")]
[BurstCompile]
internal static class InstanceCullingBatcherBurst
{
	[Token(Token = "0x2000061")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void RemoveDrawInstanceIndices_00000186_0024PostfixBurstDelegate(in NativeArray<int> drawInstanceIndices, ref NativeList<DrawInstance> drawInstances, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawRange> drawRanges, ref NativeList<DrawBatch> drawBatches);

	[Token(Token = "0x2000062")]
	internal static class RemoveDrawInstanceIndices_00000186_0024BurstDirectCall
	{
		[Token(Token = "0x40001B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x65CFE90", Offset = "0x65CEE90", VA = "0x65CFE90")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x65D0000", Offset = "0x65CF000", VA = "0x65D0000")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x65CE9B0", Offset = "0x65CD9B0", VA = "0x65CE9B0")]
		public static void Invoke(in NativeArray<int> drawInstanceIndices, ref NativeList<DrawInstance> drawInstances, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawRange> drawRanges, ref NativeList<DrawBatch> drawBatches)
		{
		}
	}

	[Token(Token = "0x2000063")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void CreateDrawBatches_0000018A_0024PostfixBurstDelegate(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances);

	[Token(Token = "0x2000064")]
	internal static class CreateDrawBatches_0000018A_0024BurstDirectCall
	{
		[Token(Token = "0x40001B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x65D0310", Offset = "0x65CF310", VA = "0x65D0310")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x65D0470", Offset = "0x65CF470", VA = "0x65D0470")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x65CF7A0", Offset = "0x65CE7A0", VA = "0x65CF7A0")]
		public static void Invoke(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances)
		{
		}
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x65CE5C0", Offset = "0x65CD5C0", VA = "0x65CE5C0")]
	private static void RemoveDrawRange(in RangeKey key, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x65CE730", Offset = "0x65CD730", VA = "0x65CE730")]
	private static void RemoveDrawBatch(in DrawKey key, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x65CB890", Offset = "0x65CA890", VA = "0x65CB890")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002ERemoveDrawInstanceIndices_00000186_0024PostfixBurstDelegate))]
	public static void RemoveDrawInstanceIndices(in NativeArray<int> drawInstanceIndices, ref NativeList<DrawInstance> drawInstances, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawRange> drawRanges, ref NativeList<DrawBatch> drawBatches)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x65CEAA0", Offset = "0x65CDAA0", VA = "0x65CEAA0")]
	private unsafe static ref DrawRange EditDrawRange(in RangeKey key, NativeParallelHashMap<RangeKey, int> rangeHash, NativeList<DrawRange> drawRanges)
	{
		return ref *(DrawRange*)null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x65CEC30", Offset = "0x65CDC30", VA = "0x65CEC30")]
	private unsafe static ref DrawBatch EditDrawBatch(in DrawKey key, in SubMeshDescriptor subMeshDescriptor, NativeParallelHashMap<DrawKey, int> batchHash, NativeList<DrawBatch> drawBatches)
	{
		return ref *(DrawBatch*)null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x65CEE80", Offset = "0x65CDE80", VA = "0x65CEE80")]
	private static void ProcessRenderer(int i, bool implicitInstanceIndices, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, NativeArray<InstanceHandle> instances, NativeList<DrawInstance> drawInstances, NativeParallelHashMap<RangeKey, int> rangeHash, NativeList<DrawRange> drawRanges, NativeParallelHashMap<DrawKey, int> batchHash, NativeList<DrawBatch> drawBatches)
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x65CE4A0", Offset = "0x65CD4A0", VA = "0x65CE4A0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002ECreateDrawBatches_0000018A_0024PostfixBurstDelegate))]
	public static void CreateDrawBatches(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x65CF9B0", Offset = "0x65CE9B0", VA = "0x65CF9B0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void RemoveDrawInstanceIndices_0024BurstManaged(in NativeArray<int> drawInstanceIndices, ref NativeList<DrawInstance> drawInstances, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawRange> drawRanges, ref NativeList<DrawBatch> drawBatches)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x65CFB90", Offset = "0x65CEB90", VA = "0x65CFB90")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void CreateDrawBatches_0024BurstManaged(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances)
	{
	}
}
