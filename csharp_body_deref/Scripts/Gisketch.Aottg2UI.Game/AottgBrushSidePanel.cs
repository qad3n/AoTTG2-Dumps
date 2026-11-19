// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000341")]
public sealed class AottgBrushSidePanel : AottgComponent
{
	[Token(Token = "0x400103F")]
	public const float RenderedWidthAt1080 = 414f;

	[Token(Token = "0x4001040")]
	private const string Panel = "GisketchUI/Elements/SidePanelBase";

	[Token(Token = "0x4001041")]
	private const string PanelTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4001042")]
	private const string HeaderBrush = "GisketchUI/Elements/brushStroke_02";

	[Token(Token = "0x4001043")]
	private const float PanelWidth = 920f;

	[Token(Token = "0x4001044")]
	private const float PanelHeight = 2400f;

	[Token(Token = "0x4001045")]
	private const float HeaderX = -360f;

	[Token(Token = "0x4001046")]
	private const float HeaderY = 150f;

	[Token(Token = "0x4001047")]
	private const float HeaderWidth = 1380f;

	[Token(Token = "0x4001048")]
	private const float HeaderHeight = 270f;

	[Token(Token = "0x4001049")]
	private const float ButtonListX = -120f;

	[Token(Token = "0x400104A")]
	private const float ButtonStartY = 540f;

	[Token(Token = "0x400104B")]
	private const float FooterStartY = 1880f;

	[Token(Token = "0x400104C")]
	private const float SingleFooterBottomPadding = 64f;

	[Token(Token = "0x400104D")]
	private const float ButtonHeight = 236f;

	[Token(Token = "0x400104E")]
	private const float ButtonPitch = 148f;

	[Token(Token = "0x400104F")]
	private const float BrushGlyphWidth = 74f;

	[Token(Token = "0x4001050")]
	private const float BrushHorizontalPadding = 64f;

	[Token(Token = "0x4001051")]
	private const float LabelRightEdge = 820f;

	[Token(Token = "0x4001052")]
	private const float BrushButtonPaddingX = 224f;

	[Token(Token = "0x4001053")]
	private const float MaxButtonWidth = 1164f;

	[Token(Token = "0x4001054")]
	private const float ContentShiftY = 75f;

	[Token(Token = "0x4001055")]
	private const float OutlineOffsetX = 38f;

	[Token(Token = "0x4001056")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4001057")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4001058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _titleKey;

	[Token(Token = "0x4001059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgBrushSidePanelOption[] _options;

	[Token(Token = "0x400105A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x400105B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _contentOffsetY;

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x5812650", Offset = "0x5811650", VA = "0x5812650")]
	public AottgBrushSidePanel(string titleKey, AottgBrushSidePanelOption[] options, [Optional] AottgBrushSidePanelOption[] footerOptions, float contentOffsetY = 0f)
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x5812710", Offset = "0x5811710", VA = "0x5812710", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x5812CE0", Offset = "0x5811CE0", VA = "0x5812CE0")]
	private static void AddOptionList(AottgUi sidePanel, AottgBrushSidePanelOption[] options, string id, string itemIdPrefix, float startY, float brushWidth, bool hideSearch)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x5812A40", Offset = "0x5811A40", VA = "0x5812A40")]
	private static float BrushWidth(params AottgBrushSidePanelOption[][] groups)
	{
		return default(float);
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x5812F30", Offset = "0x5811F30", VA = "0x5812F30")]
	private static float Top(float y)
	{
		return default(float);
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x5812F40", Offset = "0x5811F40", VA = "0x5812F40")]
	private static float FooterStartYFor(AottgBrushSidePanelOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x5812FC0", Offset = "0x5811FC0", VA = "0x5812FC0")]
	private static void AddButtonRow(AottgUi parent, AottgBrushSidePanelOption option, int index, string motionGroup, string idPrefix, float brushWidth, bool hideSearch)
	{
	}
}
