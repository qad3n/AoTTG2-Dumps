// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgButtonListDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F5")]
public abstract class AottgButtonListDialog : AottgDialog
{
	[Token(Token = "0x20001F6")]
	protected readonly struct Entry
	{
		[Token(Token = "0x4000A84")]
		[FieldOffset(Offset = "0x0")]
		public readonly AottgButtonVariant Variant;

		[Token(Token = "0x4000A85")]
		[FieldOffset(Offset = "0x8")]
		public readonly string Key;

		[Token(Token = "0x4000A86")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Icon;

		[Token(Token = "0x4000A87")]
		[FieldOffset(Offset = "0x18")]
		public readonly Action<GisketchActionContext> Action;

		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x5D7D5D0", Offset = "0x5D7C5D0", VA = "0x5D7D5D0")]
		public Entry(AottgButtonVariant variant, string key, string icon, Action<GisketchActionContext> action)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog.Entry$$.ctor): clean
			this.Variant = variant;
			this.Key = key;
			this.Icon = icon;
			this.Action = action;
			return;
		}
	}

	[Token(Token = "0x4000A83")]
	private const float EntryHeight = 80f;

	[Token(Token = "0x17000150")]
	protected abstract Entry[] Entries
	{
		[Token(Token = "0x6000BA5")]
		get;
	}

	[Token(Token = "0x17000151")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x5D7D1B0", Offset = "0x5D7C1B0", VA = "0x5D7D1B0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000152")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x5D7D1C0", Offset = "0x5D7C1C0", VA = "0x5D7D1C0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x17000153")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x5D7D1D0", Offset = "0x5D7C1D0", VA = "0x5D7D1D0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(520.0);
			maxWidth = AottgUi.Percent(94.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x5D7D2B0", Offset = "0x5D7C2B0", VA = "0x5D7D2B0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$BuildBody): clean
		int variant;
		String pSVar1;
		Action<GisketchActionContext> action;
		String icon;
		uint uVar2;
		AottgButtonListDialog.Entry[] pGVar3;
		String id;
		GisketchNodeDefinition pGVar4;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar5;
		uint uVar6;

		pGVar3 = this.get_Entries();
		if (pGVar3 == null) {
	label_05e7d47b: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pGVar3.Length;
		if (body == null) {
			if (0 < (int)uVar2) {
				pSVar1 = pGVar3[0].Key;
				if (pSVar1 != null) {
					pSVar1.Replace(0x2e, 0x2d);
					throw new NullReferenceException();
				}
				goto label_05e7d47b;
			}
		}
		else if (0 < (int)uVar2) {
			uVar6 = 0;
			do {
				if (uVar2 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				pSVar1 = pGVar3[(int)uVar6].Key;
				if (pSVar1 == null) goto label_05e7d47b;
				variant = pGVar3[(int)uVar6].Variant;
				action = pGVar3[(int)uVar6].Action;
				icon = pGVar3[(int)uVar6].Icon;
				id = pSVar1.Replace(0x2e, 0x2d);
				pGVar4 = body.ButtonKey(variant, pSVar1, action, id, null, null, icon);
				width = AottgUi.Percent(100.0);
				height = AottgUi.Points(80.0);
				pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (pGVar4 == null) goto label_05e7d47b;
				pGVar4.layout = pGVar5;
				uVar6 = uVar6 + 1;
				uVar2 = (uint)pGVar3.Length;
			} while ((int)uVar6 < (int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x5D7D4A0", Offset = "0x5D7C4A0", VA = "0x5D7D4A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Close", "overlay.close");
		return;
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x5D7D500", Offset = "0x5D7C500", VA = "0x5D7D500")]
	protected static Action<GisketchActionContext> CloseThen(Action action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$CloseThen): 2 lines keep C-only constructs
		AottgButtonListDialog.c__DisplayClass12_0 __this;
		Action<GisketchActionContext> __this_00;

		__this = il2cpp_codegen_object_new(typeof(AottgButtonListDialog.c__DisplayClass12_0));
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.action = action;
		__this_00 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_c__DisplayClass12_0_CloseThen_b__0);
		return __this_00;
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x5D7D5C0", Offset = "0x5D7C5C0", VA = "0x5D7D5C0")]
	protected AottgButtonListDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c (Gisketch.Aottg2UI.Game.AottgButtonListDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgButtonListDialog.c.

	// Gisketch.Aottg2UI.Game.AottgButtonListDialog.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgButtonListDialog.<>c__DisplayClass12_0$$<CloseThen>b__0: clean
	private void c__DisplayClass12_0__CloseThen_b__0(GisketchActionContext __)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		Action pSVar2;
		AottgGisketchUiHost pGVar3;

		pGVar3 = AottgGisketchUiHost.Ensure("main-menu");
		if ((pGVar3 != null) &&(pGVar1 = pGVar3._root, pGVar1 != null)) {
			__this_00 = pGVar1._Overlays_k__BackingField;
			if (__this_00 != null) {
				__this_00.CloseTop(false);
			}
			pSVar2 = this.action;
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
