using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x20000F4")]
public static class NameEffectHelpers
{
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x3F37F20", Offset = "0x3F37F20", VA = "0x3F37F20")]
	public static bool TryGetNameEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x3F38340", Offset = "0x3F38340", VA = "0x3F38340")]
	public static bool TryGetGuildEffect(Player player, out ResolvedNameEffect result)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x3F38160", Offset = "0x3F38160", VA = "0x3F38160")]
	private static ProfileSettings GetProfile(Player player)
	{
		return null;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x3F38240", Offset = "0x3F38240", VA = "0x3F38240")]
	private static bool TryGet(Player player, ProfileSettings profile, bool enabled, string effectStr, Color colorA, Color colorB, Color colorC, Color colorD, out ResolvedNameEffect result)
	{
		return default(bool);
	}
}
