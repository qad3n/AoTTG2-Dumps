// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015E")]
internal sealed class AottgDynamicTextRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x4000810")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000811")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000812")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x4000813")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Func<string> _text;

	[Token(Token = "0x4000814")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x4000815")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _tooltipKey;

	[Token(Token = "0x4000816")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _fallback;

	[Token(Token = "0x4000817")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _bindingKey;

	[Token(Token = "0x4000818")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x4000819")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400081A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x5CBD9E0", Offset = "0x5CBC9E0", VA = "0x5CBD9E0")]
	public AottgDynamicTextRow(string id, string label, Func<string> text, [Optional] string tooltip, [Optional] string fallback, [Optional] string labelKey, [Optional] string tooltipKey, [Optional] string bindingKey, [Optional] Func<string> dirtyValue)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$.ctor): clean
		base();
		this._id = id;
		this._label = label;
		this._labelKey = labelKey;
		this._text = text;
		this._tooltip = tooltip;
		this._tooltipKey = tooltipKey;
		this._fallback = fallback;
		this._bindingKey = bindingKey;
		this._dirtyValue = dirtyValue;
		return;
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x5CBDAE0", Offset = "0x5CBCAE0", VA = "0x5CBDAE0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$Build): 1 lines keep C-only constructs
		int layoutMode;
		String id;
		String label;
		String labelKey;
		String tooltip;
		String tooltipKey;
		Func<string> dirtyValue;
		AottgSettingsSearchContext searchContext;
		Action<AottgUi> __this_00;
		AottgSettingRowFrame __this_01;

		id = this._id;
		label = this._label;
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_BuildText);
		labelKey = this._labelKey;
		tooltip = this._tooltip;
		tooltipKey = this._tooltipKey;
		dirtyValue = this._dirtyValue;
		layoutMode = this._layoutMode;
		searchContext = this._searchContext;
		__this_01 = new AottgSettingRowFrame(id, label, 360.0, __this_00, tooltip, null, null, null, (Nullable<float>)0x0, labelKey, tooltipKey, null, (AottgSettingsSearchContext)searchContext, dirtyValue, null, null, layoutMode);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_01);
		return;
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x5CBDC80", Offset = "0x5CBCC80", VA = "0x5CBDC80", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x5CBDCB0", Offset = "0x5CBCCB0", VA = "0x5CBDCB0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x5CBDCC0", Offset = "0x5CBCCC0", VA = "0x5CBDCC0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$SyncState): clean
		GisketchUIState __this_00;
		String pSVar1;
		bool bVar2;
		String value;

		bVar2 = String.IsNullOrEmpty(this._bindingKey);
		if (((root != null) && (!bVar2)) &&(__this_00 = root._State_k__BackingField, __this_00 != null)) {
			pSVar1 = this._bindingKey;
			value = this.TextValue();
			__this_00.Set(pSVar1, value);
		}
		pSVar1 = this._id;
		AottgSettingsDirtyRegistry.SyncRow(root, pSVar1);
		return;
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x5CBDED0", Offset = "0x5CBCED0", VA = "0x5CBDED0")]
	private void BuildText(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$BuildText): clean
		bool bVar1;
		String text;
		String id;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar3;

		text = this.TextValue();
		id = String.Concat(this._id, "-value");
		if (control == null) goto label_05dbe0a3;
		pGVar2 = control.Text(text, "text", id, null, null);
		bVar1 = String.IsNullOrEmpty(this._bindingKey);
		if (!bVar1) {
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 == null) goto label_05dbe0a3;
			__this_00.text = this._bindingKey;
			if (pGVar2 == null) goto label_05dbe0a3;
			pGVar2.bind = __this_00;
		}
		width = AottgUi.Points(360.0);
		maxWidth = AottgUi.Percent(100.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (pGVar2 != null) {
			pGVar2.layout = pGVar3;
			return;
		}
	label_05dbe0a3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x5CBDD60", Offset = "0x5CBCD60", VA = "0x5CBDD60")]
	private string TextValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$TextValue): clean
		Func<string> pSVar1;
		String pSVar2;

		pSVar1 = this._text;
		if (pSVar1 == null) {
			pSVar2 = this._fallback;
			if (pSVar2 == null) {
				pSVar2 = Aottg2GisketchLocale.Text("Common.Unavailable");
				return pSVar2;
			}
		}
		else {
			pSVar2 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			if (pSVar2 == null) {
				pSVar2 = this._fallback;
				if (pSVar2 == null) {
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar2 = Aottg2GisketchLocale.Text("Common.Unavailable");
				}
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x5CBE0B0", Offset = "0x5CBD0B0", VA = "0x5CBE0B0")]
	private string Fallback()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgDynamicTextRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$Fallback): clean
		String pSVar1;

		pSVar1 = this._fallback;
		if (pSVar1 != null) {
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text("Common.Unavailable");
		return pSVar1;
	}
}
