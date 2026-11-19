// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchButtonInputSource
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D7")]
internal sealed class GisketchButtonInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x170000A8")]
	public GisketchActionInputSource Source
	{
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x529E6F0", Offset = "0x529D6F0", VA = "0x529E6F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c (Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$get_Source): clean
			return this._Source_k__BackingField;
		}
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x529E700", Offset = "0x529D700", VA = "0x529E700")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c (Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$set_Source): clean
			this._Source_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x529E710", Offset = "0x529D710", VA = "0x529E710", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c (Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnPointerDown): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		this._Source_k__BackingField = 1;
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

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x529E7C0", Offset = "0x529D7C0", VA = "0x529E7C0", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c (Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnSubmit): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		this._Source_k__BackingField = 2;
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

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x529E870", Offset = "0x529D870", VA = "0x529E870")]
	public GisketchButtonInputSource()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c (Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$.ctor): clean
		base();
		return;
	}
}
