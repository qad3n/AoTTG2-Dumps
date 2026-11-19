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

[Token(Token = "0x2000995")]
public sealed class AottgCreditsCache
{
	[Token(Token = "0x400305D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan DefaultTtl;

	[Token(Token = "0x400305E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly TimeSpan _ttl;

	[Token(Token = "0x400305F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4003060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Action<Action<AottgCreditsFetchResponse>> _fetch;

	[Token(Token = "0x4003061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Action<AottgCreditsResult>> _subscribers;

	[Token(Token = "0x4003062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgCreditsResponse _cachedCredits;

	[Token(Token = "0x4003063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private DateTimeOffset _cachedAt;

	[Token(Token = "0x4003064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _inFlight;

	[Token(Token = "0x17000F5D")]
	public bool HasCache
	{
		[Token(Token = "0x6005975")]
		[Address(RVA = "0x5D21A10", Offset = "0x5D20A10", VA = "0x5D21A10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F5E")]
	public bool IsInFlight
	{
		[Token(Token = "0x6005976")]
		[Address(RVA = "0x5D21A20", Offset = "0x5D20A20", VA = "0x5D21A20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005974")]
	[Address(RVA = "0x5D217D0", Offset = "0x5D207D0", VA = "0x5D217D0")]
	public AottgCreditsCache(Action<Action<AottgCreditsFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] TimeSpan? ttl)
	{
	}

	[Token(Token = "0x6005977")]
	[Address(RVA = "0x5D21A30", Offset = "0x5D20A30", VA = "0x5D21A30")]
	public void Clear()
	{
	}

	[Token(Token = "0x6005978")]
	[Address(RVA = "0x5D21AA0", Offset = "0x5D20AA0", VA = "0x5D21AA0")]
	public void Get(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005979")]
	[Address(RVA = "0x5D21D30", Offset = "0x5D20D30", VA = "0x5D21D30")]
	private bool IsFresh()
	{
		return default(bool);
	}

	[Token(Token = "0x600597A")]
	[Address(RVA = "0x5D21F90", Offset = "0x5D20F90", VA = "0x5D21F90")]
	private void CompleteFetch(AottgCreditsFetchResponse response)
	{
	}
}
