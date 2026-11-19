// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ColorSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ColorSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007EB")]
internal class ColorSettingElement : BaseSettingElement
{
	[Token(Token = "0x400277F")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4002780")]
	[FieldOffset(Offset = "0x40")]
	private ColorPickPopup _colorPickPopup;

	[Token(Token = "0x4002781")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x17000D45")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C1F")]
		[Address(RVA = "0x5BEDD80", Offset = "0x5BECD80", VA = "0x5BEDD80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/ColorSettingElement.c (UI.ColorSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c77 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c77 = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(6);
			return __this_00;
		}
	}

	[Token(Token = "0x6004C20")]
	[Address(RVA = "0x5BEDE00", Offset = "0x5BECE00", VA = "0x5BEDE00")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, ColorPickPopup colorPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeColor)
	{
		// Lifted from source/cpp/UI/ColorSettingElement.c (UI.ColorSettingElement$$Setup): 1 lines keep C-only constructs
		UnityEvent __this_00;
		String panel;
		ColorBlock value;
		Transform pUVar1;
		GameObject __this_01;
		LayoutElement pUVar2;
		Button pUVar3;
		UnityAction __this_02;
		Image pUVar4;
		ColorBlock local_88;

		this._colorPickPopup = colorPickPopup;
		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("ColorButton");
			if (pUVar1 != null) {
				__this_01 = pUVar1.gameObject;
				if (__this_01 != null) {
					pUVar2 = __this_01.GetComponent<LayoutElement>();
					if (pUVar2 != null) {
						pUVar2.set_preferredWidth(elementWidth);
						pUVar2 = __this_01.GetComponent<LayoutElement>();
						if (pUVar2 != null) {
							pUVar2.set_preferredHeight(elementHeight);
							pUVar3 = __this_01.GetComponent<Button>();
							if (pUVar3 != null) {
								__this_00 = (UnityEvent)pUVar3.m_OnClick;
								__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ColorSettingElement_Setup_b__5_0);
								if (__this_00 != null) {
									__this_00.AddListener(__this_02);
									pUVar3 = __this_01.GetComponent<Button>();
									if (style != null) {
										panel = style.ThemePanel;
										local_88 = UIManager.GetThemeColorBlock(panel, "DefaultSetting", "Icon", "DefaultPanel");
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
												pUVar1 = pUVar1.Find("Border/Image");
												if (pUVar1 != null) {
													pUVar4 = pUVar1.GetComponent<Image>();
													this._image = pUVar4;
													this._onChangeColor = onChangeColor;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C21")]
	[Address(RVA = "0x5BEE150", Offset = "0x5BED150", VA = "0x5BEE150")]
	protected void OnButtonClicked()
	{
		// Lifted from source/cpp/UI/ColorSettingElement.c (UI.ColorSettingElement$$OnButtonClicked): 1 lines keep C-only constructs
		byte bVar1;
		ColorPickPopup __this_00;
		ColorSetting setting;

		__this_00 = this._colorPickPopup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		setting = (ColorSetting)this._setting;
		if (setting != null) {
			bVar1 = (typeof(ColorSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(ColorSetting)) ) {
				throw new InvalidCastException();
			}
		}
		__this_00.Show(setting, this._image, this._onChangeColor);
		return;
	}

	[Token(Token = "0x6004C22")]
	[Address(RVA = "0x5BEE1D0", Offset = "0x5BED1D0", VA = "0x5BEE1D0", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/ColorSettingElement.c (UI.ColorSettingElement$$SyncElement): 1 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		Image pUVar3;
		Color UVar4;

		pSVar2 = this._setting;
		if (pSVar2 != null) {
			bVar1 = (typeof(ColorSetting)._2).typeHierarchyDepth;
			if (((pSVar2.klass._2).typeHierarchyDepth < bVar1) ||((pSVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(ColorSetting))) {
				throw new InvalidCastException();
			}
			if ((*(ulong)((sbyte)pSVar2 + 0x20)) != null) {
				pUVar3 = this._image;
				UVar4 = ((*(ulong)((sbyte)pSVar2 + 0x20))).ToColor();
				if (pUVar3 != null) {
					pUVar3.set_color(UVar4);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C23")]
	[Address(RVA = "0x5BEE270", Offset = "0x5BED270", VA = "0x5BEE270")]
	public ColorSettingElement()
	{
		// Lifted from source/cpp/UI/ColorSettingElement.c (UI.ColorSettingElement$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ColorSettingElement.c.

	// UI.ColorSettingElement$$<Setup>b__5_0: 1 lines keep C-only constructs
	private void Setup_b__5_0()
	{
		byte bVar1;
		ColorPickPopup __this_00;
		ColorSetting setting;

		__this_00 = this._colorPickPopup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		setting = (ColorSetting)this._setting;
		if (setting != null) {
			bVar1 = (typeof(ColorSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(ColorSetting)) ) {
				throw new InvalidCastException();
			}
		}
		__this_00.Show(setting, this._image, this._onChangeColor);
		return;
	}
}
