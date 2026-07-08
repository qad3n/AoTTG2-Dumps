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
