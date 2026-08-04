// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SliderHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4E619B0", Offset = "0x4E619B0", VA = "0x4E619B0")]
	public SliderHandler(Rect position, float currentValue, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4E61A20", Offset = "0x4E61A20", VA = "0x4E61A20")]
	public float Handle()
	{
		return default(float);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4E61AF0", Offset = "0x4E61AF0", VA = "0x4E61AF0")]
	private float OnMouseDown()
	{
		return default(float);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4E62230", Offset = "0x4E62230", VA = "0x4E62230")]
	private float OnMouseDrag()
	{
		return default(float);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4E62390", Offset = "0x4E62390", VA = "0x4E62390")]
	private float OnMouseUp()
	{
		return default(float);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4E623D0", Offset = "0x4E623D0", VA = "0x4E623D0")]
	private float OnRepaint()
	{
		return default(float);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4E61AC0", Offset = "0x4E61AC0", VA = "0x4E61AC0")]
	private EventType CurrentEventType()
	{
		return default(EventType);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4E62DD0", Offset = "0x4E62DD0", VA = "0x4E62DD0")]
	private int CurrentScrollTroughSide()
	{
		return default(int);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4E62BE0", Offset = "0x4E62BE0", VA = "0x4E62BE0")]
	private bool IsEmptySlider()
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4E62CC0", Offset = "0x4E62CC0", VA = "0x4E62CC0")]
	private bool SupportsPageMovements()
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4E62E50", Offset = "0x4E62E50", VA = "0x4E62E50")]
	private float PageMovementValue()
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4E63250", Offset = "0x4E63250", VA = "0x4E63250")]
	private float PageUpMovementBound()
	{
		return default(float);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4E62BD0", Offset = "0x4E62BD0", VA = "0x4E62BD0")]
	private Event CurrentEvent()
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4E62F80", Offset = "0x4E62F80", VA = "0x4E62F80")]
	private float ValueForCurrentMousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4E63040", Offset = "0x4E63040", VA = "0x4E63040")]
	private float Clamp(float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4E62BC0", Offset = "0x4E62BC0", VA = "0x4E62BC0")]
	private Rect ThumbSelectionRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4E62C40", Offset = "0x4E62C40", VA = "0x4E62C40")]
	private void StartDraggingWithValue(float dragStartValue)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4E62D20", Offset = "0x4E62D20", VA = "0x4E62D20")]
	private SliderState SliderState()
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4E631B0", Offset = "0x4E631B0", VA = "0x4E631B0")]
	private Rect ThumbExtRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4E63240", Offset = "0x4E63240", VA = "0x4E63240")]
	private Rect ThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4E632C0", Offset = "0x4E632C0", VA = "0x4E632C0")]
	private Rect VerticalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4E63410", Offset = "0x4E63410", VA = "0x4E63410")]
	private Rect HorizontalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4E62C00", Offset = "0x4E62C00", VA = "0x4E62C00")]
	private float ClampedCurrentValue()
	{
		return default(float);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4E63070", Offset = "0x4E63070", VA = "0x4E63070")]
	private float MousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4E630C0", Offset = "0x4E630C0", VA = "0x4E630C0")]
	private float ValuesPerPixel()
	{
		return default(float);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4E63560", Offset = "0x4E63560", VA = "0x4E63560")]
	private float ThumbSize()
	{
		return default(float);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4E632B0", Offset = "0x4E632B0", VA = "0x4E632B0")]
	private float MaxValue()
	{
		return default(float);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4E632A0", Offset = "0x4E632A0", VA = "0x4E632A0")]
	private float MinValue()
	{
		return default(float);
	}
}
