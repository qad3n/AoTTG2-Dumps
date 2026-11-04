// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000281")]
[AottgScreen("main-menu", Title = "AoTTG 2 Main Menu", TitleKey = "MainMenu.Intro.Title", SearchTitle = "Menu", SearchTitleKey = "Common.Menu", SearchGroup = "main-menu")]
public sealed class AottgMainMenuScreen : AottgScreen
{
	[Token(Token = "0x4000CEE")]
	public const string Id = "main-menu";

	[Token(Token = "0x4000CEF")]
	private const string AccountBannerMotion = "mainMenuTipPanel";

	[Token(Token = "0x170001B8")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000F1E")]
		[Address(RVA = "0x1DE3480", Offset = "0x1DE1A80", VA = "0x181DE3480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F1F")]
		[Address(RVA = "0x1DE3370", Offset = "0x1DE1970", VA = "0x181DE3370", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x1DE2FC0", Offset = "0x1DE15C0", VA = "0x181DE2FC0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgMainMenuScreen()
	{
	}
}
