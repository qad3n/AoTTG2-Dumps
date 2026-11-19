// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000340")]
public sealed class AottgBrushButton : AottgComponent
{
	[Token(Token = "0x4001038")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4001039")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgBrushSidePanelOption _option;

	[Token(Token = "0x400103A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly GisketchMotionDefinition _enter;

	[Token(Token = "0x400103B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly string _style;

	[Token(Token = "0x400103C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly bool _hideSearch;

	[Token(Token = "0x400103D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly string _id;

	[Token(Token = "0x400103E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly float _maxWidth;

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x5812240", Offset = "0x5811240", VA = "0x5812240")]
	public AottgBrushButton(AottgBrushSidePanelOption option, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue("mainMenuBrushButton")] string style, [Optional][DefaultParameterValue(false)] bool hideSearch, [Optional] string id, float maxWidth = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushButton.c (Gisketch.Aottg2UI.Game.AottgBrushButton$$.ctor): 1 lines keep C-only constructs
		base();
		this._option.StackedOptions = option.StackedOptions;
		this._option.Searchable = option.Searchable;
		*(undefined7)&this._option.field_0x31 = option._49_7_;
		this._option.Tooltip = option.Tooltip;
		this._option.ActionId = option.ActionId;
		this._option.Action = option.Action;
		this._option.TextKey = option.TextKey;
		this._option.Icon = option.Icon;
		this._option._text = option._text;
		this._option.Id = option.Id;
		this._enter = enter;
		this._style = style;
		this._hideSearch = hideSearch;
		this._id = id;
		this._maxWidth = maxWidth;
		return;
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x58122F0", Offset = "0x58112F0", VA = "0x58122F0")]
	public static string DisplayCase(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushButton.c (Gisketch.Aottg2UI.Game.AottgBrushButton$$DisplayCase): clean
		bool bVar1;
		String pSVar2;

		pSVar2 = GisketchTypographyLocale.CurrentLanguageName();
		bVar1 = GisketchTypographyLocale.UsesDesignedFonts(pSVar2);
		if (bVar1) {
			if (text == null) {
				throw new NullReferenceException();
			}
			pSVar2 = text.ToLowerInvariant();
			return pSVar2;
		}
		return text;
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x5812360", Offset = "0x5811360", VA = "0x5812360", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushButton.c (Gisketch.Aottg2UI.Game.AottgBrushButton$$Build): clean
		float value;
		bool bVar1;
		String __this_00;
		String pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar4;
		GisketchSearchDefinition pGVar5;

		__this_00 = (this._option).Text;
		pSVar2 = GisketchTypographyLocale.CurrentLanguageName();
		bVar1 = GisketchTypographyLocale.UsesDesignedFonts(pSVar2);
		pSVar2 = __this_00;
		if (bVar1) {
			if (__this_00 == null) goto label_0591263c;
			pSVar2 = __this_00.ToLowerInvariant();
		}
		bVar1 = String.IsNullOrEmpty(this._option.ActionId);
		if (bVar1) {
			if (ui == null) goto label_0591263c;
			pGVar3 = ui.Button(3, pSVar2, this._option.Action, this._id, this._option.Tooltip, null, this._option.Icon);
		}
		else {
			if (ui == null) goto label_0591263c;
			pGVar3 = ui.Button(3, pSVar2, this._option.ActionId, this._id, this._option.Tooltip, null, this._option.Icon);
		}
		if (pGVar3 == null) {
	label_0591263c: ;
			throw new NullReferenceException();
		}
		pGVar3.style = this._style;
		pGVar3.sprite = "UI/Sprites/Elements/Brush";
		bVar1 = String.IsNullOrEmpty(this._option.Icon);
		pGVar3.hasIcon = !bVar1;
		pGVar3.enter = this._enter;
		value = this._maxWidth;
		if (0.0 < value) {
			maxWidth = AottgUi.Points(value);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar3.layout = pGVar4;
		}
		if (this._option.Searchable == false) {
			if (this._hideSearch == false) {
				return;
			}
			pGVar5 = new GisketchSearchDefinition();
			if (pGVar5 == null) goto label_0591263c;
			pGVar5.hidden = true;
			pGVar3.search = pGVar5;
		}
		else {
			pGVar5 = AottgUi.Search(__this_00, null, false, this._option.Icon, null, null, null, false);
			pGVar3.search = pGVar5;
		}
		return;
	}
}
