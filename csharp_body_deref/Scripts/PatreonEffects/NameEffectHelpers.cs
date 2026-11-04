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

[Token(Token = "0x2000116")]
public static class NameEffectHelpers
{
	[Token(Token = "0x600056F")]
	[Address(RVA = "0x20C8FB0", Offset = "0x20C75B0", VA = "0x1820C8FB0")]
	public static bool TryGetNameEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x20C8C60", Offset = "0x20C7260", VA = "0x1820C8C60")]
	public static bool TryGetGuildEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x20C8B60", Offset = "0x20C7160", VA = "0x1820C8B60")]
	private static ProfileSettings GetProfile(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x20C9300", Offset = "0x20C7900", VA = "0x1820C9300")]
	private static bool TryGet(Player player, ProfileSettings profile, bool enabled, string effectStr, Color colorA, Color colorB, Color colorC, Color colorD, out ResolvedNameEffect result)
	{
		return default(bool);
	}
}
