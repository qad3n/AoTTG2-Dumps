// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ApplicationManagers.PublicProfiles;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001D3")]
internal static class AottgPublicProfileHoverState
{
	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x4432350", Offset = "0x4432350", VA = "0x4432350")]
	public static GameObject ShowLoading(GisketchUIRoot root, string accountId, GameObject anchor)
	{
		return null;
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x44326D0", Offset = "0x44326D0", VA = "0x44326D0")]
	public static void ShowReady(GisketchUIRoot root, string accountId, AottgPublicProfile profile)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4432C10", Offset = "0x4432C10", VA = "0x4432C10")]
	public static void ShowError(GisketchUIRoot root, string accountId, string error)
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4432F00", Offset = "0x4432F00", VA = "0x4432F00")]
	public static void Close(GisketchUIRoot root, string accountId)
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x44329A0", Offset = "0x44329A0", VA = "0x44329A0")]
	private static bool IsActive(GisketchUIRoot root, string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4432E70", Offset = "0x4432E70", VA = "0x4432E70")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4432BE0", Offset = "0x4432BE0", VA = "0x4432BE0")]
	private static string CharacterName(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4432A60", Offset = "0x4432A60", VA = "0x4432A60")]
	private static string BadgesJson(AottgPublicProfile profile, out bool hasBadges)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4433010", Offset = "0x4433010", VA = "0x4433010")]
	private static JSONNode Parse(string json)
	{
		return null;
	}
}
