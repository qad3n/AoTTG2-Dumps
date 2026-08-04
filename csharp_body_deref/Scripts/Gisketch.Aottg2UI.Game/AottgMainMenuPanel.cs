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

[Token(Token = "0x2000174")]
public sealed class AottgMainMenuPanel : AottgComponent
{
	[Token(Token = "0x2000175")]
	private readonly struct MainMenuOption
	{
		[Token(Token = "0x4000834")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Label;

		[Token(Token = "0x4000835")]
		[FieldOffset(Offset = "0x8")]
		public readonly string SearchTitle;

		[Token(Token = "0x4000836")]
		[FieldOffset(Offset = "0x10")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000837")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x4000838")]
		[FieldOffset(Offset = "0x20")]
		public readonly string Icon;

		[Token(Token = "0x17000132")]
		public string Id
		{
			[Token(Token = "0x6000855")]
			[Address(RVA = "0x43F4F20", Offset = "0x43F4F20", VA = "0x43F4F20")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000854")]
		[Address(RVA = "0x43F6200", Offset = "0x43F6200", VA = "0x43F6200")]
		public MainMenuOption(string label, string searchTitle, string localeKey, string actionId, string icon)
		{
		}
	}

	[Token(Token = "0x2000176")]
	private readonly struct FooterIcon
	{
		[Token(Token = "0x4000839")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Label;

		[Token(Token = "0x400083A")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x400083B")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Sprite;

		[Token(Token = "0x400083C")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x17000133")]
		public string Id
		{
			[Token(Token = "0x6000857")]
			[Address(RVA = "0x43F62D0", Offset = "0x43F62D0", VA = "0x43F62D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000856")]
		[Address(RVA = "0x43F6270", Offset = "0x43F6270", VA = "0x43F6270")]
		public FooterIcon(string label, string localeKey, string sprite, string actionId)
		{
		}
	}

	[Token(Token = "0x4000819")]
	public const string PanelId = "main-menu-panel";

	[Token(Token = "0x400081A")]
	public const string PanelVisualId = "main-menu-panel-visual";

	[Token(Token = "0x400081B")]
	private const string Panel = "UI/AoTTG/MainMenu/MainMenuPanel";

	[Token(Token = "0x400081C")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x400081D")]
	private const string LogoBlades = "UI/AoTTG/MainMenu/LogoBlades";

	[Token(Token = "0x400081E")]
	private const string LogoText = "UI/AoTTG/MainMenu/LogoTextOnly";

	[Token(Token = "0x400081F")]
	private const float PanelWidth = 979f;

	[Token(Token = "0x4000820")]
	private const float PanelHeight = 1080f;

	[Token(Token = "0x4000821")]
	private const float LogoSlotWidth = 747.175f;

	[Token(Token = "0x4000822")]
	private const float LogoSlotHeight = 543.4f;

	[Token(Token = "0x4000823")]
	private const float ButtonListX = -86f;

	[Token(Token = "0x4000824")]
	private const float ButtonStartY = 360f;

	[Token(Token = "0x4000825")]
	private const float ButtonHeight = 118f;

	[Token(Token = "0x4000826")]
	private const float ButtonPitch = 74f;

	[Token(Token = "0x4000827")]
	private const float BrushGlyphWidth = 37f;

	[Token(Token = "0x4000828")]
	private const float BrushHorizontalPadding = 32f;

	[Token(Token = "0x4000829")]
	private const float FooterIconSize = 48f;

	[Token(Token = "0x400082A")]
	private const float FooterGap = 10f;

	[Token(Token = "0x400082B")]
	private const float FooterOffsetX = 22f;

	[Token(Token = "0x400082C")]
	private const float FooterOffsetY = -1018f;

	[Token(Token = "0x400082D")]
	private const float ContentPaddingY = 36f;

	[Token(Token = "0x400082E")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x400082F")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MainMenuOption[] Options;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x8")]
	private static readonly FooterIcon[] FooterIcons;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _quitActionId;

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x43F47E0", Offset = "0x43F47E0", VA = "0x43F47E0")]
	public AottgMainMenuPanel(string quitActionId = "main.quit")
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x43F4810", Offset = "0x43F4810", VA = "0x43F4810", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x43F4C00", Offset = "0x43F4C00", VA = "0x43F4C00")]
	private static void AddOption(AottgUi buttons, MainMenuOption option, int index, float brushWidth, string quitActionId)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x43F4AE0", Offset = "0x43F4AE0", VA = "0x43F4AE0")]
	private static float BrushWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x43F4F90", Offset = "0x43F4F90", VA = "0x43F4F90")]
	private static float FooterWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x43F5030", Offset = "0x43F5030", VA = "0x43F5030")]
	private static string Localize(string key, string fallback)
	{
		return null;
	}
}
