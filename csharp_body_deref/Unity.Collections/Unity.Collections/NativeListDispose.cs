// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeListDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x200009A")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeListDispose
{
	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe UntypedUnsafeList* m_ListData;

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x29B5690", Offset = "0x29B3C90", VA = "0x1829B5690")]
	public void Dispose()
	{
	}
}
