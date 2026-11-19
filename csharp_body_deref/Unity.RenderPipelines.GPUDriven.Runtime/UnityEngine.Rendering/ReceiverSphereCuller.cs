// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ReceiverSphereCuller
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x65B9930", Offset = "0x65B8930", VA = "0x65B9930")]
	internal static ReceiverSphereCuller CreateEmptyForTesting(Allocator allocator)
	{
		return default(ReceiverSphereCuller);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x65B99D0", Offset = "0x65B89D0", VA = "0x65B99D0")]
	internal JobHandle Dispose(JobHandle job)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x65B9410", Offset = "0x65B8410", VA = "0x65B9410")]
	internal bool UseReceiverPlanes()
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x65B9A20", Offset = "0x65B8A20", VA = "0x65B9A20")]
	internal static ReceiverSphereCuller Create(in BatchCullingContext cc, Allocator allocator)
	{
		return default(ReceiverSphereCuller);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x65B9F90", Offset = "0x65B8F90", VA = "0x65B9F90")]
	internal static float DistanceUntilCylinderFullyCrossesPlane(float3 cylinderCenter, float3 cylinderDirection, float cylinderRadius, Plane plane)
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x65BA150", Offset = "0x65B9150", VA = "0x65BA150")]
	internal static uint ComputeSplitVisibilityMask(NativeArray<Plane> lightFacingFrustumPlanes, NativeArray<SplitInfo> splitInfos, float3x3 worldToLightSpaceRotation, in AABB bounds)
	{
		return default(uint);
	}
}
