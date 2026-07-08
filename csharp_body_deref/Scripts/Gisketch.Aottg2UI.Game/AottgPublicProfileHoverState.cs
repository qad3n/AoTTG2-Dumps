using ApplicationManagers.PublicProfiles;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001A0")]
internal static class AottgPublicProfileHoverState
{
	[Token(Token = "0x6000998")]
	[Address(RVA = "0x40FE6A0", Offset = "0x40FE6A0", VA = "0x40FE6A0")]
	public static GameObject ShowLoading(GisketchUIRoot root, string accountId, GameObject anchor)
	{
		return null;
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x40FDCF0", Offset = "0x40FDCF0", VA = "0x40FDCF0")]
	public static void ShowReady(GisketchUIRoot root, string accountId, AottgPublicProfile profile)
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x40FDFE0", Offset = "0x40FDFE0", VA = "0x40FDFE0")]
	public static void ShowError(GisketchUIRoot root, string accountId, string error)
	{
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x40FDA50", Offset = "0x40FDA50", VA = "0x40FDA50")]
	public static void Close(GisketchUIRoot root, string accountId)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x4101400", Offset = "0x4101400", VA = "0x4101400")]
	private static bool IsActive(GisketchUIRoot root, string accountId)
	{
		return default(bool);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x4101670", Offset = "0x4101670", VA = "0x4101670")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x4101640", Offset = "0x4101640", VA = "0x4101640")]
	private static string CharacterName(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x41014C0", Offset = "0x41014C0", VA = "0x41014C0")]
	private static string BadgesJson(AottgPublicProfile profile, out bool hasBadges)
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x4101700", Offset = "0x4101700", VA = "0x4101700")]
	private static JSONNode Parse(string json)
	{
		return null;
	}
}
