using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x200074A")]
public sealed class AottgPublicProfileCache
{
	[Token(Token = "0x200074B")]
	private sealed class Entry
	{
		[Token(Token = "0x4002366")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly List<Action<AottgPublicProfileFetchResponse>> Subscribers;

		[Token(Token = "0x4002367")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public AottgPublicProfileFetchResponse Response;

		[Token(Token = "0x4002368")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x4002369")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool InFlight;

		[Token(Token = "0x60046FE")]
		[Address(RVA = "0x40A98D0", Offset = "0x40A98D0", VA = "0x40A98D0")]
		public bool HasFreshValue(DateTimeOffset now)
		{
			return default(bool);
		}

		[Token(Token = "0x60046FF")]
		[Address(RVA = "0x40A9850", Offset = "0x40A9850", VA = "0x40A9850")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x4002361")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan SuccessTtl;

	[Token(Token = "0x4002362")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan FailureTtl;

	[Token(Token = "0x4002363")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Action<string, Action<AottgPublicProfileFetchResponse>> _fetch;

	[Token(Token = "0x4002364")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4002365")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Entry> _entries;

	[Token(Token = "0x60046F9")]
	[Address(RVA = "0x40A9240", Offset = "0x40A9240", VA = "0x40A9240")]
	public AottgPublicProfileCache(Action<string, Action<AottgPublicProfileFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now)
	{
	}

	[Token(Token = "0x60046FA")]
	[Address(RVA = "0x40A9420", Offset = "0x40A9420", VA = "0x40A9420")]
	public void Clear()
	{
	}

	[Token(Token = "0x60046FB")]
	[Address(RVA = "0x40A9460", Offset = "0x40A9460", VA = "0x40A9460")]
	public void Get(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x60046FC")]
	[Address(RVA = "0x40A99D0", Offset = "0x40A99D0", VA = "0x40A99D0")]
	private void Complete(string accountId, AottgPublicProfileFetchResponse response)
	{
	}
}
