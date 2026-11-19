// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000323")]
[AottgScreen("profile", TitleKey = "MainMenu.Profile.Title", SearchTitleKey = "Common.Profile", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgProfileScreen : AottgScreen
{
	[Token(Token = "0x4000FBD")]
	public const string Id = "profile";

	[Token(Token = "0x4000FBE")]
	private const string StatsKeywords = "general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear";

	[Token(Token = "0x4000FBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x1700022A")]
	protected override string RootStyle
	{
		[Token(Token = "0x60013B0")]
		[Address(RVA = "0x5805BD0", Offset = "0x5804BD0", VA = "0x5805BD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022B")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60013B1")]
		[Address(RVA = "0x5805C00", Offset = "0x5804C00", VA = "0x5805C00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x5805CD0", Offset = "0x5804CD0", VA = "0x5805CD0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x5805DB0", Offset = "0x5804DB0", VA = "0x5805DB0")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x58063C0", Offset = "0x58053C0", VA = "0x58063C0")]
	private static void BuildAccount(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x58065A0", Offset = "0x58055A0", VA = "0x58065A0")]
	private static void BuildAccountHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x5806820", Offset = "0x5805820", VA = "0x5806820")]
	private static void BuildInfo(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x5806A20", Offset = "0x5805A20", VA = "0x5806A20")]
	private static void BuildInfoHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x5806C50", Offset = "0x5805C50", VA = "0x5806C50")]
	private static void BuildCharacter(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x5806E30", Offset = "0x5805E30", VA = "0x5806E30")]
	private static void BuildCharacterHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x5806FE0", Offset = "0x5805FE0", VA = "0x5806FE0")]
	private static void BuildEmotes(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x58071E0", Offset = "0x58061E0", VA = "0x58071E0")]
	private static void BuildStats(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x5807250", Offset = "0x5806250", VA = "0x5807250")]
	private static void ConnectionRow(AottgUi content, string id, string statusKey, string buttonVisibleKey, string actionId, AottgButtonVariant buttonVariant, [Optional] string icon)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x58074B0", Offset = "0x58064B0", VA = "0x58074B0")]
	public AottgProfileScreen()
	{
	}
}
