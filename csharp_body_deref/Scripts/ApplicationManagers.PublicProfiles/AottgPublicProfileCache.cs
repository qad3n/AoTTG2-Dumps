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

[Token(Token = "0x2000924")]
public sealed class AottgPublicProfileCache
{
	[Token(Token = "0x2000925")]
	private sealed class Entry
	{
		[Token(Token = "0x4002D93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly List<Action<AottgPublicProfileFetchResponse>> Subscribers;

		[Token(Token = "0x4002D94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public AottgPublicProfileFetchResponse Response;

		[Token(Token = "0x4002D95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x4002D96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool InFlight;

		[Token(Token = "0x60055E5")]
		[Address(RVA = "0x236B330", Offset = "0x2369930", VA = "0x18236B330")]
		public bool HasFreshValue(DateTimeOffset now)
		{
			return default(bool);
		}

		[Token(Token = "0x60055E6")]
		[Address(RVA = "0x236B470", Offset = "0x2369A70", VA = "0x18236B470")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x4002D8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan SuccessTtl;

	[Token(Token = "0x4002D8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan FailureTtl;

	[Token(Token = "0x4002D90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Action<string, Action<AottgPublicProfileFetchResponse>> _fetch;

	[Token(Token = "0x4002D91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4002D92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Entry> _entries;

	[Token(Token = "0x60055E0")]
	[Address(RVA = "0x2366850", Offset = "0x2364E50", VA = "0x182366850")]
	public AottgPublicProfileCache(Action<string, Action<AottgPublicProfileFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now)
	{
	}

	[Token(Token = "0x60055E1")]
	[Address(RVA = "0x2366170", Offset = "0x2364770", VA = "0x182366170")]
	public void Clear()
	{
	}

	[Token(Token = "0x60055E2")]
	[Address(RVA = "0x2366390", Offset = "0x2364990", VA = "0x182366390")]
	public void Get(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x60055E3")]
	[Address(RVA = "0x23661C0", Offset = "0x23647C0", VA = "0x1823661C0")]
	private void Complete(string accountId, AottgPublicProfileFetchResponse response)
	{
	}
}
