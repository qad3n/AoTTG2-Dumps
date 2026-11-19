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
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002FB")]
[AottgDialog("profile-edit-character")]
public sealed class AottgEditCharacterDialog : AottgDialog
{
	[Token(Token = "0x4000F31")]
	public const string Id = "profile-edit-character";

	[Token(Token = "0x4000F32")]
	public const string NameInputId = "profile-character-name";

	[Token(Token = "0x4000F33")]
	public const string GuildInputId = "profile-character-guild";

	[Token(Token = "0x4000F34")]
	public const string PresetGuildSelectId = "profile-character-preset-guild";

	[Token(Token = "0x4000F35")]
	public const string NameEffectPrefix = "profile-character-name-effect";

	[Token(Token = "0x4000F36")]
	public const string GuildEffectPrefix = "profile-character-guild-effect";

	[Token(Token = "0x4000F37")]
	internal const string EffectsDraftKey = "profile-character-effects-draft";

	[Token(Token = "0x4000F38")]
	private const string NoGuild = "__none";

	[Token(Token = "0x4000F39")]
	private const string BadgePrefix = "profile-character-badge-";

	[Token(Token = "0x4000F3A")]
	private const string BadgesDraftKey = "profile-character-badges-draft";

	[Token(Token = "0x4000F3B")]
	private const float FormPanelWidth = 640f;

	[Token(Token = "0x4000F3C")]
	private const float PreviewPanelWidth = 420f;

