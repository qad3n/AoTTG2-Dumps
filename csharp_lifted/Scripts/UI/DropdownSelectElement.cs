// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSelectElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/DropdownSelectElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007EC")]
internal class DropdownSelectElement : DropdownSettingElement
{
	[Token(Token = "0x6004C25")]
	[Address(RVA = "0x5BEE300", Offset = "0x5BED300", VA = "0x5BEE300", Slot = "7")]
	public override void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/DropdownSelectElement.c (UI.DropdownSelectElement$$Setup): clean
		int value;
		GameObject __this_00;
		Text __this_01;

		this.Setup(setting, style, (String)**(ulong*)(g_data_07556758 + 0xb8), options, tooltip, elementWidth, elementHeight, optionsWidth, maxScrollHeight, onDropdownOptionSelect, intOptionValues);
		if (style != null) {
			__this_00 = this._selectedButtonLabel;
			value = style.FontSize;
			if (__this_00 != null) {
				__this_01 = __this_00.GetComponent<Text>();
				if (__this_01 != null) {
					__this_01.set_text(title);
					__this_01.fontSize = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C26")]
	[Address(RVA = "0x5BEEF70", Offset = "0x5BEDF70", VA = "0x5BEEF70", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
		// Lifted from source/cpp/UI/DropdownSelectElement.c (UI.DropdownSelectElement$$OnDropdownOptionClick): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		Scrollbar __this_00;
		GameObject __this_01;
		TypedSetting<T> __this_02;
		UnityAction pUVar3;
		Settings_TypedSetting_int__o __this_03;
		float fVar4;

		__this_00 = this._scrollBar;
		if (__this_00 != null) {
			fVar4 = __this_00.value;
			this._currentScrollValue = fVar4;
			__this_01 = this._optionsPanel;
			if (__this_01 != null) {
				__this_01.SetActive(false);
				iVar2 = this._settingType;
				if (iVar2 == 2) {
					__this_03 = (Settings_TypedSetting_int__o)this._setting;
					if (__this_03 == null) goto label_05cef0b6;
					bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
					if (((__this_03.klass._2).typeHierarchyDepth < bVar1) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(IntSetting))) {
	label_05cef0bb: ;
						throw new InvalidCastException();
					}
					__this_03.Value = index;
					pUVar3 = this._onDropdownOptionSelect;
				}
				else {
					if (iVar2 == 4) {
						__this_02 = (TypedSetting<T>)this._setting;
						if (__this_02 == null) goto label_05cef0b6;
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) goto label_05cef0bb;
						__this_02.Value = (object)option;
					}
					pUVar3 = this._onDropdownOptionSelect;
				}
				if (pUVar3 == null) {
					return;
				}
				(*(code)pUVar3.invoke_impl)(pUVar3.method_code,pUVar3.method);
				return;
			}
		}
	label_05cef0b6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C27")]
	[Address(RVA = "0x5BEF100", Offset = "0x5BEE100", VA = "0x5BEF100", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/DropdownSelectElement.c (UI.DropdownSelectElement$$SyncElement): clean
		return;
	}

	[Token(Token = "0x6004C28")]
	[Address(RVA = "0x5BEF110", Offset = "0x5BEE110", VA = "0x5BEF110")]
	public DropdownSelectElement()
	{
		// Lifted from source/cpp/UI/DropdownSelectElement.c (UI.DropdownSelectElement$$.ctor): clean
		float fVar1;
		float fVar3;

		this._currentScrollValue = 1.0;
		fVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		this._lastKnownPosition.x = (Vector3.zeroVector).x;
		this._lastKnownPosition.y = fVar3;
		this._lastKnownPosition.z = fVar1;
		base();
		return;
	}
}
