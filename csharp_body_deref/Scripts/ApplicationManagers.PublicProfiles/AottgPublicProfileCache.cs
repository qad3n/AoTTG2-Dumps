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

[Token(Token = "0x200098B")]
public sealed class AottgPublicProfileCache
{
	[Token(Token = "0x200098C")]
	private sealed class Entry
	{
		[Token(Token = "0x4003041")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly List<Action<AottgPublicProfileFetchResponse>> Subscribers;

		[Token(Token = "0x4003042")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public AottgPublicProfileFetchResponse Response;

		[Token(Token = "0x4003043")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x4003044")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool InFlight;

		[Token(Token = "0x600593E")]
		[Address(RVA = "0x5D1F6D0", Offset = "0x5D1E6D0", VA = "0x5D1F6D0")]
		public bool HasFreshValue(DateTimeOffset now)
		{
			return default(bool);
		}

		[Token(Token = "0x600593F")]
		[Address(RVA = "0x5D1F650", Offset = "0x5D1E650", VA = "0x5D1F650")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x400303C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan SuccessTtl;

	[Token(Token = "0x400303D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan FailureTtl;

	[Token(Token = "0x400303E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Action<string, Action<AottgPublicProfileFetchResponse>> _fetch;

	[Token(Token = "0x400303F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4003040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Entry> _entries;

	[Token(Token = "0x6005939")]
	[Address(RVA = "0x5D1F050", Offset = "0x5D1E050", VA = "0x5D1F050")]
	public AottgPublicProfileCache(Action<string, Action<AottgPublicProfileFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now)
	{
	}

	[Token(Token = "0x600593A")]
	[Address(RVA = "0x5D1F230", Offset = "0x5D1E230", VA = "0x5D1F230")]
	public void Clear()
	{
	}

	[Token(Token = "0x600593B")]
	[Address(RVA = "0x5D1F270", Offset = "0x5D1E270", VA = "0x5D1F270")]
	public void Get(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600593C")]
	[Address(RVA = "0x5D1F7E0", Offset = "0x5D1E7E0", VA = "0x5D1F7E0")]
	private void Complete(string accountId, AottgPublicProfileFetchResponse response)
	{
	}
}
