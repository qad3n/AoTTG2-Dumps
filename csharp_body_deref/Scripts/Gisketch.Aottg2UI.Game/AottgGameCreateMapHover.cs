// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapHover
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000215")]
internal sealed class AottgGameCreateMapHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x20")]
	private UnityEngine.UI.Outline _outline;

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x23C9B90", Offset = "0x23C8190", VA = "0x1823C9B90")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x23C9CA0", Offset = "0x23C82A0", VA = "0x1823C9CA0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x23C9C90", Offset = "0x23C8290", VA = "0x1823C9C90", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x23C9CA0", Offset = "0x23C82A0", VA = "0x1823C9CA0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x23C9C90", Offset = "0x23C8290", VA = "0x1823C9C90", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x23C9CB0", Offset = "0x23C82B0", VA = "0x1823C9CB0")]
	private void SetHovered(bool hovered)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGameCreateMapHover()
	{
	}
}
