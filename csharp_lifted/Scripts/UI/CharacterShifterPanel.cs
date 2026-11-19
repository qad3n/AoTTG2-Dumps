// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterShifterPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterShifterPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterShifterPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000816")]
internal class CharacterShifterPanel : CharacterCategoryPanel
{
	[Token(Token = "0x6004D5B")]
	[Address(RVA = "0x5C06FF0", Offset = "0x5C05FF0", VA = "0x5C06FF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterShifterPanel.c (UI.CharacterShifterPanel$$Setup): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		InGameCharacterSettings pSVar5;
		StringSetting pSVar6;
		object @object;
		Transform parent_00;
		IntSetting pSVar7;
		String subCategory;
		bool bVar8;
		CharacterPopup __this_00;
		List<string> __this_01;
		String pSVar9;
		UI_CharacterShifterPanel___c_StaticFields pUVar10;
		Converter<TInput, TOutput> __this_02;
		System_Collections_Generic_List_TOutput__o __this_03;
		String pSVar11;
		String[] pSVar12;
		String[] icons;

		this.Setup(parent);
		subCategory = "General";
		pSVar11 = "CharacterPopup";
		pSVar3 = SettingsManager.InGameCurrent;
		if (pSVar3 != null) {
			pSVar4 = pSVar3.Misc;
			pSVar5 = SettingsManager.InGameCharacterSettings;
			__this_00 = this.Popup;
			if ((typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor == 0) {
			}
			if (((__this_00 != null) &&(__this_00.RestoreChoices(PlayerCharacter.Shifter), pSVar5 != null)) &&(pSVar6 = pSVar5.CharacterType, pSVar6 != null)) {
				pSVar6.Value = (object)PlayerCharacter.Shifter;
				__this_01 = new List<string>();
				pSVar9 = "Eren";
				if (__this_01 != null) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar12 = __this_01._items;
					if (pSVar12 != null) {
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pSVar12.Length) {
							__this_01._size = uVar2 + 1;
							pSVar12[(int)uVar2] = pSVar9;
						}
						else {
							__this_01.AddWithResize((object)pSVar9);
						}
						pSVar9 = "Annie";
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar12 = __this_01._items;
						if (pSVar12 != null) {
							uVar2 = __this_01._size;
							if (uVar2 < (uint)pSVar12.Length) {
								__this_01._size = uVar2 + 1;
								pSVar12[(int)uVar2] = pSVar9;
							}
							else {
								__this_01.AddWithResize((object)pSVar9);
							}
							pSVar6 = pSVar5.Loadout;
							if (pSVar6 != null) {
								bVar8 = __this_01.Contains((object)pSVar6._value);
								if (!bVar8) {
									pSVar6 = pSVar5.Loadout;
									pSVar9 = __this_01.get_Item(0);
									if (pSVar6 == null) goto label_05d074e1;
									pSVar6.Value = (object)pSVar9;
								}
								if ((typeof(CharacterShifterPanel.c)._2).cctor_finished_or_no_cctor == 0) {
									pUVar10 = typeof(CharacterShifterPanel.c).static_fields;
									__this_02 = (Converter<TInput, TOutput>)pUVar10.__9__0_0;
								}
								else {
									pUVar10 = typeof(CharacterShifterPanel.c).static_fields;
									__this_02 = (Converter<TInput, TOutput>)pUVar10.__9__0_0;
								}
								if (__this_02 == null) {
									if (((typeof(CharacterShifterPanel.c))._2).cctor_finished_or_no_cctor == 0 ) {
										pUVar10 = typeof(CharacterShifterPanel.c).static_fields;
									}
									@object = (object)pUVar10.__9;
									__this_02 = new Converter<string, string>(@object, (intptr_t)MethodInfo_UI_CharacterShifterPanel_c_Setup_b__0_0);
									pUVar10 = typeof(CharacterShifterPanel.c).static_fields;
									pUVar10.__9__0_0 = (Converter<string, string>)__this_02;
								}
								__this_03 = __this_01.ConvertAll<string>((System_Converter_T__TOutput__o)__this_02);
								parent_00 = this.DoublePanelLeft;
								pSVar6 = pSVar5.Loadout;
								pSVar11 = UIManager.GetLocale(pSVar11, subCategory, "Character", "", "");
								pSVar12 = (String[])__this_01.ToArray();
								if (__this_03 != null) {
									icons = (String[])__this_03.ToArray();
									this.IconPicker(parent_00, (BaseSetting)pSVar6, pSVar11, pSVar12, icons, null, null, 144.0, null);
									if ((pSVar4 != null) &&(pSVar7 = pSVar4.PVP, pSVar7 != null)) {
										if (pSVar7._value == 2) {
											this.TeamChoice(this.DoublePanelRight, (BaseSetting)pSVar5.Team);
											return;
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
	label_05d074e1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D5C")]
	[Address(RVA = "0x5C074F0", Offset = "0x5C064F0", VA = "0x5C074F0")]
	public CharacterShifterPanel()
	{
		// Lifted from source/cpp/UI/CharacterShifterPanel.c (UI.CharacterShifterPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterShifterPanel.c.

	// UI.CharacterShifterPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CharacterShifterPanel.c();
		CharacterShifterPanel.c.__9 = (CharacterShifterPanel.c)__this;
		return;
	}

	// UI.CharacterShifterPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.CharacterShifterPanel.<>c$$<Setup>b__0_0: clean
	private String c__Setup_b__0_0(String loadout)
	{
		String pSVar1;

		pSVar1 = String.Concat(ResourcePaths.Characters, "/Shifters/Previews/", loadout);
		return pSVar1;
	}
}
