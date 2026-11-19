// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSettingElement
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/DropdownSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs
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

[Token(Token = "0x20007ED")]
internal class DropdownSettingElement : BaseSettingElement
{
	[Token(Token = "0x20007EF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndCloseOptions_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002791")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002792")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002793")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000D47")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004C41")]
			[Address(RVA = "0x5BF0690", Offset = "0x5BEF690", VA = "0x5BF0690", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D48")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004C43")]
			[Address(RVA = "0x5BF06E0", Offset = "0x5BEF6E0", VA = "0x5BF06E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004C3E")]
		[Address(RVA = "0x5BF00C0", Offset = "0x5BEF0C0", VA = "0x5BF00C0")]
		[DebuggerHidden]
		public _003CWaitAndCloseOptions_003Ed__26(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004C3F")]
		[Address(RVA = "0x5BF05C0", Offset = "0x5BEF5C0", VA = "0x5BF05C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004C40")]
		[Address(RVA = "0x5BF05D0", Offset = "0x5BEF5D0", VA = "0x5BF05D0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$MoveNext): clean
			int iVar1;
			DropdownSettingElement pUVar2;
			Scrollbar __this_00;
			GameObject __this_01;
			object __this_02;
			float fVar3;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_02 = new WaitForEndOfFrame();
				this.__2__current = __this_02;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if ((pUVar2 != null) &&(__this_00 = pUVar2._scrollBar, __this_00 != null)) {
					fVar3 = __this_00.value;
					pUVar2._currentScrollValue = fVar3;
					__this_01 = pUVar2._optionsPanel;
					if (__this_01 != null) {
						__this_01.SetActive(false);
						goto label_05cf0673;
					}
				}
				throw new NullReferenceException();
			}
		label_05cf0673: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6004C42")]
		[Address(RVA = "0x5BF06A0", Offset = "0x5BEF6A0", VA = "0x5BF06A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__26_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007F0")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableOptions_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002794")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002795")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002796")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DropdownSettingElement _003C_003E4__this;

		[Token(Token = "0x17000D49")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004C47")]
			[Address(RVA = "0x5BF08B0", Offset = "0x5BEF8B0", VA = "0x5BF08B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D4A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004C49")]
			[Address(RVA = "0x5BF0900", Offset = "0x5BEF900", VA = "0x5BF0900", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004C44")]
		[Address(RVA = "0x5BF00A0", Offset = "0x5BEF0A0", VA = "0x5BF00A0")]
		[DebuggerHidden]
		public _003CWaitAndEnableOptions_003Ed__25(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004C45")]
		[Address(RVA = "0x5BF06F0", Offset = "0x5BEF6F0", VA = "0x5BF06F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004C46")]
		[Address(RVA = "0x5BF0700", Offset = "0x5BEF700", VA = "0x5BF0700", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$MoveNext): clean
			int iVar1;
			DropdownSettingElement __this_00;
			Scrollbar __this_01;
			GameObject pUVar2;
			object pIVar3;
			Transform pUVar4;
			bool bVar5;
			Vector3 UVar6;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 2) {
				this.__1__state = -1;
				if ((__this_00 == null) ||(__this_01 = __this_00._scrollBar, __this_01 == null)) goto label_05cf08a8;
				__this_01.value = __this_00._currentScrollValue;
			}
			else {
				if (iVar1 == 1) {
					this.__1__state = -1;
					if (__this_00 != null) {
						__this_00.SetOptionsPosition();
						pUVar2 = __this_00._optionsPanel;
						if ((pUVar2 != null) &&(pUVar4 = pUVar2.transform, pUVar4 != null)) {
							pUVar4.SetAsLastSibling();
							pUVar4 = __this_00.transform;
							if (pUVar4 != null) {
								UVar6 = (Vector3)pUVar4.position;
								__this_00._lastKnownPosition = UVar6;
								pUVar2 = __this_00._optionsPanel;
								if (pUVar2 != null) {
									pUVar2.SetActive(true);
									UIManager.NeedResizeText = true;
									pIVar3 = new WaitForEndOfFrame();
									this.__2__current = pIVar3;
									this.__1__state = 2;
									return true;
								}
							}
						}
					}
		label_05cf08a8: ;
					throw new NullReferenceException();
				}
				if (iVar1 == 0) {
					this.__1__state = -1;
					pIVar3 = new WaitForEndOfFrame();
					this.__2__current = pIVar3;
					this.__1__state = 1;
				}
				else {
				}
			}
			return bVar5;
		}

		[Token(Token = "0x6004C48")]
		[Address(RVA = "0x5BF08C0", Offset = "0x5BEF8C0", VA = "0x5BF08C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__25_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002782")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4002783")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _selectedButton;

	[Token(Token = "0x4002784")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected GameObject _selectedButtonLabel;

	[Token(Token = "0x4002785")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected string[] _options;

	[Token(Token = "0x4002786")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected float _currentScrollValue;

	[Token(Token = "0x4002787")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Scrollbar _scrollBar;

	[Token(Token = "0x4002788")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Vector3 _optionsOffset;

	[Token(Token = "0x4002789")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool _scaleWithPanel;

	[Token(Token = "0x400278A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected UnityAction _onDropdownOptionSelect;

	[Token(Token = "0x400278B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected int[] _intOptionValues;

	[Token(Token = "0x400278C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Func<string, string> _optionLabel;

	[Token(Token = "0x400278D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Vector3 _lastKnownPosition;

	[Token(Token = "0x17000D46")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C29")]
		[Address(RVA = "0x5BEF1D0", Offset = "0x5BEE1D0", VA = "0x5BEF1D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$get_SupportedSettingTypes): 1 lines keep C-only constructs
			HashSet<SettingType> __this_00;

			if (Il2CppMethodInitialized_07547c7c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add) ;
				Il2CppMethodInitialized_07547c7c = true;
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

	[Token(Token = "0x6004C2A")]
	[Address(RVA = "0x5BEE3B0", Offset = "0x5BED3B0", VA = "0x5BEE3B0", Slot = "7")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$Setup): 41 lines keep C-only constructs
		GameObject* targetAddress;
		GameObject* targetAddress_00;
		GameObject* targetAddress_01;
		Scrollbar* targetAddress_02;
		int value;
		uint uVar1;
		Func<string, string> pSVar2;
		UnityEvent __this_00;
		Vector2 UVar3;
		ColorBlock value_00;
		ColorBlock value_01;
		bool bVar4;
		Transform pUVar5;
		GameObject pUVar6;
		String pSVar7;
		Text pUVar8;
		Button pUVar9;
		UnityAction __this_01;
		LayoutElement pUVar10;
		ulong uVar11;
		Image pUVar12;
		RectTransform pUVar13;
		ScrollRect __this_02;
		Scrollbar pUVar14;
		MapEditorScaledPanel x;
		Transform pUVar15;
		Il2CppClass klass;
		ArgumentException __this_03;
		MethodInfo pMVar16;
		ulong uVar17;
		Color UVar18;
		float local_c8;
		ColorBlock local_88;

		if (options != null) {
			if (options.Length == 0) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_03 = (ArgumentException)il2cpp_codegen_object_new(klass);
				pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Dropdown cannot have 0 options.");
				__this_03 = new ArgumentException(pSVar7);
				pMVar16 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_DropdownSettingElement_Setup);
				throw (object)__this_03;
			}
			this._onDropdownOptionSelect = onDropdownOptionSelect;
			this._intOptionValues = intOptionValues;
			this._options = options;
			pUVar5 = this.transform;
			if (pUVar5 != null) {
				pUVar5 = pUVar5.Find("Dropdown/Mask");
				if (pUVar5 != null) {
					pUVar6 = pUVar5.gameObject;
					targetAddress = &this._optionsPanel;
					this._optionsPanel = pUVar6;
					pUVar5 = this.transform;
					if (pUVar5 != null) {
						pUVar5 = pUVar5.Find("Dropdown/SelectedButton");
						if (pUVar5 != null) {
							pUVar6 = pUVar5.gameObject;
							targetAddress_00 = &this._selectedButton;
							this._selectedButton = pUVar6;
							pUVar6 = this._selectedButton;
							if (pUVar6 != null) {
								pUVar5 = pUVar6.transform;
								if (pUVar5 != null) {
									pUVar5 = pUVar5.Find("Label");
									if (pUVar5 != null) {
										pUVar6 = pUVar5.gameObject;
										targetAddress_01 = &this._selectedButtonLabel;
										this._selectedButtonLabel = pUVar6;
										if ((int)options.Length == 0) {
	label_05ceef16: ;
											throw new IndexOutOfRangeException();
										}
										pUVar6 = this._selectedButtonLabel;
										pSVar7 = options[0];
										pSVar2 = this._optionLabel;
										if (pSVar2 != null) {
											pSVar7 = (String)(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar7,pSVar2.method);
										}
										if (style != null) {
											value = style.FontSize;
											if (pUVar6 != null) {
												pUVar8 = pUVar6.GetComponent<Text>();
												if (pUVar8 != null) {
													pUVar8.set_text(pSVar7);
													pUVar8.fontSize = value;
													if (*targetAddress_00 != null) {
														pUVar9 = (*targetAddress_00).GetComponent<Button>();
														if (pUVar9 != null) {
															__this_00 = (UnityEvent)pUVar9.m_OnClick;
															__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_DropdownSettingElement_Setup_b__14_0);
															if (__this_00 != null) {
																__this_00.AddListener(__this_01);
																if (*targetAddress_00 != null) {
																	pUVar10 = (*targetAddress_00).GetComponent<LayoutElement>();
																	if (pUVar10 != null) {
																		pUVar10.set_preferredWidth(elementWidth);
																		if (*targetAddress_00 != null) {
																			pUVar10 = (*targetAddress_00).GetComponent<LayoutElement>();
																			if (pUVar10 != null) {
																				pUVar10.set_preferredHeight(elementHeight);
																				if (0 < (int)options.Length) {
																					uVar11 = options.Length & 0xffffffff;
																					uVar17 = 0;
																					do {
																						if (uVar11 <= uVar17) goto label_05ceef16;
																						this.CreateOptionButton(options[uVar17], (int32_t)uVar17, optionsWidth, elementHeight, style.FontSize, style.ThemePanel);
																						uVar17 = uVar17 + 1;
																						uVar1 = (uint)options.Length;
																						uVar11 = (ulong)uVar1;
																					} while ((long)uVar17 < (long)(int)uVar1);
																				}
																				if (*targetAddress_00 != null) {
																					pUVar9 = (*targetAddress_00).GetComponent<Button>();
																					pSVar7 = style.ThemePanel;
																					local_88 = UIManager.GetThemeColorBlock(pSVar7, "DefaultSetting", "Dropdown", "DefaultPanel");
																					if (pUVar9 != null) {
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
																						pUVar9.colors = value_00;
																						pUVar6 = *targetAddress_01;
																						if (pUVar6 != null) {
																							pUVar8 = pUVar6.GetComponent<Text>();
																							UVar18 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownTextColor", "DefaultPanel");
																							if (pUVar8 != null) {
																								pUVar8.set_color(UVar18);
																								if (*targetAddress_00 != null) {
																									pUVar5 = (*targetAddress_00).transform;
																									if (pUVar5 != null) {
																										pUVar5 = pUVar5.Find("Image");
																										if (pUVar5 != null) {
																											pUVar12 = pUVar5.GetComponent<Image>();
																											UVar18 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownTextColor", "DefaultPanel");
																											if (pUVar12 != null) {
																												pUVar12.set_color(UVar18);
																												if (*targetAddress != null) {
																													pUVar5 = (*targetAddress).transform;
																													if (pUVar5 != null) {
																														pUVar5 = pUVar5.Find("Options");
																														if (pUVar5 != null) {
																															pUVar12 = pUVar5.GetComponent<Image>();
																												UVar18 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownBorderColor", "DefaultPanel");
																												if (pUVar12 != null) {
																													pUVar12.set_color(UVar18);
																													Canvas.ForceUpdateCanvases();
																													if (*targetAddress != null ) {
																														pUVar5 = (*targetAddress).transform;
																														if (pUVar5 != null) {
																															pUVar5 = pUVar5.Find("Options");
																															if (pUVar5 != null) {
																																pUVar13 = pUVar5.GetComponent<RectTransform>();
																												if (pUVar13 != null) {
																													UVar3 = pUVar13.sizeDelta;
																													local_c8 = maxScrollHeight;
																													if (UVar3.y <= maxScrollHeight) {
																														if (*targetAddress ==null) goto label_05ceef11;
																														__this_02 = (*targetAddress).GetComponent<ScrollRect>();
																												if (__this_02 == null) goto label_05ceef11;
																												__this_02.verticalScrollbar = null;
																												if (*targetAddress == null) goto label_05ceef11;
																												pUVar5 = (*targetAddress).transform;
																												if (pUVar5 == null) goto label_05ceef11;
																												pUVar5 = pUVar5.Find("Scrollbar");
																												if (pUVar5 == null) goto label_05ceef11;
																												pUVar6 = pUVar5.gameObject;
																												if (pUVar6 == null) goto label_05ceef11;
																												pUVar6.SetActive(false);
																												local_c8 = UVar3.y;
																												}
																												if (*targetAddress != null) {
																													pUVar5 = (*targetAddress).transform ;
																													if (pUVar5 != null) {
																														pUVar5 = pUVar5.Find("Scrollbar");
																														if (pUVar5 != null) {
																															pUVar14 = pUVar5.GetComponent<Scrollbar>();
																												targetAddress_02 = &this._scrollBar;
																												this._scrollBar = pUVar14;
																												pUVar14 = this._scrollBar;
																												pSVar7 = style.ThemePanel;
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												local_88 = UIManager.GetThemeColorBlock(pSVar7, "DefaultSetting", "DropdownScrollbar", "DefaultPanel");
																												if (pUVar14 != null) {
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
																													pUVar14.colors = value_01;
																													pUVar14 = *targetAddress_02;
																													if (pUVar14 != null) {
																														pUVar12 = pUVar14.GetComponent<Image>();
																												UVar18 = UIManager.GetThemeColor(style.ThemePanel, "DefaultSetting", "DropdownScrollbarBackgroundColor", "DefaultPanel");
																												if (pUVar12 != null) {
																													pUVar12.set_color(UVar18);
																													if (*targetAddress != null ) {
																														pUVar13 = (*targetAddress).GetComponent<RectTransform>();
																												if (pUVar13 != null) {
																													UVar3.y = local_c8;
																													UVar3.x = optionsWidth;
																													pUVar13.sizeDelta = UVar3;
																													pUVar5 = this.transform;
																													if (pUVar5 != null) {
																														pUVar5 = pUVar5.Find("Label");
																														if (pUVar5 != null) {
																															pUVar10 = pUVar5.GetComponent<LayoutElement>();
																												if (pUVar10 != null) {
																													(*(pUVar10.klass.vtable)._38_set_preferredHeight. methodPtr)(pUVar10,elementHeight,(pUVar10.klass.vtable). _38_set_preferredHeight.method);
																													this._optionsOffset.x =(optionsWidth - elementWidth) * 0.5;
																													this._optionsOffset.y = 2.0 - (local_c8 + elementHeight) * 0.5;
																													this._optionsOffset.z = 0.0;
																													x = this.GetComponentInParent<MapEditorScaledPanel>();
																												if ((typeof(Object)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												bVar4 = ((Object)x != null);
																												this._scaleWithPanel = bVar4;
																												pUVar6 = this._optionsPanel;
																												if (pUVar6 != null) {
																													pUVar5 = pUVar6.transform;
																													pUVar15 = this.transform;
																													if (pUVar15 != null) {
																														pUVar15 = pUVar15.root;
																														if (pUVar5 != null) {
																															pUVar5.SetParent(pUVar15, true) ;
																															if (*targetAddress !=null) {
																																(*targetAddress).SetActive(false);
																																this.Setup(setting, style, title, tooltip) ;
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
	label_05ceef11: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C2B")]
	[Address(RVA = "0x5BEF7B0", Offset = "0x5BEE7B0", VA = "0x5BEF7B0")]
	public void SetOptionLabel(Func<string, string> optionLabel)
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$SetOptionLabel): clean
		this._optionLabel = optionLabel;
		return;
	}

	[Token(Token = "0x6004C2C")]
	[Address(RVA = "0x5BEF270", Offset = "0x5BEE270", VA = "0x5BEF270")]
	protected string OptionLabel(string option)
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$OptionLabel): 1 lines keep C-only constructs
		Func<string, string> pSVar1;
		code *vtableDispatch;
		String pSVar2;

		pSVar1 = this._optionLabel;
		if (pSVar1 == null) {
			return option;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		pSVar2 = (String)(*vtableDispatch)(pSVar1.method_code,option,pSVar1.method,vtableDispatch);
		return pSVar2;
	}

	[Token(Token = "0x6004C2D")]
	[Address(RVA = "0x5BEF7D0", Offset = "0x5BEE7D0", VA = "0x5BEF7D0")]
	public void FixScale()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$FixScale): clean
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

	[Token(Token = "0x6004C2E")]
	[Address(RVA = "0x5BEF840", Offset = "0x5BEE840", VA = "0x5BEF840")]
	public bool IsOpen()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$IsOpen): clean
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

	[Token(Token = "0x6004C2F")]
	[Address(RVA = "0x5BEF8C0", Offset = "0x5BEE8C0", VA = "0x5BEF8C0")]
	protected void SetOptionsPosition()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$SetOptionsPosition): 9 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		GameObject pUVar7;
		Vector2 UVar9;
		Transform pUVar10;
		Transform pUVar11;
		Transform __this_00;
		RectTransform pUVar12;
		float fVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		float local_7c;
		ulong local_78;
		ulong local_48;
		float fStack_34;

		if (this._scaleWithPanel == false) {
	label_05cef9cb: ;
			uVar1 = (Vector3.oneVector).x;
			uVar4 = (Vector3.oneVector).y;
			local_7c = (Vector3.oneVector).z;
			fVar13 = UIManager.CurrentCanvasScale;
			local_7c = local_7c * fVar13;
			local_48 = CONCAT44((float)uVar4 * fVar13, (float)uVar1 * fVar13);
		}
		else {
			pUVar7 = this._optionsPanel;
			if (pUVar7 == null) goto label_05cefc0d;
			pUVar10 = pUVar7.transform;
			pUVar11 = this.transform;
			if (pUVar11 == null) goto label_05cefc0d;
			pUVar11 = pUVar11.root;
			pUVar7 = this._selectedButton;
			if (pUVar7 == null) goto label_05cefc0d;
			__this_00 = pUVar7.transform;
			if (__this_00 == null) goto label_05cefc0d;
			UVar14 = __this_00.lossyScale;
			if (pUVar11 == null) goto label_05cefc0d;
			UVar14 = pUVar11.InverseTransformVector(UVar14);
			if (pUVar10 == null) goto label_05cefc0d;
			pUVar10.localScale = UVar14;
			if (this._scaleWithPanel == false) goto label_05cef9cb;
			pUVar7 = this._selectedButton;
			if (pUVar7 == null) goto label_05cefc0d;
			pUVar10 = pUVar7.transform;
			if (pUVar10 == null) goto label_05cefc0d;
			UVar14 = pUVar10.lossyScale;
			local_7c = UVar14.z;
			local_48 = UVar14._0_8_;
		}
		pUVar7 = this._selectedButton;
		if (pUVar7 != null) {
			pUVar10 = pUVar7.transform;
			if (pUVar10 != null) {
				UVar14 = pUVar10.position;
				pUVar7 = this._optionsPanel;
				if (pUVar7 != null) {
					uVar2 = this._optionsOffset.x;
					uVar5 = this._optionsOffset.y;
					fVar13 = this._optionsOffset.z;
					pUVar12 = pUVar7.GetComponent<RectTransform>();
					if (pUVar12 != null) {
						UVar9 = pUVar12.sizeDelta;
						pUVar7 = this._optionsPanel;
						if (pUVar7 != null) {
							pUVar10 = pUVar7.transform;
							if (pUVar10 != null) {
								local_78._0_4_ = UVar14.x;
								local_78._4_4_ = UVar14.y;
								local_78._4_4_ = local_78._4_4_ + (float)uVar5 * local_48._4_4_;
								local_78 = CONCAT44(local_78._4_4_, (float)local_78 + (float)uVar2 * (float)local_48);
								UVar15 = pUVar10.lossyScale;
								fStack_34 = UVar9.y;
								if (0.0 <= local_78._4_4_ + fStack_34 * UVar15.y * -0.5) {
									fVar13 = UVar14.z + fVar13 * local_7c;
								}
								else {
									pUVar7 = this._selectedButton;
									if (pUVar7 == null) goto label_05cefc0d;
									uVar3 = this._optionsOffset.x;
									uVar6 = this._optionsOffset.y;
									fVar13 = this._optionsOffset.z;
									pUVar10 = pUVar7.transform;
									if (pUVar10 == null) goto label_05cefc0d;
									UVar14 = pUVar10.position;
									local_78 = CONCAT44(UVar14.y - local_48._4_4_ * (float)uVar6, UVar14.x + (float)local_48 * (float)uVar3);
									fVar13 = local_7c * fVar13 + UVar14.z;
								}
								pUVar7 = this._optionsPanel;
								if (pUVar7 != null) {
									pUVar10 = pUVar7.transform;
									if (pUVar10 != null) {
										pUVar12 = pUVar10.GetComponent<RectTransform>();
										if (pUVar12 != null) {
											UVar14.z = fVar13;
											UVar14.x = (float)local_78;
											UVar14.y = local_78._4_4_;
											pUVar12.position = UVar14;
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
	label_05cefc0d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C30")]
	[Address(RVA = "0x5BEFC20", Offset = "0x5BEEC20", VA = "0x5BEFC20")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$OnDisable): clean
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

	[Token(Token = "0x6004C31")]
	[Address(RVA = "0x5BEFCA0", Offset = "0x5BEECA0", VA = "0x5BEFCA0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$OnDestroy): clean
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

	[Token(Token = "0x6004C32")]
	[Address(RVA = "0x5BEFD20", Offset = "0x5BEED20", VA = "0x5BEFD20")]
	private void Update()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$Update): clean
		uint uVar1;
		uint uVar2;
		Object pUVar3;
		GameObject __this_00;
		Scrollbar __this_01;
		bool bVar4;
		EventSystem pUVar5;
		Object y;
		Transform __this_02;
		DropdownSettingElement.d__26<WaitAndCloseOptions> __this_03;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 UVar9;

		pUVar3 = (Object)this._optionsPanel;
		bVar4 = (pUVar3 != null);
		if (!bVar4) {
			return;
		}
		__this_00 = this._optionsPanel;
		if (__this_00 != null) {
			bVar4 = __this_00.activeSelf;
			if (!bVar4) {
				return;
			}
			bVar4 = Input.GetKeyUp(0x143);
			if (bVar4) {
				pUVar5 = EventSystem.current;
				if ((pUVar5 == null) ||(__this_01 = this._scrollBar, __this_01 == null)) goto label_05cefee4;
				pUVar3 = (Object)pUVar5.m_CurrentSelected;
				y = (Object)__this_01.gameObject;
				bVar4 = (pUVar3 != y);
				if (bVar4) goto label_05cefe75;
			}
			__this_02 = this.transform;
			if (__this_02 != null) {
				UVar9 = __this_02.position;
				uVar1 = this._lastKnownPosition.x;
				uVar2 = this._lastKnownPosition.y;
				fVar6 = UVar9.y - (float)uVar2;
				fVar7 = UVar9.z - this._lastKnownPosition.z;
				fVar8 = UVar9.x - (float)uVar1;
				if (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11) {
					return;
				}
	label_05cefe75: ;
				__this_03 = new DropdownSettingElement.d__26<WaitAndCloseOptions>();
				__this_03.__1__state = 0;
				__this_03.__4__this = this;
				this.StartCoroutine((IEnumerator)__this_03);
				return;
			}
		}
	label_05cefee4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C33")]
	[Address(RVA = "0x5BEF290", Offset = "0x5BEE290", VA = "0x5BEF290")]
	protected void CreateOptionButton(string option, int index, float width, float height, int fontSize, string themePanel)
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$CreateOptionButton): 5 lines keep C-only constructs
		Func<string, string> pSVar1;
		UnityEvent __this_00;
		ColorBlock value;
		DropdownSettingElement.c__DisplayClass23_0 __this_01;
		GameObject root;
		Transform pUVar2;
		Transform pUVar3;
		GameObject pUVar4;
		String pSVar5;
		Text pUVar6;
		Button pUVar7;
		UnityAction __this_02;
		LayoutElement pUVar8;
		String* targetAddress;
		Color UVar9;
		ColorBlock local_88;

		__this_01 = il2cpp_codegen_object_new(typeof(DropdownSettingElement.c__DisplayClass23_0)) ;
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			targetAddress = &__this_01.option;
			__this_01.option = option;
			__this_01.index = index;
			pSVar5 = ResourcePaths.UI;
			root = ResourceManager.InstantiateAsset<GameObject>(pSVar5, "Prefabs/Elements/DropdownOption", false, false);
			LanguageFonts.Localize(root);
			if (root != null) {
				pUVar2 = root.transform;
				pUVar4 = this._optionsPanel;
				if (pUVar4 != null) {
					pUVar3 = pUVar4.transform;
					if (pUVar3 != null) {
						pUVar3 = pUVar3.Find("Options");
						if (pUVar2 != null) {
							pUVar2.SetParent(pUVar3, false);
							pUVar2 = root.transform;
							if (pUVar2 != null) {
								pUVar2 = pUVar2.Find("Label");
								if (pUVar2 != null) {
									pUVar4 = pUVar2.gameObject;
									pSVar5 = *targetAddress;
									pSVar1 = this._optionLabel;
									if (pSVar1 != null) {
										pSVar5 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar5,pSVar1.method);
									}
									if (pUVar4 != null) {
										pUVar6 = pUVar4.GetComponent<Text>();
										if (pUVar6 != null) {
											pUVar6.set_text(pSVar5);
											pUVar6.fontSize = fontSize;
											pUVar7 = root.GetComponent<Button>();
											if (pUVar7 != null) {
												__this_00 = (UnityEvent)pUVar7.m_OnClick;
												__this_02 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_DropdownSettingElement_c__DisplayClass23_0_CreateOptionButton_b__0);
												if (__this_00 != null) {
													__this_00.AddListener(__this_02);
													pUVar8 = root.GetComponent<LayoutElement>() ;
													if (pUVar8 != null) {
														pUVar8.set_preferredWidth(width);
														pUVar8 = root.GetComponent<LayoutElement>();
														if (pUVar8 != null) {
															pUVar8.set_preferredHeight(height);
															pUVar7 = root.GetComponent<Button>();
															local_88 = UIManager.GetThemeColorBlock(themePanel, "DefaultSetting", "Dropdown", "DefaultPanel");
															if (pUVar7 != null) {
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
																value.m_SelectedColor.r = local_88.m_SelectedColor.r ;
																value.m_SelectedColor.g = local_88.m_SelectedColor.g ;
																value.m_SelectedColor.b = local_88.m_SelectedColor.b ;
																value.m_SelectedColor.a = local_88.m_SelectedColor.a ;
																value.m_DisabledColor.r = local_88.m_DisabledColor.r ;
																value.m_DisabledColor.g = local_88.m_DisabledColor.g ;
																value.m_DisabledColor.b = local_88.m_DisabledColor.b ;
																value.m_DisabledColor.a = local_88.m_DisabledColor.a ;
																value.m_ColorMultiplier = local_88.m_ColorMultiplier;
																value.m_FadeDuration = local_88.m_FadeDuration;
																pUVar7.colors = value;
																pUVar2 = root.transform;
																if (pUVar2 != null) {
																	pUVar2 = pUVar2.Find("Label");
																	if (pUVar2 != null) {
																		pUVar6 = pUVar2.GetComponent<Text>();
																		UVar9 = UIManager.GetThemeColor(themePanel, "DefaultSetting", "DropdownTextColor", "DefaultPanel");
																		if (pUVar6 != null) {
																			pUVar6.set_color(UVar9);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C34")]
	[Address(RVA = "0x5BEFF70", Offset = "0x5BEEF70", VA = "0x5BEFF70")]
	protected void OnDropdownSelectedButtonClick()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$OnDropdownSelectedButtonClick): clean
		GameObject pUVar1;
		Scrollbar __this_00;
		bool bVar2;
		DropdownSettingElement.d__25<WaitAndEnableOptions> __this_01;
		float fVar3;

		pUVar1 = this._optionsPanel;
		if (pUVar1 != null) {
			bVar2 = pUVar1.activeSelf;
			if (!bVar2) {
				__this_01 = new DropdownSettingElement.d__25<WaitAndEnableOptions>();
				__this_01.__1__state = 0;
				__this_01.__4__this = this;
				this.StartCoroutine((IEnumerator)__this_01);
				return;
			}
			__this_00 = this._scrollBar;
			if (__this_00 != null) {
				fVar3 = __this_00.value;
				this._currentScrollValue = fVar3;
				pUVar1 = this._optionsPanel;
				if (pUVar1 != null) {
					pUVar1.SetActive(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C35")]
	[Address(RVA = "0x5BF0030", Offset = "0x5BEF030", VA = "0x5BF0030")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableOptions_003Ed__25))]
	private IEnumerator WaitAndEnableOptions()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$WaitAndEnableOptions): 1 lines keep C-only constructs
		DropdownSettingElement.d__25<WaitAndEnableOptions> __this_00;

		if (Il2CppMethodInitialized_07547c84 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(DropdownSettingElement.d__25<WaitAndEnableOptions>)) ;
			Il2CppMethodInitialized_07547c84 = true;
		}
		__this_00 = new DropdownSettingElement.d__25<WaitAndEnableOptions>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004C36")]
	[Address(RVA = "0x5BEFEF0", Offset = "0x5BEEEF0", VA = "0x5BEFEF0")]
	[IteratorStateMachine(typeof(_003CWaitAndCloseOptions_003Ed__26))]
	private IEnumerator WaitAndCloseOptions()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$WaitAndCloseOptions): clean
		DropdownSettingElement.d__26<WaitAndCloseOptions> __this_00;

		__this_00 = new DropdownSettingElement.d__26<WaitAndCloseOptions>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004C37")]
	[Address(RVA = "0x5BF00E0", Offset = "0x5BEF0E0", VA = "0x5BF00E0", Slot = "8")]
	protected virtual void OnDropdownOptionClick(string option, int index)
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$OnDropdownOptionClick): 6 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		GameObject pUVar3;
		Func<string, string> pSVar4;
		Scrollbar __this_00;
		TypedSetting<T> __this_01;
		UnityAction pUVar5;
		Settings_TypedSetting_int__o __this_02;
		Int32[] pSVar6;
		String pSVar7;
		object pIVar8;
		float fVar9;

		pUVar3 = this._selectedButtonLabel;
		pSVar4 = this._optionLabel;
		pSVar7 = option;
		if (pSVar4 != null) {
			pSVar7 = (String)(*(code)pSVar4.invoke_impl)(pSVar4.method_code,option,pSVar4.method);
		}
		if ((pUVar3 != null) &&(pIVar8 = pUVar3.GetComponent<Text>(), pIVar8 != null)) {
			(*pIVar8.klass.vtable[0x4b].methodPtr)(pIVar8,pSVar7,pIVar8.klass.vtable[0x4b].method);
			__this_00 = this._scrollBar;
			if (__this_00 != null) {
				fVar9 = __this_00.value;
				this._currentScrollValue = fVar9;
				pUVar3 = this._optionsPanel;
				if (pUVar3 != null) {
					pUVar3.SetActive(false);
					iVar2 = this._settingType;
					if (iVar2 == 2) {
						__this_02 = (Settings_TypedSetting_int__o)this._setting;
						pSVar6 = this._intOptionValues;
						if (pSVar6 == null) {
							if (__this_02 == null) goto label_05cf0313;
							bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
							if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(IntSetting))) goto label_05cf0308;
						}
						else {
							if (__this_02 == null) {
								if ((uint)pSVar6.Length <= (uint)index) {
	label_05cf0318: ;
									throw new IndexOutOfRangeException();
								}
								goto label_05cf0313;
							}
							bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
							if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(IntSetting))) {
	label_05cf0308: ;
								throw new InvalidCastException();
							}
							if ((uint)pSVar6.Length <= (uint)index) goto label_05cf0318;
							index = pSVar6[index];
						}
						__this_02.Value = index;
						pUVar5 = this._onDropdownOptionSelect;
					}
					else {
						if (iVar2 == 4) {
							__this_01 = (TypedSetting<T>)this._setting;
							if (__this_01 == null) goto label_05cf0313;
							bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
							if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) goto label_05cf0308;
							__this_01.Value = (object)option;
						}
						pUVar5 = this._onDropdownOptionSelect;
					}
					if (pUVar5 == null) {
						return;
					}
					(*(code)pUVar5.invoke_impl)(pUVar5.method_code,pUVar5.method);
					return;
				}
			}
		}
	label_05cf0313: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C38")]
	[Address(RVA = "0x5BEF0C0", Offset = "0x5BEE0C0", VA = "0x5BEF0C0")]
	protected void CloseOptions()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$CloseOptions): clean
		Scrollbar __this_00;
		GameObject __this_01;
		float fVar1;

		__this_00 = this._scrollBar;
		if (__this_00 != null) {
			fVar1 = __this_00.value;
			this._currentScrollValue = fVar1;
			__this_01 = this._optionsPanel;
			if (__this_01 != null) {
				__this_01.SetActive(false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C39")]
	[Address(RVA = "0x5BF0320", Offset = "0x5BEF320", VA = "0x5BF0320", Slot = "6")]
	public override void SyncElement()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$SyncElement): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseSetting pSVar3;
		Func<string, string> pSVar4;
		Settings_TypedSetting_int__o __this_00;
		Int32[] array;
		uint value;
		String pSVar5;
		String[] pSVar6;
		Text pUVar7;
		GameObject __this_01;

		iVar2 = this._settingType;
		if (iVar2 == 2) {
			__this_00 = (Settings_TypedSetting_int__o)this._setting;
			if (__this_00 == null) goto label_05cf0565;
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting)) ) {
				throw new InvalidCastException();
			}
			array = this._intOptionValues;
			value = __this_00._value;
			if (array != null) {
				value = Array.IndexOf<int>(array, value);
			}
			if ((int)value < 0) {
	label_05cf04aa: ;
				value = 0;
				__this_00.Value = 0;
				pSVar6 = this._options;
				if (pSVar6 == null) goto label_05cf0565;
			}
			else {
				pSVar6 = this._options;
				if (pSVar6 == null) goto label_05cf0565;
				if ((int)pSVar6.Length <= (int)value) goto label_05cf04aa;
			}
			if ((uint)pSVar6.Length <= value) {
				throw new IndexOutOfRangeException();
			}
			__this_01 = this._selectedButtonLabel;
			pSVar5 = pSVar6[value];
			pSVar4 = this._optionLabel;
			if (pSVar4 != null) {
				pSVar5 = (String)(*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar5,pSVar4.method);
			}
			if (__this_01 == null) goto label_05cf0565;
		}
		else {
			if (iVar2 != 4) {
				return;
			}
			pSVar3 = this._setting;
			if (pSVar3 == null) goto label_05cf0565;
			bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(StringSetting)) ) {
				throw new InvalidCastException();
			}
			__this_01 = this._selectedButtonLabel;
			pSVar5 = (*(ulong)((sbyte)pSVar3 + 0x20));
			pSVar4 = this._optionLabel;
			if (pSVar4 != null) {
				pSVar5 = (String)(*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar5,pSVar4.method);
			}
			if (__this_01 == null) goto label_05cf0565;
		}
		pUVar7 = __this_01.GetComponent<Text>();
		if (pUVar7 != null) {
			pUVar7.set_text(pSVar5);
			return;
		}
	label_05cf0565: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C3A")]
	[Address(RVA = "0x5BEF170", Offset = "0x5BEE170", VA = "0x5BEF170")]
	public DropdownSettingElement()
	{
		// Lifted from source/cpp/UI/DropdownSettingElement.c (UI.DropdownSettingElement$$.ctor): clean
		float fVar1;
		float fVar3;

		this._currentScrollValue = 1.0;
		fVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		this._lastKnownPosition.x = (Vector3.zeroVector).x;
		this._lastKnownPosition.y = fVar3;
		this._lastKnownPosition.z = fVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/DropdownSettingElement.c.

	// UI.DropdownSettingElement.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// UI.DropdownSettingElement$$<Setup>b__14_0: clean
	private void Setup_b__14_0()
	{
		this.OnDropdownSelectedButtonClick();
		return;
	}

	// UI.DropdownSettingElement.<>c__DisplayClass23_0$$<CreateOptionButton>b__0: clean
	private void c__DisplayClass23_0__CreateOptionButton_b__0()
	{
		DropdownSettingElement pUVar1;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.OnDropdownOptionClick(this.option, this.index);
		return;
	}
}
