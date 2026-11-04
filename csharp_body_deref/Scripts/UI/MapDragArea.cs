// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapDragArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapDragArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x20007A2")]
internal class MapDragArea : MonoBehaviour, IDragHandler, IEventSystemHandler, IEndDragHandler
{
	[Token(Token = "0x400268D")]
	[FieldOffset(Offset = "0x20")]
	private Action<Vector2> _onDrag;

	[Token(Token = "0x400268E")]
	[FieldOffset(Offset = "0x28")]
	private Action _onEndDrag;

	[Token(Token = "0x6004A4C")]
	[Address(RVA = "0x2258F20", Offset = "0x2257520", VA = "0x182258F20")]
	public void Setup(Action<Vector2> onDrag, Action onEndDrag)
	{
	}

	[Token(Token = "0x6004A4D")]
	[Address(RVA = "0x2258D40", Offset = "0x2257340", VA = "0x182258D40", Slot = "4")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004A4E")]
	[Address(RVA = "0x2258EF0", Offset = "0x22574F0", VA = "0x182258EF0", Slot = "5")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004A4F")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MapDragArea()
	{
	}
}
