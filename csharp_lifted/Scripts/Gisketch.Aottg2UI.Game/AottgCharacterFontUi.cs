// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterFontUi
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterFontUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E9")]
internal static class AottgCharacterFontUi
{
	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x57D9640", Offset = "0x57D8640", VA = "0x57D9640")]
	public static GisketchChoiceOptionDefinition[] Options(bool hasAccess)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterFontUi.c (Gisketch.Aottg2UI.Game.AottgCharacterFontUi$$Options): clean
		uint uVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar4;
		GisketchChoiceOptionDefinition[] pGVar5;
		ulong uVar6;
		GisketchChoiceOptionDefinition __this;
		String pSVar7;
		long lVar8;
		ulong uVar9;

		if (Il2CppMethodInitialized_075454c5 == false) {
			Il2CppMethodInitialized_075454c5 = true;
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = NameFontCatalog.Ids;
		}
		else {
			pSVar3 = *(String[]*)((long)(typeof(NameFontCatalog)).static_fields + 8);
		}
		if (pSVar3 == null) {
	label_058d9874: ;
			throw new NullReferenceException();
		}
		pGVar5 = (GisketchChoiceOptionDefinition[])new GisketchChoiceOptionDefinition[(uint32_t)pSVar3.Length];
		if (0 < (int)pSVar3.Length) {
			uVar6 = pSVar3.Length & 0xffffffff;
			lVar8 = 0;
			uVar9 = 0;
			do {
				if (uVar6 <= uVar9) {
	label_058d986f: ;
					throw new IndexOutOfRangeException();
				}
				bVar4 = (pSVar3[uVar9] == "Normal");
				__this = new GisketchChoiceOptionDefinition();
				if ((uint)pSVar3.Length <= uVar9) goto label_058d986f;
				if (__this == null) goto label_058d9874;
				__this.value = pSVar3[uVar9];
				if ((uint)pSVar3.Length <= uVar9) goto label_058d986f;
				pSVar7 = pSVar3[uVar9];
				pSVar7 = NameFontCatalog.Label(pSVar7);
				__this.text = pSVar7;
				__this.enabled = bVar4 || hasAccess;
				pSVar7 = null;
				if (!bVar4 && !hasAccess) {
					pSVar7 = "MainMenu.Profile.SupporterOnlyFeature";
				}
				__this.tooltipKey = pSVar7;
				if (pGVar5 == null) goto label_058d9874;
				if ((uint)pGVar5.Length <= uVar9) goto label_058d986f;
				pGVar5[uVar9] = __this;
				uVar9 = uVar9 + 1;
				uVar2 = (uint)pSVar3.Length;
				uVar6 = (ulong)uVar2;
				lVar8 = lVar8 + 8;
			} while ((long)uVar9 < (long)(int)uVar2);
		}
		return pGVar5;
	}
}
