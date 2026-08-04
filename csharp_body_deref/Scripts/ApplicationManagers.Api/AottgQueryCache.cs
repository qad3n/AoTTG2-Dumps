// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007CD")]
public sealed class AottgQueryCache<TKey, TValue>
{
	[Token(Token = "0x20007CE")]
	private sealed class Entry
	{
		[Token(Token = "0x4002577")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly List<Action<AottgQueryResult<TValue>>> Subscribers;

		[Token(Token = "0x4002578")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x4002579")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Error;

		[Token(Token = "0x400257A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x400257B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasSuccess;

		[Token(Token = "0x400257C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasFailure;

		[Token(Token = "0x400257D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool InFlight;

		[Token(Token = "0x6004AAB")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x4002573")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<TKey, Action<AottgQueryFetchResult<TValue>>> _fetch;

	[Token(Token = "0x4002574")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4002575")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly AottgQueryPolicy _policy;

	[Token(Token = "0x4002576")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, Entry> _entries;

	[Token(Token = "0x6004AA3")]
	public AottgQueryCache(Action<TKey, Action<AottgQueryFetchResult<TValue>>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] AottgQueryPolicy policy)
	{
	}

	[Token(Token = "0x6004AA4")]
	public bool HasEntry(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6004AA5")]
	public bool IsInFlight(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6004AA6")]
	public void Clear()
	{
	}

	[Token(Token = "0x6004AA7")]
	public void Clear(TKey key)
	{
	}

	[Token(Token = "0x6004AA8")]
	public void Get(TKey key, Action<AottgQueryResult<TValue>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004AA9")]
	private bool TryEmitFresh(Entry entry, DateTimeOffset now, Action<AottgQueryResult<TValue>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6004AAA")]
	private void Complete(TKey key, AottgQueryFetchResult<TValue> result)
	{
	}
}
