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

[Token(Token = "0x20001C0")]
[AottgScreen("profile", Title = "AoTTG 2 Profile", SearchTitle = "Profile", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgProfileScreen : AottgScreen
{
	[Token(Token = "0x4000981")]
	public const string Id = "profile";

	[Token(Token = "0x4000982")]
	private const string StatsKeywords = "general achievements damage titans killed humans killed level exp playtime highest speed bronze silver gold blade ahss apg thunder spear";

	[Token(Token = "0x4000983")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x17000163")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000A9F")]
		[Address(RVA = "0x4429E30", Offset = "0x4429E30", VA = "0x4429E30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0x4429E60", Offset = "0x4429E60", VA = "0x4429E60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x4429F30", Offset = "0x4429F30", VA = "0x4429F30", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x442A020", Offset = "0x442A020", VA = "0x442A020")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x442A840", Offset = "0x442A840", VA = "0x442A840")]
	private static void BuildAccount(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x442AA30", Offset = "0x442AA30", VA = "0x442AA30")]
	private static void BuildAccountHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x442ACB0", Offset = "0x442ACB0", VA = "0x442ACB0")]
	private static void BuildInfo(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x442AEB0", Offset = "0x442AEB0", VA = "0x442AEB0")]
	private static void BuildInfoHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x442B0D0", Offset = "0x442B0D0", VA = "0x442B0D0")]
	private static void BuildCharacter(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x442B2C0", Offset = "0x442B2C0", VA = "0x442B2C0")]
	private static void BuildCharacterHeaderActions(AottgUi header, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x442B450", Offset = "0x442B450", VA = "0x442B450")]
	private static void BuildEmotes(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x442B650", Offset = "0x442B650", VA = "0x442B650")]
	private static void BuildStats(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x442B6C0", Offset = "0x442B6C0", VA = "0x442B6C0")]
	private static void ConnectionRow(AottgUi content, string id, string label, string statusKey, string buttonVisibleKey, string buttonText, string actionId, AottgButtonVariant buttonVariant, [Optional] string icon)
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x442B950", Offset = "0x442B950", VA = "0x442B950")]
	public AottgProfileScreen()
	{
	}
}
