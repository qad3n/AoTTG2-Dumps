// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLookAreaForwarder
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLookAreaForwarder.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000743")]
public class MobileInputLookAreaForwarder : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x600468B")]
	[Address(RVA = "0x5B70CC0", Offset = "0x5B6FCC0", VA = "0x5B70CC0", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookAreaForwarder.c (UI.MobileInputLookAreaForwarder$$OnInitializePotentialDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		eventData._useDragThreshold_k__BackingField = false;
		return;
	}

	[Token(Token = "0x600468C")]
	[Address(RVA = "0x5B70CE0", Offset = "0x5B6FCE0", VA = "0x5B70CE0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookAreaForwarder.c (UI.MobileInputLookAreaForwarder$$OnPointerDown): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075478fd == false) {
			Il2CppMethodInitialized_075478fd = true;
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputLookArea.ForwardPointerDown(eventData);
			return;
		}
		MobileInputLookArea.ForwardPointerDown(eventData);
		return;
	}

	[Token(Token = "0x600468D")]
	[Address(RVA = "0x5B70D40", Offset = "0x5B6FD40", VA = "0x5B70D40", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookAreaForwarder.c (UI.MobileInputLookAreaForwarder$$OnDrag): clean
		return;
	}

	[Token(Token = "0x600468E")]
	[Address(RVA = "0x5B70D50", Offset = "0x5B6FD50", VA = "0x5B70D50", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputLookAreaForwarder.c (UI.MobileInputLookAreaForwarder$$OnPointerUp): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075478fe == false) {
			Il2CppMethodInitialized_075478fe = true;
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLookArea)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputLookArea.ForwardPointerUp(eventData);
			return;
		}
		MobileInputLookArea.ForwardPointerUp(eventData);
		return;
	}

	[Token(Token = "0x600468F")]
	[Address(RVA = "0x5B70DB0", Offset = "0x5B6FDB0", VA = "0x5B70DB0")]
	public MobileInputLookAreaForwarder()
	{
		// Lifted from source/cpp/UI/MobileInputLookAreaForwarder.c (UI.MobileInputLookAreaForwarder$$.ctor): clean
		base();
		return;
	}
}
