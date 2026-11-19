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

[Token(Token = "0x200006C")]
[TMPro.TMPHelpURL("index")]
public class TMP_ScrollbarEventHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x20")]
	public bool isSelected;

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x6735530", Offset = "0x6734530", VA = "0x6735530", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x6735590", Offset = "0x6734590", VA = "0x6735590", Slot = "5")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x67355F0", Offset = "0x67345F0", VA = "0x67355F0", Slot = "6")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x6735650", Offset = "0x6734650", VA = "0x6735650")]
	public TMP_ScrollbarEventHandler()
	{
	}
}
