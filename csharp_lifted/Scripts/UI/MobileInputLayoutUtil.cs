// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayoutUtil
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayoutUtil.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000757")]
internal static class MobileInputLayoutUtil
{
	[Token(Token = "0x6004710")]
	[Address(RVA = "0x5B6D4C0", Offset = "0x5B6C4C0", VA = "0x5B6D4C0")]
	public static bool ShowButtonIcons()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutUtil.c (UI.MobileInputLayoutUtil$$ShowButtonIcons): clean
		GeneralSettings pSVar1;
		BoolSetting pSVar2;

		pSVar1 = SettingsManager.GeneralSettings;
		if (pSVar1 == null) {
			return true;
		}
		pSVar2 = pSVar1.MobileButtonIcons;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value != false;
	}

	[Token(Token = "0x6004711")]
	[Address(RVA = "0x5B787A0", Offset = "0x5B777A0", VA = "0x5B787A0")]
	public static string GetRoleLabel(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutUtil.c (UI.MobileInputLayoutUtil$$GetRoleLabel): 3 lines keep C-only constructs
		String pSVar1;
		String* ppSVar2;
		String category;
		Enum local_20;

		switch(role) {
		case 0:
			ppSVar2 = &"GeneralButton";
			pSVar1 = "Top";
			category = "SettingsPopup";
			break;
		default: ;
			local_20.klass = (Enum)typeof(MobileInputLayoutRole);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			pSVar1 = local_20.ToString();
			pSVar1 = UIManager.GetLocaleCommon(pSVar1);
			return pSVar1;
		case 3:
			ppSVar2 = &"Annie";
			pSVar1 = "Skins.Shifter";
			category = "SettingsPopup";
			break;
		case 4:
			ppSVar2 = &"Eren";
			pSVar1 = "Skins.Shifter";
			category = "SettingsPopup";
			break;
		case 5:
			ppSVar2 = &"MapEditorButton";
			pSVar1 = "ToolsPopup";
			category = "MainMenu";
		}
		pSVar1 = UIManager.GetLocale(category, pSVar1, *ppSVar2, "", "");
		return pSVar1;
	}

	[Token(Token = "0x6004712")]
	[Address(RVA = "0x5B65580", Offset = "0x5B64580", VA = "0x5B65580")]
	public static MobileInputLayoutRole GetCharacterLayoutRole(BaseCharacter character)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutUtil.c (UI.MobileInputLayoutUtil$$GetCharacterLayoutRole): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		int iVar4;

		if (character != null) {
			pCVar3 = character.klass;
			bVar1 = (pCVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BasicTitan))) {
				return 2;
			}
			bVar2 = (typeof(ErenShifter)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(ErenShifter))) {
				return 4;
			}
			bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if (bVar2 <= bVar1) {
				iVar4 = (uint)((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BaseShifter)) * 2 + 1;
			}
		}
		return iVar4;
	}
}
