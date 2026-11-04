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

[Token(Token = "0x200029E")]
[AottgDialog("profile-edit-character")]
public sealed class AottgEditCharacterDialog : AottgDialog
{
	[Token(Token = "0x4000D9A")]
	public const string Id = "profile-edit-character";

	[Token(Token = "0x4000D9B")]
	public const string NameInputId = "profile-character-name";

	[Token(Token = "0x4000D9C")]
	public const string GuildInputId = "profile-character-guild";

	[Token(Token = "0x4000D9D")]
	public const string PresetGuildSelectId = "profile-character-preset-guild";

	[Token(Token = "0x4000D9E")]
	public const string NameEffectPrefix = "profile-character-name-effect";

	[Token(Token = "0x4000D9F")]
	public const string GuildEffectPrefix = "profile-character-guild-effect";

	[Token(Token = "0x4000DA0")]
	internal const string EffectsDraftKey = "profile-character-effects-draft";

	[Token(Token = "0x4000DA1")]
	private const string NoGuild = "__none";

	[Token(Token = "0x4000DA2")]
	private const string NoGuildLabel = "None";

	[Token(Token = "0x4000DA3")]
	private const string CustomGuild = "Custom";

	[Token(Token = "0x4000DA4")]
	private const string BadgePrefix = "profile-character-badge-";

	[Token(Token = "0x4000DA5")]
	private const string BadgesDraftKey = "profile-character-badges-draft";

	[Token(Token = "0x4000DA6")]
	private const float FormPanelWidth = 640f;

	[Token(Token = "0x4000DA7")]
	private const float PreviewPanelWidth = 420f;

