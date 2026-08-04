// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEditCharacterDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000198")]
[AottgDialog("profile-edit-character")]
public sealed class AottgEditCharacterDialog : AottgDialog
{
	[Token(Token = "0x40008F5")]
	public const string Id = "profile-edit-character";

	[Token(Token = "0x40008F6")]
	public const string NameInputId = "profile-character-name";

	[Token(Token = "0x40008F7")]
	public const string GuildInputId = "profile-character-guild";

	[Token(Token = "0x40008F8")]
	public const string PresetGuildSelectId = "profile-character-preset-guild";

	[Token(Token = "0x40008F9")]
	public const string NameEffectPrefix = "profile-character-name-effect";

	[Token(Token = "0x40008FA")]
	public const string GuildEffectPrefix = "profile-character-guild-effect";

	[Token(Token = "0x40008FB")]
	private const string NoGuild = "__none";

	[Token(Token = "0x40008FC")]
	private const string NoGuildLabel = "None";

	[Token(Token = "0x40008FD")]
	private const string CustomGuild = "Custom";

	[Token(Token = "0x40008FE")]
	private const string BadgePrefix = "profile-character-badge-";

	[Token(Token = "0x40008FF")]
	private const float FormPanelWidth = 640f;

	[Token(Token = "0x4000900")]
	private const float PreviewPanelWidth = 420f;

	[Token(Token = "0x4000901")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000902")]
	[FieldOffset(Offset = "0x0")]
	private static string _selectedGuildPresetId;

	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x8")]
	private static bool _noGuildSelected;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0x9")]
	private static bool _nameEffectEnabled;

	[Token(Token = "0x4000905")]
	[FieldOffset(Offset = "0xA")]
	private static bool _guildEffectEnabled;

	[Token(Token = "0x4000906")]
	[FieldOffset(Offset = "0x10")]
	private static string _nameEffectType;

	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0x18")]
	private static string _guildEffectType;

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0x20")]
	private static string _nameFont;

	[Token(Token = "0x4000909")]
	[FieldOffset(Offset = "0x28")]
	private static string _guildFont;

	[Token(Token = "0x400090A")]
	[FieldOffset(Offset = "0x30")]
	private static readonly HashSet<string> SelectedBadges;

	[Token(Token = "0x17000141")]
	protected override string Title
	{
		[Token(Token = "0x6000992")]
		[Address(RVA = "0x4412920", Offset = "0x4412920", VA = "0x4412920", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000993")]
		[Address(RVA = "0x4412950", Offset = "0x4412950", VA = "0x4412950", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000994")]
		[Address(RVA = "0x4412980", Offset = "0x4412980", VA = "0x4412980", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x44129B0", Offset = "0x44129B0", VA = "0x44129B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x44129E0", Offset = "0x44129E0", VA = "0x44129E0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x44129F0", Offset = "0x44129F0", VA = "0x44129F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x4412AC0", Offset = "0x4412AC0", VA = "0x4412AC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x4412B80", Offset = "0x4412B80", VA = "0x4412B80", Slot = "18")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x4412B90", Offset = "0x4412B90", VA = "0x4412B90", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x4414160", Offset = "0x4414160", VA = "0x4414160", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x44039E0", Offset = "0x44039E0", VA = "0x44039E0")]
	public static string SelectedGuildPresetId()
	{
		return null;
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x4414170", Offset = "0x4414170", VA = "0x4414170")]
	public static bool NoGuildSelected()
	{
		return default(bool);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x4403A80", Offset = "0x4403A80", VA = "0x4403A80")]
	public static IEnumerable<string> SelectedBadgeIds()
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x4404720", Offset = "0x4404720", VA = "0x4404720")]
	public static bool NameEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x44046A0", Offset = "0x44046A0", VA = "0x44046A0")]
	public static bool GuildEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x44048B0", Offset = "0x44048B0", VA = "0x44048B0")]
	public static string NameEffectType()
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x44047A0", Offset = "0x44047A0", VA = "0x44047A0")]
	public static string GuildEffectType()
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x4403C10", Offset = "0x4403C10", VA = "0x4403C10")]
	public static string NameFont()
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x4403CC0", Offset = "0x4403CC0", VA = "0x4403CC0")]
	public static string GuildFont()
	{
		return null;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x4405780", Offset = "0x4405780", VA = "0x4405780")]
	internal static bool EffectEnabled(string prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x4405880", Offset = "0x4405880", VA = "0x4405880")]
	internal static string EffectType(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x4405970", Offset = "0x4405970", VA = "0x4405970")]
	internal static string EffectColor(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x4408F90", Offset = "0x4408F90", VA = "0x4408F90")]
	internal static void SetEffect(string prefix, bool enabled, string type)
	{
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x4405710", Offset = "0x4405710", VA = "0x4405710")]
	internal static string Font(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x4406CD0", Offset = "0x4406CD0", VA = "0x4406CD0")]
	internal static void SetFont(string prefix, string font)
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x44141E0", Offset = "0x44141E0", VA = "0x44141E0")]
	private static void RefreshPreview(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4414230", Offset = "0x4414230", VA = "0x4414230")]
	private static void PresetGuild(AottgUi body)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x4414440", Offset = "0x4414440", VA = "0x4414440")]
	private static void Badges(AottgUi body)
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x4404F90", Offset = "0x4404F90", VA = "0x4404F90")]
	public static string ColorInputId(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x4412FA0", Offset = "0x4412FA0", VA = "0x4412FA0")]
	private static void InitializeSelection(JSONNode info)
	{
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x4414B40", Offset = "0x4414B40", VA = "0x4414B40")]
	private static void SelectPresetGuild(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x4415000", Offset = "0x4415000", VA = "0x4415000")]
	private static void ToggleBadge(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x4414F90", Offset = "0x4414F90", VA = "0x4414F90")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x44151F0", Offset = "0x44151F0", VA = "0x44151F0")]
	private static string SelectedPresetGuildValue()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x44152E0", Offset = "0x44152E0", VA = "0x44152E0")]
	private static GisketchChoiceOptionDefinition[] PresetGuildOptions()
	{
		return null;
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x4414E70", Offset = "0x4414E70", VA = "0x4414E70")]
	private static string PresetGuildId(string value)
	{
		return null;
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x4414F00", Offset = "0x4414F00", VA = "0x4414F00")]
	private static bool CustomGuildSelected()
	{
		return default(bool);
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x4415970", Offset = "0x4415970", VA = "0x4415970")]
	private static GisketchLayoutDefinition ChoiceRowLayout()
	{
		return null;
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x44147D0", Offset = "0x44147D0", VA = "0x44147D0")]
	private static void RegisterEffectColors(string prefix, JSONNode effect)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x4415A40", Offset = "0x4415A40", VA = "0x4415A40")]
	private static string ColorValue(JSONNode effect, int index)
	{
		return null;
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x4415B90", Offset = "0x4415B90", VA = "0x4415B90")]
	public AottgEditCharacterDialog()
	{
	}
}
