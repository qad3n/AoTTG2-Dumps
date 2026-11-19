// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePresetCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000320")]
internal static class AottgProfilePresetCatalog
{
	[Token(Token = "0x4000FB5")]
	private const string DefaultAvatar = "Gisketch1";

	[Token(Token = "0x4000FB6")]
	private const string DefaultBanner = "MainBackground2Texture";

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x57FC190", Offset = "0x57FB190", VA = "0x57FC190")]
	public static AottgProfilePreset[] Avatars()
	{
		return null;
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x57FCA20", Offset = "0x57FBA20", VA = "0x57FCA20")]
	public static AottgProfilePreset[] Banners()
	{
		return null;
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x5804C80", Offset = "0x5803C80", VA = "0x5804C80")]
	public static string AvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x5804DA0", Offset = "0x5803DA0", VA = "0x5804DA0")]
	public static string BannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x5804E00", Offset = "0x5803E00", VA = "0x5804E00")]
	public static string PublicAvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x5804F10", Offset = "0x5803F10", VA = "0x5804F10")]
	public static string PublicBannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x5804F60", Offset = "0x5803F60", VA = "0x5804F60")]
	public static string FirstAvatarKey()
	{
		return null;
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x5804FE0", Offset = "0x5803FE0", VA = "0x5804FE0")]
	public static string FirstBannerKey()
	{
		return null;
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x5804E50", Offset = "0x5803E50", VA = "0x5804E50")]
	private static bool TryPresetSprite(string key, AottgProfilePreset[] presets, out string sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x5804D00", Offset = "0x5803D00", VA = "0x5804D00")]
	private static string AllowedKey(string key, AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x5804FB0", Offset = "0x5803FB0", VA = "0x5804FB0")]
	private static string FirstKey(AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x5804990", Offset = "0x5803990", VA = "0x5804990")]
	private static JSONNode LoadJson(string path)
	{
		return null;
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x5804C00", Offset = "0x5803C00", VA = "0x5804C00")]
	private static string Label(string key)
	{
		return null;
	}
}
