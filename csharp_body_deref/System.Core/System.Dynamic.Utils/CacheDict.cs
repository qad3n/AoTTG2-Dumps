// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.Utils.CacheDict
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x200027D")]
internal sealed class CacheDict<TKey, TValue>
{
	[Token(Token = "0x200027E")]
	private sealed class Entry
	{
		[Token(Token = "0x400049B")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _hash;

		[Token(Token = "0x400049C")]
		[FieldOffset(Offset = "0x0")]
		internal readonly TKey _key;

		[Token(Token = "0x400049D")]
		[FieldOffset(Offset = "0x0")]
		internal readonly TValue _value;

		[Token(Token = "0x6000C8A")]
		internal Entry(int hash, TKey key, TValue value)
		{
		}
	}

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _mask;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x0")]
	private readonly Entry[] _entries;

	[Token(Token = "0x1700028B")]
	internal TKey this[TKey key]
	{
		[Token(Token = "0x6000C89")]
		set
		{
		}
	}

	[Token(Token = "0x6000C85")]
	internal CacheDict(int size)
	{
	}

	[Token(Token = "0x6000C86")]
	private static int AlignSize(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000C87")]
	internal bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C88")]
	internal void Add(TKey key, TValue value)
	{
	}
}
