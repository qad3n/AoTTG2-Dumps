// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001AC")]
[AottgDialog("settings-unsaved-changes")]
public sealed class AottgSettingsUnsavedChangesDialog : AottgDialog
{
	[Token(Token = "0x20001AD")]
	public enum ActionKind
	{
		[Token(Token = "0x4000920")]
		Back,
		[Token(Token = "0x4000921")]
		Load
	}

	[Token(Token = "0x400091D")]
	public const string Id = "settings-unsaved-changes";

	[Token(Token = "0x400091E")]
	[FieldOffset(Offset = "0x0")]
	private static ActionKind _actionKind;

	[Token(Token = "0x17000116")]
	protected override string Title
	{
		[Token(Token = "0x6000967")]
		[Address(RVA = "0x5D54F00", Offset = "0x5D53F00", VA = "0x5D54F00", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.UnsavedChanges.Title");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000117")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000968")]
		[Address(RVA = "0x5D54F60", Offset = "0x5D53F60", VA = "0x5D54F60", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x17000118")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x5D54F70", Offset = "0x5D53F70", VA = "0x5D54F70", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(560.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x5D55030", Offset = "0x5D54030", VA = "0x5D55030")]
	public static void Open(GisketchUIRoot root, ActionKind actionKind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$Open): clean
		GisketchOverlayManager __this;

		AottgSettingsUnsavedChangesDialog._actionKind = actionKind;
		if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) {
			return;
		}
		__this.ShowDialog("settings-unsaved-changes", true);
		return;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x5D550B0", Offset = "0x5D540B0", VA = "0x5D550B0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$BuildBody): 2 lines keep C-only constructs
		object @object;
		int count;
		String pSVar1;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		count = AottgSettingsDirtyRegistry.DirtyCount();
		pSVar1 = AottgSettingsUnsavedChangesDialog.Message(count);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Callout(2, pSVar1, null);
		if ((typeof(AottgSettingsUnsavedChangesDialog.c)._2). cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = "clear";
		pGVar2 = typeof(AottgSettingsUnsavedChangesDialog.c).static_fields;
		__this_00 = pGVar2.__9__9_0;
		if (__this_00 == null) {
			if ((typeof(AottgSettingsUnsavedChangesDialog.c)._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgSettingsUnsavedChangesDialog.c)) ;
				pGVar2 = typeof(AottgSettingsUnsavedChangesDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c_BuildBody_b__9_0);
			pGVar2 = typeof(AottgSettingsUnsavedChangesDialog.c).static_fields;
			pGVar2.__9__9_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		body.Panel(pSVar1, __this_00, "settings-unsaved-changes-dirty-list", layout, null);
		return;
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x5D553D0", Offset = "0x5D543D0", VA = "0x5D553D0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$BuildFooter): 3 lines keep C-only constructs
		String* ppSVar1;
		String* ppSVar2;

		if (AottgSettingsUnsavedChangesDialog._actionKind == 1) {
			if (footer == null) {
	label_05e554fd: ;
				throw new NullReferenceException();
			}
			footer.QuietKey("Common.Cancel", "overlay.close");
			ppSVar1 = &"settings.confirm.load";
			ppSVar2 = &"SettingsPopup.UnsavedChanges.LoadSaved";
		}
		else {
			if (footer == null) goto label_05e554fd;
			footer.QuietKey("Common.Cancel", "overlay.close");
			footer.DangerKey("SettingsPopup.UnsavedChanges.DiscardChanges", "settings.confirm.discardBack");
			ppSVar1 = &"settings.confirm.saveBack";
			ppSVar2 = &"SettingsPopup.UnsavedChanges.SaveChanges";
		}
		footer.PrimaryKey(*ppSVar2, *ppSVar1);
		return;
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x5D552E0", Offset = "0x5D542E0", VA = "0x5D552E0")]
	private static string Message(int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$Message): 6 lines keep C-only constructs
		uint uVar1;
		ulong in_RAX;
		String pSVar2;
		object arg0;
		ulong data;
		ulong local_18;

		local_18 = in_RAX;
		uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		if (AottgSettingsUnsavedChangesDialog._actionKind == 1) {
			if (uVar1 == 0) {
			}
			pSVar2 = Aottg2GisketchLocale.Text("SettingsPopup.UnsavedChanges.LoadMessage");
			local_18 = CONCAT44(count, (undefined4)local_18);
			data = (ulong)((long)&local_18 + 4);
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar2 = Aottg2GisketchLocale.Text("SettingsPopup.UnsavedChanges.BackMessage");
			data = &local_18;
			local_18 = CONCAT44(local_18._4_4_, count);
		}
		arg0 = (object)data;
		pSVar2 = String.Format(pSVar2, arg0);
		return pSVar2;
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x5D55510", Offset = "0x5D54510", VA = "0x5D55510")]
	public AottgSettingsUnsavedChangesDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsUnsavedChangesDialog.c));
		__this = new Object();
		AottgSettingsUnsavedChangesDialog.c.__9 =(AottgSettingsUnsavedChangesDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$<BuildBody>b__9_0: 4 lines keep C-only constructs
	private void c__BuildBody_b__9_0(AottgUi list)
	{
		uint uVar1;
		int iVar2;
		List<string> __this_00;
		String pSVar3;
		String pSVar4;
		GisketchNodeDefinition pGVar5;
		GisketchLength width;
		GisketchLayoutDefinition pGVar6;
		Il2CppClass klass;
		int iStack_34;

		if (Il2CppMethodInitialized_07548668 == false) {
			Il2CppMethodInitialized_07548668 = true;
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsDirtyRegistry);
		}
		else {
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsDirtyRegistry);
		}
		typeof(AottgSettingsDirtyRegistry) =(AottgSettingsDirtyRegistry)klass;
		if (uVar1 == 0) {
			__this_00 = AottgSettingsDirtyRegistry.DirtyPaths();
		}
		else {
			__this_00 = AottgSettingsDirtyRegistry.DirtyPaths();
		}
		iStack_34 = 0;
		if (__this_00 == null) {
	label_05e557c1: ;
			throw new NullReferenceException();
		}
		iStack_34 = 0;
		iVar2 = __this_00._size;
		if (list == null) {
			if (0 < iVar2) {
				__this_00.get_Item(0);
				pSVar3 = iStack_34.ToString();
				String.Concat("settings-unsaved-changes-dirty-", pSVar3);
				throw new NullReferenceException();
			}
		}
		else if (0 < iVar2) {
			do {
				pSVar3 = __this_00.get_Item(iStack_34);
				pSVar4 = iStack_34.ToString();
				pSVar4 = String.Concat("settings-unsaved-changes-dirty-", pSVar4);
				pGVar5 = list.Text(pSVar3, "text", pSVar4, null, null);
				width = AottgUi.Percent(100.0);
				pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (pGVar5 == null) goto label_05e557c1;
				pGVar5.layout = pGVar6;
				iStack_34 = iStack_34 + 1;
			} while (iStack_34 < __this_00._size);
		}
		return;
	}
}
