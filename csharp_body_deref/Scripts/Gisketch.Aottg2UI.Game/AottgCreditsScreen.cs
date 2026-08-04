// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000159")]
[AottgScreen("credits", Title = "AoTTG 2 Credits", SearchTitle = "Credits", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgCreditsScreen : AottgScreen
{
	[Token(Token = "0x400079E")]
	public const string Id = "credits";

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x17000116")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000796")]
		[Address(RVA = "0x43E8000", Offset = "0x43E8000", VA = "0x43E8000", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x43E8030", Offset = "0x43E8030", VA = "0x43E8030", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x43E7D40", Offset = "0x43E7D40", VA = "0x43E7D40")]
	static AottgCreditsScreen()
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x43E8100", Offset = "0x43E8100", VA = "0x43E8100", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x43E81F0", Offset = "0x43E81F0", VA = "0x43E81F0")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x43E8590", Offset = "0x43E8590", VA = "0x43E8590")]
	private static AottgScreenSection[] CreditSections(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x43E89A0", Offset = "0x43E89A0", VA = "0x43E89A0")]
	private static void BuildCredits(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x43E8BA0", Offset = "0x43E8BA0", VA = "0x43E8BA0")]
	private static void BuildLoading(AottgUi ui)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x43E8E00", Offset = "0x43E8E00", VA = "0x43E8E00")]
	private static void BuildReadyPlaceholder(AottgUi ui)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x43E9060", Offset = "0x43E9060", VA = "0x43E9060")]
	private static void BuildEmpty(AottgUi ui)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x43E92C0", Offset = "0x43E92C0", VA = "0x43E92C0")]
	private static void BuildError(AottgUi ui)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x43E9520", Offset = "0x43E9520", VA = "0x43E9520")]
	public AottgCreditsScreen()
	{
	}
}
