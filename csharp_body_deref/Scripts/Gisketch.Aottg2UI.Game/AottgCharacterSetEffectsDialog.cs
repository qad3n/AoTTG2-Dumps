// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200018D")]
[AottgDialog("profile-character-set-effects")]
public sealed class AottgCharacterSetEffectsDialog : AottgDialog
{
	[Token(Token = "0x4000895")]
	public const string Id = "profile-character-set-effects";

	[Token(Token = "0x4000896")]
	private const string TextPickerId = "profile-character-set-effects-text-picker";

	[Token(Token = "0x4000897")]
	private const string EffectSelectId = "profile-character-set-effects-type";

	[Token(Token = "0x4000898")]
	private const string FontSelectId = "profile-character-set-effects-font";

	[Token(Token = "0x4000899")]
	private const string EffectColorsVisibleKey = "profile-character-set-effects.effect-colors.visible";

	[Token(Token = "0x400089A")]
	private const string TextColorHelpVisibleKey = "profile-character-set-effects.text-color-help.visible";

	[Token(Token = "0x400089B")]
	private const string TextColorsEnabledKey = "profile-character-set-effects.text-colors.enabled";

	[Token(Token = "0x400089C")]
	private const string TextColorHelpKey = "MainMenu.Profile.TextColorHelp";

	[Token(Token = "0x400089D")]
	private const string TextColorHelp = "Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.";

	[Token(Token = "0x400089E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] DraftColors;

	[Token(Token = "0x400089F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] DefaultGradientColors;

	[Token(Token = "0x40008A0")]
	[FieldOffset(Offset = "0x10")]
	private static string _targetId;

	[Token(Token = "0x40008A1")]
	[FieldOffset(Offset = "0x18")]
	private static string _targetLabel;

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x20")]
	private static string _effectPrefix;

	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x28")]
	private static string _initialValue;

	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x30")]
	private static string _initialFont;

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x38")]
	private static string _draftFont;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0x40")]
	private static string _draftType;

	[Token(Token = "0x40008A7")]
	[FieldOffset(Offset = "0x48")]
	private static string _textMode;

	[Token(Token = "0x40008A8")]
	[FieldOffset(Offset = "0x50")]
	private static bool _draftEnabled;

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0x51")]
	private static bool _hasAccess;

	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0x52")]
	private static bool _textEditable;

	[Token(Token = "0x1700013C")]
	protected override string Title
	{
		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x4405000", Offset = "0x4405000", VA = "0x4405000", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013D")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x4405030", Offset = "0x4405030", VA = "0x4405030", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008FC")]
		[Address(RVA = "0x4405060", Offset = "0x4405060", VA = "0x4405060", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x4405130", Offset = "0x4405130", VA = "0x4405130", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x44051F0", Offset = "0x44051F0", VA = "0x44051F0")]
	public static void Open(GisketchActionContext context, string targetId, string label, string effectPrefix, bool textEditable)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x4405DD0", Offset = "0x4405DD0", VA = "0x4405DD0", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x4406AF0", Offset = "0x4406AF0", VA = "0x4406AF0", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x4406BD0", Offset = "0x4406BD0", VA = "0x4406BD0")]
	private static void Cancel(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x4406EB0", Offset = "0x4406EB0", VA = "0x4406EB0")]
	private static void SelectEffect(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x4407A10", Offset = "0x4407A10", VA = "0x4407A10")]
	private static void SelectFont(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x4407370", Offset = "0x4407370", VA = "0x4407370")]
	private static void LoadPresetColors(GameObject source, string type)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x4407570", Offset = "0x4407570", VA = "0x4407570")]
	private static void LoadGradientColors(GameObject source)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x4407BE0", Offset = "0x4407BE0", VA = "0x4407BE0")]
	private static void ApplyDraftColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x4407F10", Offset = "0x4407F10", VA = "0x4407F10")]
	private static void ApplySelectedTextColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x4408340", Offset = "0x4408340", VA = "0x4408340")]
	private static void ImportedColoredText(GameObject source)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x4408670", Offset = "0x4408670", VA = "0x4408670")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x4405CE0", Offset = "0x4405CE0", VA = "0x4405CE0")]
	private static bool TextColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x44069E0", Offset = "0x44069E0", VA = "0x44069E0")]
	private static bool ColorPanelVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x4406980", Offset = "0x4406980", VA = "0x4406980")]
	private static bool TextColorHelpVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x44090A0", Offset = "0x44090A0", VA = "0x44090A0")]
	private static bool ColorVisible(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x4405A80", Offset = "0x4405A80", VA = "0x4405A80")]
	private static void SetColorVisibility(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x4407870", Offset = "0x4407870", VA = "0x4407870")]
	private static void ApplyGradientPreview(GameObject source)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x4407780", Offset = "0x4407780", VA = "0x4407780")]
	private static void ApplyEffectPreview(GameObject source)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x4406DA0", Offset = "0x4406DA0", VA = "0x4406DA0")]
	private static void ApplyFontPreview(GameObject source, string font)
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4408C70", Offset = "0x4408C70", VA = "0x4408C70")]
	private static string[] GradientColors(int count)
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x4407710", Offset = "0x4407710", VA = "0x4407710")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x44080A0", Offset = "0x44080A0", VA = "0x44080A0")]
	private static AottgCharacterTextColorEditorRuntime Runtime(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x44084D0", Offset = "0x44084D0", VA = "0x44084D0")]
	private static void SetChoiceValue(GameObject source, string value)
	{
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x4407B90", Offset = "0x4407B90", VA = "0x4407B90")]
	private static string DraftColorId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x44091C0", Offset = "0x44091C0", VA = "0x44091C0")]
	private static string DraftColorVisibleKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x4407E00", Offset = "0x4407E00", VA = "0x4407E00")]
	private static int DraftColorIndex(string id)
	{
		return default(int);
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x44097F0", Offset = "0x44097F0", VA = "0x44097F0")]
	public AottgCharacterSetEffectsDialog()
	{
	}
}
