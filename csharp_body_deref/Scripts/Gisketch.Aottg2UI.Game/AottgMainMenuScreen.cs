// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002AC")]
[AottgScreen("main-menu", TitleKey = "MainMenu.Intro.Title", SearchTitleKey = "Common.Menu", SearchGroup = "main-menu")]
public sealed class AottgMainMenuScreen : AottgScreen
{
	[Token(Token = "0x4000DB2")]
	public const string Id = "main-menu";

	[Token(Token = "0x4000DB3")]
	private const string AccountBannerMotion = "mainMenuTipPanel";

	[Token(Token = "0x4000DB4")]
	private const float AccountBannerMobileSafeOffsetY = 0f;

	[Token(Token = "0x170001C7")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001046")]
		[Address(RVA = "0x57C1660", Offset = "0x57C0660", VA = "0x57C1660", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001047")]
		[Address(RVA = "0x57C1690", Offset = "0x57C0690", VA = "0x57C1690", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x57C1760", Offset = "0x57C0760", VA = "0x57C1760", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x57C1B50", Offset = "0x57C0B50", VA = "0x57C1B50")]
	public AottgMainMenuScreen()
	{
	}
}
