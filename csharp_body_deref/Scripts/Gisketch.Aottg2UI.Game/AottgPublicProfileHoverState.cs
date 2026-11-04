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

[Token(Token = "0x20002DC")]
internal static class AottgPublicProfileHoverState
{
	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x1E2CD00", Offset = "0x1E2B300", VA = "0x181E2CD00")]
	public static GameObject ShowLoading(GisketchUIRoot root, string accountId, GameObject anchor)
	{
		return null;
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x1E2D0A0", Offset = "0x1E2B6A0", VA = "0x181E2D0A0")]
	public static void ShowReady(GisketchUIRoot root, string accountId, AottgPublicProfile profile)
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x1E2CA90", Offset = "0x1E2B090", VA = "0x181E2CA90")]
	public static void ShowError(GisketchUIRoot root, string accountId, string error)
	{
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x1E2C820", Offset = "0x1E2AE20", VA = "0x181E2C820")]
	public static void Close(GisketchUIRoot root, string accountId)
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x1E2C9C0", Offset = "0x1E2AFC0", VA = "0x181E2C9C0")]
	private static bool IsActive(GisketchUIRoot root, string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x1E2C920", Offset = "0x1E2AF20", VA = "0x181E2C920")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x1E2C7E0", Offset = "0x1E2ADE0", VA = "0x181E2C7E0")]
	private static string CharacterName(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x1E2C660", Offset = "0x1E2AC60", VA = "0x181E2C660")]
	private static string BadgesJson(AottgPublicProfile profile, out bool hasBadges)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x1DF0650", Offset = "0x1DEEC50", VA = "0x181DF0650")]
	private static JSONNode Parse(string json)
	{
		return null;
	}
}
