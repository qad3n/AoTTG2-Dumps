// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceDataSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000084")]
internal class InstanceDataSystem : IDisposable
{
	[Token(Token = "0x2000085")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct QueryRendererGroupInstancesCountJob : IJobParallelForBatch
	{
		[Token(Token = "0x4000271")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x4000272")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public CPUInstanceData instanceData;

		[Token(Token = "0x4000273")]
		[FieldOffset(Offset = "0xF0")]
		[ReadOnly]
		public CPUSharedInstanceData sharedInstanceData;

		[Token(Token = "0x4000274")]
		[FieldOffset(Offset = "0x1A8")]
		[ReadOnly]
		public NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash;

		[Token(Token = "0x4000275")]
		[FieldOffset(Offset = "0x1B8")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<EntityId> rendererGroupIDs;

		[Token(Token = "0x4000276")]
		[FieldOffset(Offset = "0x1C8")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[WriteOnly]
		public NativeArray<int> instancesCount;

		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x65DF170", Offset = "0x65DE170", VA = "0x65DF170", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x2000086")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct ComputeInstancesOffsetAndResizeInstancesArrayJob : IJob
	{
		[Token(Token = "0x4000277")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeArray<int> instancesCount;

		[Token(Token = "0x4000278")]
		[FieldOffset(Offset = "0x10")]
		[WriteOnly]
		public NativeArray<int> instancesOffset;

		[Token(Token = "0x4000279")]
		[FieldOffset(Offset = "0x20")]
		public NativeList<InstanceHandle> instances;

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x65DF340", Offset = "0x65DE340", VA = "0x65DF340", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x2000087")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct QueryRendererGroupInstancesJob : IJobParallelForBatch
	{
		[Token(Token = "0x400027A")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<EntityId> rendererGroupIDs;

		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[WriteOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x400027E")]
		[FieldOffset(Offset = "0x30")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicNonFoundInstancesCount;

		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x65DF3B0", Offset = "0x65DE3B0", VA = "0x65DF3B0", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x2000088")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct QueryRendererGroupInstancesMultiJob : IJobParallelForBatch
	{
		[Token(Token = "0x400027F")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x4000280")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash;

		[Token(Token = "0x4000281")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<EntityId> rendererGroupIDs;

		[Token(Token = "0x4000282")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<int> instancesOffsets;

		[Token(Token = "0x4000283")]
		[FieldOffset(Offset = "0x30")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<int> instancesCounts;

		[Token(Token = "0x4000284")]
		[FieldOffset(Offset = "0x40")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[WriteOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x4000285")]
		[FieldOffset(Offset = "0x50")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicNonFoundSharedInstancesCount;

		[Token(Token = "0x4000286")]
		[FieldOffset(Offset = "0x58")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicNonFoundInstancesCount;

		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x65DF4B0", Offset = "0x65DE4B0", VA = "0x65DF4B0", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x2000089")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct QuerySortedMeshInstancesJob : IJobParallelForBatch
	{
		[Token(Token = "0x4000287")]
		public const int k_BatchSize = 64;

		[Token(Token = "0x4000288")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public CPUInstanceData instanceData;

		[Token(Token = "0x4000289")]
		[FieldOffset(Offset = "0xF0")]
		[ReadOnly]
		public CPUSharedInstanceData sharedInstanceData;

		[Token(Token = "0x400028A")]
		[FieldOffset(Offset = "0x1A8")]
		[ReadOnly]
		public NativeArray<EntityId> sortedMeshID;

		[Token(Token = "0x400028B")]
		[FieldOffset(Offset = "0x1B8")]
		[NativeDisableParallelForRestriction]
		[WriteOnly]
		public NativeList<InstanceHandle> instances;

		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x65DF970", Offset = "0x65DE970", VA = "0x65DF970", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x200008A")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct CalculateInterpolatedLightAndOcclusionProbesBatchJob : IJobParallelFor
	{
		[Token(Token = "0x400028C")]
		public const int k_BatchSize = 1;

		[Token(Token = "0x400028D")]
		public const int k_CalculatedProbesPerBatch = 8;

		[Token(Token = "0x400028E")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public int probesCount;

		[Token(Token = "0x400028F")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public LightProbesQuery lightProbesQuery;

		[Token(Token = "0x4000290")]
		[FieldOffset(Offset = "0x18")]
		[NativeDisableParallelForRestriction]
		[ReadOnly]
		public NativeArray<Vector3> queryPostitions;

		[Token(Token = "0x4000291")]
		[FieldOffset(Offset = "0x28")]
		[NativeDisableParallelForRestriction]
		public NativeArray<int> compactTetrahedronCache;

		[Token(Token = "0x4000292")]
		[FieldOffset(Offset = "0x38")]
		[NativeDisableParallelForRestriction]
		[WriteOnly]
		public NativeArray<SphericalHarmonicsL2> probesSphericalHarmonics;

		[Token(Token = "0x4000293")]
		[FieldOffset(Offset = "0x48")]
		[NativeDisableParallelForRestriction]
		[WriteOnly]
		public NativeArray<Vector4> probesOcclusion;

		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x65DFC00", Offset = "0x65DEC00", VA = "0x65DFC00", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x200008B")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct ScatterTetrahedronCacheIndicesJob : IJobParallelFor
	{
		[Token(Token = "0x4000294")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x4000295")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeArray<InstanceHandle> probeInstances;

		[Token(Token = "0x4000296")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public NativeArray<int> compactTetrahedronCache;

		[Token(Token = "0x4000297")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[NativeDisableParallelForRestriction]
		public CPUInstanceData instanceData;

		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x65DFD40", Offset = "0x65DED40", VA = "0x65DFD40", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x200008C")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct TransformUpdateJob : IJobParallelForBatch
	{
		[Token(Token = "0x4000298")]
		public const int k_BatchSize = 64;

		[Token(Token = "0x4000299")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public bool initialize;

		[Token(Token = "0x400029A")]
		[FieldOffset(Offset = "0x1")]
		[ReadOnly]
		public bool enableBoundingSpheres;

		[Token(Token = "0x400029B")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x400029C")]
		[FieldOffset(Offset = "0x18")]
		[ReadOnly]
		public NativeArray<Matrix4x4> localToWorldMatrices;

		[Token(Token = "0x400029D")]
		[FieldOffset(Offset = "0x28")]
		[ReadOnly]
		public NativeArray<Matrix4x4> prevLocalToWorldMatrices;

		[Token(Token = "0x400029E")]
		[FieldOffset(Offset = "0x38")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicTransformQueueCount;

		[Token(Token = "0x400029F")]
		[FieldOffset(Offset = "0x40")]
		[NativeDisableParallelForRestriction]
		public CPUSharedInstanceData sharedInstanceData;

		[Token(Token = "0x40002A0")]
		[FieldOffset(Offset = "0xF8")]
		[NativeDisableParallelForRestriction]
		public CPUInstanceData instanceData;

		[Token(Token = "0x40002A1")]
		[FieldOffset(Offset = "0x1E8")]
		[NativeDisableParallelForRestriction]
		public NativeArray<InstanceHandle> transformUpdateInstanceQueue;

		[Token(Token = "0x40002A2")]
		[FieldOffset(Offset = "0x1F8")]
		[NativeDisableParallelForRestriction]
		public NativeArray<TransformUpdatePacket> transformUpdateDataQueue;

		[Token(Token = "0x40002A3")]
		[FieldOffset(Offset = "0x208")]
		[NativeDisableParallelForRestriction]
		public NativeArray<float4> boundingSpheresDataQueue;

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x65DFD60", Offset = "0x65DED60", VA = "0x65DFD60", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x200008D")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct ProbesUpdateJob : IJobParallelForBatch
	{
		[Token(Token = "0x40002A4")]
		public const int k_BatchSize = 64;

		[Token(Token = "0x40002A5")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x40002A6")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableParallelForRestriction]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public CPUInstanceData instanceData;

		[Token(Token = "0x40002A7")]
		[FieldOffset(Offset = "0x100")]
		[ReadOnly]
		public CPUSharedInstanceData sharedInstanceData;

		[Token(Token = "0x40002A8")]
		[FieldOffset(Offset = "0x1B8")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicProbesQueueCount;

		[Token(Token = "0x40002A9")]
		[FieldOffset(Offset = "0x1C0")]
		[NativeDisableParallelForRestriction]
		public NativeArray<InstanceHandle> probeInstanceQueue;

		[Token(Token = "0x40002AA")]
		[FieldOffset(Offset = "0x1D0")]
		[NativeDisableParallelForRestriction]
		public NativeArray<int> compactTetrahedronCache;

		[Token(Token = "0x40002AB")]
		[FieldOffset(Offset = "0x1E0")]
		[NativeDisableParallelForRestriction]
		public NativeArray<Vector3> probeQueryPosition;

		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x65E0BD0", Offset = "0x65DFBD0", VA = "0x65E0BD0", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x200008E")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct MotionUpdateJob : IJobParallelFor
	{
		[Token(Token = "0x40002AC")]
		public const int k_BatchSize = 16;

		[Token(Token = "0x40002AD")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public int queueWriteBase;

		[Token(Token = "0x40002AE")]
		[FieldOffset(Offset = "0x8")]
		[NativeDisableParallelForRestriction]
		public CPUInstanceData instanceData;

		[Token(Token = "0x40002AF")]
		[FieldOffset(Offset = "0xF8")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicUpdateQueueCount;

		[Token(Token = "0x40002B0")]
		[FieldOffset(Offset = "0x100")]
		[NativeDisableParallelForRestriction]
		[WriteOnly]
		public NativeArray<InstanceHandle> transformUpdateInstanceQueue;

		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x65E0ED0", Offset = "0x65DFED0", VA = "0x65E0ED0", Slot = "4")]
		public void Execute(int chunk_index)
		{
		}
	}

	[Token(Token = "0x200008F")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct UpdateRendererInstancesJob : IJobParallelFor
	{
		[Token(Token = "0x40002B1")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x40002B2")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public bool implicitInstanceIndices;

		[Token(Token = "0x40002B3")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData;

		[Token(Token = "0x40002B4")]
		[FieldOffset(Offset = "0x1F8")]
		[ReadOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x40002B5")]
		[FieldOffset(Offset = "0x208")]
		[ReadOnly]
		public NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataMap;

		[Token(Token = "0x40002B6")]
		[FieldOffset(Offset = "0x218")]
		[NativeDisableParallelForRestriction]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public CPUInstanceData instanceData;

		[Token(Token = "0x40002B7")]
		[FieldOffset(Offset = "0x308")]
		[NativeDisableParallelForRestriction]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public CPUSharedInstanceData sharedInstanceData;

		[Token(Token = "0x40002B8")]
		[FieldOffset(Offset = "0x3C0")]
		[NativeDisableParallelForRestriction]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public CPUPerCameraInstanceData perCameraInstanceData;

		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x65E10E0", Offset = "0x65E00E0", VA = "0x65E10E0", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x2000090")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct CollectInstancesLODGroupsAndMasksJob : IJobParallelFor
	{
		[Token(Token = "0x40002B9")]
		public const int k_BatchSize = 128;

		[Token(Token = "0x40002BA")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x40002BB")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public CPUInstanceData.ReadOnly instanceData;

		[Token(Token = "0x40002BC")]
		[FieldOffset(Offset = "0xF8")]
		[ReadOnly]
		public CPUSharedInstanceData.ReadOnly sharedInstanceData;

		[Token(Token = "0x40002BD")]
		[FieldOffset(Offset = "0x1A8")]
		[WriteOnly]
		public NativeArray<uint> lodGroupAndMasks;

		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x65E1930", Offset = "0x65E0930", VA = "0x65E1930", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x2000091")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct GetVisibleNonProcessedTreeInstancesJob : IJobParallelForBatch
	{
		[Token(Token = "0x40002BE")]
		public const int k_BatchSize = 64;

		[Token(Token = "0x40002BF")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public CPUInstanceData instanceData;

		[Token(Token = "0x40002C0")]
		[FieldOffset(Offset = "0xF0")]
		[ReadOnly]
		public CPUSharedInstanceData sharedInstanceData;

		[Token(Token = "0x40002C1")]
		[FieldOffset(Offset = "0x1A8")]
		[ReadOnly]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		public ParallelBitArray compactedVisibilityMasks;

		[Token(Token = "0x40002C2")]
		[FieldOffset(Offset = "0x1C8")]
		[ReadOnly]
		public bool becomeVisible;

		[Token(Token = "0x40002C3")]
		[FieldOffset(Offset = "0x1D0")]
		[NativeDisableParallelForRestriction]
		public ParallelBitArray processedBits;

		[Token(Token = "0x40002C4")]
		[FieldOffset(Offset = "0x1F0")]
		[NativeDisableParallelForRestriction]
		[WriteOnly]
		public NativeArray<int> rendererIDs;

		[Token(Token = "0x40002C5")]
		[FieldOffset(Offset = "0x200")]
		[NativeDisableParallelForRestriction]
		[WriteOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x40002C6")]
		[FieldOffset(Offset = "0x210")]
		[NativeDisableUnsafePtrRestriction]
		public UnsafeAtomicCounter32 atomicTreeInstancesCount;

		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x65E19C0", Offset = "0x65E09C0", VA = "0x65E19C0", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x2000092")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct UpdateCompactedInstanceVisibilityJob : IJobParallelForBatch
	{
		[Token(Token = "0x40002C7")]
		public const int k_BatchSize = 64;

		[Token(Token = "0x40002C8")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public ParallelBitArray compactedVisibilityMasks;

		[Token(Token = "0x40002C9")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[NativeDisableParallelForRestriction]
		public CPUInstanceData instanceData;

		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x65E1D30", Offset = "0x65E0D30", VA = "0x65E1D30", Slot = "4")]
		public void Execute(int startIndex, int count)
		{
		}
	}

	[Token(Token = "0x2000093")]
	private static class InstanceTransformUpdateIDs
	{
		[Token(Token = "0x40002CA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _TransformUpdateQueueCount;

		[Token(Token = "0x40002CB")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _TransformUpdateOutputL2WVec4Offset;

		[Token(Token = "0x40002CC")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _TransformUpdateOutputW2LVec4Offset;

		[Token(Token = "0x40002CD")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _TransformUpdateOutputPrevL2WVec4Offset;

		[Token(Token = "0x40002CE")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _TransformUpdateOutputPrevW2LVec4Offset;

		[Token(Token = "0x40002CF")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _BoundingSphereOutputVec4Offset;

		[Token(Token = "0x40002D0")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _TransformUpdateDataQueue;

		[Token(Token = "0x40002D1")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _TransformUpdateIndexQueue;

		[Token(Token = "0x40002D2")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _BoundingSphereDataQueue;

		[Token(Token = "0x40002D3")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _OutputTransformBuffer;

		[Token(Token = "0x40002D4")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _ProbeUpdateQueueCount;

		[Token(Token = "0x40002D5")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _SHUpdateVec4Offset;

		[Token(Token = "0x40002D6")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _ProbeUpdateDataQueue;

		[Token(Token = "0x40002D7")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _ProbeOcclusionUpdateDataQueue;

		[Token(Token = "0x40002D8")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _ProbeUpdateIndexQueue;

		[Token(Token = "0x40002D9")]
		[FieldOffset(Offset = "0x3C")]
		public static readonly int _OutputProbeBuffer;
	}

	[Token(Token = "0x2000094")]
	private static class InstanceWindDataUpdateIDs
	{
		[Token(Token = "0x40002DA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _WindDataQueueCount;

		[Token(Token = "0x40002DB")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _WindDataUpdateIndexQueue;

		[Token(Token = "0x40002DC")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _WindDataBuffer;

		[Token(Token = "0x40002DD")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _WindParamAddressArray;

		[Token(Token = "0x40002DE")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _WindHistoryParamAddressArray;
	}

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x10")]
	private InstanceAllocators m_InstanceAllocators;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x70")]
	private CPUSharedInstanceData m_SharedInstanceData;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x128")]
	private CPUInstanceData m_InstanceData;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x218")]
	private CPUPerCameraInstanceData m_PerCameraInstanceData;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x238")]
	private NativeParallelMultiHashMap<int, InstanceHandle> m_RendererGroupInstanceMultiHash;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x248")]
	private ComputeShader m_TransformUpdateCS;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x250")]
	private ComputeShader m_WindDataUpdateCS;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x258")]
	private int m_TransformInitKernel;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x25C")]
	private int m_TransformUpdateKernel;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x260")]
	private int m_MotionUpdateKernel;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x264")]
	private int m_ProbeUpdateKernel;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x268")]
	private int m_LODUpdateKernel;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x26C")]
	private int m_WindDataCopyHistoryKernel;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x270")]
	private ComputeBuffer m_UpdateIndexQueueBuffer;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x278")]
	private ComputeBuffer m_ProbeUpdateDataQueueBuffer;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x280")]
	private ComputeBuffer m_ProbeOcclusionUpdateDataQueueBuffer;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x288")]
	private ComputeBuffer m_TransformUpdateDataQueueBuffer;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x290")]
	private ComputeBuffer m_BoundingSpheresUpdateDataQueueBuffer;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x298")]
	private bool m_EnableBoundingSpheres;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x2A0")]
	private readonly int[] m_ScratchWindParamAddressArray;

	[Token(Token = "0x1700004A")]
	public bool hasBoundingSpheres
	{
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x65DACD0", Offset = "0x65D9CD0", VA = "0x65DACD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public CPUInstanceData.ReadOnly instanceData
	{
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x65DACE0", Offset = "0x65D9CE0", VA = "0x65DACE0")]
		get
		{
			return default(CPUInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700004C")]
	public CPUPerCameraInstanceData perCameraInstanceData
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x65DAD90", Offset = "0x65D9D90", VA = "0x65DAD90")]
		get
		{
			return default(CPUPerCameraInstanceData);
		}
	}

	[Token(Token = "0x1700004D")]
	public int cameraCount
	{
		[Token(Token = "0x6000299")]
		[Address(RVA = "0x65DADB0", Offset = "0x65D9DB0", VA = "0x65DADB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004E")]
	public CPUSharedInstanceData.ReadOnly sharedInstanceData
	{
		[Token(Token = "0x600029A")]
		[Address(RVA = "0x65DADF0", Offset = "0x65D9DF0", VA = "0x65DADF0")]
		get
		{
			return default(CPUSharedInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700004F")]
	public NativeArray<InstanceHandle> aliveInstances
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x65DAE70", Offset = "0x65D9E70", VA = "0x65DAE70")]
		get
		{
			return default(NativeArray<InstanceHandle>);
		}
	}

	[Token(Token = "0x6000295")]
	private static int AtomicAddLengthNoResize<T>(in NativeList<T> list, int count) where T : struct
	{
		return default(int);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x65DAEC0", Offset = "0x65D9EC0", VA = "0x65DAEC0")]
	public InstanceDataSystem(int maxInstances, bool enableBoundingSpheres, GPUResidentDrawerResources resources)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x65DB200", Offset = "0x65DA200", VA = "0x65DB200", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x65DB2D0", Offset = "0x65DA2D0", VA = "0x65DB2D0")]
	public int GetMaxInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x65DB340", Offset = "0x65DA340", VA = "0x65DB340")]
	public int GetAliveInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x65DB350", Offset = "0x65DA350", VA = "0x65DB350")]
	private void EnsureIndexQueueBufferCapacity(int capacity)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x65DB3F0", Offset = "0x65DA3F0", VA = "0x65DB3F0")]
	private void EnsureProbeBuffersCapacity(int capacity)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x65DB560", Offset = "0x65DA560", VA = "0x65DB560")]
	private void EnsureTransformBuffersCapacity(int capacity)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x65DB700", Offset = "0x65DA700", VA = "0x65DB700")]
	private JobHandle ScheduleInterpolateProbesAndUpdateTetrahedronCache(int queueCount, NativeArray<InstanceHandle> probeUpdateInstanceQueue, NativeArray<int> compactTetrahedronCache, NativeArray<Vector3> probeQueryPosition, NativeArray<SphericalHarmonicsL2> probeUpdateDataQueue, NativeArray<Vector4> probeOcclusionUpdateDataQueue)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x65DB940", Offset = "0x65DA940", VA = "0x65DB940")]
	private void DispatchProbeUpdateCommand(int queueCount, NativeArray<InstanceHandle> probeInstanceQueue, NativeArray<SphericalHarmonicsL2> probeUpdateDataQueue, NativeArray<Vector4> probeOcclusionUpdateDataQueue, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x65DBD30", Offset = "0x65DAD30", VA = "0x65DBD30")]
	private void DispatchMotionUpdateCommand(int motionQueueCount, NativeArray<InstanceHandle> transformInstanceQueue, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x65DC0A0", Offset = "0x65DB0A0", VA = "0x65DC0A0")]
	private void DispatchTransformUpdateCommand(bool initialize, int transformQueueCount, NativeArray<InstanceHandle> transformInstanceQueue, NativeArray<TransformUpdatePacket> updateDataQueue, NativeArray<float4> boundingSphereUpdateDataQueue, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x65DC570", Offset = "0x65DB570", VA = "0x65DC570")]
	private void DispatchWindDataCopyHistoryCommand(NativeArray<GPUInstanceIndex> gpuInstanceIndices, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x65DCB30", Offset = "0x65DBB30", VA = "0x65DCB30")]
	private void UpdateInstanceMotionsData(in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x65DCD30", Offset = "0x65DBD30", VA = "0x65DCD30")]
	private void UpdateInstanceTransformsData(bool initialize, NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, NativeArray<Matrix4x4> prevLocalToWorldMatrices, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x65DD490", Offset = "0x65DC490", VA = "0x65DD490")]
	private void UpdateInstanceProbesData(NativeArray<InstanceHandle> instances, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x65DD8A0", Offset = "0x65DC8A0", VA = "0x65DD8A0")]
	public void UpdateInstanceWindDataHistory(NativeArray<GPUInstanceIndex> gpuInstanceIndices, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x65DD8B0", Offset = "0x65DC8B0", VA = "0x65DD8B0")]
	public void ReallocateAndGetInstances(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x65DDBC0", Offset = "0x65DCBC0", VA = "0x65DDBC0")]
	public void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupsID)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x65DDC50", Offset = "0x65DCC50", VA = "0x65DDC50")]
	public void FreeInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x65DDCE0", Offset = "0x65DCCE0", VA = "0x65DDCE0")]
	public JobHandle ScheduleUpdateInstanceDataJob(NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataMap)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x65DDE60", Offset = "0x65DCE60", VA = "0x65DDE60")]
	public void UpdateAllInstanceProbes(in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x65DDED0", Offset = "0x65DCED0", VA = "0x65DDED0")]
	public void InitializeInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, NativeArray<Matrix4x4> prevLocalToWorldMatrices, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x65DDF20", Offset = "0x65DCF20", VA = "0x65DDF20")]
	public void UpdateInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x65DDF70", Offset = "0x65DCF70", VA = "0x65DDF70")]
	public void UpdateInstanceMotions(in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x65DDF90", Offset = "0x65DCF90", VA = "0x65DDF90")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x65DE060", Offset = "0x65DD060", VA = "0x65DE060")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x65DE160", Offset = "0x65DD160", VA = "0x65DE160")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<int> instancesOffset, NativeArray<int> instancesCount, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x65DE430", Offset = "0x65DD430", VA = "0x65DE430")]
	public JobHandle ScheduleQuerySortedMeshInstancesJob(NativeArray<EntityId> sortedMeshIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x65DE560", Offset = "0x65DD560", VA = "0x65DE560")]
	public JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(NativeArray<InstanceHandle> instances, NativeArray<uint> lodGroupAndMasks)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x65DE780", Offset = "0x65DD780", VA = "0x65DE780")]
	public bool InternalSanityCheckStates()
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x65DEB90", Offset = "0x65DDB90", VA = "0x65DEB90")]
	public void GetVisibleTreeInstances(in ParallelBitArray compactedVisibilityMasks, in ParallelBitArray processedBits, NativeList<int> visibeTreeRendererIDs, NativeList<InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly, out int becomeVisibeTreeInstancesCount)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x65DF080", Offset = "0x65DE080", VA = "0x65DF080")]
	public void UpdatePerFrameInstanceVisibility(in ParallelBitArray compactedVisibilityMasks)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x65DF150", Offset = "0x65DE150", VA = "0x65DF150")]
	public void DeallocatePerCameraInstanceData(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x65DF160", Offset = "0x65DE160", VA = "0x65DF160")]
	public void AllocatePerCameraInstanceData(NativeArray<EntityId> cameraIDs)
	{
	}
}
