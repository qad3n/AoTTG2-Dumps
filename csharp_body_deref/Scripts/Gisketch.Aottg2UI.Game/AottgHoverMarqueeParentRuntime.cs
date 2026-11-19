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

[Token(Token = "0x2000209")]
internal sealed class AottgHoverMarqueeParentRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgHoverMarqueeTextRuntime> _items;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x28")]
	private bool _hovered;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x29")]
	private bool _selected;

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x5D84D10", Offset = "0x5D83D10", VA = "0x5D84D10")]
	public void Register(AottgHoverMarqueeTextRuntime item)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x5D84EE0", Offset = "0x5D83EE0", VA = "0x5D84EE0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x5D85040", Offset = "0x5D84040", VA = "0x5D85040", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x5D85050", Offset = "0x5D84050", VA = "0x5D85050", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x5D85060", Offset = "0x5D84060", VA = "0x5D85060", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x5D85070", Offset = "0x5D84070", VA = "0x5D85070")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x5D84EF0", Offset = "0x5D83EF0", VA = "0x5D84EF0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x5D85080", Offset = "0x5D84080", VA = "0x5D85080")]
	public AottgHoverMarqueeParentRuntime()
	{
	}
}
