// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ReceiverSphereCuller
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000018")]
internal struct ReceiverSphereCuller
{
	[Token(Token = "0x2000019")]
	internal struct SplitInfo
	{
		[Token(Token = "0x4000045")]
		[FieldOffset(Offset = "0x0")]
		public float4 receiverSphereLightSpace;

		[Token(Token = "0x4000046")]
		[FieldOffset(Offset = "0x10")]
		public float cascadeBlendCullingFactor;
	}

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x0")]
	public NativeList<SplitInfo> splitInfos;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x8")]
	public float3x3 worldToLightSpaceRotation;

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2BD04B0", Offset = "0x2BCEAB0", VA = "0x182BD04B0")]
	internal static ReceiverSphereCuller CreateEmptyForTesting(Allocator allocator)
	{
		return default(ReceiverSphereCuller);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2BD0AB0", Offset = "0x2BCF0B0", VA = "0x182BD0AB0")]
	internal JobHandle Dispose(JobHandle job)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2BD0C80", Offset = "0x2BCF280", VA = "0x182BD0C80")]
	internal bool UseReceiverPlanes()
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2BD0560", Offset = "0x2BCEB60", VA = "0x182BD0560")]
	internal static ReceiverSphereCuller Create(in BatchCullingContext cc, Allocator allocator)
	{
		return default(ReceiverSphereCuller);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2BD0B20", Offset = "0x2BCF120", VA = "0x182BD0B20")]
	internal static float DistanceUntilCylinderFullyCrossesPlane(float3 cylinderCenter, float3 cylinderDirection, float cylinderRadius, Plane plane)
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2BD0020", Offset = "0x2BCE620", VA = "0x182BD0020")]
	internal static uint ComputeSplitVisibilityMask(NativeArray<Plane> lightFacingFrustumPlanes, NativeArray<SplitInfo> splitInfos, float3x3 worldToLightSpaceRotation, in AABB bounds)
	{
		return default(uint);
	}
}
