using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200011C")]
public static class AottgUiActionIds
{
	[Token(Token = "0x200011D")]
	public static class Main
	{
		[Token(Token = "0x40006AC")]
		public const string Tutorial = "main.tutorial";

		[Token(Token = "0x40006AD")]
		public const string SinglePlayer = "main.singleplayer";

		[Token(Token = "0x40006AE")]
		public const string Multiplayer = "main.multiplayer";

		[Token(Token = "0x40006AF")]
		public const string Profile = "main.profile";

		[Token(Token = "0x40006B0")]
		public const string Settings = "main.settings";

		[Token(Token = "0x40006B1")]
		public const string Tools = "main.tools";

		[Token(Token = "0x40006B2")]
		public const string Credits = "main.credits";

		[Token(Token = "0x40006B3")]
		public const string Quit = "main.quit";

		[Token(Token = "0x40006B4")]
		public const string Quests = "main.quests";

		[Token(Token = "0x40006B5")]
		public const string Leaderboard = "main.leaderboard";

		[Token(Token = "0x40006B6")]
		public const string Social = "main.social";

		[Token(Token = "0x40006B7")]
		public const string Help = "main.help";

		[Token(Token = "0x40006B8")]
		public const string Patreon = "main.patreon";
	}

	[Token(Token = "0x200011E")]
	public static class Settings
	{
		[Token(Token = "0x40006B9")]
		public const string Save = "settings.save";

		[Token(Token = "0x40006BA")]
		public const string Load = "settings.load";

		[Token(Token = "0x40006BB")]
		public const string Back = "settings.back";

		[Token(Token = "0x40006BC")]
		public const string Default = "settings.default";
	}

	[Token(Token = "0x200011F")]
	public static class Account
	{
		[Token(Token = "0x40006BD")]
		public const string OpenLogin = "account.openLogin";

		[Token(Token = "0x40006BE")]
		public const string OpenRegister = "account.openRegister";

		[Token(Token = "0x40006BF")]
		public const string OpenForgotPassword = "account.openForgotPassword";

		[Token(Token = "0x40006C0")]
		public const string KeepSignedIn = "account.keepSignedIn";

		[Token(Token = "0x40006C1")]
		public const string LoginEmail = "account.login.email";

		[Token(Token = "0x40006C2")]
		public const string RegisterEmail = "account.register.email";

		[Token(Token = "0x40006C3")]
		public const string ForgotPassword = "account.forgotPassword";

		[Token(Token = "0x40006C4")]
		public const string LoginDiscord = "account.login.discord";

		[Token(Token = "0x40006C5")]
		public const string LoginGoogle = "account.login.google";

		[Token(Token = "0x40006C6")]
		public const string AccountDetails = "account.details";

		[Token(Token = "0x40006C7")]
		public const string Refresh = "account.refresh";

		[Token(Token = "0x40006C8")]
		public const string Logout = "account.logout";

		[Token(Token = "0x40006C9")]
		public const string GoOffline = "account.goOffline";

		[Token(Token = "0x40006CA")]
		public const string GoOnline = "account.goOnline";
	}

	[Token(Token = "0x2000120")]
	public static class Profile
	{
		[Token(Token = "0x40006CB")]
		public const string SaveAvatar = "profile.save.avatar";

		[Token(Token = "0x40006CC")]
		public const string SaveBanner = "profile.save.banner";

		[Token(Token = "0x40006CD")]
		public const string SaveDetails = "profile.save.details";

		[Token(Token = "0x40006CE")]
		public const string SaveCharacter = "profile.save.character";

		[Token(Token = "0x40006CF")]
		public const string OpenEmoteText = "profile.emote.text.open";

		[Token(Token = "0x40006D0")]
		public const string OpenEmoteSticker = "profile.emote.sticker.open";

		[Token(Token = "0x40006D1")]
		public const string SaveEmoteText = "profile.emote.text.save";
	}

	[Token(Token = "0x2000121")]
	public static class Credits
	{
		[Token(Token = "0x40006D2")]
		public const string Retry = "credits.retry";
	}
}
