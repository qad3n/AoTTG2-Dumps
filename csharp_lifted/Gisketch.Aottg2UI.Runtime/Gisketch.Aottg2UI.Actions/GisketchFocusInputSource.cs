// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputSource
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputSource.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E3")]
internal sealed class GisketchFocusInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x6000711")]
	[Address(RVA = "0x52A1650", Offset = "0x52A0650", VA = "0x52A1650", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputSource.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputSource$$OnPointerDown): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x52A1700", Offset = "0x52A0700", VA = "0x52A1700", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputSource.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputSource$$OnSubmit): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x52A17B0", Offset = "0x52A07B0", VA = "0x52A17B0")]
	public GisketchFocusInputSource()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputSource.c (Gisketch.Aottg2UI.Actions.GisketchFocusInputSource$$.ctor): clean
		base();
		return;
	}
}
