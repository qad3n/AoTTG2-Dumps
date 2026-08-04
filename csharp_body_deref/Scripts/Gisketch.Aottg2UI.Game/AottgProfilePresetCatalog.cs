// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001BD")]
internal static class AottgProfilePresetCatalog
{
	[Token(Token = "0x4000979")]
	private const string DefaultAvatar = "Gisketch1";

	[Token(Token = "0x400097A")]
	private const string DefaultBanner = "MainBackground2Texture";

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x441F6D0", Offset = "0x441F6D0", VA = "0x441F6D0")]
	public static AottgProfilePreset[] Avatars()
	{
		return null;
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x44201A0", Offset = "0x44201A0", VA = "0x44201A0")]
	public static AottgProfilePreset[] Banners()
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x4428D80", Offset = "0x4428D80", VA = "0x4428D80")]
	public static string AvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x4428F20", Offset = "0x4428F20", VA = "0x4428F20")]
	public static string BannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x4429010", Offset = "0x4429010", VA = "0x4429010")]
	public static string PublicAvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4429120", Offset = "0x4429120", VA = "0x4429120")]
	public static string PublicBannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4429170", Offset = "0x4429170", VA = "0x4429170")]
	public static string FirstAvatarKey()
	{
		return null;
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x44291F0", Offset = "0x44291F0", VA = "0x44291F0")]
	public static string FirstBannerKey()
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4429060", Offset = "0x4429060", VA = "0x4429060")]
	private static bool TryPresetSprite(string key, AottgProfilePreset[] presets, out string sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4428E80", Offset = "0x4428E80", VA = "0x4428E80")]
	private static string AllowedKey(string key, AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x44291C0", Offset = "0x44291C0", VA = "0x44291C0")]
	private static string FirstKey(AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4428A20", Offset = "0x4428A20", VA = "0x4428A20")]
	private static JSONNode LoadJson(string path)
	{
		return null;
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4428D00", Offset = "0x4428D00", VA = "0x4428D00")]
	private static string Label(string key)
	{
		return null;
	}
}
