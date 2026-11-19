// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutSkinPickerModal
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutSkinPickerModal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000773")]
internal class MobileLayoutSkinPickerModal : BasePopup
{
	[Token(Token = "0x4002590")]
	[FieldOffset(Offset = "0xA8")]
	private string _current;

	[Token(Token = "0x4002591")]
	[FieldOffset(Offset = "0xB0")]
	private Action<string> _onSelect;

	[Token(Token = "0x4002592")]
	[FieldOffset(Offset = "0xB8")]
	private RectTransform _rowsRoot;

	[Token(Token = "0x4002593")]
	[FieldOffset(Offset = "0xC0")]
	private InputField _searchInput;

	[Token(Token = "0x4002594")]
	[FieldOffset(Offset = "0xC8")]
	private IntSetting _sourceFilter;

	[Token(Token = "0x4002595")]
	[FieldOffset(Offset = "0xD0")]
	private string[] _options;

	[Token(Token = "0x4002596")]
	[FieldOffset(Offset = "0xD8")]
	private string[] _sourceOptions;

	[Token(Token = "0x4002597")]
	[FieldOffset(Offset = "0xE0")]
	private Font _font;

	[Token(Token = "0x17000C0E")]
	protected override string Title
	{
		[Token(Token = "0x60047CD")]
		[Address(RVA = "0x5BABD50", Offset = "0x5BAAD50", VA = "0x5BABD50", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("SettingsPopup", "MobileLayout", "ControlSkin", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000C0F")]
	protected override float Width
	{
		[Token(Token = "0x60047CE")]
		[Address(RVA = "0x5BABDF0", Offset = "0x5BAADF0", VA = "0x5BABDF0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_Width): clean
			return 560.0;
		}
	}

	[Token(Token = "0x17000C10")]
	protected override float Height
	{
		[Token(Token = "0x60047CF")]
		[Address(RVA = "0x5BABE00", Offset = "0x5BAAE00", VA = "0x5BABE00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_Height): clean
			return 560.0;
		}
	}

	[Token(Token = "0x17000C11")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60047D0")]
		[Address(RVA = "0x5BABE10", Offset = "0x5BAAE10", VA = "0x5BABE10", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_TopBarHeight): clean
			return 56.0;
		}
	}

	[Token(Token = "0x17000C12")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60047D1")]
		[Address(RVA = "0x5BABE20", Offset = "0x5BAAE20", VA = "0x5BABE20", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_BottomBarHeight): clean
			return 58.0;
		}
	}

	[Token(Token = "0x17000C13")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x60047D2")]
		[Address(RVA = "0x5BABE30", Offset = "0x5BAAE30", VA = "0x5BABE30", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_TitleFontSize): clean
			return 0x18;
		}
	}

	[Token(Token = "0x17000C14")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x60047D3")]
		[Address(RVA = "0x5BABE40", Offset = "0x5BAAE40", VA = "0x5BABE40", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_ButtonFontSize): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C15")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60047D4")]
		[Address(RVA = "0x5BABE50", Offset = "0x5BAAE50", VA = "0x5BABE50", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_VerticalPadding): clean
			return 0x10;
		}
	}

	[Token(Token = "0x17000C16")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60047D5")]
		[Address(RVA = "0x5BABE60", Offset = "0x5BAAE60", VA = "0x5BABE60", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_HorizontalPadding): clean
			return 0x12;
		}
	}

	[Token(Token = "0x17000C17")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60047D6")]
		[Address(RVA = "0x5BABE70", Offset = "0x5BAAE70", VA = "0x5BABE70", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_VerticalSpacing): clean
			return 8.0;
		}
	}

	[Token(Token = "0x17000C18")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60047D7")]
		[Address(RVA = "0x5BABE80", Offset = "0x5BAAE80", VA = "0x5BABE80", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000C19")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60047D8")]
		[Address(RVA = "0x5BABE90", Offset = "0x5BAAE90", VA = "0x5BABE90", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$get_PopupAnimationType): clean
			return 0;
		}
	}

	[Token(Token = "0x60047D9")]
	[Address(RVA = "0x5BAB600", Offset = "0x5BAA600", VA = "0x5BAB600")]
	public static void Open(Transform parent, string current, Action<string> onSelect)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$Open): 2 lines keep C-only constructs
		GameObject __this;
		MobileLayoutSkinPickerModal __this_00;
		MethodInfo* method_00;

		__this = ElementFactory.InstantiateAndBind(parent, "Prefabs/Panels/HeadedPanel");
		if (__this != null) {
			method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutSkinPickerModal;
			__this_00 = __this.AddComponent<MobileLayoutSkinPickerModal>();
			if (__this_00 != null) {
				__this_00.SetupPicker(current, onSelect);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047DA")]
	[Address(RVA = "0x5BABEA0", Offset = "0x5BAAEA0", VA = "0x5BABEA0")]
	private void SetupPicker(string current, Action<string> onSelect)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$SetupPicker): 4 lines keep C-only constructs
		Transform pUVar1;
		int iVar2;
		String pSVar3;
		String[] pSVar4;
		IntSetting __this_00;
		Font pUVar5;
		RectTransform pUVar6;
		GameObject __this_01;
		VerticalLayoutGroup __this_02;
		LayoutElement pUVar7;
		ElementStyle __this_03;
		UnityAction pUVar8;
		MobileLayoutSkinPickerModal __this_04;

		if (Il2CppMethodInitialized_07547a78 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_0) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_1) ;
			Il2CppMethodInitialized_07547a78 = true;
		}
		pSVar3 = MobileControlSkinManager.NormalizeSkinReference(current);
		this._current = pSVar3;
		this._onSelect = onSelect;
		pSVar4 = MobileControlSkinManager.GetSkinSourceOptions();
		this._sourceOptions = pSVar4;
		iVar2 = this.GetSourceFilterValue(this._current);
		__this_00 = new IntSetting(iVar2, -0x80000000, 0x7fffffff);
		this._sourceFilter = __this_00;
		pSVar4 = MobileControlSkinManager.GetSkinOptions();
		this._options = pSVar4;
		pUVar5 = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
		pUVar5 = LanguageFonts.LegacyFont(pUVar5);
		this._font = pUVar5;
		this.Setup(null);
		this.ShowImmediate();
		this.CreateSearchInput();
		__this_04 = (MobileLayoutSkinPickerModal)this.SinglePanel;
		if (__this_04 != null) {
			pUVar6 = __this_04.GetComponent<RectTransform>();
			__this_01 = __this_04.CreateRect("Rows", pUVar6);
			if (__this_01 != null) {
				pUVar6 = __this_01.GetComponent<RectTransform>();
				this._rowsRoot = pUVar6;
				__this_02 = __this_01.AddComponent<VerticalLayoutGroup>();
				if (__this_02 != null) {
					__this_02.spacing = 6.0;
					__this_02.childAlignment = 0;
					__this_02.childForceExpandHeight = false;
					pUVar7 = __this_01.AddComponent<LayoutElement>();
					if (pUVar7 != null) {
						pUVar7.set_flexibleHeight(1.0);
						iVar2 = this.get_ButtonFontSize();
						pSVar3 = this.get_ThemePanel();
						__this_03 = new ElementStyle(iVar2, 120.0, 20.0, pSVar3);
						pUVar1 = this.BottomBar;
						pSVar3 = UIManager.GetLocaleCommon("Clear");
						pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_0);
						ElementFactory.CreateDefaultButton(pUVar1, __this_03, pSVar3, 120.0, 42.0, pUVar8);
						pUVar1 = this.BottomBar;
						pSVar3 = UIManager.GetLocaleCommon("Cancel");
						pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutSkinPickerModal_SetupPicker_b__33_1);
						ElementFactory.CreateDefaultButton(pUVar1, __this_03, pSVar3, 120.0, 42.0, pUVar8);
						this.Populate((String)__this_03);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047DB")]
	[Address(RVA = "0x5BAC410", Offset = "0x5BAB410", VA = "0x5BAC410")]
	private void CreateSearchInput()
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$CreateSearchInput): 33 lines keep C-only constructs
		InputField* targetAddress;
		IntSetting setting;
		String[] options;
		InputField.OnChangeEvent __this_00;
		ColorBlock value;
		bool bVar1;
		RectTransform pUVar2;
		MobileLayoutSkinPickerModal pUVar3;
		LayoutElement pUVar4;
		HorizontalLayoutGroup __this_01;
		Transform pUVar5;
		String pSVar6;
		ElementStyle __this_02;
		UnityAction __this_03;
		GameObject pUVar7;
		DropdownSettingElement dropdown;
		MobileLayoutDropdownOverlay __this_04;
		Image value_00;
		InputField pUVar8;
		Text value_01;
		Text value_02;
		UnityAction<T0> __this_05;
		MethodInfo method_00;
		MethodInfo method_01;
		Color UVar9;
		Color UVar10;
		Color UVar11;
		float fStack_a4;
		float local_98;
		Nullable<float> local_88;
		ulong uStack_80;
		ulong local_78;
		ulong uStack_70;
		ulong local_68;
		ulong uStack_60;
		ulong local_58;
		ulong uStack_50;
		ulong local_48;
		ulong uStack_40;
		ulong local_38;

		pUVar3 = (MobileLayoutSkinPickerModal)this.SinglePanel;
		if (pUVar3 != null) {
			pUVar2 = pUVar3.GetComponent<RectTransform>();
			pUVar3 = (MobileLayoutSkinPickerModal)pUVar3.CreateRect("Filters", pUVar2);
			if (pUVar3 != null) {
				pUVar4 = pUVar3.AddComponent<LayoutElement>();
				if (pUVar4 != null) {
					pUVar4.set_preferredWidth(500.0);
					pUVar4.set_preferredHeight(40.0);
					pUVar4.set_flexibleWidth(1.0);
					__this_01 = pUVar3.AddComponent<HorizontalLayoutGroup>();
					if (__this_01 != null) {
						__this_01.spacing = 8.0;
						__this_01.childAlignment = 3;
						__this_01.childForceExpandHeight = false;
						__this_01.childForceExpandWidth = false;
						pUVar5 = pUVar3.transform ;
						pSVar6 = this.get_ThemePanel();
						__this_02 = new ElementStyle(0x12, 0.0, 20.0, pSVar6);
						method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
						setting = this._sourceFilter;
						options = this._sourceOptions;
						local_88.hasValue = false;
						local_88._1_3_ = 0;
						local_88.value = 0.0;
						local_88 = new Nullable<float>(128.0);
						__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutSkinPickerModal_CreateSearchInput_b__34_0);
						method_01 = (MethodInfo *)"";
						pUVar7 = ElementFactory.CreateDropdownSetting(pUVar5, __this_02, (BaseSetting)setting, (String)method_00, options, "", 128.0, 40.0, 128.0, (Nullable<float>)local_88, __this_03, null, null);
						if (pUVar7 != null) {
							pUVar4 = pUVar7.GetComponent<LayoutElement>();
							if (pUVar4 == null) {
								pUVar4 = pUVar7.AddComponent<LayoutElement>();
								if (pUVar4 == null) goto label_05caccae;
							}
							pUVar4.set_preferredWidth(128.0);
							pUVar4.set_preferredHeight(40.0);
							dropdown = pUVar7.GetComponent<DropdownSettingElement>();
							bVar1 = ((Object)dropdown != null) ;
							if (bVar1) {
								__this_04 = pUVar7.AddComponent<MobileLayoutDropdownOverlay>();
								pUVar5 = this.transform;
								if (__this_04 == null) goto label_05caccae;
								__this_04.Setup(dropdown, pUVar5);
							}
							pUVar2 = pUVar3.GetComponent<RectTransform>();
							pUVar7 = pUVar3.CreateRect("Search", pUVar2);
							if (pUVar7 != null) {
								pUVar4 = pUVar7.AddComponent<LayoutElement>();
								if (pUVar4 != null) {
									pUVar4.set_preferredWidth(364.0);
									pUVar4.set_preferredHeight(40.0);
									pUVar4.set_flexibleWidth(1.0);
									value_00 = pUVar7.AddComponent<Image>();
									pSVar6 = this.get_ThemePanel();
									UVar9 = UIManager.GetThemeColor(pSVar6, "DefaultSetting", "InputNormalColor", "DefaultPanel");
									if (value_00 != null) {
										value_00.set_color(UVar9);
										value_00.set_raycastTarget(true);
										pUVar8 = pUVar7.AddComponent<InputField>();
										targetAddress = &this._searchInput;
										this._searchInput = pUVar8;
										pUVar8 = this._searchInput;
										if (pUVar8 != null) {
											pUVar8.targetGraphic = (Graphic)value_00;
											pUVar2 = pUVar7.GetComponent<RectTransform>();
											value_01 = this.CreateText("Text", pUVar2, (String)**(ulong*)(g_data_07556758 + 0xb8), 3);
											pUVar2 = pUVar7.GetComponent<RectTransform>();
											pSVar6 = UIManager.GetLocaleCommon("Search");
											value_02 = this.CreateText("Placeholder", pUVar2, pSVar6, 3);
											if (value_01 != null) {
												UVar9 = value_01.get_color();
												UVar10 = value_01.get_color();
												UVar11 = value_01.get_color();
												if (value_02 != null) {
													local_98 = UVar9.r;
													fStack_a4 = UVar10.g;
													UVar11.g = fStack_a4;
													UVar11.r = local_98;
													UVar11.a = 0.42;
													value_02.set_color(UVar11);
													if (*targetAddress != null) {
														(*targetAddress).textComponent = value_01;
														if (*targetAddress != null) {
															(*targetAddress).placeholder = (Graphic)value_02;
															pUVar8 = this._searchInput;
															pSVar6 = this.get_ThemePanel();
															local_88 = UIManager.GetThemeColorBlock(pSVar6, "DefaultSetting", "Input", "DefaultPanel");
															if (pUVar8 != null) {
																value.m_NormalColor.b = (float)(undefined4)uStack_80;
																value.m_NormalColor.a = (float)uStack_80._4_4_;
																value.m_NormalColor._0_8_ = local_88;
																value.m_HighlightedColor.r = (float)(undefined4)local_78;
																value.m_HighlightedColor.g = (float)local_78._4_4_;
																value.m_HighlightedColor.b = (float)(undefined4)uStack_70;
																value.m_HighlightedColor.a = (float)uStack_70._4_4_;
																value.m_PressedColor.r = (float)(undefined4)local_68;
																value.m_PressedColor.g = (float)local_68._4_4_;
																value.m_PressedColor.b = (float)(undefined4)uStack_60;
																value.m_PressedColor.a = (float)uStack_60._4_4_;
																value.m_SelectedColor.r = (float)(undefined4)local_58;
																value.m_SelectedColor.g = (float)local_58._4_4_;
																value.m_SelectedColor.b = (float)(undefined4)uStack_50;
																value.m_SelectedColor.a = (float)uStack_50._4_4_;
																value.m_DisabledColor.r = (float)(undefined4)local_48;
																value.m_DisabledColor.g = (float)local_48._4_4_;
																value.m_DisabledColor.b = (float)(undefined4)uStack_40;
																value.m_DisabledColor.a = (float)uStack_40._4_4_;
																value.m_ColorMultiplier = (float)(undefined4)local_38;
																value.m_FadeDuration = (float)local_38._4_4_;
																pUVar8.colors = value;
																pUVar8 = this._searchInput;
																pSVar6 = this.get_ThemePanel();
																UVar9 = UIManager.GetThemeColor(pSVar6, "DefaultSetting", "InputSelectionColor", "DefaultPanel");
																if (pUVar8 != null) {
																	pUVar8.selectionColor = UVar9;
																	if (*targetAddress != null) {
																		__this_00 = ((*targetAddress).fields).m_OnValueChanged;
																		__this_05 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<string>));
																		__this_05 = new UnityAction<object>((object)this, (intptr_t) MethodInfo_UI_MobileLayoutSkinPickerModal_CreateSearchInput_b__34_1);
																		if (__this_00 != null) {
																			__this_00.AddListener(__this_05);
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
	label_05caccae: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047DC")]
	[Address(RVA = "0x5BACF30", Offset = "0x5BABF30", VA = "0x5BACF30")]
	private void Populate()
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$Populate): 13 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		RectTransform pUVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		InputField pUVar6;
		String[] pSVar7;
		String option;
		bool bVar8;
		int iVar9;
		MethodInfo method_00;
		VirtualInvokeData pVVar10;
		Component __this_00;
		Object obj;
		object pIVar11;
		String pSVar12;
		ulong uVar13;
		String __this_01;
		ulong uVar14;
		long lVar15;
		object pIStack_58;
		object pIStack_50;
		byte puStack_40;
		object* ppIStack_38;

		pIStack_50 = null;
		pUVar3 = this._rowsRoot;
		bVar8 = ((Object)pUVar3 == null);
		if (bVar8) {
			return;
		}
		pUVar3 = this._rowsRoot;
		if (pUVar3 != null) {
			pIStack_58 = (object)pUVar3.GetEnumerator();
			puStack_40 = (byte)&pIStack_58;
			ppIStack_38 = &pIStack_50;
			do {
				pIVar11 = pIStack_58;
				if (pIStack_58 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = pIStack_58.klass;
				uVar13 = (ulong)(pIVar4._2).interface_offsets_count;
				if (uVar13 != 0) {
					pIVar5 = (pIVar4._1).interfaceOffsets;
					lVar15 = 0;
					do {
						if (*(IEnumerator*)((long)&pIVar5.interfaceType + lVar15) == typeof(IEnumerator)) {
							method_00 = (MethodInfo)(pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar15));
							goto label_05cad093;
						}
						lVar15 = lVar15 + 0x10;
					} while (uVar13 * 0x10 != lVar15);
				}
				method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIStack_58, typeof(IEnumerator), 0);
	label_05cad093: ;
				bVar8 = (*method_00.methodPointer)(pIVar11,(MethodInfo)method_00.virtualMethodPointer);
				pIVar11 = pIStack_58;
				if (!bVar8) {
					pIVar11 = (pIStack_58 as IDisposable);
					pIStack_50 = pIVar11;
					if (pIVar11 == null) goto label_05cad216;
					pIVar4 = pIVar11.klass;
					uVar13 = (ulong)(pIVar4._2).interface_offsets_count;
					method_00 = null;
					if (uVar13 == 0) goto label_05cad1ef;
					pIVar5 = (pIVar4._1).interfaceOffsets;
					method_00 = (MethodInfo)(uVar13 * 0x10);
					lVar15 = 0;
					goto label_05cad1e0;
				}
				if (pIStack_58 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = pIStack_58.klass;
				uVar13 = (ulong)(pIVar4._2).interface_offsets_count;
				__this_00 = (Component)pIVar11.Dispose();
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
		goto label_05cad3a4;
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(method_00 != (MethodInfo)lVar15)) break;
	label_05cad1e0: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar15) == typeof(IDisposable)) {
				method_00 = (MethodInfo)((long)*(int)((long)&pIVar5.offset + lVar15) * 0x10);
				pVVar10 = (VirtualInvokeData)((long)&method_00[3].parameters + (long)pIVar4);
				goto label_05cad20d;
			}
		}
	label_05cad1ef: ;
	label_05cad20d: ;
		pIVar11.Dispose();
	label_05cad216: ;
		pUVar6 = this._searchInput;
		bVar8 = ((Object)pUVar6 != null);
		if (bVar8) {
			pUVar6 = this._searchInput;
			if ((pUVar6 == null) ||(pSVar12 = pUVar6.m_Text, pSVar12 == null)) goto label_05cad3a4;
			pSVar12 = pSVar12.Trim();
		}
		else {
			pSVar12 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar7 = this._options;
		if (pSVar7 != null) {
			if (0 < (int)pSVar7.Length) {
				uVar13 = pSVar7.Length & 0xffffffff;
				uVar14 = 0;
				do {
					if (uVar13 <= uVar14) {
						throw new IndexOutOfRangeException();
					}
					option = pSVar7[uVar14];
					bVar8 = this.MatchesSourceFilter(option);
					if (bVar8) {
						__this_01 = MobileControlSkinManager.GetSkinDisplayName(option);
						bVar8 = String.IsNullOrEmpty(pSVar12);
						if (!bVar8) {
							if (__this_01 == null) goto label_05cad3a4;
							method_00 = null;
							iVar9 = __this_01.IndexOf(pSVar12, 5);
							if (iVar9 < 0) goto label_05cad2ce;
						}
						this.CreateOptionRow(option, __this_01);
					}
	label_05cad2ce: ;
					uVar14 = uVar14 + 1;
					uVar2 = (uint)pSVar7.Length;
					uVar13 = (ulong)uVar2;
					method_00 = (MethodInfo)(long)(int)uVar2;
				} while ((long)uVar14 < (long)method_00);
			}
			UIManager.NeedResizeText = true;
			return;
		}
	label_05cad3a4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047DD")]
	[Address(RVA = "0x5BAD5C0", Offset = "0x5BAC5C0", VA = "0x5BAD5C0")]
	private bool MatchesSourceFilter(string option)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$MatchesSourceFilter): 2 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		IntSetting pSVar3;
		String value;
		uint uVar4;
		bool bVar5;
		String* ppSVar6;
		uint uVar7;
		long lVar8;
		uint uVar9;

		if (Il2CppMethodInitialized_07547a7b == false) {
			Il2CppMethodInitialized_07547a7b = true;
			if (Il2CppMethodInitialized_07547a7d == false) goto label_05cad606;
	label_05cad5dc: ;
			pSVar2 = this._sourceOptions;
		}
		else {
			if (Il2CppMethodInitialized_07547a7d != false) goto label_05cad5dc;
	label_05cad606: ;
			Il2CppMethodInitialized_07547a7d = true;
			pSVar2 = this._sourceOptions;
		}
		if ((pSVar2 == null) || (pSVar2.Length == 0)) {
			ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar3 = this._sourceFilter;
			uVar7 = (uint)pSVar2.Length;
			if (pSVar3 == null) {
				lVar8 = 0;
				if (uVar7 == 0) goto label_05cad6bf;
			}
			else {
				uVar1 = pSVar3._value;
				uVar4 = uVar7 - 1;
				if ((int)uVar1 < (int)(uVar7 - 1)) {
					uVar4 = uVar1;
				}
				uVar9 = 0;
				if (-1 < (int)uVar1) {
					uVar9 = uVar4;
				}
				lVar8 = (long)(int)uVar9;
				if (uVar7 <= uVar9) {
	label_05cad6bf: ;
					throw new IndexOutOfRangeException();
				}
			}
			ppSVar6 = pSVar2.m_Items + lVar8;
		}
		value = *ppSVar6;
		bVar5 = String.IsNullOrWhiteSpace(value);
		if (bVar5) {
			return true;
		}
		bVar5 = MobileControlSkinManager.IsSkinReferenceFromSource(option, value);
		return bVar5;
	}

	[Token(Token = "0x60047DE")]
	[Address(RVA = "0x5BAC330", Offset = "0x5BAB330", VA = "0x5BAC330")]
	private int GetSourceFilterValue(string path)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$GetSourceFilterValue): clean
		uint uVar1;
		bool bVar2;
		String b;
		String[] pSVar3;
		ulong uVar4;

		pSVar3 = this._sourceOptions;
		if ((pSVar3 == null) || (pSVar3.Length == 0)) {
			return 0;
		}
		b = MobileControlSkinManager.GetSkinSourceName(path);
		pSVar3 = this._sourceOptions;
		if (pSVar3 != null) {
			uVar4 = 0;
			do {
				uVar1 = (uint)pSVar3.Length;
				if ((long)(int)uVar1 <= (long)uVar4) {
					return 0;
				}
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				bVar2 = String.Equals(pSVar3[uVar4], b, 5);
				if (bVar2) {
					return (int32_t)uVar4;
				}
				uVar4 = uVar4 + 1;
				pSVar3 = this._sourceOptions;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047DF")]
	[Address(RVA = "0x5BADB00", Offset = "0x5BACB00", VA = "0x5BADB00")]
	private string GetSelectedSource()
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$GetSelectedSource): clean
		uint uVar1;
		String[] pSVar2;
		IntSetting pSVar3;
		uint uVar4;
		long lVar5;
		uint uVar6;
		uint uVar7;

		pSVar2 = this._sourceOptions;
		if ((pSVar2 == null) || (pSVar2.Length == 0)) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar3 = this._sourceFilter;
		uVar4 = (uint)pSVar2.Length;
		if (pSVar3 == null) {
			lVar5 = 0;
			if (uVar4 == 0) goto label_05cadb87;
		}
		else {
			uVar1 = pSVar3._value;
			uVar6 = uVar4 - 1;
			if ((int)uVar1 < (int)(uVar4 - 1)) {
				uVar6 = uVar1;
			}
			uVar7 = 0;
			if (-1 < (int)uVar1) {
				uVar7 = uVar6;
			}
			lVar5 = (long)(int)uVar7;
			if (uVar4 <= uVar7) {
	label_05cadb87: ;
				throw new IndexOutOfRangeException();
			}
		}
		return pSVar2[lVar5];
	}

	[Token(Token = "0x60047E0")]
	[Address(RVA = "0x5BAD6D0", Offset = "0x5BAC6D0", VA = "0x5BAD6D0")]
	private void CreateOptionRow(string option, string displayName)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$CreateOptionRow): 5 lines keep C-only constructs
		bool bVar1;
		MobileLayoutSkinPickerModal.c__DisplayClass39_0 __this_00;
		MobileLayoutSkinPickerModal pUVar2;
		LayoutElement pUVar3;
		HorizontalLayoutGroup __this_01;
		RectTransform parent;
		GameObject pUVar4;
		Image __this_02;
		Sprite value;
		String pSVar5;
		ElementStyle __this_03;
		Transform parent_00;
		UnityAction __this_04;
		MobileLayoutSkinPickerModal __this_05;
		String* targetAddress;
		Color UVar6;

		__this_00 = new MobileLayoutSkinPickerModal.c__DisplayClass39_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			targetAddress = &__this_00.option;
			__this_00.option = option;
			pUVar2 = (MobileLayoutSkinPickerModal)targetAddress;
			pUVar2 = (MobileLayoutSkinPickerModal)pUVar2.CreateRect("SkinRow", this._rowsRoot);
			if ((pUVar2 != null) &&(pUVar3 = pUVar2.AddComponent<LayoutElement>(), pUVar3 != null)) {
				pUVar3.set_preferredWidth(500.0);
				pUVar3.set_preferredHeight(54.0);
				__this_01 = pUVar2.AddComponent<HorizontalLayoutGroup>();
				if (__this_01 != null) {
					__this_01.spacing = 8.0;
					__this_01.childAlignment = 3;
					__this_01.childForceExpandHeight = false;
					__this_01.childForceExpandWidth = false;
					__this_05 = pUVar2;
					parent = pUVar2.GetComponent<RectTransform>();
					pUVar4 = __this_05.CreateRect("Preview", parent);
					if ((pUVar4 != null) &&(pUVar3 = pUVar4.AddComponent<LayoutElement>(), pUVar3 != null)) {
						pUVar3.set_preferredWidth(46.0);
						pUVar3.set_preferredHeight(46.0);
						__this_02 = pUVar4.AddComponent<Image>();
						pSVar5 = *targetAddress;
						value = MobileControlSkinManager.GetSprite(pSVar5);
						if (__this_02 != null) {
							__this_02.sprite = value;
							__this_02.preserveAspect = true;
							UVar6.b = 1.0;
							UVar6.a = 1.0;
							UVar6.r = 1.0;
							UVar6.g = 1.0;
							__this_02.set_color(UVar6);
							__this_02.set_raycastTarget(false);
							pSVar5 = this.get_ThemePanel();
							__this_03 = new ElementStyle(0x12, 120.0, 20.0, pSVar5);
							bVar1 = (*targetAddress == this._current);
							if (bVar1) {
								displayName = String.Concat(displayName, " *") ;
							}
							parent_00 = pUVar2.transform;
							__this_04 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutSkinPickerModal_c__DisplayClass39_0_CreateOptionRow_b__0);
							pUVar4 = ElementFactory.CreateDefaultButton(parent_00, __this_03, displayName, 420.0, 44.0, __this_04);
							if ((pUVar4 != null) &&(pUVar3 = pUVar4.GetComponent<LayoutElement>(), pUVar3 != null)) {
								pUVar3.set_flexibleWidth(1.0);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047E1")]
	[Address(RVA = "0x5BAD400", Offset = "0x5BAC400", VA = "0x5BAD400")]
	private Text CreateText(string name, RectTransform parent, string value, TextAnchor alignment)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$CreateText): 1 lines keep C-only constructs
		GameObject __this_00;
		Text __this_01;
		String panel;
		RectTransform __this_02;
		String* __this_03;
		Color UVar1;

		__this_03 = (String*)this;
		if (Il2CppMethodInitialized_07547a7f == false) {
			__this_03 = &"InputTextColor";
			Il2CppMethodInitialized_07547a7f = true;
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

	[Token(Token = "0x60047E2")]
	[Address(RVA = "0x5BACCC0", Offset = "0x5BABCC0", VA = "0x5BACCC0")]
	private GameObject CreateRect(string name, RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$CreateRect): 1 lines keep C-only constructs
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

	[Token(Token = "0x60047E3")]
	[Address(RVA = "0x5BADBA0", Offset = "0x5BACBA0", VA = "0x5BADBA0")]
	public MobileLayoutSkinPickerModal()
	{
		// Lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c (UI.MobileLayoutSkinPickerModal$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileLayoutSkinPickerModal.c.

	// UI.MobileLayoutSkinPickerModal.<>c__DisplayClass39_0$$.ctor: clean
	private void c__DisplayClass39_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutSkinPickerModal$$<SetupPicker>b__33_0: clean
	private void SetupPicker_b__33_0()
	{
		Action<string> pSVar1;
		Object obj;

		pSVar1 = this._onSelect;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,**(ulong*)(g_data_07556758 + 0xb8),pSVar1.method);
		}
		obj = (Object)this.gameObject;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	// UI.MobileLayoutSkinPickerModal$$<SetupPicker>b__33_1: clean
	private void SetupPicker_b__33_1()
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

	// UI.MobileLayoutSkinPickerModal$$<CreateSearchInput>b__34_0: clean
	private void CreateSearchInput_b__34_0()
	{


		this.Populate((String)method);
		return;
	}

	// UI.MobileLayoutSkinPickerModal$$<CreateSearchInput>b__34_1: clean
	private void CreateSearchInput_b__34_1(String __)
	{
		this.Populate(__);
		return;
	}

	// UI.MobileLayoutSkinPickerModal.<>c__DisplayClass39_0$$<CreateOptionRow>b__0: clean
	private void c__DisplayClass39_0__CreateOptionRow_b__0()
	{
		Action<string> pSVar1;
		Object obj;
		MobileLayoutSkinPickerModal __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
	label_05cadd45: ;
			throw new NullReferenceException();
		}
		pSVar1 = __this_00._onSelect;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,this.option,pSVar1.method);
			__this_00 = this.__4__this;
			if (__this_00 == null) goto label_05cadd45;
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
