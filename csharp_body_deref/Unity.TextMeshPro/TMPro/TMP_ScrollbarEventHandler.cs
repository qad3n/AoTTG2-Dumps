// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_ScrollbarEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace TMPro;

[Token(Token = "0x2000077")]
public class TMP_ScrollbarEventHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x20")]
	public bool isSelected;

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4C8AB20", Offset = "0x4C8AB20", VA = "0x4C8AB20", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4C8AB80", Offset = "0x4C8AB80", VA = "0x4C8AB80", Slot = "5")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4C8ABE0", Offset = "0x4C8ABE0", VA = "0x4C8ABE0", Slot = "6")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4C8AC40", Offset = "0x4C8AC40", VA = "0x4C8AC40")]
	public TMP_ScrollbarEventHandler()
	{
	}
}
