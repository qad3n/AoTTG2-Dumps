// ==================== AoTTG2 cross-reference ====================
// Type: UI.SetNamePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SetNamePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SetNamePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007A9")]
internal class SetNamePopup : PromptPopup
{
	[Token(Token = "0x40026A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x40026A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x40026A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting NameSetting;

	[Token(Token = "0x40026A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _initialValue;

	[Token(Token = "0x40026A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string _defaultFieldLabel;

	[Token(Token = "0x40026A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _previewLabel;

	[Token(Token = "0x40026A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private NameEffectController _previewEffect;

	[Token(Token = "0x17000CCE")]
	protected override string Title
	{
		[Token(Token = "0x60049E6")]
		[Address(RVA = "0x5BC7690", Offset = "0x5BC6690", VA = "0x5BC7690", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000CCF")]
	protected override float Width
	{
		[Token(Token = "0x60049E7")]
		[Address(RVA = "0x5BC76B0", Offset = "0x5BC66B0", VA = "0x5BC76B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$get_Width): clean
			return 320.0;
		}
	}

	[Token(Token = "0x17000CD0")]
	protected override float Height
	{
		[Token(Token = "0x60049E8")]
		[Address(RVA = "0x5BC76C0", Offset = "0x5BC66C0", VA = "0x5BC76C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$get_Height): clean
			return 230.0;
		}
	}

	[Token(Token = "0x17000CD1")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60049E9")]
		[Address(RVA = "0x5BC76D0", Offset = "0x5BC66D0", VA = "0x5BC76D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$get_VerticalPadding): clean
			return 0x28;
		}
	}

	[Token(Token = "0x60049EA")]
	[Address(RVA = "0x5BC76E0", Offset = "0x5BC66E0", VA = "0x5BC76E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$Setup): 5 lines keep C-only constructs
		GameObject* targetAddress;
		Transform pUVar1;
		Object x;
		bool bVar2;
		int fontSize;
		String pSVar3;
		ElementStyle __this_00;
		UnityAction pUVar4;
		GameObject pUVar5;
		InputSettingElement pUVar6;
		NameEffectController pPVar7;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar3 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 100.0, 20.0, pSVar3);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Save");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_SetNamePopup_Setup_b__15_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar3, 0.0, pUVar4);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Cancel");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_SetNamePopup_Setup_b__15_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar3, 0.0, pUVar4);
		pSVar3 = UIManager.GetLocaleCommon("SetName");
		this._defaultFieldLabel = pSVar3;
		pUVar5 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this.NameSetting, this._defaultFieldLabel, "", 140.0, 40.0, false, null, null, null, null);
		if (pUVar5 == null) {
	label_05cc7a4b: ;
			throw new NullReferenceException();
		}
		pUVar6 = pUVar5.GetComponent<InputSettingElement>();
		this._element = pUVar6;
		bVar2 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		if (bVar2) {
			pUVar5 = ElementFactory.CreateTMPLabel(this.SinglePanel, __this_00, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 3);
			targetAddress = &this._previewLabel;
			this._previewLabel = pUVar5;
			x = (Object)this._previewLabel;
			bVar2 = (x != null);
			if (bVar2) {
				pUVar5 = *targetAddress;
				if (pUVar5 != null) {
					pPVar7 = pUVar5.AddComponent<NameEffectController>();
					this._previewEffect = pPVar7;
					pPVar7 = this._previewEffect;
					if (pPVar7 != null) {
						pPVar7.AutoConfigure();
						return;
					}
				}
				goto label_05cc7a4b;
			}
		}
		return;
	}

	[Token(Token = "0x60049EB")]
	[Address(RVA = "0x5BC7A50", Offset = "0x5BC6A50", VA = "0x5BC7A50")]
	public void Show(string initialValue, UnityAction onSave, string title, [Optional] string fieldLabel)
	{
		// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$Show): clean
		StringSetting __this_00;
		InputSettingElement pUVar1;
		bool bVar2;
		GameObject __this_01;

		__this_01 = this.gameObject;
		if (__this_01 != null) {
			bVar2 = __this_01.activeSelf;
			if (bVar2) {
				return;
			}
			this.Show();
			this._initialValue = initialValue;
			this._onSave = onSave;
			this.SetTitle(title);
			bVar2 = String.IsNullOrEmpty(fieldLabel);
			if (bVar2) {
				fieldLabel = this._defaultFieldLabel;
			}
			this.SetFieldLabel(fieldLabel);
			__this_00 = this.NameSetting;
			if (__this_00 != null) {
				__this_00.Value = (object)initialValue;
				pUVar1 = this._element;
				if (pUVar1 != null) {
					pUVar1.SyncElement();
					this.RefreshPreview();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049EC")]
	[Address(RVA = "0x5BC7B60", Offset = "0x5BC6B60", VA = "0x5BC7B60")]
	private void SetFieldLabel(string label)
	{
		// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$SetFieldLabel): clean
		InputSettingElement pUVar1;
		bool bVar2;
		Transform pUVar3;
		Text x;

		pUVar1 = this._element;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return;
		}
		pUVar1 = this._element;
		if ((pUVar1 != null) &&(pUVar3 = pUVar1.transform, pUVar3 != null)) {
			x = null;
			pUVar3 = pUVar3.Find("Label");
			if (pUVar3 != null) {
				x = pUVar3.GetComponent<Text>();
			}
			bVar2 = ((Object)x != null);
			if (!bVar2) {
				return;
			}
			if (label == null) {
				label = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (x != null) {
				x.set_text(label);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049ED")]
	[Address(RVA = "0x5BC7CA0", Offset = "0x5BC6CA0", VA = "0x5BC7CA0")]
	private void RefreshPreview()
	{
		// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$RefreshPreview): clean
		NameEffectController pPVar1;
		ProfileSettings pSVar2;
		StringSetting pSVar3;
		String raw;
		Object x;
		GameObject __this_00;
		ColorSetting pSVar4;
		Color255 pUVar5;
		bool bVar6;
		TextMeshProUGUI x_00;
		NameEffectSettings settings;
		Color UVar7;
		int iStack_2c;

		iStack_2c = 0;
		pPVar1 = this._previewEffect;
		bVar6 = ((Object)pPVar1 == null);
		if (bVar6) {
			return;
		}
		pSVar2 = SettingsManager.ProfileSettings;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.NameEffect, pSVar3 != null)) {
			raw = pSVar3._value;
			x = (Object)this._previewLabel;
			bVar6 = (x != null);
			if (bVar6) {
				__this_00 = this._previewLabel;
				if (__this_00 == null) goto label_05cc7f0f;
				x_00 = __this_00.GetComponent<TextMeshProUGUI>();
				bVar6 = ((Object)x_00 != null);
				if (bVar6) {
					pSVar3 = this.NameSetting;
					if ((pSVar3 == null) || (x_00 == null)) goto label_05cc7f0f;
					x_00.set_text(pSVar3._value);
				}
			}
			bVar6 = NameEffectPresets.TryResolve(raw, ref iStack_2c);
			if (bVar6) {
				settings = NameEffectPresets.GetPreset(iStack_2c);
				pSVar4 = pSVar2.NameEffectColorA;
				if (((pSVar4 != null) &&(pUVar5 = pSVar4._value, pUVar5 != null)) &&(UVar7 = (Color)pUVar5.ToColor(), settings != null)) {
					settings.gradientA = UVar7;
					pSVar4 = pSVar2.NameEffectColorB;
					if ((pSVar4 != null) &&(pUVar5 = pSVar4._value, pUVar5 != null)) {
						UVar7 = (Color)pUVar5.ToColor();
						settings.gradientB = UVar7;
						pSVar4 = pSVar2.NameEffectColorC;
						if ((pSVar4 != null) &&(pUVar5 = pSVar4._value, pUVar5 != null)) {
							UVar7 = (Color)pUVar5.ToColor();
							settings.gradientC = UVar7;
							pSVar4 = pSVar2.NameEffectColorD;
							if ((pSVar4 != null) &&(pUVar5 = pSVar4._value, pUVar5 != null)) {
								UVar7 = (Color)pUVar5.ToColor();
								settings.gradientD = UVar7;
								pPVar1 = this._previewEffect;
								if (pPVar1 != null) {
									pPVar1.Apply(settings);
									return;
								}
							}
						}
					}
				}
			}
			else {
				pPVar1 = this._previewEffect;
				if (pPVar1 != null) {
					pPVar1.Clear();
					return;
				}
			}
		}
	label_05cc7f0f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049EE")]
	[Address(RVA = "0x5BC7F20", Offset = "0x5BC6F20", VA = "0x5BC7F20")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$OnButtonClick): clean
		StringSetting pSVar1;
		UnityAction pUVar2;
		bool bVar3;

		bVar3 = (name == "Cancel");
		if (bVar3) {
	label_05cc8012: ;
			this.Hide();
			return;
		}
		bVar3 = (name == "Save");
		if (!bVar3) {
			return;
		}
		pSVar1 = this.NameSetting;
		if (pSVar1 != null) {
			bVar3 = (pSVar1._value == (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar3) {
				pSVar1 = this.NameSetting;
				if (pSVar1 == null) goto label_05cc8037;
				pSVar1.Value = (object)this._initialValue;
			}
			pUVar2 = this._onSave;
			if (pUVar2 != null) {
				(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
				goto label_05cc8012;
			}
		}
	label_05cc8037: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049EF")]
	[Address(RVA = "0x5BC8040", Offset = "0x5BC7040", VA = "0x5BC8040")]
	public SetNamePopup()
	{
		// Lifted from source/cpp/UI/SetNamePopup.c (UI.SetNamePopup$$.ctor): clean
		String defaultValue;
		MethodInfo method_00;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.NameSetting = (StringSetting)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/SetNamePopup.c.

	// UI.SetNamePopup$$<Setup>b__15_0: clean
	private void Setup_b__15_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.SetNamePopup$$<Setup>b__15_1: clean
	private void Setup_b__15_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
