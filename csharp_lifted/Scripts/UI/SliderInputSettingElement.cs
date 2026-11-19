// ==================== AoTTG2 cross-reference ====================
// Type: UI.SliderInputSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SliderInputSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderInputSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007FC")]
internal class SliderInputSettingElement : BaseSettingElement
{
	[Token(Token = "0x20007FD")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFixInputField_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40027D2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40027D3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40027D4")]
		[FieldOffset(Offset = "0x20")]
		public SliderInputSettingElement _003C_003E4__this;

		[Token(Token = "0x17000D53")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004CA2")]
			[Address(RVA = "0x5BF73C0", Offset = "0x5BF63C0", VA = "0x5BF73C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D54")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004CA4")]
			[Address(RVA = "0x5BF7410", Offset = "0x5BF6410", VA = "0x5BF7410", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004C9F")]
		[Address(RVA = "0x5BF6C60", Offset = "0x5BF5C60", VA = "0x5BF6C60")]
		[DebuggerHidden]
		public _003CWaitAndFixInputField_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004CA0")]
		[Address(RVA = "0x5BF7270", Offset = "0x5BF6270", VA = "0x5BF7270", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004CA1")]
		[Address(RVA = "0x5BF7280", Offset = "0x5BF6280", VA = "0x5BF7280", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$MoveNext): clean
			int iVar1;
			SliderInputSettingElement pUVar2;
			InputField pUVar3;
			object pIVar4;
			GameObject pUVar5;
			bool bVar6;

			iVar1 = this.__1__state;
			if (iVar1 != 2) {
				if (iVar1 == 1) {
					this.__1__state = -1;
					pIVar4 = new WaitForEndOfFrame();
					this.__2__current = pIVar4;
					this.__1__state = 2;
				}
				else if (iVar1 == 0) {
					this.__1__state = -1;
					pIVar4 = new WaitForEndOfFrame();
					this.__2__current = pIVar4;
					this.__1__state = 1;
				}
				else {
				}
				return bVar6;
			}
			pUVar2 = this.__4__this;
			this.__1__state = -1;
			if (((pUVar2 != null) &&(pUVar3 = pUVar2._inputField, pUVar3 != null)) &&(pUVar5 = pUVar3.gameObject, pUVar5 != null)) {
				pUVar5.SetActive(false);
				pUVar3 = pUVar2._inputField;
				if ((pUVar3 != null) &&(pUVar5 = pUVar3.gameObject, pUVar5 != null)) {
					pUVar5.SetActive(true);
					pUVar2._fixedInputField = true;
					return false;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004CA3")]
		[Address(RVA = "0x5BF73D0", Offset = "0x5BF63D0", VA = "0x5BF73D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40027CD")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x40027CE")]
	[FieldOffset(Offset = "0x40")]
	protected InputField _inputField;

	[Token(Token = "0x40027CF")]
	[FieldOffset(Offset = "0x48")]
	protected int _inputFontSizeOffset;

	[Token(Token = "0x40027D0")]
	[FieldOffset(Offset = "0x50")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x40027D1")]
	[FieldOffset(Offset = "0x58")]
	protected bool _fixedInputField;

	[Token(Token = "0x17000D52")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C91")]
		[Address(RVA = "0x5BF6000", Offset = "0x5BF5000", VA = "0x5BF6000", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547cb0 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547cb0 = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(3);
			__this_00.Add(2);
			return __this_00;
		}
	}

	[Token(Token = "0x6004C92")]
	[Address(RVA = "0x5BF60A0", Offset = "0x5BF50A0", VA = "0x5BF60A0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int decimalPlaces)
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$Setup): 47 lines keep C-only constructs
		Slider* targetAddress;
		InputField* targetAddress_00;
		byte bVar1;
		UnityEngine_Events_UnityEvent_float__o __this_00;
		InputField.EndEditEvent __this_01;
		String panel;
		ColorBlock value;
		int iVar2;
		NumberFormatInfo pSVar3;
		Transform pUVar4;
		Slider pUVar5;
		LayoutElement pUVar6;
		UnityAction<T0> pUVar7;
		InputField pUVar8;
		Text pUVar9;
		InputField.OnChangeEvent __this_02;
		Image pUVar10;
		SliderInputSettingElement.d__9<WaitAndFixInputField> __this_03;
		uint in_register_0000008c;
		MethodInfo method_00;
		float value_00;
		Color UVar11;
		ColorBlock local_88;

		method_00 = (MethodInfo)CONCAT44(in_register_0000008c, decimalPlaces);
		pSVar3 = new NumberFormatInfo();
		this._formatInfo = pSVar3;
		pSVar3 = this._formatInfo;
		if (pSVar3 == null) goto label_05cf6b30;
		pSVar3.NumberDecimalDigits = decimalPlaces;
		pUVar4 = this.transform;
		if (pUVar4 == null) goto label_05cf6b30;
		pUVar4 = pUVar4.Find("Slider");
		if (pUVar4 == null) goto label_05cf6b30;
		pUVar5 = pUVar4.GetComponent<Slider>();
		targetAddress = &this._slider;
		this._slider = pUVar5;
		iVar2 = SettingsUtil.GetSettingType(setting);
		this._settingType = iVar2;
		if (iVar2 == 3) {
			if (*targetAddress == null) goto label_05cf6b30;
			(*targetAddress).wholeNumbers = false;
			if (setting == null) goto label_05cf6b30;
			bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting)) ) {
	label_05cf6b35: ;
				throw new InvalidCastException();
			}
			if (*targetAddress == null) goto label_05cf6b30;
			(*targetAddress).minValue = *(float)&(*(ulong)((sbyte)setting + 0x20));
			bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting)) ) goto label_05cf6b35;
			pUVar5 = *targetAddress;
			if (pUVar5 == null) goto label_05cf6b30;
			value_00 = *(float)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4);
	label_05cf6478: ;
			pUVar5.maxValue = value_00;
		}
		else if (iVar2 == 2) {
			if (*targetAddress == null) goto label_05cf6b30;
			(*targetAddress).wholeNumbers = true;
			if (setting == null) goto label_05cf6b30;
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf6b35;
			if (*targetAddress == null) goto label_05cf6b30;
			(*targetAddress).minValue = (float)*(int)&(*(ulong)((sbyte)setting + 0x20));
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf6b35;
			pUVar5 = *targetAddress;
			if (pUVar5 == null) goto label_05cf6b30;
			value_00 = (float)*(int)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4);
			goto label_05cf6478;
		}
		if (*targetAddress == null) goto label_05cf6b30;
		pUVar6 = (*targetAddress).GetComponent<LayoutElement>();
		if (pUVar6 == null) goto label_05cf6b30;
		pUVar6.set_preferredWidth(sliderWidth);
		if (*targetAddress == null) goto label_05cf6b30;
		pUVar6 = (*targetAddress).GetComponent<LayoutElement>();
		if (pUVar6 == null) goto label_05cf6b30;
		pUVar6.set_preferredHeight(sliderHeight);
		if (*targetAddress == null) goto label_05cf6b30;
		__this_00 = (UnityEngine_Events_UnityEvent_float__o)((*targetAddress).fields).m_OnValueChanged;
		pUVar7 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_0);
		if (__this_00 == null) goto label_05cf6b30;
		__this_00.AddListener(pUVar7);
		pUVar4 = this.transform;
		if (pUVar4 == null) goto label_05cf6b30;
		pUVar4 = pUVar4.Find("InputField");
		if (pUVar4 == null) goto label_05cf6b30;
		pUVar8 = pUVar4.GetComponent<InputField>();
		targetAddress_00 = &this._inputField;
		this._inputField = pUVar8;
		pUVar8 = this._inputField;
		if (pUVar8 == null) goto label_05cf6b30;
		pUVar4 = pUVar8.transform;
		if (pUVar4 == null) goto label_05cf6b30;
		pUVar4 = pUVar4.Find("Text");
		if (pUVar4 == null) goto label_05cf6b30;
		pUVar9 = pUVar4.GetComponent<Text>();
		if ((style == null) || (pUVar9 == null)) goto label_05cf6b30;
		pUVar9.fontSize = style.FontSize + this._inputFontSizeOffset;
		pUVar8 = this._inputField;
		if (pUVar8 == null) goto label_05cf6b30;
		pUVar6 = pUVar8.GetComponent<LayoutElement>();
		if (pUVar6 == null) goto label_05cf6b30;
		pUVar6.set_preferredWidth(inputWidth);
		if (*targetAddress_00 == null) goto label_05cf6b30;
		pUVar6 = (*targetAddress_00).GetComponent<LayoutElement>();
		if (pUVar6 == null) goto label_05cf6b30;
		pUVar6.set_preferredHeight(inputHeight);
		iVar2 = SettingsUtil.GetSettingType(setting);
		this._settingType = iVar2;
		if (iVar2 == 2) {
			pUVar8 = *targetAddress_00;
			if (pUVar8 == null) goto label_05cf6b30;
			iVar2 = 2;
	label_05cf66ca: ;
			pUVar8.contentType = iVar2;
		}
		else if (iVar2 == 3) {
			pUVar8 = *targetAddress_00;
			if (pUVar8 == null) goto label_05cf6b30;
			iVar2 = 3;
			goto label_05cf66ca;
		}
		if (*targetAddress_00 != null) {
			__this_02 = (*targetAddress_00).onValueChange;
			pUVar7 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_1);
			if (__this_02 != null) {
				__this_02.AddListener(pUVar7);
				if (*targetAddress_00 != null) {
					__this_01 = ((*targetAddress_00).fields).m_OnDidEndEdit;
					pUVar7 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_2);
					if (__this_01 != null) {
						__this_01.AddListener(pUVar7);
						this.Setup(setting, style, title, tooltip);
						pUVar5 = this._slider;
						if (pUVar5 != null) {
							pUVar4 = pUVar5.transform ;
							if (pUVar4 != null) {
								pUVar4 = pUVar4.Find("Background");
								if (pUVar4 != null) {
									pUVar10 = pUVar4.GetComponent<Image>();
									panel = style.ThemePanel;
									UVar11 = UIManager.GetThemeColor(panel, "DefaultSetting", "SliderBackgroundColor", "DefaultPanel");
									if (pUVar10 != null) {
										pUVar10.set_color(UVar11);
										if (*targetAddress != null) {
											pUVar4 = (*targetAddress).transform;
											if (pUVar4 != null) {
												pUVar4 = pUVar4.Find("Fill Area/Fill");
												if (pUVar4 != null) {
													pUVar10 = pUVar4.GetComponent<Image>();
													UVar11 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "SliderFillColor", "DefaultPanel");
													if (pUVar10 != null) {
														pUVar10.set_color(UVar11);
														if (*targetAddress != null) {
															pUVar4 = (*targetAddress).transform;
															if (pUVar4 != null) {
																pUVar4 = pUVar4.Find("Handle Slide Area/Handle");
																if (pUVar4 != null) {
																	pUVar10 = pUVar4.GetComponent<Image>();
																	UVar11 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "SliderHandleColor", "DefaultPanel");
																	if (pUVar10 != null) {
																		pUVar10.set_color(UVar11);
																		pUVar8 = *targetAddress_00;
																		local_88 = UIManager.GetThemeColorBlock(style.ThemePanel, "DefaultSetting", "Input", "DefaultPanel");
																		if (pUVar8 != null) {
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
																			pUVar8.colors = value;
																			if (*targetAddress_00 != null) {
																				pUVar4 = (*targetAddress_00).transform;
																				if (pUVar4 != null) {
																					pUVar4 = pUVar4.Find("Text");
																					if (pUVar4 != null) {
																						pUVar9 = pUVar4.GetComponent<Text>();
																						UVar11 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "InputTextColor", "DefaultPanel");
																						if (pUVar9 != null) {
																							pUVar9.set_color(UVar11);
																							pUVar8 = *targetAddress_00;
																							UVar11 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "InputSelectionColor", "DefaultPanel");
																							if (pUVar8 != null) {
																								pUVar8.selectionColor = UVar11;
																								__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(SliderInputSettingElement.d__9<WaitAndFixInputField>));
																								__this_03 = new Object();
																								__this_03.__1__state = 0;
																								__this_03.__4__this = this;
																								this.StartCoroutine((IEnumerator)__this_03);
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
	label_05cf6b30: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C93")]
	[Address(RVA = "0x5BF6BB0", Offset = "0x5BF5BB0", VA = "0x5BF6BB0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$OnEnable): clean
		InputField pUVar1;
		bool bVar2;
		GameObject pUVar3;

		pUVar1 = this._inputField;
		bVar2 = ((Object)pUVar1 != null);
		if ((bVar2) && (this._fixedInputField == false)) {
			pUVar1 = this._inputField;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.gameObject;
				if (pUVar3 != null) {
					pUVar3.SetActive(false);
					pUVar1 = this._inputField;
					if (pUVar1 != null) {
						pUVar3 = pUVar1.gameObject;
						if (pUVar3 != null) {
							pUVar3.SetActive(true);
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6004C94")]
	[Address(RVA = "0x5BF6B40", Offset = "0x5BF5B40", VA = "0x5BF6B40")]
	[IteratorStateMachine(typeof(_003CWaitAndFixInputField_003Ed__9))]
	private IEnumerator WaitAndFixInputField()
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$WaitAndFixInputField): clean
		SliderInputSettingElement.d__9<WaitAndFixInputField> __this_00;

		__this_00 = new SliderInputSettingElement.d__9<WaitAndFixInputField>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004C95")]
	[Address(RVA = "0x5BF6C80", Offset = "0x5BF5C80", VA = "0x5BF6C80")]
	protected void OnSliderValueChanged(float value)
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$OnSliderValueChanged): 6 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		Settings_TypedSetting_float__o __this_00;
		Settings_TypedSetting_int__o __this_01;

		iVar2 = this._settingType;
		if (iVar2 == 2) {
			__this_01 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_01 != null) {
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this_01.klass._2).typeHierarchyDepth) &&((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(IntSetting))) {
					__this_01.Value = (int)value;
					this.SyncInput();
					return;
				}
	label_05cf6d87: ;
				throw new InvalidCastException();
			}
	label_05cf6d8c: ;
			throw new NullReferenceException();
		}
		if (iVar2 == 3) {
			__this_00 = (Settings_TypedSetting_float__o)this._setting;
			if (__this_00 == null) goto label_05cf6d8c;
			bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) goto label_05cf6d87;
			__this_00.Value = value;
		}
		this.SyncInput();
		return;
	}

	[Token(Token = "0x6004C96")]
	[Address(RVA = "0x5BF6F00", Offset = "0x5BF5F00", VA = "0x5BF6F00")]
	protected void OnInputValueChanged(string value)
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$OnInputValueChanged): 6 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		int iVar3;
		Slider pUVar4;
		Settings_TypedSetting_float__o __this_00;
		Settings_TypedSetting_int__o __this_01;
		bool bVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		int iStack_18;
		float fStack_14;

		bVar5 = (value == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar5) {
			iVar3 = this._settingType;
			if (iVar3 == 2) {
				bVar5 = Int32.TryParse(value, ref iStack_18);
				if (bVar5) {
					pUVar4 = this._slider;
					if ((pUVar4 != null) &&(__this_01 = (Settings_TypedSetting_int__o)this._setting, __this_01 != null)) {
						bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
						if ((bVar2 <= (__this_01.klass._2).typeHierarchyDepth) &&((__this_01.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(IntSetting))) {
							fVar1 = pUVar4.m_MinValue;
							fVar7 = pUVar4.m_MaxValue;
							fVar8 = (float)iStack_18;
							if (fVar8 <= fVar7) {
								fVar7 = fVar8;
							}
							uVar6 = -(uint)(fVar1 <= fVar8);
							__this_01.Value = (int)(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6);
							return;
						}
	label_05cf70cf: ;
						throw new InvalidCastException();
					}
	label_05cf70ca: ;
					throw new NullReferenceException();
				}
			}
			else if (iVar3 == 3) {
				bVar5 = Single.TryParse(value, ref fStack_14);
				if (bVar5) {
					pUVar4 = this._slider;
					if ((pUVar4 == null) ||(__this_00 = (Settings_TypedSetting_float__o)this._setting, __this_00 == null)) goto label_05cf70ca;
					bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(FloatSetting))) goto label_05cf70cf;
					fVar1 = pUVar4.m_MinValue;
					fVar7 = pUVar4.m_MaxValue;
					if (fStack_14 <= fVar7) {
						fVar7 = fStack_14;
					}
					uVar6 = -(uint)(fVar1 <= fStack_14);
					__this_00.Value = (float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004C97")]
	[Address(RVA = "0x5BF70E0", Offset = "0x5BF60E0", VA = "0x5BF70E0")]
	protected void OnInputFinishEditing(string value)
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$OnInputFinishEditing): clean
		this.SyncElement();
		return;
	}

	[Token(Token = "0x6004C98")]
	[Address(RVA = "0x5BF7100", Offset = "0x5BF6100", VA = "0x5BF7100")]
	protected void SyncSlider()
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$SyncSlider): 2 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseSetting pSVar3;
		Slider pUVar4;
		float fVar5;

		iVar2 = this._settingType;
		if (iVar2 == 2) {
			pSVar3 = this._setting;
			if (pSVar3 != null) {
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf71f6;
				pUVar4 = this._slider;
				if (pUVar4 != null) {
					fVar5 = (float)*(int)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
					goto label_05cf71dd;
				}
			}
		}
		else {
			if (iVar2 != 3) {
				return;
			}
			pSVar3 = this._setting;
			if (pSVar3 != null) {
				bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting) )) {
	label_05cf71f6: ;
					throw new InvalidCastException();
				}
				pUVar4 = this._slider;
				if (pUVar4 != null) {
					fVar5 = *(float)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
	label_05cf71dd: ;
					pUVar4.set_value(fVar5);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C99")]
	[Address(RVA = "0x5BF6DA0", Offset = "0x5BF5DA0", VA = "0x5BF6DA0")]
	protected void SyncInput()
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$SyncInput): 7 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseSetting pSVar3;
		NumberFormatInfo provider;
		ulong in_RAX;
		object arg0;
		String value;
		InputField __this_00;
		ulong uStack_18;

		uStack_18 = in_RAX;
		iVar2 = this._settingType;
		if (iVar2 == 2) {
			pSVar3 = this._setting;
			if (pSVar3 != null) {
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf6ef1;
				__this_00 = this._inputField;
				uStack_18 = CONCAT44(*(uint)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4), (undefined4)uStack_18);
				value = (((long)&uStack_18 + 4)).ToString();
				if (__this_00 != null) goto label_05cf6edf;
			}
		}
		else {
			if (iVar2 != 3) {
				return;
			}
			pSVar3 = this._setting;
			if (pSVar3 != null) {
				bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting) )) {
	label_05cf6ef1: ;
					throw new InvalidCastException();
				}
				__this_00 = this._inputField;
				provider = this._formatInfo;
				uStack_18 = CONCAT44(uStack_18._4_4_, *(uint)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4));
				arg0 = (object)uStack_18;
				value = String.Format((IFormatProvider)provider, "{0:N}", arg0);
				if (__this_00 != null) {
	label_05cf6edf: ;
					__this_00.text = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C9A")]
	[Address(RVA = "0x5BF7200", Offset = "0x5BF6200", VA = "0x5BF7200", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$SyncElement): clean
		this.SyncSlider();
		this.SyncInput();
		return;
	}

	[Token(Token = "0x6004C9B")]
	[Address(RVA = "0x5BF7220", Offset = "0x5BF6220", VA = "0x5BF7220")]
	public SliderInputSettingElement()
	{
		// Lifted from source/cpp/UI/SliderInputSettingElement.c (UI.SliderInputSettingElement$$.ctor): clean
		this._inputFontSizeOffset = -4;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/SliderInputSettingElement.c.

	// UI.SliderInputSettingElement$$<Setup>b__7_0: clean
	private void Setup_b__7_0(float value)
	{
		this.OnSliderValueChanged(value);
		return;
	}

	// UI.SliderInputSettingElement$$<Setup>b__7_1: clean
	private void Setup_b__7_1(String value)
	{
		this.OnInputValueChanged(value);
		return;
	}

	// UI.SliderInputSettingElement$$<Setup>b__7_2: clean
	private void Setup_b__7_2(String value)
	{
		this.SyncElement();
		return;
	}
}
