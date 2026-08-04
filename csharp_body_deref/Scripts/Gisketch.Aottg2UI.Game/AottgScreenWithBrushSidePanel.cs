// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001E1")]
public sealed class AottgScreenWithBrushSidePanel : AottgComponent
{
	[Token(Token = "0x4000A32")]
	private const string FooterTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4000A33")]
	private const float ContentPadding = 56f;

	[Token(Token = "0x4000A34")]
	private const float ContentTopPadding = 98f;

	[Token(Token = "0x4000A35")]
	private const float ContentFooterHeight = 132f;

	[Token(Token = "0x4000A36")]
	private const float SidePanelOverlapPadding = 526f;

	[Token(Token = "0x4000A37")]
	private const float SectionHeaderGap = 12f;

	[Token(Token = "0x4000A38")]
	private const float SectionGap = 48f;

	[Token(Token = "0x4000A39")]
	private const float SectionContentMaxWidth = 1120f;

	[Token(Token = "0x4000A3A")]
	private const float ContentIntroDuration = 0.28f;

	[Token(Token = "0x4000A3B")]
	private const float SectionEnterDuration = 0.15f;

	[Token(Token = "0x4000A3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgScreenSection[] _sections;

	[Token(Token = "0x4000A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly AottgSidePanelLayoutMode _layoutMode;

	[Token(Token = "0x4000A40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x4000A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Action<AottgUi> _buildContentFooter;

	[Token(Token = "0x4000A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly AottgBrushSidePanel _sidePanel;

	[Token(Token = "0x4000A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<AottgUi> _buildContent;

	[Token(Token = "0x4000A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _deferScrollSections;

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x4435790", Offset = "0x4435790", VA = "0x4435790")]
	static AottgScreenWithBrushSidePanel()
	{
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x44357A0", Offset = "0x44357A0", VA = "0x44357A0")]
	public AottgScreenWithBrushSidePanel(AottgBrushSidePanel sidePanel, Action<AottgUi> buildContent, [Optional] Action<AottgUi> buildContentFooter)
	{
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x4435830", Offset = "0x4435830", VA = "0x4435830")]
	public AottgScreenWithBrushSidePanel(string title, AottgScreenSection[] sections, AottgSidePanelLayoutMode layoutMode, [Optional] AottgBrushSidePanelOption[] footerOptions, [Optional][DefaultParameterValue("brush-side-panel")] string id, [Optional] Action<AottgUi> buildContentFooter, bool deferScrollSections = false)
	{
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x4435960", Offset = "0x4435960", VA = "0x4435960", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x4435A70", Offset = "0x4435A70", VA = "0x4435A70")]
	private void BuildSectioned(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x4435970", Offset = "0x4435970", VA = "0x4435970")]
	private void BuildLegacy(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x4436420", Offset = "0x4436420", VA = "0x4436420")]
	private void BuildContentLayer(AottgUi ui, Action<AottgUi> build, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x44366F0", Offset = "0x44366F0", VA = "0x44366F0")]
	private void AddContentFooter(AottgUi content, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x44368F0", Offset = "0x44368F0", VA = "0x44368F0")]
	private void AddFooterTopEdge(AottgUi footer)
	{
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x4436AB0", Offset = "0x4436AB0", VA = "0x4436AB0")]
	private void BuildSections(AottgUi content, bool deferSections)
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4436D90", Offset = "0x4436D90", VA = "0x4436D90")]
	private void BuildSection(AottgUi content, int index)
	{
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x4437250", Offset = "0x4437250", VA = "0x4437250")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x44372F0", Offset = "0x44372F0", VA = "0x44372F0")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x44363A0", Offset = "0x44363A0", VA = "0x44363A0")]
	private bool ShouldDeferSections()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4437390", Offset = "0x4437390", VA = "0x4437390")]
	private void AddSectionHeader(AottgUi panel, AottgScreenSection section, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4435E60", Offset = "0x4435E60", VA = "0x4435E60")]
	private string[] SectionIds()
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4435F30", Offset = "0x4435F30", VA = "0x4435F30")]
	private AottgBrushSidePanelOption[] SectionOptions()
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4437200", Offset = "0x4437200", VA = "0x4437200")]
	private string SectionRootId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x44377C0", Offset = "0x44377C0", VA = "0x44377C0")]
	private string SectionHeaderId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4437850", Offset = "0x4437850", VA = "0x4437850")]
	private string SectionBodyId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4436600", Offset = "0x4436600", VA = "0x4436600")]
	private static GisketchLayoutDefinition FullScreenAbsolute()
	{
		return null;
	}
}
