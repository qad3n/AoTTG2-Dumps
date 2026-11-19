// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FrustumPlaneCuller
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

[Token(Token = "0x2000015")]
internal struct FrustumPlaneCuller
{
	[Token(Token = "0x2000016")]
	internal struct PlanePacket4
	{
		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x0")]
		public float4 nx;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x10")]
		public float4 ny;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x20")]
		public float4 nz;

		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x30")]
		public float4 d;

		[Token(Token = "0x400003F")]
		[FieldOffset(Offset = "0x40")]
		public float4 nxAbs;

		[Token(Token = "0x4000040")]
		[FieldOffset(Offset = "0x50")]
		public float4 nyAbs;

		[Token(Token = "0x4000041")]
		[FieldOffset(Offset = "0x60")]
		public float4 nzAbs;

		[Token(Token = "0x600008E")]
		[Address(RVA = "0x65B9460", Offset = "0x65B8460", VA = "0x65B9460")]
		public PlanePacket4(NativeArray<Plane> planes, int offset, int limit)
		{
		}
	}

	[Token(Token = "0x2000017")]
	internal struct SplitInfo
	{
		[Token(Token = "0x4000042")]
		[FieldOffset(Offset = "0x0")]
		public int packetCount;
	}

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x0")]
	public NativeList<PlanePacket4> planePackets;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x8")]
	public NativeList<SplitInfo> splitInfos;

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x65B8BC0", Offset = "0x65B7BC0", VA = "0x65B8BC0")]
	internal JobHandle Dispose(JobHandle job)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x65B8C50", Offset = "0x65B7C50", VA = "0x65B8C50")]
	internal static FrustumPlaneCuller Create(in BatchCullingContext cc, NativeArray<Plane> receiverPlanes, in ReceiverSphereCuller receiverSphereCuller, Allocator allocator)
	{
		return default(FrustumPlaneCuller);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x65B95C0", Offset = "0x65B85C0", VA = "0x65B95C0")]
	internal static uint ComputeSplitVisibilityMask(NativeArray<PlanePacket4> planePackets, NativeArray<SplitInfo> splitInfos, in AABB bounds)
	{
		return default(uint);
	}
}
