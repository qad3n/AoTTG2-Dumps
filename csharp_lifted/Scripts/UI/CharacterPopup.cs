// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000815")]
internal class CharacterPopup : BasePopup
{
	[Token(Token = "0x400283D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x400283E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<string> _allowedCategories;

	[Token(Token = "0x400283F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected AottgInGameView View;

	[Token(Token = "0x4002842")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _dropdownLayer;

	[Token(Token = "0x4002843")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly Dictionary<string, InGameCharacterSettings> _choices;

	[Token(Token = "0x17000D6A")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004D3D")]
		[Address(RVA = "0x5C05400", Offset = "0x5C04400", VA = "0x5C05400", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_EscapeBehavior): clean
			return 3;
		}
	}

	[Token(Token = "0x17000D6B")]
	protected override string Title
	{
		[Token(Token = "0x6004D3F")]
		[Address(RVA = "0x5C05480", Offset = "0x5C04480", VA = "0x5C05480", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000D6C")]
	protected override float Width
	{
		[Token(Token = "0x6004D40")]
		[Address(RVA = "0x5C054A0", Offset = "0x5C044A0", VA = "0x5C054A0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_Width): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000D6D")]
	protected override float Height
	{
		[Token(Token = "0x6004D41")]
		[Address(RVA = "0x5C054B0", Offset = "0x5C044B0", VA = "0x5C054B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_Height): 1 lines keep C-only constructs
			InGameSet pSVar1;
			InGameMiscSettings pSVar2;
			IntSetting pSVar3;

			pSVar1 = SettingsManager.InGameCurrent;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.Misc, pSVar2 == null)) ||(pSVar3 = pSVar2.PVP, pSVar3 == null)) {
				throw new NullReferenceException();
			}
			return *(float)(&g_data_0100b030 + (ulong)(pSVar3._value == 2) * 4);
		}
	}

	[Token(Token = "0x17000D6E")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004D42")]
		[Address(RVA = "0x5C05530", Offset = "0x5C04530", VA = "0x5C05530", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000D6F")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004D43")]
		[Address(RVA = "0x5C05540", Offset = "0x5C04540", VA = "0x5C05540", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000D70")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004D44")]
		[Address(RVA = "0x5C05550", Offset = "0x5C04550", VA = "0x5C05550", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_CategoryButtons): clean
			return true;
		}
	}

	[Token(Token = "0x17000D71")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004D45")]
		[Address(RVA = "0x5C05560", Offset = "0x5C04560", VA = "0x5C05560", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_DefaultCategoryPanel): clean
			return "";
		}
	}

	[Token(Token = "0x17000D72")]
	public AottgCharacterPickerPopup Picker
	{
		[Token(Token = "0x6004D46")]
		[Address(RVA = "0x5C05590", Offset = "0x5C04590", VA = "0x5C05590")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_Picker): clean
			return this._Picker_k__BackingField;
		}
		[Token(Token = "0x6004D47")]
		[Address(RVA = "0x5C055A0", Offset = "0x5C045A0", VA = "0x5C055A0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$set_Picker): clean
			this._Picker_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000D73")]
	public GisketchOverlayManager Dropdowns
	{
		[Token(Token = "0x6004D48")]
		[Address(RVA = "0x5C055C0", Offset = "0x5C045C0", VA = "0x5C055C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$get_Dropdowns): clean
			return this._Dropdowns_k__BackingField;
		}
		[Token(Token = "0x6004D49")]
		[Address(RVA = "0x5C055D0", Offset = "0x5C045D0", VA = "0x5C055D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$set_Dropdowns): clean
			this._Dropdowns_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6004D3E")]
	[Address(RVA = "0x5C05410", Offset = "0x5C04410", VA = "0x5C05410", Slot = "57")]
	public override bool DismissFromEscape()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$DismissFromEscape): clean
		GisketchOverlayManager __this_00;
		bool bVar1;

		__this_00 = this._Dropdowns_k__BackingField;
		if (__this_00 != null) {
			bVar1 = __this_00.CloseTop(true);
			if (bVar1) {
				GisketchUiSounds.Play(1);
				return true;
			}
		}
		bVar1 = this.DismissFromEscape();
		return bVar1;
	}

	[Token(Token = "0x6004D4A")]
	[Address(RVA = "0x5C055F0", Offset = "0x5C045F0", VA = "0x5C055F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$Setup): 8 lines keep C-only constructs
		int piVar1;
		AottgInGameView* targetAddress;
		uint uVar2;
		List<string> pSVar3;
		List<BasePopup> __this_00;
		BasePopup[] pUVar4;
		Il2CppType handle;
		bool bVar6;
		Type pSVar7;
		String pSVar8;
		Transform pUVar9;
		AottgInGameView pGVar10;
		AottgCharacterPickerPopup pGVar11;
		ViewportScaler pUVar12;
		RectTransform pUVar13;
		Type[] components;
		object pIVar14;
		GameObject __this_01;
		GisketchOverlayManager pGVar15;
		float width;
		float height;
		float headerHeight;
		float footerHeight;
		Rect UVar16;

		this.SetAllowedCategories();
		pSVar3 = this._allowedCategories;
		pSVar7 = this.GetType();
		pSVar8 = UIManager.GetLastcategory(pSVar7);
		if (pSVar3 != null) {
			bVar6 = pSVar3.Contains((object)pSVar8);
			if (!bVar6) {
				pSVar7 = this.GetType();
				pSVar3 = this._allowedCategories;
				if (pSVar3 == null) goto label_05d05b8b;
				pSVar8 = pSVar3.get_Item(0);
				UIManager.SetLastCategory(pSVar7, pSVar8);
			}
			this.Parent = parent;
			pUVar9 = this.transform;
			width = this.get_Width();
			height = this.get_Height();
			headerHeight = this.get_TopBarHeight();
			footerHeight = this.get_BottomBarHeight();
			pGVar10 = AottgInGameView.ScaledPopupShell(pUVar9, width, height, headerHeight, footerHeight, ref this.TopBar, ref this.BottomBar, "inGameFooter");
			targetAddress = &this.View;
			this.View = pGVar10;
			this.SetupTopButtons();
			this.SetupBottomButtons();
			pUVar9 = this.transform;
			pGVar11 = ElementFactory.CreateDefaultPopup<AottgCharacterPickerPopup>(pUVar9, false);
			this._Picker_k__BackingField = pGVar11;
			pUVar12 = this.GetComponent<ViewportScaler>();
			pGVar11 = this._Picker_k__BackingField;
			if (pGVar11 != null) {
				pUVar13 = (RectTransform)pGVar11.transform;
				if (pUVar13 != null) {
					if (pUVar13.klass != typeof(RectTransform)) {
						throw new InvalidCastException();
					}
					UVar16 = pUVar13.rect;
					if (pUVar12 != null) {
						pUVar12.ContentSize = UVar16._8_8_;
						pUVar12.ApplyScale();
						__this_00 = this._popups;
						if (__this_00 != null) {
							pGVar11 = this._Picker_k__BackingField;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = __this_00._items;
							if (pUVar4 != null) {
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pUVar4.Length) {
									__this_00._size = uVar2 + 1;
									pUVar4[(int)uVar2] = (BasePopup)pGVar11;
								}
								else {
									__this_00.AddWithResize((object)pGVar11);
								}
								components = (Type[])new Type[1];
								handle = TypeRef_UnityEngine_RectTransform;
								pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
								if (components != null) {
									if (pSVar7 != null) {
										pIVar14 = il2cpp_vm_Object_IsInst((object)pSVar7, (((components.obj).klass)._1).element_class);
										if (pIVar14 == null) {
											pIVar14 = new ArrayTypeMismatchException();
											throw pIVar14;
										}
									}
									if ((int)components.Length == 0) {
										throw new IndexOutOfRangeException();
									}
									components[0] = pSVar7;
									__this_01 = new GameObject("AoTTG Spawn Dropdowns", components);
									if (__this_01 != null) {
										pUVar13 = __this_01.GetComponent<RectTransform>();
										this._dropdownLayer = pUVar13;
										pUVar13 = this._dropdownLayer;
										pUVar9 = this.transform;
										if (pUVar13 != null) {
											pUVar13.SetParent(pUVar9, false);
											pGVar10 = *targetAddress;
											if (pGVar10 != null) {
												pGVar15 = pGVar10.CreateOverlayManager((Transform)this._dropdownLayer);
												this._Dropdowns_k__BackingField = pGVar15;
												this.RegisterCategoryPanels();
												pSVar7 = this.GetType();
												pSVar8 = UIManager.GetLastcategory(pSVar7);
												this.SetCategoryPanel(pSVar8);
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
	label_05d05b8b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D4B")]
	[Address(RVA = "0x5C05BB0", Offset = "0x5C04BB0", VA = "0x5C05BB0", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$Show): clean
		Object x;
		bool bVar1;

		bVar1 = this.IsActive;
		this.Show();
		if (bVar1 == false) {
			x = (Object)this._currentCategoryPanel;
			bVar1 = (x != null);
			if (bVar1) {
				this.RebuildCategoryPanel();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004D4C")]
	[Address(RVA = "0x5C05C30", Offset = "0x5C04C30", VA = "0x5C05C30", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SetCategoryPanel): clean
		RectTransform __this_00;

		this.RememberChoices();
		this.SetCategoryPanel(name);
		__this_00 = this._dropdownLayer;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetAsLastSibling();
		return;
	}

	[Token(Token = "0x6004D4D")]
	[Address(RVA = "0x5C05DA0", Offset = "0x5C04DA0", VA = "0x5C05DA0")]
	public void SelectCategory(string name)
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SelectCategory): clean
		StringSetting pSVar1;
		bool bVar2;

		pSVar1 = this._currentCategoryPanelName;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = (name != pSVar1._value);
		if (bVar2) {
			this.SetCategoryPanel(name);
			return;
		}
		return;
	}

	[Token(Token = "0x6004D4E")]
	[Address(RVA = "0x5C05E10", Offset = "0x5C04E10", VA = "0x5C05E10")]
	public bool RestoreChoices(string characterType)
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$RestoreChoices): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		InGameCharacterSettings __this_01;
		bool bVar1;
		InGameCharacterSettings local_18;

		local_18 = null;
		__this_00 = (Dictionary<object, object>)this._choices;
		if (__this_00 == null) {
	label_05d05ea0: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)characterType, (object*)&local_18);
		if (bVar1) {
			__this_01 = SettingsManager.InGameCharacterSettings;
			if (__this_01 == null) goto label_05d05ea0;
			__this_01.CopyHumanChoices(local_18);
		}
		return bVar1;
	}

	[Token(Token = "0x6004D4F")]
	[Address(RVA = "0x5C05C70", Offset = "0x5C04C70", VA = "0x5C05C70")]
	private void RememberChoices()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$RememberChoices): 1 lines keep C-only constructs
		InGameCharacterSettings pSVar1;
		StringSetting pSVar2;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		InGameCharacterSettings __this_00;
		InGameCharacterSettings local_20;

		local_20 = null;
		pSVar1 = SettingsManager.InGameCharacterSettings;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.CharacterType, pSVar2 != null)) &&(pSVar3 = (Dictionary<object, object>)this._choices, pSVar3 != null)) {
			bVar4 = pSVar3.TryGetValue((object)pSVar2._value, (object*)&local_20);
			if (!bVar4) {
				__this_00 = new InGameCharacterSettings();
				pSVar2 = pSVar1.CharacterType;
				local_20 = __this_00;
				if ((pSVar2 == null) ||(pSVar3 = (Dictionary<object, object>)this._choices, pSVar3 == null)) goto label_05d05d9b;
				pSVar3.Add((object)pSVar2._value, (object)__this_00);
			}
			if (local_20 != null) {
				local_20.Copy((BaseSetting)pSVar1);
				return;
			}
		}
	label_05d05d9b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D50")]
	[Address(RVA = "0x5C05EB0", Offset = "0x5C04EB0", VA = "0x5C05EB0", Slot = "26")]
	protected override void HideAllPopups()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$HideAllPopups): clean
		GisketchOverlayManager __this_00;

		__this_00 = this._Dropdowns_k__BackingField;
		if (__this_00 != null) {
			__this_00.Clear();
		}
		this.HideAllPopups();
		return;
	}

	[Token(Token = "0x6004D51")]
	[Address(RVA = "0x5C05EE0", Offset = "0x5C04EE0", VA = "0x5C05EE0", Slot = "59")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$OnDisable): clean
		GisketchOverlayManager __this_00;

		__this_00 = this._Dropdowns_k__BackingField;
		if (__this_00 != null) {
			__this_00.Clear();
		}
		this.OnDisable();
		return;
	}

	[Token(Token = "0x6004D52")]
	[Address(RVA = "0x5C05F10", Offset = "0x5C04F10", VA = "0x5C05F10")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$LateUpdate): 19 lines keep C-only constructs
		RectTransform __this_00;
		Canvas pUVar1;
		RectTransform __this_01;
		Transform pUVar2;
		float extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		byte[] auVar3 = new byte[16];
		byte[] auVar4 = new byte[16];
		Rect UVar5;
		Rect UVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		Vector3 UVar10;
		float fStack_64;
		float fStack_54;
		float local_48;
		float local_38;
		float local_28;

		pUVar1 = this.GetComponentInParent<Canvas>();
		if (pUVar1 != null) {
			pUVar1 = pUVar1.rootCanvas;
			if (pUVar1 != null) {
				__this_01 = (RectTransform)pUVar1.transform;
				if (__this_01 != null) {
					if (__this_01.klass != typeof(RectTransform)) {
						throw new InvalidCastException();
					}
					__this_00 = this._dropdownLayer;
					UVar5 = __this_01.rect;
					UVar7 = __this_01.lossyScale;
					pUVar2 = this.transform;
					if (pUVar2 != null) {
						UVar8 = pUVar2.lossyScale;
						UVar6 = __this_01.rect;
						UVar9 = __this_01.lossyScale;
						pUVar2 = this.transform;
						if (pUVar2 != null) {
							UVar10 = pUVar2.lossyScale;
							if (__this_00 != null) {
								local_28 = UVar5.m_Width;
								fStack_64 = UVar6.m_Height;
								local_38 = UVar7.x;
								fStack_54 = UVar9.y;
								auVar3._0_4_ = local_38 * local_28;
								auVar3._4_4_ = fStack_54 * fStack_64;
								auVar3._8_4_ = extraout_XMM0_Dc * in_XMM1_Dc;
								auVar3._12_4_ = extraout_XMM0_Dd * in_XMM1_Dd;
								local_48 = UVar8.x;
								auVar4._4_4_ = UVar10.y;
								auVar4._0_4_ = local_48;
								auVar4._8_4_ = extraout_XMM0_Dc_00;
								auVar4._12_4_ = extraout_XMM0_Dd_00;
								auVar4 = divps(auVar3, auVar4);
								__this_00.sizeDelta = (Vector2)auVar4._0_8_;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D53")]
	[Address(RVA = "0x5C060A0", Offset = "0x5C050A0", VA = "0x5C060A0", Slot = "62")]
	protected virtual void SetAllowedCategories()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SetAllowedCategories): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		BoolSetting pSVar5;
		List<string> pSVar6;
		String[] pSVar7;
		String pSVar9;
		bool bVar10;

		pSVar3 = SettingsManager.InGameCurrent;
		if (pSVar3 == null) goto label_05d06358;
		pSVar4 = pSVar3.Misc;
		if ((typeof(HumanLoadout)._2).cctor_finished_or_no_cctor == 0) {
			bVar10 = HumanLoadout.AnyAllowed();
			if (bVar10) goto label_05d06169;
		}
		else {
			bVar10 = HumanLoadout.AnyAllowed();
			if (bVar10) {
	label_05d06169: ;
				pSVar9 = "Human";
				pSVar6 = this._allowedCategories;
				if (pSVar6 == null) goto label_05d06358;
				piVar1 = &pSVar6._version;
				*piVar1 = *piVar1 + 1;
				pSVar7 = pSVar6._items;
				if (pSVar7 == null) goto label_05d06358;
				uVar2 = pSVar6._size;
				if (uVar2 < (uint)pSVar7.Length) {
					pSVar6._size = uVar2 + 1;
					pSVar7[(int)uVar2] = pSVar9;
				}
				else {
					pSVar6.AddWithResize((object)pSVar9);
				}
			}
		}
		pSVar9 = "Titan";
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.AllowPlayerTitans, pSVar5 == null)) goto label_05d06358;
		if (pSVar5._value != false) {
			pSVar6 = this._allowedCategories;
			if (pSVar6 == null) goto label_05d06358;
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar7 = pSVar6._items;
			if (pSVar7 == null) goto label_05d06358;
			uVar2 = pSVar6._size;
			if (uVar2 < (uint)pSVar7.Length) {
				pSVar6._size = uVar2 + 1;
				pSVar7[(int)uVar2] = pSVar9;
			}
			else {
				pSVar6.AddWithResize((object)pSVar9);
			}
		}
		pSVar9 = "Shifter";
		pSVar5 = pSVar4.AllowShifters;
		if (pSVar5 == null) goto label_05d06358;
		if (pSVar5._value != false) {
			pSVar6 = this._allowedCategories;
			if (pSVar6 == null) goto label_05d06358;
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar7 = pSVar6._items;
			if (pSVar7 == null) goto label_05d06358;
			uVar2 = pSVar6._size;
			if (uVar2 < (uint)pSVar7.Length) {
				pSVar6._size = uVar2 + 1;
				pSVar7[(int)uVar2] = pSVar9;
			}
			else {
				pSVar6.AddWithResize((object)pSVar9);
			}
		}
		pSVar9 = "Human";
		pSVar6 = this._allowedCategories;
		if (pSVar6 != null) {
			if (pSVar6._size != 0) {
				return;
			}
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar7 = pSVar6._items;
			if (pSVar7 != null) {
				if ((int)pSVar7.Length == 0) {
					pSVar6.AddWithResize((object)pSVar9);
					return;
				}
				pSVar6._size = 1;
				pSVar7[0] = pSVar9;
				return;
			}
		}
	label_05d06358: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D54")]
	[Address(RVA = "0x5C06360", Offset = "0x5C05360", VA = "0x5C06360", Slot = "44")]
	protected override void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SetupTopButtons): 3 lines keep C-only constructs
		List<string> __this_00;
		Transform parent;
		Dictionary<object, object> __this_01;
		AottgInGameView __this_02;
		object item;
		bool bVar1;
		String text;
		Button value;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		System_Collections_Generic_List_Enumerator_T__o pSStack_38;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		__this_00 = this._allowedCategories;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		pSStack_38 = &SStack_58;
		while(true) {
			bVar1 = SStack_58.MoveNext();
			item = SStack_58._current;
			if (!bVar1) {
				SStack_58.Dispose();
				return;
			}
			parent = this.TopBar;
			__this_01 = (Dictionary<object, object>)this._topButtons;
			__this_02 = this.View;
			text = UIManager.GetLocaleCommon((String)item);
			if (__this_02 == null) break;
			value = __this_02.Button(parent, text, "ingame.character.tab", (String)item, 220.0, 44.0, 3);
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_01.Add(item, (object)value);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D55")]
	[Address(RVA = "0x5C06580", Offset = "0x5C05580", VA = "0x5C06580", Slot = "43")]
	protected override void SetTopButton(string name)
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SetTopButton): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		AottgInGameView __this_01;
		object button;
		bool bVar1;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;

		SStack_58._current.key = null;
		SStack_58._current.value = null;
		SStack_58._dictionary = null;
		SStack_58._version = 0;
		SStack_58._index = 0;
		SStack_58._getEnumeratorRetType = 0;
		SStack_58._36_4_ = 0;
		__this_00 = (Dictionary<object, object>)this._topButtons;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		while(true) {
			bVar1 = SStack_58.MoveNext();
			button = SStack_58._current.value;
			if (!bVar1) {
				SStack_58.Dispose();
				return;
			}
			__this_01 = this.View;
			bVar1 = ((String)SStack_58._current.key == name);
			if (__this_01 == null) break;
			__this_01.SetButtonSelected((Button)button, bVar1);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D56")]
	[Address(RVA = "0x5C06710", Offset = "0x5C05710", VA = "0x5C06710", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$RegisterCategoryPanels): clean
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		Type pSVar2;

		handle = TypeRef_UI_CharacterHumanPanel;
		pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 != null) {
			pSVar1.Add((Il2CppObject *)"Human", (object)pSVar2);
			pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_CharacterTitanPanel);
			if (pSVar1 != null) {
				pSVar1.Add((Il2CppObject *)"Titan", (object)pSVar2);
				pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes ;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_CharacterShifterPanel);
				if (pSVar1 != null) {
					pSVar1.Add((Il2CppObject *)"Shifter", (object)pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D57")]
	[Address(RVA = "0x5C06850", Offset = "0x5C05850", VA = "0x5C06850", Slot = "63")]
	protected virtual void SetupBottomButtons()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SetupBottomButtons): clean
		AottgInGameView pGVar1;
		Transform pUVar2;
		String pSVar3;

		pGVar1 = this.View;
		pUVar2 = this.BottomBar;
		pSVar3 = this.LocaleCategory;
		pSVar3 = UIManager.GetLocale(pSVar3, "Bottom", "SpectateButton", "", "");
		if (pGVar1 != null) {
			pGVar1.Button(pUVar2, pSVar3, "ingame.character.confirm", "Spectate", 220.0, 44.0, 3);
			pUVar2 = this.BottomBar;
			pGVar1 = this.View;
			pSVar3 = UIManager.GetLocaleCommon("Join");
			if (pGVar1 != null) {
				pGVar1.Button(pUVar2, pSVar3, "ingame.character.confirm", "Join", 220.0, 44.0, 0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D58")]
	[Address(RVA = "0x5C069D0", Offset = "0x5C059D0", VA = "0x5C069D0", Slot = "64")]
	public virtual void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$OnBottomBarButtonClick): 3 lines keep C-only constructs
		float pfVar1;
		float fVar2;
		byte bVar3;
		uint uVar4;
		InGameManager __this_00;
		InGameCharacterSettings pSVar5;
		IntSetting pSVar6;
		CustomLogicEvaluator pCVar7;
		InGameSet pSVar8;
		InGameMiscSettings pSVar9;
		FloatSetting pSVar10;
		bool bVar11;
		CharacterPopup __this_01;

		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar3 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar3) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
		}
		bVar11 = (name == "Spectate");
		if (bVar11) {
			pSVar5 = SettingsManager.InGameCharacterSettings;
			if ((pSVar5 == null) ||(pSVar6 = pSVar5.ChooseStatus, pSVar6 == null)) goto label_05d06c8f;
			pSVar6.Value = 1;
			InGameManager.UpdatePlayerName();
			InGameManager.UpdateRoundPlayerProperties();
			goto label_05d06c55;
		}
		bVar11 = (name == "Join");
		if (!bVar11) {
			return;
		}
		pSVar5 = SettingsManager.InGameCharacterSettings;
		if ((pSVar5 == null) ||(pSVar6 = pSVar5.ChooseStatus, pSVar6 == null)) goto label_05d06c8f;
		pSVar6.Value = 2;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar11 = PhotonNetwork.IsMasterClient;
			if (!bVar11) goto label_05d06bb9;
	label_05d06c21: ;
			if (__this_00 == null) {
	label_05d06c8f: ;
				throw new NullReferenceException();
			}
			if (__this_00.HasSpawned != false) goto label_05d06c30;
			__this_00.SpawnPlayer(false);
			uVar4 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar11 = PhotonNetwork.IsMasterClient;
			if (bVar11) goto label_05d06c21;
	label_05d06bb9: ;
			pCVar7 = CustomLogicManager.Evaluator;
			if ((((pCVar7 == null) ||(pSVar8 = SettingsManager.InGameCurrent, pSVar8 == null)) ||(pSVar9 = pSVar8.Misc, pSVar9 == null)) ||(pSVar10 = pSVar9.AllowSpawnTime, pSVar10 == null)) goto label_05d06c8f;
			fVar2 = pSVar10._value;
			pfVar1 = &pCVar7.CurrentTime;
			if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) goto label_05d06c21;
	label_05d06c30: ;
			uVar4 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		InGameManager.UpdateRoundPlayerProperties();
		__this_01 = null;
		InGameManager.OnCharacterChosen();
		__this_01.SaveLastCharacter();
	label_05d06c55: ;
		this.Hide();
		return;
	}

	[Token(Token = "0x6004D59")]
	[Address(RVA = "0x5C06CA0", Offset = "0x5C05CA0", VA = "0x5C06CA0")]
	protected void SaveLastCharacter()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$SaveLastCharacter): clean
		InGameSettings pSVar1;
		InGameCharacterSettings source;
		StringSetting pSVar2;
		InGameCharacterSettings __this_00;
		String pSVar3;
		IntSetting pSVar4;
		IntSetting __this_01;
		StringSetting __this_02;
		bool bVar5;

		pSVar1 = SettingsManager.InGameSettings;
		if (((pSVar1 == null) ||(source = SettingsManager.InGameCharacterSettings, source == null)) ||(pSVar2 = source.CharacterType, pSVar2 == null)) goto label_05d06edc;
		__this_00 = pSVar1.LastCharacter;
		pSVar3 = pSVar2._value;
		bVar5 = (pSVar3 == PlayerCharacter.Human);
		if (bVar5) {
			if (__this_00 == null) goto label_05d06edc;
			pSVar2 = __this_00.CharacterType;
			if (pSVar2 == null) goto label_05d06edc;
			pSVar2.Value = (object)PlayerCharacter.Human;
			__this_00.CopyHumanChoices(source);
		}
		else {
			pSVar2 = source.CharacterType;
			if (pSVar2 == null) goto label_05d06edc;
			pSVar3 = pSVar2._value;
			bVar5 = (pSVar3 == PlayerCharacter.Titan);
			if (!bVar5) {
				return;
			}
			if (__this_00 == null) goto label_05d06edc;
			pSVar2 = __this_00.CharacterType;
			if (pSVar2 == null) goto label_05d06edc;
			pSVar2.Value = (object)PlayerCharacter.Titan;
			pSVar4 = source.CustomSet;
			if ((pSVar4 == null) ||(__this_01 = __this_00.CustomSet, __this_01 == null)) goto label_05d06edc;
			__this_01.Value = pSVar4._value;
			pSVar2 = source.Loadout;
			if ((pSVar2 == null) ||(__this_02 = __this_00.Loadout, __this_02 == null)) goto label_05d06edc;
			__this_02.Value = (object)pSVar2._value;
		}
		pSVar1 = SettingsManager.InGameSettings;
		if (pSVar1 != null) {
			pSVar1.Save();
			return;
		}
	label_05d06edc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D5A")]
	[Address(RVA = "0x5C06EF0", Offset = "0x5C05EF0", VA = "0x5C06EF0")]
	public CharacterPopup()
	{
		// Lifted from source/cpp/UI/CharacterPopup.c (UI.CharacterPopup$$.ctor): 1 lines keep C-only constructs
		List<string> __this_00;
		Dictionary<string, InGameCharacterSettings> __this_01;

		this.LocaleCategory = "CharacterPopup";
		__this_00 = new List<string>();
		this._allowedCategories = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, InGameCharacterSettings>));
		__this_01 = new Dictionary<object, object>();
		this._choices = __this_01;
		base();
		return;
	}
}
