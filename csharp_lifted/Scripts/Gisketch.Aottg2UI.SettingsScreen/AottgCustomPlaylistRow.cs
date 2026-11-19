// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015D")]
internal sealed class AottgCustomPlaylistRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x4000808")]
	private const float ControlWidth = 620f;

	[Token(Token = "0x4000809")]
	private const float ManageButtonWidth = 150f;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400080B")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _labelKey;

	[Token(Token = "0x400080C")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x400080D")]
	[FieldOffset(Offset = "0x28")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x400080E")]
	[FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400080F")]
	[FieldOffset(Offset = "0x58")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x5CBD0D0", Offset = "0x5CBC0D0", VA = "0x5CBD0D0")]
	public AottgCustomPlaylistRow(string id, string labelKey, string stateKey, Func<string> dirtyValue)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$.ctor): clean
		base();
		this._id = id;
		this._labelKey = labelKey;
		this._stateKey = stateKey;
		this._dirtyValue = dirtyValue;
		return;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x5CBD140", Offset = "0x5CBC140", VA = "0x5CBD140", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$Build): 1 lines keep C-only constructs
		int layoutMode;
		String id;
		String pSVar1;
		Func<string> dirtyValue;
		AottgSettingsSearchContext searchContext;
		String label;
		Action<AottgUi> __this_00;
		AottgSettingRowFrame __this_01;

		id = this._id;
		pSVar1 = this._labelKey;
		label = Aottg2GisketchLocale.Text(pSVar1);
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl);
		pSVar1 = this._labelKey;
		dirtyValue = this._dirtyValue;
		layoutMode = this._layoutMode;
		searchContext = this._searchContext;
		__this_01 = new AottgSettingRowFrame(id, label, 620.0, __this_00, null, null, null, null, (Nullable<float>)0x0, pSVar1, null, null, (AottgSettingsSearchContext)searchContext, dirtyValue, null, null, layoutMode);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_01);
		return;
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x5CBD2E0", Offset = "0x5CBC2E0", VA = "0x5CBD2E0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x5CBD310", Offset = "0x5CBC310", VA = "0x5CBD310", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x5CBD320", Offset = "0x5CBC320", VA = "0x5CBD320", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$SyncState): clean
		GisketchUIState __this_00;
		String pSVar1;
		bool bVar2;
		String value;
		MethodInfo method_00;

		method_00 = (MethodInfo)this._stateKey;
		bVar2 = String.IsNullOrEmpty((String)method_00);
		if (((root != null) && (!bVar2)) &&(__this_00 = root._State_k__BackingField, __this_00 != null)) {
			pSVar1 = this._stateKey;
			value = AottgPlaylistActions.CustomPlaylistText();
			__this_00.Set(pSVar1, value);
		}
		pSVar1 = this._id;
		AottgSettingsDirtyRegistry.SyncRow(root, pSVar1);
		return;
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x5CBD480", Offset = "0x5CBC480", VA = "0x5CBD480")]
	private void BuildControl(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$BuildControl): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl_b__13_0);
		id = String.Concat(this._id, "-custom-playlist-control");
		width = AottgUi.Points(620.0);
		maxWidth = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (control == null) {
			throw new NullReferenceException();
		}
		control.Panel("clear", __this_00, id, layout, null);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgCustomPlaylistRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$<BuildControl>b__13_0: 2 lines keep C-only constructs
	private void BuildControl_b__13_0(AottgUi row)
	{
		Action<AottgUi> __this_00;
		String pSVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar4;
		Action<GisketchActionContext> __this_01;
		GisketchNodeDefinition pGVar5;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgCustomPlaylistRow_BuildControl_b__13_1);
		pSVar1 = String.Concat(this._id, "-marquee-field");
		pGVar2 = AottgUi.Percent(100.0);
		pGVar3 = AottgUi.Points(38.0);
		minWidth = AottgUi.Points(0.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (row != null) {
			row.Panel("inputField", __this_00, pSVar1, pGVar4, null);
			__this_01 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgPlaylistActions_OpenManagerDialog);
			pSVar1 = String.Concat(this._id, "-manage");
			pGVar5 = row.ButtonKey(1, "SettingsPopup.Sound.ManagePlaylist", __this_01, pSVar1, null, null, "menuList");
			pGVar2 = AottgUi.Points(150.0);
			pGVar3 = AottgUi.Points(150.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, null, pGVar3, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar5 != null) {
				pGVar5.layout = pGVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgCustomPlaylistRow$$<BuildControl>b__13_1: clean
	private void BuildControl_b__13_1(AottgUi field)
	{
		String stateKey;
		String id;
		String fallback;
		AottgMarqueeText __this_00;
		MethodInfo method_00;

		method_00 = (MethodInfo)this._id;
		id = String.Concat((String)method_00, "-marquee");
		stateKey = this._stateKey;
		fallback = AottgPlaylistActions.CustomPlaylistText();
		__this_00 = new AottgMarqueeText(id, stateKey, fallback);
		if (field == null) {
			throw new NullReferenceException();
		}
		field.Component((AottgComponent)__this_00);
		return;
	}
}
