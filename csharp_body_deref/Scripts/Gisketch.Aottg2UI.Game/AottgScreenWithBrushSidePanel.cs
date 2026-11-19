// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034E")]
public sealed class AottgScreenWithBrushSidePanel : AottgComponent
{
	[Token(Token = "0x4001098")]
	private const string FooterTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4001099")]
	internal const float ContentPadding = 56f;

	[Token(Token = "0x400109A")]
	internal const float ContentTopPadding = 98f;

	[Token(Token = "0x400109B")]
	internal const float ContentFooterHeight = 132f;

	[Token(Token = "0x400109C")]
	internal const float SidePanelOverlapPadding = 526f;

	[Token(Token = "0x400109D")]
	private const float SectionHeaderGap = 12f;

	[Token(Token = "0x400109E")]
	private const float SectionGap = 48f;

	[Token(Token = "0x400109F")]
	private const float SectionContentMaxWidth = 1120f;

	[Token(Token = "0x40010A0")]
	private const float ContentIntroDuration = 0.28f;

	[Token(Token = "0x40010A1")]
	private const float SectionEnterDuration = 0.15f;

	[Token(Token = "0x40010A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40010A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _titleKey;

	[Token(Token = "0x40010A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgScreenSection[] _sections;

	[Token(Token = "0x40010A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly AottgSidePanelLayoutMode _layoutMode;

	[Token(Token = "0x40010A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x40010A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Action<AottgUi> _buildContentFooter;

	[Token(Token = "0x40010A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly AottgBrushSidePanel _sidePanel;

	[Token(Token = "0x40010A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<AottgUi> _buildContent;

	[Token(Token = "0x40010AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _deferScrollSections;

	[Token(Token = "0x40010AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private readonly bool _lazySections;

	[Token(Token = "0x40010AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x52")]
	private readonly bool _hideSectionChrome;

	[Token(Token = "0x40010AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private readonly AottgSidePanelContentScrollMode _contentScrollMode;

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x5816540", Offset = "0x5815540", VA = "0x5816540")]
	static AottgScreenWithBrushSidePanel()
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x5816550", Offset = "0x5815550", VA = "0x5816550")]
	public AottgScreenWithBrushSidePanel(AottgBrushSidePanel sidePanel, Action<AottgUi> buildContent, [Optional] Action<AottgUi> buildContentFooter, AottgSidePanelContentScrollMode contentScrollMode = AottgSidePanelContentScrollMode.OuterScroll)
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x58165F0", Offset = "0x58155F0", VA = "0x58165F0")]
	public AottgScreenWithBrushSidePanel(string titleKey, AottgScreenSection[] sections, AottgSidePanelLayoutMode layoutMode, [Optional] AottgBrushSidePanelOption[] footerOptions, [Optional][DefaultParameterValue("brush-side-panel")] string id, [Optional] Action<AottgUi> buildContentFooter, bool deferScrollSections = false, bool lazySections = false, bool hideSectionChrome = false, AottgSidePanelContentScrollMode contentScrollMode = AottgSidePanelContentScrollMode.OuterScroll)
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x5816710", Offset = "0x5815710", VA = "0x5816710", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x5816830", Offset = "0x5815830", VA = "0x5816830")]
	private void BuildSectioned(AottgUi ui)
	{
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x5816730", Offset = "0x5815730", VA = "0x5816730")]
	private void BuildLegacy(AottgUi ui)
	{
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x58170B0", Offset = "0x58160B0", VA = "0x58170B0")]
	private void BuildContentLayer(AottgUi ui, Action<AottgUi> build, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x5817370", Offset = "0x5816370", VA = "0x5817370")]
	private static GisketchLayoutDefinition ContentLayerLayout(Action<AottgUi> buildFooter, bool fillsHeight)
	{
		return null;
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x5817490", Offset = "0x5816490", VA = "0x5817490")]
	private static GisketchLayoutDefinition SectionOwnedContentLayerLayout()
	{
		return null;
	}

	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x5817560", Offset = "0x5816560", VA = "0x5817560")]
	private void AddContentFooter(AottgUi content, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x5817760", Offset = "0x5816760", VA = "0x5817760")]
	private void AddFooterTopEdge(AottgUi footer)
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x5817920", Offset = "0x5816920", VA = "0x5817920")]
	private void BuildSections(AottgUi content, bool deferSections, bool lazySections)
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x5817D20", Offset = "0x5816D20", VA = "0x5817D20")]
	private void BuildSection(AottgUi content, int index)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x58180F0", Offset = "0x58170F0", VA = "0x58180F0")]
	private GisketchLayoutDefinition SectionLayout()
	{
		return null;
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x5818240", Offset = "0x5817240", VA = "0x5818240")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x58182E0", Offset = "0x58172E0", VA = "0x58182E0")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x5817010", Offset = "0x5816010", VA = "0x5817010")]
	private bool ShouldDeferSections()
	{
		return default(bool);
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x5816CA0", Offset = "0x5815CA0", VA = "0x5816CA0")]
	private bool ShouldLazySections()
	{
		return default(bool);
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x5818380", Offset = "0x5817380", VA = "0x5818380")]
	private void AddSectionHeader(AottgUi panel, AottgScreenSection section, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x5818690", Offset = "0x5817690", VA = "0x5818690")]
	private GisketchNodeDefinition SectionHeader(AottgUi parent, AottgScreenSection section, AottgScreenSectionContext context)
	{
		return null;
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x5816BE0", Offset = "0x5815BE0", VA = "0x5816BE0")]
	private string[] SectionIds()
	{
		return null;
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x5816CD0", Offset = "0x5815CD0", VA = "0x5816CD0")]
	private AottgBrushSidePanelOption[] SectionOptions(bool lazySections)
	{
		return null;
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x58180A0", Offset = "0x58170A0", VA = "0x58180A0")]
	private string SectionRootId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x5818820", Offset = "0x5817820", VA = "0x5818820")]
	private string SectionHeaderId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x58188C0", Offset = "0x58178C0", VA = "0x58188C0")]
	private string SectionBodyId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x5817290", Offset = "0x5816290", VA = "0x5817290")]
	private static GisketchLayoutDefinition FullScreenAbsolute()
	{
		return null;
	}
}
