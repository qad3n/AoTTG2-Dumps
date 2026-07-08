using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x200052F")]
internal class ColorPickDragArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x2000530")]
	public enum Mode
	{
		[Token(Token = "0x40019FE")]
		TwoDimensional,
		[Token(Token = "0x40019FF")]
		Horizontal,
		[Token(Token = "0x4001A00")]
		Vertical
	}

	[Token(Token = "0x40019FB")]
	[FieldOffset(Offset = "0x20")]
	private Mode _mode;

	[Token(Token = "0x40019FC")]
	[FieldOffset(Offset = "0x28")]
	private Action<float, float> _onChanged;

	[Token(Token = "0x60036AE")]
	[Address(RVA = "0x3F1F1A0", Offset = "0x3F1F1A0", VA = "0x3F1F1A0")]
	public void Setup(Mode mode, Action<float, float> onChanged)
	{
	}

	[Token(Token = "0x60036AF")]
	[Address(RVA = "0x3F214F0", Offset = "0x3F214F0", VA = "0x3F214F0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60036B0")]
	[Address(RVA = "0x3F21720", Offset = "0x3F21720", VA = "0x3F21720", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60036B1")]
	[Address(RVA = "0x3F21500", Offset = "0x3F21500", VA = "0x3F21500")]
	private void Notify(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60036B2")]
	[Address(RVA = "0x3F21730", Offset = "0x3F21730", VA = "0x3F21730")]
	public ColorPickDragArea()
	{
	}
}
