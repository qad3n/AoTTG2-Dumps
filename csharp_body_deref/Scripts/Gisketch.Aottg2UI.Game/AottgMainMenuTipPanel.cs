using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200014C")]
public sealed class AottgMainMenuTipPanel : AottgComponent
{
	[Token(Token = "0x4000793")]
	public const string LayerId = "main-menu-tip-layer";

	[Token(Token = "0x4000794")]
	public const string PanelId = "main-menu-tip-panel";

	[Token(Token = "0x4000795")]
	public const string BackgroundId = "main-menu-tip-bg";

	[Token(Token = "0x4000796")]
	public const string TextId = "main-menu-tip-text";

	[Token(Token = "0x4000797")]
	private const string TipMotion = "mainMenuTipPanel";

	[Token(Token = "0x4000798")]
	private const string TipSprite = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x40C6F20", Offset = "0x40C6F20", VA = "0x40C6F20", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x40C6E20", Offset = "0x40C6E20", VA = "0x40C6E20")]
	public AottgMainMenuTipPanel()
	{
	}
}
