// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapDragArea
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapDragArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x200084F")]
internal class MapDragArea : MonoBehaviour, IDragHandler, IEventSystemHandler, IEndDragHandler
{
	[Token(Token = "0x4002A0C")]
	[FieldOffset(Offset = "0x20")]
	private Action<Vector2> _onDrag;

	[Token(Token = "0x4002A0D")]
	[FieldOffset(Offset = "0x28")]
	private Action _onEndDrag;

	[Token(Token = "0x6004F7A")]
	[Address(RVA = "0x5C35870", Offset = "0x5C34870", VA = "0x5C35870")]
	public void Setup(Action<Vector2> onDrag, Action onEndDrag)
	{
	}

	[Token(Token = "0x6004F7B")]
	[Address(RVA = "0x5C36F10", Offset = "0x5C35F10", VA = "0x5C36F10", Slot = "4")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004F7C")]
	[Address(RVA = "0x5C37070", Offset = "0x5C36070", VA = "0x5C37070", Slot = "5")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004F7D")]
	[Address(RVA = "0x5C37090", Offset = "0x5C36090", VA = "0x5C37090")]
	public MapDragArea()
	{
	}
}
