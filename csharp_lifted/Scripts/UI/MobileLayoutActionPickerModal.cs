// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutActionPickerModal
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutActionPickerModal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000777")]
internal class MobileLayoutActionPickerModal : BasePopup
{
	[Token(Token = "0x40025A7")]
	[FieldOffset(Offset = "0xA8")]
	private string _current;

	[Token(Token = "0x40025A8")]
	[FieldOffset(Offset = "0xB0")]
	private Action<string> _onSelect;

	[Token(Token = "0x40025A9")]
	[FieldOffset(Offset = "0xB8")]
	private RectTransform _rowsRoot;

	[Token(Token = "0x40025AA")]
	[FieldOffset(Offset = "0xC0")]
	private InputField _searchInput;

	[Token(Token = "0x40025AB")]
	[FieldOffset(Offset = "0xC8")]
	private string[] _options;

	[Token(Token = "0x40025AC")]
	[FieldOffset(Offset = "0xD0")]
	private string[] _groupOptions;

	[Token(Token = "0x40025AD")]
	[FieldOffset(Offset = "0xD8")]
	private StringSetting _groupFilter;

	[Token(Token = "0x40025AE")]
	[FieldOffset(Offset = "0xE0")]
	private MobileLayoutDropdownOverlay _groupDropdownOverlay;

	[Token(Token = "0x40025AF")]
	[FieldOffset(Offset = "0xE8")]
	private Font _font;

	[Token(Token = "0x40025B0")]
	[FieldOffset(Offset = "0xF0")]
	private string _title;

	[Token(Token = "0x40025B1")]
	[FieldOffset(Offset = "0xF8")]
	private MobileInputLayoutRole _role;

	[Token(Token = "0x17000C1A")]
	protected override string Title
	{
		[Token(Token = "0x60047F7")]
		[Address(RVA = "0x5BAEA10", Offset = "0x5BADA10", VA = "0x5BAEA10", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_Title): clean
			return this._title;
		}
	}

	[Token(Token = "0x17000C1B")]
	protected override float Width
	{
		[Token(Token = "0x60047F8")]
		[Address(RVA = "0x5BAEA20", Offset = "0x5BADA20", VA = "0x5BAEA20", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_Width): clean
			return 520.0;
		}
	}

	[Token(Token = "0x17000C1C")]
	protected override float Height
	{
		[Token(Token = "0x60047F9")]
		[Address(RVA = "0x5BAEA30", Offset = "0x5BADA30", VA = "0x5BAEA30", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_Height): clean
			return 560.0;
		}
	}

	[Token(Token = "0x17000C1D")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60047FA")]
		[Address(RVA = "0x5BAEA40", Offset = "0x5BADA40", VA = "0x5BAEA40", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_TopBarHeight): clean
			return 56.0;
		}
	}

	[Token(Token = "0x17000C1E")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60047FB")]
		[Address(RVA = "0x5BAEA50", Offset = "0x5BADA50", VA = "0x5BAEA50", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_BottomBarHeight): clean
			return 58.0;
		}
	}

	[Token(Token = "0x17000C1F")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x60047FC")]
		[Address(RVA = "0x5BAEA60", Offset = "0x5BADA60", VA = "0x5BAEA60", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_TitleFontSize): clean
			return 0x18;
		}
	}

	[Token(Token = "0x17000C20")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x60047FD")]
		[Address(RVA = "0x5BAEA70", Offset = "0x5BADA70", VA = "0x5BAEA70", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_ButtonFontSize): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C21")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60047FE")]
		[Address(RVA = "0x5BAEA80", Offset = "0x5BADA80", VA = "0x5BAEA80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_VerticalPadding): clean
			return 0x10;
		}
	}

	[Token(Token = "0x17000C22")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60047FF")]
		[Address(RVA = "0x5BAEA90", Offset = "0x5BADA90", VA = "0x5BAEA90", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_HorizontalPadding): clean
			return 0x12;
		}
	}

