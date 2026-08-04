// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x20007A3")]
public sealed class AottgCreditsCache
{
	[Token(Token = "0x40024E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan DefaultTtl;

	[Token(Token = "0x40024E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly TimeSpan _ttl;

	[Token(Token = "0x40024E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x40024E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Action<Action<AottgCreditsFetchResponse>> _fetch;

	[Token(Token = "0x40024E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Action<AottgCreditsResult>> _subscribers;

	[Token(Token = "0x40024E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgCreditsResponse _cachedCredits;

	[Token(Token = "0x40024E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private DateTimeOffset _cachedAt;

	[Token(Token = "0x40024E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _inFlight;

	[Token(Token = "0x17000E1B")]
	public bool HasCache
	{
		[Token(Token = "0x60049A4")]
		[Address(RVA = "0x43C53C0", Offset = "0x43C53C0", VA = "0x43C53C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E1C")]
	public bool IsInFlight
	{
		[Token(Token = "0x60049A5")]
		[Address(RVA = "0x43C53D0", Offset = "0x43C53D0", VA = "0x43C53D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60049A3")]
	[Address(RVA = "0x43C5180", Offset = "0x43C5180", VA = "0x43C5180")]
	public AottgCreditsCache(Action<Action<AottgCreditsFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] TimeSpan? ttl)
	{
	}

	[Token(Token = "0x60049A6")]
	[Address(RVA = "0x43C53E0", Offset = "0x43C53E0", VA = "0x43C53E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60049A7")]
	[Address(RVA = "0x43C5450", Offset = "0x43C5450", VA = "0x43C5450")]
	public void Get(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60049A8")]
	[Address(RVA = "0x43C5700", Offset = "0x43C5700", VA = "0x43C5700")]
	private bool IsFresh()
	{
		return default(bool);
	}

	[Token(Token = "0x60049A9")]
	[Address(RVA = "0x43C5960", Offset = "0x43C5960", VA = "0x43C5960")]
	private void CompleteFetch(AottgCreditsFetchResponse response)
	{
	}
}
