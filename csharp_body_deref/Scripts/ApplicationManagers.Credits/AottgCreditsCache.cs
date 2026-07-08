using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000754")]
public sealed class AottgCreditsCache
{
	[Token(Token = "0x4002382")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan DefaultTtl;

	[Token(Token = "0x4002383")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly TimeSpan _ttl;

	[Token(Token = "0x4002384")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4002385")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Action<Action<AottgCreditsFetchResponse>> _fetch;

	[Token(Token = "0x4002386")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Action<AottgCreditsResult>> _subscribers;

	[Token(Token = "0x4002387")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgCreditsResponse _cachedCredits;

	[Token(Token = "0x4002388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private DateTimeOffset _cachedAt;

	[Token(Token = "0x4002389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _inFlight;

	[Token(Token = "0x17000D9F")]
	public bool HasCache
	{
		[Token(Token = "0x6004735")]
		[Address(RVA = "0x40AC490", Offset = "0x40AC490", VA = "0x40AC490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DA0")]
	public bool IsInFlight
	{
		[Token(Token = "0x6004736")]
		[Address(RVA = "0x40AC4A0", Offset = "0x40AC4A0", VA = "0x40AC4A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004734")]
	[Address(RVA = "0x40AC250", Offset = "0x40AC250", VA = "0x40AC250")]
	public AottgCreditsCache(Action<Action<AottgCreditsFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] TimeSpan? ttl)
	{
	}

	[Token(Token = "0x6004737")]
	[Address(RVA = "0x40AC4B0", Offset = "0x40AC4B0", VA = "0x40AC4B0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6004738")]
	[Address(RVA = "0x40AC520", Offset = "0x40AC520", VA = "0x40AC520")]
	public void Get(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004739")]
	[Address(RVA = "0x40AC7D0", Offset = "0x40AC7D0", VA = "0x40AC7D0")]
	private bool IsFresh()
	{
		return default(bool);
	}

	[Token(Token = "0x600473A")]
	[Address(RVA = "0x40ACA30", Offset = "0x40ACA30", VA = "0x40ACA30")]
	private void CompleteFetch(AottgCreditsFetchResponse response)
	{
	}
}
