using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D5")]
public static class HashSetPool<T>
{
	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Stack<HashSet<T>> free;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<HashSet<T>> busy;

	[Token(Token = "0x600050F")]
	public static HashSet<T> New()
	{
		return null;
	}

	[Token(Token = "0x6000510")]
	public static void Free(HashSet<T> hashSet)
	{
	}
}
