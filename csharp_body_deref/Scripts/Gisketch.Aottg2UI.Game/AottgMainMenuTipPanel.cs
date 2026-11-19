// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002AF")]
public sealed class AottgMainMenuTipPanel : AottgComponent
{
	[Token(Token = "0x4000DB8")]
	public const string LayerId = "main-menu-tip-layer";

	[Token(Token = "0x4000DB9")]
	public const string PanelId = "main-menu-tip-panel";

	[Token(Token = "0x4000DBA")]
	public const string BackgroundId = "main-menu-tip-bg";

	[Token(Token = "0x4000DBB")]
	public const string TextId = "main-menu-tip-text";

	[Token(Token = "0x4000DBC")]
	private const string TipMotion = "mainMenuTipPanel";

	[Token(Token = "0x4000DBD")]
	private const string TipSprite = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000DBE")]
	private const float TipOffsetY = -10f;

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x57C1C40", Offset = "0x57C0C40", VA = "0x57C1C40", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x57C1B00", Offset = "0x57C0B00", VA = "0x57C1B00")]
	public AottgMainMenuTipPanel()
	{
	}
}
