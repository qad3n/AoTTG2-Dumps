// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectHelpers
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectHelpers.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x200008A")]
public static class NameEffectHelpers
{
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x58C1090", Offset = "0x58C0090", VA = "0x58C1090")]
	public static bool TryGetNameEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x58C6380", Offset = "0x58C5380", VA = "0x58C6380")]
	public static bool TryGetGuildEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x58C6170", Offset = "0x58C5170", VA = "0x58C6170")]
	private static ProfileSettings GetProfile(Player player)
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x58C6280", Offset = "0x58C5280", VA = "0x58C6280")]
	private static bool TryGet(Player player, ProfileSettings profile, bool enabled, string effectStr, Color colorA, Color colorB, Color colorC, Color colorD, out ResolvedNameEffect result)
	{
		return default(bool);
	}
}
