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

[Token(Token = "0x200092E")]
public sealed class AottgCreditsCache
{
	[Token(Token = "0x4002DAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan DefaultTtl;

	[Token(Token = "0x4002DB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly TimeSpan _ttl;

	[Token(Token = "0x4002DB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4002DB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Action<Action<AottgCreditsFetchResponse>> _fetch;

	[Token(Token = "0x4002DB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Action<AottgCreditsResult>> _subscribers;

	[Token(Token = "0x4002DB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgCreditsResponse _cachedCredits;

	[Token(Token = "0x4002DB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private DateTimeOffset _cachedAt;

	[Token(Token = "0x4002DB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _inFlight;

	[Token(Token = "0x17000F7E")]
	public bool HasCache
	{
		[Token(Token = "0x600561C")]
		[Address(RVA = "0x1A1E5D0", Offset = "0x1A1CBD0", VA = "0x181A1E5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F7F")]
	public bool IsInFlight
	{
		[Token(Token = "0x600561D")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600561B")]
	[Address(RVA = "0x2363FC0", Offset = "0x23625C0", VA = "0x182363FC0")]
	public AottgCreditsCache(Action<Action<AottgCreditsFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] TimeSpan? ttl)
	{
	}

	[Token(Token = "0x600561E")]
	[Address(RVA = "0x2363A00", Offset = "0x2362000", VA = "0x182363A00")]
	public void Clear()
	{
	}

	[Token(Token = "0x600561F")]
	[Address(RVA = "0x2363C10", Offset = "0x2362210", VA = "0x182363C10")]
	public void Get(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005620")]
	[Address(RVA = "0x2363E60", Offset = "0x2362460", VA = "0x182363E60")]
	private bool IsFresh()
	{
		return default(bool);
	}

	[Token(Token = "0x6005621")]
	[Address(RVA = "0x2363A80", Offset = "0x2362080", VA = "0x182363A80")]
	private void CompleteFetch(AottgCreditsFetchResponse response)
	{
	}
}
