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

[Token(Token = "0x2000574")]
internal class ColorPickDragArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x2000575")]
	public enum Mode
	{
		[Token(Token = "0x4001B11")]
		TwoDimensional,
		[Token(Token = "0x4001B12")]
		Horizontal,
		[Token(Token = "0x4001B13")]
		Vertical
	}

	[Token(Token = "0x4001B0E")]
	[FieldOffset(Offset = "0x20")]
	private Mode _mode;

	[Token(Token = "0x4001B0F")]
	[FieldOffset(Offset = "0x28")]
	private Action<float, float> _onChanged;

	[Token(Token = "0x60038BC")]
	[Address(RVA = "0x4248870", Offset = "0x4248870", VA = "0x4248870")]
	public void Setup(Mode mode, Action<float, float> onChanged)
	{
	}

	[Token(Token = "0x60038BD")]
	[Address(RVA = "0x424ACA0", Offset = "0x424ACA0", VA = "0x424ACA0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60038BE")]
	[Address(RVA = "0x424AED0", Offset = "0x424AED0", VA = "0x424AED0", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60038BF")]
	[Address(RVA = "0x424ACB0", Offset = "0x424ACB0", VA = "0x424ACB0")]
	private void Notify(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60038C0")]
	[Address(RVA = "0x424AEE0", Offset = "0x424AEE0", VA = "0x424AEE0")]
	public ColorPickDragArea()
	{
	}
}
