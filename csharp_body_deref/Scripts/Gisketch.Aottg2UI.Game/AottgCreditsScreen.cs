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

[Token(Token = "0x20001E8")]
[AottgScreen("credits", Title = "AoTTG 2 Credits", TitleKey = "Credits.Title", SearchTitle = "Credits", SearchTitleKey = "Common.Credits", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgCreditsScreen : AottgScreen
{
	[Token(Token = "0x4000A42")]
	public const string Id = "credits";

	[Token(Token = "0x4000A43")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x17000151")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x23ABF70", Offset = "0x23AA570", VA = "0x1823ABF70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x23ABE60", Offset = "0x23AA460", VA = "0x1823ABE60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x23ABCA0", Offset = "0x23AA2A0", VA = "0x1823ABCA0")]
	static AottgCreditsScreen()
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x23AB270", Offset = "0x23A9870", VA = "0x1823AB270", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x23ABA50", Offset = "0x23AA050", VA = "0x1823ABA50")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x23AB670", Offset = "0x23A9C70", VA = "0x1823AB670")]
	private static AottgScreenSection[] CreditSections(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x23AA590", Offset = "0x23A8B90", VA = "0x1823AA590")]
	private static void BuildCredits(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x23AAD30", Offset = "0x23A9330", VA = "0x1823AAD30")]
	private static void BuildLoading(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x23AAFD0", Offset = "0x23A95D0", VA = "0x1823AAFD0")]
	private static void BuildReadyPlaceholder(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x23AA7F0", Offset = "0x23A8DF0", VA = "0x1823AA7F0")]
	private static void BuildEmpty(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x23AAA90", Offset = "0x23A9090", VA = "0x1823AAA90")]
	private static void BuildError(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgCreditsScreen()
	{
	}
}
