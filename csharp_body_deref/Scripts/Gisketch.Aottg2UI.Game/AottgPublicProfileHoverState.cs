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

[Token(Token = "0x2000339")]
internal static class AottgPublicProfileHoverState
{
	[Token(Token = "0x600143A")]
	[Address(RVA = "0x580D720", Offset = "0x580C720", VA = "0x580D720")]
	public static GameObject ShowLoading(GisketchUIRoot root, string accountId, GameObject anchor)
	{
		return null;
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x580CDB0", Offset = "0x580BDB0", VA = "0x580CDB0")]
	public static void ShowReady(GisketchUIRoot root, string accountId, AottgPublicProfile profile)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x580D100", Offset = "0x580C100", VA = "0x580D100")]
	public static void ShowError(GisketchUIRoot root, string accountId, string error)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x580CB00", Offset = "0x580BB00", VA = "0x580CB00")]
	public static void Close(GisketchUIRoot root, string accountId)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x5810550", Offset = "0x580F550", VA = "0x5810550")]
	private static bool IsActive(GisketchUIRoot root, string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x58107B0", Offset = "0x580F7B0", VA = "0x58107B0")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x5810780", Offset = "0x580F780", VA = "0x5810780")]
	private static string CharacterName(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x5810610", Offset = "0x580F610", VA = "0x5810610")]
	private static string BadgesJson(AottgPublicProfile profile, out bool hasBadges)
	{
		return null;
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x5810850", Offset = "0x580F850", VA = "0x5810850")]
	private static JSONNode Parse(string json)
	{
		return null;
	}
}
