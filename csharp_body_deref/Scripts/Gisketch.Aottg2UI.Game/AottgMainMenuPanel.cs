// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200027A")]
public sealed class AottgMainMenuPanel : AottgComponent
{
	[Token(Token = "0x200027B")]
	private readonly struct MainMenuOption
	{
		[Token(Token = "0x4000CD5")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Label;

		[Token(Token = "0x4000CD6")]
		[FieldOffset(Offset = "0x8")]
		public readonly string SearchTitle;

		[Token(Token = "0x4000CD7")]
		[FieldOffset(Offset = "0x10")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000CD8")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x4000CD9")]
		[FieldOffset(Offset = "0x20")]
		public readonly string Icon;

		[Token(Token = "0x170001B6")]
		public string Id
		{
			[Token(Token = "0x6000F09")]
			[Address(RVA = "0x1DE7C00", Offset = "0x1DE6200", VA = "0x181DE7C00")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F08")]
		[Address(RVA = "0x1DE7B80", Offset = "0x1DE6180", VA = "0x181DE7B80")]
		public MainMenuOption(string label, string searchTitle, string localeKey, string actionId, string icon)
		{
		}
	}

	[Token(Token = "0x200027C")]
	private readonly struct FooterIcon
	{
		[Token(Token = "0x4000CDA")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Label;

		[Token(Token = "0x4000CDB")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000CDC")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Sprite;

		[Token(Token = "0x4000CDD")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x170001B7")]
		public string Id
		{
			[Token(Token = "0x6000F0B")]
			[Address(RVA = "0x1DE7B60", Offset = "0x1DE6160", VA = "0x181DE7B60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0x16E8730", Offset = "0x16E6D30", VA = "0x1816E8730")]
		public FooterIcon(string label, string localeKey, string sprite, string actionId)
		{
		}
	}

	[Token(Token = "0x4000CBA")]
	public const string PanelId = "main-menu-panel";

	[Token(Token = "0x4000CBB")]
	public const string PanelVisualId = "main-menu-panel-visual";

	[Token(Token = "0x4000CBC")]
	private const string Panel = "UI/AoTTG/MainMenu/MainMenuPanel";

	[Token(Token = "0x4000CBD")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000CBE")]
	private const string LogoBlades = "UI/AoTTG/MainMenu/LogoBlades";

	[Token(Token = "0x4000CBF")]
	private const string LogoText = "UI/AoTTG/MainMenu/LogoTextOnly";

	[Token(Token = "0x4000CC0")]
	private const float PanelWidth = 979f;

	[Token(Token = "0x4000CC1")]
	private const float PanelHeight = 1080f;

	[Token(Token = "0x4000CC2")]
	private const float LogoSlotWidth = 747.175f;

	[Token(Token = "0x4000CC3")]
	private const float LogoSlotHeight = 543.4f;

	[Token(Token = "0x4000CC4")]
	private const float ButtonListX = -86f;

	[Token(Token = "0x4000CC5")]
	private const float ButtonStartY = 360f;

	[Token(Token = "0x4000CC6")]
	private const float ButtonHeight = 118f;

	[Token(Token = "0x4000CC7")]
	private const float ButtonPitch = 74f;

	[Token(Token = "0x4000CC8")]
	private const float BrushGlyphWidth = 37f;

	[Token(Token = "0x4000CC9")]
	private const float BrushHorizontalPadding = 32f;

	[Token(Token = "0x4000CCA")]
	private const float FooterIconSize = 48f;

	[Token(Token = "0x4000CCB")]
	private const float FooterGap = 10f;

	[Token(Token = "0x4000CCC")]
	private const float FooterOffsetX = 22f;

	[Token(Token = "0x4000CCD")]
	private const float FooterOffsetY = -1018f;

	[Token(Token = "0x4000CCE")]
	private const float ContentPaddingY = 36f;

	[Token(Token = "0x4000CCF")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4000CD0")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000CD1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MainMenuOption[] Options;

	[Token(Token = "0x4000CD2")]
	[FieldOffset(Offset = "0x8")]
	private static readonly FooterIcon[] FooterIcons;

	[Token(Token = "0x4000CD3")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x4000CD4")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _quitActionId;

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public AottgMainMenuPanel(string quitActionId = "main.quit")
	{
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x1DE1D00", Offset = "0x1DE0300", VA = "0x181DE1D00", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x1DE18E0", Offset = "0x1DDFEE0", VA = "0x181DE18E0")]
	private static void AddOption(AottgUi buttons, MainMenuOption option, int index, float brushWidth, string quitActionId)
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x1DE1C20", Offset = "0x1DE0220", VA = "0x181DE1C20")]
	private static float BrushWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x1DE2130", Offset = "0x1DE0730", VA = "0x181DE2130")]
	private static float FooterWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x1DE21B0", Offset = "0x1DE07B0", VA = "0x181DE21B0")]
	private static string Localize(string key, string fallback)
	{
		return null;
	}
}
