// ==================== AoTTG2 cross-reference ====================
// Type: UI.WheelPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/WheelPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/WheelPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000877")]
internal class WheelPopup : BasePopup
{
	[Token(Token = "0x4002AEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private AottgInGameWheelView _view;

	[Token(Token = "0x4002AF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private int _optionCount;

	[Token(Token = "0x4002AF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public int SelectedItem;

	[Token(Token = "0x4002AF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private UnityAction _callback;

	[Token(Token = "0x4002AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public UnityAction OnCancel;

	[Token(Token = "0x17000E0F")]
	public override bool PlayEscapeSound
	{
		[Token(Token = "0x60050BA")]
		[Address(RVA = "0x5C54140", Offset = "0x5C53140", VA = "0x5C54140", Slot = "56")]
		get
		{
			// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$get_PlayEscapeSound): clean
			return false;
		}
	}

	[Token(Token = "0x17000E10")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60050BB")]
		[Address(RVA = "0x5C54150", Offset = "0x5C53150", VA = "0x5C54150", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x17000E11")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60050BC")]
		[Address(RVA = "0x5C54160", Offset = "0x5C53160", VA = "0x5C54160", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x60050BD")]
	[Address(RVA = "0x5C54170", Offset = "0x5C53170", VA = "0x5C54170", Slot = "57")]
	public override bool DismissFromEscape()
	{
		// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$DismissFromEscape): clean
		UnityAction pUVar1;
		bool bVar2;

		pUVar1 = this.OnCancel;
		if (pUVar1 == null) {
			return bVar2;
		}
		(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
		return true;
	}

	[Token(Token = "0x60050BE")]
	[Address(RVA = "0x5C541A0", Offset = "0x5C531A0", VA = "0x5C541A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$Setup): clean
		Transform pUVar1;
		AottgInGameWheelView __this_00;

		pUVar1 = this.transform;
		AottgInGameView.HidePrefab(pUVar1);
		pUVar1 = this.transform;
		__this_00 = new AottgInGameWheelView(pUVar1);
		this._view = __this_00;
		return;
	}

	[Token(Token = "0x60050BF")]
	[Address(RVA = "0x5C54250", Offset = "0x5C53250", VA = "0x5C54250")]
	public void Show(string openKey, List<string> options, UnityAction callback, [Optional] string title, bool showNext = true)
	{
		// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$Show): 8 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		InputSettings pSVar5;
		InteractionInputSettings pSVar6;
		OrderedDictionary pSVar7;
		Il2CppClass pIVar8;
		String[] pSVar9;
		AottgInGameWheelView __this_00;
		KeybindSetting pSVar10;
		bool bVar12;
		int iVar13;
		GameObject __this_01;
		List<string> __this_02;
		String pSVar14;
		object pIVar15;
		String pSVar16;
		String second;
		int iVar17;
		int capacity;
		undefined7 in_register_00000089;
		float alpha;
		int local_50;
		uint local_4c;
		List<string> local_48;
		String local_40;
		String local_38;

		local_38 = title;
		local_50 = 0;
		__this_01 = this.gameObject;
		if (__this_01 == null) goto label_05d547fd;
		bVar12 = __this_01.activeSelf;
		if (bVar12) {
			this.StopAllCoroutines();
			alpha = this.get_MaxFadeAlpha();
			this.SetTransformAlpha(alpha);
		}
		local_4c = (undefined4)CONCAT71(in_register_00000089, showNext);
		this._callback = callback;
		local_40 = openKey;
		if (options == null) goto label_05d547fd;
		iVar13 = options._size;
		capacity = 8;
		if (iVar13 < 8) {
			capacity = iVar13;
		}
		this._optionCount = capacity;
		local_48 = options;
		__this_02 = new List<string>(capacity);
		iVar13 = this._optionCount;
		if (0 < iVar13) {
			if (__this_02 == null) {
				pSVar5 = SettingsManager.InputSettings;
				if ((pSVar5 != null) &&(pSVar6 = pSVar5.Interaction, pSVar6 != null)) {
					pSVar7 = pSVar6.Settings;
					local_50 = 1;
					pSVar14 = local_50.ToString();
					pSVar14 = String.Concat("QuickSelect", pSVar14);
					if ((pSVar7 != null) &&(pIVar15 = pSVar7.get_Item((object)pSVar14), pIVar15 != null)) {
						pIVar8 = pIVar15.klass;
						bVar2 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
						if ((bVar2 <= (pIVar8._2).typeHierarchyDepth) &&((pIVar8._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(KeybindSetting)) ) {
							(*pIVar8.vtable[3].methodPtr)(pIVar15,pIVar8.vtable[3].method);
							throw new NullReferenceException();
						}
	label_05d54841: ;
						throw new InvalidCastException();
					}
				}
				goto label_05d547fd;
			}
			iVar17 = 0;
			do {
				while(true) {
					pSVar5 = SettingsManager.InputSettings;
					if ((pSVar5 == null) ||(pSVar6 = pSVar5.Interaction, pSVar6 == null)) goto label_05d547fd;
					pSVar7 = pSVar6.Settings;
					iVar17 = iVar17 + 1;
					local_50 = iVar17;
					pSVar14 = local_50.ToString();
					pSVar14 = String.Concat("QuickSelect", pSVar14);
					if ((pSVar7 == null) ||(pIVar15 = pSVar7.get_Item((object)pSVar14), pIVar15 == null)) goto label_05d547fd;
					pIVar8 = pIVar15.klass;
					bVar2 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
					if (((pIVar8._2).typeHierarchyDepth < bVar2) ||((pIVar8._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(KeybindSetting))) goto label_05d54841;
					pSVar14 = (String)(*pIVar8.vtable[3].methodPtr)(pIVar15,pIVar8.vtable[3].method);
					piVar1 = &__this_02._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = __this_02._items;
					if (pSVar9 == null) goto label_05d547fd;
					uVar3 = __this_02._size;
					if ((uint)pSVar9.Length <= uVar3) break;
					__this_02._size = uVar3 + 1;
					pSVar9[(int)uVar3] = pSVar14;
					iVar13 = this._optionCount;
					if (iVar13 <= iVar17) goto label_05d54557;
				}
				__this_02.AddWithResize((object)pSVar14);
				iVar13 = this._optionCount;
			} while (iVar17 < iVar13);
		}
	label_05d54557: ;
		if (iVar13 == 0) {
			pSVar14 = Aottg2GisketchLocale.Text("InGameMenu.Wheel.Empty");
			pSVar14 = String.Concat(pSVar14, "\n");
			if ((char)local_4c == false) goto label_05d54586;
	label_05d546b6: ;
			pSVar5 = SettingsManager.InputSettings;
			if (((pSVar5 == null) ||(pSVar6 = pSVar5.Interaction, pSVar6 == null)) ||(pSVar10 = pSVar6.MenuNext, pSVar10 == null)) goto label_05d547fd;
			pSVar16 = pSVar10.ToString();
			second = UIManager.GetLocaleCommon("Next");
			pSVar16 = GisketchArabicText.Join(pSVar16, " - ", second);
			pSVar14 = String.Concat(pSVar14, pSVar16, "\n");
			uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((char)local_4c != false) goto label_05d546b6;
	label_05d54586: ;
			uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		pSVar16 = UIManager.GetLocaleCommon("Cancel");
		pSVar16 = GisketchArabicText.Join(local_40, " - ", pSVar16);
		pSVar16 = String.Concat(pSVar14, pSVar16);
		__this_00 = this._view;
		pSVar14 = local_38;
		if (local_38 == null) {
			pSVar14 = Aottg2GisketchLocale.Text("Common.Emotes");
		}
		if (__this_00 != null) {
			__this_00.Show(pSVar14, pSVar16, (IReadOnlyList<string>)local_48, (IReadOnlyList<string>)__this_02);
			this.Show();
			return;
		}
	label_05d547fd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050C0")]
	[Address(RVA = "0x5C54850", Offset = "0x5C53850", VA = "0x5C54850")]
	internal void OnButtonClick(int index)
	{
		// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$OnButtonClick): 1 lines keep C-only constructs
		UnityAction pUVar1;
		code *vtableDispatch;

		if (((-1 < index) && (this.IsActive != false)) && (index < this._optionCount)) {
			this.SelectedItem = index;
			pUVar1 = this._callback;
			if (pUVar1 != null) {
				vtableDispatch = (code)pUVar1.invoke_impl;
				(*vtableDispatch)(pUVar1.method_code,pUVar1.method,method,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60050C1")]
	[Address(RVA = "0x5C54890", Offset = "0x5C53890", VA = "0x5C54890")]
	private void Update()
	{
		// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$Update): 5 lines keep C-only constructs
		byte bVar1;
		InputSettings pSVar2;
		InteractionInputSettings pSVar3;
		OrderedDictionary __this_00;
		UnityAction pUVar4;
		bool bVar5;
		uint in_EAX;
		String pSVar6;
		KeybindSetting __this_01;
		int iVar7;
		int iVar8;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		if (this.IsActive != false) {
			iVar7 = -1;
			do {
				iVar8 = iVar7 + 1;
				if (this._optionCount <= iVar8) {
					return;
				}
				pSVar2 = SettingsManager.InputSettings;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.Interaction, pSVar3 == null)) {
	label_05d549f3: ;
					throw new NullReferenceException();
				}
				__this_00 = pSVar3.Settings;
				uStack_38 = CONCAT44(iVar7 + 2, (uint)uStack_38);
				pSVar6 = (((long)&uStack_38 + 4)).ToString();
				pSVar6 = String.Concat("QuickSelect", pSVar6);
				if ((__this_00 == null) ||(__this_01 = (KeybindSetting)__this_00.get_Item((object)pSVar6), __this_01 == null)) goto label_05d549f3;
				bVar1 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(KeybindSetting))) {
					throw new InvalidCastException();
				}
				bVar5 = __this_01.GetKeyDown(false);
				iVar7 = iVar8;
			} while (!bVar5);
			if ((this.IsActive != false) && (iVar8 < this._optionCount)) {
				this.SelectedItem = iVar8;
				pUVar4 = this._callback;
				if (pUVar4 != null) {
					(*(code)pUVar4.invoke_impl)(pUVar4.method_code,pUVar4.method);
				}
			}
		}
		return;
	}

	[Token(Token = "0x60050C2")]
	[Address(RVA = "0x5C54A00", Offset = "0x5C53A00", VA = "0x5C54A00")]
	public WheelPopup()
	{
		// Lifted from source/cpp/UI/WheelPopup.c (UI.WheelPopup$$.ctor): clean
		base();
		return;
	}
}
