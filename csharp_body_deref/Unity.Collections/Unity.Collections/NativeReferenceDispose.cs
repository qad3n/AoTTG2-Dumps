// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeReferenceDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000BB")]
[NativeContainer]
internal struct NativeReferenceDispose
{
	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe void* m_Data;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x8")]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x29B5720", Offset = "0x29B3D20", VA = "0x1829B5720")]
	public void Dispose()
	{
	}
}
