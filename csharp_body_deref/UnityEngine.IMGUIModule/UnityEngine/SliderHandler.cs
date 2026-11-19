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

[Token(Token = "0x200002D")]
internal struct SliderHandler
{
	[Token(Token = "0x4000111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Rect position;

	[Token(Token = "0x4000112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly float currentValue;

	[Token(Token = "0x4000113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private readonly float size;

	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float start;

	[Token(Token = "0x4000115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float end;

	[Token(Token = "0x4000116")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly GUIStyle slider;

	[Token(Token = "0x4000117")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly GUIStyle thumb;

	[Token(Token = "0x4000118")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly GUIStyle thumbExtent;

	[Token(Token = "0x4000119")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool horiz;

	[Token(Token = "0x400011A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private readonly int id;

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x69A31E0", Offset = "0x69A21E0", VA = "0x69A31E0")]
	public SliderHandler(Rect position, float currentValue, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x69A3250", Offset = "0x69A2250", VA = "0x69A3250")]
	public float Handle()
	{
		return default(float);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x69A3300", Offset = "0x69A2300", VA = "0x69A3300")]
	private float OnMouseDown()
	{
		return default(float);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x69A3B70", Offset = "0x69A2B70", VA = "0x69A3B70")]
	private float OnMouseDrag()
	{
		return default(float);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x69A3CD0", Offset = "0x69A2CD0", VA = "0x69A3CD0")]
	private float OnMouseUp()
	{
		return default(float);
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x69A3D80", Offset = "0x69A2D80", VA = "0x69A3D80")]
	private float OnRepaint()
	{
		return default(float);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x69A32D0", Offset = "0x69A22D0", VA = "0x69A32D0")]
	private EventType CurrentEventType()
	{
		return default(EventType);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x69A4950", Offset = "0x69A3950", VA = "0x69A4950")]
	private int CurrentScrollTroughSide()
	{
		return default(int);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x69A4760", Offset = "0x69A3760", VA = "0x69A4760")]
	private bool IsEmptySlider()
	{
		return default(bool);
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x69A4810", Offset = "0x69A3810", VA = "0x69A4810")]
	private bool SupportsPageMovements()
	{
		return default(bool);
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x69A4A40", Offset = "0x69A3A40", VA = "0x69A4A40")]
	private float PageMovementValue()
	{
		return default(float);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x69A4F70", Offset = "0x69A3F70", VA = "0x69A4F70")]
	private float PageUpMovementBound()
	{
		return default(float);
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x69A4750", Offset = "0x69A3750", VA = "0x69A4750")]
	private Event CurrentEvent()
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x69A4B90", Offset = "0x69A3B90", VA = "0x69A4B90")]
	private float ValueForCurrentMousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x69A4CA0", Offset = "0x69A3CA0", VA = "0x69A4CA0")]
	private float Clamp(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x69A4740", Offset = "0x69A3740", VA = "0x69A4740")]
	private Rect ThumbSelectionRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x69A47C0", Offset = "0x69A37C0", VA = "0x69A47C0")]
	private void StartDraggingWithValue(float dragStartValue)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x69A4870", Offset = "0x69A3870", VA = "0x69A4870")]
	private SliderState SliderState()
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x69A4EA0", Offset = "0x69A3EA0", VA = "0x69A4EA0")]
	private Rect ThumbExtRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x69A4F60", Offset = "0x69A3F60", VA = "0x69A4F60")]
	private Rect ThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x69A5050", Offset = "0x69A4050", VA = "0x69A5050")]
	private Rect VerticalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x69A5270", Offset = "0x69A4270", VA = "0x69A5270")]
	private Rect HorizontalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x69A4780", Offset = "0x69A3780", VA = "0x69A4780")]
	private float ClampedCurrentValue()
	{
		return default(float);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x69A4CD0", Offset = "0x69A3CD0", VA = "0x69A4CD0")]
	private float MousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x69A4D80", Offset = "0x69A3D80", VA = "0x69A4D80")]
	private float ValuesPerPixel()
	{
		return default(float);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x69A54A0", Offset = "0x69A44A0", VA = "0x69A54A0")]
	private float ThumbSize()
	{
		return default(float);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x69A5040", Offset = "0x69A4040", VA = "0x69A5040")]
	private float MaxValue()
	{
		return default(float);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x69A5030", Offset = "0x69A4030", VA = "0x69A5030")]
	private float MinValue()
	{
		return default(float);
	}
}
