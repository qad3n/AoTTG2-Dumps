// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EF")]
internal sealed class AottgHoverMarqueeParentRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000A60")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgHoverMarqueeTextRuntime> _items;

	[Token(Token = "0x4000A61")]
	[FieldOffset(Offset = "0x28")]
	private bool _hovered;

	[Token(Token = "0x4000A62")]
	[FieldOffset(Offset = "0x29")]
	private bool _selected;

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x23B3540", Offset = "0x23B1B40", VA = "0x1823B3540")]
	public void Register(AottgHoverMarqueeTextRuntime item)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x23B33E0", Offset = "0x23B19E0", VA = "0x1823B33E0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x23B33F0", Offset = "0x23B19F0", VA = "0x1823B33F0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x23B3400", Offset = "0x23B1A00", VA = "0x1823B3400", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x23B33C0", Offset = "0x23B19C0", VA = "0x1823B33C0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x23B33D0", Offset = "0x23B19D0", VA = "0x1823B33D0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x23B3410", Offset = "0x23B1A10", VA = "0x1823B3410")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x23B3680", Offset = "0x23B1C80", VA = "0x1823B3680")]
	public AottgHoverMarqueeParentRuntime()
	{
	}
}
