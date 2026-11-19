// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorPickDragArea
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ColorPickDragArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x200078F")]
internal class ColorPickDragArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x2000790")]
	public enum Mode
	{
		[Token(Token = "0x4002640")]
		TwoDimensional,
		[Token(Token = "0x4002641")]
		Horizontal,
		[Token(Token = "0x4002642")]
		Vertical
	}

	[Token(Token = "0x400263D")]
	[FieldOffset(Offset = "0x20")]
	private Mode _mode;

	[Token(Token = "0x400263E")]
	[FieldOffset(Offset = "0x28")]
	private Action<float, float> _onChanged;

	[Token(Token = "0x6004907")]
	[Address(RVA = "0x5BB9FE0", Offset = "0x5BB8FE0", VA = "0x5BB9FE0")]
	public void Setup(Mode mode, Action<float, float> onChanged)
	{
	}

	[Token(Token = "0x6004908")]
	[Address(RVA = "0x5BBC350", Offset = "0x5BBB350", VA = "0x5BBC350", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004909")]
	[Address(RVA = "0x5BBC5C0", Offset = "0x5BBB5C0", VA = "0x5BBC5C0", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600490A")]
	[Address(RVA = "0x5BBC360", Offset = "0x5BBB360", VA = "0x5BBC360")]
	private void Notify(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600490B")]
	[Address(RVA = "0x5BBC5D0", Offset = "0x5BBB5D0", VA = "0x5BBC5D0")]
	public ColorPickDragArea()
	{
	}
}
