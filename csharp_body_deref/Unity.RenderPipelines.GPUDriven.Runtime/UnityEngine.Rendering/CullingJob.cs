// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingJob
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

[Token(Token = "0x200003E")]
[BurstCompile]
internal struct CullingJob : IJobParallelFor
{
	[Token(Token = "0x200003F")]
	private enum CrossFadeType
	{
		[Token(Token = "0x40000FE")]
		kDisabled,
		[Token(Token = "0x40000FF")]
		kCrossFadeOut,
		[Token(Token = "0x4000100")]
		kCrossFadeIn,
		[Token(Token = "0x4000101")]
		kVisible
	}

	[Token(Token = "0x40000DA")]
	public const int k_BatchSize = 32;

	[Token(Token = "0x40000DB")]
	public const uint k_MeshLodCrossfadeActive = 64u;

	[Token(Token = "0x40000DC")]
	public const uint k_MeshLodCrossfadeSignBit = 128u;

	[Token(Token = "0x40000DD")]
	public const uint k_MeshLodCrossfadeBits = 192u;

	[Token(Token = "0x40000DE")]
	public const uint k_LODFadeOff = 255u;

	[Token(Token = "0x40000DF")]
	public const uint k_LODFadeZeroPacked = 127u;

	[Token(Token = "0x40000E0")]
	public const uint k_LODFadeIsSpeedTree = 256u;

	[Token(Token = "0x40000E1")]
	private const uint k_InvalidCrossFadeAndLevel = 4294967295u;

	[Token(Token = "0x40000E2")]
	private const uint k_VisibilityMaskNotVisible = 0u;

	[Token(Token = "0x40000E3")]
	private const float k_SmallMeshTransitionWidth = 0.1f;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public BinningConfig binningConfig;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x8")]
	[ReadOnly]
	public BatchCullingViewType viewType;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0xC")]
	[ReadOnly]
	public float3 cameraPosition;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x18")]
	[ReadOnly]
	public float sqrMeshLodSelectionConstant;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x1C")]
	[ReadOnly]
	public float sqrScreenRelativeMetric;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x20")]
	[ReadOnly]
	public float minScreenRelativeHeight;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x24")]
	[ReadOnly]
	public bool isOrtho;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x25")]
	[ReadOnly]
	public bool cullLightmappedShadowCasters;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x28")]
	[ReadOnly]
	public int maxLOD;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x2C")]
	[ReadOnly]
	public uint cullingLayerMask;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x30")]
	[ReadOnly]
	public ulong sceneCullingMask;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x38")]
	[ReadOnly]
	public bool animateCrossFades;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x40")]
	[ReadOnly]
	public NativeArray<FrustumPlaneCuller.PlanePacket4> frustumPlanePackets;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x50")]
	[ReadOnly]
	public NativeArray<FrustumPlaneCuller.SplitInfo> frustumSplitInfos;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x60")]
	[ReadOnly]
	public NativeArray<Plane> lightFacingFrustumPlanes;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x70")]
	[ReadOnly]
	public NativeArray<ReceiverSphereCuller.SplitInfo> receiverSplitInfos;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x80")]
	public float3x3 worldToLightSpaceRotation;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0xA8")]
	[ReadOnly]
	public CPUInstanceData.ReadOnly instanceData;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x190")]
	[ReadOnly]
	public CPUSharedInstanceData.ReadOnly sharedInstanceData;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x240")]
	[NativeDisableContainerSafetyRestriction]
	[NoAlias]
	[ReadOnly]
	public NativeList<LODGroupCullingData> lodGroupCullingData;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x248")]
	[NativeDisableUnsafePtrRestriction]
	[ReadOnly]
	public IntPtr occlusionBuffer;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x250")]
	[NativeDisableContainerSafetyRestriction]
	public CPUPerCameraInstanceData.PerCameraInstanceDataArrays cameraInstanceData;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x280")]
	[NativeDisableParallelForRestriction]
	[WriteOnly]
	public NativeArray<byte> rendererVisibilityMasks;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x290")]
	[NativeDisableParallelForRestriction]
	[WriteOnly]
	public NativeArray<byte> rendererMeshLodSettings;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x2A0")]
	[NativeDisableParallelForRestriction]
	[WriteOnly]
	public NativeArray<byte> rendererCrossFadeValues;

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x2BBDE90", Offset = "0x2BBC490", VA = "0x182BBDE90")]
	private static uint PackFloatToUint8(float percent)
	{
		return default(uint);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x2BBCFF0", Offset = "0x2BBB5F0", VA = "0x182BBCFF0")]
	private uint CalculateLODVisibility(int instanceIndex, int sharedInstanceIndex, InstanceFlags instanceFlags)
	{
		return default(uint);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2BBD490", Offset = "0x2BBBA90", VA = "0x182BBD490")]
	private uint CalculateVisibilityMask(int instanceIndex, int sharedInstanceIndex, InstanceFlags instanceFlags)
	{
		return default(uint);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2BBD850", Offset = "0x2BBBE50", VA = "0x182BBD850")]
	private uint ComputeMeshLODLevel(int instanceIndex, int sharedInstanceIndex)
	{
		return default(uint);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x2BBD730", Offset = "0x2BBBD30", VA = "0x182BBD730")]
	private uint ComputeMeshLODCrossfade(int instanceIndex, ref uint meshLodLevel)
	{
		return default(uint);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x2BBDBD0", Offset = "0x2BBC1D0", VA = "0x182BBDBD0")]
	private void EnforcePreviousFrameMeshLOD(int instanceIndex, ref uint meshLodLevel)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2BBDC30", Offset = "0x2BBC230", VA = "0x182BBDC30", Slot = "4")]
	public void Execute(int instanceIndex)
	{
	}
}
