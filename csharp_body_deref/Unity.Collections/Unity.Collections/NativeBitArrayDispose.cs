// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeBitArrayDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x2000089")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeBitArrayDispose
{
	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe UnsafeBitArray* m_BitArrayData;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x8")]
	public AllocatorManager.AllocatorHandle m_Allocator;

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x29B4DA0", Offset = "0x29B33A0", VA = "0x1829B4DA0")]
	public void Dispose()
	{
	}
}
