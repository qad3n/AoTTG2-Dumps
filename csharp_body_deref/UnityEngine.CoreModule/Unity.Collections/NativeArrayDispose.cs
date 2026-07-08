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
	[Address(RVA = "0x4A85DF0", Offset = "0x4A85DF0", VA = "0x4A85DF0")]
	public void Dispose()
	{
	}
}
