using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001A3")]
public sealed class AottgBrushSidePanel : AottgComponent
{
	[Token(Token = "0x4000925")]
	public const float RenderedWidthAt1080 = 414f;

	[Token(Token = "0x4000926")]
	private const string Panel = "GisketchUI/Elements/SidePanelBase";

	[Token(Token = "0x4000927")]
	private const string PanelTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4000928")]
	private const string HeaderBrush = "GisketchUI/Elements/brushStroke_02";

	[Token(Token = "0x4000929")]
	private const float PanelWidth = 920f;

	[Token(Token = "0x400092A")]
	private const float PanelHeight = 2400f;

	[Token(Token = "0x400092B")]
	private const float HeaderX = -360f;

	[Token(Token = "0x400092C")]
	private const float HeaderY = 150f;

	[Token(Token = "0x400092D")]
	private const float HeaderWidth = 1380f;

	[Token(Token = "0x400092E")]
	private const float HeaderHeight = 270f;

	[Token(Token = "0x400092F")]
	private const float ButtonListX = -120f;

	[Token(Token = "0x4000930")]
	private const float ButtonStartY = 540f;

	[Token(Token = "0x4000931")]
	private const float FooterStartY = 1880f;

	[Token(Token = "0x4000932")]
	private const float SingleFooterBottomPadding = 64f;

	[Token(Token = "0x4000933")]
	private const float ButtonHeight = 236f;

	[Token(Token = "0x4000934")]
	private const float ButtonPitch = 148f;

	[Token(Token = "0x4000935")]
	private const float BrushGlyphWidth = 74f;

	[Token(Token = "0x4000936")]
	private const float BrushHorizontalPadding = 64f;

	[Token(Token = "0x4000937")]
	private const float ContentShiftY = 75f;

	[Token(Token = "0x4000938")]
	private const float OutlineOffsetX = 38f;

	[Token(Token = "0x4000939")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x400093A")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x400093B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x400093C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgBrushSidePanelOption[] _options;

	[Token(Token = "0x400093D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x41019C0", Offset = "0x41019C0", VA = "0x41019C0")]
	public AottgBrushSidePanel(string title, AottgBrushSidePanelOption[] options, [Optional] AottgBrushSidePanelOption[] footerOptions)
	{
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x4101AA0", Offset = "0x4101AA0", VA = "0x4101AA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x4101ED0", Offset = "0x4101ED0", VA = "0x4101ED0")]
	private static void AddOptionList(AottgUi sidePanel, AottgBrushSidePanelOption[] options, string id, string itemIdPrefix, float startY, float brushWidth, bool hideSearch)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x4101DE0", Offset = "0x4101DE0", VA = "0x4101DE0")]
	private static float BrushWidth(params AottgBrushSidePanelOption[][] groups)
	{
		return default(float);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x4102130", Offset = "0x4102130", VA = "0x4102130")]
	private static float Top(float y)
	{
		return default(float);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x4102140", Offset = "0x4102140", VA = "0x4102140")]
	private static float FooterStartYFor(AottgBrushSidePanelOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x4102170", Offset = "0x4102170", VA = "0x4102170")]
	private static void AddButtonRow(AottgUi parent, AottgBrushSidePanelOption option, int index, string motionGroup, string idPrefix, float brushWidth, bool hideSearch)
	{
	}
}
