// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001D6")]
public sealed class AottgBrushSidePanel : AottgComponent
{
	[Token(Token = "0x40009EB")]
	public const float RenderedWidthAt1080 = 414f;

	[Token(Token = "0x40009EC")]
	private const string Panel = "GisketchUI/Elements/SidePanelBase";

	[Token(Token = "0x40009ED")]
	private const string PanelTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x40009EE")]
	private const string HeaderBrush = "GisketchUI/Elements/brushStroke_02";

	[Token(Token = "0x40009EF")]
	private const float PanelWidth = 920f;

	[Token(Token = "0x40009F0")]
	private const float PanelHeight = 2400f;

	[Token(Token = "0x40009F1")]
	private const float HeaderX = -360f;

	[Token(Token = "0x40009F2")]
	private const float HeaderY = 150f;

	[Token(Token = "0x40009F3")]
	private const float HeaderWidth = 1380f;

	[Token(Token = "0x40009F4")]
	private const float HeaderHeight = 270f;

	[Token(Token = "0x40009F5")]
	private const float ButtonListX = -120f;

	[Token(Token = "0x40009F6")]
	private const float ButtonStartY = 540f;

	[Token(Token = "0x40009F7")]
	private const float FooterStartY = 1880f;

	[Token(Token = "0x40009F8")]
	private const float SingleFooterBottomPadding = 64f;

	[Token(Token = "0x40009F9")]
	private const float ButtonHeight = 236f;

	[Token(Token = "0x40009FA")]
	private const float ButtonPitch = 148f;

	[Token(Token = "0x40009FB")]
	private const float BrushGlyphWidth = 74f;

	[Token(Token = "0x40009FC")]
	private const float BrushHorizontalPadding = 64f;

	[Token(Token = "0x40009FD")]
	private const float ContentShiftY = 75f;

	[Token(Token = "0x40009FE")]
	private const float OutlineOffsetX = 38f;

	[Token(Token = "0x40009FF")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4000A00")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000A01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x4000A02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgBrushSidePanelOption[] _options;

	[Token(Token = "0x4000A03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x44332D0", Offset = "0x44332D0", VA = "0x44332D0")]
	public AottgBrushSidePanel(string title, AottgBrushSidePanelOption[] options, [Optional] AottgBrushSidePanelOption[] footerOptions)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x44333B0", Offset = "0x44333B0", VA = "0x44333B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x44337E0", Offset = "0x44337E0", VA = "0x44337E0")]
	private static void AddOptionList(AottgUi sidePanel, AottgBrushSidePanelOption[] options, string id, string itemIdPrefix, float startY, float brushWidth, bool hideSearch)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x44336F0", Offset = "0x44336F0", VA = "0x44336F0")]
	private static float BrushWidth(params AottgBrushSidePanelOption[][] groups)
	{
		return default(float);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4433A40", Offset = "0x4433A40", VA = "0x4433A40")]
	private static float Top(float y)
	{
		return default(float);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4433A50", Offset = "0x4433A50", VA = "0x4433A50")]
	private static float FooterStartYFor(AottgBrushSidePanelOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4433A80", Offset = "0x4433A80", VA = "0x4433A80")]
	private static void AddButtonRow(AottgUi parent, AottgBrushSidePanelOption option, int index, string motionGroup, string idPrefix, float brushWidth, bool hideSearch)
	{
	}
}
