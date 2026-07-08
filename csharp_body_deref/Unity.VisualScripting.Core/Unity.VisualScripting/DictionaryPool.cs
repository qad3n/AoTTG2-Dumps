using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D3")]
public static class DictionaryPool<TKey, TValue>
{
	[Token(Token = "0x400013E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x400013F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Stack<Dictionary<TKey, TValue>> free;

	[Token(Token = "0x4000140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<Dictionary<TKey, TValue>> busy;

	[Token(Token = "0x6000509")]
	public static Dictionary<TKey, TValue> New([Optional] Dictionary<TKey, TValue> source)
	{
		return null;
	}

	[Token(Token = "0x600050A")]
	public static void Free(Dictionary<TKey, TValue> dictionary)
	{
	}
}
