// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Buffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000042")]
internal struct Buffer<TElement>
{
	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x0")]
	internal TElement[] items;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	internal int count;

	[Token(Token = "0x60001A6")]
	internal Buffer(IEnumerable<TElement> source)
	{
	}

	[Token(Token = "0x60001A7")]
	internal TElement[] ToArray()
	{
		return null;
	}
}
