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

[Token(Token = "0x20006E6")]
internal class ColorPickDragArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x20006E7")]
	public enum Mode
	{
		[Token(Token = "0x40022C6")]
		TwoDimensional,
		[Token(Token = "0x40022C7")]
		Horizontal,
		[Token(Token = "0x40022C8")]
		Vertical
	}

	[Token(Token = "0x40022C3")]
	[FieldOffset(Offset = "0x20")]
	private Mode _mode;

	[Token(Token = "0x40022C4")]
	[FieldOffset(Offset = "0x28")]
	private Action<float, float> _onChanged;

	[Token(Token = "0x60043E2")]
	[Address(RVA = "0x21BCBF0", Offset = "0x21BB1F0", VA = "0x1821BCBF0")]
	public void Setup(Mode mode, Action<float, float> onChanged)
	{
	}

	[Token(Token = "0x60043E3")]
	[Address(RVA = "0x21BCBE0", Offset = "0x21BB1E0", VA = "0x1821BCBE0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60043E4")]
	[Address(RVA = "0x21BCBE0", Offset = "0x21BB1E0", VA = "0x1821BCBE0", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60043E5")]
	[Address(RVA = "0x21BC930", Offset = "0x21BAF30", VA = "0x1821BC930")]
	private void Notify(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60043E6")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ColorPickDragArea()
	{
	}
}
