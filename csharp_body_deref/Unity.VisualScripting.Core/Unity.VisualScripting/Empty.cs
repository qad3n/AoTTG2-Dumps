using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001A3")]
public static class Empty<T>
{
	[Token(Token = "0x40008E5")]
	[FieldOffset(Offset = "0x0")]
	public static readonly T[] array;

	[Token(Token = "0x40008E6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly List<T> list;

	[Token(Token = "0x40008E7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly HashSet<T> hashSet;
}
