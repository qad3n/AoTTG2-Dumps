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

[Token(Token = "0x20000F5")]
public static class NameEffectHelpers
{
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x4227C70", Offset = "0x4227C70", VA = "0x4227C70")]
	public static bool TryGetNameEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x422D970", Offset = "0x422D970", VA = "0x422D970")]
	public static bool TryGetGuildEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x422D760", Offset = "0x422D760", VA = "0x422D760")]
	private static ProfileSettings GetProfile(Player player)
	{
		return null;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x422D870", Offset = "0x422D870", VA = "0x422D870")]
	private static bool TryGet(Player player, ProfileSettings profile, bool enabled, string effectStr, Color colorA, Color colorB, Color colorC, Color colorD, out ResolvedNameEffect result)
	{
		return default(bool);
	}
}
