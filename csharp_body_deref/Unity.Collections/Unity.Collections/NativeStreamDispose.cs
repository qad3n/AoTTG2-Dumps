// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeStreamDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000CE")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeStreamDispose
{
	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x0")]
	public UnsafeStream m_StreamData;

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x29B5850", Offset = "0x29B3E50", VA = "0x1829B5850")]
	public void Dispose()
	{
	}
}
