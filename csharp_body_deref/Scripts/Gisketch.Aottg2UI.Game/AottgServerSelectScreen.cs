// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E3")]
[AottgScreen("server-select", TitleKey = "MainMenu.Intro.MultiplayerButton", SearchTitleKey = "MainMenu.Intro.MultiplayerButton", SearchGroup = "main-menu", BackActionId = "multiplayer.server-select.back")]
public sealed class AottgServerSelectScreen : AottgScreen
{
	[Token(Token = "0x4000E9D")]
	public const string Id = "server-select";

	[Token(Token = "0x4000E9E")]
	public const float SidePanelOffsetY = 120f;

	[Token(Token = "0x4000E9F")]
	private const string TitleKey = "MainMenu.Intro.MultiplayerButton";

	[Token(Token = "0x4000EA0")]
	private const float WarningWidth = 860f;

	[Token(Token = "0x170001F7")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x57D4AE0", Offset = "0x57D3AE0", VA = "0x57D4AE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x57D4B10", Offset = "0x57D3B10", VA = "0x57D4B10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x57D4BE0", Offset = "0x57D3BE0", VA = "0x57D4BE0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x57D51B0", Offset = "0x57D41B0", VA = "0x57D51B0")]
	private static void BuildContent(AottgUi content)
	{
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x57D4D80", Offset = "0x57D3D80", VA = "0x57D4D80")]
	private static AottgBrushSidePanelOption[] Options()
	{
		return null;
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x57D4EA0", Offset = "0x57D3EA0", VA = "0x57D4EA0")]
	private static AottgBrushSidePanelOption[] FooterOptions()
	{
		return null;
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x57D5330", Offset = "0x57D4330", VA = "0x57D5330")]
	public AottgServerSelectScreen()
	{
	}
}
