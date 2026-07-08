using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200018A")]
internal static class AottgProfilePresetCatalog
{
	[Token(Token = "0x40008B3")]
	private const string DefaultAvatar = "Gisketch1";

	[Token(Token = "0x40008B4")]
	private const string DefaultBanner = "MainBackground2Texture";

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x40EE410", Offset = "0x40EE410", VA = "0x40EE410")]
	public static AottgProfilePreset[] Avatars()
	{
		return null;
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x40EEEE0", Offset = "0x40EEEE0", VA = "0x40EEEE0")]
	public static AottgProfilePreset[] Banners()
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x40F68D0", Offset = "0x40F68D0", VA = "0x40F68D0")]
	public static string AvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x40F6A70", Offset = "0x40F6A70", VA = "0x40F6A70")]
	public static string BannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x40F6B60", Offset = "0x40F6B60", VA = "0x40F6B60")]
	public static string FirstAvatarKey()
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x40F6BE0", Offset = "0x40F6BE0", VA = "0x40F6BE0")]
	public static string FirstBannerKey()
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x40F69D0", Offset = "0x40F69D0", VA = "0x40F69D0")]
	private static string AllowedKey(string key, AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x40F6BB0", Offset = "0x40F6BB0", VA = "0x40F6BB0")]
	private static string FirstKey(AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x40F6570", Offset = "0x40F6570", VA = "0x40F6570")]
	private static JSONNode LoadJson(string path)
	{
		return null;
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x40F6850", Offset = "0x40F6850", VA = "0x40F6850")]
	private static string Label(string key)
	{
		return null;
	}
}
