using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000029")]
internal struct SliderHandler
{
	[Token(Token = "0x400010B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Rect position;

	[Token(Token = "0x400010C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly float currentValue;

	[Token(Token = "0x400010D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private readonly float size;

	[Token(Token = "0x400010E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float start;

	[Token(Token = "0x400010F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float end;

	[Token(Token = "0x4000110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly GUIStyle slider;

	[Token(Token = "0x4000111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly GUIStyle thumb;

	[Token(Token = "0x4000112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly GUIStyle thumbExtent;

	[Token(Token = "0x4000113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool horiz;

	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private readonly int id;

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4B39DF0", Offset = "0x4B39DF0", VA = "0x4B39DF0")]
	public SliderHandler(Rect position, float currentValue, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4B39E60", Offset = "0x4B39E60", VA = "0x4B39E60")]
	public float Handle()
	{
		return default(float);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4B39F30", Offset = "0x4B39F30", VA = "0x4B39F30")]
	private float OnMouseDown()
	{
		return default(float);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4B3A670", Offset = "0x4B3A670", VA = "0x4B3A670")]
	private float OnMouseDrag()
	{
		return default(float);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4B3A7D0", Offset = "0x4B3A7D0", VA = "0x4B3A7D0")]
	private float OnMouseUp()
	{
		return default(float);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4B3A810", Offset = "0x4B3A810", VA = "0x4B3A810")]
	private float OnRepaint()
	{
		return default(float);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4B39F00", Offset = "0x4B39F00", VA = "0x4B39F00")]
	private EventType CurrentEventType()
	{
		return default(EventType);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4B3B210", Offset = "0x4B3B210", VA = "0x4B3B210")]
	private int CurrentScrollTroughSide()
	{
		return default(int);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4B3B020", Offset = "0x4B3B020", VA = "0x4B3B020")]
	private bool IsEmptySlider()
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4B3B100", Offset = "0x4B3B100", VA = "0x4B3B100")]
	private bool SupportsPageMovements()
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4B3B290", Offset = "0x4B3B290", VA = "0x4B3B290")]
	private float PageMovementValue()
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4B3B690", Offset = "0x4B3B690", VA = "0x4B3B690")]
	private float PageUpMovementBound()
	{
		return default(float);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4B3B010", Offset = "0x4B3B010", VA = "0x4B3B010")]
	private Event CurrentEvent()
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4B3B3C0", Offset = "0x4B3B3C0", VA = "0x4B3B3C0")]
	private float ValueForCurrentMousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4B3B480", Offset = "0x4B3B480", VA = "0x4B3B480")]
	private float Clamp(float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4B3B000", Offset = "0x4B3B000", VA = "0x4B3B000")]
	private Rect ThumbSelectionRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4B3B080", Offset = "0x4B3B080", VA = "0x4B3B080")]
	private void StartDraggingWithValue(float dragStartValue)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4B3B160", Offset = "0x4B3B160", VA = "0x4B3B160")]
	private SliderState SliderState()
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4B3B5F0", Offset = "0x4B3B5F0", VA = "0x4B3B5F0")]
	private Rect ThumbExtRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4B3B680", Offset = "0x4B3B680", VA = "0x4B3B680")]
	private Rect ThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4B3B700", Offset = "0x4B3B700", VA = "0x4B3B700")]
	private Rect VerticalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4B3B850", Offset = "0x4B3B850", VA = "0x4B3B850")]
	private Rect HorizontalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4B3B040", Offset = "0x4B3B040", VA = "0x4B3B040")]
	private float ClampedCurrentValue()
	{
		return default(float);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4B3B4B0", Offset = "0x4B3B4B0", VA = "0x4B3B4B0")]
	private float MousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4B3B500", Offset = "0x4B3B500", VA = "0x4B3B500")]
	private float ValuesPerPixel()
	{
		return default(float);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4B3B9A0", Offset = "0x4B3B9A0", VA = "0x4B3B9A0")]
	private float ThumbSize()
	{
		return default(float);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4B3B6F0", Offset = "0x4B3B6F0", VA = "0x4B3B6F0")]
	private float MaxValue()
	{
		return default(float);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4B3B6E0", Offset = "0x4B3B6E0", VA = "0x4B3B6E0")]
	private float MinValue()
	{
		return default(float);
	}
}
