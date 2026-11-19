// ==================== AoTTG2 cross-reference ====================
// Type: UI.KeybindSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KeybindSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/KeybindSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F7")]
internal class KeybindSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027B4")]
	[FieldOffset(Offset = "0x38")]
	private List<Text> _buttonLabels;

	[Token(Token = "0x40027B5")]
	[FieldOffset(Offset = "0x40")]
	private KeybindPopup _keybindPopup;

	[Token(Token = "0x17000D4E")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C6F")]
		[Address(RVA = "0x5BF31E0", Offset = "0x5BF21E0", VA = "0x5BF31E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/KeybindSettingElement.c (UI.KeybindSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c9d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c9d = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(5);
			return __this_00;
		}
	}

	[Token(Token = "0x6004C70")]
	[Address(RVA = "0x5BF3260", Offset = "0x5BF2260", VA = "0x5BF3260")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, KeybindPopup keybindPopup, string tooltip, float elementWidth, float elementHeight, int bindCount)
	{
		// Lifted from source/cpp/UI/KeybindSettingElement.c (UI.KeybindSettingElement$$Setup): clean
		int index;

		this._keybindPopup = keybindPopup;
		if (0 < bindCount) {
			index = 0;
			do {
				this.CreateKeybindButton(index, style, elementWidth, elementHeight);
				index = index + 1;
			} while (bindCount != index);
		}
		this.Setup(setting, style, title, tooltip);
		return;
	}

	[Token(Token = "0x6004C71")]
	[Address(RVA = "0x5BF3300", Offset = "0x5BF2300", VA = "0x5BF3300")]
	private void CreateKeybindButton(int index, ElementStyle style, float width, float height)
	{
		// Lifted from source/cpp/UI/KeybindSettingElement.c (UI.KeybindSettingElement$$CreateKeybindButton): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		UnityEvent __this_00;
		List<Text> __this_01;
		Text[] pUVar4;
		ColorBlock value;
		KeybindSettingElement.c__DisplayClass5_0 __this_02;
		GameObject root;
		Transform pUVar6;
		Text __this_03;
		LayoutElement pUVar7;
		Transform parent;
		Button pUVar8;
		UnityAction __this_04;
		Color UVar9;
		ColorBlock local_88;

		__this_02 = new KeybindSettingElement.c__DisplayClass5_0();
		if (__this_02 != null) {
			__this_02.__4__this = this;
			__this_02.index = index;
			pSVar3 = ResourcePaths.UI;
			root = ResourceManager.InstantiateAsset<GameObject>(pSVar3, "Prefabs/elements/KeybindButton", false, false);
			LanguageFonts.Localize(root);
			if (root != null) {
				pUVar6 = root.transform;
				if (pUVar6 != null) {
					pUVar6 = pUVar6.Find("Text");
					if (pUVar6 != null) {
						__this_03 = pUVar6.GetComponent<Text>();
						if (style != null) {
							pSVar3 = style.ThemePanel;
							UVar9 = UIManager.GetThemeColor(pSVar3, "DefaultSetting", "KeybindTextColor", "DefaultPanel");
							if (__this_03 != null) {
								__this_03.set_color(UVar9);
								__this_03.fontSize = style.FontSize;
								pUVar7 = root.GetComponent<LayoutElement>();
								if (pUVar7 != null) {
									pUVar7.set_preferredWidth(width);
									pUVar7 = root.GetComponent<LayoutElement>();
									if (pUVar7 != null) {
										pUVar7.set_preferredHeight(height);
										pUVar6 = root.transform;
										parent = this.transform;
										if (pUVar6 != null) {
											pUVar6.SetParent(parent, false);
											pUVar8 = root.GetComponent<Button>();
											if (pUVar8 != null) {
												__this_00 = (UnityEvent)pUVar8.m_OnClick;
												__this_04 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_KeybindSettingElement_c__DisplayClass5_0_CreateKeybindButton_b__0);
												if (__this_00 != null) {
													__this_00.AddListener(__this_04);
													pUVar8 = root.GetComponent<Button>();
													local_88 = UIManager.GetThemeColorBlock(style.ThemePanel, "DefaultSetting", "Keybind", "DefaultPanel");
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
														__this_01 = this._buttonLabels;
														if (__this_01 != null) {
															piVar1 = &__this_01._version;
															*piVar1 = *piVar1 + 1;
															pUVar4 = __this_01._items;
															if (pUVar4 != null) {
																uVar2 = __this_01._size;
																if (uVar2 < (uint)pUVar4.Length) {
																	__this_01._size = uVar2 + 1;
																	pUVar4[(int)uVar2] = __this_03;
																}
																else {
																	__this_01.AddWithResize((object)__this_03);
																}
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C72")]
	[Address(RVA = "0x5BF37C0", Offset = "0x5BF27C0", VA = "0x5BF37C0")]
	protected void OnButtonClicked(int index)
	{
		// Lifted from source/cpp/UI/KeybindSettingElement.c (UI.KeybindSettingElement$$OnButtonClicked): 1 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		KeybindPopup __this_00;
		List<Text> __this_01;
		InputKey setting;
		Text label;

		pSVar2 = this._setting;
		if (pSVar2 != null) {
			bVar1 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
			if (((pSVar2.klass._2).typeHierarchyDepth < bVar1) ||((pSVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(KeybindSetting) )) {
				throw new InvalidCastException();
			}
			if ((*(ulong)((sbyte)pSVar2 + 0x18)) != null) {
				__this_00 = this._keybindPopup;
				setting = ((*(ulong)((sbyte)pSVar2 + 0x18))).get_Item(index) ;
				__this_01 = this._buttonLabels;
				if (__this_01 != null) {
					label = __this_01.get_Item(index);
					if (__this_00 != null) {
						__this_00.Show(setting, label);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C73")]
	[Address(RVA = "0x5BF38A0", Offset = "0x5BF28A0", VA = "0x5BF38A0", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/KeybindSettingElement.c (UI.KeybindSettingElement$$SyncElement): 1 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		Text pUVar3;
		InputKey pSVar4;
		String pSVar5;
		int index;
		List<Text> __this_00;

		__this_00 = this._buttonLabels;
		if (__this_00 != null) {
			index = 0;
			do {
				if (__this_00._size <= index) {
					return;
				}
				pUVar3 = __this_00.get_Item(index);
				pSVar2 = this._setting;
				if (pSVar2 == null) break;
				bVar1 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
				if (((pSVar2.klass._2).typeHierarchyDepth < bVar1) ||((pSVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(KeybindSetting))) {
					throw new InvalidCastException();
				}
				if ((*(ulong)((sbyte)pSVar2 + 0x18)) == null) break;
				pSVar4 = ((*(ulong)((sbyte)pSVar2 + 0x18))).get_Item(index);
				if (pSVar4 == null) break;
				pSVar5 = pSVar4.ToString();
				if (pUVar3 == null) break;
				pUVar3.set_text(pSVar5);
				index = index + 1;
				__this_00 = this._buttonLabels;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C74")]
	[Address(RVA = "0x5BF39E0", Offset = "0x5BF29E0", VA = "0x5BF39E0")]
	public KeybindSettingElement()
	{
		// Lifted from source/cpp/UI/KeybindSettingElement.c (UI.KeybindSettingElement$$.ctor): clean
		List<Text> __this_00;

		__this_00 = new List<Text>();
		this._buttonLabels = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/KeybindSettingElement.c.

	// UI.KeybindSettingElement.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// UI.KeybindSettingElement.<>c__DisplayClass5_0$$<CreateKeybindButton>b__0: clean
	private void c__DisplayClass5_0__CreateKeybindButton_b__0()
	{
		KeybindSettingElement __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClicked(this.index);
		return;
	}
}
