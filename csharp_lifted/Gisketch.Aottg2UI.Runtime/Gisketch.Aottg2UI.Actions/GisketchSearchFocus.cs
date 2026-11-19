// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSearchFocus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchFocus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000F2")]
internal static class GisketchSearchFocus
{
	[Token(Token = "0x6000771")]
	[Address(RVA = "0x52A64D0", Offset = "0x52A54D0", VA = "0x52A64D0")]
	public static void Focus(GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchFocus.c (Gisketch.Aottg2UI.Actions.GisketchSearchFocus$$Focus): clean
		Action pSVar1;
		bool bVar2;
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar3;
		EventSystem pUVar4;

		bVar2 = ((Object)target == null);
		if (bVar2) {
			return;
		}
		pGVar3 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar3._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar3 = typeof(GisketchFocusInputMode).static_fields;
			}
			pGVar3._Mode_k__BackingField = 1;
			pSVar1 = pGVar3.Changed;
			if (pSVar1 != null) {
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			}
		}
		pUVar4 = EventSystem.current;
		bVar2 = ((Object)pUVar4 != null);
		if (bVar2) {
			pUVar4 = EventSystem.current;
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			pUVar4.SetSelectedGameObject(target);
		}
		GisketchScrollFocus.RevealAtCenter(target);
		return;
	}
}
