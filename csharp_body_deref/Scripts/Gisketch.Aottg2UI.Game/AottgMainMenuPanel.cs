using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000142")]
public sealed class AottgMainMenuPanel : AottgComponent
{
	[Token(Token = "0x2000143")]
	private readonly struct MainMenuOption
	{
		[Token(Token = "0x4000775")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Label;

		[Token(Token = "0x4000776")]
		[FieldOffset(Offset = "0x8")]
		public readonly string SearchTitle;

		[Token(Token = "0x4000777")]
		[FieldOffset(Offset = "0x10")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000778")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x4000779")]
		[FieldOffset(Offset = "0x20")]
		public readonly string Icon;

		[Token(Token = "0x170000DC")]
		public string Id
		{
			[Token(Token = "0x60006E8")]
			[Address(RVA = "0x40C4050", Offset = "0x40C4050", VA = "0x40C4050")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x40C5330", Offset = "0x40C5330", VA = "0x40C5330")]
		public MainMenuOption(string label, string searchTitle, string localeKey, string actionId, string icon)
		{
		}
	}

	[Token(Token = "0x2000144")]
	private readonly struct FooterIcon
	{
		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Label;

		[Token(Token = "0x400077B")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x400077C")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Sprite;

		[Token(Token = "0x400077D")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x170000DD")]
		public string Id
		{
			[Token(Token = "0x60006EA")]
			[Address(RVA = "0x40C5400", Offset = "0x40C5400", VA = "0x40C5400")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x40C53A0", Offset = "0x40C53A0", VA = "0x40C53A0")]
		public FooterIcon(string label, string localeKey, string sprite, string actionId)
		{
		}
	}

	[Token(Token = "0x400075A")]
	public const string PanelId = "main-menu-panel";

	[Token(Token = "0x400075B")]
	public const string PanelVisualId = "main-menu-panel-visual";

	[Token(Token = "0x400075C")]
	private const string Panel = "UI/AoTTG/MainMenu/MainMenuPanel";

	[Token(Token = "0x400075D")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x400075E")]
	private const string LogoBlades = "UI/AoTTG/MainMenu/LogoBlades";

	[Token(Token = "0x400075F")]
	private const string LogoText = "UI/AoTTG/MainMenu/LogoTextOnly";

	[Token(Token = "0x4000760")]
	private const float PanelWidth = 979f;

	[Token(Token = "0x4000761")]
	private const float PanelHeight = 1080f;

	[Token(Token = "0x4000762")]
	private const float LogoSlotWidth = 747.175f;

	[Token(Token = "0x4000763")]
	private const float LogoSlotHeight = 543.4f;

	[Token(Token = "0x4000764")]
	private const float ButtonListX = -86f;

	[Token(Token = "0x4000765")]
	private const float ButtonStartY = 360f;

	[Token(Token = "0x4000766")]
	private const float ButtonHeight = 118f;

	[Token(Token = "0x4000767")]
	private const float ButtonPitch = 74f;

	[Token(Token = "0x4000768")]
	private const float BrushGlyphWidth = 37f;

	[Token(Token = "0x4000769")]
	private const float BrushHorizontalPadding = 32f;

	[Token(Token = "0x400076A")]
	private const float FooterIconSize = 48f;

	[Token(Token = "0x400076B")]
	private const float FooterGap = 10f;

	[Token(Token = "0x400076C")]
	private const float FooterOffsetX = 22f;

	[Token(Token = "0x400076D")]
	private const float FooterOffsetY = -1018f;

	[Token(Token = "0x400076E")]
	private const float ContentPaddingY = 36f;

	[Token(Token = "0x400076F")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4000770")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MainMenuOption[] Options;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x8")]
	private static readonly FooterIcon[] FooterIcons;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _quitActionId;

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x40C3900", Offset = "0x40C3900", VA = "0x40C3900")]
	public AottgMainMenuPanel(string quitActionId = "main.quit")
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x40C3930", Offset = "0x40C3930", VA = "0x40C3930", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x40C3D20", Offset = "0x40C3D20", VA = "0x40C3D20")]
	private static void AddOption(AottgUi buttons, MainMenuOption option, int index, float brushWidth, string quitActionId)
	{
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x40C3C00", Offset = "0x40C3C00", VA = "0x40C3C00")]
	private static float BrushWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x40C40C0", Offset = "0x40C40C0", VA = "0x40C40C0")]
	private static float FooterWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x40C4160", Offset = "0x40C4160", VA = "0x40C4160")]
	private static string Localize(string key, string fallback)
	{
		return null;
	}
}
