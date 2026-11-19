// ==================== AoTTG2 cross-reference ====================
// Type: UI.ToggleGroupSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ToggleGroupSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleGroupSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007FF")]
internal class ToggleGroupSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027DA")]
	[FieldOffset(Offset = "0x38")]
	protected ToggleGroup _toggleGroup;

	[Token(Token = "0x40027DB")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x40027DC")]
	[FieldOffset(Offset = "0x48")]
	protected string[] _options;

	[Token(Token = "0x40027DD")]
	[FieldOffset(Offset = "0x50")]
	protected List<Toggle> _toggles;

	[Token(Token = "0x40027DE")]
	[FieldOffset(Offset = "0x58")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000D56")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CAC")]
		[Address(RVA = "0x5BF8170", Offset = "0x5BF7170", VA = "0x5BF8170", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547cbe == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547cbe = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(4);
			__this_00.Add(2);
			return __this_00;
		}
	}

	[Token(Token = "0x6004CAD")]
	[Address(RVA = "0x5BF8210", Offset = "0x5BF7210", VA = "0x5BF8210")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight)
	{
		// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$Setup): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<Toggle> __this_00;
		Toggle[] pUVar3;
		Transform pUVar5;
		GameObject pUVar6;
		ToggleGroup pUVar7;
		ulong uVar8;
		Toggle item;
		LayoutElement pUVar9;
		Il2CppClass klass;
		ArgumentException __this_01;
		String message;
		MethodInfo pMVar10;
		ulong uVar11;

		if (options != null) {
			if (options.Length == 0) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
				message = il2cpp_codegen_get_runtime_metadata(&"ToggleGroup cannot have 0 options.");
				__this_01 = new ArgumentException(message);
				pMVar10 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_Setup);
				throw (object)__this_01;
			}
			this._options = options;
			pUVar5 = this.transform;
			if (pUVar5 != null) {
				pUVar5 = pUVar5.Find("Options");
				if (pUVar5 != null) {
					pUVar6 = pUVar5.gameObject;
					this._optionsPanel = pUVar6;
					pUVar6 = this._optionsPanel;
					if (pUVar6 != null) {
						pUVar7 = pUVar6.GetComponent<ToggleGroup>();
						this._toggleGroup = pUVar7;
						if (0 < (int)options.Length) {
							uVar8 = options.Length & 0xffffffff;
							uVar11 = 0;
							do {
								if (uVar8 <= uVar11) {
									throw new IndexOutOfRangeException();
								}
								__this_00 = this._toggles;
								item = this.CreateOptionToggle(options[uVar11], (int32_t)uVar11, style, elementWidth, elementHeight);
								if (__this_00 == null) goto label_05cf848a;
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pUVar3 = __this_00._items;
								if (pUVar3 == null) goto label_05cf848a;
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pUVar3.Length) {
									__this_00._size = uVar2 + 1;
									pUVar3[(int)uVar2] = item;
								}
								else {
									__this_00.AddWithResize((object)item);
								}
								uVar11 = uVar11 + 1;
								uVar2 = (uint)options.Length;
								uVar8 = (ulong)uVar2;
							} while ((long)uVar11 < (long)(int)uVar2);
						}
						pUVar6 = this.gameObject;
						if (pUVar6 != null) {
							pUVar5 = pUVar6.transform;
							if (pUVar5 != null) {
								pUVar5 = pUVar5.Find("Label");
								if (pUVar5 != null) {
									pUVar9 = pUVar5.GetComponent<LayoutElement>();
									if (pUVar9 != null) {
										pUVar9.set_preferredHeight(elementHeight);
										this.Setup(setting, style, title, tooltip);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05cf848a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CAE")]
	[Address(RVA = "0x5BF84E0", Offset = "0x5BF74E0", VA = "0x5BF84E0")]
	protected Toggle CreateOptionToggle(string option, int index, ElementStyle style, float width, float height)
	{
		// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$CreateOptionToggle): 7 lines keep C-only constructs
		float fVar1;
		int value;
		String pSVar2;
		UnityEngine_Events_UnityEvent_bool__o __this_00;
		Vector2 value_00;
		ColorBlock value_01;
		ToggleGroupSettingElement.c__DisplayClass8_0 __this_01;
		GameObject root;
		Transform pUVar3;
		Transform parent;
		Text pUVar4;
		GameObject pUVar5;
		LayoutElement __this_02;
		RectTransform __this_03;
		Toggle __this_04;
		UnityAction<T0> call;
		Image pUVar6;
		String* targetAddress;
		Color UVar7;
		ColorBlock local_88;

		__this_01 = new ToggleGroupSettingElement.c__DisplayClass8_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			targetAddress = &__this_01.option;
			__this_01.option = option;
			__this_01.index = index;
			pSVar2 = ResourcePaths.UI;
			root = ResourceManager.InstantiateAsset<GameObject>(pSVar2, "Prefabs/Elements/ToggleGroupOption", false, false);
			LanguageFonts.Localize(root);
			if (root != null) {
				pUVar3 = root.transform;
				pUVar5 = this._optionsPanel;
				if (pUVar5 != null) {
					parent = pUVar5.transform;
					if (pUVar3 != null) {
						pUVar3.SetParent(parent, false);
						pUVar3 = root.transform;
						if (pUVar3 != null) {
							pUVar3 = pUVar3.Find("Label");
							if (pUVar3 != null) {
								pUVar4 = pUVar3.GetComponent<Text>();
								if (style != null) {
									pSVar2 = style.ThemePanel;
									UVar7 = UIManager.GetThemeColor(pSVar2, "DefaultSetting", "TextColor", "DefaultPanel");
									if (pUVar4 != null) {
										pUVar4.set_color(UVar7);
										pUVar3 = root.transform;
										if (pUVar3 != null) {
											pUVar3 = pUVar3.Find("Label");
											if (pUVar3 != null) {
												pUVar5 = pUVar3.gameObject;
												pSVar2 = *targetAddress;
												value = style.FontSize;
												if (pUVar5 != null) {
													pUVar4 = pUVar5.GetComponent<Text>();
													if (pUVar4 != null) {
														pUVar4.set_text(pSVar2);
														pUVar4.fontSize = value;
														pUVar3 = root.transform;
														if (pUVar3 != null) {
															pUVar3 = pUVar3.Find("Background");
															if (pUVar3 != null) {
																__this_02 = pUVar3.GetComponent<LayoutElement>();
																if (__this_02 != null) {
																	pUVar3 = __this_02.transform;
																	if (pUVar3 != null) {
																		pUVar3 = pUVar3.Find("Checkmark");
																		if (pUVar3 != null) {
																			__this_03 = pUVar3.GetComponent<RectTransform>();
																			__this_02.set_preferredWidth(width);
																			__this_02.set_preferredHeight(height);
																			if (__this_03 != null) {
																				fVar1 = this._checkMarkSizeMultiplier;
																				value_00.y = height * fVar1;
																				value_00.x = width * fVar1;
																				__this_03.sizeDelta = value_00;
																				__this_04 = root.GetComponent<Toggle>();
																				if (__this_04 != null) {
																					__this_04.group = this._toggleGroup;
																					__this_04.isOn = false;
																					__this_00 = (UnityEngine_Events_UnityEvent_bool__o)__this_04.onValueChanged;
																					call = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<bool>));
																					call = new UnityAction<bool>((object)__this_01, (intptr_t) MethodInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0_CreateOptionToggle_b__0);
																					if (__this_00 != null) {
																						__this_00.AddListener(call);
																						local_88 = UIManager.GetThemeColorBlock(style.ThemePanel, "DefaultSetting", "Toggle", "DefaultPanel");
																						value_01.m_NormalColor.b = local_88.m_NormalColor.b;
																						value_01.m_NormalColor.a = local_88.m_NormalColor.a;
																						value_01.m_NormalColor.r = local_88.m_NormalColor.r;
																						value_01.m_NormalColor.g = local_88.m_NormalColor.g;
																						value_01.m_HighlightedColor.r = local_88.m_HighlightedColor.r;
																						value_01.m_HighlightedColor.g = local_88.m_HighlightedColor.g;
																						value_01.m_HighlightedColor.b = local_88.m_HighlightedColor.b;
																						value_01.m_HighlightedColor.a = local_88.m_HighlightedColor.a;
																						value_01.m_PressedColor.r = local_88.m_PressedColor.r;
																						value_01.m_PressedColor.g = local_88.m_PressedColor.g;
																						value_01.m_PressedColor.b = local_88.m_PressedColor.b;
																						value_01.m_PressedColor.a = local_88.m_PressedColor.a;
																						value_01.m_SelectedColor.r = local_88.m_SelectedColor.r;
																						value_01.m_SelectedColor.g = local_88.m_SelectedColor.g;
																						value_01.m_SelectedColor.b = local_88.m_SelectedColor.b;
																						value_01.m_SelectedColor.a = local_88.m_SelectedColor.a;
																						value_01.m_DisabledColor.r = local_88.m_DisabledColor.r;
																						value_01.m_DisabledColor.g = local_88.m_DisabledColor.g;
																						value_01.m_DisabledColor.b = local_88.m_DisabledColor.b;
																						value_01.m_DisabledColor.a = local_88.m_DisabledColor.a;
																						value_01.m_ColorMultiplier = local_88.m_ColorMultiplier;
																						value_01.m_FadeDuration = local_88.m_FadeDuration;
																						__this_04.colors = value_01;
																						pUVar6 = __this_03.GetComponent<Image>();
																						UVar7 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "ToggleFilledColor", "DefaultPanel");
																						if (pUVar6 != null) {
																							pUVar6.set_color(UVar7);
																							return __this_04;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CAF")]
	[Address(RVA = "0x5BF8B30", Offset = "0x5BF7B30", VA = "0x5BF8B30")]
	protected void OnValueChanged(string option, int index, bool value)
	{
		// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$OnValueChanged): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		TypedSetting<T> __this_00;
		Settings_TypedSetting_int__o __this_01;

		if (!value) {
			return;
		}
		iVar2 = this._settingType;
		if (iVar2 == 2) {
			__this_01 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_01 == null) goto label_05cf8c4a;
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_01.klass._2).typeHierarchyDepth) &&((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(IntSetting)) ) {
				__this_01.Value = index;
				return;
			}
		}
		else {
			if (iVar2 != 4) {
				return;
			}
			__this_00 = (TypedSetting<T>)this._setting;
			if (__this_00 == null) {
	label_05cf8c4a: ;
				throw new NullReferenceException();
			}
			bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(StringSetting))) {
				__this_00.Value = (object)option;
				return;
			}
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004CB0")]
	[Address(RVA = "0x5BF8C50", Offset = "0x5BF7C50", VA = "0x5BF8C50", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$SyncElement): 2 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		ToggleGroup __this_00;
		BaseSetting pSVar3;
		int index;
		Toggle __this_01;
		List<Toggle> __this_02;

		__this_00 = this._toggleGroup;
		if (__this_00 != null) {
			__this_00.SetAllTogglesOff(true);
			iVar2 = this._settingType;
			if (iVar2 == 2) {
				pSVar3 = this._setting;
				if (pSVar3 == null) goto label_05cf8d94;
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) goto label_05cf8d99;
				__this_02 = this._toggles;
				if (__this_02 == null) goto label_05cf8d94;
				index = *(int)((long)&(*(ulong)((sbyte)pSVar3 + 0x18)) + 4);
			}
			else {
				if (iVar2 != 4) {
					return;
				}
				pSVar3 = this._setting;
				if (pSVar3 == null) goto label_05cf8d94;
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
	label_05cf8d99: ;
					throw new InvalidCastException();
				}
				index = this.FindOptionIndex((*(ulong)((sbyte)pSVar3 + 0x20)));
				__this_02 = this._toggles;
				if (__this_02 == null) goto label_05cf8d94;
			}
			__this_01 = __this_02.get_Item(index);
			if (__this_01 != null) {
				__this_01.isOn = true;
				return;
			}
		}
	label_05cf8d94: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CB1")]
	[Address(RVA = "0x5BF8DA0", Offset = "0x5BF7DA0", VA = "0x5BF8DA0")]
	private int FindOptionIndex(string option)
	{
		// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$FindOptionIndex): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		MethodInfo lastManagedFrame;
		ulong uVar4;

		pSVar3 = this._options;
		if (pSVar3 != null) {
			uVar4 = 0;
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((long)(int)uVar1 <= (long)uVar4) {
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
					__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
					paramName = il2cpp_codegen_get_runtime_metadata(&"Option not found");
					__this_00 = new ArgumentOutOfRangeException(paramName);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_FindOptionIndex);
					throw (object)__this_00;
				}
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				bVar2 = (pSVar3[uVar4] == option);
				if (bVar2) {
					return (int32_t)uVar4;
				}
				uVar4 = uVar4 + 1;
				pSVar3 = this._options;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CB2")]
	[Address(RVA = "0x5BF8E50", Offset = "0x5BF7E50", VA = "0x5BF8E50")]
	public ToggleGroupSettingElement()
	{
		// Lifted from source/cpp/UI/ToggleGroupSettingElement.c (UI.ToggleGroupSettingElement$$.ctor): clean
		List<Toggle> __this_00;

		__this_00 = new List<Toggle>();
		this._toggles = __this_00;
		this._checkMarkSizeMultiplier = 0.67;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ToggleGroupSettingElement.c.

	// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$.ctor: clean
	private void c__DisplayClass8_0__ctor()
	{
		base();
		return;
	}

	// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$<CreateOptionToggle>b__0: clean
	private void c__DisplayClass8_0__CreateOptionToggle_b__0(bool value)
	{
		ToggleGroupSettingElement __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnValueChanged(this.option, this.index, value);
		return;
	}
}
