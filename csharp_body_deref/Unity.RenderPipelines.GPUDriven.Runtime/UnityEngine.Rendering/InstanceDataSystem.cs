// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceDataSystem
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BE82D0", Offset = "0x2BE68D0", VA = "0x182BE82D0", Slot = "4")]
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
		[Address(RVA = "0x2BD96F0", Offset = "0x2BD7CF0", VA = "0x182BD96F0", Slot = "4")]
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
		[Address(RVA = "0x2BE83E0", Offset = "0x2BE69E0", VA = "0x182BE83E0", Slot = "4")]
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
		[Address(RVA = "0x2BE84D0", Offset = "0x2BE6AD0", VA = "0x182BE84D0", Slot = "4")]
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
		[Address(RVA = "0x2BF95D0", Offset = "0x2BF7BD0", VA = "0x182BF95D0", Slot = "4")]
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
		[Address(RVA = "0x2BECDE0", Offset = "0x2BEB3E0", VA = "0x182BECDE0", Slot = "4")]
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
		[Address(RVA = "0x2BFCCD0", Offset = "0x2BFB2D0", VA = "0x182BFCCD0", Slot = "4")]
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
		[Address(RVA = "0x2BFD700", Offset = "0x2BFBD00", VA = "0x182BFD700", Slot = "4")]
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
		[Address(RVA = "0x2BF92B0", Offset = "0x2BF78B0", VA = "0x182BF92B0", Slot = "4")]
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
		[Address(RVA = "0x2BF2690", Offset = "0x2BF0C90", VA = "0x182BF2690", Slot = "4")]
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
		[Address(RVA = "0x2BFEC60", Offset = "0x2BFD260", VA = "0x182BFEC60", Slot = "4")]
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
		[Address(RVA = "0x2BECF60", Offset = "0x2BEB560", VA = "0x182BECF60", Slot = "4")]
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
		[Address(RVA = "0x2BEE3E0", Offset = "0x2BEC9E0", VA = "0x182BEE3E0", Slot = "4")]
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
		[Address(RVA = "0x2BFE5F0", Offset = "0x2BFCBF0", VA = "0x182BFE5F0", Slot = "4")]
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
		[Address(RVA = "0x2192890", Offset = "0x2190E90", VA = "0x182192890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public CPUInstanceData.ReadOnly instanceData
	{
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x2BE7720", Offset = "0x2BE5D20", VA = "0x182BE7720")]
		get
		{
			return default(CPUInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700004C")]
	public CPUPerCameraInstanceData perCameraInstanceData
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x2BE7830", Offset = "0x2BE5E30", VA = "0x182BE7830")]
		get
		{
			return default(CPUPerCameraInstanceData);
		}
	}

	[Token(Token = "0x1700004D")]
	public int cameraCount
	{
		[Token(Token = "0x6000299")]
		[Address(RVA = "0x2BE76E0", Offset = "0x2BE5CE0", VA = "0x182BE76E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004E")]
	public CPUSharedInstanceData.ReadOnly sharedInstanceData
	{
		[Token(Token = "0x600029A")]
		[Address(RVA = "0x2BE7850", Offset = "0x2BE5E50", VA = "0x182BE7850")]
		get
		{
			return default(CPUSharedInstanceData.ReadOnly);
		}
	}

	[Token(Token = "0x1700004F")]
	public NativeArray<InstanceHandle> aliveInstances
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x2BE7670", Offset = "0x2BE5C70", VA = "0x182BE7670")]
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
	[Address(RVA = "0x2BE7380", Offset = "0x2BE5980", VA = "0x182BE7380")]
	public InstanceDataSystem(int maxInstances, bool enableBoundingSpheres, GPUResidentDrawerResources resources)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x2BE2D60", Offset = "0x2BE1360", VA = "0x182BE2D60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x2BE3380", Offset = "0x2BE1980", VA = "0x182BE3380")]
	public int GetMaxInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x2BE3370", Offset = "0x2BE1970", VA = "0x182BE3370")]
	public int GetAliveInstancesOfType(InstanceType instanceType)
	{
		return default(int);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x2BE2E40", Offset = "0x2BE1440", VA = "0x182BE2E40")]
	private void EnsureIndexQueueBufferCapacity(int capacity)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x2BE2F00", Offset = "0x2BE1500", VA = "0x182BE2F00")]
	private void EnsureProbeBuffersCapacity(int capacity)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x2BE3080", Offset = "0x2BE1680", VA = "0x182BE3080")]
	private void EnsureTransformBuffersCapacity(int capacity)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x2BE4480", Offset = "0x2BE2A80", VA = "0x182BE4480")]
	private JobHandle ScheduleInterpolateProbesAndUpdateTetrahedronCache(int queueCount, NativeArray<InstanceHandle> probeUpdateInstanceQueue, NativeArray<int> compactTetrahedronCache, NativeArray<Vector3> probeQueryPosition, NativeArray<SphericalHarmonicsL2> probeUpdateDataQueue, NativeArray<Vector4> probeOcclusionUpdateDataQueue)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x2BE1F70", Offset = "0x2BE0570", VA = "0x182BE1F70")]
	private void DispatchProbeUpdateCommand(int queueCount, NativeArray<InstanceHandle> probeInstanceQueue, NativeArray<SphericalHarmonicsL2> probeUpdateDataQueue, NativeArray<Vector4> probeOcclusionUpdateDataQueue, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x2BE1BB0", Offset = "0x2BE01B0", VA = "0x182BE1BB0")]
	private void DispatchMotionUpdateCommand(int motionQueueCount, NativeArray<InstanceHandle> transformInstanceQueue, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x2BE2500", Offset = "0x2BE0B00", VA = "0x182BE2500")]
	private void DispatchTransformUpdateCommand(bool initialize, int transformQueueCount, NativeArray<InstanceHandle> transformInstanceQueue, NativeArray<TransformUpdatePacket> updateDataQueue, NativeArray<float4> boundingSphereUpdateDataQueue, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x2BE2A60", Offset = "0x2BE1060", VA = "0x182BE2A60")]
	private void DispatchWindDataCopyHistoryCommand(NativeArray<GPUInstanceIndex> gpuInstanceIndices, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x2BE57A0", Offset = "0x2BE3DA0", VA = "0x182BE57A0")]
	private void UpdateInstanceMotionsData(in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2BE6500", Offset = "0x2BE4B00", VA = "0x182BE6500")]
	private void UpdateInstanceTransformsData(bool initialize, NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, NativeArray<Matrix4x4> prevLocalToWorldMatrices, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x2BE5E90", Offset = "0x2BE4490", VA = "0x182BE5E90")]
	private void UpdateInstanceProbesData(NativeArray<InstanceHandle> instances, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x2BE70B0", Offset = "0x2BE56B0", VA = "0x182BE70B0")]
	public void UpdateInstanceWindDataHistory(NativeArray<GPUInstanceIndex> gpuInstanceIndices, RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x2BE3E90", Offset = "0x2BE2490", VA = "0x182BE3E90")]
	public void ReallocateAndGetInstances(in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x2BE32D0", Offset = "0x2BE18D0", VA = "0x182BE32D0")]
	public void FreeRendererGroupInstances(NativeArray<EntityId> rendererGroupsID)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x2BE3230", Offset = "0x2BE1830", VA = "0x182BE3230")]
	public void FreeInstances(NativeArray<InstanceHandle> instances)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2BE52C0", Offset = "0x2BE38C0", VA = "0x182BE52C0")]
	public JobHandle ScheduleUpdateInstanceDataJob(NativeArray<InstanceHandle> instances, in UnityEngine.Rendering.GPUDrivenRendererGroupData rendererData, NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataMap)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x2BE56F0", Offset = "0x2BE3CF0", VA = "0x182BE56F0")]
	public void UpdateAllInstanceProbes(in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x2BE3B70", Offset = "0x2BE2170", VA = "0x182BE3B70")]
	public void InitializeInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, NativeArray<Matrix4x4> prevLocalToWorldMatrices, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x2BE7050", Offset = "0x2BE5650", VA = "0x182BE7050")]
	public void UpdateInstanceTransforms(NativeArray<InstanceHandle> instances, NativeArray<Matrix4x4> localToWorldMatrices, in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2BE5B10", Offset = "0x2BE4110", VA = "0x182BE5B10")]
	public void UpdateInstanceMotions(in RenderersParameters renderersParameters, GPUInstanceDataBuffer outputBuffer)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x2BE4800", Offset = "0x2BE2E00", VA = "0x182BE4800")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x2BE4DE0", Offset = "0x2BE33E0", VA = "0x182BE4DE0")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x2BE48C0", Offset = "0x2BE2EC0", VA = "0x182BE48C0")]
	public JobHandle ScheduleQueryRendererGroupInstancesJob(NativeArray<EntityId> rendererGroupIDs, NativeArray<int> instancesOffset, NativeArray<int> instancesCount, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x2BE4F70", Offset = "0x2BE3570", VA = "0x182BE4F70")]
	public JobHandle ScheduleQuerySortedMeshInstancesJob(NativeArray<EntityId> sortedMeshIDs, NativeList<InstanceHandle> instances)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x2BE4140", Offset = "0x2BE2740", VA = "0x182BE4140")]
	public JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(NativeArray<InstanceHandle> instances, NativeArray<uint> lodGroupAndMasks)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2BE3BE0", Offset = "0x2BE21E0", VA = "0x182BE3BE0")]
	public bool InternalSanityCheckStates()
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x2BE3390", Offset = "0x2BE1990", VA = "0x182BE3390")]
	public void GetVisibleTreeInstances(in ParallelBitArray compactedVisibilityMasks, in ParallelBitArray processedBits, NativeList<int> visibeTreeRendererIDs, NativeList<InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly, out int becomeVisibeTreeInstancesCount)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2BE7130", Offset = "0x2BE5730", VA = "0x182BE7130")]
	public void UpdatePerFrameInstanceVisibility(in ParallelBitArray compactedVisibilityMasks)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x2BE1B80", Offset = "0x2BE0180", VA = "0x182BE1B80")]
	public void DeallocatePerCameraInstanceData(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2BE1B50", Offset = "0x2BE0150", VA = "0x182BE1B50")]
	public void AllocatePerCameraInstanceData(NativeArray<EntityId> cameraIDs)
	{
	}
}
