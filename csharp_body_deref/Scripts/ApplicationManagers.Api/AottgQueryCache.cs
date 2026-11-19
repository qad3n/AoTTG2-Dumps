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

[Token(Token = "0x20009C1")]
public sealed class AottgQueryCache<TKey, TValue>
{
	[Token(Token = "0x20009C2")]
	private sealed class Entry
	{
		[Token(Token = "0x40030F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly List<Action<AottgQueryResult<TValue>>> Subscribers;

		[Token(Token = "0x40030F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x40030F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Error;

		[Token(Token = "0x40030FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x40030FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasSuccess;

		[Token(Token = "0x40030FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasFailure;

		[Token(Token = "0x40030FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool InFlight;

		[Token(Token = "0x6005A7D")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x40030F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<TKey, Action<AottgQueryFetchResult<TValue>>> _fetch;

	[Token(Token = "0x40030F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x40030F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly AottgQueryPolicy _policy;

	[Token(Token = "0x40030F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, Entry> _entries;

	[Token(Token = "0x6005A75")]
	public AottgQueryCache(Action<TKey, Action<AottgQueryFetchResult<TValue>>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] AottgQueryPolicy policy)
	{
	}

	[Token(Token = "0x6005A76")]
	public bool HasEntry(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A77")]
	public bool IsInFlight(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A78")]
	public void Clear()
	{
	}

	[Token(Token = "0x6005A79")]
	public void Clear(TKey key)
	{
	}

	[Token(Token = "0x6005A7A")]
	public void Get(TKey key, Action<AottgQueryResult<TValue>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005A7B")]
	private bool TryEmitFresh(Entry entry, DateTimeOffset now, Action<AottgQueryResult<TValue>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A7C")]
	private void Complete(TKey key, AottgQueryFetchResult<TValue> result)
	{
	}
}
