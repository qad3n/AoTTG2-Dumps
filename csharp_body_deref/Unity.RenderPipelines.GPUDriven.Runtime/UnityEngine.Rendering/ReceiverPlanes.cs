// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ReceiverPlanes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000014")]
internal struct ReceiverPlanes
{
	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x0")]
	public NativeList<Plane> planes;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x8")]
	public int lightFacingPlaneCount;

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x65B7CC0", Offset = "0x65B6CC0", VA = "0x65B7CC0")]
	private static bool IsSignBitSet(float x)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x65B7CD0", Offset = "0x65B6CD0", VA = "0x65B7CD0")]
	internal NativeArray<Plane> LightFacingFrustumPlaneSubArray()
	{
		return default(NativeArray<Plane>);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x65B7D40", Offset = "0x65B6D40", VA = "0x65B7D40")]
	internal NativeArray<Plane> SilhouettePlaneSubArray()
	{
		return default(NativeArray<Plane>);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x65B7DF0", Offset = "0x65B6DF0", VA = "0x65B7DF0")]
	internal static ReceiverPlanes CreateEmptyForTesting(Allocator allocator)
	{
		return default(ReceiverPlanes);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x65B7E50", Offset = "0x65B6E50", VA = "0x65B7E50")]
	internal JobHandle Dispose(JobHandle job)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x65B7EA0", Offset = "0x65B6EA0", VA = "0x65B7EA0")]
	internal static ReceiverPlanes Create(in BatchCullingContext cc, Allocator allocator)
	{
		return default(ReceiverPlanes);
	}
}
