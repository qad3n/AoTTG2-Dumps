// ==================== AoTTG2 cross-reference ====================
// Type: UI.ButtonPopupSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ButtonPopupSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ButtonPopupSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007EA")]
internal class ButtonPopupSettingElement : BaseSettingElement
{
	[Token(Token = "0x400277D")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x400277E")]
	[FieldOffset(Offset = "0x40")]
	protected BasePopup _popup;

	[Token(Token = "0x17000D44")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C19")]
		[Address(RVA = "0x5BED750", Offset = "0x5BEC750", VA = "0x5BED750", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/ButtonPopupSettingElement.c (UI.ButtonPopupSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c74 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c74 = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(4);
			return __this_00;
		}
	}

	[Token(Token = "0x6004C1A")]
	[Address(RVA = "0x5BED7D0", Offset = "0x5BEC7D0", VA = "0x5BED7D0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, BasePopup popup, string tooltip, float elementWidth, float elementHeight)
	{
		// Lifted from source/cpp/UI/ButtonPopupSettingElement.c (UI.ButtonPopupSettingElement$$Setup): 4 lines keep C-only constructs
		Text* targetAddress;
		UnityEvent __this_00;
		String panel;
		ColorBlock value;
		Transform pUVar1;
		GameObject __this_01;
		GameObject __this_02;
		LayoutElement pUVar2;
		Button pUVar3;
		UnityAction __this_03;
		Text pUVar4;
		Color UVar5;
		ColorBlock local_88;

		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Button");
			if (pUVar1 != null) {
				__this_01 = pUVar1.gameObject;
				pUVar1 = this.transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("Button/Text");
					if (pUVar1 != null) {
						__this_02 = pUVar1.gameObject;
						if (0.0 < elementWidth) {
							if (__this_01 == null) goto label_05cedc73;
							pUVar2 = __this_01.GetComponent<LayoutElement>();
							if (pUVar2 == null) goto label_05cedc73;
							pUVar2.set_preferredWidth(elementWidth);
							if (__this_02 == null) goto label_05cedc73;
							pUVar2 = __this_02.GetComponent<LayoutElement>();
							if (pUVar2 == null) goto label_05cedc73;
							pUVar2.set_preferredWidth(elementWidth);
						}
						if (elementHeight <= 0.0) {
							this._popup = popup;
							if (__this_01 == null) goto label_05cedc73;
						}
						else {
							if (__this_01 == null) goto label_05cedc73;
							pUVar2 = __this_01.GetComponent<LayoutElement>();
							if (pUVar2 == null) goto label_05cedc73;
							pUVar2.set_preferredHeight(elementHeight);
							if (__this_02 == null) goto label_05cedc73;
							pUVar2 = __this_02.GetComponent<LayoutElement>();
							if (pUVar2 == null) goto label_05cedc73;
							pUVar2.set_preferredHeight(elementHeight);
							this._popup = popup;
						}
						pUVar3 = __this_01.GetComponent<Button>();
						if (pUVar3 != null) {
							__this_00 = (UnityEvent)pUVar3.m_OnClick;
							__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ButtonPopupSettingElement_Setup_b__4_0);
							if (__this_00 != null) {
								__this_00.AddListener(__this_03);
								pUVar3 = __this_01.GetComponent<Button>() ;
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
										pUVar1 = __this_01.transform;
										if (pUVar1 != null) {
											pUVar1 = pUVar1.Find("Text");
											if (pUVar1 != null) {
												pUVar4 = pUVar1.GetComponent<Text>();
												targetAddress = &this._label;
												this._label = pUVar4;
												pUVar4 = this._label;
												if (pUVar4 != null) {
													pUVar4.fontSize = style.FontSize;
													pUVar4 = *targetAddress;
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
	label_05cedc73: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C1B")]
	[Address(RVA = "0x5BEDC80", Offset = "0x5BECC80", VA = "0x5BEDC80")]
	private void OnClick()
	{
		// Lifted from source/cpp/UI/ButtonPopupSettingElement.c (UI.ButtonPopupSettingElement$$OnClick): clean
		BasePopup pUVar1;

		pUVar1 = this._popup;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Show();
		return;
	}

	[Token(Token = "0x6004C1C")]
	[Address(RVA = "0x5BEDCB0", Offset = "0x5BECCB0", VA = "0x5BEDCB0", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/ButtonPopupSettingElement.c (UI.ButtonPopupSettingElement$$SyncElement): 1 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		Text pUVar3;

		pSVar2 = this._setting;
		if (pSVar2 != null) {
			bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if (((pSVar2.klass._2).typeHierarchyDepth < bVar1) ||((pSVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(StringSetting)) ) {
				throw new InvalidCastException();
			}
			pUVar3 = this._label;
			if (pUVar3 != null) {
				pUVar3.set_text((*(ulong)((sbyte)pSVar2 + 0x20)));
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C1D")]
	[Address(RVA = "0x5BEDD40", Offset = "0x5BECD40", VA = "0x5BEDD40")]
	public ButtonPopupSettingElement()
	{
		// Lifted from source/cpp/UI/ButtonPopupSettingElement.c (UI.ButtonPopupSettingElement$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ButtonPopupSettingElement.c.

	// UI.ButtonPopupSettingElement$$<Setup>b__4_0: clean
	private void Setup_b__4_0()
	{
		BasePopup pUVar1;

		pUVar1 = this._popup;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Show();
		return;
	}
}
