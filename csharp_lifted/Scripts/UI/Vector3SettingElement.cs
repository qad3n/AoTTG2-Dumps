// ==================== AoTTG2 cross-reference ====================
// Type: UI.Vector3SettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/Vector3SettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/Vector3SettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000803")]
internal class Vector3SettingElement : BaseSettingElement
{
	[Token(Token = "0x40027E6")]
	[FieldOffset(Offset = "0x38")]
	private Text _text;

	[Token(Token = "0x40027E7")]
	[FieldOffset(Offset = "0x40")]
	private Vector3Popup _vector3Popup;

	[Token(Token = "0x40027E8")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x17000D58")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CBF")]
		[Address(RVA = "0x5BF97E0", Offset = "0x5BF87E0", VA = "0x5BF97E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/Vector3SettingElement.c (UI.Vector3SettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547ccb == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547ccb = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(8);
			return __this_00;
		}
	}

	[Token(Token = "0x6004CC0")]
	[Address(RVA = "0x5BF9860", Offset = "0x5BF8860", VA = "0x5BF9860")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, Vector3Popup vector3Popup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeVector)
	{
		// Lifted from source/cpp/UI/Vector3SettingElement.c (UI.Vector3SettingElement$$Setup): 4 lines keep C-only constructs
		Text* targetAddress;
		UnityEvent __this_00;
		String panel;
		ColorBlock value;
		Transform pUVar1;
		GameObject __this_01;
		LayoutElement pUVar2;
		Button pUVar3;
		UnityAction __this_02;
		Text pUVar4;
		Color UVar5;
		ColorBlock local_88;

		this._vector3Popup = vector3Popup;
		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Vector3Button");
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
								__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_Vector3SettingElement_Setup_b__5_0);
								if (__this_00 != null) {
									__this_00.AddListener(__this_02);
									pUVar3 = __this_01.GetComponent<Button>();
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
													targetAddress = &this._text;
													this._text = pUVar4;
													pUVar4 = this._text;
													UVar5 = UIManager.GetThemeColor(style.ThemePanel, "DefaultButton", "TextColor", "DefaultPanel");
													if (pUVar4 != null) {
														pUVar4.set_color(UVar5);
														pUVar4 = *targetAddress;
														if (pUVar4 != null) {
															pUVar4.fontSize = style.FontSize;
															this._onChangeVector = onChangeVector;
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
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CC1")]
	[Address(RVA = "0x5BF9C20", Offset = "0x5BF8C20", VA = "0x5BF9C20")]
	protected void OnButtonClicked()
	{
		// Lifted from source/cpp/UI/Vector3SettingElement.c (UI.Vector3SettingElement$$OnButtonClicked): 1 lines keep C-only constructs
		byte bVar1;
		Vector3Popup __this_00;
		Vector3Setting setting;

		__this_00 = this._vector3Popup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		setting = (Vector3Setting)this._setting;
		if (setting != null) {
			bVar1 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Vector3Setting))) {
				throw new InvalidCastException();
			}
		}
		__this_00.Show(setting, this._text, this._onChangeVector);
		return;
	}

	[Token(Token = "0x6004CC2")]
	[Address(RVA = "0x5BF9CA0", Offset = "0x5BF8CA0", VA = "0x5BF9CA0", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/Vector3SettingElement.c (UI.Vector3SettingElement$$SyncElement): 1 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		Text pUVar3;
		Vector3 vector;
		String pSVar4;

		pSVar2 = this._setting;
		if (pSVar2 != null) {
			bVar1 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
			if (((pSVar2.klass._2).typeHierarchyDepth < bVar1) ||((pSVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Vector3Setting) )) {
				throw new InvalidCastException();
			}
			pUVar3 = this._text;
			vector = *(Vector3)((long)&(*(ulong)((sbyte)pSVar2 + 0x20)) + 4);
			pSVar4 = MiscExtensions.ToDisplayString((Vector3)vector);
			if (pUVar3 != null) {
				pUVar3.set_text(pSVar4);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CC3")]
	[Address(RVA = "0x5BF9D90", Offset = "0x5BF8D90", VA = "0x5BF9D90")]
	public Vector3SettingElement()
	{
		// Lifted from source/cpp/UI/Vector3SettingElement.c (UI.Vector3SettingElement$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/Vector3SettingElement.c.

	// UI.Vector3SettingElement$$<Setup>b__5_0: 1 lines keep C-only constructs
	private void Setup_b__5_0()
	{
		byte bVar1;
		Vector3Popup __this_00;
		Vector3Setting setting;

		__this_00 = this._vector3Popup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		setting = (Vector3Setting)this._setting;
		if (setting != null) {
			bVar1 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Vector3Setting))) {
				throw new InvalidCastException();
			}
		}
		__this_00.Show(setting, this._text, this._onChangeVector);
		return;
	}
}
