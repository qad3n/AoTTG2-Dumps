// ==================== AoTTG2 cross-reference ====================
// Type: UI.ToggleSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ToggleSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000801")]
internal class ToggleSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027E2")]
	[FieldOffset(Offset = "0x38")]
	protected Toggle _toggle;

	[Token(Token = "0x40027E3")]
	[FieldOffset(Offset = "0x40")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x40027E4")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onValueChanged;

	[Token(Token = "0x17000D57")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CB5")]
		[Address(RVA = "0x5BF8F00", Offset = "0x5BF7F00", VA = "0x5BF8F00", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/ToggleSettingElement.c (UI.ToggleSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547cc4 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547cc4 = true;
			}
			__this_00 = new HashSet<SettingType>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(1);
			return __this_00;
		}
	}

	[Token(Token = "0x6004CB6")]
	[Address(RVA = "0x5BF8F80", Offset = "0x5BF7F80", VA = "0x5BF8F80")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, UnityAction onValueChanged)
	{
		// Lifted from source/cpp/UI/ToggleSettingElement.c (UI.ToggleSettingElement$$Setup): 8 lines keep C-only constructs
		Toggle* targetAddress;
		float fVar1;
		UnityEngine_Events_UnityEvent_bool__o __this_00;
		String panel;
		Vector2 value;
		ColorBlock value_00;
		Transform pUVar2;
		Toggle pUVar3;
		UnityAction<T0> call;
		LayoutElement __this_01;
		RectTransform __this_02;
		Image pUVar4;
		Color UVar5;
		ColorBlock local_88;

		this._onValueChanged = onValueChanged;
		pUVar2 = this.transform;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.Find("Toggle");
			if (pUVar2 != null) {
				pUVar3 = pUVar2.GetComponent<Toggle>();
				targetAddress = &this._toggle;
				this._toggle = pUVar3;
				pUVar3 = this._toggle;
				if (pUVar3 != null) {
					__this_00 = (UnityEngine_Events_UnityEvent_bool__o)pUVar3.onValueChanged;
					call = new UnityAction<bool>((object)this, (intptr_t)MethodInfo_UI_ToggleSettingElement_Setup_b__5_0);
					if (__this_00 != null) {
						__this_00.AddListener(call);
						if (*targetAddress != null) {
							pUVar2 = (*targetAddress).transform;
							if (pUVar2 != null) {
								pUVar2 = pUVar2.Find("Background");
								if (pUVar2 != null) {
									__this_01 = pUVar2.GetComponent<LayoutElement>();
									if (__this_01 != null) {
										pUVar2 = __this_01.transform;
										if (pUVar2 != null) {
											pUVar2 = pUVar2.Find("Checkmark");
											if (pUVar2 != null) {
												__this_02 = pUVar2.GetComponent<RectTransform>();
												__this_01.set_preferredHeight(elementHeight);
												__this_01.set_preferredWidth(elementWidth);
												if (__this_02 != null) {
													fVar1 = this._checkMarkSizeMultiplier;
													value.y = elementHeight * fVar1;
													value.x = elementWidth * fVar1;
													__this_02.sizeDelta = value;
													this.Setup(setting, style, title, tooltip);
													pUVar4 = __this_02.GetComponent<Image>();
													if (style != null) {
														panel = style.ThemePanel;
														UVar5 = UIManager.GetThemeColor(panel, "DefaultSetting", "ToggleFilledColor", "DefaultPanel");
														if (pUVar4 != null) {
															pUVar4.set_color(UVar5);
															pUVar3 = *targetAddress;
															local_88 = UIManager.GetThemeColorBlock(style.ThemePanel, "DefaultSetting", "Toggle", "DefaultPanel");
															if (pUVar3 != null) {
																value_00.m_NormalColor.b = local_88.m_NormalColor.b;
																value_00.m_NormalColor.a = local_88.m_NormalColor.a;
																value_00.m_NormalColor.r = local_88.m_NormalColor.r;
																value_00.m_NormalColor.g = local_88.m_NormalColor.g;
																value_00.m_HighlightedColor.r = local_88.m_HighlightedColor.r;
																value_00.m_HighlightedColor.g = local_88.m_HighlightedColor.g;
																value_00.m_HighlightedColor.b = local_88.m_HighlightedColor.b;
																value_00.m_HighlightedColor.a = local_88.m_HighlightedColor.a;
																value_00.m_PressedColor.r = local_88.m_PressedColor.r;
																value_00.m_PressedColor.g = local_88.m_PressedColor.g;
																value_00.m_PressedColor.b = local_88.m_PressedColor.b;
																value_00.m_PressedColor.a = local_88.m_PressedColor.a;
																value_00.m_SelectedColor.r = local_88.m_SelectedColor.r;
																value_00.m_SelectedColor.g = local_88.m_SelectedColor.g;
																value_00.m_SelectedColor.b = local_88.m_SelectedColor.b;
																value_00.m_SelectedColor.a = local_88.m_SelectedColor.a;
																value_00.m_DisabledColor.r = local_88.m_DisabledColor.r;
																value_00.m_DisabledColor.g = local_88.m_DisabledColor.g;
																value_00.m_DisabledColor.b = local_88.m_DisabledColor.b;
																value_00.m_DisabledColor.a = local_88.m_DisabledColor.a;
																value_00.m_ColorMultiplier = local_88.m_ColorMultiplier;
																value_00.m_FadeDuration = local_88.m_FadeDuration;
																pUVar3.colors = value_00;
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

	[Token(Token = "0x6004CB7")]
	[Address(RVA = "0x5BF9370", Offset = "0x5BF8370", VA = "0x5BF9370")]
	protected void OnValueChanged(bool value)
	{
		// Lifted from source/cpp/UI/ToggleSettingElement.c (UI.ToggleSettingElement$$OnValueChanged): 3 lines keep C-only constructs
		byte bVar1;
		Settings_TypedSetting_bool__o __this_00;
		UnityAction pUVar2;

		__this_00 = (Settings_TypedSetting_bool__o)this._setting;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(BoolSetting)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BoolSetting))) {
			throw new InvalidCastException();
		}
		__this_00.Value = value;
		pUVar2 = this._onValueChanged;
		if (pUVar2 == null) {
			return;
		}
		(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
		return;
	}

	[Token(Token = "0x6004CB8")]
	[Address(RVA = "0x5BF9420", Offset = "0x5BF8420", VA = "0x5BF9420", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/ToggleSettingElement.c (UI.ToggleSettingElement$$SyncElement): 1 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		Toggle __this_00;

		pSVar2 = this._setting;
		if (pSVar2 != null) {
			bVar1 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if (((pSVar2.klass._2).typeHierarchyDepth < bVar1) ||((pSVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BoolSetting))) {
				throw new InvalidCastException();
			}
			__this_00 = this._toggle;
			if (__this_00 != null) {
				__this_00.SetIsOnWithoutNotify(*(bool)((long)&(*(ulong)((sbyte)pSVar2 + 0x18)) + 1));
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CB9")]
	[Address(RVA = "0x5BF94B0", Offset = "0x5BF84B0", VA = "0x5BF94B0")]
	public ToggleSettingElement()
	{
		// Lifted from source/cpp/UI/ToggleSettingElement.c (UI.ToggleSettingElement$$.ctor): clean
		this._checkMarkSizeMultiplier = 0.66;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ToggleSettingElement.c.

	// UI.ToggleSettingElement$$<Setup>b__5_0: clean
	private void Setup_b__5_0(bool value)
	{
		this.OnValueChanged(value);
		return;
	}
}
