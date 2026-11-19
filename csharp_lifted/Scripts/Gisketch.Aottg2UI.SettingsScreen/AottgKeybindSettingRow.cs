// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000166")]
internal sealed class AottgKeybindSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x400083F")]
	private const int SlotCount = 2;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x20")]
	private readonly KeybindSetting _setting;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x28")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x50")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x58")]
	public string LabelKey;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x60")]
	public string TooltipKey;

	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x68")]
	public bool WarnOnConflict;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x70")]
	public string ConflictScopeId;

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x5CC2610", Offset = "0x5CC1610", VA = "0x5CC2610")]
	public AottgKeybindSettingRow(string id, string label, KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$.ctor): clean
		base();
		this._id = id;
		this._label = label;
		this._setting = setting;
		return;
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x5CC2670", Offset = "0x5CC1670", VA = "0x5CC2670", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Build): 2 lines keep C-only constructs
		int layoutMode;
		String pSVar1;
		String pSVar2;
		KeybindSetting setting;
		String labelKey;
		String tooltipKey;
		AottgSettingsSearchContext searchContext;
		String pSVar3;
		Action<AottgUi> __this_00;
		Func<string> __this_01;
		String pSVar4;
		AottgSettingRowFrame __this_02;
		String pSVar5;

		if (this.WarnOnConflict != false) {
			pSVar1 = this._id;
			pSVar2 = this.ConflictScopeId;
			pSVar3 = (this._searchContext).Title(this._label);
			setting = this._setting;
			if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
			}
			AottgKeybindConflictRegistry.Register(pSVar1, pSVar2, pSVar3, setting);
		}
		pSVar1 = this._id;
		pSVar2 = this._label;
		pSVar4 = null;
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots);
		pSVar3 = this._label;
		labelKey = this.LabelKey;
		tooltipKey = this.TooltipKey;
		searchContext = this._searchContext;
		__this_01 = new Func<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_DirtyValue);
		pSVar5 = null;
		if (this.WarnOnConflict != false) {
			pSVar4 = this._id;
			if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar5 = null;
			pSVar4 = AottgSettingsStateKeys.KeybindConflictRow(pSVar4);
			if (this.WarnOnConflict != false) {
				pSVar5 = this._id;
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar5 = AottgSettingsStateKeys.KeybindConflictTooltip(pSVar5) ;
			}
		}
		layoutMode = this._layoutMode;
		__this_02 = new AottgSettingRowFrame(pSVar1, pSVar2, 300.0, __this_00, null, pSVar3, null, null, (Nullable<float>)0x0, labelKey, tooltipKey, null, (AottgSettingsSearchContext)searchContext, __this_01, pSVar4, pSVar5, layoutMode);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_02);
		return;
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x5CC2930", Offset = "0x5CC1930", VA = "0x5CC2930", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x5CC2960", Offset = "0x5CC1960", VA = "0x5CC2960", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$SyncState): clean


		AottgKeybindSettingRow.Sync(root, this._id, this._setting);
		return;
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x5CC2980", Offset = "0x5CC1980", VA = "0x5CC2980", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x5CC2990", Offset = "0x5CC1990", VA = "0x5CC2990")]
	private void BuildSlots(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlots): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition layout;

		AottgKeybindSettingRow.EnsureSlots(this._setting);
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_BuildSlots_b__15_0);
		id = String.Concat(this._id, "-keybind-slots");
		width = AottgUi.Points(300.0);
		maxWidth = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "Center", "Center", null, null, 8.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (control == null) {
			throw new NullReferenceException();
		}
		control.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x5CC2B30", Offset = "0x5CC1B30", VA = "0x5CC2B30")]
	private void BuildSlot(AottgUi row, int slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$BuildSlot): 7 lines keep C-only constructs
		KeybindSetting pSVar1;
		List<InputKey> __this_00;
		bool bVar2;
		ulong in_RAX;
		AottgKeybindSettingRow.c__DisplayClass16_0 __this_01;
		InputKey __this_02;
		String pSVar3;
		Action<GisketchActionContext> __this_03;
		String str2;
		String pSVar4;
		GisketchNodeDefinition pGVar5;
		GisketchUIBindingDefinition __this_04;
		GisketchLength width;
		GisketchLength minWidth;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar6;
		int __this_05;
		ulong uStack_38;

		uStack_38 = in_RAX;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindSettingRow.c__DisplayClass16_0)) ;
		__this_01 = new Object();
		if (__this_01 == null) goto label_05dc2ea5;
		__this_01.__4__this = this;
		__this_01.slot = slot;
		pSVar1 = this._setting;
		if ((pSVar1 == null) ||(__this_00 = pSVar1.InputKeys, __this_00 == null) ) goto label_05dc2ea5;
		__this_02 = __this_00.get_Item(slot);
		__this_05 = &__this_01.slot;
		if (__this_02 == null) {
	label_05dc2c5f: ;
			pSVar3 = Aottg2GisketchLocale.Text("Common.Unbound");
		}
		else {
			bVar2 = __this_02.IsNone();
			if (bVar2) goto label_05dc2c5f;
			pSVar3 = __this_02.ToString();
		}
		__this_03 = new Action<GisketchActionContext>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow_c__DisplayClass16_0_BuildSlot_b__0);
		pSVar4 = this._id;
		str2 = __this_05.ToString();
		pSVar4 = String.Concat(pSVar4, "-key-", str2);
		if (row != null) {
			pGVar5 = row.Button(5, pSVar3, __this_03, pSVar4, null, null, null);
			if (pGVar5 != null) {
				pGVar5.style = "keybindButton";
				__this_04 = new GisketchUIBindingDefinition();
				pSVar3 = this._id;
				uStack_38 = CONCAT44(*__this_05, (undefined4)uStack_38);
				pSVar4 = (((long)&uStack_38 + 4)).ToString();
				pSVar3 = String.Concat(pSVar3, ".key.", pSVar4, ".text");
				if (__this_04 != null) {
					__this_04.text = pSVar3;
					pGVar5.bind = __this_04;
					pGVar5.clip = true;
					width = AottgUi.Points(146.0);
					minWidth = AottgUi.Points(146.0);
					maxWidth = AottgUi.Points(146.0);
					pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, minWidth, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar5.layout = pGVar6;
					return;
				}
			}
		}
	label_05dc2ea5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x5CC2EC0", Offset = "0x5CC1EC0", VA = "0x5CC2EC0")]
	internal static string Text(InputKey key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Text): clean
		bool bVar1;
		String pSVar2;

		if (key != null) {
			bVar1 = key.IsNone();
			if (!bVar1) {
				return pSVar2;
			}
		}
		pSVar2 = Aottg2GisketchLocale.Text("Common.Unbound");
		return pSVar2;
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x5CBF290", Offset = "0x5CBE290", VA = "0x5CBF290")]
	internal static void Sync(GisketchUIRoot root, string rowId, KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$Sync): 6 lines keep C-only constructs
		List<InputKey> pSVar1;
		GisketchUIState pGVar2;
		bool bVar3;
		ulong in_RAX;
		InputKey pSVar4;
		String pSVar5;
		String pSVar6;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (Il2CppMethodInitialized_07548195 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count) ;
			Il2CppMethodInitialized_07548195 = true;
		}
		bVar3 = ((Object)root == null);
		if (bVar3) {
			return;
		}
		if (root == null) goto label_05dbf64d;
		if (root._State_k__BackingField == null) {
			return;
		}
		bVar3 = String.IsNullOrEmpty(rowId);
		if (bVar3) {
			return;
		}
		AottgKeybindSettingRow.EnsureSlots(setting);
		if (setting == null) {
	label_05dbf393: ;
			pSVar4 = null;
			pGVar2 = root._State_k__BackingField;
		}
		else {
			pSVar1 = setting.InputKeys;
			if (pSVar1 == null) goto label_05dbf64d;
			if (pSVar1._size < 1) goto label_05dbf393;
			pSVar4 = pSVar1.get_Item(0);
			pGVar2 = root._State_k__BackingField;
		}
		uStack_38 = uStack_38 & 0xffffffff;
		pSVar5 = (((long)&uStack_38 + 4)).ToString();
		pSVar5 = String.Concat(rowId, ".key.", pSVar5, ".text");
		if ((pSVar4 == null) ||(bVar3 = pSVar4.IsNone())) {
			pSVar6 = Aottg2GisketchLocale.Text("Common.Unbound");
		}
		else {
			pSVar6 = pSVar4.ToString();
		}
		if (pGVar2 == null) goto label_05dbf64d;
		pSVar4 = null;
		pGVar2.Set(pSVar5, pSVar6);
		if (setting == null) {
	label_05dbf4cf: ;
			pGVar2 = root._State_k__BackingField;
		}
		else {
			pSVar1 = setting.InputKeys;
			if (pSVar1 == null) goto label_05dbf64d;
			if (1 < pSVar1._size) {
				pSVar4 = pSVar1.get_Item(1);
				goto label_05dbf4cf;
			}
			pSVar4 = null;
			pGVar2 = root._State_k__BackingField;
		}
		uStack_38 = CONCAT44(1, (undefined4)uStack_38);
		pSVar5 = (((long)&uStack_38 + 4)).ToString();
		pSVar5 = String.Concat(rowId, ".key.", pSVar5, ".text");
		if ((pSVar4 == null) ||(bVar3 = pSVar4.IsNone())) {
			pSVar6 = Aottg2GisketchLocale.Text("Common.Unbound");
		}
		else {
			pSVar6 = pSVar4.ToString();
		}
		if (pGVar2 != null) {
			pGVar2.Set(pSVar5, pSVar6);
			AottgSettingsDirtyRegistry.SyncRow(root, rowId);
			if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
			}
			AottgKeybindConflictRegistry.SyncAll(root);
			return;
		}
	label_05dbf64d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x5CC2FB0", Offset = "0x5CC1FB0", VA = "0x5CC2FB0")]
	private string DirtyValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$DirtyValue): clean
		KeybindSetting pSVar1;
		List<InputKey> pSVar2;
		String str1;
		InputKey pSVar3;
		String pSVar4;
		String str2;

		AottgKeybindSettingRow.EnsureSlots(this._setting);
		pSVar1 = this._setting;
		if (pSVar1 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar2 = pSVar1.InputKeys;
		if (pSVar2 != null) {
			pSVar4 = null;
			pSVar3 = pSVar2.get_Item(0);
			if (pSVar3 != null) {
				pSVar4 = pSVar3.ToString();
			}
			pSVar1 = this._setting;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.InputKeys, pSVar2 != null)) {
				pSVar3 = pSVar2.get_Item(1);
				str1 = "|";
				if (pSVar3 == null) {
					str2 = null;
				}
				else {
					str2 = pSVar3.ToString();
				}
				pSVar4 = String.Concat(pSVar4, str1, str2);
				return pSVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x5CC2F40", Offset = "0x5CC1F40", VA = "0x5CC2F40")]
	private static string SlotTextKey(string rowId, int slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$SlotTextKey): clean
		String pSVar1;
		int local_c;

		local_c = slot;
		pSVar1 = local_c.ToString();
		pSVar1 = String.Concat(rowId, ".key.", pSVar1, ".text");
		return pSVar1;
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x5CBE570", Offset = "0x5CBD570", VA = "0x5CBE570")]
	internal static void EnsureSlots(KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$EnsureSlots): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		InputKey[] pSVar3;
		InputKey __this;
		List<InputKey> __this_00;

		if (Il2CppMethodInitialized_07548198 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count) ;
			Il2CppMethodInitialized_07548198 = true;
		}
		if (setting == null) {
			return;
		}
		__this_00 = setting.InputKeys;
		while (__this_00 != null) {
			while(true) {
				if (1 < __this_00._size) {
					return;
				}
				__this = new InputKey("None");
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 == null) goto label_05dbe68c;
				uVar2 = __this_00._size;
				if ((uint)pSVar3.Length <= uVar2) break;
				__this_00._size = uVar2 + 1;
				pSVar3[(int)uVar2] = __this;
				__this_00 = setting.InputKeys;
				if (__this_00 == null) goto label_05dbe68c;
			}
			__this_00.AddWithResize((object)__this);
			__this_00 = setting.InputKeys;
		}
	label_05dbe68c: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindSettingRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow$$<BuildSlots>b__15_0: clean
	private void BuildSlots_b__15_0(AottgUi row)
	{


		this.BuildSlot(row, 0);
		this.BuildSlot(row, 1);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindSettingRow.<>c__DisplayClass16_0$$<BuildSlot>b__0: clean
	private void c__DisplayClass16_0__BuildSlot_b__0(GisketchActionContext context)
	{
		AottgKeybindSettingRow pGVar1;

		pGVar1 = this.__4__this;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		AottgKeybindCaptureDialog.Open(context, pGVar1._setting, this.slot, pGVar1._label, pGVar1._id);
		return;
	}
}
