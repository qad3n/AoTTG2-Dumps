// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IconPickSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F2")]
internal class IconPickSettingElement : BaseSettingElement
{
	[Token(Token = "0x400279D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x400279E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x400279F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected int[] _intOptionValues;

	[Token(Token = "0x17000D4B")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C50")]
		[Address(RVA = "0x5BF0B20", Offset = "0x5BEFB20", VA = "0x5BF0B20", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/IconPickSettingElement.c (UI.IconPickSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c8c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c8c = true;
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

	[Token(Token = "0x6004C51")]
	[Address(RVA = "0x5BF0BC0", Offset = "0x5BEFBC0", VA = "0x5BF0BC0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string[] iconPaths, string[] tooltips, IconPickPopup iconPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onSelect, TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/IconPickSettingElement.c (UI.IconPickSettingElement$$Setup): 6 lines keep C-only constructs
		String[]* targetAddress;
		Text* targetAddress_00;
		UnityEvent __this_00;
		String panel;
		ColorBlock value;
		IconPickSettingElement.c__DisplayClass5_0 __this_01;
		Transform pUVar1;
		GameObject __this_02;
		LayoutElement pUVar2;
		Button pUVar3;
		UnityAction __this_03;
		Text pUVar4;
		Color UVar5;
		ColorBlock local_88;

		__this_01 = new IconPickSettingElement.c__DisplayClass5_0();
		if (__this_01 != null) {
			__this_01.iconPickPopup = iconPickPopup;
			__this_01.__4__this = this;
			targetAddress = &__this_01.options;
			__this_01.options = options;
			__this_01.iconPaths = iconPaths;
			__this_01.tooltips = tooltips;
			__this_01.onSelect = onSelect;
			__this_01.tooltipPopup = tooltipPopup;
			this._intOptionValues = intOptionValues;
			pUVar1 = this.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("Button");
				if (pUVar1 != null) {
					__this_02 = pUVar1.gameObject ;
					if (0.0 < elementWidth) {
						if (__this_02 == null) goto label_05cf1066;
						pUVar2 = __this_02.GetComponent<LayoutElement>();
						if (pUVar2 == null) goto label_05cf1066;
						pUVar2.set_preferredWidth(elementWidth);
					}
					if (0.0 < elementHeight) {
						if (__this_02 == null) goto label_05cf1066;
						pUVar2 = __this_02.GetComponent<LayoutElement>();
						if (pUVar2 == null) goto label_05cf1066;
						pUVar2.set_preferredHeight(elementHeight);
					}
					this._options = *targetAddress;
					if (__this_02 != null) {
						pUVar3 = __this_02.GetComponent<Button>();
						if (pUVar3 != null) {
							__this_00 = (UnityEvent)pUVar3.m_OnClick;
							__this_03 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_IconPickSettingElement_c__DisplayClass5_0_Setup_b__0);
							if (__this_00 != null) {
								__this_00.AddListener(__this_03);
								pUVar3 = __this_02.GetComponent<Button>() ;
								if (style != null) {
									panel = style.ThemePanel;
									local_88 = UIManager.GetThemeColorBlock(panel, "DefaultButton", "", "DefaultPanel");
									if (pUVar3 != null) {
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
										pUVar3.colors = value;
										pUVar1 = __this_02.transform;
										if (pUVar1 != null) {
											pUVar1 = pUVar1.Find("Text");
											if (pUVar1 != null) {
												pUVar4 = pUVar1.GetComponent<Text>();
												targetAddress_00 = &this._label;
												this._label = pUVar4;
												pUVar4 = this._label;
												if (pUVar4 != null) {
													pUVar4.fontSize = style.FontSize;
													pUVar4 = *targetAddress_00;
													UVar5 = UIManager.GetThemeColor(style.ThemePanel, "DefaultButton", "TextColor", "DefaultPanel");
													if (pUVar4 != null) {
														pUVar4.set_color(UVar5);
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
					}
				}
			}
		}
	label_05cf1066: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C52")]
	[Address(RVA = "0x5BF1080", Offset = "0x5BF0080", VA = "0x5BF1080", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/IconPickSettingElement.c (UI.IconPickSettingElement$$SyncElement): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseSetting pSVar3;
		Text pUVar4;
		Settings_TypedSetting_int__o __this_00;
		Int32[] pSVar5;
		uint value;
		String[] pSVar6;
		int value_00;

		iVar2 = this._settingType;
		if (iVar2 != 2) {
			if (iVar2 != 4) {
				return;
			}
			pSVar3 = this._setting;
			if (pSVar3 != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				pUVar4 = this._label;
				if (pUVar4 != null) {
					pUVar4.set_text((*(ulong)((sbyte)pSVar3 + 0x20)));
					return;
				}
			}
			goto label_05cf1231;
		}
		__this_00 = (Settings_TypedSetting_int__o)this._setting;
		if (__this_00 == null) goto label_05cf1231;
		bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting))) {
			throw new InvalidCastException();
		}
		pSVar5 = this._intOptionValues;
		value = __this_00._value;
		if (pSVar5 != null) {
			value = Array.IndexOf<int>(pSVar5, value) ;
		}
		if ((int)value < 0) {
	label_05cf11cc: ;
			pSVar5 = this._intOptionValues;
			value = 0;
			value_00 = 0;
			if (pSVar5 != null) {
				if ((int)pSVar5.Length == 0) goto label_05cf1243;
				value_00 = pSVar5[0];
			}
			__this_00.Value = value_00;
			pSVar6 = this._options;
			if (pSVar6 == null) goto label_05cf1231;
		}
		else {
			pSVar6 = this._options;
			if (pSVar6 == null) goto label_05cf1231;
			if ((int)pSVar6.Length <= (int)value) goto label_05cf11cc;
		}
		if ((uint)pSVar6.Length <= value) {
	label_05cf1243: ;
			throw new IndexOutOfRangeException();
		}
		pUVar4 = this._label;
		if (pUVar4 != null) {
			pUVar4.set_text(pSVar6[value]);
			return;
		}
	label_05cf1231: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C53")]
	[Address(RVA = "0x5BF1250", Offset = "0x5BF0250", VA = "0x5BF1250")]
	public IconPickSettingElement()
	{
		// Lifted from source/cpp/UI/IconPickSettingElement.c (UI.IconPickSettingElement$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/IconPickSettingElement.c.

	// UI.IconPickSettingElement.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// UI.IconPickSettingElement.<>c__DisplayClass5_0$$<Setup>b__0: clean
	private void c__DisplayClass5_0__Setup_b__0()
	{
		IconPickSettingElement pUVar1;
		IconPickPopup __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = this.iconPickPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pUVar1._setting, pUVar1._label, this.options, this.iconPaths, this.tooltips, this.onSelect, this.tooltipPopup, pUVar1._intOptionValues);
		return;
	}
}
