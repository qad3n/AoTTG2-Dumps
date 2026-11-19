// ==================== AoTTG2 cross-reference ====================
// Type: UI.RoleSpritePickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/RoleSpritePickPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200079E")]
internal class RoleSpritePickPopup : PromptPopup
{
	[Token(Token = "0x4002676")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4002677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private StringSetting _setting;

	[Token(Token = "0x4002678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4002679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onSelect;

	[Token(Token = "0x17000CBC")]
	protected override string Title
	{
		[Token(Token = "0x600499D")]
		[Address(RVA = "0x5BC2620", Offset = "0x5BC1620", VA = "0x5BC2620", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000CBD")]
	protected override float Width
	{
		[Token(Token = "0x600499E")]
		[Address(RVA = "0x5BC2640", Offset = "0x5BC1640", VA = "0x5BC2640", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_Width): clean
			return 760.0;
		}
	}

	[Token(Token = "0x17000CBE")]
	protected override float Height
	{
		[Token(Token = "0x600499F")]
		[Address(RVA = "0x5BC2650", Offset = "0x5BC1650", VA = "0x5BC2650", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_Height): clean
			return 620.0;
		}
	}

	[Token(Token = "0x17000CBF")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60049A0")]
		[Address(RVA = "0x5BC2660", Offset = "0x5BC1660", VA = "0x5BC2660", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000CC0")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60049A1")]
		[Address(RVA = "0x5BC2670", Offset = "0x5BC1670", VA = "0x5BC2670", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000CC1")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60049A2")]
		[Address(RVA = "0x5BC2680", Offset = "0x5BC1680", VA = "0x5BC2680", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000CC2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60049A3")]
		[Address(RVA = "0x5BC2690", Offset = "0x5BC1690", VA = "0x5BC2690", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x60049A4")]
	[Address(RVA = "0x5BC26A0", Offset = "0x5BC16A0", VA = "0x5BC26A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		String pSVar1;
		ElementStyle __this_00;
		UnityAction __this_01;

		this.Setup(parent);
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar1);
		parent_00 = this.BottomBar;
		pSVar1 = UIManager.GetLocaleCommon("Back");
		__this_01 = new UnityAction((object)this, (intptr_t)(this.klass.vtable)._22_Hide.method);
		ElementFactory.CreateTextButton(parent_00, __this_00, pSVar1, 0.0, __this_01);
		return;
	}

	[Token(Token = "0x60049A5")]
	[Address(RVA = "0x5BC27C0", Offset = "0x5BC17C0", VA = "0x5BC27C0")]
	public void Show(StringSetting setting, TextMeshProUGUI label, [Optional] UnityAction onSelect)
	{
		// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$Show): 4 lines keep C-only constructs
		int piVar1;
		int length;
		List<GameObject> pSVar2;
		object obj;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		this._setting = setting;
		this._label = label;
		this._onSelect = onSelect;
		pSVar2 = this._items;
		if (pSVar2 != null) {
			local_58 = pSVar2.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				obj = local_58._current;
				if (!bVar3) break;
				Object.Destroy((Object)obj);
			}
			local_58.Dispose() ;
			pSVar2 = this._items;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				this.BuildItems();
				this.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049A6")]
	[Address(RVA = "0x5BC29D0", Offset = "0x5BC19D0", VA = "0x5BC29D0")]
	private void BuildItems()
	{
		// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$BuildItems): 7 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		String pSVar4;
		ElementStyle __this_00;
		object pIVar5;
		VirtualInvokeData pVVar6;
		ulong uVar7;
		long lVar8;
		object local_48;
		byte local_38;

		pSVar4 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x1a, 120.0, 20.0, pSVar4);
		this.CreateItem(__this_00, "None", (String)**(ulong*)(g_data_07556758 + 0xb8));
		pIVar5 = (object)RoleSpriteHelpers.GetEligibleRoleSprites(null);
		if (pIVar5 == null) {
			throw new NullReferenceException();
		}
		pIVar1 = pIVar5.klass;
		uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
		local_48 = pIVar5.Dispose();
		local_38 = (byte)&local_48;
		do {
			pIVar5 = local_48;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_48.klass;
			uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
			bVar3 = pIVar5.Dispose();
			pIVar5 = local_48;
			if (!bVar3) {
				if (local_48 == null) {
					return;
				}
				pIVar1 = local_48.klass;
				uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar7 == 0) goto label_05cc2cdf;
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar8 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_48.klass;
			uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
			pSVar4 = (String)pIVar5.Dispose();
			this.CreateItem(__this_00, pSVar4, pSVar4);
		} while(true);
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar6 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar8);
				goto label_05cc2cfd;
			}
		}
	label_05cc2cdf: ;
	label_05cc2cfd: ;
		pIVar5.Dispose();
		return;
	}

	[Token(Token = "0x60049A7")]
	[Address(RVA = "0x5BC2D40", Offset = "0x5BC1D40", VA = "0x5BC2D40")]
	private void CreateItem(ElementStyle style, string displayName, string value)
	{
		// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$CreateItem): 45 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		RoleSpriteDefinition[] source;
		UnityEvent __this_01;
		ColorBlock value_00;
		Il2CppType handle;
		bool bVar5;
		RoleSpritePickPopup.c__DisplayClass21_0 __this_02;
		Type[] pSVar6;
		Type pSVar7;
		object pIVar8;
		GameObject __this_03;
		Transform pUVar9;
		Transform pUVar10;
		LayoutElement pUVar11;
		Image pUVar12;
		Button __this_04;
		GameObject __this_05;
		RectTransform __this_06;
		TextMeshProUGUI pTVar13;
		TMP_FontAsset value_01;
		TMP_SpriteAsset value_02;
		String pSVar14;
		Func<RoleSpriteDefinition, bool> __this_07;
		UnityAction __this_08;
		TextMeshProUGUI* targetAddress;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		RoleSpriteDefinition PVar15;
		Color UVar16;
		Color UVar17;
		int local_c4;
		ElementStyle local_c0;
		String local_b8;
		RoleSpritePickPopup.c__DisplayClass21_0 local_b0;
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[16];

		local_c0 = style;
		__this_02 = new RoleSpritePickPopup.c__DisplayClass21_0();
		if (__this_02 == null) goto label_05cc38b9;
		local_b0 = &__this_02.fields;
		__this_02.value = value;
		__this_02.__4__this = this;
		pSVar6 = (Type[])new Type[5];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar6 == null) goto label_05cc38b9;
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		if ((int)pSVar6.Length == 0) goto label_05cc38be;
		pSVar6[0] = pSVar7;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		if ((pSVar6.Length & 0xfffffffe) == 0) goto label_05cc38be;
		pSVar6[1] = pSVar7;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		if ((uint)pSVar6.Length < 3) goto label_05cc38be;
		pSVar6[2] = pSVar7;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		if ((pSVar6.Length & 0xfffffffc) == 0) goto label_05cc38be;
		pSVar6[3] = pSVar7;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		local_b8 = displayName;
		if ((uint)pSVar6.Length < 5) goto label_05cc38be;
		pSVar6[4] = pSVar7;
		__this_03 = new GameObject("RoleSpriteButton", pSVar6);
		if (__this_03 == null) goto label_05cc38b9;
		pUVar9 = __this_03.transform;
		pUVar10 = this.SinglePanel;
		if (pUVar10 == null) goto label_05cc38b9;
		pUVar10 = pUVar10.transform;
		if (pUVar9 == null) goto label_05cc38b9;
		pUVar9.SetParent(pUVar10, false);
		__this_00 = this._items;
		if (__this_00 == null) goto label_05cc38b9;
		piVar1 = &__this_00._version;
		*piVar1 = *piVar1 + 1;
		pUVar3 = __this_00._items;
		if (pUVar3 == null) goto label_05cc38b9;
		uVar2 = __this_00._size;
		if (uVar2 < (uint)pUVar3.Length) {
			__this_00._size = uVar2 + 1;
			pUVar3[(int)uVar2] = __this_03;
		}
		else {
			__this_00.AddWithResize((object)__this_03);
		}
		pUVar11 = __this_03.GetComponent<LayoutElement>();
		if (pUVar11 == null) goto label_05cc38b9;
		pUVar11.set_preferredWidth(680.0);
		pUVar11.set_preferredHeight(42.0);
		if (local_c0 == null) goto label_05cc38b9;
		pSVar14 = local_c0.ThemePanel;
		UVar16 = UIManager.GetThemeColor(pSVar14, "DefaultLabel", "TextColor", "DefaultPanel");
		local_98._8_4_ = extraout_XMM0_Dc;
		local_98._0_8_ = UVar16._0_8_;
		local_98._12_4_ = extraout_XMM0_Dd;
		local_a8._8_4_ = in_XMM1_Dc;
		local_a8._0_8_ = UVar16._8_8_;
		local_a8._12_4_ = in_XMM1_Dd;
		pUVar12 = __this_03.GetComponent<Image>();
		if (pUVar12 == null) goto label_05cc38b9;
		UVar16.a = 1.0;
		UVar16.b = (float)local_a8._0_4_;
		UVar16.r = (float)local_98._0_4_;
		UVar16.g = (float)local_98._4_4_;
		pUVar12.set_color(UVar16);
		__this_04 = __this_03.GetComponent<Button>();
		if (__this_04 == null) goto label_05cc38b9;
		value_00.m_NormalColor.b = 1.0;
		value_00.m_NormalColor.a = 0.08;
		value_00.m_NormalColor.r = 1.0;
		value_00.m_NormalColor.g = 1.0;
		value_00.m_HighlightedColor.r = 1.0;
		value_00.m_HighlightedColor.g = 1.0;
		value_00.m_HighlightedColor.b = 1.0;
		value_00.m_HighlightedColor.a = 0.16;
		value_00.m_PressedColor.r = 1.0;
		value_00.m_PressedColor.g = 1.0;
		value_00.m_PressedColor.b = 1.0;
		value_00.m_PressedColor.a = 0.24;
		value_00.m_SelectedColor.r = 1.0;
		value_00.m_SelectedColor.g = 1.0;
		value_00.m_SelectedColor.b = 1.0;
		value_00.m_SelectedColor.a = 0.16;
		value_00.m_DisabledColor.r = 1.0;
		value_00.m_DisabledColor.g = 1.0;
		value_00.m_DisabledColor.b = 1.0;
		value_00.m_DisabledColor.a = 0.05;
		value_00.m_ColorMultiplier = 1.0;
		value_00.m_FadeDuration = 0.1;
		__this_04.colors = value_00;
		pSVar6 = (Type[])new Type[3];
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar6 == null) goto label_05cc38b9;
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		if ((int)pSVar6.Length == 0) goto label_05cc38be;
		pSVar6[0] = pSVar7;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
		if (pSVar7 != null) {
			pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar8 == null) goto label_05cc38c3;
		}
		if ((pSVar6.Length & 0xfffffffe) != 0) {
			pSVar6[1] = pSVar7;
			pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar7 != null) {
				pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class);
				if (pIVar8 == null) {
	label_05cc38c3: ;
					pIVar8 = new ArrayTypeMismatchException();
					throw pIVar8;
				}
			}
			if (2 < (uint)pSVar6.Length) {
				pSVar6[2] = pSVar7;
				__this_05 = new GameObject("Text", pSVar6);
				if (__this_05 != null) {
					pUVar10 = __this_05.transform;
					pUVar9 = __this_03.transform;
					if (pUVar10 != null) {
						pUVar10.SetParent(pUVar9, false);
						__this_06 = __this_05.GetComponent<RectTransform>();
						if (__this_06 != null) {
							__this_06.anchorMin = (Vector2)(Vector2.zeroVector);
							__this_06.anchorMax = (Vector2)(Vector2.oneVector);
							__this_06.offsetMin = (Vector2)0x41600000;
							__this_06.offsetMax = (Vector2)0xc1600000;
							pTVar13 = __this_05.GetComponent<TextMeshProUGUI>();
							targetAddress = &__this_02.tmp;
							__this_02.tmp = pTVar13;
							pTVar13 = __this_02.tmp;
							if (pTVar13 != null) {
								pTVar13.richText = true;
								if (*targetAddress != null) {
									(*targetAddress).fontSize = (float)local_c0.FontSize;
									if (*targetAddress != null) {
										(*targetAddress).fontStyle = 1;
										if (*targetAddress != null) {
											(*targetAddress).alignment = 0x1001 ;
											pTVar13 = *targetAddress;
											if (pTVar13 != null) {
												UVar17.b = (float)local_a8._0_4_;
												UVar17.a = (float)local_a8._4_4_;
												UVar17.r = (float)local_98._0_4_;
												UVar17.g = (float)local_98._4_4_;
												pTVar13.set_color(UVar17);
												value_01 = GisketchTypography.Resolve("text", 400, null);
												bVar5 = ((Object)value_01 != null);
												if (bVar5) {
													if (*targetAddress == null) goto label_05cc38b9;
													(*targetAddress).font = value_01;
												}
												value_02 = Resources.Load<TMP_SpriteAsset>("UI/Icons/Profile/ProfileIconsAtlas_256");
												bVar5 = ((Object)value_02 != null);
												if (bVar5) {
													if (*targetAddress == null) goto label_05cc38b9;
													(*targetAddress).spriteAsset = value_02;
												}
												pTVar13 = *targetAddress;
												bVar5 = String.IsNullOrEmpty(local_b0.value);
												if (bVar5) {
													pSVar14 = UIManager.GetLocaleCommon("None");
												}
												else {
													source = RoleSpriteHelpers.Definitions;
													__this_07 = new Func<RoleSpriteDefinition, bool>((object)__this_02, (intptr_t) MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__0);
													PVar15 = Enumerable.First<RoleSpriteDefinition>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_07);
													local_c4 = PVar15.SpriteIndex;
													pIVar8 = (object)local_c4;
													pSVar14 = String.Format("<sprite={0}> {1}", pIVar8, (object)local_b8);
												}
												if (pTVar13 != null) {
													pTVar13.set_text(pSVar14);
													__this_01 = (UnityEvent)__this_04.m_OnClick;
													__this_08 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__1);
													if (__this_01 != null) {
														__this_01.AddListener(__this_08);
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
	label_05cc38b9: ;
				throw new NullReferenceException();
			}
		}
	label_05cc38be: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60049A8")]
	[Address(RVA = "0x5BC38F0", Offset = "0x5BC28F0", VA = "0x5BC38F0")]
	private void OnSelect(string value, string displayText)
	{
		// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$OnSelect): clean
		StringSetting __this_00;
		TextMeshProUGUI pTVar1;
		UnityAction pUVar2;
		bool bVar3;

		__this_00 = this._setting;
		if (__this_00 != null) {
			__this_00.Value = (object)value;
		}
		pTVar1 = this._label;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pTVar1 = this._label;
			bVar3 = String.IsNullOrEmpty(value);
			if (bVar3) {
				displayText = UIManager.GetLocaleCommon("None");
			}
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			pTVar1.set_text(displayText);
		}
		pUVar2 = this._onSelect;
		if (pUVar2 != null) {
			(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x60049A9")]
	[Address(RVA = "0x5BC3A30", Offset = "0x5BC2A30", VA = "0x5BC3A30")]
	public RoleSpritePickPopup()
	{
		// Lifted from source/cpp/UI/RoleSpritePickPopup.c (UI.RoleSpritePickPopup$$.ctor): clean
		MethodInfo method_00;

		method_00 = new List<GameObject>();
		this._items = (List<GameObject>)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/RoleSpritePickPopup.c.

	// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__0: clean
	private bool c__DisplayClass21_0__CreateItem_b__0(RoleSpriteDefinition definition)
	{
		bool bVar1;

		bVar1 = (definition.RoleName == this.value);
		return bVar1;
	}

	// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__1: clean
	private void c__DisplayClass21_0__CreateItem_b__1()
	{
		TextMeshProUGUI pTVar1;
		String value;
		RoleSpritePickPopup __this_00;
		String displayText;

		pTVar1 = this.tmp;
		if (pTVar1 != null) {
			value = this.value;
			__this_00 = this.__4__this;
			displayText = pTVar1.get_text();
			if (__this_00 != null) {
				__this_00.OnSelect(value, displayText);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
