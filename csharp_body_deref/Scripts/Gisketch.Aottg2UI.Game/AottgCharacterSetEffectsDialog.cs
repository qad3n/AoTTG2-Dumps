// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterSetEffectsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EF")]
[AottgDialog("profile-character-set-effects")]
public sealed class AottgCharacterSetEffectsDialog : AottgDialog
{
	[Token(Token = "0x4000ECF")]
	public const string Id = "profile-character-set-effects";

	[Token(Token = "0x4000ED0")]
	private const string TextPickerId = "profile-character-set-effects-text-picker";

	[Token(Token = "0x4000ED1")]
	private const string EffectSelectId = "profile-character-set-effects-type";

	[Token(Token = "0x4000ED2")]
	private const string FontSelectId = "profile-character-set-effects-font";

	[Token(Token = "0x4000ED3")]
	private const string EffectDialogDraftKey = "profile-character-set-effects.draft";

	[Token(Token = "0x4000ED4")]
	private const string EffectColorsVisibleKey = "profile-character-set-effects.effect-colors.visible";

	[Token(Token = "0x4000ED5")]
	private const string TextColorHelpVisibleKey = "profile-character-set-effects.text-color-help.visible";

	[Token(Token = "0x4000ED6")]
	private const string TextColorsEnabledKey = "profile-character-set-effects.text-colors.enabled";

	[Token(Token = "0x4000ED7")]
	private const string TextColorHelpKey = "MainMenu.Profile.TextColorHelp";

	[Token(Token = "0x4000ED8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] DraftColors;

	[Token(Token = "0x4000ED9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] DefaultGradientColors;

	[Token(Token = "0x4000EDA")]
	[FieldOffset(Offset = "0x10")]
	private static string _targetId;

	[Token(Token = "0x4000EDB")]
	[FieldOffset(Offset = "0x18")]
	private static string _effectPrefix;

	[Token(Token = "0x4000EDC")]
	[FieldOffset(Offset = "0x20")]
	private static string _initialValue;

	[Token(Token = "0x4000EDD")]
	[FieldOffset(Offset = "0x28")]
	private static string _initialFont;

	[Token(Token = "0x4000EDE")]
	[FieldOffset(Offset = "0x30")]
	private static string _draftFont;

	[Token(Token = "0x4000EDF")]
	[FieldOffset(Offset = "0x38")]
	private static string _draftType;

	[Token(Token = "0x4000EE0")]
	[FieldOffset(Offset = "0x40")]
	private static string _textMode;

	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x48")]
	private static GameObject _ownerSource;

	[Token(Token = "0x4000EE2")]
	[FieldOffset(Offset = "0x50")]
	private static bool _draftEnabled;

	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x51")]
	private static bool _hasAccess;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x52")]
	private static bool _textEditable;

	[Token(Token = "0x170001FD")]
	protected override string Title
	{
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x57E1350", Offset = "0x57E0350", VA = "0x57E1350", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x57E13B0", Offset = "0x57E03B0", VA = "0x57E13B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FF")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x57E13E0", Offset = "0x57E03E0", VA = "0x57E13E0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000200")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001201")]
		[Address(RVA = "0x57E13F0", Offset = "0x57E03F0", VA = "0x57E13F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000201")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001202")]
		[Address(RVA = "0x57E14B0", Offset = "0x57E04B0", VA = "0x57E14B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x57E1560", Offset = "0x57E0560", VA = "0x57E1560")]
	public static void Open(GisketchActionContext context, string targetId, string effectPrefix, bool textEditable)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x57E2200", Offset = "0x57E1200", VA = "0x57E2200", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x57E3390", Offset = "0x57E2390", VA = "0x57E3390", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x57E3460", Offset = "0x57E2460", VA = "0x57E3460")]
	private static void SelectEffect(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x57E3ED0", Offset = "0x57E2ED0", VA = "0x57E3ED0")]
	private static void SelectFont(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x57E3780", Offset = "0x57E2780", VA = "0x57E3780")]
	private static void LoadPresetColors(GameObject source, string type)
	{
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x57E3970", Offset = "0x57E2970", VA = "0x57E3970")]
	private static void LoadGradientColors(GameObject source)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x57E42C0", Offset = "0x57E32C0", VA = "0x57E42C0")]
	private static void ApplyDraftColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x57E4600", Offset = "0x57E3600", VA = "0x57E4600")]
	private static void ApplySelectedTextColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x57E4A80", Offset = "0x57E3A80", VA = "0x57E4A80")]
	private static void ImportedColoredText(GameObject source)
	{
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x57E4DB0", Offset = "0x57E3DB0", VA = "0x57E4DB0")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x57E5900", Offset = "0x57E4900", VA = "0x57E5900")]
	private static void DiscardPreview(GameObject source)
	{
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x57E2130", Offset = "0x57E1130", VA = "0x57E2130")]
	private static bool TextColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x57E32F0", Offset = "0x57E22F0", VA = "0x57E32F0")]
	private static bool ColorPanelVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x57E3290", Offset = "0x57E2290", VA = "0x57E3290")]
	private static bool TextColorHelpVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x57E59D0", Offset = "0x57E49D0", VA = "0x57E59D0")]
	private static bool ColorVisible(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x57E1DF0", Offset = "0x57E0DF0", VA = "0x57E1DF0")]
	private static void SetColorVisibility(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x57E3C60", Offset = "0x57E2C60", VA = "0x57E3C60")]
	private static void ApplyGradientPreview(GameObject source)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x57E3B70", Offset = "0x57E2B70", VA = "0x57E3B70")]
	private static void ApplyEffectPreview(GameObject source)
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x57E4160", Offset = "0x57E3160", VA = "0x57E4160")]
	private static void ApplyFontPreview(GameObject source, string font)
	{
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x57E5430", Offset = "0x57E4430", VA = "0x57E5430")]
	private static string[] GradientColors(int count)
	{
		return null;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x57E3B00", Offset = "0x57E2B00", VA = "0x57E3B00")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x57E47D0", Offset = "0x57E37D0", VA = "0x57E47D0")]
	private static AottgCharacterTextColorEditorRuntime Runtime(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x57E4C20", Offset = "0x57E3C20", VA = "0x57E4C20")]
	private static void SetChoiceValue(GameObject source, string value)
	{
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x57E4270", Offset = "0x57E3270", VA = "0x57E4270")]
	private static string DraftColorId(int index)
	{
		return null;
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x57E5A50", Offset = "0x57E4A50", VA = "0x57E5A50")]
	private static string DraftColorVisibleKey(int index)
	{
		return null;
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x57E3D60", Offset = "0x57E2D60", VA = "0x57E3D60")]
	private static void SyncDialogDraft(GameObject source)
	{
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x57E2EA0", Offset = "0x57E1EA0", VA = "0x57E2EA0")]
	private static string EffectDialogDraftValue(string text)
	{
		return null;
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x57E4500", Offset = "0x57E3500", VA = "0x57E4500")]
	private static int DraftColorIndex(string id)
	{
		return default(int);
	}

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x57E60B0", Offset = "0x57E50B0", VA = "0x57E60B0")]
	public AottgCharacterSetEffectsDialog()
	{
	}
}
