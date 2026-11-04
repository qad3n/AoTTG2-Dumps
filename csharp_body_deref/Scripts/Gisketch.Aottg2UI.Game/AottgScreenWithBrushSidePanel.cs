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

[Token(Token = "0x20002F0")]
public sealed class AottgScreenWithBrushSidePanel : AottgComponent
{
	[Token(Token = "0x4000F03")]
	private const string FooterTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4000F04")]
	internal const float ContentPadding = 56f;

	[Token(Token = "0x4000F05")]
	internal const float ContentTopPadding = 98f;

	[Token(Token = "0x4000F06")]
	internal const float ContentFooterHeight = 132f;

	[Token(Token = "0x4000F07")]
	internal const float SidePanelOverlapPadding = 526f;

	[Token(Token = "0x4000F08")]
	private const float SectionHeaderGap = 12f;

	[Token(Token = "0x4000F09")]
	private const float SectionGap = 48f;

	[Token(Token = "0x4000F0A")]
	private const float SectionContentMaxWidth = 1120f;

	[Token(Token = "0x4000F0B")]
	private const float ContentIntroDuration = 0.28f;

	[Token(Token = "0x4000F0C")]
	private const float SectionEnterDuration = 0.15f;

	[Token(Token = "0x4000F0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000F0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000F0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _titleKey;

	[Token(Token = "0x4000F10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly AottgScreenSection[] _sections;

	[Token(Token = "0x4000F11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly AottgSidePanelLayoutMode _layoutMode;

	[Token(Token = "0x4000F12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x4000F13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly Action<AottgUi> _buildContentFooter;

	[Token(Token = "0x4000F14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly AottgBrushSidePanel _sidePanel;

	[Token(Token = "0x4000F15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly Action<AottgUi> _buildContent;

	[Token(Token = "0x4000F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly bool _deferScrollSections;

	[Token(Token = "0x4000F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private readonly bool _lazySections;

	[Token(Token = "0x4000F18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private readonly bool _hideSectionChrome;

	[Token(Token = "0x4000F19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private readonly AottgSidePanelContentScrollMode _contentScrollMode;

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x1E301F0", Offset = "0x1E2E7F0", VA = "0x181E301F0")]
	static AottgScreenWithBrushSidePanel()
	{
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x1E303D0", Offset = "0x1E2E9D0", VA = "0x181E303D0")]
	public AottgScreenWithBrushSidePanel(AottgBrushSidePanel sidePanel, Action<AottgUi> buildContent, [Optional] Action<AottgUi> buildContentFooter)
	{
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x1E30470", Offset = "0x1E2EA70", VA = "0x181E30470")]
	public AottgScreenWithBrushSidePanel(string title, AottgScreenSection[] sections, AottgSidePanelLayoutMode layoutMode, [Optional] AottgBrushSidePanelOption[] footerOptions, [Optional][DefaultParameterValue("brush-side-panel")] string id, [Optional] Action<AottgUi> buildContentFooter, [Optional][DefaultParameterValue(false)] bool deferScrollSections, [Optional][DefaultParameterValue(false)] bool lazySections, [Optional][DefaultParameterValue(false)] bool hideSectionChrome, [Optional] string titleKey, AottgSidePanelContentScrollMode contentScrollMode = AottgSidePanelContentScrollMode.OuterScroll)
	{
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x1E2F340", Offset = "0x1E2D940", VA = "0x181E2F340", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x1E2EA60", Offset = "0x1E2D060", VA = "0x181E2EA60")]
	private void BuildSectioned(AottgUi ui)
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x1E2E3D0", Offset = "0x1E2C9D0", VA = "0x181E2E3D0")]
	private void BuildLegacy(AottgUi ui)
	{
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x1E2E1F0", Offset = "0x1E2C7F0", VA = "0x181E2E1F0")]
	private void BuildContentLayer(AottgUi ui, Action<AottgUi> build, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x1E2F690", Offset = "0x1E2DC90", VA = "0x181E2F690")]
	private static GisketchLayoutDefinition ContentLayerLayout(Action<AottgUi> buildFooter, bool fillsHeight)
	{
		return null;
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x1E2FF90", Offset = "0x1E2E590", VA = "0x181E2FF90")]
	private static GisketchLayoutDefinition SectionOwnedContentLayerLayout()
	{
		return null;
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x1E2DAE0", Offset = "0x1E2C0E0", VA = "0x181E2DAE0")]
	private void AddContentFooter(AottgUi content, Action<AottgUi> buildFooter)
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x1E2DD00", Offset = "0x1E2C300", VA = "0x181E2DD00")]
	private void AddFooterTopEdge(AottgUi footer)
	{
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x1E2EEE0", Offset = "0x1E2D4E0", VA = "0x181E2EEE0")]
	private void BuildSections(AottgUi content, bool deferSections, bool lazySections)
	{
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x1E2E4E0", Offset = "0x1E2CAE0", VA = "0x181E2E4E0")]
	private void BuildSection(AottgUi content, int index)
	{
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x1E2FAD0", Offset = "0x1E2E0D0", VA = "0x181E2FAD0")]
	private GisketchLayoutDefinition SectionLayout()
	{
		return null;
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x1E2F470", Offset = "0x1E2DA70", VA = "0x181E2F470")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x1E2F600", Offset = "0x1E2DC00", VA = "0x181E2F600")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x1E300F0", Offset = "0x1E2E6F0", VA = "0x181E300F0")]
	private bool ShouldDeferSections()
	{
		return default(bool);
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x1E30180", Offset = "0x1E2E780", VA = "0x181E30180")]
	private bool ShouldLazySections()
	{
		return default(bool);
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x1E2DF00", Offset = "0x1E2C500", VA = "0x181E2DF00")]
	private void AddSectionHeader(AottgUi panel, AottgScreenSection section, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x1E2FA00", Offset = "0x1E2E000", VA = "0x181E2FA00")]
	private string[] SectionIds()
	{
		return null;
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x1E2FC90", Offset = "0x1E2E290", VA = "0x181E2FC90")]
	private AottgBrushSidePanelOption[] SectionOptions(bool lazySections)
	{
		return null;
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x1E300A0", Offset = "0x1E2E6A0", VA = "0x181E300A0")]
	private string SectionRootId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x1E2F980", Offset = "0x1E2DF80", VA = "0x181E2F980")]
	private string SectionHeaderId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x1E2F900", Offset = "0x1E2DF00", VA = "0x181E2F900")]
	private string SectionBodyId(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x1E2F7F0", Offset = "0x1E2DDF0", VA = "0x181E2F7F0")]
	private static GisketchLayoutDefinition FullScreenAbsolute()
	{
		return null;
	}
}
