// ==================== AoTTG2 cross-reference ====================
// Type: UI.IncrementSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IncrementSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IncrementSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F4")]
internal class IncrementSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Text _valueLabel;

	[Token(Token = "0x40027A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x40027A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x40027AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Func<bool> _validation;

	[Token(Token = "0x17000D4C")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C56")]
		[Address(RVA = "0x5BF12C0", Offset = "0x5BF02C0", VA = "0x5BF12C0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/IncrementSettingElement.c (UI.IncrementSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c8f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c8f = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(2);
			return __this_00;
		}
	}

	[Token(Token = "0x6004C57")]
	[Address(RVA = "0x5BF1340", Offset = "0x5BF0340", VA = "0x5BF1340")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, string[] options, UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
		// Lifted from source/cpp/UI/IncrementSettingElement.c (UI.IncrementSettingElement$$Setup): 12 lines keep C-only constructs
		Text* targetAddress;
		String panel;
		ColorBlock value;
		ColorBlock value_00;
		Transform pUVar1;
		Text pUVar2;
		Button __this_00;
		Button __this_01;
		LayoutElement pUVar3;
		LayoutElement pUVar4;
		GameObject pUVar5;
		HoldableButton pUVar6;
		Action pSVar7;
		Action pSVar8;
		Delegate value_01;
		Action pSVar9;
		bool bVar10;
		Color UVar11;
		ColorBlock local_e0;
		ColorBlock local_88;

		if (Il2CppMethodInitialized_07547c90 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoldableButton) ;
			Il2CppMethodInitialized_07547c90 = true;
		}
		pUVar1 = this.transform;
		if ((pUVar1 != null) &&(pUVar1 = pUVar1.Find("Increment/ValueLabel"), pUVar1 != null)) {
			pUVar2 = pUVar1.GetComponent<Text>();
			targetAddress = &this._valueLabel;
			this._valueLabel = pUVar2;
			if ((style != null) &&(pUVar2 = this._valueLabel, pUVar2 != null)) {
				pUVar2.fontSize = style.FontSize;
				this._options = options;
				this._onValueChanged = onValueChanged;
				this._validation = validation;
				pUVar1 = this.transform;
				if ((pUVar1 != null) &&(pUVar1 = pUVar1.Find("Increment/LeftButton"), pUVar1 != null)) {
					__this_00 = pUVar1.GetComponent<Button>();
					pUVar1 = this.transform;
					if ((pUVar1 != null) &&(((pUVar1 = pUVar1.Find("Increment/RightButton"), pUVar1 != null &&(__this_01 = pUVar1.GetComponent<Button>(), __this_00 != null)) &&(pUVar3 = __this_00.GetComponent<LayoutElement>(), __this_01 != null)))) {
						pUVar4 = __this_01.GetComponent<LayoutElement>();
						pUVar5 = __this_00.gameObject;
						if (pUVar5 != null) {
							pUVar6 = pUVar5.AddComponent<HoldableButton>();
							pSVar7 = new Action((object)this, (intptr_t)MethodInfo_UI_IncrementSettingElement_Setup_b__6_0);
							if (pUVar6 != null) {
								pSVar9 = pUVar6.OnClick;
								do {
									value_01 = Delegate.Combine((Delegate)pSVar9, (Delegate)pSVar7);
									if ((value_01 != null) &&((Action)value_01.klass != typeof(Action))) goto label_05cf1770;
									pSVar8 = il2cpp_codegen_interlocked_compare_exchange_ref(&pUVar6.OnClick, value_01, pSVar9);
									bVar10 = pSVar8 != pSVar9;
									pSVar9 = pSVar8;
								} while (bVar10);
								pUVar5 = __this_01.gameObject;
								if (pUVar5 != null) {
									pUVar6 = pUVar5.AddComponent<HoldableButton>();
									pSVar7 = new Action((object)this, (intptr_t)MethodInfo_UI_IncrementSettingElement_Setup_b__6_1);
									if (pUVar6 != null) {
										pSVar9 = pUVar6.OnClick;
										do {
											value_01 = Delegate.Combine((Delegate)pSVar9, (Delegate)pSVar7);
											if ((value_01 != null) &&((Action)value_01.klass != typeof(Action))) {
	label_05cf1770: ;
												throw new InvalidCastException();
											}
											pSVar8 = il2cpp_codegen_interlocked_compare_exchange_ref(&pUVar6.OnClick, value_01, pSVar9);
											bVar10 = pSVar8 != pSVar9;
											pSVar9 = pSVar8;
										} while (bVar10);
										if ((pUVar4 != null) &&(pUVar4.set_preferredWidth(elementWidth), pUVar3 != null)) {
											pUVar3.set_preferredWidth(elementWidth);
											pUVar4.set_preferredHeight(elementHeight);
											pUVar3.set_preferredHeight(elementHeight);
											if (*targetAddress != null) {
												pUVar3 = (*targetAddress).GetComponent<LayoutElement>();
												bVar10 = ((Object)pUVar3 != null);
												if (bVar10) {
													if (pUVar3 == null) goto label_05cf1a36;
													pUVar3.set_flexibleWidth(0.0);
													pUVar3.set_minWidth(-1.0);
													pUVar3.set_preferredWidth(-1.0);
												}
												this.Setup(setting, style, title, tooltip);
												panel = style.ThemePanel;
												local_88 = UIManager.GetThemeColorBlock(panel, "DefaultButton", "", "DefaultPanel");
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
												__this_00.colors = value;
												local_e0 = UIManager.GetThemeColorBlock(style.ThemePanel, "DefaultButton", "", "DefaultPanel");
												value_00.m_NormalColor.b = local_e0.m_NormalColor.b;
												value_00.m_NormalColor.a = local_e0.m_NormalColor.a;
												value_00.m_NormalColor.r = local_e0.m_NormalColor.r;
												value_00.m_NormalColor.g = local_e0.m_NormalColor.g;
												value_00.m_HighlightedColor.r = local_e0.m_HighlightedColor.r;
												value_00.m_HighlightedColor.g = local_e0.m_HighlightedColor.g;
												value_00.m_HighlightedColor.b = local_e0.m_HighlightedColor.b;
												value_00.m_HighlightedColor.a = local_e0.m_HighlightedColor.a;
												value_00.m_PressedColor.r = local_e0.m_PressedColor.r;
												value_00.m_PressedColor.g = local_e0.m_PressedColor.g;
												value_00.m_PressedColor.b = local_e0.m_PressedColor.b;
												value_00.m_PressedColor.a = local_e0.m_PressedColor.a;
												value_00.m_SelectedColor.r = local_e0.m_SelectedColor.r;
												value_00.m_SelectedColor.g = local_e0.m_SelectedColor.g;
												value_00.m_SelectedColor.b = local_e0.m_SelectedColor.b;
												value_00.m_SelectedColor.a = local_e0.m_SelectedColor.a;
												value_00.m_DisabledColor.r = local_e0.m_DisabledColor.r;
												value_00.m_DisabledColor.g = local_e0.m_DisabledColor.g;
												value_00.m_DisabledColor.b = local_e0.m_DisabledColor.b;
												value_00.m_DisabledColor.a = local_e0.m_DisabledColor.a;
												value_00.m_ColorMultiplier = local_e0.m_ColorMultiplier;
												value_00.m_FadeDuration = local_e0.m_FadeDuration;
												__this_01.colors = value_00;
												pUVar2 = *targetAddress;
												UVar11 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "TextColor", "DefaultPanel");
												if (pUVar2 != null) {
													pUVar2.set_color(UVar11);
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05cf1a36: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C58")]
	[Address(RVA = "0x5BF1A40", Offset = "0x5BF0A40", VA = "0x5BF1A40")]
	protected void OnButtonPressed(bool increment)
	{
		// Lifted from source/cpp/UI/IncrementSettingElement.c (UI.IncrementSettingElement$$OnButtonPressed): 5 lines keep C-only constructs
		byte bVar1;
		uint value;
		Settings_TypedSetting_int__o __this_00;
		Func<bool> pSVar2;
		UnityAction pUVar3;
		sbyte cVar4;
		uint value_00;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, increment);
		if (this._settingType == 2) {
			__this_00 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting)) ) {
				throw new InvalidCastException();
			}
			value = __this_00._value;
			value_00 = (value + (uint)increment * 2) - 1;
			__this_00.Value = value_00;
			pSVar2 = this._validation;
			if (pSVar2 != null) {
				cVar4 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code);
				if (cVar4 == false) {
					__this_00.Value = value;
				}
			}
		}
		this.UpdateValueLabel();
		pUVar3 = this._onValueChanged;
		if (pUVar3 == null) {
			return;
		}
		(*(code)pUVar3.invoke_impl)(pUVar3.method_code,pUVar3.method);
		return;
	}

	[Token(Token = "0x6004C59")]
	[Address(RVA = "0x5BF1B50", Offset = "0x5BF0B50", VA = "0x5BF1B50")]
	protected void UpdateValueLabel()
	{
		// Lifted from source/cpp/UI/IncrementSettingElement.c (UI.IncrementSettingElement$$UpdateValueLabel): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		String[] pSVar3;
		BaseSetting pSVar4;
		Text pUVar5;
		String pSVar6;
		int iStack_c;

		if (this._settingType != 2) {
			return;
		}
		pSVar3 = this._options;
		pSVar4 = this._setting;
		pUVar5 = this._valueLabel;
		if (pSVar3 == null) {
			if (pSVar4 != null) {
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if (((pSVar4.klass._2).typeHierarchyDepth < bVar1) ||((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf1c61;
				iStack_c = *(int)((long)&(*(ulong)((sbyte)pSVar4 + 0x18)) + 4);
				pSVar6 = iStack_c.ToString();
				if (pUVar5 != null) {
					pUVar5.set_text(pSVar6);
					return;
				}
			}
		}
		else if (pSVar4 != null) {
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((pSVar4.klass._2).typeHierarchyDepth < bVar1) ||((pSVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) {
	label_05cf1c61: ;
				throw new InvalidCastException();
			}
			uVar2 = *(uint)((long)&(*(ulong)((sbyte)pSVar4 + 0x18)) + 4);
			if ((uint)pSVar3.Length <= uVar2) {
				throw new IndexOutOfRangeException();
			}
			if (pUVar5 != null) {
				pUVar5.set_text(pSVar3[(int)uVar2]);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C5A")]
	[Address(RVA = "0x5BF1C70", Offset = "0x5BF0C70", VA = "0x5BF1C70", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/IncrementSettingElement.c (UI.IncrementSettingElement$$SyncElement): clean
		this.UpdateValueLabel();
		return;
	}

	[Token(Token = "0x6004C5B")]
	[Address(RVA = "0x5BF1C80", Offset = "0x5BF0C80", VA = "0x5BF1C80")]
	public IncrementSettingElement()
	{
		// Lifted from source/cpp/UI/IncrementSettingElement.c (UI.IncrementSettingElement$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/IncrementSettingElement.c.

	// UI.IncrementSettingElement$$<Setup>b__6_0: clean
	private void Setup_b__6_0()
	{


		this.OnButtonPressed(false);
		return;
	}

	// UI.IncrementSettingElement$$<Setup>b__6_1: clean
	private void Setup_b__6_1()
	{


		this.OnButtonPressed(true);
		return;
	}
}
