// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015F")]
[AottgDialog("setting-keybind-capture", DismissOnBackdrop = false)]
public sealed class AottgKeybindCaptureDialog : AottgDialog
{
	[Token(Token = "0x400081B")]
	public const string Id = "setting-keybind-capture";

	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x0")]
	private static KeybindSetting _setting;

	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x8")]
	private static int _slot;

	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x10")]
	private static string _label;

	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0x18")]
	private static string _rowId;

	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x20")]
	private static int _captureToken;

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x28")]
	private static InputKey _draft;

	[Token(Token = "0x170000DA")]
	protected override string Title
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x5CBE120", Offset = "0x5CBD120", VA = "0x5CBE120", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_Title): clean
			bool bVar1;
			String pSVar2;

			bVar1 = String.IsNullOrEmpty(AottgKeybindCaptureDialog. _label);
			if (bVar1) {
				pSVar2 = Aottg2GisketchLocale.Text("SettingsPopup.KeybindPopup.Title");
				return pSVar2;
			}
			return AottgKeybindCaptureDialog._label;
		}
	}

	[Token(Token = "0x170000DB")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x5CBE1B0", Offset = "0x5CBD1B0", VA = "0x5CBE1B0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170000DC")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x5CBE1C0", Offset = "0x5CBD1C0", VA = "0x5CBE1C0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(420.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x170000DD")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x5CBE280", Offset = "0x5CBD280", VA = "0x5CBE280", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x5CBE330", Offset = "0x5CBD330", VA = "0x5CBE330")]
	internal static void Open(GisketchActionContext context, KeybindSetting setting, int slot, string label, string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Open): clean
		Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_StaticFields pGVar1;
		List<InputKey> __this;
		GisketchOverlayManager __this_00;
		bool bVar2;
		int iVar3;
		InputKey pSVar4;
		String keyStr;
		GisketchUIRoot pGVar5;

		if (setting != null) {
			bVar2 = ((Object)context.GameObject == null);
			if (!bVar2) {
				AottgKeybindSettingRow.EnsureSlots(setting);
				AottgKeybindCaptureDialog._setting = setting;
				pGVar1 = typeof(AottgKeybindCaptureDialog).static_fields;
				pGVar1._slot = (uint)(0 < slot);
				pGVar1._label = label;
				pGVar1 = typeof(AottgKeybindCaptureDialog).static_fields;
				pGVar1._rowId = rowId;
				__this = setting.InputKeys;
				if ((__this != null) &&(pSVar4 = __this.get_Item(typeof(AottgKeybindCaptureDialog). static_fields._slot), pSVar4 != null)) {
					keyStr = pSVar4.ToString();
					pSVar4 = new InputKey(keyStr);
					pGVar1 = typeof(AottgKeybindCaptureDialog).static_fields;
					pGVar1._draft = pSVar4;
					GisketchInputCapture.ForceEnd();
					iVar3 = GisketchInputCapture.Begin();
					AottgKeybindCaptureDialog._captureToken = iVar3;
					if (context.GameObject != null) {
						pGVar5 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
						if (pGVar5 == null) {
							return;
						}
						__this_00 = pGVar5._Overlays_k__BackingField;
						if (__this_00 == null) {
							return;
						}
						__this_00.ShowDialog("setting-keybind-capture", false);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x5CBE6A0", Offset = "0x5CBD6A0", VA = "0x5CBE6A0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildBody): 1 lines keep C-only constructs
		String pSVar1;
		String arg0;
		GisketchNodeDefinition __this_00;
		CultureInfo provider;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;
		String* ppSVar3;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_0754816d == false) {
			ppSVar3 = &"setting-keybind-capture-current";
			Il2CppMethodInitialized_0754816d = true;
			this = (AottgKeybindCaptureDialog)ppSVar3;
		}
		AottgKeybindCaptureRuntime.RegisterFactory();
		if (body != null) {
			body.TextKey("SettingsPopup.KeybindPopup.Prompt", "text", "setting-keybind-capture-prompt", null, null);
			method_00 = (MethodInfo *)"SettingsPopup.KeybindPopup.CurrentValue";
			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.KeybindPopup.CurrentValue");
			arg0 = AottgKeybindCaptureDialog.CurrentText();
			pSVar1 = String.Format(pSVar1, (object)arg0);
			body.Text(pSVar1, "text", "setting-keybind-capture-current", null, null);
			__this_00 = new GisketchNodeDefinition();
			if (__this_00 != null) {
				__this_00.type = "AottgKeybindCaptureRuntime";
				__this_00.id = "setting-keybind-capture-reader";
				provider = CultureInfo.InvariantCulture;
				pSVar1 = (typeof(AottgKeybindCaptureDialog).static_fields ._captureToken).ToString((IFormatProvider)provider);
				__this_00.value = pSVar1;
				width = AottgUi.Percent(100.0);
				height = AottgUi.Points(1.0);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this_00.layout = pGVar2;
				body.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x5CBEB10", Offset = "0x5CBDB10", VA = "0x5CBEB10", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildFooter): 2 lines keep C-only constructs
		Action<GisketchActionContext> pSVar1;

		pSVar1 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Cancel);
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", pSVar1);
		pSVar1 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Unbind);
		footer.PrimaryKey("SettingsPopup.KeybindPopup.Unbind", pSVar1);
		return;
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x5CBEBF0", Offset = "0x5CBDBF0", VA = "0x5CBEBF0")]
	internal static void CaptureNext(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CaptureNext): 5 lines keep C-only constructs
		InputKey pSVar1;
		bool bVar2;
		AottgKeybindCaptureDialog* method_00;
		byte[] auVar3 = new byte[16];

		if (g_data_0754816f == false) {
			method_00 = &typeof(AottgKeybindCaptureDialog);
			g_data_0754816f = true;
		}
		bVar2 = AottgKeybindCaptureDialog.ShouldIgnorePointerRelease();
		if ((!bVar2) &&(pSVar1 = AottgKeybindCaptureDialog._draft, pSVar1 != null)) {
			bVar2 = pSVar1.ReadNextInput();
			if (bVar2) {
				pSVar1 = AottgKeybindCaptureDialog._draft;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				auVar3 = (byte[])pSVar1.ToString();
				AottgKeybindCaptureDialog.Commit(auVar3._0_8_, source);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x5CBEFA0", Offset = "0x5CBDFA0", VA = "0x5CBEFA0")]
	internal static void EndCapture(int token)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$EndCapture): clean
		GisketchInputCapture.End(token);
		if (AottgKeybindCaptureDialog._captureToken == token) {
			AottgKeybindCaptureDialog._captureToken = 0;
		}
		return;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x5CBEA30", Offset = "0x5CBDA30", VA = "0x5CBEA30")]
	private static string CurrentText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CurrentText): 1 lines keep C-only constructs
		int index;
		KeybindSetting pSVar1;
		List<InputKey> __this;
		InputKey pSVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_07548171 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count) ;
			Il2CppMethodInitialized_07548171 = true;
		}
		pSVar1 = AottgKeybindCaptureDialog._setting;
		if ((pSVar1 == null) ||(index = AottgKeybindCaptureDialog._slot, index < 0)) {
	label_05dbead6: ;
			pSVar3 = Aottg2GisketchLocale.Text("Common.None");
			return pSVar3;
		}
		__this = pSVar1.InputKeys;
		if (__this != null) {
			if (__this._size <= index) goto label_05dbead6;
			pSVar2 = __this.get_Item(index);
			if (pSVar2 != null) {
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x5CBF010", Offset = "0x5CBE010", VA = "0x5CBF010")]
	private static void Cancel(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Cancel): clean


		AottgKeybindCaptureDialog.Close(context.GameObject, false);
		return;
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x5CBEC90", Offset = "0x5CBDC90", VA = "0x5CBEC90")]
	private static bool ShouldIgnorePointerRelease()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$ShouldIgnorePointerRelease): 4 lines keep C-only constructs
		GameObject x;
		bool bVar1;
		EventSystem pUVar2;
		PointerEventData __this;
		List<RaycastResult> __this_00;
		Button x_00;
		int index;
		Vector3 UVar3;
		RaycastResult local_a0;

		if (Il2CppMethodInitialized_07548172 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInParent_Button) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RaycastResult_ctor) ;
			Il2CppMethodInitialized_07548172 = true;
		}
		index = 0;
		bVar1 = Input.GetKeyUp(0x143);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			index = 0;
			bVar1 = ((Object)pUVar2 == null);
			if (!bVar1) {
				pUVar2 = EventSystem.current;
				__this = new PointerEventData(pUVar2);
				UVar3 = Input.mousePosition;
				if (__this != null) {
					__this._position_k__BackingField = UVar3._0_8_;
					__this_00 = new List<RaycastResult>();
					pUVar2 = EventSystem.current;
					if (pUVar2 != null) {
						pUVar2.RaycastAll(__this, __this_00);
						if (__this_00 != null) {
							index = 0;
							if (0 < __this_00._size) {
								do {
									local_a0 = __this_00.get_Item(index);
									x = local_a0.m_GameObject;
									bVar1 = ((Object)x != null);
									if (bVar1) {
										local_a0 = __this_00.get_Item(index);
										if ((Object)local_a0.m_GameObject == null) goto label_05dbeee7;
										x_00 = local_a0.m_GameObject.GetComponentInParent<Button>();
										bVar1 = ((Object)x_00 != null);
										if (bVar1) {
											index = 1;
											goto label_05dbeed6;
										}
									}
									index = index + 1;
								} while (index < __this_00._size);
								index = 0;
							}
							goto label_05dbeed6;
						}
					}
				}
	label_05dbeee7: ;
				throw new NullReferenceException();
			}
		}
	label_05dbeed6: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x5CBF030", Offset = "0x5CBE030", VA = "0x5CBF030")]
	private static void Unbind(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Unbind): clean


		AottgKeybindCaptureDialog.Commit("None", context.GameObject);
		return;
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x5CBEEF0", Offset = "0x5CBDEF0", VA = "0x5CBEEF0")]
	private static void Commit(string value, GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Commit): 1 lines keep C-only constructs
		int index;
		KeybindSetting pSVar1;
		List<InputKey> __this;
		InputKey __this_00;

		if (Il2CppMethodInitialized_07548174 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count) ;
			Il2CppMethodInitialized_07548174 = true;
		}
		pSVar1 = AottgKeybindCaptureDialog._setting;
		if ((pSVar1 != null) &&(index = AottgKeybindCaptureDialog._slot, -1 < index)) {
			__this = pSVar1.InputKeys;
			if (__this == null) {
	label_05dbef91: ;
				throw new NullReferenceException();
			}
			if (index < __this._size) {
				__this_00 = __this.get_Item(index);
				if (__this_00 == null) goto label_05dbef91;
				__this_00.LoadFromString(value);
			}
		}
		AottgKeybindCaptureDialog.Close(source, true);
		return;
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x5CBF020", Offset = "0x5CBE020", VA = "0x5CBF020")]
	private static void Close(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close): clean


		AottgKeybindCaptureDialog.Close(context.GameObject, false);
		return;
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x5CBF070", Offset = "0x5CBE070", VA = "0x5CBF070")]
	private static void Close(GameObject source, bool sync)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close): clean
		int token;
		bool bVar1;
		GisketchUIRoot root;
		MethodInfo method_00;

		token = AottgKeybindCaptureDialog._captureToken;
		GisketchInputCapture.End(token);
		if (AottgKeybindCaptureDialog._captureToken == token) {
			AottgKeybindCaptureDialog._captureToken = 0;
		}
		root = null;
		method_00 = (MethodInfo)source;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if (source == null) {
				throw new NullReferenceException();
			}
			root = source.GetComponentInParent<GisketchUIRoot>();
			if (root == null) {
				root = null;
				AottgKeybindCaptureDialog.ClearSelectedFocus();
				goto joined_r0x05dbf1b9;
			}
			method_00 = (MethodInfo)root._Overlays_k__BackingField;
			if (method_00 != null) {
				method_00.CloseTop(false);
			}
		}
		AottgKeybindCaptureDialog.ClearSelectedFocus();
	joined_r0x05dbf1b9: ;
		if (sync) {
			AottgKeybindSettingRow.Sync(root, AottgKeybindCaptureDialog._rowId, AottgKeybindCaptureDialog._setting);
			return;
		}
		return;
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x5CBF1D0", Offset = "0x5CBE1D0", VA = "0x5CBF1D0")]
	private static void ClearSelectedFocus()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$ClearSelectedFocus): clean
		bool bVar1;
		EventSystem pUVar2;

		pUVar2 = EventSystem.current;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			pUVar2.SetSelectedGameObject(null);
			return;
		}
		return;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x5CBF660", Offset = "0x5CBE660", VA = "0x5CBF660")]
	public AottgKeybindCaptureDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$.ctor): clean
		base();
		return;
	}
}
