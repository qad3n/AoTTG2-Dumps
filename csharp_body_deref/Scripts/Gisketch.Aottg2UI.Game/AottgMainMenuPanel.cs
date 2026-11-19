// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002A5")]
public sealed class AottgMainMenuPanel : AottgComponent
{
	[Token(Token = "0x20002A6")]
	private readonly struct MainMenuOption
	{
		[Token(Token = "0x4000D9A")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x4000D9B")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000D9C")]
		[FieldOffset(Offset = "0x10")]
		public readonly string ActionId;

		[Token(Token = "0x4000D9D")]
		[FieldOffset(Offset = "0x18")]
		public readonly string Icon;

		[Token(Token = "0x6001032")]
		[Address(RVA = "0x57C0050", Offset = "0x57BF050", VA = "0x57C0050")]
		public MainMenuOption(string id, string localeKey, string actionId, string icon)
		{
		}
	}

	[Token(Token = "0x20002A7")]
	private readonly struct FooterIcon
	{
		[Token(Token = "0x4000D9E")]
		[FieldOffset(Offset = "0x0")]
		public readonly string Id;

		[Token(Token = "0x4000D9F")]
		[FieldOffset(Offset = "0x8")]
		public readonly string LocaleKey;

		[Token(Token = "0x4000DA0")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Sprite;

		[Token(Token = "0x4000DA1")]
		[FieldOffset(Offset = "0x18")]
		public readonly string ActionId;

		[Token(Token = "0x6001033")]
		[Address(RVA = "0x57C00B0", Offset = "0x57BF0B0", VA = "0x57C00B0")]
		public FooterIcon(string id, string localeKey, string sprite, string actionId)
		{
		}
	}

	[Token(Token = "0x4000D80")]
	public const string PanelId = "main-menu-panel";

	[Token(Token = "0x4000D81")]
	public const string PanelVisualId = "main-menu-panel-visual";

	[Token(Token = "0x4000D82")]
	private const string Panel = "UI/AoTTG/MainMenu/MainMenuPanel";

	[Token(Token = "0x4000D83")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000D84")]
	private const string LogoBlades = "UI/AoTTG/MainMenu/LogoBlades";

	[Token(Token = "0x4000D85")]
	private const string LogoText = "UI/AoTTG/MainMenu/LogoTextOnly";

	[Token(Token = "0x4000D86")]
	private const float PanelWidth = 979f;

	[Token(Token = "0x4000D87")]
	private const float PanelHeight = 1080f;

	[Token(Token = "0x4000D88")]
	private const float LogoSlotWidth = 747.175f;

	[Token(Token = "0x4000D89")]
	private const float LogoSlotHeight = 543.4f;

	[Token(Token = "0x4000D8A")]
	private const float ButtonListX = -86f;

	[Token(Token = "0x4000D8B")]
	private const float ButtonStartY = 360f;

	[Token(Token = "0x4000D8C")]
	private const float ButtonHeight = 118f;

	[Token(Token = "0x4000D8D")]
	private const float ButtonPitch = 74f;

	[Token(Token = "0x4000D8E")]
	private const float BrushGlyphWidth = 37f;

	[Token(Token = "0x4000D8F")]
	private const float BrushHorizontalPadding = 32f;

	[Token(Token = "0x4000D90")]
	private const float FooterIconSize = 48f;

	[Token(Token = "0x4000D91")]
	private const float FooterGap = 10f;

	[Token(Token = "0x4000D92")]
	private const float FooterOffsetX = 22f;

	[Token(Token = "0x4000D93")]
	private const float FooterOffsetY = -1018f;

	[Token(Token = "0x4000D94")]
	private const float ContentPaddingY = 36f;

	[Token(Token = "0x4000D95")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4000D96")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000D97")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MainMenuOption[] Options;

	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x8")]
	private static readonly FooterIcon[] FooterIcons;

	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _quitActionId;

	[Token(Token = "0x170001C6")]
	private static float MainMenuPanelMobileSafeHeight
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x57BEB50", Offset = "0x57BDB50", VA = "0x57BEB50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x57BEB70", Offset = "0x57BDB70", VA = "0x57BEB70")]
	public AottgMainMenuPanel(string quitActionId = "main.quit")
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x57BEBA0", Offset = "0x57BDBA0", VA = "0x57BEBA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x57BEFB0", Offset = "0x57BDFB0", VA = "0x57BEFB0")]
	private static void AddOption(AottgUi buttons, MainMenuOption option, int index, float brushWidth, string quitActionId)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x57BEE80", Offset = "0x57BDE80", VA = "0x57BEE80")]
	private static float BrushWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x57BF240", Offset = "0x57BE240", VA = "0x57BF240")]
	private static float FooterWidth()
	{
		return default(float);
	}
}
