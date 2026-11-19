// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileStateKeys
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStateKeys.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200032A")]
internal static class AottgProfileStateKeys
{
	[Token(Token = "0x4000FD5")]
	public const string SaveOperation = "profile.save";

	[Token(Token = "0x4000FD6")]
	public const string SaveIdle = "profile.save.idle";

	[Token(Token = "0x4000FD7")]
	public const string CharacterName = "profile.characterName";

	[Token(Token = "0x4000FD8")]
	public const string CharacterGuild = "profile.characterGuild";

	[Token(Token = "0x4000FD9")]
	public const string CharacterPresetGuild = "profile.characterPresetGuild";

	[Token(Token = "0x4000FDA")]
	public const string CharacterBadges = "profile.characterBadges";

	[Token(Token = "0x4000FDB")]
	public const string CharacterInfoJson = "profile.characterInfoJson";

	[Token(Token = "0x4000FDC")]
	public const string AccountName = "profile.accountName";

	[Token(Token = "0x4000FDD")]
	public const string Bio = "profile.bio";

	[Token(Token = "0x4000FDE")]
	public const string AvatarSprite = "profile.avatarSprite";

	[Token(Token = "0x4000FDF")]
	public const string BannerSprite = "profile.bannerSprite";

	[Token(Token = "0x4000FE0")]
	public const string IdentityLoading = "profile.identity.loading";

	[Token(Token = "0x4000FE1")]
	public const string IdentityReady = "profile.identity.ready";

	[Token(Token = "0x4000FE2")]
	public const string PatreonStatus = "profile.patreon.status";

	[Token(Token = "0x4000FE3")]
	public const string PatreonCtaVisible = "profile.patreon.cta.visible";

	[Token(Token = "0x4000FE4")]
	public const string DiscordStatus = "profile.discord.status";

	[Token(Token = "0x4000FE5")]
	public const string DiscordLinkVisible = "profile.discord.link.visible";

	[Token(Token = "0x4000FE6")]
	public const string GoogleStatus = "profile.google.status";

	[Token(Token = "0x4000FE7")]
	public const string GoogleLinkVisible = "profile.google.link.visible";

	[Token(Token = "0x4000FE8")]
	public const string NoSocials = "profile.socials.empty";

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x57FB1A0", Offset = "0x57FA1A0", VA = "0x57FB1A0")]
	public static string Social(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStateKeys.c (Gisketch.Aottg2UI.Game.AottgProfileStateKeys$$Social): clean
		String pSVar1;
		int local_4;

		pSVar1 = local_4.ToString();
		pSVar1 = String.Concat("profile.social.", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x58097A0", Offset = "0x58087A0", VA = "0x58097A0")]
	public static string SocialVisible(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStateKeys.c (Gisketch.Aottg2UI.Game.AottgProfileStateKeys$$SocialVisible): clean
		String pSVar1;
		int local_4;

		pSVar1 = local_4.ToString();
		pSVar1 = String.Concat("profile.social.", pSVar1, ".visible") ;
		return pSVar1;
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x5809800", Offset = "0x5808800", VA = "0x5809800")]
	public static string EmoteText(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStateKeys.c (Gisketch.Aottg2UI.Game.AottgProfileStateKeys$$EmoteText): clean
		String pSVar1;
		int local_4;

		pSVar1 = local_4.ToString();
		pSVar1 = String.Concat("profile.emote.text.", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x5809850", Offset = "0x5808850", VA = "0x5809850")]
	public static string EmoteStickerLabel(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStateKeys.c (Gisketch.Aottg2UI.Game.AottgProfileStateKeys$$EmoteStickerLabel): clean
		String pSVar1;
		int local_4;

		pSVar1 = local_4.ToString();
		pSVar1 = String.Concat("profile.emote.sticker.", pSVar1, ".label") ;
		return pSVar1;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x58098B0", Offset = "0x58088B0", VA = "0x58098B0")]
	public static string EmoteStickerSprite(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStateKeys.c (Gisketch.Aottg2UI.Game.AottgProfileStateKeys$$EmoteStickerSprite): clean
		String pSVar1;
		int local_4;

		pSVar1 = local_4.ToString();
		pSVar1 = String.Concat("profile.emote.sticker.", pSVar1, ".sprite") ;
		return pSVar1;
	}
}
