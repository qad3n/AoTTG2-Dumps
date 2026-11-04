// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000228")]
[AottgScreen("game-create", Title = "Create Game", TitleKey = "GameCreate.Title", SearchTitle = "Create Game", SearchTitleKey = "GameCreate.Title", SearchGroup = "main-menu", BackActionId = "gameCreate.back")]
public sealed class AottgGameCreateScreen : AottgScreen
{
	[Token(Token = "0x4000B78")]
	public const string Id = "game-create";

	[Token(Token = "0x4000B79")]
	internal const string ContentId = "game-create-content";

	[Token(Token = "0x4000B7A")]
	internal const string FooterId = "game-create-footer";

	[Token(Token = "0x4000B7B")]
	private const string ContentOwner = "game-create-runtime";

	[Token(Token = "0x4000B7C")]
	private const string DescriptionScrollLayout = "GameCreateDescriptionScrollLayout";

	[Token(Token = "0x4000B7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] CoreFieldIds;

	[Token(Token = "0x17000162")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000CB7")]
		[Address(RVA = "0x23E4A00", Offset = "0x23E3000", VA = "0x1823E4A00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000163")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x23E48E0", Offset = "0x23E2EE0", VA = "0x1823E48E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x23E46D0", Offset = "0x23E2CD0", VA = "0x1823E46D0")]
	static AottgGameCreateScreen()
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x23E1250", Offset = "0x23DF850", VA = "0x1823E1250", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x23E3510", Offset = "0x23E1B10", VA = "0x1823E3510")]
	internal static bool Refresh(GisketchUIRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x23E31B0", Offset = "0x23E17B0", VA = "0x1823E31B0")]
	internal static bool RefreshTitanHeadBounds(GisketchUIRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x23E2CB0", Offset = "0x23E12B0", VA = "0x1823E2CB0")]
	private static bool RefreshImmediately(GisketchUIRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x23D7550", Offset = "0x23D5B50", VA = "0x1823D7550")]
	private static void BuildContent(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x23DADA0", Offset = "0x23D93A0", VA = "0x1823DADA0")]
	private static void BuildMain(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x23D62D0", Offset = "0x23D48D0", VA = "0x1823D62D0")]
	private static void BuildCategories(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x23E1570", Offset = "0x23DFB70", VA = "0x1823E1570")]
	private static string CategoryPreview(string category)
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x23DFF30", Offset = "0x23DE530", VA = "0x1823DFF30")]
	private static void BuildSubcategories(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x23E4390", Offset = "0x23E2990", VA = "0x1823E4390")]
	private static string SubcategoryPreview(string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x23D9220", Offset = "0x23D7820", VA = "0x1823D9220")]
	private static void BuildExperiences(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x23D6990", Offset = "0x23D4F90", VA = "0x1823D6990")]
	private static void BuildChoiceGrid(AottgUi ui, string id, int count, Action<AottgUi> buildChoices)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x23D68E0", Offset = "0x23D4EE0", VA = "0x1823D68E0")]
	private static void BuildChoiceCarousel(AottgUi ui, string id, int count, Action<AottgUi> buildChoices)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x23D9B10", Offset = "0x23D8110", VA = "0x1823D9B10")]
	private static void BuildFavorites(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x23D9720", Offset = "0x23D7D20", VA = "0x1823D9720")]
	private static void BuildFavoriteChoices(AottgUi ui, bool compact)
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x23D9520", Offset = "0x23D7B20", VA = "0x1823D9520")]
	private static void BuildFavoriteChoice(AottgUi ui, string id, string title, string description, string preview, int index, bool compact, bool selected, Action select)
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x23D67C0", Offset = "0x23D4DC0", VA = "0x1823D67C0")]
	private static void BuildCategorySelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x23E0220", Offset = "0x23DE820", VA = "0x1823E0220")]
	private static void BuildSubcategorySelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x23E42C0", Offset = "0x23E28C0", VA = "0x1823E42C0")]
	private static string SubcategoryLabel(string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x23D9020", Offset = "0x23D7620", VA = "0x1823D9020")]
	private static void BuildExperienceSelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x23D6B20", Offset = "0x23D5120", VA = "0x1823D6B20")]
	private static void BuildCompactRow(AottgUi ui, string id, string[] values, string selected, string actionId, string itemPrefix, AottgButtonVariant selectedVariant = AottgButtonVariant.Primary, bool carousel = false)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x23E1480", Offset = "0x23DFA80", VA = "0x1823E1480")]
	private static GisketchLayoutDefinition CarouselButtonLayout()
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x23D6170", Offset = "0x23D4770", VA = "0x1823D6170")]
	private static void BuildButtonRow(AottgUi ui, string id, Action<AottgUi> buildButtons)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x23D6A40", Offset = "0x23D5040", VA = "0x1823D6A40")]
	private static GisketchNodeDefinition BuildCompactChoice(AottgUi ui, string label, bool selected, string actionId, string id, [Optional][DefaultParameterValue(0)] AottgButtonVariant selectedVariant, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x23E1650", Offset = "0x23DFC50", VA = "0x1823E1650")]
	private static GisketchLayoutDefinition CompactButtonLayout()
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x23D6D60", Offset = "0x23D5360", VA = "0x1823D6D60")]
	private static void BuildConfiguration(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x23D7790", Offset = "0x23D5D90", VA = "0x1823D7790")]
	private static void BuildExperienceContext(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x23D9E40", Offset = "0x23D8440", VA = "0x1823D9E40")]
	private static void BuildField(AottgUi ui, ExperienceRuleField field, int index)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x23DF100", Offset = "0x23DD700", VA = "0x1823DF100")]
	private static void BuildSandbox(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x23DCB90", Offset = "0x23DB190", VA = "0x1823DCB90")]
	private static void BuildSandboxField(AottgUi ui, AottgSandboxField field, int index, bool enabled = true)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x23DD200", Offset = "0x23DB800", VA = "0x1823DD200")]
	private static void BuildSandboxGeneral(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x23DDF90", Offset = "0x23DC590", VA = "0x1823DDF90")]
	private static void BuildSandboxModeField(AottgUi ui, AottgSandboxField field, int index)
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x23DD5F0", Offset = "0x23DBBF0", VA = "0x1823DD5F0")]
	private static void BuildSandboxMisc(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x23DE5F0", Offset = "0x23DCBF0", VA = "0x1823DE5F0")]
	private static void BuildSandboxTitans(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x23E0670", Offset = "0x23DEC70", VA = "0x1823E0670")]
	private static void BuildTitanHeadBounds(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x23E0980", Offset = "0x23DEF80", VA = "0x1823E0980")]
	private static void BuildTitanHealthMode(AottgUi ui, bool enabled)
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x23E0810", Offset = "0x23DEE10", VA = "0x1823E0810")]
	private static void BuildTitanHealthEnabled(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x23E0400", Offset = "0x23DEA00", VA = "0x1823E0400")]
	private static void BuildTitanArmorEnabled(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x23E0C00", Offset = "0x23DF200", VA = "0x1823E0C00")]
	private static void BuildTitanWardedEnabled(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x23E0AA0", Offset = "0x23DF0A0", VA = "0x1823E0AA0")]
	private static void BuildTitanToggle(AottgUi ui, string label, string id, bool enabled, Action<bool> setEnabled)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x23DD470", Offset = "0x23DBA70", VA = "0x1823DD470")]
	private static void BuildSandboxMatrix(AottgUi ui, string title, string id, params string[] fieldIds)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x23DE390", Offset = "0x23DC990", VA = "0x1823DE390")]
	private static void BuildSandboxSwitchById(AottgUi ui, string fieldId, bool enabled = true)
	{
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x23DCF70", Offset = "0x23DB570", VA = "0x1823DCF70")]
	private static void BuildSandboxFieldsByIds(AottgUi ui, string id, params string[] fieldIds)
	{
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x23DCFF0", Offset = "0x23DB5F0", VA = "0x1823DCFF0")]
	private static void BuildSandboxFieldsByIds(AottgUi ui, string id, bool enabled, params string[] fieldIds)
	{
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x23DC980", Offset = "0x23DAF80", VA = "0x1823DC980")]
	private static void BuildSandboxFieldById(AottgUi ui, string id)
	{
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x23E3A00", Offset = "0x23E2000", VA = "0x1823E3A00")]
	private static AottgSandboxField SandboxField(string id)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x23E35C0", Offset = "0x23E1BC0", VA = "0x1823E35C0")]
	private static int SandboxFieldIndex(string id)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x23E36D0", Offset = "0x23E1CD0", VA = "0x1823E36D0")]
	private static string SandboxFieldLabel(AottgSandboxField field)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x23DBB20", Offset = "0x23DA120", VA = "0x1823DBB20")]
	private static void BuildSandboxAddons(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x23DB470", Offset = "0x23D9A70", VA = "0x1823DB470")]
	private static void BuildMultiplayerRoom(AottgUi ui, bool showHeader = true)
	{
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x23DB990", Offset = "0x23D9F90", VA = "0x1823DB990")]
	private static void BuildRoomSettings(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x23DB810", Offset = "0x23D9E10", VA = "0x1823DB810")]
	private static void BuildRoomField(AottgUi ui, AottgSandboxField field, int index)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x23DC150", Offset = "0x23DA750", VA = "0x1823DC150")]
	private static void BuildSandboxCustom(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x23DA180", Offset = "0x23D8780", VA = "0x1823DA180")]
	private static void BuildFooter(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x23E1360", Offset = "0x23DF960", VA = "0x1823E1360")]
	private static GisketchLayoutDefinition CardGrid()
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x23DA6B0", Offset = "0x23D8CB0", VA = "0x1823DA6B0")]
	private static void BuildLockedFields(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x23DA3D0", Offset = "0x23D89D0", VA = "0x1823DA3D0")]
	private static void BuildLockedFieldColumns(AottgUi ui, IReadOnlyList<ExperienceRuleField> fields)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x23DA530", Offset = "0x23D8B30", VA = "0x1823DA530")]
	private static void BuildLockedField(AottgUi ui, ExperienceRuleField field, int index)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x23E27B0", Offset = "0x23E0DB0", VA = "0x1823E27B0")]
	private static string LockedFieldTooltip(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x23D79E0", Offset = "0x23D5FE0", VA = "0x1823D79E0")]
	private static void BuildExperienceFields(AottgUi ui, IReadOnlyList<ExperienceRuleField> fields, PresetDefinition experience)
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x23D80A0", Offset = "0x23D66A0", VA = "0x1823D80A0")]
	private static void BuildExperienceModeField(AottgUi ui, ExperienceRuleField field, int index)
	{
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x23D8440", Offset = "0x23D6A40", VA = "0x1823D8440")]
	private static void BuildExperienceScore(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x23E0E70", Offset = "0x23DF470", VA = "0x1823E0E70")]
	private static void BuildVariantSelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x23E25B0", Offset = "0x23E0BB0", VA = "0x1823E25B0")]
	private static bool IsRoomSettingId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x23D8BE0", Offset = "0x23D71E0", VA = "0x1823D8BE0")]
	private static void BuildExperienceSections(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, List<ExperienceRuleField> remaining, List<ExperienceUISection> sections)
	{
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x23D8970", Offset = "0x23D6F70", VA = "0x1823D8970")]
	private static void BuildExperienceSection(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, IReadOnlyList<ExperienceRuleField> fields, string title, int sectionIndex)
	{
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x23D9CB0", Offset = "0x23D82B0", VA = "0x1823D9CB0")]
	private static void BuildFieldColumns(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, IReadOnlyList<ExperienceRuleField> fields, string id)
	{
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x23E24F0", Offset = "0x23E0AF0", VA = "0x1823E24F0")]
	private static ExperienceRuleField FindField(IReadOnlyList<ExperienceRuleField> fields, string id)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x23E1AC0", Offset = "0x23E00C0", VA = "0x1823E1AC0")]
	private static int FieldIndex(IReadOnlyList<ExperienceRuleField> fields, ExperienceRuleField field)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x23DCA30", Offset = "0x23DB030", VA = "0x1823DCA30")]
	private static void BuildSandboxFieldColumns(AottgUi ui, IReadOnlyList<AottgSandboxField> fields)
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x23E1880", Offset = "0x23DFE80", VA = "0x1823E1880")]
	private static GisketchLayoutDefinition FieldColumnsLayout()
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x23E1770", Offset = "0x23DFD70", VA = "0x1823E1770")]
	private static GisketchLayoutDefinition FieldColumnLayout()
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x23E1CD0", Offset = "0x23E02D0", VA = "0x1823E1CD0")]
	private static GisketchLayoutDefinition FieldRowLayout()
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x23E1990", Offset = "0x23DFF90", VA = "0x1823E1990")]
	private static GisketchLayoutDefinition FieldControlLayout()
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x23E40D0", Offset = "0x23E26D0", VA = "0x1823E40D0")]
	private static AottgBrushSidePanel SidePanel()
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x23E3C20", Offset = "0x23E2220", VA = "0x1823E3C20")]
	private static AottgBrushSidePanelOption[] SidePanelOptions()
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x23E3AF0", Offset = "0x23E20F0", VA = "0x1823E3AF0")]
	private static AottgBrushSidePanelOption[] SidePanelFooterOptions()
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x23D6000", Offset = "0x23D4600", VA = "0x1823D6000")]
	private static void BreadcrumbLink(AottgUi ui, string label, string actionId, string id, [Optional] string icon, [Optional] string textKey)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x23E1FF0", Offset = "0x23E05F0", VA = "0x1823E1FF0")]
	private static string FieldTooltip(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x23E1E00", Offset = "0x23E0400", VA = "0x1823E1E00")]
	private static string FieldTooltip(AottgSandboxField field)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x23E2850", Offset = "0x23E0E50", VA = "0x1823E2850")]
	private static string RangeTooltip(string tooltip, float? minimum, float? maximum)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x23E1B50", Offset = "0x23E0150", VA = "0x1823E1B50")]
	private static string FieldLabel(string id)
	{
		return null;
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x23E20A0", Offset = "0x23E06A0", VA = "0x1823E20A0")]
	private static string FieldValue(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x23E3770", Offset = "0x23E1D70", VA = "0x1823E3770")]
	private static string SandboxFieldValue(AottgSandboxField field)
	{
		return null;
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x23E2B70", Offset = "0x23E1170", VA = "0x1823E2B70")]
	private static void RefreshFrom(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x23E2730", Offset = "0x23E0D30", VA = "0x1823E2730")]
	private static GisketchNodeDefinition LocalizedText(AottgUi ui, string text, string key, string style, string id)
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgGameCreateScreen()
	{
	}
}
