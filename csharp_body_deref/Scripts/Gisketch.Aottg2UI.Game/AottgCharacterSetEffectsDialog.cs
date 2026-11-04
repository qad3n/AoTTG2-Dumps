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

[Token(Token = "0x2000293")]
[AottgDialog("profile-character-set-effects")]
public sealed class AottgCharacterSetEffectsDialog : AottgDialog
{
	[Token(Token = "0x4000D36")]
	public const string Id = "profile-character-set-effects";

	[Token(Token = "0x4000D37")]
	private const string TextPickerId = "profile-character-set-effects-text-picker";

	[Token(Token = "0x4000D38")]
	private const string EffectSelectId = "profile-character-set-effects-type";

	[Token(Token = "0x4000D39")]
	private const string FontSelectId = "profile-character-set-effects-font";

	[Token(Token = "0x4000D3A")]
	private const string EffectDialogDraftKey = "profile-character-set-effects.draft";

	[Token(Token = "0x4000D3B")]
	private const string EffectColorsVisibleKey = "profile-character-set-effects.effect-colors.visible";

	[Token(Token = "0x4000D3C")]
	private const string TextColorHelpVisibleKey = "profile-character-set-effects.text-color-help.visible";

	[Token(Token = "0x4000D3D")]
	private const string TextColorsEnabledKey = "profile-character-set-effects.text-colors.enabled";

	[Token(Token = "0x4000D3E")]
	private const string TextColorHelpKey = "MainMenu.Profile.TextColorHelp";

	[Token(Token = "0x4000D3F")]
	private const string TextColorHelp = "Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.";

	[Token(Token = "0x4000D40")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] DraftColors;

	[Token(Token = "0x4000D41")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] DefaultGradientColors;

	[Token(Token = "0x4000D42")]
	[FieldOffset(Offset = "0x10")]
	private static string _targetId;

	[Token(Token = "0x4000D43")]
	[FieldOffset(Offset = "0x18")]
	private static string _targetLabel;

	[Token(Token = "0x4000D44")]
	[FieldOffset(Offset = "0x20")]
	private static string _effectPrefix;

	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x28")]
	private static string _initialValue;

	[Token(Token = "0x4000D46")]
	[FieldOffset(Offset = "0x30")]
	private static string _initialFont;

	[Token(Token = "0x4000D47")]
	[FieldOffset(Offset = "0x38")]
	private static string _draftFont;

	[Token(Token = "0x4000D48")]
	[FieldOffset(Offset = "0x40")]
	private static string _draftType;

	[Token(Token = "0x4000D49")]
	[FieldOffset(Offset = "0x48")]
	private static string _textMode;

	[Token(Token = "0x4000D4A")]
	[FieldOffset(Offset = "0x50")]
	private static GameObject _ownerSource;

	[Token(Token = "0x4000D4B")]
	[FieldOffset(Offset = "0x58")]
	private static bool _draftEnabled;

	[Token(Token = "0x4000D4C")]
	[FieldOffset(Offset = "0x59")]
	private static bool _hasAccess;

	[Token(Token = "0x4000D4D")]
	[FieldOffset(Offset = "0x5A")]
	private static bool _textEditable;

	[Token(Token = "0x170001C0")]
	protected override string Title
	{
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x1DFCC60", Offset = "0x1DFB260", VA = "0x181DFCC60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x1DFCC30", Offset = "0x1DFB230", VA = "0x181DFCC30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C3")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FB1")]
		[Address(RVA = "0x1DFCB30", Offset = "0x1DFB130", VA = "0x181DFCB30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000FB2")]
		[Address(RVA = "0x1DFCA40", Offset = "0x1DFB040", VA = "0x181DFCA40", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x1DFABB0", Offset = "0x1DF91B0", VA = "0x181DFABB0")]
	public static void Open(GisketchActionContext context, string targetId, string label, string effectPrefix, bool textEditable)
	{
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x1DF8F30", Offset = "0x1DF7530", VA = "0x181DF8F30", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x1DF9B80", Offset = "0x1DF8180", VA = "0x181DF9B80", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x1DFB8A0", Offset = "0x1DF9EA0", VA = "0x181DFB8A0")]
	private static void SelectEffect(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x1DFBF30", Offset = "0x1DFA530", VA = "0x181DFBF30")]
	private static void SelectFont(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x1DFA9F0", Offset = "0x1DF8FF0", VA = "0x181DFA9F0")]
	private static void LoadPresetColors(GameObject source, string type)
	{
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x1DFA840", Offset = "0x1DF8E40", VA = "0x181DFA840")]
	private static void LoadGradientColors(GameObject source)
	{
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x1DF85D0", Offset = "0x1DF6BD0", VA = "0x181DF85D0")]
	private static void ApplyDraftColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x1DF8C10", Offset = "0x1DF7210", VA = "0x181DF8C10")]
	private static void ApplySelectedTextColor(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x1DFA500", Offset = "0x1DF8B00", VA = "0x181DFA500")]
	private static void ImportedColoredText(GameObject source)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x1DFB260", Offset = "0x1DF9860", VA = "0x181DFB260")]
	private static void Save(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x1DF9DA0", Offset = "0x1DF83A0", VA = "0x181DF9DA0")]
	private static void DiscardPreview(GameObject source)
	{
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x1DFC680", Offset = "0x1DFAC80", VA = "0x181DFC680")]
	private static bool TextColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x1DF9C80", Offset = "0x1DF8280", VA = "0x181DF9C80")]
	private static bool ColorPanelVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x1DFC640", Offset = "0x1DFAC40", VA = "0x181DFC640")]
	private static bool TextColorHelpVisible()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x1DF9D10", Offset = "0x1DF8310", VA = "0x181DF9D10")]
	private static bool ColorVisible(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x1DFC220", Offset = "0x1DFA820", VA = "0x181DFC220")]
	private static void SetColorVisibility(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x1DF8B00", Offset = "0x1DF7100", VA = "0x181DF8B00")]
	private static void ApplyGradientPreview(GameObject source)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x1DF88E0", Offset = "0x1DF6EE0", VA = "0x181DF88E0")]
	private static void ApplyEffectPreview(GameObject source)
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x1DF89E0", Offset = "0x1DF6FE0", VA = "0x181DF89E0")]
	private static void ApplyFontPreview(GameObject source, string font)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x1DFA430", Offset = "0x1DF8A30", VA = "0x181DFA430")]
	private static string[] GradientColors(int count)
	{
		return null;
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x1DFC4B0", Offset = "0x1DFAAB0", VA = "0x181DFC4B0")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x1DFB1A0", Offset = "0x1DF97A0", VA = "0x181DFB1A0")]
	private static AottgCharacterTextColorEditorRuntime Runtime(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x1DFC0B0", Offset = "0x1DFA6B0", VA = "0x181DFC0B0")]
	private static void SetChoiceValue(GameObject source, string value)
	{
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x1DF9E80", Offset = "0x1DF8480", VA = "0x181DF9E80")]
	private static string DraftColorId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x1DF9FC0", Offset = "0x1DF85C0", VA = "0x181DF9FC0")]
	private static string DraftColorVisibleKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x1DFC530", Offset = "0x1DFAB30", VA = "0x181DFC530")]
	private static void SyncDialogDraft(GameObject source)
	{
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x1DFA020", Offset = "0x1DF8620", VA = "0x181DFA020")]
	private static string EffectDialogDraftValue(string text)
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x1DF9ED0", Offset = "0x1DF84D0", VA = "0x181DF9ED0")]
	private static int DraftColorIndex(string id)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgCharacterSetEffectsDialog()
	{
	}
}
