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

[Token(Token = "0x2000160")]
internal sealed class AottgHoverMarqueeParentRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40007BC")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgHoverMarqueeTextRuntime> _items;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0x28")]
	private bool _hovered;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0x29")]
	private bool _selected;

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x43EAD00", Offset = "0x43EAD00", VA = "0x43EAD00")]
	public void Register(AottgHoverMarqueeTextRuntime item)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x43EAED0", Offset = "0x43EAED0", VA = "0x43EAED0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x43EB030", Offset = "0x43EB030", VA = "0x43EB030", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x43EB040", Offset = "0x43EB040", VA = "0x43EB040", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x43EB050", Offset = "0x43EB050", VA = "0x43EB050", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x43EB060", Offset = "0x43EB060", VA = "0x43EB060")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x43EAEE0", Offset = "0x43EAEE0", VA = "0x43EAEE0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x43EB070", Offset = "0x43EB070", VA = "0x43EB070")]
	public AottgHoverMarqueeParentRuntime()
	{
	}
}
