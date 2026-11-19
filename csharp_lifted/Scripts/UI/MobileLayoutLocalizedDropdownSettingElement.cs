// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutLocalizedDropdownSettingElement
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200077C")]
internal class MobileLayoutLocalizedDropdownSettingElement : DropdownSettingElement
{
	[Token(Token = "0x40025C3")]
	[FieldOffset(Offset = "0xA0")]
	private Func<string, string> _optionLabel;

	[Token(Token = "0x6004840")]
	[Address(RVA = "0x5BA87B0", Offset = "0x5BA77B0", VA = "0x5BA87B0")]
	public void SetupLocalized(BaseSetting setting, ElementStyle style, string title, string[] options, Func<string, string> optionLabel, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect)
	{
		// Lifted from source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c (UI.MobileLayoutLocalizedDropdownSettingElement$$SetupLocalized): clean
		this._optionLabel = optionLabel;
		this.Setup(setting, style, title, options, tooltip, elementWidth, elementHeight, optionsWidth, maxScrollHeight, onDropdownOptionSelect, null);
		this.RelabelOptions();
		this.SyncElement();
		return;
	}

	[Token(Token = "0x6004841")]
	[Address(RVA = "0x5BB1410", Offset = "0x5BB0410", VA = "0x5BB1410", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
		// Lifted from source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c (UI.MobileLayoutLocalizedDropdownSettingElement$$OnDropdownOptionClick): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		GameObject obj;
		Func<string, string> pSVar3;
		TypedSetting<T> __this_00;
		UnityAction pUVar4;
		Settings_TypedSetting_int__o __this_01;
		String title;

		obj = this._selectedButtonLabel;
		pSVar3 = this._optionLabel;
		if (pSVar3 == null) {
			title = null;
		}
		else {
			title = (String)(*(code)pSVar3.invoke_impl)(pSVar3.method_code,option,pSVar3.method);
		}
		if (title == null) {
			title = option;
		}
		this.SetupLabel(obj, title);
		this.CloseOptions();
		iVar2 = this._settingType;
		if (iVar2 == 2) {
			__this_01 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_01 == null) {
	label_05cb1580: ;
				throw new NullReferenceException();
			}
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting)) ) {
	label_05cb157b: ;
				throw new InvalidCastException();
			}
			__this_01.Value = index;
			pUVar4 = this._onDropdownOptionSelect;
		}
		else {
			if (iVar2 == 4) {
				__this_00 = (TypedSetting<T>)this._setting;
				if (__this_00 == null) goto label_05cb1580;
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) goto label_05cb157b;
				__this_00.Value = (object)option;
			}
			pUVar4 = this._onDropdownOptionSelect;
		}
		if (pUVar4 == null) {
			return;
		}
		(*(code)pUVar4.invoke_impl)(pUVar4.method_code,pUVar4.method);
		return;
	}

	[Token(Token = "0x6004842")]
	[Address(RVA = "0x5BB15C0", Offset = "0x5BB05C0", VA = "0x5BB15C0", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c (UI.MobileLayoutLocalizedDropdownSettingElement$$SyncElement): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		uint uVar3;
		BaseSetting pSVar4;
		Func<string, string> pSVar5;
		Settings_TypedSetting_int__o __this_00;
		String pSVar6;
		String[] pSVar7;
		String title;
		GameObject obj;

		iVar2 = this._settingType;
		if (iVar2 == 2) {
			__this_00 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_00 == null) {
	label_05cb1750: ;
				throw new NullReferenceException();
			}
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting)) ) {
				throw new InvalidCastException();
			}
			pSVar7 = this._options;
			if (pSVar7 == null) goto label_05cb1750;
			if ((int)pSVar7.Length <= __this_00._value) {
				__this_00.Value = 0;
				pSVar7 = this._options;
				if (pSVar7 == null) goto label_05cb1750;
			}
			uVar3 = __this_00._value;
			if ((uint)pSVar7.Length <= uVar3) {
				throw new IndexOutOfRangeException();
			}
			obj = this._selectedButtonLabel;
			title = pSVar7[(int)uVar3];
			pSVar5 = this._optionLabel;
			if (pSVar5 != null) {
				pSVar6 = (String)(*(code)pSVar5.invoke_impl)(pSVar5.method_code,title,pSVar5.method);
				goto label_05cb1734;
			}
		}
		else {
			if (iVar2 != 4) {
				return;
			}
			pSVar4 = this._setting;
			if (pSVar4 == null) goto label_05cb1750;
			bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if (((pSVar4.klass._2).typeHierarchyDepth < bVar1) ||((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(StringSetting)) ) {
				throw new InvalidCastException();
			}
			obj = this._selectedButtonLabel;
			title = (*(ulong)((sbyte)pSVar4 + 0x20));
			pSVar5 = this._optionLabel;
			if (pSVar5 != null) {
				pSVar6 = (String)(*(code)pSVar5.invoke_impl)(pSVar5.method_code,title,pSVar5.method);
				goto label_05cb1734;
			}
		}
		pSVar6 = null;
	label_05cb1734: ;
		if (pSVar6 != null) {
			title = pSVar6;
		}
		this.SetupLabel(obj, title);
		return;
	}

	[Token(Token = "0x6004843")]
	[Address(RVA = "0x5BB1270", Offset = "0x5BB0270", VA = "0x5BB1270")]
	private void RelabelOptions()
	{
		// Lifted from source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c (UI.MobileLayoutLocalizedDropdownSettingElement$$RelabelOptions): clean
		GameObject __this_00;
		Func<string, string> pSVar1;
		int iVar2;
		Transform pUVar3;
		String[] pSVar4;
		Transform pUVar5;
		Text pUVar6;
		String pSVar7;
		ulong uVar8;
		String pSVar9;

		__this_00 = this._optionsPanel;
		if ((__this_00 != null) &&(pUVar3 = __this_00.transform, pUVar3 != null)) {
			pUVar3 = pUVar3.Find("Options");
			pSVar4 = this._options;
			if (pSVar4 != null) {
				if (pUVar3 == null) {
					if ((int)pSVar4.Length < 1) {
						return;
					}
				}
				else {
					uVar8 = 0;
					do {
						if ((long)(int)pSVar4.Length <= (long)uVar8) {
							return;
						}
						iVar2 = pUVar3.childCount;
						if ((long)iVar2 <= (long)uVar8) {
							return;
						}
						pUVar5 = pUVar3.GetChild((int32_t)uVar8);
						if ((pUVar5 == null) ||(pUVar5 = pUVar5.Find("Label"), pUVar5 == null)) break;
						pUVar6 = pUVar5.GetComponent<Text>();
						pSVar4 = this._options;
						if (pSVar4 == null) break;
						if ((uint)pSVar4.Length <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						pSVar9 = pSVar4[uVar8];
						pSVar1 = this._optionLabel;
						if (pSVar1 == null) {
							pSVar7 = null;
						}
						else {
							pSVar7 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar9,pSVar1.method);
						}
						if (pUVar6 == null) break;
						if (pSVar7 != null) {
							pSVar9 = pSVar7;
						}
						pUVar6.set_text(pSVar9);
						uVar8 = uVar8 + 1;
						pSVar4 = this._options;
					} while (pSVar4 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004844")]
	[Address(RVA = "0x5BB1590", Offset = "0x5BB0590", VA = "0x5BB1590")]
	private string GetOptionLabel(string option)
	{
		// Lifted from source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c (UI.MobileLayoutLocalizedDropdownSettingElement$$GetOptionLabel): clean
		Func<string, string> pSVar1;
		String pSVar2;

		pSVar1 = this._optionLabel;
		if (pSVar1 == null) {
			pSVar2 = null;
		}
		else {
			pSVar2 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,option,pSVar1.method);
		}
		if (pSVar2 != null) {
			option = pSVar2;
		}
		return option;
	}

	[Token(Token = "0x6004845")]
	[Address(RVA = "0x5BB1770", Offset = "0x5BB0770", VA = "0x5BB1770")]
	public MobileLayoutLocalizedDropdownSettingElement()
	{
		// Lifted from source/cpp/UI/MobileLayoutLocalizedDropdownSettingElement.c (UI.MobileLayoutLocalizedDropdownSettingElement$$.ctor): clean
		base();
		return;
	}
}
