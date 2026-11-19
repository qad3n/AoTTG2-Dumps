// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorHumanMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorHumanMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007BE")]
internal class CharacterEditorHumanMenu : CharacterEditorMenu
{
	[Token(Token = "0x40026EE")]
	[FieldOffset(Offset = "0xA0")]
	public CharacterEditorCostumePanel _costumePanel;

	[Token(Token = "0x40026EF")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorStatsPanel _statsPanel;

	[Token(Token = "0x40026F0")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorSkinsPanel _skinsPanel;

	[Token(Token = "0x40026F1")]
	[FieldOffset(Offset = "0xB8")]
	private CharacterEditorHumanCategoryPanel _categoryPanel;

	[Token(Token = "0x40026F2")]
	[FieldOffset(Offset = "0xC0")]
	public CharacterEditorEditStatsPopup _editStatsPopup;

	[Token(Token = "0x40026F3")]
	[FieldOffset(Offset = "0xC8")]
	public CharacterEditorEditPerksPopup _editPerksPopup;

	[Token(Token = "0x40026F4")]
	[FieldOffset(Offset = "0xD0")]
	public PresetSkinEditPopup _editPresetSkinPopup;

	[Token(Token = "0x40026F5")]
	[FieldOffset(Offset = "0xD8")]
	public GlobalSkinEditPopup _editGlobalSkinPopup;

	[Token(Token = "0x40026F6")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting Weapon;

	[Token(Token = "0x6004AAC")]
	[Address(RVA = "0x5BD4F20", Offset = "0x5BD3F20", VA = "0x5BD4F20", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$Setup): clean
		this.Setup();
		return;
	}

	[Token(Token = "0x6004AAD")]
	[Address(RVA = "0x5BD5030", Offset = "0x5BD4030", VA = "0x5BD5030", Slot = "5")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$SetupPopups): clean
		Transform pUVar1;
		CharacterEditorEditStatsPopup pUVar2;
		CharacterEditorEditPerksPopup pUVar3;
		PresetSkinEditPopup pUVar4;
		GlobalSkinEditPopup pUVar5;

		this.SetupPopups();
		pUVar1 = this.transform;
		pUVar2 = ElementFactory.CreateDefaultPopup<CharacterEditorEditStatsPopup>(pUVar1, false);
		this._editStatsPopup = pUVar2;
		pUVar1 = this.transform;
		pUVar3 = ElementFactory.CreateDefaultPopup<CharacterEditorEditPerksPopup>(pUVar1, false);
		this._editPerksPopup = pUVar3;
		pUVar1 = this.transform;
		pUVar4 = ElementFactory.CreateDefaultPopup<PresetSkinEditPopup>(pUVar1, false);
		this._editPresetSkinPopup = pUVar4;
		pUVar1 = this.transform;
		pUVar5 = ElementFactory.CreateDefaultPopup<GlobalSkinEditPopup>(pUVar1, false);
		this._editGlobalSkinPopup = pUVar5;
		return;
	}

	[Token(Token = "0x6004AAE")]
	[Address(RVA = "0x5BD5160", Offset = "0x5BD4160", VA = "0x5BD5160", Slot = "8")]
	public override bool IsPopupActive()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$IsPopupActive): clean
		SelectListPopup pUVar1;
		IconPickPopup pUVar2;
		CharacterEditorEditStatsPopup pUVar3;
		CharacterEditorEditPerksPopup pUVar4;
		PresetSkinEditPopup pUVar5;
		GlobalSkinEditPopup pUVar6;

		pUVar1 = this.SelectListPopup;
		if (pUVar1 != null) {
			if (pUVar1.IsActive != false) {
				return true;
			}
			pUVar2 = this.IconPickPopup;
			if (pUVar2 != null) {
				if (pUVar2.IsActive != false) {
					return true;
				}
				pUVar3 = this._editStatsPopup;
				if (pUVar3 != null) {
					if (pUVar3.IsActive != false) {
						return true;
					}
					pUVar4 = this._editPerksPopup;
					if (pUVar4 != null) {
						if (pUVar4.IsActive != false) {
							return true;
						}
						pUVar5 = this._editPresetSkinPopup;
						if (pUVar5 != null) {
							if (pUVar5.IsActive != false) {
								return true;
							}
							pUVar6 = this._editGlobalSkinPopup;
							if (pUVar6 != null) {
								return pUVar6.IsActive != false;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AAF")]
	[Address(RVA = "0x5BD5230", Offset = "0x5BD4230", VA = "0x5BD5230", Slot = "9")]
	public override void RebuildPanels(bool costumePopup)
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$RebuildPanels): 14 lines keep C-only constructs
		CharacterEditorCostumePanel* targetAddress;
		CharacterEditorStatsPanel* targetAddress_00;
		CharacterEditorSkinsPanel* targetAddress_01;
		CharacterEditorHumanCategoryPanel* targetAddress_02;
		bool bVar1;
		Object pUVar2;
		Transform pUVar3;
		CharacterEditorCostumePanel pUVar4;
		CharacterEditorStatsPanel pUVar5;
		CharacterEditorSkinsPanel pUVar6;
		CharacterEditorHumanCategoryPanel pUVar7;
		GameObject pUVar8;
		CharacterEditorEditStatsPopup pUVar9;
		CharacterEditorEditPerksPopup pUVar10;
		PresetSkinEditPopup pUVar11;
		MethodInfo* method_00;

		pUVar4 = this._costumePanel;
		targetAddress = &this._costumePanel;
		bVar1 = ((Object)pUVar4 != null);
		if (bVar1) {
			pUVar4 = *targetAddress;
			if (pUVar4 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar4.gameObject;
			Object.Destroy(pUVar2);
			pUVar5 = this._statsPanel;
			if (pUVar5 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar5.gameObject;
			Object.Destroy(pUVar2);
			pUVar6 = this._skinsPanel;
			if (pUVar6 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar6.gameObject;
			Object.Destroy(pUVar2);
			pUVar7 = this._categoryPanel;
			if (pUVar7 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar7.gameObject;
			Object.Destroy(pUVar2);
			pUVar9 = this._editStatsPopup;
			if (pUVar9 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar9.gameObject;
			Object.Destroy(pUVar2);
			pUVar10 = this._editPerksPopup;
			if (pUVar10 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar10.gameObject;
			Object.Destroy(pUVar2);
			pUVar11 = this._editPresetSkinPopup;
			if (pUVar11 == null) goto label_05cd56b8;
			pUVar2 = (Object)pUVar11.gameObject;
			Object.Destroy(pUVar2);
		}
		pUVar3 = this.transform;
		pUVar4 = ElementFactory.CreateHeadedPanel<CharacterEditorCostumePanel>(pUVar3, true);
		if (pUVar4 != null) {
			pUVar4 = pUVar4.GetComponent<CharacterEditorCostumePanel>();
			this._costumePanel = pUVar4;
			pUVar3 = this.transform;
			pUVar5 = ElementFactory.CreateHeadedPanel<CharacterEditorStatsPanel>(pUVar3, true);
			if (pUVar5 != null) {
				pUVar5 = pUVar5.GetComponent<CharacterEditorStatsPanel>();
				targetAddress_00 = &this._statsPanel;
				this._statsPanel = pUVar5;
				pUVar3 = this.transform;
				pUVar6 = ElementFactory.CreateHeadedPanel<CharacterEditorSkinsPanel>(pUVar3, true);
				if (pUVar6 != null) {
					pUVar6 = pUVar6.GetComponent<CharacterEditorSkinsPanel>();
					targetAddress_01 = &this._skinsPanel;
					this._skinsPanel = pUVar6;
					pUVar3 = this.transform;
					pUVar7 = ElementFactory.CreateHeadedPanel<CharacterEditorHumanCategoryPanel>(pUVar3, true);
					if (pUVar7 != null) {
						method_00 = &MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorHumanCategoryPanel;
						pUVar7 = pUVar7.GetComponent<CharacterEditorHumanCategoryPanel>() ;
						targetAddress_02 = &this._categoryPanel;
						this._categoryPanel = pUVar7;
						pUVar4 = this._costumePanel;
						if (pUVar4 != null) {
							pUVar8 = pUVar4.gameObject;
							ElementFactory.SetAnchor(pUVar8, 0, 0, (Vector2)0xc1a0000041a00000);
							pUVar5 = *targetAddress_00;
							if (pUVar5 != null) {
								pUVar8 = pUVar5.gameObject;
								ElementFactory.SetAnchor(pUVar8, 2, 2, (Vector2)0xc3be0000c1a00000);
								pUVar6 = *targetAddress_01;
								if (pUVar6 != null) {
									pUVar8 = pUVar6.gameObject;
									ElementFactory.SetAnchor(pUVar8, 2, 2, (Vector2)0xc43e0000c1a00000);
									pUVar7 = *targetAddress_02;
									if (pUVar7 != null) {
										pUVar8 = pUVar7.gameObject;
										ElementFactory.SetAnchor(pUVar8, 2, 2, (Vector2)0xc1a00000c1a00000);
										pUVar3 = this.transform;
										pUVar9 = ElementFactory.CreateDefaultPopup<CharacterEditorEditStatsPopup>(pUVar3, false);
										this._editStatsPopup = pUVar9;
										pUVar3 = this.transform;
										pUVar10 = ElementFactory.CreateDefaultPopup<CharacterEditorEditPerksPopup>(pUVar3, false);
										this._editPerksPopup = pUVar10;
										pUVar3 = this.transform;
										pUVar11 = ElementFactory.CreateDefaultPopup<PresetSkinEditPopup>(pUVar3, false);
										this._editPresetSkinPopup = pUVar11;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05cd56b8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AB0")]
	[Address(RVA = "0x5BD5820", Offset = "0x5BD4820", VA = "0x5BD5820", Slot = "10")]
	public override void ResetCharacter(bool fullReset = false)
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$ResetCharacter): 3 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		CharacterEditorGameManager pGVar3;
		DummyCharacter __this_01;
		IntSetting pSVar4;
		HumanCustomSet customSet;

		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			customSet = (HumanCustomSet)__this_00.GetSelectedSet();
			if (customSet != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((customSet.klass._2).typeHierarchyDepth < bVar1) ||((customSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
					throw new InvalidCastException();
				}
			}
			pGVar3 = this._gameManager;
			if ((pGVar3 != null) &&(__this_01 = pGVar3.Character, __this_01 != null)) {
				bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(DummyHuman))) {
					throw new InvalidCastException();
				}
				pSVar4 = this.Weapon;
				if ((pSVar4 != null) && ((*(ulong)((sbyte)__this_01 + 0x38)) != null) ) {
					((*(ulong)((sbyte)__this_01 + 0x38))).Load(customSet, pSVar4._value, false);
					if (fullReset) {
						__this_01.Idle();
						return;
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AB1")]
	[Address(RVA = "0x5BD5980", Offset = "0x5BD4980", VA = "0x5BD5980")]
	public void ResetCharacterWithSkins(bool fullReset)
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$ResetCharacterWithSkins): 3 lines keep C-only constructs
		byte bVar1;
		CharacterEditorGameManager __this_00;
		DummyHuman __this_01;
		bool bVar2;

		__this_00 = (CharacterEditorGameManager)SceneLoader.CurrentGameManager;
		if (fullReset) {
			if (__this_00 != null) {
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorGameManager))) {
					__this_00.ReinstantiateCharacter(true);
					return;
				}
	label_05cd5aba: ;
				throw new InvalidCastException();
			}
		}
		else if (__this_00 != null) {
			bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) goto label_05cd5aba;
			__this_01 = (DummyHuman)__this_00.Character;
			if (__this_01 != null) {
				bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(DummyHuman))) {
					throw new InvalidCastException();
				}
			}
			bVar2 = ((Object)__this_01 != null);
			if (!bVar2) {
				return;
			}
			if (__this_01 != null) {
				__this_01.LoadSkin();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AB2")]
	[Address(RVA = "0x5BD5AD0", Offset = "0x5BD4AD0", VA = "0x5BD5AD0", Slot = "11")]
	public override float GetMinMouseX()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$GetMinMouseX): clean
		CharacterEditorCostumePanel __this_00;
		float fVar1;

		__this_00 = this._costumePanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = __this_00.GetPhysicalWidth();
		return fVar1 + 20.0;
	}

	[Token(Token = "0x6004AB3")]
	[Address(RVA = "0x5BD5B00", Offset = "0x5BD4B00", VA = "0x5BD5B00", Slot = "12")]
	public override float GetMaxMouseX()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$GetMaxMouseX): clean
		CharacterEditorHumanCategoryPanel __this_00;
		int iVar1;
		float fVar2;

		iVar1 = Screen.width;
		__this_00 = this._categoryPanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.GetPhysicalWidth();
		return ((float)iVar1 - fVar2) + -20.0;
	}

	[Token(Token = "0x6004AB4")]
	[Address(RVA = "0x5BD5B50", Offset = "0x5BD4B50", VA = "0x5BD5B50")]
	public CharacterEditorHumanMenu()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanMenu.c (UI.CharacterEditorHumanMenu$$.ctor): clean
		IntSetting __this_00;

		__this_00 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.Weapon = __this_00;
		base();
		return;
	}
}
