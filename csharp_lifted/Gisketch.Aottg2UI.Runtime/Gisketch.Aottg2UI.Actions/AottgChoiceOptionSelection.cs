// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CA")]
public sealed class AottgChoiceOptionSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _owner;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x5296FF0", Offset = "0x5295FF0", VA = "0x5296FF0")]
	public void Setup(AottgChoiceControl owner, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$Setup): clean
		this._owner = owner;
		this._index = index;
		return;
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x5298340", Offset = "0x5297340", VA = "0x5298340", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerEnter): 1 lines keep C-only constructs
		int index;
		AottgChoiceControl __this_00;
		Vector2 pointerPosition;
		Vector3 UVar1;

		__this_00 = this._owner;
		if (__this_00 == null) {
			return;
		}
		index = this._index;
		if (eventData == null) {
			UVar1 = Input.mousePosition;
			pointerPosition = UVar1._0_8_;
		}
		else {
			pointerPosition = eventData._position_k__BackingField;
		}
		__this_00.SelectFromPointer(index, (Vector2)pointerPosition);
		return;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x5298380", Offset = "0x5297380", VA = "0x5298380", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerMove): 1 lines keep C-only constructs
		int index;
		AottgChoiceControl __this_00;
		Vector2 pointerPosition;
		Vector3 UVar1;

		__this_00 = this._owner;
		if (__this_00 == null) {
			return;
		}
		index = this._index;
		if (eventData == null) {
			UVar1 = Input.mousePosition;
			pointerPosition = UVar1._0_8_;
		}
		else {
			pointerPosition = eventData._position_k__BackingField;
		}
		__this_00.SelectFromPointer(index, (Vector2)pointerPosition);
		return;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x52983C0", Offset = "0x52973C0", VA = "0x52983C0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnSelect): clean
		int index;
		AottgChoiceControl __this_00;
		GameObject option;

		if ((GisketchFocusInputMode._Mode_k__BackingField == 1) && (__this_00 = this._owner, __this_00 != null)) {
			index = this._index;
			option = this.gameObject;
			__this_00.SelectFromNavigation(index, option);
			return;
		}
		return;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x5298430", Offset = "0x5297430", VA = "0x5298430")]
	public AottgChoiceOptionSelection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c (Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$.ctor): clean
		base();
		return;
	}
}
