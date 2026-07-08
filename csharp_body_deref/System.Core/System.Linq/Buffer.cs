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
