using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x200076B")]
public sealed class AottgQueryCache<TKey, TValue>
{
	[Token(Token = "0x200076C")]
	private sealed class Entry
	{
		[Token(Token = "0x40023D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly List<Action<AottgQueryResult<TValue>>> Subscribers;

		[Token(Token = "0x40023DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x40023DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Error;

		[Token(Token = "0x40023DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x40023DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasSuccess;

		[Token(Token = "0x40023DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasFailure;

		[Token(Token = "0x40023DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool InFlight;

		[Token(Token = "0x60047B8")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x40023D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<TKey, Action<AottgQueryFetchResult<TValue>>> _fetch;

	[Token(Token = "0x40023D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x40023D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly AottgQueryPolicy _policy;

	[Token(Token = "0x40023D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, Entry> _entries;

	[Token(Token = "0x60047B0")]
	public AottgQueryCache(Action<TKey, Action<AottgQueryFetchResult<TValue>>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] AottgQueryPolicy policy)
	{
	}

	[Token(Token = "0x60047B1")]
	public bool HasEntry(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60047B2")]
	public bool IsInFlight(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60047B3")]
	public void Clear()
	{
	}

	[Token(Token = "0x60047B4")]
	public void Clear(TKey key)
	{
	}

	[Token(Token = "0x60047B5")]
	public void Get(TKey key, Action<AottgQueryResult<TValue>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60047B6")]
	private bool TryEmitFresh(Entry entry, DateTimeOffset now, Action<AottgQueryResult<TValue>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x60047B7")]
	private void Complete(TKey key, AottgQueryFetchResult<TValue> result)
	{
	}
}