	[Token(Token = "0x17000C23")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004800")]
		[Address(RVA = "0x5BAEAA0", Offset = "0x5BADAA0", VA = "0x5BAEAA0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_VerticalSpacing): clean
			return 8.0;
		}
	}

	[Token(Token = "0x17000C24")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004801")]
		[Address(RVA = "0x5BAEAB0", Offset = "0x5BADAB0", VA = "0x5BAEAB0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000C25")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004802")]
		[Address(RVA = "0x5BAEAC0", Offset = "0x5BADAC0", VA = "0x5BAEAC0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$get_PopupAnimationType): clean
			return 0;
		}
	}

	[Token(Token = "0x6004803")]
	[Address(RVA = "0x5BAE7A0", Offset = "0x5BAD7A0", VA = "0x5BAE7A0")]
	public static void Open(Transform parent, string current, MobileInputLayoutRole role, Action<string> onSelect)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$Open): clean
		GameObject __this;
		MobileLayoutActionPickerModal __this_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Panels/HeadedPanel");
		if (__this != null) {
			__this_00 = __this.AddComponent<MobileLayoutActionPickerModal>();
			if (__this_00 != null) {
				__this_00.SetupPicker(current, role, onSelect);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004804")]
	[Address(RVA = "0x5BAEAD0", Offset = "0x5BADAD0", VA = "0x5BAEAD0")]
	private void SetupPicker(string current, MobileInputLayoutRole role, Action<string> onSelect)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$SetupPicker): 4 lines keep C-only constructs
		Transform parent;
		bool bVar1;
		int fontSize;
		String pSVar2;
		String[] pSVar3;
		StringSetting pSVar4;
		Font pUVar5;
		RectTransform pUVar6;
		GameObject __this_00;
		VerticalLayoutGroup __this_01;
		LayoutElement pUVar7;
		MethodInfo pMVar8;
		UnityAction __this_02;
		String* ppSVar9;
		MobileLayoutActionPickerModal pUVar10;

		pSVar2 = UIManager.GetLocale("SettingsPopup", "MobileLayout", "Action", "", "");
		this._title = pSVar2;
		this._current = current;
		pUVar10 = (MobileLayoutActionPickerModal)&this._onSelect;
		this._onSelect = onSelect;
		this._role = role;
		pSVar3 = pUVar10.GetGroupOptions();
		this._groupOptions = pSVar3;
		pSVar3 = this._groupOptions;
		pSVar2 = MobileInputBindingUtil.GetActionGroup(current);
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			if ((pSVar3 == null) || (pSVar3.Length == 0)) {
				ppSVar9 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				if ((int)pSVar3.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				ppSVar9 = pSVar3.m_Items;
			}
			pSVar2 = *ppSVar9;
		}
		pSVar4 = new StringSetting(pSVar2, 0x7fffffff);
		this._groupFilter = pSVar4;
		pSVar4 = this._groupFilter;
		if (pSVar4 != null) {
			pSVar3 = MobileInputBindingUtil.GetActionNamesForGroup(pSVar4._value);
			this._options = pSVar3;
			pUVar5 = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
			pUVar5 = LanguageFonts.LegacyFont(pUVar5);
			this._font = pUVar5;
			this.Setup(null);
			pMVar8 = null;
			this.ShowImmediate();
			this.CreateSearchInput();
			pUVar10 = (MobileLayoutActionPickerModal)this.SinglePanel;
			if (pUVar10 != null) {
				pUVar6 = pUVar10.GetComponent<RectTransform>();
				__this_00 = pUVar10.CreateRect("Rows", pUVar6);
				if (__this_00 != null) {
					pUVar6 = __this_00.GetComponent<RectTransform>();
					this._rowsRoot = pUVar6;
					__this_01 = __this_00.AddComponent<VerticalLayoutGroup>();
					if (__this_01 != null) {
						__this_01.spacing = 6.0;
						__this_01.childAlignment = 0;
						__this_01.childForceExpandHeight = false;
						pUVar7 = __this_00.AddComponent<LayoutElement>();
						if (pUVar7 != null) {
							pUVar7.set_flexibleHeight(1.0);
							parent = this.BottomBar;
							fontSize = this.get_ButtonFontSize();
							pSVar2 = this.get_ThemePanel();
							pMVar8 = new ElementStyle(fontSize, 120.0, 20.0, pSVar2);
							pSVar2 = UIManager.GetLocaleCommon("Cancel");
							__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutActionPickerModal_SetupPicker_b__36_0);
							ElementFactory.CreateDefaultButton(parent, (ElementStyle)pMVar8, pSVar2, 120.0, 42.0, __this_02);
							this.Populate();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004805")]
	[Address(RVA = "0x5BAF1E0", Offset = "0x5BAE1E0", VA = "0x5BAF1E0")]
	private void CreateSearchInput()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$CreateSearchInput): 26 lines keep C-only constructs
		InputField* targetAddress;
		InputField.OnChangeEvent __this_00;
		String[] options;
		StringSetting setting;
		ColorBlock value;
		bool bVar1;
		RectTransform pUVar2;
		MobileLayoutActionPickerModal pUVar3;
		object pIVar4;
		HorizontalOrVerticalLayoutGroup __this_01;
		GameObject pUVar5;
		Graphic pUVar6;
		String pSVar7;
		InputField pUVar8;
		long plVar9;
		UnityAction<T0> __this_02;
		ElementStyle __this_03;
		UnityAction __this_04;
		DropdownSettingElement dropdown;
		MobileLayoutDropdownOverlay pUVar10;
		Transform overlayRoot;
		MethodInfo method_00;
		MobileLayoutActionPickerModal __this_05;
		float fVar11;
		Color UVar12;
		Nullable<float> SStack_b0;
		Transform pUStack_a8;
		ulong uStack_98;
		ColorBlock UStack_88;

		pUVar3 = (MobileLayoutActionPickerModal)this.SinglePanel;
		if (pUVar3 != null) {
			pUVar2 = (RectTransform)pUVar3.GetComponent<RectTransform>();
			pUVar3 = (MobileLayoutActionPickerModal)pUVar3.CreateRect("Filters", pUVar2);
			if (pUVar3 != null) {
				pIVar4 = pUVar3.AddComponent<LayoutElement>();
				if (pIVar4 != null) {
					(*pIVar4.klass.vtable[0x24].methodPtr)(0x43e60000,pIVar4,pIVar4.klass.vtable[0x24].method);
					(*pIVar4.klass.vtable[0x26].methodPtr)(0x42200000,pIVar4,pIVar4.klass.vtable[0x26].method);
					(*pIVar4.klass.vtable[0x28].methodPtr)(0x3f800000,pIVar4,pIVar4.klass.vtable[0x28].method);
					__this_01 = (HorizontalOrVerticalLayoutGroup)pUVar3.AddComponent<HorizontalLayoutGroup>();
					if (__this_01 != null) {
						__this_01.spacing = 8.0;
						__this_01.childAlignment = 3;
						__this_01.childForceExpandHeight = false;
						__this_01.childForceExpandWidth = false;
						__this_05 = pUVar3;
						pUVar2 = (RectTransform)pUVar3.GetComponent<RectTransform>();
						pUVar5 = __this_05.CreateRect("Search", pUVar2);
						if (pUVar5 != null) {
							pIVar4 = pUVar5.AddComponent<LayoutElement>();
							if (pIVar4 != null) {
								(*pIVar4.klass.vtable[0x24].methodPtr)(0x439e0000,pIVar4,pIVar4.klass.vtable[0x24].method);
								(*pIVar4.klass.vtable[0x26].methodPtr)(0x42200000,pIVar4,pIVar4.klass.vtable[0x26].method);
								(*pIVar4.klass.vtable[0x28].methodPtr)(0x3f800000,pIVar4,pIVar4.klass.vtable[0x28].method);
								pUVar6 = (Graphic)pUVar5.AddComponent<Image>();
								pSVar7 = this.get_ThemePanel();
								UVar12 = UIManager.GetThemeColor(pSVar7, "DefaultSetting", "InputNormalColor", "DefaultPanel");
								if (pUVar6 != null) {
									fVar11 = UVar12.b;
									pUVar6.set_color(UVar12);
									pUVar6.set_raycastTarget(true);
									pUVar8 = (InputField)pUVar5.AddComponent<InputField>();
									targetAddress = &this._searchInput;
									this._searchInput = pUVar8;
									pUVar8 = this._searchInput;
									if (pUVar8 != null) {
										pUVar8.targetGraphic = pUVar6;
										pIVar4 = pUVar5.GetComponent<RectTransform>();
										plVar9 = (long)this.CreateText("Text", pIVar4, **(ulong*)(g_data_07556758 + 0xb8));
										pIVar4 = pUVar5.GetComponent<RectTransform>();
										pSVar7 = UIManager.GetLocaleCommon("Search");
										pUVar6 = (Graphic)this.CreateText("Placeholder", pIVar4, pSVar7);
										if (plVar9 != null) {
											pUStack_a8 = (Transform)(**(code*)(*plVar9 + 0x298))(plVar9,*(ulong)(*plVar9 + 0x2a0));
											uStack_98 = (**(code*)(*plVar9 + 0x298))(plVar9,*(ulong)(*plVar9 + 0x2a0));
											(**(code*)(*plVar9 + 0x298))(plVar9,*(ulong)(*plVar9 + 0x2a0));
											if (pUVar6 != null) {
												UVar12.g = (float)uStack_98._4_4_;
												UVar12.r = (float)pUStack_a8._0_4_;
												UVar12.a = 0.42;
												UVar12.b = fVar11;
												pUVar6.set_color(UVar12);
												if (*targetAddress != null) {
													(*targetAddress).textComponent = plVar9;
													if (*targetAddress != null) {
														(*targetAddress).placeholder = pUVar6;
														pUVar8 = this._searchInput;
														pSVar7 = this.get_ThemePanel();
														UStack_88 = UIManager.GetThemeColorBlock(pSVar7, "DefaultSetting", "Input", "DefaultPanel");
														if (pUVar8 != null) {
															value.m_NormalColor.b = UStack_88.m_NormalColor.b;
															value.m_NormalColor.a = UStack_88.m_NormalColor.a;
															value.m_NormalColor.r = UStack_88.m_NormalColor.r;
															value.m_NormalColor.g = UStack_88.m_NormalColor.g;
															value.m_HighlightedColor.r = UStack_88.m_HighlightedColor.r;
															value.m_HighlightedColor.g = UStack_88.m_HighlightedColor.g;
															value.m_HighlightedColor.b = UStack_88.m_HighlightedColor.b;
															value.m_HighlightedColor.a = UStack_88.m_HighlightedColor.a;
															value.m_PressedColor.r = UStack_88.m_PressedColor.r;
															value.m_PressedColor.g = UStack_88.m_PressedColor.g;
															value.m_PressedColor.b = UStack_88.m_PressedColor.b;
															value.m_PressedColor.a = UStack_88.m_PressedColor.a;
															value.m_SelectedColor.r = UStack_88.m_SelectedColor.r;
															value.m_SelectedColor.g = UStack_88.m_SelectedColor.g;
															value.m_SelectedColor.b = UStack_88.m_SelectedColor.b;
															value.m_SelectedColor.a = UStack_88.m_SelectedColor.a;
															value.m_DisabledColor.r = UStack_88.m_DisabledColor.r;
															value.m_DisabledColor.g = UStack_88.m_DisabledColor.g;
															value.m_DisabledColor.b = UStack_88.m_DisabledColor.b;
															value.m_DisabledColor.a = UStack_88.m_DisabledColor.a;
															value.m_ColorMultiplier = UStack_88.m_ColorMultiplier;
															value.m_FadeDuration = UStack_88.m_FadeDuration;
															pUVar8.colors = value;
															pUVar8 = this._searchInput;
															pSVar7 = this.get_ThemePanel();
															UVar12 = UIManager.GetThemeColor(pSVar7, "DefaultSetting", "InputSelectionColor", "DefaultPanel");
															if (pUVar8 != null) {
																pUVar8.selectionColor = UVar12;
																if (*targetAddress != null) {
																	__this_00 = ((*targetAddress).fields).m_OnValueChanged;
																	__this_02 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<string>));
																	__this_02 = new UnityAction<object>((object)this, (intptr_t) MethodInfo_UI_MobileLayoutActionPickerModal_CreateSearchInput_b__37_0);
																	if (__this_00 != null) {
																		__this_00.AddListener(__this_02);
																		pUStack_a8 = pUVar3.transform;
																		pSVar7 = this.get_ThemePanel() ;
																		__this_03 = new ElementStyle(0x12, 0.0, 20.0, pSVar7);
																		options = this._groupOptions;
																		setting = this._groupFilter;
																		method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
																		SStack_b0.hasValue = false;
																		SStack_b0._1_3_ = 0;
																		SStack_b0.value = 0.0;
																		SStack_b0 = new Nullable<float>(160.0);
																		__this_04 = (UnityAction)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																		__this_04 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_MobileLayoutActionPickerModal_CreateSearchInput_b__37_1);
																		pUVar5 = ElementFactory.CreateDropdownSetting(pUStack_a8, __this_03, (BaseSetting)setting, (String)method_00, options, "", 136.0, 40.0, 260.0, (Nullable<float>)SStack_b0, __this_04, null, null);
																		if (pUVar5 != null) {
																			pIVar4 = pUVar5.GetComponent<LayoutElement>();
																			if (pIVar4 == null) {
																				pIVar4 = pUVar5.AddComponent<LayoutElement>();
																				if (pIVar4 == null) goto label_05cafaac;
																			}
																			(*pIVar4.klass.vtable[0x24].methodPtr)(0x43080000,pIVar4,pIVar4.klass.vtable[0x24].method);
																			(*pIVar4.klass.vtable[0x26].methodPtr)(0x42200000,pIVar4,pIVar4.klass.vtable[0x26].method);
																			dropdown = (DropdownSettingElement)pUVar5.GetComponent<DropdownSettingElement>();
																			bVar1 = ((Object)dropdown != null);
																			if (bVar1) {
																				pUVar10 = (MobileLayoutDropdownOverlay)pUVar5.AddComponent<MobileLayoutDropdownOverlay>();
																				this._groupDropdownOverlay = pUVar10;
																				pUVar10 = this._groupDropdownOverlay;
																				overlayRoot = this.transform;
																				if (pUVar10 == null) goto label_05cafaac;
																				pUVar10.Setup(dropdown, overlayRoot);
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
				}
			}
		}
	label_05cafaac: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004806")]
	[Address(RVA = "0x5BAFD30", Offset = "0x5BAED30", VA = "0x5BAFD30")]
	private void Populate()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$Populate): 16 lines keep C-only constructs
		byte bVar1;
		RectTransform pUVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		InputField pUVar5;
		StringSetting pSVar6;
		bool bVar7;
		int iVar8;
		VirtualInvokeData pVVar9;
		Component __this_00;
		Object obj;
		object pIVar10;
		String pSVar11;
		String* ppSVar12;
		String[] pSVar13;
		MobileLayoutActionPickerModal.c__DisplayClass38_0 __this_01;
		String pSVar14;
		ElementStyle __this_02;
		UnityAction __this_03;
		GameObject __this_04;
		LayoutElement pUVar15;
		long lVar16;
		ulong uVar17;
		MobileLayoutActionPickerModal.c__DisplayClass38_0 targetAddress;
		MobileLayoutActionPickerModal pUVar18;
		object pIStack_70;
		String pSStack_68;
		MobileLayoutActionPickerModal pUStack_60;
		object pIStack_58;
		String[] pSStack_50;
		object* ppIStack_40;
		object* ppIStack_38;

		if (Il2CppMethodInitialized_07547a93 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(MobileLayoutActionPickerModal.c__DisplayClass38_0)) ;
			Il2CppMethodInitialized_07547a93 = true;
		}
		pIStack_58 = null;
		pUVar2 = this._rowsRoot;
		bVar7 = ((Object)pUVar2 == null);
		if (bVar7) {
			return;
		}
		pUVar2 = this._rowsRoot;
		pUStack_60 = this;
		if (pUVar2 != null) {
			pIStack_70 = (object)pUVar2.GetEnumerator();
			ppIStack_40 = &pIStack_70;
			ppIStack_38 = &pIStack_58;
			do {
				pIVar10 = pIStack_70;
				if (pIStack_70 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIStack_70.klass;
				uVar17 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar7 = pIVar10.Dispose();
				pIVar10 = pIStack_70;
				if (!bVar7) {
					pIVar10 = (pIStack_70 as IDisposable);
					pIStack_58 = pIVar10;
					if (pIVar10 == null) goto label_05cb0066;
					pIVar3 = pIVar10.klass;
					uVar17 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar17 == 0) goto label_05cb003f;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar16 = 0;
					goto label_05cb0030;
				}
				if (pIStack_70 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIStack_70.klass;
				uVar17 = (ulong)(pIVar3._2).interface_offsets_count;
				__this_00 = (Component)pIVar10.Dispose();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				obj = (Object)__this_00.gameObject;
				Object.Destroy(obj);
			} while(true);
		}
		goto label_05cb0400;
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar17 * 0x10 != lVar16)) break;
	label_05cb0030: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar9 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar16);
				goto label_05cb005d;
			}
		}
	label_05cb003f: ;
	label_05cb005d: ;
		pIVar10.Dispose();
	label_05cb0066: ;
		pUVar18 = pUStack_60;
		pUVar5 = pUStack_60._searchInput;
		bVar7 = ((Object)pUVar5 != null);
		if (bVar7) {
			pUVar5 = pUVar18._searchInput;
			if ((pUVar5 == null) ||(pSVar11 = pUVar5.m_Text, pSVar11 == null)) goto label_05cb0400;
			pSVar11 = pSVar11.Trim();
		}
		else {
			pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar6 = pUVar18._groupFilter;
		if (pSVar6 == null) {
			ppSVar12 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar12 = &pSVar6._value;
		}
		pSVar13 = MobileInputBindingUtil.GetActionNamesForGroup(*ppSVar12);
		pUVar18._options = pSVar13;
		pSVar13 = pUVar18._options;
		if (pSVar13 != null) {
			if (0 < (int)pSVar13.Length) {
				uVar17 = 0;
				pSStack_50 = pSVar13;
				do {
					__this_01 = new MobileLayoutActionPickerModal.c__DisplayClass38_0();
					if (__this_01 == null) goto label_05cb0400;
					__this_01.__4__this = pUVar18;
					if ((uint)pSVar13.Length <= uVar17) {
						throw new IndexOutOfRangeException();
					}
					targetAddress = &__this_01.fields;
					__this_01.option = pSVar13[uVar17];
					pSStack_68 = MobileInputBindingUtil.GetActionLabel(__this_01.option, pUVar18._role);
					bVar7 = String.IsNullOrEmpty(pSVar11);
					if (bVar7) {
	label_05cb0260: ;
						pSVar14 = pUVar18.get_ThemePanel();
						__this_02 = new ElementStyle(0x12, 120.0, 20.0, pSVar14);
						pUVar2 = pUVar18._rowsRoot;
						bVar7 = (targetAddress.option == pUVar18._current);
						if (bVar7) {
							pSVar14 = String.Concat(pSStack_68, " *");
						}
						else {
							pSVar14 = pSStack_68;
						}
						__this_03 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_MobileLayoutActionPickerModal_c__DisplayClass38_0_Populate_b__0);
						__this_04 = ElementFactory.CreateDefaultButton((Transform)pUVar2, __this_02, pSVar14, 440.0, 34.0, __this_03);
						if ((__this_04 == null) ||(pUVar15 = __this_04.GetComponent<LayoutElement>(), pSVar13 = pSStack_50, pUVar18 = pUStack_60, pUVar15 == null)) goto label_05cb0400;
						pUVar15.set_preferredWidth(460.0);
						pUVar15 = __this_04.GetComponent<LayoutElement>();
						if (pUVar15 == null) goto label_05cb0400;
						pUVar15.set_preferredHeight(34.0);
					}
					else {
						if (targetAddress.option == null) goto label_05cb0400;
						iVar8 = (targetAddress.option).IndexOf(pSVar11, 5);
						if (-1 < iVar8) goto label_05cb0260;
						if (pSStack_68 == null) goto label_05cb0400;
						iVar8 = pSStack_68.IndexOf(pSVar11, 5);
						if (-1 < iVar8) goto label_05cb0260;
					}
					uVar17 = uVar17 + 1;
				} while ((long)uVar17 < (long)(int)pSVar13.Length);
			}
			UIManager.NeedResizeText = true;
			return;
		}
	label_05cb0400: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004807")]
	[Address(RVA = "0x5BB0640", Offset = "0x5BAF640", VA = "0x5BB0640")]
	private string GetSelectedGroup()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$GetSelectedGroup): clean
		StringSetting pSVar1;

		pSVar1 = this._groupFilter;
		if (pSVar1 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return pSVar1._value;
	}

	[Token(Token = "0x6004808")]
	[Address(RVA = "0x5BAEFA0", Offset = "0x5BADFA0", VA = "0x5BAEFA0")]
	private string[] GetGroupOptions()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$GetGroupOptions): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String value;
		String[] pSVar3;
		bool bVar5;
		List<string> __this_00;
		String[] pSVar6;
		ulong uVar7;
		int iVar8;
		ulong uVar9;

		__this_00 = new List<string>();
		pSVar6 = MobileInputBindingUtil.GetActionGroups();
		if (pSVar6 != null) {
			iVar8 = (int)pSVar6.Length;
			uVar7 = pSVar6.Length & 0xffffffff;
			if (__this_00 == null) {
				if (iVar8 < 1) goto label_05caf160;
				uVar9 = 0;
				do {
					if (uVar7 <= uVar9) goto label_05caf15b;
					bVar5 = String.IsNullOrEmpty(pSVar6[uVar9]);
					if (!bVar5) goto label_05caf160;
					uVar9 = uVar9 + 1;
					uVar2 = (uint)pSVar6.Length;
					uVar7 = (ulong)uVar2;
				} while ((long)uVar9 < (long)(int)uVar2);
			}
			else {
				if (iVar8 < 1) goto label_05caf13b;
				uVar9 = 0;
				do {
					if (uVar7 <= uVar9) {
	label_05caf15b: ;
						throw new IndexOutOfRangeException();
					}
					value = pSVar6[uVar9];
					bVar5 = String.IsNullOrEmpty(value);
					if (!bVar5) {
						bVar5 = __this_00.Contains((object)value) ;
						if (!bVar5) {
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this_00._items;
							if (pSVar3 == null) goto label_05caf160;
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this_00._size = uVar2 + 1;
								pSVar3[(int)uVar2] = value;
							}
							else {
								__this_00.AddWithResize((object)value);
							}
						}
					}
					uVar9 = uVar9 + 1;
					uVar2 = (uint)pSVar6.Length;
					uVar7 = (ulong)uVar2;
				} while ((long)uVar9 < (long)(int)uVar2);
			}
			if (__this_00 != null) {
	label_05caf13b: ;
				pSVar6 = (String[])__this_00.ToArray();
				return pSVar6;
			}
		}
	label_05caf160: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004809")]
	[Address(RVA = "0x5BAF170", Offset = "0x5BAE170", VA = "0x5BAF170")]
	private string GetInitialGroup(string current, string[] groups)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$GetInitialGroup): 2 lines keep C-only constructs
		bool bVar1;
		String value;
		String* ppSVar2;

		value = MobileInputBindingUtil.GetActionGroup(current);
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			if ((groups == null) || (groups.Length == 0)) {
				ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				if ((int)groups.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				ppSVar2 = groups.m_Items;
			}
			value = *ppSVar2;
		}
		return value;
	}

	[Token(Token = "0x600480A")]
	[Address(RVA = "0x5BB0480", Offset = "0x5BAF480", VA = "0x5BB0480")]
	private Text CreateText(string name, RectTransform parent, string value, TextAnchor alignment)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$CreateText): 1 lines keep C-only constructs
		GameObject __this_00;
		Text __this_01;
		String panel;
		RectTransform __this_02;
		String* __this_03;
		Color UVar1;

		__this_03 = (String*)this;
		if (Il2CppMethodInitialized_07547a96 == false) {
			__this_03 = &"InputTextColor";
			Il2CppMethodInitialized_07547a96 = true;
		}
		__this_00 = __this_03.CreateRect(name, parent);
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<Text>();
			if (__this_01 != null) {
				__this_01.set_text(value);
				__this_01.font = this._font;
				__this_01.fontSize = 0x12;
				__this_01.alignment = alignment;
				panel = this.get_ThemePanel();
				UVar1 = UIManager.GetThemeColor(panel, "DefaultSetting", "InputTextColor", "DefaultPanel");
				__this_01.set_color(UVar1);
				__this_01.set_raycastTarget(false);
				__this_02 = __this_00.GetComponent<RectTransform>();
				if (__this_02 != null) {
					__this_02.offsetMin = (Vector2)0x41200000;
					__this_02.offsetMax = (Vector2)0xc1200000;
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600480B")]
	[Address(RVA = "0x5BAFAC0", Offset = "0x5BAEAC0", VA = "0x5BAFAC0")]
	private GameObject CreateRect(string name, RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$CreateRect): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_00;
		RectTransform __this_01;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject(name, components);
			if (__this_00 != null) {
				__this_01 = __this_00.GetComponent<RectTransform>();
				if (__this_01 != null) {
					__this_01.SetParent((Transform)parent, false);
					__this_01.anchorMin = (Vector2)(Vector2.zeroVector);
					__this_01.anchorMax = (Vector2)(Vector2.oneVector);
					__this_01.sizeDelta = (Vector2)(Vector2.zeroVector);
					__this_01.offsetMin = (Vector2)(Vector2.zeroVector);
					__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600480C")]
	[Address(RVA = "0x5BB06A0", Offset = "0x5BAF6A0", VA = "0x5BB06A0")]
	public MobileLayoutActionPickerModal()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionPickerModal.c (UI.MobileLayoutActionPickerModal$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileLayoutActionPickerModal.c.

	// UI.MobileLayoutActionPickerModal.<>c__DisplayClass38_0$$.ctor: clean
	private void c__DisplayClass38_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutActionPickerModal$$<SetupPicker>b__36_0: clean
	private void SetupPicker_b__36_0()
	{
		Object obj;

		obj = (Object)this.gameObject;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	// UI.MobileLayoutActionPickerModal$$<CreateSearchInput>b__37_0: clean
	private void CreateSearchInput_b__37_0(String __)
	{
		this.Populate();
		return;
	}

	// UI.MobileLayoutActionPickerModal$$<CreateSearchInput>b__37_1: clean
	private void CreateSearchInput_b__37_1()
	{
		this.Populate();
		return;
	}

	// UI.MobileLayoutActionPickerModal.<>c__DisplayClass38_0$$<Populate>b__0: clean
	private void c__DisplayClass38_0__Populate_b__0()
	{
		Action<string> pSVar1;
		Object obj;
		MobileLayoutActionPickerModal __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
	label_05cb07b5: ;
			throw new NullReferenceException();
		}
		pSVar1 = __this_00._onSelect;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,this.option,pSVar1.method);
			__this_00 = this.__4__this;
			if (__this_00 == null) goto label_05cb07b5;
		}
		obj = (Object)__this_00.gameObject;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}
}
