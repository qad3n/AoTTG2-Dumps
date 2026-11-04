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

[Token(Token = "0x200095A")]
public sealed class AottgQueryCache<TKey, TValue>
{
	[Token(Token = "0x200095B")]
	private sealed class Entry
	{
		[Token(Token = "0x4002E49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly List<Action<AottgQueryResult<TValue>>> Subscribers;

		[Token(Token = "0x4002E4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x4002E4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Error;

		[Token(Token = "0x4002E4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x4002E4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasSuccess;

		[Token(Token = "0x4002E4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasFailure;

		[Token(Token = "0x4002E4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool InFlight;

		[Token(Token = "0x6005724")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x4002E45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<TKey, Action<AottgQueryFetchResult<TValue>>> _fetch;

	[Token(Token = "0x4002E46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4002E47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly AottgQueryPolicy _policy;

	[Token(Token = "0x4002E48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, Entry> _entries;

	[Token(Token = "0x600571C")]
	public AottgQueryCache(Action<TKey, Action<AottgQueryFetchResult<TValue>>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] AottgQueryPolicy policy)
	{
	}

	[Token(Token = "0x600571D")]
	public bool HasEntry(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600571E")]
	public bool IsInFlight(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600571F")]
	public void Clear()
	{
	}

	[Token(Token = "0x6005720")]
	public void Clear(TKey key)
	{
	}

	[Token(Token = "0x6005721")]
	public void Get(TKey key, Action<AottgQueryResult<TValue>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005722")]
	private bool TryEmitFresh(Entry entry, DateTimeOffset now, Action<AottgQueryResult<TValue>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6005723")]
	private void Complete(TKey key, AottgQueryFetchResult<TValue> result)
	{
	}
}
