// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSnapshotViewerScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSnapshotViewerScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200035B")]
[AottgScreen("snapshot-viewer", TitleKey = "MainMenu.ToolsPopup.SnapshotViewerButton", BackActionId = "viewer.exit")]
public sealed class AottgSnapshotViewerScreen : AottgViewerScreen
{
	[Token(Token = "0x40010D1")]
	public const string Id = "snapshot-viewer";

	[Token(Token = "0x40010D2")]
	private const string TitleKey = "MainMenu.ToolsPopup.SnapshotViewerButton";

	[Token(Token = "0x40010D3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] SnapshotOptions;

	[Token(Token = "0x17000249")]
	protected override string ViewerId
	{
		[Token(Token = "0x60014EE")]
		[Address(RVA = "0x581A2E0", Offset = "0x58192E0", VA = "0x581A2E0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024A")]
	protected override string PanelTitleKey
	{
		[Token(Token = "0x60014EF")]
		[Address(RVA = "0x581A310", Offset = "0x5819310", VA = "0x581A310", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024B")]
	protected override AottgBrushSidePanelOption[] Options
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x581A340", Offset = "0x5819340", VA = "0x581A340", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x581A3B0", Offset = "0x58193B0", VA = "0x581A3B0")]
	public AottgSnapshotViewerScreen()
	{
	}
}
