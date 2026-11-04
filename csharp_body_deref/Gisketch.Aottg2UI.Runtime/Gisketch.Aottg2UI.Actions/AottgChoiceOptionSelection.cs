// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C4")]
public sealed class AottgChoiceOptionSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _owner;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x18F7330", Offset = "0x18F5930", VA = "0x1818F7330")]
	public void Setup(AottgChoiceControl owner, int index)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x18F71E0", Offset = "0x18F57E0", VA = "0x1818F71E0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x18F71E0", Offset = "0x18F57E0", VA = "0x1818F71E0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x18F7270", Offset = "0x18F5870", VA = "0x1818F7270", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgChoiceOptionSelection()
	{
	}
}
