// ==================== AoTTG2 cross-reference ====================
// Type: UI.InputSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InputSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F5")]
internal class InputSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public InputField _inputField;

	[Token(Token = "0x40027AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x40027AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x40027AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected UnityAction _onEndEdit;

	[Token(Token = "0x40027AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Func<string, bool> _onValidate;

	[Token(Token = "0x40027B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Func<string, string> _onCleanup;

	[Token(Token = "0x40027B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform _caret;

	[Token(Token = "0x40027B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected bool _finishedSetup;

	[Token(Token = "0x40027B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected object[] _setupParams;

	[Token(Token = "0x17000D4D")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C5E")]
		[Address(RVA = "0x5BF1CB0", Offset = "0x5BF0CB0", VA = "0x5BF1CB0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c93 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c93 = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(3);
			__this_00.Add(2);
			__this_00.Add(4);
			return __this_00;
		}
	}

	[Token(Token = "0x6004C5F")]
	[Address(RVA = "0x5BF1D60", Offset = "0x5BF0D60", VA = "0x5BF1D60")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, bool multiLine, UnityAction onValueChanged, UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
		// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$Setup): 36 lines keep C-only constructs
		InputField* targetAddress;
		byte bVar1;
		String panel;
		InputField.OnChangeEvent __this_00;
		InputField.EndEditEvent __this_01;
		ColorBlock value;
		bool bVar2;
		int iVar3;
		Transform pUVar4;
		GameObject pUVar5;
		InputField pUVar6;
		Text pUVar7;
		Image value_00;
		LayoutElement pUVar8;
		UnityAction<T0> pUVar9;
		int value_01;
		Color UVar10;
		ColorBlock local_88;

		if (style == null) goto label_05cf25b9;
		if (style.FontSize < 0x13) {
			this._inputFontSizeOffset = -2;
		}
		this._onValueChanged = onValueChanged;
		this._onEndEdit = onEndEdit;
		this._onValidate = onValidate;
		this._onCleanup = onCleanup;
		pUVar4 = this.transform;
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar4 = pUVar4.Find("InputField");
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar5 = pUVar4.gameObject;
		if (pUVar5 == null) goto label_05cf25b9;
		pUVar6 = pUVar5.GetComponent<InputField>();
		targetAddress = &this._inputField;
		this._inputField = pUVar6;
		pUVar6 = this._inputField;
		bVar2 = ((Object)pUVar6 == null);
		if (bVar2) {
			pUVar4 = this.transform;
			if (pUVar4 == null) goto label_05cf25b9;
			pUVar4 = pUVar4.Find("InputField");
			if (pUVar4 == null) goto label_05cf25b9;
			pUVar5 = pUVar4.gameObject;
			if (pUVar5 == null) goto label_05cf25b9;
			pUVar6 = (InputField)pUVar5.AddComponent<InputFieldPasteable>();
			*targetAddress = pUVar6;
			pUVar6 = *targetAddress;
			if (pUVar6 == null) goto label_05cf25b9;
			pUVar4 = pUVar6.transform;
			if (pUVar4 == null) goto label_05cf25b9;
			pUVar4 = pUVar4.Find("Text");
			if (pUVar4 == null) goto label_05cf25b9;
			pUVar7 = pUVar4.GetComponent<Text>();
			pUVar6.textComponent = pUVar7;
			if (*targetAddress == null) goto label_05cf25b9;
			(*targetAddress).transition = 1;
			pUVar6 = *targetAddress;
			if (pUVar6 == null) goto label_05cf25b9;
			value_00 = pUVar6.GetComponent<Image>();
			pUVar6.targetGraphic = (Graphic)value_00;
		}
		if (*targetAddress == null) goto label_05cf25b9;
		(*targetAddress).text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar6 = *targetAddress;
		panel = style.ThemePanel;
		local_88 = UIManager.GetThemeColorBlock(panel, "DefaultSetting", "Input", "DefaultPanel");
		if (pUVar6 == null) goto label_05cf25b9;
		value.m_NormalColor.b = local_88.m_NormalColor.b;
		value.m_NormalColor.a = local_88.m_NormalColor.a;
		value.m_NormalColor.r = local_88.m_NormalColor.r;
		value.m_NormalColor.g = local_88.m_NormalColor.g;
		value.m_HighlightedColor.r = local_88.m_HighlightedColor.r;
		value.m_HighlightedColor.g = local_88.m_HighlightedColor.g;
		value.m_HighlightedColor.b = local_88.m_HighlightedColor.b;
		value.m_HighlightedColor.a = local_88.m_HighlightedColor.a;
		value.m_PressedColor.r = local_88.m_PressedColor.r;
		value.m_PressedColor.g = local_88.m_PressedColor.g;
		value.m_PressedColor.b = local_88.m_PressedColor.b;
		value.m_PressedColor.a = local_88.m_PressedColor.a;
		value.m_SelectedColor.r = local_88.m_SelectedColor.r;
		value.m_SelectedColor.g = local_88.m_SelectedColor.g;
		value.m_SelectedColor.b = local_88.m_SelectedColor.b;
		value.m_SelectedColor.a = local_88.m_SelectedColor.a;
		value.m_DisabledColor.r = local_88.m_DisabledColor.r;
		value.m_DisabledColor.g = local_88.m_DisabledColor.g;
		value.m_DisabledColor.b = local_88.m_DisabledColor.b;
		value.m_DisabledColor.a = local_88.m_DisabledColor.a;
		value.m_ColorMultiplier = local_88.m_ColorMultiplier;
		value.m_FadeDuration = local_88.m_FadeDuration;
		pUVar6.colors = value;
		if (*targetAddress == null) goto label_05cf25b9;
		pUVar4 = (*targetAddress).transform;
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar4 = pUVar4.Find("Text");
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar7 = pUVar4.GetComponent<Text>();
		UVar10 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "InputTextColor", "DefaultPanel");
		if (pUVar7 == null) goto label_05cf25b9;
		pUVar7.set_color(UVar10);
		pUVar6 = *targetAddress;
		UVar10 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "InputSelectionColor", "DefaultPanel");
		if (pUVar6 == null) goto label_05cf25b9;
		pUVar6.selectionColor = UVar10;
		if (*targetAddress == null) goto label_05cf25b9;
		pUVar4 = (*targetAddress).transform;
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar4 = pUVar4.Find("Text");
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar7 = pUVar4.GetComponent<Text>();
		if (pUVar7 == null) goto label_05cf25b9;
		pUVar7.fontSize = style.FontSize + this._inputFontSizeOffset;
		pUVar6 = this._inputField;
		if (pUVar6 == null) goto label_05cf25b9;
		pUVar4 = pUVar6.transform;
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar4 = pUVar4.Find("Text");
		if (pUVar4 == null) goto label_05cf25b9;
		pUVar7 = pUVar4.GetComponent<Text>();
		UVar10 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "InputTextColor", "DefaultPanel");
		if (pUVar7 == null) goto label_05cf25b9;
		pUVar7.set_color(UVar10);
		if (*targetAddress == null) goto label_05cf25b9;
		pUVar8 = (*targetAddress).GetComponent<LayoutElement>();
		if (pUVar8 == null) goto label_05cf25b9;
		pUVar8.set_preferredWidth(elementWidth);
		if (*targetAddress == null) goto label_05cf25b9;
		pUVar8 = (*targetAddress).GetComponent<LayoutElement>();
		if (pUVar8 == null) goto label_05cf25b9;
		pUVar8.set_preferredHeight(elementHeight);
		if (*targetAddress == null) goto label_05cf25b9;
		(*targetAddress).lineType = (uint)multiLine * 2;
		iVar3 = SettingsUtil.GetSettingType(setting);
		this._settingType = iVar3;
		if (iVar3 == 2) {
			if (*targetAddress == null) goto label_05cf25b9;
			(*targetAddress).contentType = 2;
			pUVar6 = *targetAddress;
			if (pUVar6 == null) goto label_05cf25b9;
			value_01 = 10;
	label_05cf24d8: ;
			pUVar6.characterLimit = value_01;
		}
		else {
			if (iVar3 == 4) {
				if (*targetAddress == null) goto label_05cf25b9;
				(*targetAddress).contentType = 0;
				if (setting == null) goto label_05cf25b9;
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				value_01 = *(int)&(*(ulong)((sbyte)setting + 0x28));
				pUVar6 = *targetAddress;
				if (value_01 == 0x7fffffff) {
					if (pUVar6 == null) goto label_05cf25b9;
					value_01 = 0;
				}
				else if (pUVar6 == null) goto label_05cf25b9;
				goto label_05cf24d8;
			}
			if (iVar3 == 3) {
				if (*targetAddress == null) goto label_05cf25b9;
				(*targetAddress).contentType = 3;
				pUVar6 = *targetAddress;
				if (pUVar6 == null) goto label_05cf25b9;
				value_01 = 0x14;
				goto label_05cf24d8;
			}
		}
		if (*targetAddress != null) {
			__this_00 = ((*targetAddress).fields).m_OnValueChanged;
			pUVar9 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_InputSettingElement_Setup_b__11_0);
			if (__this_00 != null) {
				__this_00.AddListener(pUVar9);
				if (*targetAddress != null) {
					__this_01 = ((*targetAddress).fields).m_OnDidEndEdit;
					pUVar9 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_InputSettingElement_Setup_b__11_1);
					if (__this_01 != null) {
						__this_01.AddListener(pUVar9);
						this._finishedSetup = true;
						this.Setup(setting, style, title, tooltip);
						return;
					}
				}
			}
		}
	label_05cf25b9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C60")]
	[Address(RVA = "0x5BF25D0", Offset = "0x5BF15D0", VA = "0x5BF25D0")]
	protected void OnValueChanged(string value)
	{
		// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$OnValueChanged): 7 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		Func<string, bool> pSVar3;
		Func<string, string> pSVar4;
		TypedSetting<T> __this_00;
		Settings_TypedSetting_float__o __this_01;
		BaseSetting obj;
		UnityAction pUVar5;
		int value_00;
		sbyte cVar6;
		bool bVar7;
		object pIVar8;
		Settings_TypedSetting_int__o __this_02;
		int iStack_28;
		float fStack_24;

		if (this._finishedSetup != false) {
			pSVar3 = this._onValidate;
			if ((pSVar3 != null) &&(cVar6 = (*(code)pSVar3.invoke_impl)(pSVar3.method_code,value,pSVar3.method), cVar6 == false)) {
				return;
			}
			pSVar4 = this._onCleanup;
			if (pSVar4 != null) {
				value = (String)(*(code)pSVar4.invoke_impl)(pSVar4.method_code,value,pSVar4.method);
			}
			if (this._settingType == 4) {
				__this_00 = (TypedSetting<T>)this._setting;
				if (__this_00 == null) goto label_05cf27ff;
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
	label_05cf27fa: ;
					throw new InvalidCastException();
				}
				__this_00.Value = (object)value;
			}
			else {
				bVar7 = (value != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar7) {
					iVar2 = this._settingType;
					if (iVar2 == 2) {
						bVar7 = Int32.TryParse(value, ref iStack_28);
						if (bVar7) {
							obj = this._setting;
							value_00 = iStack_28;
							pIVar8 = il2cpp_codegen_is_inst_class((object)obj, typeof(IntSetting));
							if (pIVar8 == null) goto label_05cf27ff;
							__this_02 = (Settings_TypedSetting_int__o)il2cpp_codegen_is_inst_class((object)obj, typeof(IntSetting));
							__this_02.Value = value_00;
						}
					}
					else if ((iVar2 == 3) && (bVar7 = Single.TryParse(value, ref fStack_24))) {
						__this_01 = (Settings_TypedSetting_float__o)this._setting;
						if (__this_01 == null) {
	label_05cf27ff: ;
							throw new NullReferenceException();
						}
						bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
						if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) goto label_05cf27fa;
						__this_01.Value = fStack_24;
					}
				}
			}
			pUVar5 = this._onValueChanged;
			if (pUVar5 != null) {
				(*(code)pUVar5.invoke_impl)(pUVar5.method_code,pUVar5.method);
			}
		}
		return;
	}

	[Token(Token = "0x6004C61")]
	[Address(RVA = "0x5BF2810", Offset = "0x5BF1810", VA = "0x5BF2810")]
	protected void OnInputFinishEditing(string value)
	{
		// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$OnInputFinishEditing): 2 lines keep C-only constructs
		UnityAction pUVar1;
		code *vtableDispatch;
		ulong extraout_RDX;

		if (this._finishedSetup != false) {
			this.SyncElement();
			pUVar1 = this._onEndEdit;
			if (pUVar1 != null) {
				vtableDispatch = (code)pUVar1.invoke_impl;
				(*vtableDispatch)(pUVar1.method_code,pUVar1.method,extraout_RDX,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004C62")]
	[Address(RVA = "0x5BF2850", Offset = "0x5BF1850", VA = "0x5BF2850", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$SyncElement): 3 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseSetting pSVar3;
		String value;
		InputField pUVar4;
		int local_10;
		float local_c;

		if (this._finishedSetup != false) {
			iVar2 = this._settingType;
			if (iVar2 == 2) {
				pSVar3 = this._setting;
				if (pSVar3 == null) goto label_05cf2a04;
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf29ff;
				pUVar4 = this._inputField;
				local_10 = *(int)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
				value = local_10.ToString();
			}
			else {
				if (iVar2 == 4) {
					pSVar3 = this._setting;
					if (pSVar3 != null) {
						bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
						if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) goto label_05cf29ff;
						pUVar4 = this._inputField;
						if (pUVar4 != null) {
							pUVar4.text = (*(ulong)((sbyte)pSVar3 + 0x20));
							return;
						}
					}
					goto label_05cf2a04;
				}
				if (iVar2 != 3) {
					return;
				}
				pSVar3 = this._setting;
				if (pSVar3 == null) goto label_05cf2a04;
				bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting) )) {
	label_05cf29ff: ;
					throw new InvalidCastException();
				}
				pUVar4 = this._inputField;
				local_c = *(float)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
				value = local_c.ToString("0.##################");
			}
			if (pUVar4 == null) {
	label_05cf2a04: ;
				throw new NullReferenceException();
			}
			pUVar4.text = value;
		}
		return;
	}

	[Token(Token = "0x6004C63")]
	[Address(RVA = "0x5BF2A10", Offset = "0x5BF1A10", VA = "0x5BF2A10")]
	private void Update()
	{
		// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$Update): clean
		InputField pUVar1;
		bool bVar2;

		pUVar1 = this._inputField;
		if (pUVar1 != null) {
			if ((pUVar1.m_AllowInput == false) || ((pUVar1.m_ContentType & 0xfffffffeU) != 2)) {
				return;
			}
			bVar2 = Input.GetKeyDown(0x2d);
			if ((!bVar2) && (bVar2 = Input.GetKeyDown(0x10d), !bVar2)) {
				return;
			}
			pUVar1 = this._inputField;
			if (pUVar1 != null) {
				pUVar1.text = "-";
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C64")]
	[Address(RVA = "0x5BF2AA0", Offset = "0x5BF1AA0", VA = "0x5BF2AA0")]
	public InputSettingElement()
	{
		// Lifted from source/cpp/UI/InputSettingElement.c (UI.InputSettingElement$$.ctor): clean
		this._inputFontSizeOffset = -4;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/InputSettingElement.c.

	// UI.InputSettingElement$$<Setup>b__11_0: clean
	private void Setup_b__11_0(String value)
	{
		this.OnValueChanged(value);
		return;
	}

	// UI.InputSettingElement$$<Setup>b__11_1: 2 lines keep C-only constructs
	private void Setup_b__11_1(String value)
	{
		UnityAction pUVar1;
		code *vtableDispatch;
		ulong extraout_RDX;

		if (this._finishedSetup != false) {
			this.SyncElement();
			pUVar1 = this._onEndEdit;
			if (pUVar1 != null) {
				vtableDispatch = (code)pUVar1.invoke_impl;
				(*vtableDispatch)(pUVar1.method_code,pUVar1.method,extraout_RDX,vtableDispatch);
				return;
			}
		}
		return;
	}
}
