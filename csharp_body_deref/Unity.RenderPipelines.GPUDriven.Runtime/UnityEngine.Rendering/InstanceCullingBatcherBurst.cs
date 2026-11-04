// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullingBatcherBurst
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BE9A00", Offset = "0x2BE8000", VA = "0x182BE9A00")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x2BE9B90", Offset = "0x2BE8190", VA = "0x182BE9B90")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x2BE9D10", Offset = "0x2BE8310", VA = "0x182BE9D10")]
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
		[Address(RVA = "0x2BD99B0", Offset = "0x2BD7FB0", VA = "0x182BD99B0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x2BD9B30", Offset = "0x2BD8130", VA = "0x182BD9B30")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x2BD9CA0", Offset = "0x2BD82A0", VA = "0x182BD9CA0")]
		public static void Invoke(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances)
		{
		}
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x2BDF150", Offset = "0x2BDD750", VA = "0x182BDF150")]
	private static void RemoveDrawRange(in RangeKey key, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x2BDEC80", Offset = "0x2BDD280", VA = "0x182BDEC80")]
	private static void RemoveDrawBatch(in DrawKey key, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x2BDF140", Offset = "0x2BDD740", VA = "0x182BDF140")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002ERemoveDrawInstanceIndices_00000186_0024PostfixBurstDelegate))]
	public static void RemoveDrawInstanceIndices(in NativeArray<int> drawInstanceIndices, ref NativeList<DrawInstance> drawInstances, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawRange> drawRanges, ref NativeList<DrawBatch> drawBatches)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x2BDE150", Offset = "0x2BDC750", VA = "0x182BDE150")]
	private unsafe static ref DrawRange EditDrawRange(in RangeKey key, NativeParallelHashMap<RangeKey, int> rangeHash, NativeList<DrawRange> drawRanges)
	{
		return ref *(DrawRange*)null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x2BDDF60", Offset = "0x2BDC560", VA = "0x182BDDF60")]
	private unsafe static ref DrawBatch EditDrawBatch(in DrawKey key, in SubMeshDescriptor subMeshDescriptor, NativeParallelHashMap<DrawKey, int> batchHash, NativeList<DrawBatch> drawBatches)
	{
		return ref *(DrawBatch*)null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x2BDE2B0", Offset = "0x2BDC8B0", VA = "0x182BDE2B0")]
	private static void ProcessRenderer(int i, bool implicitInstanceIndices, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, NativeArray<InstanceHandle> instances, NativeList<DrawInstance> drawInstances, NativeParallelHashMap<RangeKey, int> rangeHash, NativeList<DrawRange> drawRanges, NativeParallelHashMap<DrawKey, int> batchHash, NativeList<DrawBatch> drawBatches)
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x2BDDEF0", Offset = "0x2BDC4F0", VA = "0x182BDDEF0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002ECreateDrawBatches_0000018A_0024PostfixBurstDelegate))]
	public static void CreateDrawBatches(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x2BDEF80", Offset = "0x2BDD580", VA = "0x182BDEF80")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void RemoveDrawInstanceIndices_0024BurstManaged(in NativeArray<int> drawInstanceIndices, ref NativeList<DrawInstance> drawInstances, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawRange> drawRanges, ref NativeList<DrawBatch> drawBatches)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x2BDDD90", Offset = "0x2BDC390", VA = "0x182BDDD90")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void CreateDrawBatches_0024BurstManaged(bool implicitInstanceIndices, in NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, in NativeParallelHashMap<EntityId, BatchMeshID> batchMeshHash, in NativeParallelHashMap<EntityId, BatchMaterialID> batchMaterialHash, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDataHash, ref NativeParallelHashMap<RangeKey, int> rangeHash, ref NativeList<DrawRange> drawRanges, ref NativeParallelHashMap<DrawKey, int> batchHash, ref NativeList<DrawBatch> drawBatches, ref NativeList<DrawInstance> drawInstances)
	{
	}
}
