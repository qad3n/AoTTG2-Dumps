// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007CC")]
internal class CharacterEditorTitanMenu : CharacterEditorMenu
{
	[Token(Token = "0x4002725")]
	[FieldOffset(Offset = "0xA0")]
	private CharacterEditorTitanCostumePanel _costumePanel;

	[Token(Token = "0x4002726")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorTitanCategoryPanel _categoryPanel;

	[Token(Token = "0x4002727")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorTitanSkinsPanel _skinsPanel;

	[Token(Token = "0x4002728")]
	[FieldOffset(Offset = "0xB8")]
	private int _currentBodyType;

	[Token(Token = "0x6004B32")]
	[Address(RVA = "0x5BDE1A0", Offset = "0x5BDD1A0", VA = "0x5BDE1A0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$Setup): 2 lines keep C-only constructs
		byte bVar1;
		TitanCustomSettings pSVar2;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_00;
		int iVar3;
		TitanCustomSet __this_01;

		this.Setup();
		pSVar2 = SettingsManager.TitanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.TitanCustomSets, __this_00 != null)) {
			__this_01 = (TitanCustomSet)__this_00.GetSelectedSet();
			if (__this_01 != null) {
				bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) {
					throw new InvalidCastException();
				}
				iVar3 = __this_01.GetBody();
				this._currentBodyType = iVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B33")]
	[Address(RVA = "0x5BDE260", Offset = "0x5BDD260", VA = "0x5BDE260", Slot = "5")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$SetupPopups): clean
		this.SetupPopups();
		return;
	}

	[Token(Token = "0x6004B34")]
	[Address(RVA = "0x5BDE270", Offset = "0x5BDD270", VA = "0x5BDE270", Slot = "8")]
	public override bool IsPopupActive()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$IsPopupActive): clean
		SelectListPopup pUVar1;
		IconPickPopup pUVar2;

		pUVar1 = this.SelectListPopup;
		if (pUVar1 != null) {
			if (pUVar1.IsActive != false) {
				return true;
			}
			pUVar2 = this.IconPickPopup;
			if (pUVar2 != null) {
				return pUVar2.IsActive != false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B35")]
	[Address(RVA = "0x5BDE2B0", Offset = "0x5BDD2B0", VA = "0x5BDE2B0", Slot = "9")]
	public override void RebuildPanels(bool costumePopup)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$RebuildPanels): 11 lines keep C-only constructs
		CharacterEditorTitanCostumePanel* targetAddress;
		CharacterEditorTitanCategoryPanel* targetAddress_00;
		CharacterEditorTitanSkinsPanel* targetAddress_01;
		bool bVar1;
		Object pUVar2;
		Transform pUVar3;
		CharacterEditorTitanCostumePanel pUVar4;
		CharacterEditorTitanCategoryPanel pUVar5;
		CharacterEditorTitanSkinsPanel pUVar6;
		GameObject pUVar7;
		MethodInfo* method_00;

		pUVar4 = this._costumePanel;
		targetAddress = &this._costumePanel;
		bVar1 = ((Object)pUVar4 != null);
		if (bVar1) {
			pUVar4 = *targetAddress;
			if (pUVar4 == null) goto label_05cde54b;
			pUVar2 = (Object)pUVar4.gameObject;
			Object.Destroy(pUVar2);
			pUVar5 = this._categoryPanel;
			if (pUVar5 == null) goto label_05cde54b;
			pUVar2 = (Object)pUVar5.gameObject;
			Object.Destroy(pUVar2);
			pUVar6 = this._skinsPanel;
			if (pUVar6 == null) goto label_05cde54b;
			pUVar2 = (Object)pUVar6.gameObject;
			Object.Destroy(pUVar2);
		}
		pUVar3 = this.transform;
		pUVar4 = ElementFactory.CreateHeadedPanel<CharacterEditorTitanCostumePanel>(pUVar3, true);
		if (pUVar4 != null) {
			pUVar4 = pUVar4.GetComponent<CharacterEditorTitanCostumePanel>();
			this._costumePanel = pUVar4;
			pUVar3 = this.transform;
			pUVar5 = ElementFactory.CreateHeadedPanel<CharacterEditorTitanCategoryPanel>(pUVar3, true);
			if (pUVar5 != null) {
				pUVar5 = pUVar5.GetComponent<CharacterEditorTitanCategoryPanel>();
				targetAddress_00 = &this._categoryPanel;
				this._categoryPanel = pUVar5;
				pUVar3 = this.transform;
				pUVar6 = ElementFactory.CreateHeadedPanel<CharacterEditorTitanSkinsPanel>(pUVar3, true);
				if (pUVar6 != null) {
					method_00 = &MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanSkinsPanel;
					pUVar6 = pUVar6.GetComponent<CharacterEditorTitanSkinsPanel>();
					targetAddress_01 = &this._skinsPanel;
					this._skinsPanel = pUVar6;
					pUVar4 = this._costumePanel;
					if (pUVar4 != null) {
						pUVar7 = pUVar4.gameObject;
						ElementFactory.SetAnchor(pUVar7, 0, 0, (Vector2)0xc1a0000041a00000);
						pUVar5 = *targetAddress_00;
						if (pUVar5 != null) {
							pUVar7 = pUVar5.gameObject;
							ElementFactory.SetAnchor(pUVar7, 2, 2, (Vector2)0xc1a00000c1a00000);
							pUVar6 = *targetAddress_01;
							if (pUVar6 != null) {
								pUVar7 = pUVar6.gameObject;
								ElementFactory.SetAnchor(pUVar7, 2, 2, (Vector2)0xc3a00000c1a00000);
								return;
							}
						}
					}
				}
			}
		}
	label_05cde54b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B36")]
	[Address(RVA = "0x5BDE550", Offset = "0x5BDD550", VA = "0x5BDE550", Slot = "10")]
	public override void ResetCharacter(bool fullReset = false)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$ResetCharacter): 2 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		TitanCustomSettings pSVar3;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_00;
		CharacterEditorGameManager __this_01;
		DummyTitan pCVar4;
		bool bVar5;
		int iVar6;
		TitanCustomSet __this_02;

		pSVar3 = SettingsManager.TitanCustomSettings;
		if ((pSVar3 != null) &&(__this_00 = pSVar3.TitanCustomSets, __this_00 != null)) {
			__this_02 = (TitanCustomSet)__this_00.GetSelectedSet();
			if (__this_02 != null) {
				bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
				if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) {
					throw new InvalidCastException();
				}
				__this_01 = this._gameManager;
				if (!fullReset) {
					iVar2 = this._currentBodyType;
					iVar6 = __this_02.GetBody();
					if (iVar2 == iVar6) {
						if (__this_01 != null) {
							pCVar4 = __this_01.Titan;
							bVar5 = ((Object)pCVar4 != null);
							if (!bVar5) {
								return;
							}
							pCVar4 = __this_01.Titan;
							if (pCVar4 != null) {
								pCVar4.LoadSet(__this_02, true);
								pCVar4 = __this_01.Titan;
								if (pCVar4 != null) {
									pCVar4.Idle();
									return;
								}
							}
						}
						goto label_05cde6d6;
					}
				}
				iVar6 = __this_02.GetBody();
				this._currentBodyType = iVar6;
				if (__this_01 != null) {
					__this_01.ReinstantiateCharacter(true);
					return;
				}
			}
		}
	label_05cde6d6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B37")]
	[Address(RVA = "0x5BDE6F0", Offset = "0x5BDD6F0", VA = "0x5BDE6F0", Slot = "11")]
	public override float GetMinMouseX()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$GetMinMouseX): clean
		CharacterEditorTitanCostumePanel __this_00;
		float fVar1;

		__this_00 = this._costumePanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = __this_00.GetPhysicalWidth();
		return fVar1 + 20.0;
	}

	[Token(Token = "0x6004B38")]
	[Address(RVA = "0x5BDE720", Offset = "0x5BDD720", VA = "0x5BDE720", Slot = "12")]
	public override float GetMaxMouseX()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$GetMaxMouseX): clean
		CharacterEditorTitanCategoryPanel __this_00;
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

	[Token(Token = "0x6004B39")]
	[Address(RVA = "0x5BDE770", Offset = "0x5BDD770", VA = "0x5BDE770")]
	public CharacterEditorTitanMenu()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanMenu.c (UI.CharacterEditorTitanMenu$$.ctor): clean
		this._currentBodyType = -1;
		base();
		return;
	}
}
