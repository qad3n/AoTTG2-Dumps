// ==================== AoTTG2 cross-reference ====================
// Type: UI.ElementFactory
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ElementFactory.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementFactory.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using Photon.Realtime;
using Settings;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007DA")]
internal class ElementFactory : MonoBehaviour
{
	[Token(Token = "0x6004BB8")]
	public static T CreateDefaultMenu<T>() where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x6004BB9")]
	public static T CreateMenu<T>(string asset) where T : BaseMenu
	{
		return null;
	}

	[Token(Token = "0x6004BBA")]
	public static T CreateEmptyPanel<T>(Transform parent, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6004BBB")]
	[Address(RVA = "0x5BE8660", Offset = "0x5BE7660", VA = "0x5BE8660")]
	public static GameObject CreateEmptyPanel(Transform parent, Type t, bool enabled = false)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateEmptyPanel): 6 lines keep C-only constructs
		byte bVar1;
		Component pUVar2;
		ulong uVar3;
		Object __this;
		String value;
		Component pUVar4;
		BasePanel pUVar5;
		undefined7 in_register_00000011;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000011, enabled);
		__this = (Object)ElementFactory.InstantiateAndBind(parent, "Prefabs/Panels/EmptyPanel");
		if (t != null) {
			value = (String)t.unknown();
			if (__this != null) {
				__this.name = value;
				pUVar4 = __this.AddComponent(t);
				if (parent != null) {
					pUVar5 = parent.GetComponent<BasePanel>();
					if (pUVar4 != null) {
						pUVar2 = pUVar4.klass;
						bVar1 = (typeof(BasePanel)._2).typeHierarchyDepth;
						if (((pUVar2._2).typeHierarchyDepth < bVar1) ||((pUVar2._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BasePanel))) {
							throw new InvalidCastException();
						}
						uVar3._0_4_ = ((Il2CppClass)pUVar2).vtable[20].method;
						uVar3._4_4_ = pUVar2[1]._2.static_fields_size;
						(**(code*)&((Il2CppClass)pUVar2).vtable[20].methodPtr)(pUVar4,pUVar5,uVar3);
						__this.SetActive(enabled);
						return (GameObject)__this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BBC")]
	public static T CreateSimplePanel<T>(Transform parent, bool enabled = false) where T : SimplePanel
	{
		return null;
	}

	[Token(Token = "0x6004BBD")]
	public static T CreateDefaultPopup<T>(Transform parent, bool enabled = false) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x6004BBE")]
	public static T CreateHeadedPanel<T>(Transform parent, bool enabled = false) where T : HeadedPanel
	{
		return null;
	}

	[Token(Token = "0x6004BBF")]
	public static GameObject CreateTooltipPopup<T>(Transform parent, bool enabled = false) where T : TooltipPopup
	{
		return null;
	}

	[Token(Token = "0x6004BC0")]
	[Address(RVA = "0x5BE8780", Offset = "0x5BE7780", VA = "0x5BE8780")]
	public static TipPanel CreateTipPanel(Transform parent, bool enabled = false)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateTipPanel): clean
		GameObject pUVar1;
		TipPanel __this;

		pUVar1 = ElementFactory.InstantiateAndBind(parent, "Prefabs/MainMenu/TipPanel");
		if (pUVar1 != null) {
			__this = pUVar1.AddComponent<TipPanel>();
			if (__this != null) {
				__this.Setup();
				pUVar1 = __this.gameObject;
				if (pUVar1 != null) {
					pUVar1.SetActive(enabled);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC1")]
	[Address(RVA = "0x5BE8820", Offset = "0x5BE7820", VA = "0x5BE8820")]
	public static GameObject CreateDefaultButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onClick)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateDefaultButton): clean
		UnityEvent __this;
		String panel;
		ColorBlock value;
		GameObject __this_00;
		Transform pUVar1;
		Text __this_01;
		LayoutElement pUVar2;
		Button pUVar3;
		Color UVar4;
		ColorBlock local_88;

		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DefaultButton");
		if (__this_00 != null) {
			pUVar1 = __this_00.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("Text");
				if (pUVar1 != null) {
					__this_01 = pUVar1.GetComponent<Text>();
					if (__this_01 != null) {
						__this_01.set_text(title);
						if (style != null) {
							__this_01.fontSize = style.FontSize;
							pUVar2 = __this_00.GetComponent<LayoutElement>();
							if (0.0 < elementWidth) {
								if (pUVar2 == null) goto label_05ce8b13;
								pUVar2.set_preferredWidth(elementWidth);
							}
							if (0.0 < elementHeight) {
								if (pUVar2 == null) goto label_05ce8b13;
								pUVar2.set_preferredHeight(elementHeight);
							}
							if (onClick != null) {
								pUVar3 = __this_00.GetComponent<Button>() ;
								if ((pUVar3 == null) ||(__this = (UnityEvent)pUVar3.m_OnClick, __this == null)) goto label_05ce8b13;
								__this.AddListener(onClick);
							}
							pUVar3 = __this_00.GetComponent<Button>();
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
								UVar4 = UIManager.GetThemeColor(style.ThemePanel, "DefaultButton", "TextColor", "DefaultPanel");
								__this_01.set_color(UVar4);
								return __this_00;
							}
						}
					}
				}
			}
		}
	label_05ce8b13: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC2")]
	[Address(RVA = "0x5BD29F0", Offset = "0x5BD19F0", VA = "0x5BD29F0")]
	public static GameObject CreatePerkButton(Transform parent, ElementStyle style, string title, string tooltip, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional][DefaultParameterValue(0f)] float offset, [Optional] UnityAction onClick)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreatePerkButton): clean
		UnityEvent __this;
		String panel;
		GameObject __this_00;
		Transform pUVar1;
		Text __this_01;
		LayoutElement pUVar2;
		PerkButton pUVar3;
		Button pUVar4;
		Color UVar5;

		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Misc/PerkButton");
		if (__this_00 != null) {
			pUVar1 = __this_00.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("Text");
				if (pUVar1 != null) {
					__this_01 = pUVar1.GetComponent<Text>();
					if (__this_01 != null) {
						__this_01.set_text(title);
						if (style != null) {
							__this_01.fontSize = style.FontSize;
							pUVar2 = __this_00.GetComponent<LayoutElement>();
							if (0.0 < elementWidth) {
								if (pUVar2 == null) goto label_05cd2c85;
								pUVar2.set_preferredWidth(elementWidth);
							}
							if (0.0 < elementHeight) {
								if (pUVar2 == null) goto label_05cd2c85;
								pUVar2.set_preferredHeight(elementHeight);
							}
							pUVar3 = __this_00.AddComponent<PerkButton>();
							if (pUVar3 != null) {
								pUVar3.Setup(tooltip, style, offset);
								if (onClick != null) {
									pUVar4 = __this_00.GetComponent<Button>();
									if ((pUVar4 == null) ||(__this = (UnityEvent)pUVar4.m_OnClick, __this == null)) goto label_05cd2c85;
									__this.AddListener(onClick);
								}
								panel = style.ThemePanel;
								UVar5 = UIManager.GetThemeColor(panel, "DefaultButton", "TextColor", "DefaultPanel");
								__this_01.set_color(UVar5);
								return __this_00;
							}
						}
					}
				}
			}
		}
	label_05cd2c85: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC3")]
	[Address(RVA = "0x5BE8B20", Offset = "0x5BE7B20", VA = "0x5BE8B20")]
	public static GameObject CreateIconButton(Transform parent, ElementStyle style, string icon, [Optional][DefaultParameterValue(32f)] float elementWidth, [Optional][DefaultParameterValue(32f)] float elementHeight, [Optional] UnityAction onClick, [Optional] string iconRoot)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateIconButton): 1 lines keep C-only constructs
		uint uVar1;
		UnityEvent __this;
		String panel;
		ColorBlock value;
		GameObject __this_00;
		LayoutElement pUVar2;
		Button pUVar3;
		RawImage __this_01;
		Texture value_00;
		ColorBlock local_88;

		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/IconButton");
		if ((__this_00 != null) &&(pUVar2 = __this_00.GetComponent<LayoutElement>(), pUVar2 != null)) {
			pUVar2.set_preferredWidth(elementWidth);
			pUVar2.set_preferredHeight(elementHeight);
			if (onClick != null) {
				pUVar3 = __this_00.GetComponent<Button>();
				if ((pUVar3 == null) ||(__this = (UnityEvent)pUVar3.m_OnClick, __this == null)) goto label_05ce8e23;
				__this.AddListener(onClick);
			}
			__this_01 = __this_00.GetComponent<RawImage>();
			if (iconRoot == null) {
				iconRoot = ResourcePaths.UI;
				uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			value_00 = (Texture)ResourceManager.LoadAsset(iconRoot, icon, true, false);
			if (__this_01 != null) {
				if ((value_00 != null) &&(value_00.klass != (Texture)typeof(Texture2D))) {
					throw new InvalidCastException();
				}
				__this_01.texture = value_00;
				pUVar3 = __this_00.GetComponent<Button>();
				if (style != null) {
					panel = style.ThemePanel;
					local_88 = UIManager.GetThemeColorBlock(panel, "IconButton", "", "DefaultPanel");
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
						pUVar3.colors = value ;
						return __this_00;
					}
				}
			}
		}
	label_05ce8e23: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC4")]
	[Address(RVA = "0x5BDB210", Offset = "0x5BDA210", VA = "0x5BDB210")]
	public static GameObject CreateSetActionButtons(Transform parent, ElementStyle style, string[] operations, Action<string> onClick, float size = 36f)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateSetActionButtons): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		ColorBlock value;
		ColorBlock pUVar8;
		int iVar9;
		ElementFactory.c__DisplayClass12_0 __this;
		GameObject __this_00;
		ulong uVar10;
		ElementFactory.c__DisplayClass12_1 pUVar11;
		Transform parent_00;
		String pSVar12;
		UnityAction __this_01;
		GameObject __this_02;
		RawImage pUVar13;
		Button __this_03;
		HoverTooltip pUVar14;
		ulong uVar15;
		Color UVar16;

		__this = new ElementFactory.c__DisplayClass12_0();
		if (__this != null) {
			__this.onClick = onClick;
			__this_00 = ElementFactory.CreateHorizontalGroup(parent, 12.0, 3);
			if (operations != null) {
				iVar9 = (int)operations.Length;
				if (__this_00 == null) {
					if (0 < iVar9) {
						pSVar12 = operations[0];
						pUVar11 = new ElementFactory.c__DisplayClass12_1();
						if (pUVar11 != null) {
							pUVar11.CS___8__locals1 = __this;
							pUVar11.name = pSVar12;
							throw new NullReferenceException();
						}
						goto label_05cdb662;
					}
				}
				else if (0 < iVar9) {
					uVar10 = operations.Length & 0xffffffff;
					uVar15 = 0;
					do {
						if (uVar10 <= uVar15) {
							throw new IndexOutOfRangeException();
						}
						pSVar12 = operations[uVar15];
						pUVar11 = new ElementFactory.c__DisplayClass12_1();
						if (pUVar11 == null) goto label_05cdb662;
						pUVar11.CS___8__locals1 = __this;
						pUVar11.name = pSVar12;
						parent_00 = __this_00.transform;
						pSVar12 = SetActionIcons.For(pUVar11.name);
						__this_01 = new UnityAction((object)pUVar11, (intptr_t)MethodInfo_UI_ElementFactory_c__DisplayClass12_1_CreateSetActionButtons_b__0);
						__this_02 = ElementFactory.CreateIconButton(parent_00, style, pSVar12, size, size, __this_01, "Icons/kenney-icons");
						if ((__this_02 == null) ||(pUVar13 = __this_02.GetComponent<RawImage>(), style == null)) goto label_05cdb662;
						pSVar12 = style.ThemePanel;
						UVar16 = UIManager.GetThemeColor(pSVar12, "IconButton", "TextColor", "DefaultPanel");
						if (pUVar13 == null) goto label_05cdb662;
						pUVar13.set_color(UVar16);
						__this_03 = __this_02.GetComponent<Button>();
						if (__this_03 == null) goto label_05cdb662;
						uVar2 = __this_03.m_Colors.m_ColorMultiplier;
						uVar3 = __this_03.m_Colors.m_FadeDuration;
						value.m_FadeDuration = (float)uVar3;
						value.m_ColorMultiplier = (float)uVar2;
						pUVar8 = &__this_03.m_Colors;
						uVar4 = pUVar8.m_DisabledColor.r;
						uVar5 = pUVar8.m_DisabledColor.g;
						value.m_DisabledColor.g = (float)uVar5;
						value.m_DisabledColor.r = (float)uVar4;
						pUVar8 = &__this_03.m_Colors;
						uVar6 = pUVar8.m_DisabledColor.b;
						uVar7 = pUVar8.m_DisabledColor.a;
						value.m_DisabledColor.a = (float)uVar7;
						value.m_DisabledColor.b = (float)uVar6;
						value.m_NormalColor.b = 1.0;
						value.m_NormalColor.a = 1.0;
						value.m_NormalColor.r = 1.0;
						value.m_NormalColor.g = 1.0;
						value.m_HighlightedColor.r = 0.75;
						value.m_HighlightedColor.g = 0.75;
						value.m_HighlightedColor.b = 0.75;
						value.m_HighlightedColor.a = 1.0;
						value.m_PressedColor.r = 0.55;
						value.m_PressedColor.g = 0.55;
						value.m_PressedColor.b = 0.55;
						value.m_PressedColor.a = 1.0;
						value.m_SelectedColor.r = 1.0;
						value.m_SelectedColor.g = 1.0;
						value.m_SelectedColor.b = 1.0;
						value.m_SelectedColor.a = 1.0;
						__this_03.colors = value;
						pUVar14 = __this_02.AddComponent<HoverTooltip>();
						pSVar12 = UIManager.GetLocaleCommon(pUVar11.name);
						if (pUVar14 == null) goto label_05cdb662;
						pUVar14.Message = pSVar12;
						uVar15 = uVar15 + 1;
						uVar1 = (uint)operations.Length;
						uVar10 = (ulong)uVar1;
					} while ((long)uVar15 < (long)(int)uVar1);
				}
				return __this_00;
			}
		}
	label_05cdb662: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC5")]
	[Address(RVA = "0x5BD2C90", Offset = "0x5BD1C90", VA = "0x5BD2C90")]
	public static GameObject CreateRawImage(Transform parent, ElementStyle style, string image, float elementWidth = 32f, float elementHeight = 32f)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateRawImage): 1 lines keep C-only constructs
		String path;
		bool bVar1;
		GameObject __this;
		RawImage __this_00;
		LayoutElement pUVar2;
		Texture value;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/RawImage");
		if (__this != null) {
			__this_00 = __this.GetComponent<RawImage>();
			pUVar2 = __this.GetComponent<LayoutElement>();
			if (pUVar2 != null) {
				pUVar2.set_preferredWidth(elementWidth);
				pUVar2.set_preferredHeight(elementHeight);
				bVar1 = (image != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar1) {
					path = ResourcePaths.UI;
					value = (Texture)ResourceManager.LoadAsset(path, image, true, false);
					if (__this_00 == null) goto label_05cd2e30;
					if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
						throw new InvalidCastException();
					}
					__this_00.texture = value;
				}
				return __this;
			}
		}
	label_05cd2e30: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC6")]
	[Address(RVA = "0x5BE8E30", Offset = "0x5BE7E30", VA = "0x5BE8E30")]
	public static GameObject CreateTooltipIcon(Transform parent, ElementStyle style, string tooltip, float elementWidth = 30f, float elementHeight = 30f)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateTooltipIcon): clean
		GameObject __this;
		TooltipButton pUVar1;
		ElementStyle style_00;

		style_00 = style;
		__this = ElementFactory.CreateRawImage(parent, style_00, "Icons/Navigation/TooltipIcon", elementWidth, elementHeight);
		if (__this != null) {
			pUVar1 = __this.AddComponent<TooltipButton>();
			if (pUVar1 != null) {
				pUVar1.Setup(tooltip, style);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC7")]
	[Address(RVA = "0x5BD1980", Offset = "0x5BD0980", VA = "0x5BD1980")]
	public static GameObject CreateTextButton(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(0f)] float width, [Optional] UnityAction onClick)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateTextButton): clean
		UnityEvent __this;
		String panel;
		ColorBlock value;
		GameObject __this_00;
		Text __this_01;
		LayoutElement pUVar1;
		Button pUVar2;
		ColorBlock local_80;

		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/TextButton");
		if (((__this_00 != null) &&(__this_01 = __this_00.GetComponent<Text>(), __this_01 != null)) &&(__this_01.set_text(title), style != null)) {
			__this_01.fontSize = style.FontSize;
			__this_01.fontStyle = 1;
			if ((width != 0.0) || (NAN(width))) {
				pUVar1 = __this_01.GetComponent<LayoutElement>();
				if (pUVar1 == null) goto label_05cd1bd8;
				pUVar1.set_preferredWidth(width);
			}
			if (onClick != null) {
				pUVar2 = __this_00.GetComponent<Button>();
				if ((pUVar2 == null) ||(__this = (UnityEvent)pUVar2.m_OnClick, __this == null)) goto label_05cd1bd8;
				__this.AddListener(onClick);
			}
			pUVar2 = __this_00.GetComponent<Button>() ;
			panel = style.ThemePanel;
			local_80 = UIManager.GetThemeColorBlock(panel, "TextButton", "", "DefaultPanel");
			if (pUVar2 != null) {
				value.m_NormalColor.b = local_80.m_NormalColor.b;
				value.m_NormalColor.a = local_80.m_NormalColor.a;
				value.m_NormalColor.r = local_80.m_NormalColor.r;
				value.m_NormalColor.g = local_80.m_NormalColor.g;
				value.m_HighlightedColor.r = local_80.m_HighlightedColor.r;
				value.m_HighlightedColor.g = local_80.m_HighlightedColor.g;
				value.m_HighlightedColor.b = local_80.m_HighlightedColor.b;
				value.m_HighlightedColor.a = local_80.m_HighlightedColor.a;
				value.m_PressedColor.r = local_80.m_PressedColor.r;
				value.m_PressedColor.g = local_80.m_PressedColor.g;
				value.m_PressedColor.b = local_80.m_PressedColor.b;
				value.m_PressedColor.a = local_80.m_PressedColor.a;
				value.m_SelectedColor.r = local_80.m_SelectedColor.r;
				value.m_SelectedColor.g = local_80.m_SelectedColor.g;
				value.m_SelectedColor.b = local_80.m_SelectedColor.b;
				value.m_SelectedColor.a = local_80.m_SelectedColor.a;
				value.m_DisabledColor.r = local_80.m_DisabledColor.r;
				value.m_DisabledColor.g = local_80.m_DisabledColor.g;
				value.m_DisabledColor.b = local_80.m_DisabledColor.b;
				value.m_DisabledColor.a = local_80.m_DisabledColor.a;
				value.m_ColorMultiplier = local_80.m_ColorMultiplier;
				value.m_FadeDuration = local_80.m_FadeDuration;
				pUVar2.colors = value;
				return __this_00;
			}
		}
	label_05cd1bd8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC8")]
	[Address(RVA = "0x5BE8EE0", Offset = "0x5BE7EE0", VA = "0x5BE8EE0")]
	public static GameObject CreateLinkButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateLinkButton): clean
		UnityEvent __this;
		String panel;
		ColorBlock value;
		GameObject __this_00;
		Text __this_01;
		Button pUVar1;
		ColorBlock local_80;

		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/TextButton");
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<Text>();
			if (__this_01 != null) {
				__this_01.set_text(title);
				if (style != null) {
					__this_01.fontSize = style.FontSize;
					if (onClick != null) {
						pUVar1 = __this_00.GetComponent<Button>();
						if ((pUVar1 == null) ||(__this = (UnityEvent)pUVar1.m_OnClick, __this == null)) goto label_05ce90c9;
						__this.AddListener(onClick);
					}
					pUVar1 = __this_00.GetComponent<Button>();
					panel = style.ThemePanel;
					local_80 = UIManager.GetThemeColorBlock(panel, "LinkButton", "", "DefaultPanel");
					if (pUVar1 != null) {
						value.m_NormalColor.b = local_80.m_NormalColor.b;
						value.m_NormalColor.a = local_80.m_NormalColor.a;
						value.m_NormalColor.r = local_80.m_NormalColor.r;
						value.m_NormalColor.g = local_80.m_NormalColor.g;
						value.m_HighlightedColor.r = local_80.m_HighlightedColor.r;
						value.m_HighlightedColor.g = local_80.m_HighlightedColor.g;
						value.m_HighlightedColor.b = local_80.m_HighlightedColor.b;
						value.m_HighlightedColor.a = local_80.m_HighlightedColor.a;
						value.m_PressedColor.r = local_80.m_PressedColor.r;
						value.m_PressedColor.g = local_80.m_PressedColor.g;
						value.m_PressedColor.b = local_80.m_PressedColor.b;
						value.m_PressedColor.a = local_80.m_PressedColor.a;
						value.m_SelectedColor.r = local_80.m_SelectedColor.r;
						value.m_SelectedColor.g = local_80.m_SelectedColor.g;
						value.m_SelectedColor.b = local_80.m_SelectedColor.b;
						value.m_SelectedColor.a = local_80.m_SelectedColor.a;
						value.m_DisabledColor.r = local_80.m_DisabledColor.r;
						value.m_DisabledColor.g = local_80.m_DisabledColor.g;
						value.m_DisabledColor.b = local_80.m_DisabledColor.b;
						value.m_DisabledColor.a = local_80.m_DisabledColor.a;
						value.m_ColorMultiplier = local_80.m_ColorMultiplier;
						value.m_FadeDuration = local_80.m_FadeDuration;
						pUVar1.colors = value ;
						return __this_00;
					}
				}
			}
		}
	label_05ce90c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BC9")]
	[Address(RVA = "0x5BE90D0", Offset = "0x5BE80D0", VA = "0x5BE90D0")]
	public static GameObject CreateCategoryButton(Transform parent, ElementStyle style, string title, [Optional] UnityAction onClick)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateCategoryButton): clean
		UnityEvent __this;
		String panel;
		ColorBlock value;
		GameObject __this_00;
		Text __this_01;
		Button pUVar1;
		ColorBlock local_80;

		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/CategoryButton");
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<Text>();
			if (__this_01 != null) {
				__this_01.set_text(title);
				if (style != null) {
					__this_01.fontSize = style.FontSize;
					if (onClick != null) {
						pUVar1 = __this_00.GetComponent<Button>();
						if ((pUVar1 == null) ||(__this = (UnityEvent)pUVar1.m_OnClick, __this == null)) goto label_05ce92b9;
						__this.AddListener(onClick);
					}
					pUVar1 = __this_00.GetComponent<Button>();
					panel = style.ThemePanel;
					local_80 = UIManager.GetThemeColorBlock(panel, "CategoryButton", "", "DefaultPanel");
					if (pUVar1 != null) {
						value.m_NormalColor.b = local_80.m_NormalColor.b;
						value.m_NormalColor.a = local_80.m_NormalColor.a;
						value.m_NormalColor.r = local_80.m_NormalColor.r;
						value.m_NormalColor.g = local_80.m_NormalColor.g;
						value.m_HighlightedColor.r = local_80.m_HighlightedColor.r;
						value.m_HighlightedColor.g = local_80.m_HighlightedColor.g;
						value.m_HighlightedColor.b = local_80.m_HighlightedColor.b;
						value.m_HighlightedColor.a = local_80.m_HighlightedColor.a;
						value.m_PressedColor.r = local_80.m_PressedColor.r;
						value.m_PressedColor.g = local_80.m_PressedColor.g;
						value.m_PressedColor.b = local_80.m_PressedColor.b;
						value.m_PressedColor.a = local_80.m_PressedColor.a;
						value.m_SelectedColor.r = local_80.m_SelectedColor.r;
						value.m_SelectedColor.g = local_80.m_SelectedColor.g;
						value.m_SelectedColor.b = local_80.m_SelectedColor.b;
						value.m_SelectedColor.a = local_80.m_SelectedColor.a;
						value.m_DisabledColor.r = local_80.m_DisabledColor.r;
						value.m_DisabledColor.g = local_80.m_DisabledColor.g;
						value.m_DisabledColor.b = local_80.m_DisabledColor.b;
						value.m_DisabledColor.a = local_80.m_DisabledColor.a;
						value.m_ColorMultiplier = local_80.m_ColorMultiplier;
						value.m_FadeDuration = local_80.m_FadeDuration;
						pUVar1.colors = value ;
						return __this_00;
					}
				}
			}
		}
	label_05ce92b9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BCA")]
	[Address(RVA = "0x5BD4A10", Offset = "0x5BD3A10", VA = "0x5BD4A10")]
	public static GameObject CreateDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues, [Optional] Func<string, string> optionLabel)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateDropdownSetting): clean
		Nullable<float> SVar1;
		GameObject __this;
		DropdownSettingElement pUVar2;
		float fVar3;

		SVar1 = optionsWidth;
		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DropdownSetting");
		if (__this != null) {
			pUVar2 = __this.AddComponent<DropdownSettingElement>();
			if (pUVar2 != null) {
				pUVar2._optionLabel = optionLabel;
				if (SVar1.hasValue == false) {
					optionsWidth = new Nullable<float>(elementWidth);
				}
				fVar3 = optionsWidth.Value;
				pUVar2.Setup(setting, style, title, options, tooltip, elementWidth, elementHeight, fVar3, maxScrollHeight, onDropdownOptionSelect, intOptionValues);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BCB")]
	[Address(RVA = "0x5BE92C0", Offset = "0x5BE82C0", VA = "0x5BE92C0")]
	public static GameObject CreateDropdownSelect(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateDropdownSelect): clean
		Nullable<float> SVar1;
		GameObject __this;
		DropdownSelectElement pUVar2;
		float fVar3;

		SVar1 = optionsWidth;
		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DropdownSetting");
		if (__this != null) {
			pUVar2 = __this.AddComponent<DropdownSelectElement>();
			if (SVar1.hasValue == false) {
				optionsWidth = new Nullable<float>(elementWidth);
			}
			fVar3 = optionsWidth.Value;
			if (pUVar2 != null) {
				pUVar2.Setup(setting, style, title, options, tooltip, elementWidth, elementHeight, fVar3, maxScrollHeight, onDropdownOptionSelect, null);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BCC")]
	[Address(RVA = "0x5BE9420", Offset = "0x5BE8420", VA = "0x5BE9420")]
	public static GameObject CreateMultiSelectDropdown(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string[] options, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onSelectionChanged, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateMultiSelectDropdown): clean
		Nullable<float> SVar1;
		GameObject __this;
		MultiSelectDropdownElement __this_00;
		float optionsWidth_00;

		SVar1 = optionsWidth;
		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DropdownSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<MultiSelectDropdownElement>();
			if (SVar1.hasValue == false) {
				optionsWidth = new Nullable<float>(elementWidth);
			}
			optionsWidth_00 = optionsWidth.Value;
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, options, tooltip, elementWidth, elementHeight, optionsWidth_00, maxScrollHeight, onSelectionChanged, intOptionValues);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BCD")]
	[Address(RVA = "0x5BD39B0", Offset = "0x5BD29B0", VA = "0x5BD39B0")]
	public static GameObject CreateIncrementSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(33f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] string[] options, [Optional] UnityAction onValueChanged, [Optional] Func<bool> validation)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateIncrementSetting): clean
		GameObject __this;
		IncrementSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/IncrementSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<IncrementSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, tooltip, elementWidth, elementHeight, options, onValueChanged, validation);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BCE")]
	[Address(RVA = "0x5BD6B90", Offset = "0x5BD5B90", VA = "0x5BD6B90")]
	public static GameObject CreateToggleSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onValueChanged)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateToggleSetting): clean
		GameObject __this;
		ToggleSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/ToggleSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<ToggleSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, tooltip, elementWidth, elementHeight, onValueChanged);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BCF")]
	[Address(RVA = "0x5BE9580", Offset = "0x5BE8580", VA = "0x5BE9580")]
	public static GameObject CreateToggleGroupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string tooltip = "", float elementWidth = 30f, float elementHeight = 30f)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateToggleGroupSetting): clean
		GameObject __this;
		ToggleGroupSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/ToggleGroupSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<ToggleGroupSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, options, tooltip, elementWidth, elementHeight);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD0")]
	[Address(RVA = "0x5BE9650", Offset = "0x5BE8650", VA = "0x5BE9650")]
	public static GameObject CreateSliderSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(150f)] float elementWidth, [Optional][DefaultParameterValue(16f)] float elementHeight, [Optional][DefaultParameterValue(2)] int decimalPlaces, [Optional][DefaultParameterValue(0f)] float interval, [Optional] UnityAction onValueChanged)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateSliderSetting): clean
		GameObject __this;
		SliderSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/SliderSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<SliderSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, tooltip, elementWidth, elementHeight, decimalPlaces, interval, onValueChanged);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD1")]
	[Address(RVA = "0x5BE0270", Offset = "0x5BDF270", VA = "0x5BE0270")]
	public static GameObject CreateInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(false)] bool multiLine, [Optional] UnityAction onValueChanged, [Optional] UnityAction onEndEdit, [Optional] Func<string, bool> onValidate, [Optional] Func<string, string> onCleanup)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateInputSetting): clean
		GameObject __this;
		InputSettingElement __this_00;
		HorizontalLayoutGroup __this_01;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/InputSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<InputSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, tooltip, elementWidth, elementHeight, multiLine, onValueChanged, onEndEdit, onValidate, onCleanup);
				__this_01 = __this_00.GetComponent<HorizontalLayoutGroup>();
				if ((style != null) && (__this_01 != null)) {
					__this_01.spacing = style.Spacing;
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD2")]
	[Address(RVA = "0x5BE9730", Offset = "0x5BE8730", VA = "0x5BE9730")]
	public static GameObject CreateSliderInputSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string tooltip = "", float sliderWidth = 150f, float sliderHeight = 16f, float inputWidth = 70f, float inputHeight = 40f, int decimalPlaces = 2)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateSliderInputSetting): clean
		GameObject __this;
		SliderInputSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/SliderInputSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<SliderInputSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, tooltip, sliderWidth, sliderHeight, inputWidth, inputHeight, decimalPlaces);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD3")]
	[Address(RVA = "0x5BD1BE0", Offset = "0x5BD0BE0", VA = "0x5BD1BE0")]
	public static GameObject CreateDefaultLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateDefaultLabel): clean
		String panel;
		bool bVar1;
		GameObject __this;
		Text __this_00;
		VerticalLayoutGroup x;
		ContentSizeFitter __this_01;
		HorizontalLayoutGroup x_00;
		LayoutElement pUVar2;
		int value;
		Color UVar3;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DefaultLabel");
		if (__this != null) {
			__this_00 = __this.GetComponent<Text>();
			if ((style != null) && (__this_00 != null)) {
				__this_00.fontSize = style.FontSize;
				__this_00.set_text(title);
				__this_00.fontStyle = fontStyle;
				panel = style.ThemePanel;
				UVar3 = UIManager.GetThemeColor(panel, "DefaultLabel", "TextColor", "DefaultPanel");
				__this_00.set_color(UVar3);
				__this_00.alignment = alignment;
				if (parent != null) {
					x = parent.GetComponent<VerticalLayoutGroup>();
					value = 0;
					bVar1 = ((Object)x != null);
					__this_01 = __this_00.GetComponent<ContentSizeFitter>();
					if (!bVar1) {
						value = 2;
					}
					if (__this_01 != null) {
						__this_01.horizontalFit = value;
						x_00 = parent.GetComponent<HorizontalLayoutGroup>();
						bVar1 = ((Object)x_00 != null);
						if (bVar1) {
							pUVar2 = __this_00.GetComponent<LayoutElement>();
							if (pUVar2 == null) goto label_05cd1e6c;
							pUVar2.set_flexibleWidth(0.0);
						}
						return __this;
					}
				}
			}
		}
	label_05cd1e6c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD4")]
	[Address(RVA = "0x5BE9810", Offset = "0x5BE8810", VA = "0x5BE9810")]
	public static GameObject CreateTMPLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateTMPLabel): 5 lines keep C-only constructs
		String panel;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this;
		Transform __this_00;
		TextMeshProUGUI __this_01;
		ContentSizeFitter __this_02;
		VerticalLayoutGroup x;
		LayoutElement pUVar4;
		HorizontalLayoutGroup x_00;
		int value;
		int iVar5;
		Color UVar6;

		components = (Type[])new Type[5];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05ce9d32;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05ce9d3c;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05ce9d3c;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_05ce9d37;
			components[1] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05ce9d3c;
			}
			if ((uint)components.Length < 3) goto label_05ce9d37;
			components[2] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05ce9d3c;
			}
			if ((components.Length & 0xfffffffc) != 0) {
				components[3] = pSVar2;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_ContentSizeFitter);
				if (pSVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class) ;
					if (pIVar3 == null) {
	label_05ce9d3c: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if (4 < (uint)components.Length) {
					components[4] = pSVar2;
					__this = new GameObject("TMPLabel", components);
					if (__this != null) {
						__this_00 = __this.transform;
						if (__this_00 != null) {
							__this_00.SetParent(parent, false);
							__this_01 = __this.GetComponent<TextMeshProUGUI>();
							if ((style != null) && (__this_01 != null)) {
								__this_01.fontSize = (float)style.FontSize;
								__this_01.set_text(title);
								value = (uint)(fontStyle == 2) * 2;
								if (fontStyle == 1) {
									value = 1;
								}
								__this_01.fontStyle = value;
								panel = style.ThemePanel;
								UVar6 = UIManager.GetThemeColor(panel, "DefaultLabel", "TextColor", "DefaultPanel");
								__this_01.set_color(UVar6);
								iVar5 = 0x1001;
								if (alignment != 3) {
									iVar5 = (uint)(alignment == 5) * 2 + 0x1002;
								}
								__this_01.alignment = iVar5;
								__this_02 = __this.GetComponent<ContentSizeFitter>();
								if (parent != null) {
									x = parent.GetComponent<VerticalLayoutGroup>();
									iVar5 = 0;
									bVar1 = ((Object)x != null);
									if (!bVar1) {
										iVar5 = 2;
									}
									if (__this_02 != null) {
										__this_02.horizontalFit = iVar5;
										pUVar4 = __this.GetComponent<LayoutElement>();
										x_00 = parent.GetComponent<HorizontalLayoutGroup>();
										bVar1 = ((Object)x_00 != null);
										if (bVar1) {
											if (pUVar4 == null) goto label_05ce9d32;
											pUVar4.set_flexibleWidth(0.0);
										}
										return __this;
									}
								}
							}
						}
					}
	label_05ce9d32: ;
					throw new NullReferenceException();
				}
			}
		}
	label_05ce9d37: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004BD5")]
	[Address(RVA = "0x5BE9D50", Offset = "0x5BE8D50", VA = "0x5BE9D50")]
	public static EffectText CreateEffectText(Transform parent, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateEffectText): 4 lines keep C-only constructs
		String panel;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this;
		Transform __this_00;
		VerticalLayoutGroup pUVar4;
		ContentSizeFitter __this_01;
		LayoutElement pUVar5;
		HorizontalLayoutGroup x;
		EffectText __this_02;
		int value;
		Color value_00;

		components = (Type[])new Type[4];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05cea244;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cea24e;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_VerticalLayoutGroup);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05cea24e;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_05cea249;
			components[1] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_ContentSizeFitter);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05cea24e;
			}
			if (2 < (uint)components.Length) {
				components[2] = pSVar2;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
				if (pSVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class) ;
					if (pIVar3 == null) {
	label_05cea24e: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if ((components.Length & 0xfffffffc) != 0) {
					components[3] = pSVar2;
					__this = new GameObject("EffectText", components);
					if (__this != null) {
						__this_00 = __this.transform;
						if (__this_00 != null) {
							__this_00.SetParent(parent, false);
							pUVar4 = __this.GetComponent<VerticalLayoutGroup>();
							if (pUVar4 != null) {
								pUVar4.childAlignment = 0;
								pUVar4.childForceExpandWidth = false;
								pUVar4.childForceExpandHeight = false;
								pUVar4.spacing = 0.0;
								__this_01 = __this.GetComponent<ContentSizeFitter>();
								if (parent != null) {
									pUVar4 = parent.GetComponent<VerticalLayoutGroup>();
									bVar1 = ((Object)pUVar4 != null);
									if (__this_01 != null) {
										__this_01.horizontalFit = (uint)!bVar1 * 2;
										__this_01.verticalFit = 2;
										pUVar5 = __this.GetComponent<LayoutElement>();
										x = parent.GetComponent<HorizontalLayoutGroup>();
										bVar1 = ((Object)x != null);
										if (bVar1) {
											if (pUVar5 == null) goto label_05cea244;
											pUVar5.set_flexibleWidth(0.0);
										}
										__this_02 = __this.AddComponent<EffectText>();
										if ((style != null) && (__this_02 != null) ) {
											__this_02.fontSize = (float)style.FontSize;
											panel = style.ThemePanel;
											value = 0x1001;
											if (alignment != 3) {
												value = (uint)(alignment == 5) * 2 + 0x1002;
											}
											value_00 = UIManager.GetThemeColor(panel, "DefaultLabel", "TextColor", "DefaultPanel");
											__this_02.color = value_00;
											__this_02.alignment = value;
											__this_02.text = text;
											return __this_02;
										}
									}
								}
							}
						}
					}
	label_05cea244: ;
					throw new NullReferenceException();
				}
			}
		}
	label_05cea249: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004BD6")]
	[Address(RVA = "0x5BEA260", Offset = "0x5BE9260", VA = "0x5BEA260")]
	public static NameEffectLabel CreateNameEffectLabel(Transform parent, ElementStyle style, string prefix, string name, string suffix, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateNameEffectLabel): 2 lines keep C-only constructs
		String panel;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this;
		Transform __this_00;
		LayoutElement pUVar4;
		HorizontalLayoutGroup x;
		NameEffectLabel __this_01;
		int value;
		Color value_00;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05cea5c9;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cea5d3;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05cea5d3: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				__this = new GameObject("NameEffectLabel", components);
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent(parent, false);
						pUVar4 = __this.GetComponent<LayoutElement>();
						if (parent != null) {
							x = parent.GetComponent<HorizontalLayoutGroup>();
							bVar1 = ((Object)x != null);
							if (bVar1) {
								if (pUVar4 == null) goto label_05cea5c9;
								pUVar4.set_flexibleWidth(0.0);
							}
							__this_01 = __this.AddComponent<NameEffectLabel>();
							if ((style != null) && (__this_01 != null)) {
								__this_01.fontSize = (float)style.FontSize;
								panel = style.ThemePanel;
								value = 0x1001;
								if (alignment != 3) {
									value = (uint)(alignment == 5) * 2 + 0x1002;
								}
								value_00 = UIManager.GetThemeColor(panel, "DefaultLabel", "TextColor", "DefaultPanel");
								__this_01.color = value_00;
								__this_01.alignment = value;
								__this_01.SetText(prefix, name, suffix);
								return __this_01;
							}
						}
					}
				}
	label_05cea5c9: ;
				throw new NullReferenceException();
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004BD7")]
	[Address(RVA = "0x5BEA5F0", Offset = "0x5BE95F0", VA = "0x5BEA5F0")]
	public static GameObject CreateWhiteLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateWhiteLabel): clean
		String panel;
		bool bVar1;
		GameObject __this;
		Text __this_00;
		VerticalLayoutGroup x;
		ContentSizeFitter __this_01;
		HorizontalLayoutGroup x_00;
		LayoutElement pUVar2;
		int value;
		Color UVar3;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DefaultLabel");
		if (__this != null) {
			__this_00 = __this.GetComponent<Text>();
			if ((style != null) && (__this_00 != null)) {
				__this_00.fontSize = style.FontSize;
				__this_00.set_text(title);
				__this_00.fontStyle = fontStyle;
				panel = style.ThemePanel;
				UVar3 = UIManager.GetThemeColor(panel, "WhiteLabel", "TextColor", "DefaultPanel");
				__this_00.set_color(UVar3);
				__this_00.alignment = alignment;
				if (parent != null) {
					x = parent.GetComponent<VerticalLayoutGroup>();
					value = 0;
					bVar1 = ((Object)x != null);
					__this_01 = __this_00.GetComponent<ContentSizeFitter>();
					if (!bVar1) {
						value = 2;
					}
					if (__this_01 != null) {
						__this_01.horizontalFit = value;
						x_00 = parent.GetComponent<HorizontalLayoutGroup>();
						bVar1 = ((Object)x_00 != null);
						if (bVar1) {
							pUVar2 = __this_00.GetComponent<LayoutElement>();
							if (pUVar2 == null) goto label_05cea87c;
							pUVar2.set_flexibleWidth(0.0);
						}
						return __this;
					}
				}
			}
		}
	label_05cea87c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD8")]
	[Address(RVA = "0x5BEA890", Offset = "0x5BE9890", VA = "0x5BEA890")]
	public static GameObject CreateEmptySpace(Transform parent)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateEmptySpace): clean
		GameObject __this;
		Text pUVar1;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DefaultLabel");
		if (__this != null) {
			pUVar1 = __this.GetComponent<Text>();
			if (pUVar1 != null) {
				pUVar1.set_text("");
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BD9")]
	[Address(RVA = "0x5BEA920", Offset = "0x5BE9920", VA = "0x5BEA920")]
	public static GameObject CreateLegacyHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleCenter)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateLegacyHUDLabel): clean
		GameObject __this;
		Text __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/InGame/LegacyHUDLabel");
		if (__this != null) {
			__this_00 = __this.GetComponent<Text>();
			if ((style != null) && (__this_00 != null)) {
				__this_00.fontSize = style.FontSize;
				__this_00.set_text(title);
				__this_00.fontStyle = fontStyle;
				__this_00.alignment = alignment;
				ElementFactory.ConfigureHUDLabelLayout(__this, parent);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BDA")]
	[Address(RVA = "0x5BEAB90", Offset = "0x5BE9B90", VA = "0x5BEAB90")]
	public static GameObject CreateHUDLabel(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal, TextAlignmentOptions alignment = TextAlignmentOptions.Center)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateHUDLabel): clean
		GameObject __this;
		TextMeshProUGUI __this_00;
		HorizontalLayoutGroup __this_01;
		int value;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/InGame/HUDLabel");
		if (__this == null) {
	label_05ceacde: ;
			throw new NullReferenceException();
		}
		__this_00 = __this.GetComponentInChildren<TextMeshProUGUI>(true);
		if ((style == null) || (__this_00 == null)) goto label_05ceacde;
		__this_00.fontSize = (float)style.FontSize;
		__this_00.set_text(title);
		__this_00.alignment = alignment;
		__this_00.textWrappingMode = 2;
		if (alignment == 0x204) {
			__this_01 = __this.GetComponent<HorizontalLayoutGroup>();
			if (__this_01 == null) goto label_05ceacde;
			value = 5;
		}
		else {
			if (alignment != 0x201) goto label_05ceacc1;
			__this_01 = __this.GetComponent<HorizontalLayoutGroup>();
			if (__this_01 == null) goto label_05ceacde;
			value = 3;
		}
		__this_01.childAlignment = value;
	label_05ceacc1: ;
		ElementFactory.ConfigureHUDLabelLayout(__this, parent);
		return __this;
	}

	[Token(Token = "0x6004BDB")]
	[Address(RVA = "0x5BEAA00", Offset = "0x5BE9A00", VA = "0x5BEAA00")]
	private static void ConfigureHUDLabelLayout(GameObject label, Transform parent)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$ConfigureHUDLabelLayout): clean
		bool bVar1;
		VerticalLayoutGroup x;
		ContentSizeFitter __this;
		HorizontalLayoutGroup x_00;
		LayoutElement pUVar2;
		int value;

		if (parent == null) goto label_05ceab7d;
		x = parent.GetComponent<VerticalLayoutGroup>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (label == null) goto label_05ceab7d;
			__this = label.GetComponent<ContentSizeFitter>();
			if (__this == null) goto label_05ceab7d;
			value = 0;
		}
		else {
			if (label == null) goto label_05ceab7d;
			__this = label.GetComponent<ContentSizeFitter>();
			if (__this == null) goto label_05ceab7d;
			value = 2;
		}
		__this.horizontalFit = value;
		x_00 = parent.GetComponent<HorizontalLayoutGroup>() ;
		bVar1 = ((Object)x_00 != null);
		if (!bVar1) {
			return;
		}
		pUVar2 = label.GetComponent<LayoutElement>();
		if (pUVar2 != null) {
			pUVar2.set_flexibleWidth(0.0);
			return;
		}
	label_05ceab7d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BDC")]
	[Address(RVA = "0x5BEACF0", Offset = "0x5BE9CF0", VA = "0x5BEACF0")]
	public static GameObject CreateMultiTextLabel(Transform parent, ElementStyle style, FontStyle fontStyle, TextAnchor anchor, float fontSize, int numberOfLabels, bool richText = false)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateMultiTextLabel): 3 lines keep C-only constructs
		GameObject __this;
		MultiTextLabel __this_00;
		Transform parent_00;
		uint in_register_00000014;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT44(in_register_00000014, fontStyle);
		if (Il2CppMethodInitialized_07547c51 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MultiTextLabel) ;
			Il2CppMethodInitialized_07547c51 = true;
		}
		__this = ElementFactory.CreateHorizontalGroup(parent, 0.0, 3);
		if (__this != null) {
			__this_00 = __this.AddComponent<MultiTextLabel>();
			parent_00 = __this.transform;
			if (__this_00 != null) {
				__this_00.Setup(parent_00, style, fontStyle, anchor, fontSize, numberOfLabels, richText);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BDD")]
	[Address(RVA = "0x5BEADB0", Offset = "0x5BE9DB0", VA = "0x5BEADB0")]
	public static GameObject CreateKeybindSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, KeybindPopup keybindPopup, string tooltip = "", float elementWidth = 120f, float elementHeight = 35f, int bindCount = 2)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateKeybindSetting): clean
		GameObject __this;
		KeybindSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/KeybindSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<KeybindSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, keybindPopup, tooltip, elementWidth, elementHeight, bindCount);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BDE")]
	[Address(RVA = "0x5BDBE00", Offset = "0x5BDAE00", VA = "0x5BDBE00")]
	public static GameObject CreateColorSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeColor)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateColorSetting): clean
		GameObject __this;
		ColorSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/ColorSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<ColorSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, colorPickPopup, tooltip, elementWidth, elementHeight, onChangeColor);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BDF")]
	[Address(RVA = "0x5BEAE80", Offset = "0x5BE9E80", VA = "0x5BEAE80")]
	public static GameObject CreateToggleColorSetting(Transform parent, ElementStyle style, ToggleColorSetting setting, string title, ColorPickPopup colorPickPopup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(30f)] float toggleWidth, [Optional][DefaultParameterValue(30f)] float toggleHeight, [Optional][DefaultParameterValue(90f)] float colorWidth, [Optional][DefaultParameterValue(30f)] float colorHeight, [Optional] UnityAction onToggleChanged, [Optional] UnityAction onChangeColor)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateToggleColorSetting): clean
		float spacing;
		int fontSize;
		String themePanel;
		GameObject __this;
		Transform pUVar1;
		GameObject __this_00;
		ElementStyle __this_01;
		LayoutElement pUVar2;

		if (style != null) {
			__this = ElementFactory.CreateHorizontalGroup(parent, style.Spacing, 3);
			if (__this != null) {
				pUVar1 = __this.transform;
				__this_00 = ElementFactory.CreateDefaultLabel(pUVar1, style, title, 0, 3);
				fontSize = style.FontSize;
				spacing = style.Spacing;
				themePanel = style.ThemePanel;
				__this_01 = new ElementStyle(fontSize, 0.0, spacing, themePanel);
				pUVar1 = __this.transform;
				if (setting != null) {
					ElementFactory.CreateToggleSetting(pUVar1, __this_01, (BaseSetting)setting.Enabled, (String)**(ulong*)(g_data_07556758 + 0xb8), (String)**(ulong*)(g_data_07556758 + 0xb8), toggleWidth, toggleHeight, onToggleChanged);
					pUVar1 = __this.transform;
					ElementFactory.CreateColorSetting(pUVar1, __this_01, (BaseSetting)setting.Color, (String)**(ulong*)(g_data_07556758 + 0xb8), colorPickPopup, tooltip, colorWidth, colorHeight, onChangeColor);
					if (__this_00 != null) {
						pUVar2 = __this_00.GetComponent<LayoutElement>();
						if (pUVar2 != null) {
							pUVar2.set_preferredWidth(style.TitleWidth);
							if (style.TitleWidth <= 0.0) {
								pUVar2 = __this_00.GetComponent<LayoutElement>();
								if (pUVar2 == null) goto label_05ceb094;
								pUVar2.set_preferredWidth(-1.0);
							}
							return __this;
						}
					}
				}
			}
		}
	label_05ceb094: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE0")]
	[Address(RVA = "0x5BDBBC0", Offset = "0x5BDABC0", VA = "0x5BDBBC0")]
	public static GameObject CreateIconPickSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, string[] icons, IconPickPopup popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional] string[] tooltips, [Optional][DefaultParameterValue(0f)] float elementWidth, [Optional][DefaultParameterValue(0f)] float elementHeight, [Optional] UnityAction onSelect, [Optional] TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateIconPickSetting): clean
		GameObject __this;
		IconPickSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/ButtonSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<IconPickSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, options, icons, tooltips, popup, tooltip, elementWidth, elementHeight, onSelect, tooltipPopup, intOptionValues);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE1")]
	[Address(RVA = "0x5BEB0A0", Offset = "0x5BEA0A0", VA = "0x5BEB0A0")]
	public static GameObject CreateButtonPopupSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, BasePopup popup, string tooltip = "", float elementWidth = 0f, float elementHeight = 0f)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateButtonPopupSetting): clean
		GameObject __this;
		ButtonPopupSettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/ButtonSetting");
		if (__this != null) {
			__this_00 = __this.AddComponent<ButtonPopupSettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, popup, tooltip, elementWidth, elementHeight);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE2")]
	[Address(RVA = "0x5BEB170", Offset = "0x5BEA170", VA = "0x5BEB170")]
	public static GameObject CreateVector3Setting(Transform parent, ElementStyle style, BaseSetting setting, string title, Vector3Popup vector3Popup, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(90f)] float elementWidth, [Optional][DefaultParameterValue(30f)] float elementHeight, [Optional] UnityAction onChangeVector)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateVector3Setting): clean
		GameObject __this;
		Vector3SettingElement __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/Vector3Setting");
		if (__this != null) {
			__this_00 = __this.AddComponent<Vector3SettingElement>();
			if (__this_00 != null) {
				__this_00.Setup(setting, style, title, vector3Popup, tooltip, elementWidth, elementHeight, onChangeVector);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE3")]
	[Address(RVA = "0x5BEB240", Offset = "0x5BEA240", VA = "0x5BEB240")]
	public static GameObject CreateHorizontalLine(Transform parent, ElementStyle style, float width, float height = 1f)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateHorizontalLine): clean
		String panel;
		Vector2 value;
		GameObject __this;
		Transform pUVar1;
		RectTransform __this_00;
		GameObject __this_01;
		Image pUVar2;
		Color UVar3;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/HorizontalLine");
		if (__this != null) {
			pUVar1 = __this.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("LineImage");
				if (pUVar1 != null) {
					__this_00 = pUVar1.GetComponent<RectTransform>();
					if (__this_00 != null) {
						value.y = height;
						value.x = width;
						__this_00.sizeDelta = value;
						pUVar1 = __this.transform;
						if (pUVar1 != null) {
							pUVar1 = pUVar1.Find("LineImage");
							if (pUVar1 != null) {
								__this_01 = pUVar1.gameObject;
								if (__this_01 != null) {
									__this_01.AddComponent<HorizontalLineScaler>();
									pUVar1 = __this.transform;
									if (pUVar1 != null) {
										pUVar1 = pUVar1.Find("LineImage");
										if (pUVar1 != null) {
											pUVar2 = pUVar1.GetComponent<Image>();
											if (style != null) {
												panel = style.ThemePanel;
												UVar3 = UIManager.GetThemeColor(panel, "MainBody", "LineColor", "DefaultPanel");
												if (pUVar2 != null) {
													pUVar2.set_color(UVar3);
													return __this;
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

	[Token(Token = "0x6004BE4")]
	[Address(RVA = "0x5BD1E80", Offset = "0x5BD0E80", VA = "0x5BD1E80")]
	public static GameObject CreateHorizontalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateHorizontalGroup): clean
		bool bVar1;
		GameObject __this;
		HorizontalLayoutGroup pUVar2;
		LayoutElement pUVar3;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/HorizontalGroup");
		if (__this != null) {
			pUVar2 = __this.GetComponent<HorizontalLayoutGroup>();
			if (pUVar2 != null) {
				pUVar2.spacing = spacing;
				pUVar2 = __this.GetComponent<HorizontalLayoutGroup>();
				if (pUVar2 != null) {
					pUVar2.childAlignment = alignment;
					if (parent != null) {
						pUVar2 = parent.GetComponent<HorizontalLayoutGroup>();
						bVar1 = ((Object)pUVar2 != null);
						if (bVar1) {
							pUVar3 = __this.GetComponent<LayoutElement>();
							if (pUVar3 == null) goto label_05cd1fc8;
							pUVar3.set_flexibleWidth(0.0);
						}
						return __this;
					}
				}
			}
		}
	label_05cd1fc8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE5")]
	[Address(RVA = "0x5BEB450", Offset = "0x5BEA450", VA = "0x5BEB450")]
	public static GameObject CreatePlayerKDRRow(Transform parent, ElementStyle style, Player player)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreatePlayerKDRRow): clean
		GameObject __this;
		PlayerKDRRow __this_00;
		KDRPanel panel;

		__this = ElementFactory.CreateHorizontalGroup(parent, 10.0, 3);
		if (__this != null) {
			__this_00 = __this.AddComponent<PlayerKDRRow>();
			if (parent != null) {
				panel = parent.GetComponent<KDRPanel>();
				if (__this_00 != null) {
					__this_00.Setup(style, player, panel);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE6")]
	[Address(RVA = "0x5BEB500", Offset = "0x5BEA500", VA = "0x5BEB500")]
	public static GameObject CreateTeamKDRRow(Transform parent, ElementStyle style, string team)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateTeamKDRRow): clean
		GameObject __this;
		TeamKDRRow __this_00;

		__this = ElementFactory.CreateHorizontalGroup(parent, 10.0, 3);
		if (__this != null) {
			__this_00 = __this.AddComponent<TeamKDRRow>();
			if (__this_00 != null) {
				__this_00.Setup(style, team);
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE7")]
	[Address(RVA = "0x5BEB580", Offset = "0x5BEA580", VA = "0x5BEB580")]
	public static GameObject CreateVerticalGroup(Transform parent, float spacing, TextAnchor alignment = TextAnchor.UpperLeft)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateVerticalGroup): clean
		bool bVar1;
		GameObject __this;
		VerticalLayoutGroup pUVar2;
		LayoutElement pUVar3;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/VerticalGroup");
		if (__this != null) {
			pUVar2 = __this.GetComponent<VerticalLayoutGroup>();
			if (pUVar2 != null) {
				pUVar2.spacing = spacing;
				pUVar2 = __this.GetComponent<VerticalLayoutGroup>();
				if (pUVar2 != null) {
					pUVar2.childAlignment = alignment;
					if (parent != null) {
						pUVar2 = parent.GetComponent<VerticalLayoutGroup>();
						bVar1 = ((Object)pUVar2 != null);
						if (bVar1) {
							pUVar3 = __this.GetComponent<LayoutElement>();
							if (pUVar3 == null) goto label_05ceb6c8;
							pUVar3.set_flexibleWidth(0.0);
						}
						return __this;
					}
				}
			}
		}
	label_05ceb6c8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE8")]
	[Address(RVA = "0x5BEB6D0", Offset = "0x5BEA6D0", VA = "0x5BEB6D0")]
	public static CollapsibleSection CreateCollapsibleSection(Transform parent, ElementStyle style, string title, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateCollapsibleSection): clean
		String panel;
		ColorBlock value;
		GameObject __this;
		Text __this_00;
		Button __this_01;
		CollapsibleSection __this_02;
		ColorBlock local_88;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/TextButton");
		if (__this != null) {
			__this_00 = __this.GetComponent<Text>();
			if ((style != null) && (__this_00 != null)) {
				__this_00.fontSize = style.FontSize;
				__this_00.fontStyle = 1;
				__this_01 = __this.GetComponent<Button>();
				panel = style.ThemePanel;
				local_88 = UIManager.GetThemeColorBlock(panel, "TextButton", "", "DefaultPanel");
				if (__this_01 != null) {
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
					__this_01.colors = value;
					__this_02 = __this.AddComponent<CollapsibleSection>();
					if (__this_02 != null) {
						__this_02.Setup(title, style, startExpanded, onExpandedChanged);
						return __this_02;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BE9")]
	[Address(RVA = "0x5BEB8D0", Offset = "0x5BEA8D0", VA = "0x5BEB8D0")]
	public static CollapsibleToggleSection CreateCollapsibleToggleSection(Transform parent, ElementStyle style, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateCollapsibleToggleSection): 9 lines keep C-only constructs
		String panel;
		ColorBlock value;
		bool bVar1;
		GameObject __this;
		HorizontalLayoutGroup pUVar2;
		LayoutElement pUVar3;
		Transform pUVar4;
		Object obj;
		Transform parent_00;
		GameObject pUVar5;
		Text pUVar6;
		Button pUVar7;
		CollapsibleToggleSection __this_00;
		Toggle pUStack_a0;
		byte[] auStack_88 = new byte[32];
		Color UStack_68;
		Color UStack_58;
		Color UStack_48;
		float fStack_38;
		float fStack_34;

		if (Il2CppMethodInitialized_07547c5e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text) ;
			Il2CppMethodInitialized_07547c5e = true;
		}
		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/HorizontalGroup");
		if (__this != null) {
			pUVar2 = __this.GetComponent<HorizontalLayoutGroup>();
			if (pUVar2 != null) {
				pUVar2.spacing = 6.0;
				pUVar2.childAlignment = 3;
				if (parent != null) {
					pUVar2 = parent.GetComponent<HorizontalLayoutGroup>();
					bVar1 = ((Object)pUVar2 != null);
					if (bVar1) {
						pUVar3 = __this.GetComponent<LayoutElement>();
						if (pUVar3 == null) goto label_05cebed9;
						pUVar3.set_flexibleWidth(0.0);
					}
					pUVar4 = __this.transform;
					obj = (Object)ElementFactory.InstantiateAndBind(pUVar4, "Prefabs/Elements/ToggleSetting");
					if (obj != null) {
						pUVar4 = obj.transform;
						if (pUVar4 != null) {
							pUVar4 = pUVar4.Find("Toggle");
							bVar1 = ((Object)pUVar4 != null);
							if (bVar1) {
								parent_00 = __this.transform;
								if (pUVar4 == null) goto label_05cebed9;
								pUVar4.SetParent(parent_00, false);
								pUVar4.SetSiblingIndex(0);
								pUVar3 = pUVar4.GetComponent<LayoutElement>();
								if (pUVar3 == null) {
									pUVar5 = pUVar4.gameObject;
									if (pUVar5 == null) goto label_05cebed9;
									pUVar3 = pUVar5.AddComponent<LayoutElement>();
									if (pUVar3 == null) goto label_05cebed9;
								}
								pUVar3.set_preferredWidth(22.0);
								pUVar3.set_minWidth(22.0);
								pUStack_a0 = pUVar4.GetComponent<Toggle>();
								Object.Destroy(obj);
							}
							else {
								pUStack_a0 = obj.GetComponentInChildren<Toggle>();
								pUVar6 = obj.GetComponentInChildren<Text>();
								bVar1 = ((Object)pUVar6 != null) ;
								if (bVar1) {
									if (pUVar6 == null) goto label_05cebed9;
									pUVar6.set_text((String)**(ulong*)(g_data_07556758 + 0xb8));
								}
								pUVar3 = obj.GetComponent<LayoutElement>();
								if (pUVar3 == null) {
									pUVar3 = obj.AddComponent<LayoutElement>();
									if (pUVar3 == null) goto label_05cebed9;
								}
								pUVar3.set_preferredWidth(22.0);
								pUVar3.set_minWidth(22.0);
							}
							pUVar4 = __this.transform;
							pUVar5 = ElementFactory.InstantiateAndBind(pUVar4, "Prefabs/Elements/TextButton");
							if (pUVar5 != null) {
								pUVar6 = pUVar5.GetComponent<Text>();
								if ((style != null) && (pUVar6 != null)) {
									pUVar6.fontSize = style.FontSize;
									pUVar6.fontStyle = 1;
									pUVar7 = pUVar5.GetComponent<Button>();
									panel = style.ThemePanel;
									UIManager.GetThemeColorBlock((ColorBlock)auStack_88, panel, "TextButton", "", "DefaultPanel");
									if (pUVar7 != null) {
										value.m_NormalColor.b = (float)auStack_88._8_4_;
										value.m_NormalColor.a = (float)auStack_88._12_4_;
										value.m_NormalColor.r = (float)auStack_88._0_4_;
										value.m_NormalColor.g = (float)auStack_88._4_4_;
										value.m_HighlightedColor.r = (float)auStack_88._16_4_;
										value.m_HighlightedColor.g = (float)auStack_88._20_4_;
										value.m_HighlightedColor.b = (float)auStack_88._24_4_;
										value.m_HighlightedColor.a = (float)auStack_88._28_4_;
										value.m_PressedColor.r = UStack_68.r;
										value.m_PressedColor.g = UStack_68.g;
										value.m_PressedColor.b = UStack_68.b;
										value.m_PressedColor.a = UStack_68.a;
										value.m_SelectedColor.r = UStack_58.r;
										value.m_SelectedColor.g = UStack_58.g;
										value.m_SelectedColor.b = UStack_58.b;
										value.m_SelectedColor.a = UStack_58.a;
										value.m_DisabledColor.r = UStack_48.r;
										value.m_DisabledColor.g = UStack_48.g;
										value.m_DisabledColor.b = UStack_48.b;
										value.m_DisabledColor.a = UStack_48.a;
										value.m_ColorMultiplier = fStack_38;
										value.m_FadeDuration = fStack_34;
										pUVar7.colors = value;
										__this_00 = __this.AddComponent<CollapsibleToggleSection>();
										pUVar7 = pUVar5.GetComponent<Button>();
										if (__this_00 != null) {
											__this_00.Setup(pUVar6, pUVar7, pUStack_a0, title, startEnabled, startExpanded, onToggleChanged);
											return __this_00;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05cebed9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BEA")]
	[Address(RVA = "0x5BEBEE0", Offset = "0x5BEAEE0", VA = "0x5BEBEE0")]
	public static Text CreateOverlayLabel(Transform parent, Transform fontSource, string text, Color color, TextAnchor alignment = TextAnchor.MiddleCenter, FontStyle fontStyle = FontStyle.Normal, int fontSize = 14)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$CreateOverlayLabel): 3 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		Text __this_02;
		Text __this_03;
		Font value;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05cec2db;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cec2e5;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Text);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05cec2e5: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				__this = new GameObject("OverlayLabel", components);
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent(parent, false);
						__this_01 = (RectTransform)__this.transform;
						if ((__this_01 != null) &&(__this_01.klass != typeof(RectTransform))) {
							throw new InvalidCastException();
						}
						if (__this_01 != null) {
							__this_01.anchorMin = (Vector2)(Vector2.zeroVector);
							__this_01.anchorMax = (Vector2)(Vector2.oneVector);
							__this_01.offsetMin = (Vector2)(Vector2.zeroVector);
							__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
							__this_02 = __this.GetComponent<Text>();
							if (__this_02 != null) {
								__this_02.set_text(text);
								__this_02.alignment = alignment;
								__this_02.set_color(color);
								__this_02.set_raycastTarget(false);
								value = null;
								bVar1 = ((Object)fontSource != null);
								if (bVar1) {
									if (fontSource == null) goto label_05cec2db;
									__this_03 = fontSource.GetComponentInChildren<Text>();
									if (__this_03 == null) {
										value = null;
									}
									else {
										value = __this_03.font;
									}
								}
								__this_02.font = value;
								__this_02.fontSize = fontSize;
								__this_02.fontStyle = fontStyle;
								return __this_02;
							}
						}
					}
				}
	label_05cec2db: ;
				throw new NullReferenceException();
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004BEB")]
	[Address(RVA = "0x5BEC300", Offset = "0x5BEB300", VA = "0x5BEC300")]
	public static float GetTextWidth(Transform parent, ElementStyle style, string title, FontStyle fontStyle = FontStyle.Normal)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$GetTextWidth): clean
		Object obj;
		RectTransform __this;
		float fStack_38;

		obj = (Object)ElementFactory.CreateDefaultLabel(parent, style, title, fontStyle, 4);
		Canvas.ForceUpdateCanvases();
		if (obj != null) {
			__this = obj.GetComponent<RectTransform>();
			if (__this != null) {
				Object.Destroy(obj);
				return fStack_38;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BEC")]
	public static GameObject InstantiateAndSetupPanel<T>(Transform parent, string asset, bool enabled = false) where T : BasePanel
	{
		return null;
	}

	[Token(Token = "0x6004BED")]
	[Address(RVA = "0x5BEC3C0", Offset = "0x5BEB3C0", VA = "0x5BEC3C0")]
	public static GameObject InstantiateAndSetupCustomPopup(Transform parent, string title, float width, float height, bool enabled = false)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$InstantiateAndSetupCustomPopup): 2 lines keep C-only constructs
		GameObject __this;
		CustomPopup __this_00;
		BasePanel parent_00;
		undefined7 in_register_00000011;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000011, enabled);
		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Panels/HeadedPanel");
		if (__this != null) {
			__this_00 = __this.AddComponent<CustomPopup>();
			if (parent != null) {
				parent_00 = parent.GetComponent<BasePanel>();
				if (__this_00 != null) {
					__this_00.Setup(parent_00, title, width, height);
					__this.SetActive(false);
					__this.SetActive(enabled);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BEE")]
	[Address(RVA = "0x5BD9730", Offset = "0x5BD8730", VA = "0x5BD9730")]
	public static GameObject InstantiateAndBind(Transform parent, string asset)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$InstantiateAndBind): clean
		String path;
		GameObject root;
		Transform pUVar1;

		path = ResourcePaths.UI;
		root = ResourceManager.InstantiateAsset<GameObject>(path, asset, true, false);
		LanguageFonts.Localize(root);
		if (root != null) {
			pUVar1 = root.transform;
			if (pUVar1 != null) {
				pUVar1.SetParent(parent, false);
				pUVar1 = root.transform;
				if (pUVar1 != null) {
					pUVar1.localPosition = (Vector3)(Vector3.zeroVector);
					return root;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BEF")]
	[Address(RVA = "0x5BD56C0", Offset = "0x5BD46C0", VA = "0x5BD56C0")]
	public static void SetAnchor(GameObject obj, TextAnchor anchor, TextAnchor pivot, Vector2 offset)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$SetAnchor): clean
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;
		RectTransform __this;
		float fVar1;
		float fVar2;

		if (obj != null) {
			__this = obj.GetComponent<RectTransform>();
			fVar1 = 0.0;
			fVar2 = 1.0;
			switch(anchor) {
			case 0:
				break;
			case 1:
				fVar1 = 0.5;
				fVar2 = 1.0;
				break;
			case 2:
				fVar1 = 1.0;
				fVar2 = 1.0;
				break;
			case 3:
				fVar1 = 0.0;
				fVar2 = 0.5;
				break;
			case 4:
				fVar1 = 0.5;
				fVar2 = 0.5;
				break;
			case 5:
				fVar1 = 1.0;
				fVar2 = 0.5;
				break;
			default: ;
				fVar1 = 0.0;
				fVar2 = 0.0;
				break;
			case 7:
				fVar1 = 0.5;
				fVar2 = 0.0;
				break;
			case 8:
				fVar1 = 1.0;
				fVar2 = 0.0;
			}
			if (__this != null) {
				value.y = fVar2;
				value.x = fVar1;
				__this.anchorMax = value;
				value_01.y = fVar2;
				value_01.x = fVar1;
				__this.anchorMin = value_01;
				fVar1 = 0.0;
				fVar2 = 1.0;
				switch(pivot) {
				case 0:
					break;
				case 1:
					fVar1 = 0.5;
					fVar2 = 1.0;
					break;
				case 2:
					fVar1 = 1.0;
					fVar2 = 1.0;
					break;
				case 3:
					fVar1 = 0.0;
					fVar2 = 0.5;
					break;
				case 4:
					fVar1 = 0.5;
					fVar2 = 0.5;
					break;
				case 5:
					fVar1 = 1.0;
					fVar2 = 0.5;
					break;
				default: ;
					fVar1 = 0.0;
					fVar2 = 0.0;
					break;
				case 7:
					fVar1 = 0.5;
					fVar2 = 0.0;
					break;
				case 8:
					fVar1 = 1.0;
					fVar2 = 0.0;
				}
				value_00.y = fVar2;
				value_00.x = fVar1;
				__this.pivot = value_00;
				__this.anchoredPosition = offset;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BF0")]
	[Address(RVA = "0x5BEC4B0", Offset = "0x5BEB4B0", VA = "0x5BEC4B0")]
	public static Vector2 GetAnchorVector(TextAnchor anchor)
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$GetAnchorVector): clean
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		Vector2 UVar4;
		Vector2 UVar5;
		Vector2 UVar6;
		Vector2 UVar7;
		Vector2 UVar8;
		float fVar9;
		float fVar10;

		fVar9 = 0.0;
		fVar10 = 1.0;
		switch(anchor) {
		case 0:
			break;
		case 1:
			UVar8.x = 0.5;
			UVar8.y = 1.0;
			return (Vector2)UVar8;
		case 2:
			UVar7.x = 1.0;
			UVar7.y = 1.0;
			return (Vector2)UVar7;
		case 3:
			UVar6.x = 0.0;
			UVar6.y = 0.5;
			return (Vector2)UVar6;
		case 4:
			UVar5.x = 0.5;
			UVar5.y = 0.5;
			return (Vector2)UVar5;
		case 5:
			UVar4.x = 1.0;
			UVar4.y = 0.5;
			return (Vector2)UVar4;
		default: ;
			UVar1.x = 0.0;
			UVar1.y = 0.0;
			return (Vector2)UVar1;
		case 7:
			UVar3.x = 0.5;
			UVar3.y = 0.0;
			return (Vector2)UVar3;
		case 8:
			fVar9 = 1.0;
			fVar10 = 0.0;
		}
		UVar2.y = fVar10;
		UVar2.x = fVar9;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x6004BF1")]
	[Address(RVA = "0x5BEC510", Offset = "0x5BEB510", VA = "0x5BEC510")]
	public ElementFactory()
	{
		// Lifted from source/cpp/UI/ElementFactory.c (UI.ElementFactory$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ElementFactory.c.

	// UI.ElementFactory$$CreateDefaultMenu<object>: 2 lines keep C-only constructs
	private static object CreateDefaultMenu_object()
	{
		MethodInfo_34D7240_RGCTXs pMVar1;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			pMVar1 = method.rgctx_data;
			if (pMVar1 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar1 = method.rgctx_data;
			}
		}
		pIVar2 = ElementFactory.CreateMenu<object>("Prefabs/Panels/DefaultMenu");
		return pIVar2;
	}

	// UI.ElementFactory$$CreateDefaultPopup<object>: 2 lines keep C-only constructs
	private static object CreateDefaultPopup_object(Transform parent, bool enabled)
	{
		MethodInfo_34D7290_RGCTXs pMVar1;
		GameObject __this;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			pMVar1 = method.rgctx_data;
			if (pMVar1 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar1 = method.rgctx_data;
			}
		}
		__this = ElementFactory.InstantiateAndSetupPanel<object>(parent, "Prefabs/Panels/HeadedPanel", enabled);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar2 = __this.GetComponent<object>();
		return pIVar2;
	}

	// UI.ElementFactory$$CreateEmptyPanel<object>: 2 lines keep C-only constructs
	private static object CreateEmptyPanel_object(Transform parent, bool enabled)
	{
		MethodInfo_34D7300_RGCTXs pMVar1;
		GameObject __this;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			pMVar1 = method.rgctx_data;
			if (pMVar1 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar1 = method.rgctx_data;
			}
		}
		__this = ElementFactory.InstantiateAndSetupPanel<object>(parent, "Prefabs/Panels/EmptyPanel", enabled);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar2 = __this.GetComponent<object>();
		return pIVar2;
	}

	// UI.ElementFactory$$CreateHeadedPanel<object>: 2 lines keep C-only constructs
	private static object CreateHeadedPanel_object(Transform parent, bool enabled)
	{
		MethodInfo_34D7370_RGCTXs pMVar1;
		GameObject __this;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			pMVar1 = method.rgctx_data;
			if (pMVar1 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar1 = method.rgctx_data;
			}
		}
		__this = ElementFactory.InstantiateAndSetupPanel<object>(parent, "Prefabs/Panels/HeadedPanel", enabled);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar2 = __this.GetComponent<object>();
		return pIVar2;
	}

	// UI.ElementFactory$$CreateMenu<object>: 1 lines keep C-only constructs
	private static object CreateMenu_object(String asset)
	{
		uint uVar1;
		String path;
		GameObject root;
		Transform __this;
		object pIVar2;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
				goto joined_r0x035d743e;
			}
		}
		uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
	joined_r0x035d743e: ;
		if (uVar1 == 0) {
		}
		path = ResourcePaths.UI;
		root = ResourceManager.InstantiateAsset<GameObject>(path, asset, true, false);
		LanguageFonts.Localize(root);
		if (root != null) {
			__this = root.transform;
			if (__this != null) {
				__this.position = (Vector3)(Vector3.zeroVector);
				pIVar2 = root.AddComponent<object>();
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ElementFactory$$CreateSimplePanel<object>: 2 lines keep C-only constructs
	private static object CreateSimplePanel_object(Transform parent, bool enabled)
	{
		MethodInfo_34D7550_RGCTXs pMVar1;
		GameObject __this;
		object pIVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			pMVar1 = method.rgctx_data;
			if (pMVar1 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar1 = method.rgctx_data;
			}
		}
		__this = ElementFactory.InstantiateAndSetupPanel<object>(parent, "Prefabs/Panels/SimplePanel", enabled);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar2 = __this.GetComponent<object>();
		return pIVar2;
	}

	// UI.ElementFactory$$CreateTooltipPopup<object>: 2 lines keep C-only constructs
	private static GameObject CreateTooltipPopup_object(Transform parent, bool enabled)
	{
		MethodInfo_34D75C0_RGCTXs pMVar1;
		GameObject pUVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			pMVar1 = method.rgctx_data;
			if (pMVar1 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar1 = method.rgctx_data;
			}
		}
		pUVar2 = ElementFactory.InstantiateAndSetupPanel<object>(parent, "Prefabs/Misc/TooltipPopup", enabled);
		return pUVar2;
	}

	// UI.ElementFactory$$InstantiateAndSetupPanel<object>: 2 lines keep C-only constructs
	private static GameObject InstantiateAndSetupPanel_object(Transform parent, String asset, bool enabled)
	{
		GameObject __this;
		object pIVar1;
		BasePanel pUVar2;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		__this = ElementFactory.InstantiateAndBind(parent, asset);
		if (__this != null) {
			pIVar1 = __this.AddComponent<object>();
			if (parent != null) {
				pUVar2 = parent.GetComponent<BasePanel>();
				if (pIVar1 != null) {
					(*pIVar1.klass.vtable[0x14].methodPtr)(pIVar1,pUVar2,pIVar1.klass.vtable[0x14].method);
					__this.SetActive(false);
					__this.SetActive(enabled);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.ElementFactory.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// UI.ElementFactory.<>c__DisplayClass12_1$$.ctor: clean
	private void c__DisplayClass12_1__ctor()
	{
		base();
		return;
	}

	// UI.ElementFactory.<>c__DisplayClass12_1$$<CreateSetActionButtons>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass12_1__CreateSetActionButtons_b__0()
	{
		ElementFactory.c__DisplayClass12_0 pUVar1;
		Action<string> pSVar2;
		code *vtableDispatch;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(pSVar2 = pUVar1.onClick, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,this.name,pSVar2.method,vtableDispatch) ;
		return;
	}
}
