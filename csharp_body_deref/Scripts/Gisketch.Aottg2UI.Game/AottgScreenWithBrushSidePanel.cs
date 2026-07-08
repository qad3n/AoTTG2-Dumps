using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001AE")]
public sealed class AottgScreenWithBrushSidePanel : AottgComponent
{
	[Token(Token = "0x400096C")]
	private const string FooterTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x400096D")]
	private const float ContentPadding = 56f;

	[Token(Token = "0x400096E")]
	private const float ContentTopPadding = 98f;

	[Token(Token = "0x400096F")]
	private const float ContentFooterHeight = 132f;

	[Token(Token = "0x4000970")]
	private const float SidePanelOverlapPadding = 526f;

	[Token(Token = "0x4000971")]
	private const float SectionHeaderGap = 12f;

	[Token(Token = "0x4000972")]
	private const float SectionGap = 48f;

	[Token(Token = "0x4000973")]
	private const float SectionContentMaxWidth = 1120f;

	[Token(Token = "0x4000974")]
	private const float ContentIntroDuration = 0.28f;

	[Token(Token = "0x4000975")]
	private const float SectionEnterDuration = 0.15f;

	[Token(Token = "0x4000976")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000977")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000978")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgScreenSection[] _sections;

	[Token(Token = "0x4000979")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly AottgSidePanelLayoutMode _layoutMode;

	[Token(Token = "0x400097A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x400097B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Action<AottgUi> _buildContentFooter;

	[Token(Token = "0x400097C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly AottgBrushSidePanel _sidePanel;

	[Token(Token = "0x400097D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<AottgUi> _buildContent;

	[Token(Token = "0x400097E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _deferScrollSections;

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x4103C30", Offset = "0x4103C30", VA = "0x4103C30")]
	static AottgScreenWithBrushSidePanel()
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x4103C40", Offset = "0x4103C40", VA = "0x4103C40")]
	public AottgScreenWithBrushSidePanel(AottgBrushSidePanel sidePanel, Action<AottgUi> buildContent, [Optional] Action<AottgUi> buildContentFooter)
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x40F8240", Offset = "0x40F8240", VA = "0x40F8240")]
	public AottgScreenWithBrushSidePanel(string title, AottgScreenSection[] sections, AottgSidePanelLayoutMode layoutMode, [Optional] AottgBrushSidePanelOption[] footerOptions, [Optional][DefaultParameterValue("brush-side-panel")] string id, [Optional] Action<AottgUi> buildContentFooter, bool deferScrollSections = false)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x4103CD0", Offset = "0x4103CD0", VA = "0x4103CD0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x4103DE0", Offset = "0x4103DE0", VA = "0x4103DE0")]
	private void BuildSectioned(AottgUi ui)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x4103CE0", Offset = "0x4103CE0", VA = "0x4103CE0")]
	private void BuildLegacy(AottgUi ui)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x4104790", Offset = "0x4104790", VA = "0x4104790")]
	private void BuildContentLayer(AottgUi ui, Action<AottgUi> build, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x4104A60", Offset = "0x4104A60", VA = "0x4104A60")]
	private void AddContentFooter(AottgUi content, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x4104C60", Offset = "0x4104C60", VA = "0x4104C60")]
	private void AddFooterTopEdge(AottgUi footer)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x4104E20", Offset = "0x4104E20", VA = "0x4104E20")]
	private void BuildSections(AottgUi content, bool deferSections)
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x4105100", Offset = "0x4105100", VA = "0x4105100")]
	private void BuildSection(AottgUi content, int index)
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x41055C0", Offset = "0x41055C0", VA = "0x41055C0")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x4105660", Offset = "0x4105660", VA = "0x4105660")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x4104710", Offset = "0x4104710", VA = "0x4104710")]
	private bool ShouldDeferSections()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x4105700", Offset = "0x4105700", VA = "0x4105700")]
	private void AddSectionHeader(AottgUi panel, AottgScreenSection section, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x41041D0", Offset = "0x41041D0", VA = "0x41041D0")]
	private string[] SectionIds()
	{
		return null;
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x41042A0", Offset = "0x41042A0", VA = "0x41042A0")]
	private AottgBrushSidePanelOption[] SectionOptions()
	{
		return null;
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x4105570", Offset = "0x4105570", VA = "0x4105570")]
	private string SectionRootId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x4105B30", Offset = "0x4105B30", VA = "0x4105B30")]
	private string SectionHeaderId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x4105BC0", Offset = "0x4105BC0", VA = "0x4105BC0")]
	private string SectionBodyId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x4104970", Offset = "0x4104970", VA = "0x4104970")]
	private static GisketchLayoutDefinition FullScreenAbsolute()
	{
		return null;
	}
}
