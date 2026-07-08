using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200015B")]
[AottgDialog("profile-character-set-effects")]
public sealed class AottgCharacterSetEffectsDialog : AottgDialog
{
	[Token(Token = "0x40007D4")]
	public const string Id = "profile-character-set-effects";

	[Token(Token = "0x40007D5")]
	private const string TextPickerId = "profile-character-set-effects-text-picker";

	[Token(Token = "0x40007D6")]
	private const string EffectSelectId = "profile-character-set-effects-type";

	[Token(Token = "0x40007D7")]
	private const string FontSelectId = "profile-character-set-effects-font";

	[Token(Token = "0x40007D8")]
	private const string EffectColorsVisibleKey = "profile-character-set-effects.effect-colors.visible";

	[Token(Token = "0x40007D9")]
	private const string TextColorHelpVisibleKey = "profile-character-set-effects.text-color-help.visible";

	[Token(Token = "0x40007DA")]
	private const string TextColorsEnabledKey = "profile-character-set-effects.text-colors.enabled";

	[Token(Token = "0x40007DB")]
	private const string TextColorHelpKey = "MainMenu.Profile.TextColorHelp";

	[Token(Token = "0x40007DC")]
	private const string TextColorHelp = "Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.";

	[Token(Token = "0x40007DD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] DraftColors;

	[Token(Token = "0x40007DE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] DefaultGradientColors;

	[Token(Token = "0x40007DF")]
	[FieldOffset(Offset = "0x10")]
	private static string _targetId;

	[Token(Token = "0x40007E0")]
	[FieldOffset(Offset = "0x18")]
	private static string _targetLabel;

	[Token(Token = "0x40007E1")]
	[FieldOffset(Offset = "0x20")]
	private static string _effectPrefix;

	[Token(Token = "0x40007E2")]
	[FieldOffset(Offset = "0x28")]
	private static string _initialValue;

	[Token(Token = "0x40007E3")]
	[FieldOffset(Offset = "0x30")]
	private static string _initialFont;

	[Token(Token = "0x40007E4")]
	[FieldOffset(Offset = "0x38")]
	private static string _draftFont;

	[Token(Token = "0x40007E5")]
	[FieldOffset(Offset = "0x40")]
	private static string _draftType;

	[Token(Token = "0x40007E6")]
	[FieldOffset(Offset = "0x48")]
	private static string _textMode;

	[Token(Token = "0x40007E7")]
	[FieldOffset(Offset = "0x50")]
	private static bool _draftEnabled;

	[Token(Token = "0x40007E8")]
	[FieldOffset(Offset = "0x51")]
	private static bool _hasAccess;

	[Token(Token = "0x40007E9")]
	[FieldOffset(Offset = "0x52")]
	private static bool _textEditable;

	[Token(Token = "0x170000E6")]
	protected override string Title
	{
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x40D3040", Offset = "0x40D3040", VA = "0x40D3040", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E7")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x40D3070", Offset = "0x40D3070", VA = "0x40D3070", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x40D30A0", Offset = "0x40D30A0", VA = "0x40D30A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E9")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x40D3170", Offset = "0x40D3170", VA = "0x40D3170", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x40D3230", Offset = "0x40D3230", VA = "0x40D3230")]
	public static void Open(GisketchActionContext context, string targetId, string label, string effectPrefix, bool textEditable)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x40D3A30", Offset = "0x40D3A30", VA = "0x40D3A30", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x40D4640", Offset = "0x40D4640", VA = "0x40D4640", Slot = "19")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x40D4720", Offset = "0x40D4720", VA = "0x40D4720")]
	private static void Cancel(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x40D4930", Offset = "0x40D4930", VA = "0x40D4930")]
	private static void SelectEffect(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x40D5460", Offset = "0x40D5460", VA = "0x40D5460")]
	private static void SelectFont(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x40D4DF0", Offset = "0x40D4DF0", VA = "0x40D4DF0")]
	private static void LoadPresetColors(GameObject source, string type)
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x40D4FF0", Offset = "0x40D4FF0", VA = "0x40D4FF0")]
	private static void LoadGradientColors(GameObject source)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x40D5630", Offset = "0x40D5630", VA = "0x40D5630")]
	private static void ApplyDraftColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x40D5960", Offset = "0x40D5960", VA = "0x40D5960")]
	private static void ApplySelectedTextColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x40D5BB0", Offset = "0x40D5BB0", VA = "0x40D5BB0")]
	private static void ImportedColoredText(GameObject source)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x40D5EE0", Offset = "0x40D5EE0", VA = "0x40D5EE0")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x40D3940", Offset = "0x40D3940", VA = "0x40D3940")]
	private static bool TextColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x40D4530", Offset = "0x40D4530", VA = "0x40D4530")]
	private static bool ColorPanelVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x40D44D0", Offset = "0x40D44D0", VA = "0x40D44D0")]
	private static bool TextColorHelpVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x40D64F0", Offset = "0x40D64F0", VA = "0x40D64F0")]
	private static bool ColorVisible(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x40D36E0", Offset = "0x40D36E0", VA = "0x40D36E0")]
	private static void SetColorVisibility(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x40D52C0", Offset = "0x40D52C0", VA = "0x40D52C0")]
	private static void ApplyGradientPreview(GameObject source)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x40D5200", Offset = "0x40D5200", VA = "0x40D5200")]
	private static void ApplyEffectPreview(GameObject source)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x40D4820", Offset = "0x40D4820", VA = "0x40D4820")]
	private static void ApplyFontPreview(GameObject source, string font)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x40D63C0", Offset = "0x40D63C0", VA = "0x40D63C0")]
	private static string[] GradientColors(int count)
	{
		return null;
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x40D5190", Offset = "0x40D5190", VA = "0x40D5190")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x40D5AF0", Offset = "0x40D5AF0", VA = "0x40D5AF0")]
	private static AottgCharacterTextColorEditorRuntime Runtime(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x40D5D40", Offset = "0x40D5D40", VA = "0x40D5D40")]
	private static void SetChoiceValue(GameObject source, string value)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x40D55E0", Offset = "0x40D55E0", VA = "0x40D55E0")]
	private static string DraftColorId(int index)
	{
		return null;
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x40D6610", Offset = "0x40D6610", VA = "0x40D6610")]
	private static string DraftColorVisibleKey(int index)
	{
		return null;
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x40D5850", Offset = "0x40D5850", VA = "0x40D5850")]
	private static int DraftColorIndex(string id)
	{
		return default(int);
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x40D6670", Offset = "0x40D6670", VA = "0x40D6670")]
	public AottgCharacterSetEffectsDialog()
	{
	}
}
