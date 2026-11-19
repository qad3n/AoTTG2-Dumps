// ==================== AoTTG2 cross-reference ====================
// Type: UI.SliderSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SliderSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007FE")]
internal class SliderSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x40027D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected Text _valueLabel;

	[Token(Token = "0x40027D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x40027D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected float _interval;

	[Token(Token = "0x40027D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected UnityAction _onValueChanged;

	[Token(Token = "0x17000D55")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CA5")]
		[Address(RVA = "0x5BF7420", Offset = "0x5BF6420", VA = "0x5BF7420", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/SliderSettingElement.c (UI.SliderSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547cb9 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547cb9 = true;
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

	[Token(Token = "0x6004CA6")]
	[Address(RVA = "0x5BF74C0", Offset = "0x5BF64C0", VA = "0x5BF74C0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, int decimalPlaces, [Optional][DefaultParameterValue(0f)] float interval, [Optional] UnityAction onValueChanged)
	{
		// Lifted from source/cpp/UI/SliderSettingElement.c (UI.SliderSettingElement$$Setup): 41 lines keep C-only constructs
		Slider* targetAddress;
		Text* targetAddress_00;
		byte bVar1;
		UnityEngine_Events_UnityEvent_float__o __this_00;
		String panel;
		int iVar2;
		NumberFormatInfo pSVar3;
		Transform pUVar4;
		Slider pUVar5;
		Text pUVar6;
		LayoutElement pUVar7;
		UnityAction<T0> call;
		Image pUVar8;
		float value;
		Color UVar10;

		this._interval = interval;
		pSVar3 = new NumberFormatInfo();
		this._formatInfo = pSVar3;
		pSVar3 = this._formatInfo;
		if (pSVar3 == null) goto label_05cf7c8e;
		pSVar3.NumberDecimalDigits = decimalPlaces;
		pUVar4 = this.transform;
		if (pUVar4 == null) goto label_05cf7c8e;
		pUVar4 = pUVar4.Find("Slider");
		if (pUVar4 == null) goto label_05cf7c8e;
		pUVar5 = pUVar4.GetComponent<Slider>();
		targetAddress = &this._slider;
		this._slider = pUVar5;
		pUVar4 = this.transform;
		if (pUVar4 == null) goto label_05cf7c8e;
		pUVar4 = pUVar4.Find("Value");
		if (pUVar4 == null) goto label_05cf7c8e;
		pUVar6 = pUVar4.GetComponent<Text>();
		targetAddress_00 = &this._valueLabel;
		this._valueLabel = pUVar6;
		iVar2 = SettingsUtil.GetSettingType(setting);
		this._settingType = iVar2;
		if (iVar2 == 3) {
			if (*targetAddress == null) goto label_05cf7c8e;
			(*targetAddress).wholeNumbers = false;
			if (setting == null) goto label_05cf7c8e;
			bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting)) ) {
	label_05cf7c93: ;
				throw new InvalidCastException();
			}
			if (*targetAddress == null) goto label_05cf7c8e;
			(*targetAddress).minValue = *(float)&(*(ulong)((sbyte)setting + 0x20));
			bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting)) ) goto label_05cf7c93;
			pUVar5 = *targetAddress;
			if (pUVar5 == null) goto label_05cf7c8e;
			value = *(float)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4);
	label_05cf7896: ;
			pUVar5.maxValue = value;
		}
		else if (iVar2 == 2) {
			if (*targetAddress == null) goto label_05cf7c8e;
			(*targetAddress).wholeNumbers = true;
			if (setting == null) goto label_05cf7c8e;
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf7c93;
			if (*targetAddress == null) goto label_05cf7c8e;
			(*targetAddress).minValue = (float)*(int)&(*(ulong)((sbyte)setting + 0x20));
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf7c93;
			pUVar5 = *targetAddress;
			if (pUVar5 == null) goto label_05cf7c8e;
			value = (float)*(int)((long)&(*(ulong)((sbyte)setting + 0x20)) + 4);
			goto label_05cf7896;
		}
		if (*targetAddress != null) {
			pUVar7 = (*targetAddress).GetComponent<LayoutElement>();
			if (pUVar7 != null) {
				pUVar7.set_preferredWidth(elementWidth);
				if (*targetAddress != null) {
					pUVar7 = (*targetAddress).GetComponent<LayoutElement>() ;
					if (pUVar7 != null) {
						pUVar7.set_preferredHeight(elementHeight);
						if (*targetAddress != null) {
							__this_00 = (UnityEngine_Events_UnityEvent_float__o)((*targetAddress).fields).m_OnValueChanged;
							call = new UnityAction<float>((object)this, (intptr_t)MethodInfo_UI_SliderSettingElement_Setup_b__7_0);
							if (__this_00 != null) {
								__this_00.AddListener(call);
								if (style != null) {
									if (*targetAddress_00 != null) {
										(*targetAddress_00).fontSize = style.FontSize;
										if (*targetAddress_00 != null) {
											pUVar7 = (*targetAddress_00).GetComponent<LayoutElement>();
											if (pUVar7 != null) {
												pUVar7.set_minWidth(55.0);
												pUVar7.set_preferredWidth(55.0);
												if (*targetAddress_00 != null) {
													(*targetAddress_00).horizontalOverflow = 1;
													if (*targetAddress_00 != null) {
														(*targetAddress_00).verticalOverflow = 1;
														if (*targetAddress != null) {
															pUVar4 = (*targetAddress).transform;
															if (pUVar4 != null) {
																pUVar4 = pUVar4.Find("Background");
																if (pUVar4 != null) {
																	pUVar8 = pUVar4.GetComponent<Image>();
																	panel = style.ThemePanel;
																	UVar10 = UIManager.GetThemeColor(panel, "DefaultSetting", "SliderBackgroundColor", "DefaultPanel");
																	if (pUVar8 != null) {
																		pUVar8.set_color(UVar10);
																		if (*targetAddress != null) {
																			pUVar4 = (*targetAddress).transform;
																			if (pUVar4 != null) {
																				pUVar4 = pUVar4.Find("Fill Area/Fill");
																				if (pUVar4 != null) {
																					pUVar8 = pUVar4.GetComponent<Image>();
																					UVar10 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "SliderFillColor", "DefaultPanel");
																					if (pUVar8 != null) {
																						pUVar8.set_color(UVar10);
																						if (*targetAddress != null) {
																							pUVar4 = (*targetAddress).transform;
																							if (pUVar4 != null) {
																								pUVar4 = pUVar4.Find("Handle Slide Area/Handle");
																								if (pUVar4 != null) {
																									pUVar8 = pUVar4.GetComponent<Image>();
																									UVar10 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "SliderHandleColor", "DefaultPanel");
																									if (pUVar8 != null) {
																										pUVar8.set_color(UVar10);
																										pUVar6 = *targetAddress_00;
																										UVar10 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "TextColor", "DefaultPanel") ;
																										if (pUVar6 != null) {
																											pUVar6.set_color(UVar10);
																											this.Setup(setting, style, title, tooltip);
																											this._onValueChanged = onValueChanged;
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
				}
			}
		}
	label_05cf7c8e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CA7")]
	[Address(RVA = "0x5BF7CA0", Offset = "0x5BF6CA0", VA = "0x5BF7CA0")]
	protected void OnValueChanged(float value)
	{
		// Lifted from source/cpp/UI/SliderSettingElement.c (UI.SliderSettingElement$$OnValueChanged): 9 lines keep C-only constructs
		float pfVar1;
		byte bVar2;
		int iVar3;
		Slider pUVar4;
		Settings_TypedSetting_float__o __this_00;
		Settings_TypedSetting_int__o __this_01;
		UnityAction pUVar5;
		float fVar6;
		double dVar7;
		double local_10;

		fVar6 = this._interval;
		if (0.0 < fVar6) {
			pUVar4 = this._slider;
			if (pUVar4 == null) goto label_05cf7f2b;
			fVar6 = (value - pUVar4.m_MinValue) / fVar6;
			dVar7 = modf((double)fVar6, &local_10, method);
			if (0.0 <= fVar6) {
				if ((dVar7 != 0.5) || (NAN(dVar7))) {
					fVar6 = floorf(fVar6 + 0.5);
				}
				else {
					fVar6 = (float)local_10;
					if (((long)local_10 & 1U) != 0) {
						fVar6 = fVar6 + 1.0;
					}
				}
			}
			else if ((dVar7 != -0.5) || (NAN(dVar7))) {
				fVar6 = ceilf(fVar6 + -0.5);
			}
			else {
				fVar6 = (float)local_10;
				if (((long)local_10 & 1U) != 0) {
					fVar6 = fVar6 + -1.0;
				}
			}
			pUVar4 = this._slider;
			if (pUVar4 == null) goto label_05cf7f2b;
			value = fVar6 * this._interval + pUVar4.m_MinValue;
		}
		iVar3 = this._settingType;
		if (iVar3 == 2) {
			__this_01 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_01 == null) goto label_05cf7f2b;
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((__this_01.klass._2).typeHierarchyDepth < bVar2) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting)) ) {
	label_05cf7f30: ;
				throw new InvalidCastException();
			}
			method = (MethodInfo)(ulong)(uint)(int)value;
			__this_01.Value = (int)value;
		}
		else if (iVar3 == 3) {
			if ((0.99 <= value) && (value <= 1.01)) {
				pUVar4 = this._slider;
				if (pUVar4 == null) goto label_05cf7f2b;
				pUVar4.set_value(1.0);
				value = 1.0;
			}
			pUVar4 = this._slider;
			if (pUVar4 != null) {
				if (((value <= 0.01) && (-0.01 <= value)) &&(pfVar1 = &pUVar4.m_MinValue, *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
					pUVar4.set_value(0.0);
					value = 0.0;
				}
				__this_00 = (Settings_TypedSetting_float__o)this._setting;
				if (__this_00 != null) {
					bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(FloatSetting))) goto label_05cf7f30;
					method = MethodInfo_Settings_TypedSetting_float_set_Value;
					__this_00.Value = value;
					goto label_05cf7f01;
				}
			}
	label_05cf7f2b: ;
			throw new NullReferenceException();
		}
	label_05cf7f01: ;
		this.UpdateValueLabel();
		pUVar5 = this._onValueChanged;
		if (pUVar5 == null) {
			return;
		}
		(*(code)pUVar5.invoke_impl)(pUVar5.method_code,pUVar5.method);
		return;
	}

	[Token(Token = "0x6004CA8")]
	[Address(RVA = "0x5BF7F40", Offset = "0x5BF6F40", VA = "0x5BF7F40")]
	protected void UpdateValueLabel()
	{
		// Lifted from source/cpp/UI/SliderSettingElement.c (UI.SliderSettingElement$$UpdateValueLabel): 5 lines keep C-only constructs
		int iVar1;
		Slider pUVar2;
		NumberFormatInfo provider;
		ulong in_RAX;
		object arg0;
		String pSVar3;
		Text pUVar6;
		float fVar7;
		ulong local_18;

		local_18 = in_RAX;
		iVar1 = this._settingType;
		if (iVar1 == 2) {
			pUVar2 = this._slider;
			if (pUVar2 != null) {
				pUVar6 = this._valueLabel;
				fVar7 = pUVar2.get_value();
				local_18 = CONCAT44((int)fVar7, (undefined4)local_18);
				pSVar3 = (((long)&local_18 + 4)).ToString();
				if (pUVar6 != null) {
					goto label_05cf801f;
				}
			}
		}
		else {
			if (iVar1 != 3) {
				return;
			}
			pUVar2 = this._slider;
			if (pUVar2 != null) {
				pUVar6 = this._valueLabel;
				provider = this._formatInfo;
				fVar7 = pUVar2.get_value();
				local_18 = CONCAT44(local_18._4_4_, fVar7);
				arg0 = (object)local_18;
				pSVar3 = String.Format((IFormatProvider)provider, "{0:N}", arg0);
				if (pUVar6 != null) {
	label_05cf801f: ;
					pUVar6.set_text(pSVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CA9")]
	[Address(RVA = "0x5BF8040", Offset = "0x5BF7040", VA = "0x5BF8040", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/SliderSettingElement.c (UI.SliderSettingElement$$SyncElement): 3 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseSetting pSVar3;
		Slider pUVar4;
		float fVar5;

		iVar2 = this._settingType;
		if (iVar2 == 2) {
			pSVar3 = this._setting;
			if (pSVar3 == null) {
	label_05cf813e: ;
				throw new NullReferenceException();
			}
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) {
	label_05cf8139: ;
				throw new InvalidCastException();
			}
			pUVar4 = this._slider;
			if (pUVar4 == null) goto label_05cf813e;
			fVar5 = (float)*(int)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
		}
		else {
			if (iVar2 != 3) goto label_05cf8130;
			pSVar3 = this._setting;
			if (pSVar3 == null) goto label_05cf813e;
			bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(FloatSetting))) goto label_05cf8139;
			pUVar4 = this._slider;
			if (pUVar4 == null) goto label_05cf813e;
			fVar5 = *(float)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
		}
		method = (pUVar4.klass.vtable)._47_set_value.method;
		pUVar4.set_value(fVar5);
	label_05cf8130: ;
		this.UpdateValueLabel();
		return;
	}

	[Token(Token = "0x6004CAA")]
	[Address(RVA = "0x5BF8150", Offset = "0x5BF7150", VA = "0x5BF8150")]
	public SliderSettingElement()
	{
		// Lifted from source/cpp/UI/SliderSettingElement.c (UI.SliderSettingElement$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/SliderSettingElement.c.

	// UI.SliderSettingElement$$<Setup>b__7_0: clean
	private void Setup_b__7_0(float value)
	{
		this.OnValueChanged(value);
		return;
	}
}