	[Token(Token = "0x4000DA8")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000DA9")]
	[FieldOffset(Offset = "0x0")]
	private static string _selectedGuildPresetId;

	[Token(Token = "0x4000DAA")]
	[FieldOffset(Offset = "0x8")]
	private static bool _noGuildSelected;

	[Token(Token = "0x4000DAB")]
	[FieldOffset(Offset = "0x9")]
	private static bool _nameEffectEnabled;

	[Token(Token = "0x4000DAC")]
	[FieldOffset(Offset = "0xA")]
	private static bool _guildEffectEnabled;

	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x10")]
	private static string _nameEffectType;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x18")]
	private static string _guildEffectType;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x20")]
	private static string _nameFont;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0x28")]
	private static string _guildFont;

	[Token(Token = "0x4000DB1")]
	[FieldOffset(Offset = "0x30")]
	private static readonly HashSet<string> SelectedBadges;

	[Token(Token = "0x170001C6")]
	protected override string Title
	{
		[Token(Token = "0x6001049")]
		[Address(RVA = "0x1E0A3F0", Offset = "0x1E089F0", VA = "0x181E0A3F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600104A")]
		[Address(RVA = "0x1E0A3C0", Offset = "0x1E089C0", VA = "0x181E0A3C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	protected override string RootStyle
	{
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x1E0A390", Offset = "0x1E08990", VA = "0x181E0A390", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	protected override string BodyStyle
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x1E0A260", Offset = "0x1E08860", VA = "0x181E0A260", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CB")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x600104E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CC")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x1E0A290", Offset = "0x1E08890", VA = "0x181E0A290", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x1E0A170", Offset = "0x1E08770", VA = "0x181E0A170", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x1E06780", Offset = "0x1E04D80", VA = "0x181E06780", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x1E098B0", Offset = "0x1E07EB0", VA = "0x181E098B0")]
	public static string SelectedGuildPresetId()
	{
		return null;
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x1E08960", Offset = "0x1E06F60", VA = "0x181E08960")]
	public static bool NoGuildSelected()
	{
		return default(bool);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x1E09850", Offset = "0x1E07E50", VA = "0x181E09850")]
	public static IEnumerable<string> SelectedBadgeIds()
	{
		return null;
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x1E07200", Offset = "0x1E05800", VA = "0x181E07200")]
	internal static string EffectsDraftValue()
	{
		return null;
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x1E09D40", Offset = "0x1E08340", VA = "0x181E09D40")]
	internal static void SyncEffectsDraft(GameObject source)
	{
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x1E08780", Offset = "0x1E06D80", VA = "0x181E08780")]
	public static bool NameEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x1E076D0", Offset = "0x1E05CD0", VA = "0x181E076D0")]
	public static bool GuildEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x1E087E0", Offset = "0x1E06DE0", VA = "0x181E087E0")]
	public static string NameEffectType()
	{
		return null;
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x1E07730", Offset = "0x1E05D30", VA = "0x181E07730")]
	public static string GuildEffectType()
	{
		return null;
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x1E088B0", Offset = "0x1E06EB0", VA = "0x181E088B0")]
	public static string NameFont()
	{
		return null;
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x1E07800", Offset = "0x1E05E00", VA = "0x181E07800")]
	public static string GuildFont()
	{
		return null;
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x1E06FD0", Offset = "0x1E055D0", VA = "0x181E06FD0")]
	internal static bool EffectEnabled(string prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x1E070F0", Offset = "0x1E056F0", VA = "0x181E070F0")]
	internal static string EffectType(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x1E06EF0", Offset = "0x1E054F0", VA = "0x181E06EF0")]
	internal static string EffectColor(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x1E09A20", Offset = "0x1E08020", VA = "0x181E09A20")]
	internal static void SetEffect(string prefix, bool enabled, string type)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x1E07640", Offset = "0x1E05C40", VA = "0x181E07640")]
	internal static string Font(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x1E09B80", Offset = "0x1E08180", VA = "0x181E09B80")]
	internal static void SetFont(string prefix, string font)
	{
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x1E092C0", Offset = "0x1E078C0", VA = "0x181E092C0")]
	private static void RefreshPreview(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x1E09060", Offset = "0x1E07660", VA = "0x181E09060")]
	private static void PresetGuild(AottgUi body)
	{
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x1E06440", Offset = "0x1E04A40", VA = "0x181E06440")]
	private static void Badges(AottgUi body)
	{
	}

	[Token(Token = "0x6001068")]
	[Address(RVA = "0x1E06CC0", Offset = "0x1E052C0", VA = "0x181E06CC0")]
	public static string ColorInputId(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x1E078B0", Offset = "0x1E05EB0", VA = "0x181E078B0")]
	private static void InitializeSelection(JSONNode info)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x1E09550", Offset = "0x1E07B50", VA = "0x181E09550")]
	private static void SelectPresetGuild(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x1E09DB0", Offset = "0x1E083B0", VA = "0x181E09DB0")]
	private static void ToggleBadge(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x1E09CC0", Offset = "0x1E082C0", VA = "0x181E09CC0")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x600106D")]
	[Address(RVA = "0x1E09940", Offset = "0x1E07F40", VA = "0x181E09940")]
	private static string SelectedPresetGuildValue()
	{
		return null;
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x1E08A40", Offset = "0x1E07040", VA = "0x181E08A40")]
	private static GisketchChoiceOptionDefinition[] PresetGuildOptions()
	{
		return null;
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x1E089B0", Offset = "0x1E06FB0", VA = "0x181E089B0")]
	private static string PresetGuildId(string value)
	{
		return null;
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x1E06E70", Offset = "0x1E05470", VA = "0x181E06E70")]
	private static bool CustomGuildSelected()
	{
		return default(bool);
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x1E06BC0", Offset = "0x1E051C0", VA = "0x181E06BC0")]
	private static GisketchLayoutDefinition ChoiceRowLayout()
	{
		return null;
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x1E06330", Offset = "0x1E04930", VA = "0x181E06330")]
	private static string BadgesDraftValue()
	{
		return null;
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x1E06240", Offset = "0x1E04840", VA = "0x181E06240")]
	private static void AddEffectColors(List<string> parts, string prefix)
	{
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x1E09310", Offset = "0x1E07910", VA = "0x181E09310")]
	private static void RegisterEffectColors(string prefix, JSONNode effect)
	{
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x1E06D10", Offset = "0x1E05310", VA = "0x181E06D10")]
	private static string ColorValue(JSONNode effect, int index)
	{
		return null;
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgEditCharacterDialog()
	{
	}
}
