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
	[Address(RVA = "0x2FABCC0", Offset = "0x2FAA2C0", VA = "0x182FABCC0")]
	public SliderHandler(Rect position, float currentValue, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x2FAA150", Offset = "0x2FA8750", VA = "0x182FAA150")]
	public float Handle()
	{
		return default(float);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x2FAA5F0", Offset = "0x2FA8BF0", VA = "0x182FAA5F0")]
	private float OnMouseDown()
	{
		return default(float);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x2FAAB30", Offset = "0x2FA9130", VA = "0x182FAAB30")]
	private float OnMouseDrag()
	{
		return default(float);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x2FAAC90", Offset = "0x2FA9290", VA = "0x182FAAC90")]
	private float OnMouseUp()
	{
		return default(float);
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x2FAAD20", Offset = "0x2FA9320", VA = "0x182FAAD20")]
	private float OnRepaint()
	{
		return default(float);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x2FAA030", Offset = "0x2FA8630", VA = "0x182FAA030")]
	private EventType CurrentEventType()
	{
		return default(EventType);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x2FAA070", Offset = "0x2FA8670", VA = "0x182FAA070")]
	private int CurrentScrollTroughSide()
	{
		return default(int);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x2FAA4C0", Offset = "0x2FA8AC0", VA = "0x182FAA4C0")]
	private bool IsEmptySlider()
	{
		return default(bool);
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x2FAB5A0", Offset = "0x2FA9BA0", VA = "0x182FAB5A0")]
	private bool SupportsPageMovements()
	{
		return default(bool);
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x2FAB2C0", Offset = "0x2FA98C0", VA = "0x182FAB2C0")]
	private float PageMovementValue()
	{
		return default(float);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x2FAB3A0", Offset = "0x2FA99A0", VA = "0x182FAB3A0")]
	private float PageUpMovementBound()
	{
		return default(float);
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x2FAA060", Offset = "0x2FA8660", VA = "0x182FAA060")]
	private Event CurrentEvent()
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x2FAB820", Offset = "0x2FA9E20", VA = "0x182FAB820")]
	private float ValueForCurrentMousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x2FA9F90", Offset = "0x2FA8590", VA = "0x182FA9F90")]
	private float Clamp(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x2FAB710", Offset = "0x2FA9D10", VA = "0x182FAB710")]
	private Rect ThumbSelectionRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2FAB540", Offset = "0x2FA9B40", VA = "0x182FAB540")]
	private void StartDraggingWithValue(float dragStartValue)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x2FAB460", Offset = "0x2FA9A60", VA = "0x182FAB460")]
	private SliderState SliderState()
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x2FAB600", Offset = "0x2FA9C00", VA = "0x182FAB600")]
	private Rect ThumbExtRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x2FAB710", Offset = "0x2FA9D10", VA = "0x182FAB710")]
	private Rect ThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x2FABA30", Offset = "0x2FAA030", VA = "0x182FABA30")]
	private Rect VerticalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x2FAA200", Offset = "0x2FA8800", VA = "0x182FAA200")]
	private Rect HorizontalThumbRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2FA9FE0", Offset = "0x2FA85E0", VA = "0x182FA9FE0")]
	private float ClampedCurrentValue()
	{
		return default(float);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x2FAA530", Offset = "0x2FA8B30", VA = "0x182FAA530")]
	private float MousePosition()
	{
		return default(float);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x2FAB920", Offset = "0x2FA9F20", VA = "0x182FAB920")]
	private float ValuesPerPixel()
	{
		return default(float);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x2FAB760", Offset = "0x2FA9D60", VA = "0x182FAB760")]
	private float ThumbSize()
	{
		return default(float);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2FAA4E0", Offset = "0x2FA8AE0", VA = "0x182FAA4E0")]
	private float MaxValue()
	{
		return default(float);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x2FAA510", Offset = "0x2FA8B10", VA = "0x182FAA510")]
	private float MinValue()
	{
		return default(float);
	}
}
