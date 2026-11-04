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
	[Address(RVA = "0x2D3E3B0", Offset = "0x2D3C9B0", VA = "0x182D3E3B0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x2D3E410", Offset = "0x2D3CA10", VA = "0x182D3E410", Slot = "5")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x2D3E350", Offset = "0x2D3C950", VA = "0x182D3E350", Slot = "6")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public TMP_ScrollbarEventHandler()
	{
	}
}
