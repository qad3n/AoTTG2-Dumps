// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x2000799")]
public sealed class AottgPublicProfileCache
{
	[Token(Token = "0x200079A")]
	private sealed class Entry
	{
		[Token(Token = "0x40024C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly List<Action<AottgPublicProfileFetchResponse>> Subscribers;

		[Token(Token = "0x40024C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public AottgPublicProfileFetchResponse Response;

		[Token(Token = "0x40024C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x40024C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool InFlight;

		[Token(Token = "0x600496D")]
		[Address(RVA = "0x43C28D0", Offset = "0x43C28D0", VA = "0x43C28D0")]
		public bool HasFreshValue(DateTimeOffset now)
		{
			return default(bool);
		}

		[Token(Token = "0x600496E")]
		[Address(RVA = "0x43C2850", Offset = "0x43C2850", VA = "0x43C2850")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x40024C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan SuccessTtl;

	[Token(Token = "0x40024C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan FailureTtl;

	[Token(Token = "0x40024C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Action<string, Action<AottgPublicProfileFetchResponse>> _fetch;

	[Token(Token = "0x40024C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x40024C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Entry> _entries;

	[Token(Token = "0x6004968")]
	[Address(RVA = "0x43C2240", Offset = "0x43C2240", VA = "0x43C2240")]
	public AottgPublicProfileCache(Action<string, Action<AottgPublicProfileFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now)
	{
	}

	[Token(Token = "0x6004969")]
	[Address(RVA = "0x43C2420", Offset = "0x43C2420", VA = "0x43C2420")]
	public void Clear()
	{
	}

	[Token(Token = "0x600496A")]
	[Address(RVA = "0x43C2460", Offset = "0x43C2460", VA = "0x43C2460")]
	public void Get(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600496B")]
	[Address(RVA = "0x43C29D0", Offset = "0x43C29D0", VA = "0x43C29D0")]
	private void Complete(string accountId, AottgPublicProfileFetchResponse response)
	{
	}
}
