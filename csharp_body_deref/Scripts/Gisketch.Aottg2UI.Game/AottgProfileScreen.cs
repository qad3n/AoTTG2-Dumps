// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C6")]
[AottgScreen("profile", Title = "AoTTG 2 Profile", TitleKey = "MainMenu.Profile.Title", SearchTitle = "Profile", SearchTitleKey = "Common.Profile", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgProfileScreen : AottgScreen
{
	[Token(Token = "0x4000E2C")]
	public const string Id = "profile";

	[Token(Token = "0x4000E2D")]
	private const string StatsKeywords = "general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear";

	[Token(Token = "0x4000E2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x170001ED")]
	protected override string RootStyle
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x1E1E050", Offset = "0x1E1C650", VA = "0x181E1E050", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EE")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x1E1DF40", Offset = "0x1E1C540", VA = "0x181E1DF40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x1E1D310", Offset = "0x1E1B910", VA = "0x181E1D310", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x1E1D6C0", Offset = "0x1E1BCC0", VA = "0x181E1D6C0")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x1E1C520", Offset = "0x1E1AB20", VA = "0x181E1C520")]
	private static void BuildAccount(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x1E1C260", Offset = "0x1E1A860", VA = "0x181E1C260")]
	private static void BuildAccountHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x1E1D040", Offset = "0x1E1B640", VA = "0x181E1D040")]
	private static void BuildInfo(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x1E1CDE0", Offset = "0x1E1B3E0", VA = "0x181E1CDE0")]
	private static void BuildInfoHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x1E1C940", Offset = "0x1E1AF40", VA = "0x181E1C940")]
	private static void BuildCharacter(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x1E1C760", Offset = "0x1E1AD60", VA = "0x181E1C760")]
	private static void BuildCharacterHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x1E1CB80", Offset = "0x1E1B180", VA = "0x181E1CB80")]
	private static void BuildEmotes(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x1E1D2A0", Offset = "0x1E1B8A0", VA = "0x181E1D2A0")]
	private static void BuildStats(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x1E1D420", Offset = "0x1E1BA20", VA = "0x181E1D420")]
	private static void ConnectionRow(AottgUi content, string id, string label, string statusKey, string buttonVisibleKey, string buttonText, string actionId, AottgButtonVariant buttonVariant, [Optional] string icon)
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgProfileScreen()
	{
	}
}