	[Token(Token = "0x4000F3D")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000F3E")]
	[FieldOffset(Offset = "0x0")]
	private static string _selectedGuildPresetId;

	[Token(Token = "0x4000F3F")]
	[FieldOffset(Offset = "0x8")]
	private static bool _noGuildSelected;

	[Token(Token = "0x4000F40")]
	[FieldOffset(Offset = "0x9")]
	private static bool _nameEffectEnabled;

	[Token(Token = "0x4000F41")]
	[FieldOffset(Offset = "0xA")]
	private static bool _guildEffectEnabled;

	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x10")]
	private static string _nameEffectType;

	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x18")]
	private static string _guildEffectType;

	[Token(Token = "0x4000F44")]
	[FieldOffset(Offset = "0x20")]
	private static string _nameFont;

	[Token(Token = "0x4000F45")]
	[FieldOffset(Offset = "0x28")]
	private static string _guildFont;

	[Token(Token = "0x4000F46")]
	[FieldOffset(Offset = "0x30")]
	private static readonly HashSet<string> SelectedBadges;

	[Token(Token = "0x17000203")]
	protected override string Title
	{
		[Token(Token = "0x600129A")]
		[Address(RVA = "0x57EF6A0", Offset = "0x57EE6A0", VA = "0x57EF6A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x57EF700", Offset = "0x57EE700", VA = "0x57EF700", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	protected override string RootStyle
	{
		[Token(Token = "0x600129C")]
		[Address(RVA = "0x57EF730", Offset = "0x57EE730", VA = "0x57EF730", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	protected override string BodyStyle
	{
		[Token(Token = "0x600129D")]
		[Address(RVA = "0x57EF760", Offset = "0x57EE760", VA = "0x57EF760", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000207")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600129E")]
		[Address(RVA = "0x57EF790", Offset = "0x57EE790", VA = "0x57EF790", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x600129F")]
		[Address(RVA = "0x57EF7A0", Offset = "0x57EE7A0", VA = "0x57EF7A0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x57EF7B0", Offset = "0x57EE7B0", VA = "0x57EF7B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020A")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x57EF870", Offset = "0x57EE870", VA = "0x57EF870", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x57EF920", Offset = "0x57EE920", VA = "0x57EF920", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x57EF930", Offset = "0x57EE930", VA = "0x57EF930", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x57F13F0", Offset = "0x57F03F0", VA = "0x57F13F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x57DF430", Offset = "0x57DE430", VA = "0x57DF430")]
	public static string SelectedGuildPresetId()
	{
		return null;
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x57F1400", Offset = "0x57F0400", VA = "0x57F1400")]
	public static bool NoGuildSelected()
	{
		return default(bool);
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x57DF4D0", Offset = "0x57DE4D0", VA = "0x57DF4D0")]
	public static IEnumerable<string> SelectedBadgeIds()
	{
		return null;
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x57F0FE0", Offset = "0x57EFFE0", VA = "0x57F0FE0")]
	internal static string EffectsDraftValue()
	{
		return null;
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x57E5890", Offset = "0x57E4890", VA = "0x57E5890")]
	internal static void SyncEffectsDraft(GameObject source)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x57E0A70", Offset = "0x57DFA70", VA = "0x57E0A70")]
	public static bool NameEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x57E09F0", Offset = "0x57DF9F0", VA = "0x57E09F0")]
	public static bool GuildEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x57E0C00", Offset = "0x57DFC00", VA = "0x57E0C00")]
	public static string NameEffectType()
	{
		return null;
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x57E0AF0", Offset = "0x57DFAF0", VA = "0x57E0AF0")]
	public static string GuildEffectType()
	{
		return null;
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x57DF660", Offset = "0x57DE660", VA = "0x57DF660")]
	public static string NameFont()
	{
		return null;
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x57DF710", Offset = "0x57DE710", VA = "0x57DF710")]
	public static string GuildFont()
	{
		return null;
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x57E1B00", Offset = "0x57E0B00", VA = "0x57E1B00")]
	internal static bool EffectEnabled(string prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x57E1BE0", Offset = "0x57E0BE0", VA = "0x57E1BE0")]
	internal static string EffectType(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x57E1CE0", Offset = "0x57E0CE0", VA = "0x57E1CE0")]
	internal static string EffectColor(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x57E5740", Offset = "0x57E4740", VA = "0x57E5740")]
	internal static void SetEffect(string prefix, bool enabled, string type)
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x57E1A80", Offset = "0x57E0A80", VA = "0x57E1A80")]
	internal static string Font(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x57E4060", Offset = "0x57E3060", VA = "0x57E4060")]
	internal static void SetFont(string prefix, string font)
	{
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x57F16E0", Offset = "0x57F06E0", VA = "0x57F16E0")]
	private static void RefreshPreview(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x57F1730", Offset = "0x57F0730", VA = "0x57F1730")]
	private static void PresetGuild(AottgUi body)
	{
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x57F1A50", Offset = "0x57F0A50", VA = "0x57F1A50")]
	private static void Badges(AottgUi body)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x57E12E0", Offset = "0x57E02E0", VA = "0x57E12E0")]
	public static string ColorInputId(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x57EFD80", Offset = "0x57EED80", VA = "0x57EFD80")]
	private static void InitializeSelection(JSONNode info)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x57F2120", Offset = "0x57F1120", VA = "0x57F2120")]
	private static void SelectPresetGuild(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x57F25D0", Offset = "0x57F15D0", VA = "0x57F25D0")]
	private static void ToggleBadge(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x57F2560", Offset = "0x57F1560", VA = "0x57F2560")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x57F27F0", Offset = "0x57F17F0", VA = "0x57F27F0")]
	private static string SelectedPresetGuildValue()
	{
		return null;
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x57F28E0", Offset = "0x57F18E0", VA = "0x57F28E0")]
	private static GisketchChoiceOptionDefinition[] PresetGuildOptions()
	{
		return null;
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x57F2430", Offset = "0x57F1430", VA = "0x57F2430")]
	private static string PresetGuildId(string value)
	{
		return null;
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x57F24C0", Offset = "0x57F14C0", VA = "0x57F24C0")]
	private static bool CustomGuildSelected()
	{
		return default(bool);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x57F2F90", Offset = "0x57F1F90", VA = "0x57F2F90")]
	private static GisketchLayoutDefinition ChoiceRowLayout()
	{
		return null;
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x57F0E80", Offset = "0x57EFE80", VA = "0x57F0E80")]
	private static string BadgesDraftValue()
	{
		return null;
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x57F1470", Offset = "0x57F0470", VA = "0x57F1470")]
	private static void AddEffectColors(List<string> parts, string prefix)
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x57F1DB0", Offset = "0x57F0DB0", VA = "0x57F1DB0")]
	private static void RegisterEffectColors(string prefix, JSONNode effect)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x57F3050", Offset = "0x57F2050", VA = "0x57F3050")]
	private static string ColorValue(JSONNode effect, int index)
	{
		return null;
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x57F31A0", Offset = "0x57F21A0", VA = "0x57F31A0")]
	public AottgEditCharacterDialog()
	{
	}
}
