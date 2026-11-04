// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeTextDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000D3")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeTextDispose
{
	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe UnsafeText* m_TextData;

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x29B5BB0", Offset = "0x29B41B0", VA = "0x1829B5BB0")]
	public void Dispose()
	{
	}
}
