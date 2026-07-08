using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DA")]
public static class ManualPool<T> where T : class
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Stack<T> free;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T> busy;

	[Token(Token = "0x600051B")]
	public static T New(Func<T> constructor)
	{
		return null;
	}

	[Token(Token = "0x600051C")]
	public static void Free(T item)
	{
	}
}
