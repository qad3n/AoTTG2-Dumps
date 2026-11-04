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

[Token(Token = "0x20002E4")]
public sealed class AottgBrushSidePanel : AottgComponent
{
	[Token(Token = "0x4000EB0")]
	public const float RenderedWidthAt1080 = 414f;

	[Token(Token = "0x4000EB1")]
	private const string Panel = "GisketchUI/Elements/SidePanelBase";

	[Token(Token = "0x4000EB2")]
	private const string PanelTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4000EB3")]
	private const string HeaderBrush = "GisketchUI/Elements/brushStroke_02";

	[Token(Token = "0x4000EB4")]
	private const float PanelWidth = 920f;

	[Token(Token = "0x4000EB5")]
	private const float PanelHeight = 2400f;

	[Token(Token = "0x4000EB6")]
	private const float HeaderX = -360f;

	[Token(Token = "0x4000EB7")]
	private const float HeaderY = 150f;

	[Token(Token = "0x4000EB8")]
	private const float HeaderWidth = 1380f;

	[Token(Token = "0x4000EB9")]
	private const float HeaderHeight = 270f;

	[Token(Token = "0x4000EBA")]
	private const float ButtonListX = -120f;

	[Token(Token = "0x4000EBB")]
	private const float ButtonStartY = 540f;

	[Token(Token = "0x4000EBC")]
	private const float FooterStartY = 1880f;

	[Token(Token = "0x4000EBD")]
	private const float SingleFooterBottomPadding = 64f;

	[Token(Token = "0x4000EBE")]
	private const float ButtonHeight = 236f;

	[Token(Token = "0x4000EBF")]
	private const float ButtonPitch = 148f;

	[Token(Token = "0x4000EC0")]
	private const float BrushGlyphWidth = 74f;

	[Token(Token = "0x4000EC1")]
	private const float BrushHorizontalPadding = 64f;

	[Token(Token = "0x4000EC2")]
	private const float ContentShiftY = 75f;

	[Token(Token = "0x4000EC3")]
	private const float OutlineOffsetX = 38f;

	[Token(Token = "0x4000EC4")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4000EC5")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4000EC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x4000EC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _titleKey;

	[Token(Token = "0x4000EC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgBrushSidePanelOption[] _options;

	[Token(Token = "0x4000EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x1E29E40", Offset = "0x1E28440", VA = "0x181E29E40")]
	public AottgBrushSidePanel(string title, AottgBrushSidePanelOption[] options, [Optional] AottgBrushSidePanelOption[] footerOptions, [Optional] string titleKey)
	{
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x1E29980", Offset = "0x1E27F80", VA = "0x181E29980", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x1E29650", Offset = "0x1E27C50", VA = "0x181E29650")]
	private static void AddOptionList(AottgUi sidePanel, AottgBrushSidePanelOption[] options, string id, string itemIdPrefix, float startY, float brushWidth, bool hideSearch)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x1E298D0", Offset = "0x1E27ED0", VA = "0x181E298D0")]
	private static float BrushWidth(params AottgBrushSidePanelOption[][] groups)
	{
		return default(float);
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x1E29E30", Offset = "0x1E28430", VA = "0x181E29E30")]
	private static float Top(float y)
	{
		return default(float);
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x1E29E00", Offset = "0x1E28400", VA = "0x181E29E00")]
	private static float FooterStartYFor(AottgBrushSidePanelOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x1E29380", Offset = "0x1E27980", VA = "0x181E29380")]
	private static void AddButtonRow(AottgUi parent, AottgBrushSidePanelOption option, int index, string motionGroup, string idPrefix, float brushWidth, bool hideSearch)
	{
	}
}
