// ==================== AoTTG2 cross-reference ====================
// Type: UI.Vector3Popup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/Vector3Popup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/Vector3Popup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007AD")]
internal class Vector3Popup : PromptPopup
{
	[Token(Token = "0x40026AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Vector3Setting _setting;

	[Token(Token = "0x40026AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _x;

	[Token(Token = "0x40026B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _y;

	[Token(Token = "0x40026B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _z;

	[Token(Token = "0x40026B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private List<GameObject> _inputs;

	[Token(Token = "0x40026B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x40026B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _text;

	[Token(Token = "0x17000CD9")]
	protected override string Title
	{
		[Token(Token = "0x6004A04")]
		[Address(RVA = "0x5BC8A20", Offset = "0x5BC7A20", VA = "0x5BC8A20", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$get_Title): clean
			return "Vector3";
		}
	}

	[Token(Token = "0x17000CDA")]
	protected override float Width
	{
		[Token(Token = "0x6004A05")]
		[Address(RVA = "0x5BC8A50", Offset = "0x5BC7A50", VA = "0x5BC8A50", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$get_Width): clean
			return 250.0;
		}
	}

	[Token(Token = "0x17000CDB")]
	protected override float Height
	{
		[Token(Token = "0x6004A06")]
		[Address(RVA = "0x5BC8A60", Offset = "0x5BC7A60", VA = "0x5BC8A60", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$get_Height): clean
			return 330.0;
		}
	}

	[Token(Token = "0x17000CDC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A07")]
		[Address(RVA = "0x5BC8A70", Offset = "0x5BC7A70", VA = "0x5BC8A70", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000CDD")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004A08")]
		[Address(RVA = "0x5BC8A80", Offset = "0x5BC7A80", VA = "0x5BC8A80", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$get_PanelAlignment): clean
			return 1;
		}
	}

	[Token(Token = "0x6004A09")]
	[Address(RVA = "0x5BC8A90", Offset = "0x5BC7A90", VA = "0x5BC8A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		int fontSize;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Save");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_Vector3Popup_Setup_b__17_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Cancel");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_Vector3Popup_Setup_b__17_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		return;
	}

	[Token(Token = "0x6004A0A")]
	[Address(RVA = "0x5BC8C40", Offset = "0x5BC7C40", VA = "0x5BC8C40")]
	public void Show(Vector3Setting setting, Text text, UnityAction onChangeVector)
	{
		// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$Show): clean
		FloatSetting pSVar1;
		bool bVar2;
		GameObject __this_00;

		__this_00 = this.gameObject;
		if (__this_00 != null) {
			bVar2 = __this_00.activeSelf;
			if (bVar2) {
				return;
			}
			this.Show();
			this._setting = setting;
			this._text = text;
			if ((setting != null) &&(pSVar1 = this._x, pSVar1 != null)) {
				pSVar1.Value = setting._value.x;
				pSVar1 = this._y;
				if (pSVar1 != null) {
					pSVar1.Value = setting._value.y;
					pSVar1 = this._z;
					if (pSVar1 != null) {
						pSVar1.Value = setting._value.z;
						this._onChangeVector = onChangeVector;
						this.CreateInputs();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A0B")]
	[Address(RVA = "0x5BC8D70", Offset = "0x5BC7D70", VA = "0x5BC8D70")]
	private void CreateInputs()
	{
		// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$CreateInputs): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> pSVar3;
		GameObject[] pUVar4;
		Object obj;
		bool bVar6;
		String themePanel;
		ElementStyle __this_00;
		GameObject pUVar7;
		byte[] local_58 = new byte[8];
		Object local_48;
		byte[] local_40 = new byte[16];
		Object local_30;

		local_58 = (byte[])0x0;
		local_48 = null;
		pSVar3 = this._inputs;
		if (pSVar3 != null) {
			local_40.GetEnumerator((List<object>)pSVar3);
			local_48 = local_30;
			local_58 = (byte[])local_40._0_8_;
			local_40._0_8_ = null;
			local_40._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
			while(true) {
				bVar6 = local_58.MoveNext();
				obj = local_48;
				if (!bVar6) break;
				Object.Destroy(obj);
			}
			local_58.Dispose() ;
			themePanel = this.get_ThemePanel();
			__this_00 = new ElementStyle(0x18, 30.0, 20.0, themePanel);
			pSVar3 = this._inputs;
			pUVar7 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this._x, "X", "", 140.0, 40.0, false, null, null, null, null);
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				pUVar4 = pSVar3._items;
				if (pUVar4 != null) {
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pUVar4.Length) {
						pSVar3._size = uVar2 + 1;
						pUVar4[(int)uVar2] = pUVar7;
					}
					else {
						pSVar3.AddWithResize((object)pUVar7);
					}
					pSVar3 = this._inputs;
					pUVar7 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this._y, "Y", "", 140.0, 40.0, false, null, null, null, null);
					if (pSVar3 != null) {
						piVar1 = &pSVar3._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = pSVar3._items;
						if (pUVar4 != null) {
							uVar2 = pSVar3._size;
							if (uVar2 < (uint)pUVar4.Length) {
								pSVar3._size = uVar2 + 1;
								pUVar4[(int)uVar2] = pUVar7;
							}
							else {
								pSVar3.AddWithResize((object)pUVar7);
							}
							pSVar3 = this._inputs;
							pUVar7 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this._z, "Z", "", 140.0, 40.0, false, null, null, null, null);
							if (pSVar3 != null) {
								piVar1 = &pSVar3._version;
								*piVar1 = *piVar1 + 1;
								pUVar4 = pSVar3._items;
								if (pUVar4 != null) {
									uVar2 = pSVar3._size;
									if (uVar2 < (uint)pUVar4.Length) {
										pSVar3._size = uVar2 + 1;
										pUVar4[(int)uVar2] = pUVar7;
									}
									else {
										pSVar3.AddWithResize((object)pUVar7);
									}
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A0C")]
	[Address(RVA = "0x5BC91B0", Offset = "0x5BC81B0", VA = "0x5BC91B0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$OnButtonClick): clean
		FloatSetting pSVar1;
		FloatSetting pSVar2;
		FloatSetting pSVar3;
		Vector3Setting pSVar4;
		Text pUVar5;
		UnityAction pUVar6;
		Vector3 vector;
		bool bVar7;
		String pSVar8;
		Vector3 value;

		bVar7 = (name == "Cancel");
		if (bVar7) {
	label_05cc9336: ;
			this.Hide();
			return;
		}
		bVar7 = (name == "Save");
		if (!bVar7) {
			return;
		}
		pSVar1 = this._x;
		if ((((pSVar1 != null) &&(pSVar2 = this._y, pSVar2 != null)) &&(pSVar3 = this._z, pSVar3 != null)) &&(pSVar4 = this._setting, pSVar4 != null)) {
			value.y = pSVar2._value;
			value.x = pSVar1._value;
			value.z = pSVar3._value;
			pSVar4.Value = value;
			pSVar4 = this._setting;
			if (pSVar4 != null) {
				pUVar5 = this._text;
				vector = pSVar4._value;
				pSVar8 = MiscExtensions.ToDisplayString((Vector3)vector);
				if (pUVar5 != null) {
					pUVar5.set_text(pSVar8);
					pUVar6 = this._onChangeVector;
					if (pUVar6 != null) {
						(*(code)pUVar6.invoke_impl)(pUVar6.method_code,pUVar6.method);
					}
					goto label_05cc9336;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A0D")]
	[Address(RVA = "0x5BC9360", Offset = "0x5BC8360", VA = "0x5BC9360")]
	public Vector3Popup()
	{
		// Lifted from source/cpp/UI/Vector3Popup.c (UI.Vector3Popup$$.ctor): clean
		FloatSetting pSVar1;
		MethodInfo method_00;

		pSVar1 = new FloatSetting(0.0, -3.4028235e+38, 3.4028235e+38);
		this._x = pSVar1;
		pSVar1 = new FloatSetting(0.0, -3.4028235e+38, 3.4028235e+38);
		this._y = pSVar1;
		pSVar1 = new FloatSetting(0.0, -3.4028235e+38, 3.4028235e+38);
		this._z = pSVar1;
		method_00 = new List<GameObject>();
		this._inputs = (List<GameObject>)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/Vector3Popup.c.

	// UI.Vector3Popup$$<Setup>b__17_0: clean
	private void Setup_b__17_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.Vector3Popup$$<Setup>b__17_1: clean
	private void Setup_b__17_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
