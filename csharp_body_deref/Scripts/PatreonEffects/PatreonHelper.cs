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

[Token(Token = "0x2000119")]
public static class PatreonHelper
{
	[Token(Token = "0x4000690")]
	private const string Tier2Id = "28767500";

	[Token(Token = "0x4000691")]
	private const string Tier3Id = "28767505";

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x20CD030", Offset = "0x20CB630", VA = "0x1820CD030")]
	private static bool HasTier(string[] tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x20CD0C0", Offset = "0x20CB6C0", VA = "0x1820CD0C0")]
	private static bool HasTier(IEnumerable tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x20CD9D0", Offset = "0x20CBFD0", VA = "0x1820CD9D0")]
	private static bool TryGetRemoteBool(Player player, string key, out bool value)
	{
		return default(bool);
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x20CDB20", Offset = "0x20CC120", VA = "0x1820CDB20")]
	private static bool TryGetRemoteString(Player player, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x20CDE40", Offset = "0x20CC440", VA = "0x1820CDE40")]
	private static bool TryParseTierIdsString(string raw, out List<string> parsed)
	{
		return default(bool);
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x20CDBC0", Offset = "0x20CC1C0", VA = "0x1820CDBC0")]
	private static bool TryGetRemoteTierIds(Player player, out IEnumerable tierIds)
	{
		return default(bool);
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x20CD5D0", Offset = "0x20CBBD0", VA = "0x1820CD5D0")]
	private static string ToTierLabel(bool hasTier2, bool hasTier3)
	{
		return null;
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x20CD640", Offset = "0x20CBC40", VA = "0x1820CD640")]
	private static bool TryGetLocalPatreonFlags(out bool linked, out bool hasTier2, out bool hasTier3)
	{
		return default(bool);
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x20CD7F0", Offset = "0x20CBDF0", VA = "0x1820CD7F0")]
	public static bool TryGetLocalTierLabel(out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x20CDCE0", Offset = "0x20CC2E0", VA = "0x1820CDCE0")]
	public static bool TryGetRemoteTierLabel(Player player, out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x20CDA40", Offset = "0x20CC040", VA = "0x1820CDA40")]
	public static bool TryGetRemoteDisplayName(Player player, out string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x20CD8F0", Offset = "0x20CBEF0", VA = "0x1820CD8F0")]
	public static bool TryGetRemoteAccountId(Player player, out string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x20CD330", Offset = "0x20CB930", VA = "0x1820CD330")]
	public static bool LocalPlayerHasNameEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x20CD4B0", Offset = "0x20CBAB0", VA = "0x1820CD4B0")]
	public static bool RemotePlayerHasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x20CCE70", Offset = "0x20CB470", VA = "0x1820CCE70")]
	public static bool HasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x20CD2A0", Offset = "0x20CB8A0", VA = "0x1820CD2A0")]
	public static bool LocalPlayerHasCharacterEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x20CD3C0", Offset = "0x20CB9C0", VA = "0x1820CD3C0")]
	public static bool RemotePlayerHasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x20CCCF0", Offset = "0x20CB2F0", VA = "0x1820CCCF0")]
	public static bool HasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}
}
