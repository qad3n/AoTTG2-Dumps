// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorHumanCategoryPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorHumanCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007BC")]
internal class CharacterEditorHumanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x40026EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private CharacterEditorHumanMenu _menu;

	[Token(Token = "0x40026EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _emote;

	[Token(Token = "0x17000D02")]
	protected override string Title
	{
		[Token(Token = "0x6004AA1")]
		[Address(RVA = "0x5BD4260", Offset = "0x5BD3260", VA = "0x5BD4260", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c (UI.CharacterEditorHumanCategoryPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Editor");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D03")]
	protected override float Height
	{
		[Token(Token = "0x6004AA2")]
		[Address(RVA = "0x5BD42C0", Offset = "0x5BD32C0", VA = "0x5BD42C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c (UI.CharacterEditorHumanCategoryPanel$$get_Height): clean
			return 340.0;
		}
	}

	[Token(Token = "0x6004AA3")]
	[Address(RVA = "0x5BD42D0", Offset = "0x5BD32D0", VA = "0x5BD42D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c (UI.CharacterEditorHumanCategoryPanel$$Setup): 7 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		Transform pUVar3;
		IntSetting setting;
		object @object;
		StringSetting setting_00;
		CharacterEditorHumanMenu pUVar4;
		String tooltip;
		String subCategory;
		String pSVar5;
		ElementStyle __this_01;
		String title;
		String[] pSVar6;
		UnityAction pUVar7;
		UI_CharacterEditorHumanCategoryPanel___c_StaticFields pUVar8;
		Func<string, string> pSVar9;
		CharacterEditorHumanMenu pUVar10;

		this.Setup(parent) ;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar10 = (CharacterEditorHumanMenu)UIManager.CurrentMenu;
			if (pUVar10 != null) goto label_05cd4490;
	label_05cd450b: ;
			this._menu = null;
		}
		else {
			pUVar10 = (CharacterEditorHumanMenu)UIManager.CurrentMenu;
			if (pUVar10 == null) goto label_05cd450b;
	label_05cd4490: ;
			pUVar4 = typeof(CharacterEditorHumanMenu);
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (((pUVar10.klass._2).typeHierarchyDepth < bVar1) ||((pUVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) {
	label_05cd49fe: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar10;
			if (((pUVar10.klass._2).typeHierarchyDepth < bVar1) ||((pUVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pUVar4)) goto label_05cd49fe;
		}
		pSVar5 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 95.0, 20.0, pSVar5);
		subCategory = "Preview";
		pSVar5 = "CharacterEditor";
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.CustomSets, __this_00 != null)) {
			__this_00.GetSelectedSet();
			pUVar10 = this._menu;
			if (pUVar10 != null) {
				pUVar3 = this.SinglePanel;
				setting = pUVar10.Weapon;
				title = UIManager.GetLocale(pSVar5, subCategory, "Weapon", "", "");
				pSVar6 = (String[])new string[4];
				if (pSVar6 != null) {
					if ((int)pSVar6.Length != 0) {
						pSVar6[0] = "Blade";
						if ((pSVar6.Length & 0xfffffffe) != 0) {
							pSVar6[1] = "AHSS";
							if (2 < (uint)pSVar6.Length) {
								pSVar6[2] = "Thunderspear";
								if ((pSVar6.Length & 0xfffffffc) != 0) {
									pSVar6[3] = "APG";
									pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_0);
									tooltip = "";
									pUVar8 = typeof(CharacterEditorHumanCategoryPanel.c).static_fields;
									pSVar9 = pUVar8.__9__6_1;
									if (pSVar9 == null) {
										if ((typeof(CharacterEditorHumanCategoryPanel.c)._2).cctor_finished_or_no_cctor == 0) {
											pUVar8 = typeof(CharacterEditorHumanCategoryPanel.c).static_fields;
										}
										@object = (object)pUVar8.__9;
										pSVar9 = new Func<string, string>(@object, (intptr_t)MethodInfo_UI_CharacterEditorHumanCategoryPanel_c_Setup_b__6_1);
										pUVar8 = typeof(CharacterEditorHumanCategoryPanel.c).static_fields;
										pUVar8.__9__6_1 = pSVar9;
									}
									ElementFactory.CreateDropdownSetting(pUVar3, __this_01, (BaseSetting)setting, title, pSVar6, tooltip, 160.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar7, null, pSVar9);
									pSVar6 = (String[])new string[7];
									if (pSVar6 == null) goto label_05cd49f9;
									if ((int)pSVar6.Length != 0) {
										pSVar6[0] = "Salute";
										if ((pSVar6.Length & 0xfffffffe) != 0) {
											pSVar6[1] = "Wave";
											if (2 < (uint)pSVar6.Length) {
												pSVar6[2] = "Nod";
												if ((pSVar6.Length & 0xfffffffc) != 0) {
													pSVar6[3] = "Shake";
													if (4 < (uint)pSVar6.Length) {
														pSVar6[4] = "Dance";
														if (5 < (uint)pSVar6.Length) {
															pSVar6[5] = "Eat";
															if (6 < (uint)pSVar6.Length) {
																pSVar6[6] = "Flip";
																pUVar3 = this.SinglePanel;
																setting_00 = this._emote;
																pSVar5 = UIManager.GetLocale(pSVar5, subCategory, "Emote", "", "");
																pSVar9 = new Func<string, string>(null, (intptr_t)MethodInfo_UI_EmoteHandler_ActionLabel);
																pUVar7 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_2);
																ElementFactory.CreateDropdownSetting(pUVar3, __this_01, (BaseSetting)setting_00, pSVar5, pSVar6, "", 160.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar7, null, pSVar9);
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
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05cd49f9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AA4")]
	[Address(RVA = "0x5BD4B90", Offset = "0x5BD3B90", VA = "0x5BD4B90")]
	private void OnWeaponChanged()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c (UI.CharacterEditorHumanCategoryPanel$$OnWeaponChanged): clean
		sbyte cVar1;
		CharacterEditorHumanMenu pUVar2;
		CharacterEditorCostumePanel __this_00;
		bool bVar3;
		IEnumerator routine;

		pUVar2 = this._menu;
		if (pUVar2 != null) {
			pUVar2.ResetCharacter(true);
			if (CharacterEditorSkinsPanel._persistentGlobalSkinPreview == false) {
				if (Il2CppMethodInitialized_07547b85 == false) {
					Il2CppMethodInitialized_07547b85 = true;
					cVar1 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
				}
				else {
					cVar1 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
				}
				if (cVar1 == false) {
					return;
				}
			}
			pUVar2 = this._menu;
			if (pUVar2 != null) {
				__this_00 = pUVar2._costumePanel;
				bVar3 = ((Object)__this_00 != null);
				if (!bVar3) {
					return;
				}
				if (__this_00 != null) {
					routine = __this_00.ApplySkinPreviewAfterCostumeChange();
					this.StartCoroutine(routine);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AA5")]
	[Address(RVA = "0x5BD4CB0", Offset = "0x5BD3CB0", VA = "0x5BD4CB0")]
	private void OnEmote()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c (UI.CharacterEditorHumanCategoryPanel$$OnEmote): clean
		CharacterEditorGameManager pGVar1;
		StringSetting pSVar2;
		DummyCharacter __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._emote, pSVar2 == null)) ||(__this_00 = pGVar1.Character, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.EmoteAction(pSVar2._value);
		return;
	}

	[Token(Token = "0x6004AA6")]
	[Address(RVA = "0x5BD4D10", Offset = "0x5BD3D10", VA = "0x5BD4D10")]
	public CharacterEditorHumanCategoryPanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c (UI.CharacterEditorHumanCategoryPanel$$.ctor): clean
		StringSetting __this_00;

		__this_00 = new StringSetting("Salute", 0x7fffffff);
		this._emote = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorHumanCategoryPanel.c.

	// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_0: clean
	private void Setup_b__6_0()
	{
		this.OnWeaponChanged();
		return;
	}

	// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_2: clean
	private void Setup_b__6_2()
	{
		CharacterEditorGameManager pGVar1;
		StringSetting pSVar2;
		DummyCharacter __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._emote, pSVar2 == null)) ||(__this_00 = pGVar1.Character, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.EmoteAction(pSVar2._value);
		return;
	}

	// UI.CharacterEditorHumanCategoryPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CharacterEditorHumanCategoryPanel.c();
		CharacterEditorHumanCategoryPanel.c.__9 =(CharacterEditorHumanCategoryPanel.c)__this;
		return;
	}

	// UI.CharacterEditorHumanCategoryPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorHumanCategoryPanel.<>c$$<Setup>b__6_1: clean
	private String c__Setup_b__6_1(String weapon)
	{
		String pSVar1;

		pSVar1 = UIManager.GetLocale("CharacterPopup", "Loadout", weapon, "", "");
		return pSVar1;
	}
}
