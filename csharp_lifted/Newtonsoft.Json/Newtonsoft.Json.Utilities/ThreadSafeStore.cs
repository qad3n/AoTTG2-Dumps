// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.ThreadSafeStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000F4")]
internal class ThreadSafeStore<TKey, TValue> where TKey : notnull where TValue : notnull
{
	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConcurrentDictionary<TKey, TValue> _concurrentStore;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<TKey, TValue> _creator;

	[Token(Token = "0x600071E")]
	public ThreadSafeStore(Func<TKey, TValue> creator)
	{
	}

	[Token(Token = "0x600071F")]
	public TValue Get(TKey key)
	{
		return (TValue)null;
	}
}
