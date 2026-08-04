// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.PatreonHelper
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/PatreonHelper.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace PatreonEffects;

[Token(Token = "0x20000F8")]
public static class PatreonHelper
{
	[Token(Token = "0x40005F1")]
	private const string Tier2Id = "28767500";

	[Token(Token = "0x40005F2")]
	private const string Tier3Id = "28767505";

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x422FC70", Offset = "0x422FC70", VA = "0x422FC70")]
	private static bool HasTier(string[] tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x422FD10", Offset = "0x422FD10", VA = "0x422FD10")]
	private static bool HasTier(IEnumerable tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x4230150", Offset = "0x4230150", VA = "0x4230150")]
	private static bool TryGetRemoteBool(Player player, string key, out bool value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x42301A0", Offset = "0x42301A0", VA = "0x42301A0")]
	private static bool TryGetRemoteString(Player player, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4230230", Offset = "0x4230230", VA = "0x4230230")]
	private static bool TryParseTierIdsString(string raw, out List<string> parsed)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4230940", Offset = "0x4230940", VA = "0x4230940")]
	private static bool TryGetRemoteTierIds(Player player, out IEnumerable tierIds)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x4230A40", Offset = "0x4230A40", VA = "0x4230A40")]
	private static string ToTierLabel(bool hasTier2, bool hasTier3)
	{
		return null;
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4230AA0", Offset = "0x4230AA0", VA = "0x4230AA0")]
	private static bool TryGetLocalPatreonFlags(out bool linked, out bool hasTier2, out bool hasTier3)
	{
		return default(bool);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4230CE0", Offset = "0x4230CE0", VA = "0x4230CE0")]
	public static bool TryGetLocalTierLabel(out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x4230E00", Offset = "0x4230E00", VA = "0x4230E00")]
	public static bool TryGetRemoteTierLabel(Player player, out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x4230F80", Offset = "0x4230F80", VA = "0x4230F80")]
	public static bool TryGetRemoteDisplayName(Player player, out string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x4231050", Offset = "0x4231050", VA = "0x4231050")]
	public static bool TryGetRemoteAccountId(Player player, out string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4231120", Offset = "0x4231120", VA = "0x4231120")]
	public static bool LocalPlayerHasNameEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x42311B0", Offset = "0x42311B0", VA = "0x42311B0")]
	public static bool RemotePlayerHasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x4227B00", Offset = "0x4227B00", VA = "0x4227B00")]
	public static bool HasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x42312A0", Offset = "0x42312A0", VA = "0x42312A0")]
	public static bool LocalPlayerHasCharacterEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4231330", Offset = "0x4231330", VA = "0x4231330")]
	public static bool RemotePlayerHasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4231400", Offset = "0x4231400", VA = "0x4231400")]
	public static bool HasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}
}
