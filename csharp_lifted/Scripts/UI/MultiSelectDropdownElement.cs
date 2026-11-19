// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiSelectDropdownElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiSelectDropdownElement.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F9")]
internal class MultiSelectDropdownElement : BaseSettingElement
{
	[Token(Token = "0x20007FB")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40027CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40027CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40027CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MultiSelectDropdownElement _003C_003E4__this;

		[Token(Token = "0x17000D50")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004C8E")]
			[Address(RVA = "0x5BF5FA0", Offset = "0x5BF4FA0", VA = "0x5BF5FA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D51")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004C90")]
			[Address(RVA = "0x5BF5FF0", Offset = "0x5BF4FF0", VA = "0x5BF5FF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004C8B")]
		[Address(RVA = "0x5BF5A60", Offset = "0x5BF4A60", VA = "0x5BF5A60")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__28(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004C8C")]
		[Address(RVA = "0x5BF5D90", Offset = "0x5BF4D90", VA = "0x5BF5D90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004C8D")]
		[Address(RVA = "0x5BF5DA0", Offset = "0x5BF4DA0", VA = "0x5BF5DA0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$MoveNext): clean
			int iVar1;
			MultiSelectDropdownElement __this_00;
			Scrollbar pUVar2;
			GameObject pUVar3;
			bool bVar4;
			object pIVar5;
			Transform pUVar6;
			Vector3 UVar7;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 2) {
				this.__1__state = -1;
				if (__this_00 != null) {
					pUVar2 = __this_00._scrollBar;
					bVar4 = ((Object)pUVar2 != null);
					if (bVar4) {
						pUVar2 = __this_00._scrollBar;
						if (pUVar2 == null) goto label_05cf5f8c;
						pUVar2.value = __this_00._currentScrollValue;
					}
					return false;
				}
			}
			else {
				if (iVar1 != 1) {
					if (iVar1 == 0) {
						this.__1__state = -1;
						pIVar5 = new WaitForEndOfFrame();
						this.__2__current = pIVar5;
						this.__1__state = 1;
						return true;
					}
					return false;
				}
				this.__1__state = -1;
				if (__this_00 != null) {
					__this_00.SetOptionsPosition();
					pUVar3 = __this_00._optionsPanel;
					if ((pUVar3 != null) &&(pUVar6 = pUVar3.transform, pUVar6 != null)) {
						pUVar6.SetAsLastSibling();
						pUVar6 = __this_00.transform;
						if (pUVar6 != null) {
							UVar7 = (Vector3)pUVar6.position;
							__this_00._lastKnownPosition = UVar7;
							pUVar3 = __this_00._optionsPanel;
							if (pUVar3 != null) {
								pUVar3.SetActive(true);
								UIManager.NeedResizeText = true;
								pIVar5 = new WaitForEndOfFrame();
								this.__2__current = pIVar5;
								this.__1__state = 2;
								return true;
							}
						}
					}
				}
			}
		label_05cf5f8c: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004C8F")]
		[Address(RVA = "0x5BF5FB0", Offset = "0x5BF4FB0", VA = "0x5BF5FB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40027B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x40027B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x40027BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x40027BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x40027BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x40027BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x40027BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x40027BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool _scaleWithPanel;

	[Token(Token = "0x40027C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected UnityAction _onSelectionChanged;

	[Token(Token = "0x40027C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected HashSetSetting<int> _hashSetSetting;

	[Token(Token = "0x40027C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected int[] _intOptionValues;

	[Token(Token = "0x40027C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	protected Dictionary<int, Toggle> _toggles;

	[Token(Token = "0x40027C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x40027C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _themePanel;

	[Token(Token = "0x40027C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000D4F")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C77")]
		[Address(RVA = "0x5BF3A80", Offset = "0x5BF2A80", VA = "0x5BF3A80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$get_SupportedSettingTypes): clean
			HashSet<SettingType> __this_00;

			__this_00 = new HashSet<SettingType>();
			return __this_00;
		}
	}

	[Token(Token = "0x6004C78")]
	[Address(RVA = "0x5BF3AE0", Offset = "0x5BF2AE0", VA = "0x5BF3AE0")]
	public void Setup(HashSetSetting<int> setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onSelectionChanged, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$Setup): 43 lines keep C-only constructs
		GameObject* targetAddress;
		GameObject* targetAddress_00;
		GameObject* targetAddress_01;
		Scrollbar* targetAddress_02;
		int value;
		uint uVar1;
		UnityEvent __this_00;
		Vector2 UVar2;
		ColorBlock value_00;
		ColorBlock value_01;
		bool bVar3;
		Transform pUVar4;
		GameObject pUVar5;
		Text pUVar6;
		Button pUVar7;
		UnityAction __this_01;
		LayoutElement pUVar8;
		ulong uVar9;
		Image pUVar10;
		RectTransform pUVar11;
		ScrollRect __this_02;
		Scrollbar pUVar12;
		MapEditorScaledPanel x;
		Transform pUVar13;
		Il2CppClass klass;
		ArgumentException __this_03;
		String pSVar14;
		MethodInfo pMVar15;
		LayoutElement method_00;
		ulong uVar16;
		Color UVar17;
		float local_c8;
		ColorBlock local_88;

		if (options != null) {
			if (options.Length == 0) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_03 = (ArgumentException)il2cpp_codegen_object_new(klass);
				pSVar14 = il2cpp_codegen_get_runtime_metadata(&"MultiSelectDropdown cannot have 0 options.");
				__this_03 = new ArgumentException(pSVar14);
				pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_MultiSelectDropdownElement_Setup);
				throw (object)__this_03;
			}
			this._hashSetSetting = setting;
			this._intOptionValues = intOptionValues;
			this._onSelectionChanged = onSelectionChanged;
			this._options = options;
			if (style != null) {
				this._themePanel = style.ThemePanel;
				pUVar4 = this.transform;
				if (pUVar4 != null) {
					pUVar4 = pUVar4.Find("Dropdown/Mask");
					if (pUVar4 != null) {
						pUVar5 = pUVar4.gameObject;
						targetAddress = &this._optionsPanel;
						this._optionsPanel = pUVar5;
						pUVar4 = this.transform;
						if (pUVar4 != null) {
							pUVar4 = pUVar4.Find("Dropdown/SelectedButton");
							if (pUVar4 != null) {
								pUVar5 = pUVar4.gameObject;
								targetAddress_00 = &this._selectedButton;
								this._selectedButton = pUVar5;
								pUVar5 = this._selectedButton;
								if (pUVar5 != null) {
									pUVar4 = pUVar5.transform;
									if (pUVar4 != null) {
										pUVar4 = pUVar4.Find("Label");
										if (pUVar4 != null) {
											pUVar5 = pUVar4.gameObject;
											targetAddress_01 = &this._selectedButtonLabel;
											this._selectedButtonLabel = pUVar5;
											pUVar5 = this._selectedButtonLabel;
											value = style.FontSize;
											if (pUVar5 != null) {
												pUVar6 = pUVar5.GetComponent<Text>();
												if (pUVar6 != null) {
													pUVar6.set_text(title);
													pUVar6.fontSize = value;
													if (*targetAddress_00 != null) {
														pUVar7 = (*targetAddress_00).GetComponent<Button>();
														if (pUVar7 != null) {
															__this_00 = (UnityEvent)pUVar7.m_OnClick;
															__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MultiSelectDropdownElement_Setup_b__17_0);
															if (__this_00 != null) {
																__this_00.AddListener(__this_01);
																if (*targetAddress_00 != null) {
																	pUVar8 = (*targetAddress_00).GetComponent<LayoutElement>();
																	if (pUVar8 != null) {
																		pUVar8.set_preferredWidth(elementWidth);
																		if (*targetAddress_00 != null) {
																			pUVar8 = (*targetAddress_00).GetComponent<LayoutElement>();
																			if (pUVar8 != null) {
																				pUVar8.set_preferredHeight(elementHeight);
																				if (0 < (int)options.Length) {
																					uVar9 = options.Length & 0xffffffff;
																					uVar16 = 0;
																					do {
																						if (uVar9 <= uVar16) {
																							throw new IndexOutOfRangeException();
																						}
																						this.CreateOptionToggle(options[uVar16], (int32_t)uVar16, optionsWidth, elementHeight, style.FontSize, style.ThemePanel);
																						uVar16 = uVar16 + 1;
																						uVar1 = (uint)options.Length;
																						uVar9 = (ulong)uVar1;
																					} while ((long)uVar16 < (long)(int)uVar1);
																				}
																				if (*targetAddress_00 != null) {
																					pUVar7 = (*targetAddress_00).GetComponent<Button>();
																					pSVar14 = style.ThemePanel;
																					local_88 = UIManager.GetThemeColorBlock(pSVar14, "DefaultSetting", "Dropdown", "DefaultPanel");
																					if (pUVar7 != null) {
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
																						pUVar7.colors = value_00;
																						pUVar5 = *targetAddress_01;
																						if (pUVar5 != null) {
																							pUVar6 = pUVar5.GetComponent<Text>();
																							UVar17 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownTextColor", "DefaultPanel");
																							if (pUVar6 != null) {
																								pUVar6.set_color(UVar17);
																								if (*targetAddress_00 != null) {
																									pUVar4 = (*targetAddress_00).transform;
																									if (pUVar4 != null) {
																										pUVar4 = pUVar4.Find("Image");
																										if (pUVar4 != null) {
																											pUVar10 = pUVar4.GetComponent<Image>();
																											UVar17 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownTextColor", "DefaultPanel");
																											if (pUVar10 != null) {
																												pUVar10.set_color(UVar17);
																												if (*targetAddress != null) {
																													pUVar4 = (*targetAddress).transform;
																													if (pUVar4 != null) {
																														pUVar4 = pUVar4.Find("Options");
																														if (pUVar4 != null) {
																															pUVar10 = pUVar4.GetComponent<Image>();
																												UVar17 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownBorderColor", "DefaultPanel");
																												if (pUVar10 != null) {
																													pUVar10.set_color(UVar17);
																													Canvas.ForceUpdateCanvases();
																													if (*targetAddress != null ) {
																														pUVar4 = (*targetAddress).transform;
																														if (pUVar4 != null) {
																															pUVar4 = pUVar4.Find("Options");
																															if (pUVar4 != null) {
																																pUVar11 = pUVar4.GetComponent<RectTransform>();
																												if (pUVar11 != null) {
																													UVar2 = pUVar11.sizeDelta;
																													local_c8 = maxScrollHeight;
																													if (UVar2.y <= maxScrollHeight) {
																														if (*targetAddress ==null) goto label_05cf4670;
																														__this_02 = (*targetAddress).GetComponent<ScrollRect>();
																												if (__this_02 == null) goto label_05cf4670;
																												__this_02.verticalScrollbar = null;
																												if (*targetAddress == null) goto label_05cf4670;
																												pUVar4 = (*targetAddress).transform;
																												if (pUVar4 == null) goto label_05cf4670;
																												pUVar4 = pUVar4.Find("Scrollbar");
																												if (pUVar4 == null) goto label_05cf4670;
																												pUVar5 = pUVar4.gameObject;
																												if (pUVar5 == null) goto label_05cf4670;
																												pUVar5.SetActive(false);
																												local_c8 = UVar2.y;
																												}
																												if (*targetAddress != null) {
																													pUVar4 = (*targetAddress).transform ;
																													if (pUVar4 != null) {
																														pUVar4 = pUVar4.Find("Scrollbar");
																														if (pUVar4 != null) {
																															pUVar12 = pUVar4.GetComponent<Scrollbar>();
																												targetAddress_02 = &this._scrollBar;
																												this._scrollBar = pUVar12;
																												pUVar12 = this._scrollBar;
																												pSVar14 = style.ThemePanel;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												local_88 = UIManager.GetThemeColorBlock(pSVar14, "DefaultSetting", "DropdownScrollbar", "DefaultPanel");
																												if (pUVar12 != null) {
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
																													pUVar12.colors = value_01;
																													pUVar12 = *targetAddress_02;
																													if (pUVar12 != null) {
																														pUVar10 = pUVar12.GetComponent<Image>();
																												UVar17 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownScrollbarBackgroundColor", "DefaultPanel");
																												if (pUVar10 != null) {
																													pUVar10.set_color(UVar17);
																													if (*targetAddress != null ) {
																														pUVar11 = (*targetAddress).GetComponent<RectTransform>();
																												if (pUVar11 != null) {
																													UVar2.y = local_c8;
																													UVar2.x = optionsWidth;
																													pUVar11.sizeDelta = UVar2;
																													pUVar4 = this.transform;
																													if (pUVar4 != null) {
																														pUVar4 = pUVar4.Find("Label");
																														if (pUVar4 != null) {
																															pUVar8 = pUVar4.GetComponent<LayoutElement>();
																												if (pUVar8 != null) {
																													method_00 = pUVar8.klass;
																													(*(method_00.vtable)._38_set_preferredHeight. methodPtr)(pUVar8,elementHeight,(method_00.vtable). _38_set_preferredHeight.method);
																													pUVar4 = this.transform;
																													if (pUVar4 != null) {
																														pUVar4 = pUVar4.Find("Label");
																														if (pUVar4 != null) {
																															pUVar5 = pUVar4.gameObject;
																															if (pUVar5 != null) {
																																pUVar5.SetActive(false);
																																this.SetupTooltip(tooltip, style);
																																this._optionsOffset.x =(optionsWidth - elementWidth) * 0.5;
																																this._optionsOffset.y = 2.0 - (local_c8 + elementHeight) * 0.5;
																																this._optionsOffset.z = 0.0;
																																x = this.GetComponentInParent<MapEditorScaledPanel>();
																												if ((typeof(Object)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												bVar3 = ((Object)x != null);
																												this._scaleWithPanel = bVar3;
																												pUVar5 = this._optionsPanel;
																												if (pUVar5 != null) {
																													pUVar4 = pUVar5.transform;
																													pUVar13 = this.transform;
																													if (pUVar13 != null) {
																														pUVar13 = pUVar13.root;
																														if (pUVar4 != null) {
																															pUVar4.SetParent(pUVar13, true) ;
																															if (*targetAddress !=null) {
																																(*targetAddress).SetActive(false);
																																(*(this.klass.vtable)._6_SyncElement. methodPtr)(this,(this.klass.vtable). _6_SyncElement.method);
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
			}
		}
	label_05cf4670: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C79")]
	[Address(RVA = "0x5BF51C0", Offset = "0x5BF41C0", VA = "0x5BF51C0")]
	public void FixScale()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$FixScale): clean
		GameObject __this_00;
		Transform __this_01;

		this._scaleWithPanel = false;
		__this_00 = this._optionsPanel;
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				__this_01.localScale = (Vector3)(Vector3.oneVector);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C7A")]
	[Address(RVA = "0x5BF5230", Offset = "0x5BF4230", VA = "0x5BF5230")]
	public bool IsOpen()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$IsOpen): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._optionsPanel;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._optionsPanel;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.activeSelf;
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6004C7B")]
	[Address(RVA = "0x5BF52B0", Offset = "0x5BF42B0", VA = "0x5BF52B0")]
	protected void SetOptionsPosition()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$SetOptionsPosition): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		GameObject pUVar6;
		Transform pUVar8;
		Transform pUVar9;
		Transform __this_00;
		RectTransform __this_01;
		float fVar10;
		float fVar11;
		float fVar12;
		Vector3 UVar13;
		Vector3 value;
		float local_28;
		float fStack_24;

		if (this._scaleWithPanel == false) {
	label_05cf53a4: ;
			uVar2 = (Vector3.oneVector).x;
			uVar4 = (Vector3.oneVector).y;
			fVar10 = (Vector3.oneVector).z;
			fVar12 = UIManager.CurrentCanvasScale;
			fVar10 = fVar10 * fVar12;
			fVar11 = (float)uVar2 * fVar12;
			fVar12 = (float)uVar4 * fVar12;
		}
		else {
			pUVar6 = this._optionsPanel;
			if (pUVar6 == null) goto label_05cf54dc;
			pUVar8 = pUVar6.transform;
			pUVar9 = this.transform;
			if (pUVar9 == null) goto label_05cf54dc;
			pUVar9 = pUVar9.root;
			pUVar6 = this._selectedButton;
			if (pUVar6 == null) goto label_05cf54dc;
			__this_00 = pUVar6.transform;
			if (__this_00 == null) goto label_05cf54dc;
			UVar13 = __this_00.lossyScale;
			if (pUVar9 == null) goto label_05cf54dc;
			UVar13 = pUVar9.InverseTransformVector(UVar13);
			if (pUVar8 == null) goto label_05cf54dc;
			pUVar8.localScale = UVar13;
			if (this._scaleWithPanel == false) goto label_05cf53a4;
			pUVar6 = this._selectedButton;
			if (pUVar6 == null) goto label_05cf54dc;
			pUVar8 = pUVar6.transform;
			if (pUVar8 == null) goto label_05cf54dc;
			UVar13 = pUVar8.lossyScale;
			fVar10 = UVar13.z;
			fVar11 = UVar13.x;
			fVar12 = UVar13.y;
		}
		pUVar6 = this._selectedButton;
		if (pUVar6 != null) {
			pUVar8 = pUVar6.transform;
			if (pUVar8 != null) {
				UVar13 = pUVar8.position;
				pUVar6 = this._optionsPanel;
				if (pUVar6 != null) {
					uVar3 = this._optionsOffset.x;
					uVar5 = this._optionsOffset.y;
					fVar1 = this._optionsOffset.z;
					pUVar8 = pUVar6.transform;
					if (pUVar8 != null) {
						__this_01 = pUVar8.GetComponent<RectTransform>();
						if (__this_01 != null) {
							value.z = UVar13.z + fVar10 * fVar1;
							local_28 = UVar13.x;
							fStack_24 = UVar13.y;
							value.x = local_28 + fVar11 * (float)uVar3;
							value.y = fStack_24 + fVar12 * (float)uVar5;
							__this_01.position = value;
							return;
						}
					}
				}
			}
		}
	label_05cf54dc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C7C")]
	[Address(RVA = "0x5BF54F0", Offset = "0x5BF44F0", VA = "0x5BF54F0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$OnDisable): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._optionsPanel;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._optionsPanel;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(false);
			return;
		}
		return;
	}

	[Token(Token = "0x6004C7D")]
	[Address(RVA = "0x5BF5570", Offset = "0x5BF4570", VA = "0x5BF5570")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$OnDestroy): clean
		Object pUVar1;
		bool bVar2;

		pUVar1 = (Object)this._optionsPanel;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._optionsPanel;
			Object.Destroy(pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x6004C7E")]
	[Address(RVA = "0x5BF55F0", Offset = "0x5BF45F0", VA = "0x5BF55F0")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$Update): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Object x;
		GameObject pUVar3;
		bool bVar4;
		Transform __this_00;
		RectTransform rect;
		RectTransform rect_00;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;

		x = (Object)this._optionsPanel;
		bVar4 = (x != null);
		if (!bVar4) {
			return;
		}
		pUVar3 = this._optionsPanel;
		if (pUVar3 != null) {
			bVar4 = pUVar3.activeSelf;
			if (!bVar4) {
				return;
			}
			__this_00 = this.transform;
			if (__this_00 != null) {
				UVar8 = __this_00.position;
				uVar1 = this._lastKnownPosition.x;
				uVar2 = this._lastKnownPosition.y;
				fVar5 = UVar8.y - (float)uVar2;
				fVar6 = UVar8.z - this._lastKnownPosition.z;
				fVar7 = UVar8.x - (float)uVar1;
				if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) {
	label_05cf56db: ;
					this.CloseOptions();
					return;
				}
				bVar4 = Input.GetKeyUp(0x143);
				if (!bVar4) {
					return;
				}
				pUVar3 = this._optionsPanel;
				if (pUVar3 != null) {
					rect = (RectTransform)pUVar3.GetComponent<RectTransform>();
					pUVar3 = this._selectedButton;
					if (pUVar3 != null) {
						rect_00 = (RectTransform)pUVar3.GetComponent<RectTransform>();
						UVar8 = Input.mousePosition;
						bVar4 = RectTransformUtility.RectangleContainsScreenPoint(rect, (Vector2)UVar8._0_8_);
						if (bVar4) {
							return;
						}
						UVar8 = Input.mousePosition;
						bVar4 = RectTransformUtility.RectangleContainsScreenPoint(rect_00, (Vector2)UVar8._0_8_);
						if (bVar4) {
							return;
						}
						goto label_05cf56db;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C7F")]
	[Address(RVA = "0x5BF46D0", Offset = "0x5BF36D0", VA = "0x5BF46D0")]
	protected void CreateOptionToggle(string option, int index, float width, float height, int fontSize, string themePanel)
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$CreateOptionToggle): 19 lines keep C-only constructs
		Int32[] pSVar1;
		HashSetSetting<int> __this_00;
		UnityEngine_Events_UnityEvent_bool__o __this_01;
		Button.ButtonClickedEvent __this_02;
		UnityEvent __this_03;
		Dictionary<int, object> __this_04;
		Vector2 value;
		Vector2 value_00;
		ColorBlock value_01;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		ulong uVar5;
		bool value_02;
		MultiSelectDropdownElement.c__DisplayClass24_0 __this_05;
		GameObject root;
		Transform pUVar6;
		Transform pUVar7;
		LayoutElement pUVar8;
		Text __this_06;
		String pSVar9;
		GameObject pUVar10;
		RectTransform pUVar11;
		GameObject __this_07;
		Image value_03;
		GameObject __this_08;
		Image pUVar12;
		Toggle pUVar13;
		UnityAction<T0> call;
		Button __this_09;
		UnityAction __this_10;
		Toggle* targetAddress;
		uint item;
		float fVar14;
		Color UVar15;
		ColorBlock local_88;

		__this_05 = new MultiSelectDropdownElement.c__DisplayClass24_0();
		if (__this_05 != null) {
			__this_05.__4__this = this;
			__this_05.index = index;
			pSVar9 = ResourcePaths.UI;
			root = ResourceManager.InstantiateAsset<GameObject>(pSVar9, "Prefabs/Elements/DropdownOption", false, false);
			LanguageFonts.Localize(root);
			if (root != null) {
				pUVar6 = root.transform;
				pUVar10 = this._optionsPanel;
				if (pUVar10 != null) {
					pUVar7 = pUVar10.transform;
					if (pUVar7 != null) {
						pUVar7 = pUVar7.Find("Options");
						if (pUVar6 != null) {
							pUVar6.SetParent(pUVar7, false);
							pUVar8 = root.GetComponent<LayoutElement>();
							if (pUVar8 != null) {
								pUVar8.set_preferredWidth(width);
								pUVar8 = root.GetComponent<LayoutElement>();
								if (pUVar8 != null) {
									pUVar8.set_preferredHeight(height);
									pUVar6 = root.transform;
									if (pUVar6 != null) {
										pUVar6 = pUVar6.Find("Label");
										if (pUVar6 != null) {
											__this_06 = pUVar6.GetComponent<Text>();
											pSVar9 = String.Concat("      ", option);
											if (__this_06 != null) {
												__this_06.set_text(pSVar9);
												__this_06.fontSize = fontSize;
												__this_06.alignment = 3;
												UVar15 = UIManager.GetThemeColor(themePanel, "DefaultSetting", "DropdownTextColor", "DefaultPanel");
												__this_06.set_color(UVar15);
												pUVar10 = new GameObject("Toggle");
												if (pUVar10 != null) {
													pUVar6 = pUVar10.transform;
													pUVar7 = root.transform;
													if (pUVar6 != null) {
														pUVar6.SetParent(pUVar7, false);
														pUVar11 = pUVar10.AddComponent<RectTransform>();
														if (pUVar11 != null) {
															fVar14 = height * 0.6;
															pUVar11.anchorMin = (Vector2)0x3f00000000000000;
															pUVar11.anchorMax = (Vector2)0x3f00000000000000;
															pUVar11.pivot = (Vector2)0x3f00000000000000;
															pUVar11.anchoredPosition = (Vector2)0x40a00000;
															value.y = fVar14;
															value.x = fVar14;
															pUVar11.sizeDelta = value;
															__this_07 = new GameObject("Background");
															if (__this_07 != null) {
																pUVar6 = __this_07.transform;
																pUVar7 = pUVar10.transform;
																if (pUVar6 != null) {
																	pUVar6.SetParent(pUVar7, false);
																	pUVar11 = __this_07.AddComponent<RectTransform>();
																	if (pUVar11 != null) {
																		pUVar11.anchorMin = (Vector2)(Vector2.zeroVector) ;
																		pUVar11.anchorMax = (Vector2)(Vector2.oneVector). fields;
																		pUVar11.sizeDelta = (Vector2)(Vector2.zeroVector) ;
																		pUVar11.anchoredPosition = (Vector2)(Vector2.zeroVector) ;
																		value_03 = __this_07.AddComponent<Image>();
																		local_88 = UIManager.GetThemeColorBlock(themePanel, "DefaultSetting", "Toggle", "DefaultPanel");
																		uVar4 = local_88.m_NormalColor._8_8_;
																		uVar2 = local_88.m_NormalColor._0_8_;
																		if ((typeof(ColorBlock)._2).cctor_finished_or_no_cctor == 0 ) {
																		}
																		uVar5 = local_88.m_NormalColor._8_8_;
																		uVar3 = local_88.m_NormalColor._0_8_;
																		if (value_03 != null) {
																			local_88.m_NormalColor.b = (float)uVar4;
																			local_88.m_NormalColor.a = SUB84(uVar4, 4);
																			UVar15.b = local_88.m_NormalColor.b;
																			UVar15.a = local_88.m_NormalColor.a;
																			local_88.m_NormalColor.r = (float)uVar2;
																			local_88.m_NormalColor.g = SUB84(uVar2, 4);
																			UVar15.r = local_88.m_NormalColor.r;
																			UVar15.g = local_88.m_NormalColor.g;
																			local_88.m_NormalColor._0_8_ = uVar3;
																			local_88.m_NormalColor._8_8_ = uVar5;
																			value_03.set_color(UVar15) ;
																			__this_08 = new GameObject("Checkmark");
																			if (__this_08 != null) {
																				pUVar6 = __this_08.transform;
																				pUVar7 = __this_07.transform;
																				if (pUVar6 != null) {
																					pUVar6.SetParent(pUVar7, false);
																					pUVar11 = __this_08.AddComponent<RectTransform>();
																					if (pUVar11 != null) {
																						pUVar11.anchorMin = (Vector2)0x3f0000003f000000;
																						pUVar11.anchorMax = (Vector2)0x3f0000003f000000;
																						pUVar11.pivot = (Vector2)0x3f0000003f000000;
																						pUVar11.anchoredPosition = (Vector2)(Vector2. zeroVector);
																						fVar14 = fVar14 * this._checkMarkSizeMultiplier;
																						value_00.y = fVar14;
																						value_00.x = fVar14;
																						pUVar11.sizeDelta = value_00;
																						pUVar12 = __this_08.AddComponent<Image>();
																						UVar15 = UIManager.GetThemeColor(themePanel, "DefaultSetting", "ToggleFilledColor", "DefaultPanel");
																						if (pUVar12 != null) {
																							pUVar12.set_color(UVar15);
																							pUVar13 = pUVar10.AddComponent<Toggle>();
																							targetAddress = &__this_05.toggle;
																							__this_05.toggle = pUVar13;
																							pUVar13 = __this_05.toggle;
																							if (pUVar13 != null) {
																								pUVar13.targetGraphic = (Graphic)value_03;
																								pUVar13 = *targetAddress;
																								if (pUVar13 != null) {
																									pUVar13.graphic =(Graphic)pUVar12;
																									item = __this_05.index;
																									pSVar1 = this._intOptionValues;
																									if (pSVar1 != null) {
																										if ((uint)pSVar1.Length <= item) {
																											throw new IndexOutOfRangeException();
																										}
																										item = pSVar1[(int)item];
																									}
																									__this_00 = this._hashSetSetting;
																									if (__this_00 != null) {
																										pUVar13 = *targetAddress;
																										value_02 = __this_00.Contains(item);
																										if (pUVar13 != null) {
																											pUVar13.isOn = value_02;
																											if (*targetAddress != null) {
																												__this_01 = (UnityEngine_Events_UnityEvent_bool__o)((*targetAddress).fields).onValueChanged;
																												call = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<bool>));
																												call = new UnityAction<bool>((object)__this_05, (intptr_t) MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__0);
																												if (__this_01 !=null) {
																													__this_01.AddListener(call);
																												__this_09 = root.GetComponent<Button>();
																												if ((__this_09 != null) &&(__this_02 = __this_09.m_OnClick, __this_02 !=null)) {
																													__this_02.RemoveAllListeners();
																													local_88 = UIManager.GetThemeColorBlock(themePanel, "DefaultSetting", "Dropdown", "DefaultPanel");
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
																													__this_09.colors = value_01;
																													__this_03 = (UnityEvent)__this_09.m_OnClick;
																													__this_10 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																												__this_10 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__1);
																												if (__this_03 != null ) {
																													__this_03.AddListener(__this_10);
																													__this_04 = (Dictionary<int, object>)this._toggles;
																												if (__this_04 !=(Dictionary<int, object>)0x0) {

																												__this_04.set_Item(__this_05.index, (object)__this_05.toggle);
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
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C80")]
	[Address(RVA = "0x5BF5890", Offset = "0x5BF4890", VA = "0x5BF5890")]
	protected void OnToggleValueChanged(int index, bool value)
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$OnToggleValueChanged): clean
		Int32[] pSVar1;
		HashSetSetting<int> __this_00;
		UnityAction pUVar2;

		pSVar1 = this._intOptionValues;
		if (pSVar1 != null) {
			if ((uint)pSVar1.Length <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			index = pSVar1[index];
		}
		__this_00 = this._hashSetSetting;
		if (value) {
			if (__this_00 == null) {
	label_05cf593d: ;
				throw new NullReferenceException();
			}
			__this_00.Add(index);
			pUVar2 = this._onSelectionChanged;
		}
		else {
			if (__this_00 == null) goto label_05cf593d;
			__this_00.Remove(index);
			pUVar2 = this._onSelectionChanged;
		}
		if (pUVar2 == null) {
			return;
		}
		(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
		return;
	}

	[Token(Token = "0x6004C81")]
	[Address(RVA = "0x5BF5860", Offset = "0x5BF4860", VA = "0x5BF5860")]
	private int GetOptionValue(int index)
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$GetOptionValue): clean
		Int32[] pSVar1;

		pSVar1 = this._intOptionValues;
		if (pSVar1 != null) {
			if ((uint)pSVar1.Length <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			index = pSVar1[index];
		}
		return index;
	}

	[Token(Token = "0x6004C82")]
	[Address(RVA = "0x5BF5950", Offset = "0x5BF4950", VA = "0x5BF5950")]
	protected void OnDropdownSelectedButtonClick()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$OnDropdownSelectedButtonClick): clean
		GameObject __this_00;
		bool bVar1;
		MultiSelectDropdownElement.d__28<WaitAndEnableOptions> __this_01;

		__this_00 = this._optionsPanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.activeSelf;
		if (bVar1) {
			this.CloseOptions();
			return;
		}
		__this_01 = new MultiSelectDropdownElement.d__28<WaitAndEnableOptions>();
		__this_01.__1__state = 0;
		__this_01.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_01);
		return;
	}

	[Token(Token = "0x6004C83")]
	[Address(RVA = "0x5BF59F0", Offset = "0x5BF49F0", VA = "0x5BF59F0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__28))]
	private IEnumerator WaitAndEnableOptions()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$WaitAndEnableOptions): clean
		MultiSelectDropdownElement.d__28<WaitAndEnableOptions> __this_00;

		__this_00 = new MultiSelectDropdownElement.d__28<WaitAndEnableOptions>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004C84")]
	[Address(RVA = "0x5BF57C0", Offset = "0x5BF47C0", VA = "0x5BF57C0")]
	protected void CloseOptions()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$CloseOptions): clean
		Scrollbar pUVar1;
		GameObject __this_00;
		bool bVar2;
		float fVar3;

		pUVar1 = this._scrollBar;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._scrollBar;
			if (pUVar1 == null) goto label_05cf583d;
			fVar3 = pUVar1.value;
			this._currentScrollValue = fVar3;
		}
		__this_00 = this._optionsPanel;
		if (__this_00 != null) {
			__this_00.SetActive(false);
			return;
		}
	label_05cf583d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C85")]
	[Address(RVA = "0x5BF5A80", Offset = "0x5BF4A80", VA = "0x5BF5A80", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$SyncElement): 2 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		HashSetSetting<int> __this_01;
		Int32[] pSVar1;
		object __this_02;
		bool bVar2;
		uint item;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;

		local_58._current.key = null;
		local_58._current.value = null;
		local_58._dictionary = null;
		local_58._version = 0;
		local_58._index = 0;
		local_58._getEnumeratorRetType = 0;
		local_58._36_4_ = 0;
		__this_00 = (Dictionary<int, object>)this._toggles;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		while(true) {
			bVar2 = local_58.MoveNext();
			__this_02 = local_58._current.value;
			if (!bVar2) {
				local_58.Dispose();
				return;
			}
			__this_01 = this._hashSetSetting;
			pSVar1 = this._intOptionValues;
			item = (uint)local_58._current.key;
			if (pSVar1 != null) {
				if ((uint)pSVar1.Length <= (uint)local_58._current.key) {
					throw new IndexOutOfRangeException();
				}
				item = pSVar1[(int)(uint)local_58._current.key];
			}
			if (__this_01 == null) break;
			bVar2 = __this_01.Contains(item);
			if ((Toggle)__this_02 == null) {
				throw new NullReferenceException();
			}
			__this_02.isOn = bVar2;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C86")]
	[Address(RVA = "0x5BF5C40", Offset = "0x5BF4C40", VA = "0x5BF5C40")]
	public MultiSelectDropdownElement()
	{
		// Lifted from source/cpp/UI/MultiSelectDropdownElement.c (UI.MultiSelectDropdownElement$$.ctor): clean
		float fVar1;
		float fVar3;
		Dictionary<int, Toggle> __this_00;

		this._currentScrollValue = 1.0;
		__this_00 = new Dictionary<int, Toggle>();
		this._toggles = __this_00;
		fVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		this._lastKnownPosition.x = (Vector3.zeroVector).x;
		this._lastKnownPosition.y = fVar3;
		this._lastKnownPosition.z = fVar1;
		this._checkMarkSizeMultiplier = 0.67;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MultiSelectDropdownElement.c.

	// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// UI.MultiSelectDropdownElement$$<Setup>b__17_0: clean
	private void Setup_b__17_0()
	{
		this.OnDropdownSelectedButtonClick();
		return;
	}

	// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$<CreateOptionToggle>b__0: clean
	private void c__DisplayClass24_0__CreateOptionToggle_b__0(bool value)
	{
		MultiSelectDropdownElement __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnToggleValueChanged(this.index, value);
		return;
	}

	// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$<CreateOptionToggle>b__1: clean
	private void c__DisplayClass24_0__CreateOptionToggle_b__1()
	{
		Toggle __this_00;

		__this_00 = this.toggle;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.isOn = __this_00.m_IsOn == false;
		return;
	}
}
