// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomListScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002D6")]
[AottgScreen("room-list", TitleKey = "MainMenu.MultiplayerSettingsPopup.Lobby", SearchTitleKey = "MainMenu.MultiplayerSettingsPopup.Lobby", BackActionId = "multiplayer.room-list.back")]
public sealed class AottgRoomListScreen : AottgScreen
{
	[Token(Token = "0x4000E65")]
	public const string Id = "room-list";

	[Token(Token = "0x4000E66")]
	private const string TitleKey = "MainMenu.MultiplayerSettingsPopup.Lobby";

	[Token(Token = "0x4000E67")]
	private const float ListGap = 12f;

	[Token(Token = "0x170001F0")]
	protected override string RootStyle
	{
		[Token(Token = "0x600113B")]
		[Address(RVA = "0x57D0D80", Offset = "0x57CFD80", VA = "0x57D0D80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F1")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600113C")]
		[Address(RVA = "0x57D0DB0", Offset = "0x57CFDB0", VA = "0x57D0DB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x57D0E80", Offset = "0x57CFE80", VA = "0x57D0E80", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x57D1040", Offset = "0x57D0040", VA = "0x57D1040")]
	private static AottgBrushSidePanelOption[] Options()
	{
		return null;
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x57D1160", Offset = "0x57D0160", VA = "0x57D1160")]
	private static AottgBrushSidePanelOption[] FooterOptions()
	{
		return null;
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x57D1280", Offset = "0x57D0280", VA = "0x57D1280")]
	private static void BuildContent(AottgUi content)
	{
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x57D1610", Offset = "0x57D0610", VA = "0x57D1610")]
	static AottgRoomListScreen()
	{
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x57D17A0", Offset = "0x57D07A0", VA = "0x57D17A0")]
	public AottgRoomListScreen()
	{
	}
}
