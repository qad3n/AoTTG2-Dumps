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

[Token(Token = "0x200008D")]
public static class PatreonHelper
{
	[Token(Token = "0x40002F5")]
	private const string Tier2Id = "28767500";

	[Token(Token = "0x40002F6")]
	private const string Tier3Id = "28767505";

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x58C8630", Offset = "0x58C7630", VA = "0x58C8630")]
	private static bool HasTier(string[] tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x58C86D0", Offset = "0x58C76D0", VA = "0x58C86D0")]
	private static bool HasTier(IEnumerable tierIds, string targetTier)
	{
		return default(bool);
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x58C8A80", Offset = "0x58C7A80", VA = "0x58C8A80")]
	private static bool TryGetRemoteBool(Player player, string key, out bool value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x58C8AD0", Offset = "0x58C7AD0", VA = "0x58C8AD0")]
	private static bool TryGetRemoteString(Player player, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x58C8B60", Offset = "0x58C7B60", VA = "0x58C8B60")]
	private static bool TryParseTierIdsString(string raw, out List<string> parsed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x58C9170", Offset = "0x58C8170", VA = "0x58C9170")]
	private static bool TryGetRemoteTierIds(Player player, out IEnumerable tierIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x58C9270", Offset = "0x58C8270", VA = "0x58C9270")]
	private static string ToTierLabel(bool hasTier2, bool hasTier3)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x58C92D0", Offset = "0x58C82D0", VA = "0x58C92D0")]
	private static bool TryGetLocalPatreonFlags(out bool linked, out bool hasTier2, out bool hasTier3)
	{
		return default(bool);
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x58C94E0", Offset = "0x58C84E0", VA = "0x58C94E0")]
	public static bool TryGetLocalTierLabel(out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x58C9600", Offset = "0x58C8600", VA = "0x58C9600")]
	public static bool TryGetRemoteTierLabel(Player player, out string tierLabel)
	{
		return default(bool);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x58C9780", Offset = "0x58C8780", VA = "0x58C9780")]
	public static bool TryGetRemoteDisplayName(Player player, out string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x58C9850", Offset = "0x58C8850", VA = "0x58C9850")]
	public static bool TryGetRemoteAccountId(Player player, out string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x58C9920", Offset = "0x58C8920", VA = "0x58C9920")]
	public static bool LocalPlayerHasNameEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x58C99B0", Offset = "0x58C89B0", VA = "0x58C99B0")]
	public static bool RemotePlayerHasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x58C0F10", Offset = "0x58BFF10", VA = "0x58C0F10")]
	public static bool HasNameEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x58C9AA0", Offset = "0x58C8AA0", VA = "0x58C9AA0")]
	public static bool LocalPlayerHasCharacterEffectAccess()
	{
		return default(bool);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x58C9B30", Offset = "0x58C8B30", VA = "0x58C9B30")]
	public static bool RemotePlayerHasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x58C9C00", Offset = "0x58C8C00", VA = "0x58C9C00")]
	public static bool HasCharacterEffectAccess(Player player)
	{
		return default(bool);
	}
}
