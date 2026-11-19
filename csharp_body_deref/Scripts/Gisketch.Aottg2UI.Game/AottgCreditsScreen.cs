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

[Token(Token = "0x2000202")]
[AottgScreen("credits", TitleKey = "Credits.Title", SearchTitleKey = "Common.Credits", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgCreditsScreen : AottgScreen
{
	[Token(Token = "0x4000ABA")]
	public const string Id = "credits";

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x1700015A")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x5D82120", Offset = "0x5D81120", VA = "0x5D82120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x5D82150", Offset = "0x5D81150", VA = "0x5D82150", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x5D81E40", Offset = "0x5D80E40", VA = "0x5D81E40")]
	static AottgCreditsScreen()
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x5D82220", Offset = "0x5D81220", VA = "0x5D82220", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x5D82310", Offset = "0x5D81310", VA = "0x5D82310")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x5D82630", Offset = "0x5D81630", VA = "0x5D82630")]
	private static AottgScreenSection[] CreditSections(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x5D829B0", Offset = "0x5D819B0", VA = "0x5D829B0")]
	private static void BuildCredits(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x5D82BB0", Offset = "0x5D81BB0", VA = "0x5D82BB0")]
	private static void BuildLoading(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x5D82E10", Offset = "0x5D81E10", VA = "0x5D82E10")]
	private static void BuildReadyPlaceholder(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x5D83070", Offset = "0x5D82070", VA = "0x5D83070")]
	private static void BuildEmpty(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x5D832D0", Offset = "0x5D822D0", VA = "0x5D832D0")]
	private static void BuildError(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x5D83530", Offset = "0x5D82530", VA = "0x5D83530")]
	public AottgCreditsScreen()
	{
	}
}
