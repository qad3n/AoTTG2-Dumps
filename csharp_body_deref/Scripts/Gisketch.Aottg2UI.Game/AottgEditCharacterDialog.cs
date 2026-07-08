using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000166")]
[AottgDialog("profile-edit-character")]
public sealed class AottgEditCharacterDialog : AottgDialog
{
	[Token(Token = "0x4000834")]
	public const string Id = "profile-edit-character";

	[Token(Token = "0x4000835")]
	public const string NameInputId = "profile-character-name";

	[Token(Token = "0x4000836")]
	public const string GuildInputId = "profile-character-guild";

	[Token(Token = "0x4000837")]
	public const string PresetGuildSelectId = "profile-character-preset-guild";

	[Token(Token = "0x4000838")]
	public const string NameEffectPrefix = "profile-character-name-effect";

	[Token(Token = "0x4000839")]
	public const string GuildEffectPrefix = "profile-character-guild-effect";

	[Token(Token = "0x400083A")]
	private const string CustomGuild = "Custom";

	[Token(Token = "0x400083B")]
	private const string BadgePrefix = "profile-character-badge-";

	[Token(Token = "0x400083C")]
	private const float FormPanelWidth = 640f;

	[Token(Token = "0x400083D")]
	private const float PreviewPanelWidth = 420f;

	[Token(Token = "0x400083E")]
	private const float SplitGap = 24f;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x0")]
	private static string _selectedGuildPresetId;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x8")]
	private static bool _nameEffectEnabled;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x9")]
	private static bool _guildEffectEnabled;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x10")]
	private static string _nameEffectType;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x18")]
	private static string _guildEffectType;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x20")]
	private static string _nameFont;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x28")]
	private static string _guildFont;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x30")]
	private static readonly HashSet<string> SelectedBadges;

	[Token(Token = "0x170000EB")]
	protected override string Title
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x40E0390", Offset = "0x40E0390", VA = "0x40E0390", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EC")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x40E03C0", Offset = "0x40E03C0", VA = "0x40E03C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x40E03F0", Offset = "0x40E03F0", VA = "0x40E03F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	protected override string BodyStyle
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x40E0420", Offset = "0x40E0420", VA = "0x40E0420", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x40E0450", Offset = "0x40E0450", VA = "0x40E0450", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x40E0460", Offset = "0x40E0460", VA = "0x40E0460", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F1")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x40E0530", Offset = "0x40E0530", VA = "0x40E0530", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x40E05F0", Offset = "0x40E05F0", VA = "0x40E05F0", Slot = "17")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x40E0600", Offset = "0x40E0600", VA = "0x40E0600", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x40E1B00", Offset = "0x40E1B00", VA = "0x40E1B00", Slot = "19")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x40E1B10", Offset = "0x40E1B10", VA = "0x40E1B10")]
	public static string SelectedGuildPresetId()
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x40E1B80", Offset = "0x40E1B80", VA = "0x40E1B80")]
	public static IEnumerable<string> SelectedBadgeIds()
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x40E2250", Offset = "0x40E2250", VA = "0x40E2250")]
	public static bool NameEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x40E2380", Offset = "0x40E2380", VA = "0x40E2380")]
	public static bool GuildEffectEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x40E2400", Offset = "0x40E2400", VA = "0x40E2400")]
	public static string NameEffectType()
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x40E2510", Offset = "0x40E2510", VA = "0x40E2510")]
	public static string GuildEffectType()
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x40E2620", Offset = "0x40E2620", VA = "0x40E2620")]
	public static string NameFont()
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x40E26D0", Offset = "0x40E26D0", VA = "0x40E26D0")]
	public static string GuildFont()
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x40E22C0", Offset = "0x40E22C0", VA = "0x40E22C0")]
	internal static bool EffectEnabled(string prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x40E2780", Offset = "0x40E2780", VA = "0x40E2780")]
	internal static string EffectType(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x40E2870", Offset = "0x40E2870", VA = "0x40E2870")]
	internal static string EffectColor(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x40E29E0", Offset = "0x40E29E0", VA = "0x40E29E0")]
	internal static void SetEffect(string prefix, bool enabled, string type)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x40E2AF0", Offset = "0x40E2AF0", VA = "0x40E2AF0")]
	internal static string Font(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x40E2B60", Offset = "0x40E2B60", VA = "0x40E2B60")]
	internal static void SetFont(string prefix, string font)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x40E2C30", Offset = "0x40E2C30", VA = "0x40E2C30")]
	private static void RefreshPreview(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x40E2C90", Offset = "0x40E2C90", VA = "0x40E2C90")]
	private static void PresetGuild(AottgUi body)
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x40E2FB0", Offset = "0x40E2FB0", VA = "0x40E2FB0")]
	private static void Badges(AottgUi body)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x40E2980", Offset = "0x40E2980", VA = "0x40E2980")]
	public static string ColorInputId(string prefix, int index)
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x40E0A80", Offset = "0x40E0A80", VA = "0x40E0A80")]
	private static void InitializeSelection(JSONNode info)
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x40E3D40", Offset = "0x40E3D40", VA = "0x40E3D40")]
	private static void SelectPresetGuild(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x40E4050", Offset = "0x40E4050", VA = "0x40E4050")]
	private static void ToggleBadge(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x40E3FE0", Offset = "0x40E3FE0", VA = "0x40E3FE0")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x40E4240", Offset = "0x40E4240", VA = "0x40E4240")]
	private static string SelectedPresetGuildValue()
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x40E42E0", Offset = "0x40E42E0", VA = "0x40E42E0")]
	private static GisketchChoiceOptionDefinition[] PresetGuildOptions()
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x40E3F70", Offset = "0x40E3F70", VA = "0x40E3F70")]
	private static string PresetGuildId(string value)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x40E48F0", Offset = "0x40E48F0", VA = "0x40E48F0")]
	private static GisketchLayoutDefinition ChoiceRowLayout()
	{
		return null;
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x40E33A0", Offset = "0x40E33A0", VA = "0x40E33A0")]
	private static void RegisterEffectColors(string prefix, JSONNode effect)
	{
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x40E49C0", Offset = "0x40E49C0", VA = "0x40E49C0")]
	private static string ColorValue(JSONNode effect, int index)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x40E4B10", Offset = "0x40E4B10", VA = "0x40E4B10")]
	public AottgEditCharacterDialog()
	{
	}
}
