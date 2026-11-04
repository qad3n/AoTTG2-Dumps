// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ReceiverPlanes
// Update status: NEW in this game update
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
	[Address(RVA = "0x2BCFEA0", Offset = "0x2BCE4A0", VA = "0x182BCFEA0")]
	private static bool IsSignBitSet(float x)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2BCFEB0", Offset = "0x2BCE4B0", VA = "0x182BCFEB0")]
	internal NativeArray<Plane> LightFacingFrustumPlaneSubArray()
	{
		return default(NativeArray<Plane>);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2BCFF50", Offset = "0x2BCE550", VA = "0x182BCFF50")]
	internal NativeArray<Plane> SilhouettePlaneSubArray()
	{
		return default(NativeArray<Plane>);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2BCF300", Offset = "0x2BCD900", VA = "0x182BCF300")]
	internal static ReceiverPlanes CreateEmptyForTesting(Allocator allocator)
	{
		return default(ReceiverPlanes);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2BCFE30", Offset = "0x2BCE430", VA = "0x182BCFE30")]
	internal JobHandle Dispose(JobHandle job)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2BCF370", Offset = "0x2BCD970", VA = "0x182BCF370")]
	internal static ReceiverPlanes Create(in BatchCullingContext cc, Allocator allocator)
	{
		return default(ReceiverPlanes);
	}
}
