using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200018D")]
[AottgScreen("profile", Title = "AoTTG 2 Profile", SearchTitle = "Profile", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgProfileScreen : AottgScreen
{
	[Token(Token = "0x40008BB")]
	public const string Id = "profile";

	[Token(Token = "0x40008BC")]
	private const string StatsKeywords = "general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear";

	[Token(Token = "0x40008BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x1700010D")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x40F7840", Offset = "0x40F7840", VA = "0x40F7840", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x40F7870", Offset = "0x40F7870", VA = "0x40F7870", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x40F7940", Offset = "0x40F7940", VA = "0x40F7940", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x40F7A20", Offset = "0x40F7A20", VA = "0x40F7A20")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x40F84C0", Offset = "0x40F84C0", VA = "0x40F84C0")]
	private static void BuildAccount(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x40F8760", Offset = "0x40F8760", VA = "0x40F8760")]
	private static void BuildAccountHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x40F89E0", Offset = "0x40F89E0", VA = "0x40F89E0")]
	private static void BuildInfo(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x40F8C20", Offset = "0x40F8C20", VA = "0x40F8C20")]
	private static void BuildInfoHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x40F8E40", Offset = "0x40F8E40", VA = "0x40F8E40")]
	private static void BuildCharacter(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x40F9070", Offset = "0x40F9070", VA = "0x40F9070")]
	private static void BuildCharacterHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x40F9200", Offset = "0x40F9200", VA = "0x40F9200")]
	private static void BuildEmotes(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x40F9440", Offset = "0x40F9440", VA = "0x40F9440")]
	private static void BuildStats(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x40F94B0", Offset = "0x40F94B0", VA = "0x40F94B0")]
	private static void ConnectionRow(AottgUi content, string id, string label, string statusKey, string buttonVisibleKey, string buttonText, string actionId, AottgButtonVariant buttonVariant, [Optional] string icon)
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x40F9740", Offset = "0x40F9740", VA = "0x40F9740")]
	public AottgProfileScreen()
	{
	}
}
