// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeArrayDispose
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x2000049")]
[NativeContainer]
internal struct NativeArrayDispose
{
	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe void* m_Buffer;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x8")]
	internal Allocator m_AllocatorLabel;

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4DAD610", Offset = "0x4DAD610", VA = "0x4DAD610")]
	public void Dispose()
	{
	}
}
