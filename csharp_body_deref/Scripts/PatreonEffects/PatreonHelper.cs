using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace PatreonEffects;

[Token(Token = "0x20000F7")]
public static class PatreonHelper
{
	[Token(Token = "0x40005E9")]
	private const string Tier2Id = "28767500";

	[Token(Token = "0x40005EA")]
	private const string Tier3Id = "28767505";

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x3F3A990", Offset = "0x3F3A990", VA = "0x3F3A990")]
	private static bool HasTier(string[] tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x3F3AA30", Offset = "0x3F3AA30", VA = "0x3F3AA30")]
	private static bool HasTier(IEnumerable tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x3F3AE70", Offset = "0x3F3AE70", VA = "0x3F3AE70")]
	private static bool TryGetRemoteBool(Player player, string key, out bool value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x3F3AEC0", Offset = "0x3F3AEC0", VA = "0x3F3AEC0")]
	private static bool TryGetRemoteString(Player player, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x3F3AF50", Offset = "0x3F3AF50", VA = "0x3F3AF50")]
	private static bool TryParseTierIdsString(string raw, out List<string> parsed)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x3F3B660", Offset = "0x3F3B660", VA = "0x3F3B660")]
	private static bool TryGetRemoteTierIds(Player player, out IEnumerable tierIds)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x3F3B760", Offset = "0x3F3B760", VA = "0x3F3B760")]
	private static string ToTierLabel(bool hasTier2, bool hasTier3)
	{
		return null;
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x3F3B7C0", Offset = "0x3F3B7C0", VA = "0x3F3B7C0")]
	private static bool TryGetLocalPatreonFlags(out bool linked, out bool hasTier2, out bool hasTier3)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x3F3BA10", Offset = "0x3F3BA10", VA = "0x3F3BA10")]
	public static bool TryGetLocalTierLabel(out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x3F3BB30", Offset = "0x3F3BB30", VA = "0x3F3BB30")]
	public static bool TryGetRemoteTierLabel(Player player, out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x3F3BCB0", Offset = "0x3F3BCB0", VA = "0x3F3BCB0")]
	public static bool TryGetRemoteDisplayName(Player player, out string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x3F3BD80", Offset = "0x3F3BD80", VA = "0x3F3BD80")]
	public static bool TryGetRemoteAccountId(Player player, out string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x3F3BE50", Offset = "0x3F3BE50", VA = "0x3F3BE50")]
	public static bool LocalPlayerHasNameEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x3F3BEE0", Offset = "0x3F3BEE0", VA = "0x3F3BEE0")]
	public static bool RemotePlayerHasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x3F38580", Offset = "0x3F38580", VA = "0x3F38580")]
	public static bool HasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x3F3BFD0", Offset = "0x3F3BFD0", VA = "0x3F3BFD0")]
	public static bool LocalPlayerHasCharacterEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x3F3C060", Offset = "0x3F3C060", VA = "0x3F3C060")]
	public static bool RemotePlayerHasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x3F3C130", Offset = "0x3F3C130", VA = "0x3F3C130")]
	public static bool HasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}
}
