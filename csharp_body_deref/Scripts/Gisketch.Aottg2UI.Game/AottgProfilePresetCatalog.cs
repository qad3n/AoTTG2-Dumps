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

[Token(Token = "0x20002C3")]
internal static class AottgProfilePresetCatalog
{
	[Token(Token = "0x4000E24")]
	private const string DefaultAvatar = "Gisketch1";

	[Token(Token = "0x4000E25")]
	private const string DefaultBanner = "MainBackground2Texture";

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x1E19D00", Offset = "0x1E18300", VA = "0x181E19D00")]
	public static AottgProfilePreset[] Avatars()
	{
		return null;
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x1E1A410", Offset = "0x1E18A10", VA = "0x181E1A410")]
	public static AottgProfilePreset[] Banners()
	{
		return null;
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x1E19C00", Offset = "0x1E18200", VA = "0x181E19C00")]
	public static string AvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x1E1A330", Offset = "0x1E18930", VA = "0x181E1A330")]
	public static string BannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x1E1AE30", Offset = "0x1E19430", VA = "0x181E1AE30")]
	public static string PublicAvatarSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x1E1AF00", Offset = "0x1E19500", VA = "0x181E1AF00")]
	public static string PublicBannerSprite(string key)
	{
		return null;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x1E1AA60", Offset = "0x1E19060", VA = "0x181E1AA60")]
	public static string FirstAvatarKey()
	{
		return null;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x1E1AAC0", Offset = "0x1E190C0", VA = "0x181E1AAC0")]
	public static string FirstBannerKey()
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x1E1AFD0", Offset = "0x1E195D0", VA = "0x181E1AFD0")]
	private static bool TryPresetSprite(string key, AottgProfilePreset[] presets, out string sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x1E19B70", Offset = "0x1E18170", VA = "0x181E19B70")]
	private static string AllowedKey(string key, AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x1E1AB20", Offset = "0x1E19120", VA = "0x181E1AB20")]
	private static string FirstKey(AottgProfilePreset[] presets, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x1E1ABD0", Offset = "0x1E191D0", VA = "0x181E1ABD0")]
	private static JSONNode LoadJson(string path)
	{
		return null;
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x1E1AB50", Offset = "0x1E19150", VA = "0x181E1AB50")]
	private static string Label(string key)
	{
		return null;
	}
}
