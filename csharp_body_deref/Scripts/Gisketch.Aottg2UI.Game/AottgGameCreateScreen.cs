// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateScreen
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000245")]
[AottgScreen("game-create", TitleKey = "GameCreate.Title", SearchTitleKey = "GameCreate.Title", SearchGroup = "main-menu", BackActionId = "gameCreate.back")]
public sealed class AottgGameCreateScreen : AottgScreen
{
	[Token(Token = "0x4000C05")]
	public const string Id = "game-create";

	[Token(Token = "0x4000C06")]
	internal const string ContentId = "game-create-content";

	[Token(Token = "0x4000C07")]
	internal const string FooterId = "game-create-footer";

	[Token(Token = "0x4000C08")]
	private const string ContentOwner = "game-create-runtime";

	[Token(Token = "0x4000C09")]
	private const string DescriptionScrollLayout = "GameCreateDescriptionScrollLayout";

	[Token(Token = "0x4000C0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] VoiceChatValues;

	[Token(Token = "0x4000C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly string[] TitanSpawnPresets;

	[Token(Token = "0x4000C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly string[] CoreFieldIds;

	[Token(Token = "0x1700016D")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x57793D0", Offset = "0x57783D0", VA = "0x57793D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x5779400", Offset = "0x5778400", VA = "0x5779400", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x5778FB0", Offset = "0x5777FB0", VA = "0x5778FB0")]
	static AottgGameCreateScreen()
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x57794E0", Offset = "0x57784E0", VA = "0x57794E0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x5779690", Offset = "0x5778690", VA = "0x5779690")]
	internal static bool Refresh(GisketchUIRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x5779C70", Offset = "0x5778C70", VA = "0x5779C70")]
	internal static bool RefreshTitanHeadBounds(GisketchUIRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x5779730", Offset = "0x5778730", VA = "0x5779730")]
	private static bool RefreshImmediately(GisketchUIRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x577A330", Offset = "0x5779330", VA = "0x577A330")]
	private static void BuildContent(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x577A510", Offset = "0x5779510", VA = "0x577A510")]
	private static void BuildMain(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x577C430", Offset = "0x577B430", VA = "0x577C430")]
	private static void BuildCategories(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x577CBF0", Offset = "0x577BBF0", VA = "0x577CBF0")]
	private static string CategoryPreview(string category)
	{
		return null;
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x577C1D0", Offset = "0x577B1D0", VA = "0x577C1D0")]
	private static void BuildSubcategories(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x577D240", Offset = "0x577C240", VA = "0x577D240")]
	private static string SubcategoryPreview(string subcategory)
	{
		return null;
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x577BF50", Offset = "0x577AF50", VA = "0x577BF50")]
	private static void BuildExperiences(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x577DE20", Offset = "0x577CE20", VA = "0x577DE20")]
	private static void BuildChoiceGrid(AottgUi ui, string id, int count, Action<AottgUi> buildChoices)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x577D1A0", Offset = "0x577C1A0", VA = "0x577D1A0")]
	private static void BuildChoiceCarousel(AottgUi ui, string id, int count, Action<AottgUi> buildChoices)
	{
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x577ABB0", Offset = "0x5779BB0", VA = "0x577ABB0")]
	private static void BuildFavorites(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x577DEC0", Offset = "0x577CEC0", VA = "0x577DEC0")]
	private static void BuildFavoriteChoices(AottgUi ui, bool compact)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x577E470", Offset = "0x577D470", VA = "0x577E470")]
	private static void BuildFavoriteChoice(AottgUi ui, string id, string title, string description, string preview, int index, bool compact, bool selected, Action select)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x577CCE0", Offset = "0x577BCE0", VA = "0x577CCE0")]
	private static void BuildCategorySelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x577DAC0", Offset = "0x577CAC0", VA = "0x577DAC0")]
	private static void BuildSubcategorySelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x577E9B0", Offset = "0x577D9B0", VA = "0x577E9B0")]
	private static void BuildExperienceSelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x577E770", Offset = "0x577D770", VA = "0x577E770")]
	private static void BuildCompactRow(AottgUi ui, string id, string[] values, string selected, string actionId, string itemPrefix, AottgButtonVariant selectedVariant = AottgButtonVariant.Primary, bool carousel = false)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x577EBE0", Offset = "0x577DBE0", VA = "0x577EBE0")]
	private static GisketchLayoutDefinition CarouselButtonLayout()
	{
		return null;
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x577E340", Offset = "0x577D340", VA = "0x577E340")]
	private static void BuildButtonRow(AottgUi ui, string id, Action<AottgUi> buildButtons)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x577ECA0", Offset = "0x577DCA0", VA = "0x577ECA0")]
	private static GisketchNodeDefinition BuildCompactChoice(AottgUi ui, string label, bool selected, string actionId, string id, [Optional][DefaultParameterValue(0)] AottgButtonVariant selectedVariant, [Optional] string icon)
	{
		return null;
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x577E680", Offset = "0x577D680", VA = "0x577E680")]
	private static GisketchLayoutDefinition CompactButtonLayout()
	{
		return null;
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x577ED70", Offset = "0x577DD70", VA = "0x577ED70")]
	private static void BuildCollapsedFeatureChoice(AottgUi ui, string icon, string label, bool selected, string actionId, string id)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x577BA80", Offset = "0x577AA80", VA = "0x577BA80")]
	private static void BuildConfiguration(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x577EF20", Offset = "0x577DF20", VA = "0x577EF20")]
	private static void BuildExperienceContext(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x5780050", Offset = "0x577F050", VA = "0x5780050")]
	private static void BuildField(AottgUi ui, ExperienceRuleField field, int index)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x577ACD0", Offset = "0x5779CD0", VA = "0x577ACD0")]
	private static void BuildSandbox(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x5782110", Offset = "0x5781110", VA = "0x5782110")]
	private static void BuildSandboxPresetActions(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x5783870", Offset = "0x5782870", VA = "0x5783870")]
	private static void BuildSandboxField(AottgUi ui, AottgSandboxField field, int index, bool enabled = true)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x5781AA0", Offset = "0x5780AA0", VA = "0x5781AA0")]
	private static void BuildSandboxGeneral(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x57845B0", Offset = "0x57835B0", VA = "0x57845B0")]
	private static void BuildSandboxModeField(AottgUi ui, AottgSandboxField field, int index)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x5782300", Offset = "0x5781300", VA = "0x5782300")]
	private static void BuildSandboxMisc(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x5782D60", Offset = "0x5781D60", VA = "0x5782D60")]
	private static void BuildSandboxTitans(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x5784EA0", Offset = "0x5783EA0", VA = "0x5784EA0")]
	private static void BuildTitanHeadBounds(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x5785080", Offset = "0x5784080", VA = "0x5785080")]
	private static void BuildTitanHealthMode(AottgUi ui, bool enabled)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x57851B0", Offset = "0x57841B0", VA = "0x57851B0")]
	private static void BuildTitanHealthEnabled(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x57854E0", Offset = "0x57844E0", VA = "0x57854E0")]
	private static void BuildTitanArmorEnabled(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x5785880", Offset = "0x5784880", VA = "0x5785880")]
	private static void BuildTitanWardedEnabled(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x5785370", Offset = "0x5784370", VA = "0x5785370")]
	private static void BuildTitanToggle(AottgUi ui, string label, string id, bool enabled, Action<bool> setEnabled)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x57848E0", Offset = "0x57838E0", VA = "0x57848E0")]
	private static void BuildSandboxMatrix(AottgUi ui, string key, string id, params string[] fieldIds)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x5784190", Offset = "0x5783190", VA = "0x5784190")]
	private static void BuildSandboxSwitchById(AottgUi ui, string fieldId, bool enabled = true)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x5785B40", Offset = "0x5784B40", VA = "0x5785B40")]
	private static GisketchNodeDefinition FieldSwitch(AottgUi row, string id, bool value, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x5784880", Offset = "0x5783880", VA = "0x5784880")]
	private static void BuildSandboxFieldsByIds(AottgUi ui, string id, params string[] fieldIds)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x5784B40", Offset = "0x5783B40", VA = "0x5784B40")]
	private static void BuildSandboxFieldsByIds(AottgUi ui, string id, bool enabled, params string[] fieldIds)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x5784A10", Offset = "0x5783A10", VA = "0x5784A10")]
	private static void BuildSandboxSwitchLine(AottgUi ui, string fieldId)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x5785DD0", Offset = "0x5784DD0", VA = "0x5785DD0")]
	private static void BuildFieldColumns(AottgUi ui, string id, int count, Action<AottgUi, int> build)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x5785F40", Offset = "0x5784F40", VA = "0x5785F40")]
	private static void BuildSandboxFieldById(AottgUi ui, string id)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x5784400", Offset = "0x5783400", VA = "0x5784400")]
	private static AottgSandboxField SandboxField(string id)
	{
		return null;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x577A040", Offset = "0x5779040", VA = "0x577A040")]
	private static int SandboxFieldIndex(string id)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x57840B0", Offset = "0x57830B0", VA = "0x57840B0")]
	private static string SandboxFieldLabel(AottgSandboxField field)
	{
		return null;
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x5781CE0", Offset = "0x5780CE0", VA = "0x5781CE0")]
	private static void BuildSandboxAddons(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x57861D0", Offset = "0x57851D0", VA = "0x57861D0")]
	private static void BuildMultiplayerRoom(AottgUi ui, bool showHeader = true)
	{
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x5786620", Offset = "0x5785620", VA = "0x5786620")]
	private static bool ShowRoomField(AottgSandboxField field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x577AAA0", Offset = "0x5779AA0", VA = "0x577AAA0")]
	private static void BuildRoomSettings(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x5786750", Offset = "0x5785750", VA = "0x5786750")]
	private static void BuildRoomField(AottgUi ui, AottgSandboxField field, int index)
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x57868E0", Offset = "0x57858E0", VA = "0x57868E0")]
	private static string VoiceChatLabel(VoiceChatMode mode)
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x5786940", Offset = "0x5785940", VA = "0x5786940")]
	private static GisketchChoiceOptionDefinition[] VoiceChatChoices()
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x5786C70", Offset = "0x5785C70", VA = "0x5786C70")]
	private static GisketchChoiceOptionDefinition[] TitanHealthModeChoices()
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x5786B80", Offset = "0x5785B80", VA = "0x5786B80")]
	private static GisketchChoiceOptionDefinition[] ChoiceOptions(string[] values, string[] labels)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x5781480", Offset = "0x5780480", VA = "0x5781480")]
	private static void BuildSandboxCustom(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x5786F00", Offset = "0x5785F00", VA = "0x5786F00")]
	private static void BuildFooter(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x5787100", Offset = "0x5786100", VA = "0x5787100")]
	private static GisketchLayoutDefinition CardGrid()
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x577F950", Offset = "0x577E950", VA = "0x577F950")]
	private static void BuildLockedFields(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x5787600", Offset = "0x5786600", VA = "0x5787600")]
	private static void BuildLockedFieldColumns(AottgUi ui, IReadOnlyList<ExperienceRuleField> fields)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x57877D0", Offset = "0x57867D0", VA = "0x57877D0")]
	private static void BuildLockedField(AottgUi ui, ExperienceRuleField field, int index)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x5787960", Offset = "0x5786960", VA = "0x5787960")]
	private static string LockedFieldTooltip(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x577F140", Offset = "0x577E140", VA = "0x577F140")]
	private static void BuildExperienceFields(AottgUi ui, IReadOnlyList<ExperienceRuleField> fields, PresetDefinition experience)
	{
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x5788120", Offset = "0x5787120", VA = "0x5788120")]
	private static void BuildExperienceModeField(AottgUi ui, ExperienceRuleField field, int index)
	{
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x5788490", Offset = "0x5787490", VA = "0x5788490")]
	private static void BuildExperienceScore(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x5788A80", Offset = "0x5787A80", VA = "0x5788A80")]
	private static void BuildVariantSelector(AottgUi ui)
	{
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x57874B0", Offset = "0x57864B0", VA = "0x57874B0")]
	private static bool IsRoomSettingId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x5787C20", Offset = "0x5786C20", VA = "0x5787C20")]
	private static void BuildExperienceSections(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, List<ExperienceRuleField> remaining, List<ExperienceUISection> sections)
	{
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x5788FB0", Offset = "0x5787FB0", VA = "0x5788FB0")]
	private static void BuildExperienceSection(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, IReadOnlyList<ExperienceRuleField> fields, string title, int sectionIndex)
	{
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x57890C0", Offset = "0x57880C0", VA = "0x57890C0")]
	private static void BuildFieldColumns(AottgUi ui, IReadOnlyList<ExperienceRuleField> allFields, IReadOnlyList<ExperienceRuleField> fields, string id)
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x5787A40", Offset = "0x5786A40", VA = "0x5787A40")]
	private static ExperienceRuleField FindField(IReadOnlyList<ExperienceRuleField> fields, string id)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x57892D0", Offset = "0x57882D0", VA = "0x57892D0")]
	private static int FieldIndex(IReadOnlyList<ExperienceRuleField> fields, ExperienceRuleField field)
	{
		return default(int);
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x57836B0", Offset = "0x57826B0", VA = "0x57836B0")]
	private static void BuildSandboxFieldColumns(AottgUi ui, IReadOnlyList<AottgSandboxField> fields)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x5784DC0", Offset = "0x5783DC0", VA = "0x5784DC0")]
	private static GisketchLayoutDefinition FieldColumnsLayout()
	{
		return null;
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x5789620", Offset = "0x5788620", VA = "0x5789620")]
	private static GisketchLayoutDefinition FieldColumnLayout()
	{
		return null;
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x5789710", Offset = "0x5788710", VA = "0x5789710")]
	private static void FieldRowLabel(AottgUi row, string text, string style, string id)
	{
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x5781390", Offset = "0x5780390", VA = "0x5781390")]
	private static GisketchLayoutDefinition FieldRowLayout()
	{
		return null;
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x5789810", Offset = "0x5788810", VA = "0x5789810")]
	private static GisketchLayoutDefinition FieldControlLayout(GisketchNodeDefinition control)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x5785CD0", Offset = "0x5784CD0", VA = "0x5785CD0")]
	private static GisketchLayoutDefinition FieldControlLayout(bool leftAligned)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x57795F0", Offset = "0x57785F0", VA = "0x57795F0")]
	private static AottgBrushSidePanel SidePanel()
	{
		return null;
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x5789890", Offset = "0x5788890", VA = "0x5789890")]
	private static AottgBrushSidePanelOption[] SidePanelOptions()
	{
		return null;
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x5789C00", Offset = "0x5788C00", VA = "0x5789C00")]
	private static AottgBrushSidePanelOption[] SidePanelFooterOptions()
	{
		return null;
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x5789D20", Offset = "0x5788D20", VA = "0x5789D20")]
	private static void BreadcrumbLink(AottgUi ui, string label, string actionId, string id, [Optional] string icon, [Optional] string textKey)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x5780EA0", Offset = "0x577FEA0", VA = "0x5780EA0")]
	private static string FieldTooltip(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x5783BC0", Offset = "0x5782BC0", VA = "0x5783BC0")]
	private static string FieldTooltip(AottgSandboxField field)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x578A200", Offset = "0x5789200", VA = "0x578A200")]
	private static string RangeTooltip(string tooltip, float? minimum, float? maximum)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x5780F70", Offset = "0x577FF70", VA = "0x5780F70")]
	private static string FieldValue(ExperienceRuleField field)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x578A4E0", Offset = "0x57894E0", VA = "0x578A4E0")]
	private static string OptionLabel(string id, string value)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x578A460", Offset = "0x5789460", VA = "0x578A460")]
	private static string StringFieldValue(string id, StringSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x5783DC0", Offset = "0x5782DC0", VA = "0x5783DC0")]
	private static string SandboxFieldValue(AottgSandboxField field)
	{
		return null;
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x578A8C0", Offset = "0x57898C0", VA = "0x578A8C0")]
	private static void RefreshFrom(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x578A980", Offset = "0x5789980", VA = "0x578A980")]
	public AottgGameCreateScreen()
	{
	}
}
