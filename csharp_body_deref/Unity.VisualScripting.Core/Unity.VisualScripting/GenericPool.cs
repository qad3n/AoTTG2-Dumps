using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D4")]
public static class GenericPool<T> where T : class, IPoolable
{
	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Stack<T> free;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T> busy;

	[Token(Token = "0x600050C")]
	public static T New(Func<T> constructor)
	{
		return null;
	}

	[Token(Token = "0x600050D")]
	public static void Free(T item)
	{
	}
}
