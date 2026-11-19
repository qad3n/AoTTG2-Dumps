// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGalleryScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGalleryScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200035A")]
[AottgScreen("gallery", TitleKey = "MainMenu.ToolsPopup.GalleryButton", BackActionId = "viewer.exit")]
public sealed class AottgGalleryScreen : AottgViewerScreen
{
	[Token(Token = "0x40010CF")]
	public const string Id = "gallery";

	[Token(Token = "0x40010D0")]
	private const string TitleKey = "MainMenu.ToolsPopup.GalleryButton";

	[Token(Token = "0x17000247")]
	protected override string ViewerId
	{
		[Token(Token = "0x60014EB")]
		[Address(RVA = "0x581A210", Offset = "0x5819210", VA = "0x581A210", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	protected override string PanelTitleKey
	{
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x581A240", Offset = "0x5819240", VA = "0x581A240", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x581A270", Offset = "0x5819270", VA = "0x581A270")]
	public AottgGalleryScreen()
	{
	}
}
