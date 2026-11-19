// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000156")]
internal sealed class AottgActionRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x2000157")]
	internal sealed class ActionButton
	{
		[Token(Token = "0x40007E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string TextKey;

		[Token(Token = "0x40007E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GisketchActionContext> Action;

		[Token(Token = "0x40007E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly AottgButtonVariant Variant;

		[Token(Token = "0x40007EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly bool Disabled;

		[Token(Token = "0x40007EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly string Icon;

		[Token(Token = "0x170000D9")]
		public bool IsIcon
		{
			[Token(Token = "0x600071B")]
			[Address(RVA = "0x5CBA630", Offset = "0x5CB9630", VA = "0x5CBA630")]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.ActionButton$$get_IsIcon): clean
				bool bVar1;

				bVar1 = String.IsNullOrEmpty(this.Icon);
				return !bVar1;
			}
		}

		[Token(Token = "0x600071C")]
		[Address(RVA = "0x5CBA950", Offset = "0x5CB9950", VA = "0x5CBA950")]
		public ActionButton(string textKey, Action<GisketchActionContext> action, [Optional][DefaultParameterValue(1)] AottgButtonVariant variant, [Optional][DefaultParameterValue(false)] bool disabled, [Optional] string icon)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.ActionButton$$.ctor): clean
			base();
			this.TextKey = textKey;
			this.Action = action;
			this.Variant = variant;
			this.Disabled = disabled;
			this.Icon = icon;
			return;
		}
	}

	[Token(Token = "0x40007DD")]
	private const float DefaultButtonWidth = 140f;

	[Token(Token = "0x40007DE")]
	private const float TextButtonSlotWidth = 150f;

	[Token(Token = "0x40007DF")]
	internal const float IconButtonSize = 42f;

	[Token(Token = "0x40007E0")]
	private const float ButtonGap = 8f;

	[Token(Token = "0x40007E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40007E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x40007E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly ActionButton[] _buttons;

	[Token(Token = "0x40007E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x5CBA000", Offset = "0x5CB9000", VA = "0x5CBA000")]
	public AottgActionRow(string id, string label, params ActionButton[] buttons)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor): clean


		base(id, label, null, buttons);
		return;
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x5CBA010", Offset = "0x5CB9010", VA = "0x5CBA010")]
	private AottgActionRow(string id, string label, string labelKey, ActionButton[] buttons)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$.ctor): clean
		base();
		this._id = id;
		this._label = label;
		this._labelKey = labelKey;
		if (buttons == null) {
			buttons = (AottgActionRow.ActionButton[])new AottgActionRow.ActionButton[0];
		}
		this._buttons = buttons;
		return;
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x5CBA0C0", Offset = "0x5CB90C0", VA = "0x5CBA0C0")]
	public static AottgActionRow Keyed(string id, string labelKey, params ActionButton[] buttons)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$Keyed): clean
		String label;
		AottgActionRow __this;

		label = Aottg2GisketchLocale.Text(labelKey);
		__this = new AottgActionRow(id, label, labelKey, buttons);
		return __this;
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x5CBA160", Offset = "0x5CB9160", VA = "0x5CBA160", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$Build): 1 lines keep C-only constructs
		uint uVar1;
		int layoutMode;
		String id;
		String label;
		String labelKey;
		AottgSettingsSearchContext searchContext;
		bool bVar2;
		AottgActionRow.ActionButton[] pGVar3;
		Action<AottgUi> __this_00;
		AottgSettingRowFrame __this_01;
		uint uVar4;
		float fVar5;
		float fVar6;

		pGVar3 = this._buttons;
		if (pGVar3 != null) {
			id = this._id;
			label = this._label;
			uVar4 = 0;
			fVar6 = 0.0;
			do {
				uVar1 = (uint)pGVar3.Length;
				if ((int)uVar1 <= (int)uVar4) {
					fVar6 = Math.Max(180.0, fVar6);
					__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_BuildButtons);
					labelKey = this._labelKey;
					layoutMode = this._layoutMode;
					searchContext = this._searchContext;
					__this_01 = new AottgSettingRowFrame(id, label, fVar6, __this_00, null, null, null, null, (Nullable<float>)0x0, labelKey, null, null, (AottgSettingsSearchContext)searchContext, null, null, null, layoutMode);
					if (ui != null) {
						ui.Component((AottgComponent)__this_01);
						return;
					}
					break;
				}
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if (pGVar3[(int)uVar4] == null ) break;
				bVar2 = String.IsNullOrEmpty((pGVar3[(int)uVar4].fields).Icon);
				fVar5 = 150.0;
				if (!bVar2) {
					fVar5 = 50.0;
				}
				fVar6 = fVar6 + fVar5;
				uVar4 = uVar4 + 1;
				pGVar3 = this._buttons;
			} while (pGVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x5CBA5F0", Offset = "0x5CB95F0", VA = "0x5CBA5F0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x5CBA620", Offset = "0x5CB9620", VA = "0x5CBA620", Slot = "6")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x5CBA3A0", Offset = "0x5CB93A0", VA = "0x5CBA3A0")]
	private float ControlWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$ControlWidth): clean
		uint uVar1;
		bool bVar2;
		AottgActionRow.ActionButton[] pGVar3;
		long lVar4;
		float fVar5;
		float fVar6;

		pGVar3 = this._buttons;
		if (pGVar3 != null) {
			fVar5 = 0.0;
			lVar4 = 0;
			do {
				uVar1 = (uint)pGVar3.Length;
				if ((int)uVar1 <= (int)(uint)lVar4) {
					return fVar5;
				}
				if (uVar1 <= (uint)lVar4) {
					throw new IndexOutOfRangeException();
				}
				if (pGVar3[lVar4] == null) break;
				bVar2 = String.IsNullOrEmpty(pGVar3[lVar4].Icon);
				fVar6 = 150.0;
				if (!bVar2) {
					fVar6 = 50.0;
				}
				fVar5 = fVar5 + fVar6;
				pGVar3 = this._buttons;
				lVar4 = lVar4 + 1;
			} while (pGVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x5CBA640", Offset = "0x5CB9640", VA = "0x5CBA640")]
	private float TextButtonWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$TextButtonWidth): clean
		bool bVar1;
		AottgActionRow.ActionButton[] pGVar2;
		uint uVar3;
		long lVar4;
		int iVar5;
		float fVar6;
		float local_1c;

		pGVar2 = this._buttons;
		if (pGVar2 != null) {
			local_1c = 0.0;
			lVar4 = 0;
			iVar5 = 0;
			do {
				uVar3 = (uint)pGVar2.Length;
				if ((int)uVar3 <= (int)(uint)lVar4) {
					if ((this._layoutMode != 1) || (iVar5 == 0)) {
						return 140.0;
					}
					fVar6 = Math.Min(140.0, (((float)(int)(uVar3 - 1) * -8.0 + 300.0) - local_1c) / (float)iVar5);
					return fVar6;
				}
				if (uVar3 <= (uint)lVar4) {
					throw new IndexOutOfRangeException();
				}
				if (pGVar2[lVar4] == null) break;
				bVar1 = String.IsNullOrEmpty(pGVar2[lVar4].Icon);
				if (!bVar1) {
					local_1c = local_1c + 42.0;
				}
				iVar5 = iVar5 + (uint)bVar1;
				pGVar2 = this._buttons;
				lVar4 = lVar4 + 1;
			} while (pGVar2 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x5CBA770", Offset = "0x5CB9770", VA = "0x5CBA770")]
	private void BuildButtons(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgActionRow$$BuildButtons): 2 lines keep C-only constructs
		AottgActionRow.c__DisplayClass18_0 __this_00;
		Action<AottgUi> __this_01;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		float fVar1;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow.c__DisplayClass18_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			fVar1 = this.TextButtonWidth();
			__this_00.textWidth = fVar1;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_c__DisplayClass18_0_BuildButtons_b__0);
			id = String.Concat(this._id, "-actions");
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "Center", "Center", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (control != null) {
				control.Panel("clear", __this_01, id, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgActionRow.<>c__DisplayClass18_0$$<BuildButtons>b__0: clean
	private void c__DisplayClass18_0__BuildButtons_b__0(AottgUi row)
	{
		uint uVar1;
		AottgActionRow.ActionButton[] pGVar2;
		AottgActionRow.ActionButton pGVar3;
		bool bVar4;
		AottgActionRow pGVar5;
		String pSVar6;
		String pSVar7;
		GisketchNodeDefinition pGVar8;
		GisketchLength pGVar9;
		GisketchLength pGVar10;
		GisketchLayoutDefinition pGVar11;
		Nullable<bool>[] aSStack_40 = new Nullable<bool>[2];
		uint uStack_3c;
		GisketchLength pGStack_38;

		uStack_3c = 0;
		pGVar5 = this.__4__this;
		if (pGVar5 != null) {
			do {
				pGVar2 = pGVar5._buttons;
				if (pGVar2 == null) break;
				uVar1 = (uint)pGVar2.Length;
				if ((int)uVar1 <= (int)uStack_3c) {
					return;
				}
				if (uVar1 <= uStack_3c) {
					throw new IndexOutOfRangeException();
				}
				pGVar3 = pGVar2[(int)uStack_3c];
				pSVar7 = pGVar5._id;
				pSVar6 = uStack_3c.ToString();
				pSVar7 = String.Concat(pSVar7, "-button-", pSVar6);
				if (pGVar3 == null) break;
				bVar4 = String.IsNullOrEmpty(pGVar3.Icon);
				if (bVar4) {
					if (row == null) break;
					pGVar8 = row.ButtonKey(pGVar3.Variant, pGVar3.TextKey, pGVar3.Action, pSVar7, null, null, null);
					if (pGVar8 == null) break;
					pGVar8.clip = true;
					pGVar9 = AottgUi.Points(this.textWidth);
					pGStack_38 = AottgUi.Points(this.textWidth);
					pGVar10 = AottgUi.Points(this.textWidth);
					pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar9, null, pGStack_38, null, pGVar10, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar8.layout = pGVar11;
				}
				else {
					pSVar6 = pGVar3.TextKey;
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar6 = Aottg2GisketchLocale.Text(pSVar6);
					if (row == null) break;
					pGVar8 = row.IconButton(pGVar3.Variant, pGVar3.Icon, pGVar3.Action, pSVar7, pSVar6, null) ;
					if (pGVar8 == null) break;
					pGVar8.formLabel = pSVar6;
					pGVar9 = AottgUi.Points(42.0);
					pGVar10 = AottgUi.Points(42.0);
					pGVar11 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar9, pGVar10, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar8.layout = pGVar11;
				}
				aSStack_40[0].hasValue = false;
				aSStack_40[0].value = false;
				aSStack_40 = new Nullable<bool>(pGVar3.Disabled == false);
				pGVar8.enabled = aSStack_40[0];
				uStack_3c = uStack_3c + 1;
				pGVar5 = this.__4__this;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}
}
