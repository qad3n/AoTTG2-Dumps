// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusRing
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DF")]
public sealed class GisketchFocusRing : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler, IPointerDownHandler
{
	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _ring;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x28")]
	private Tween _pulse;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x30")]
	private bool _selected;

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x19003F0", Offset = "0x18FE9F0", VA = "0x1819003F0")]
	public void Setup(Color color, float thickness = 3f, float gap = 5f, float cornerLength = 14f, bool visible = true)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x18FFD90", Offset = "0x18FE390", VA = "0x1818FFD90", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x18FFC60", Offset = "0x18FE260", VA = "0x1818FFC60", Slot = "5")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x18FF010", Offset = "0x18FD610", VA = "0x1818FF010", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x18FFDA0", Offset = "0x18FE3A0", VA = "0x1818FFDA0")]
	public void Pulse()
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x18FFC60", Offset = "0x18FE260", VA = "0x1818FFC60")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x18FFC70", Offset = "0x18FE270", VA = "0x1818FFC70")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x1900070", Offset = "0x18FE670", VA = "0x181900070")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x18FFB20", Offset = "0x18FE120", VA = "0x1818FFB20")]
	private void Corner(string name, Color color, Vector2 anchor, Vector2 pivot, float thickness, float length)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x1900150", Offset = "0x18FE750", VA = "0x181900150")]
	private void Segment(string name, Color color, Vector2 anchor, Vector2 pivot, Vector2 size)
	{
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x1900A20", Offset = "0x18FF020", VA = "0x181900A20")]
	private static void Stretch(RectTransform rect, float gap)
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void MarkPreview(GameObject go)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchFocusRing()
	{
	}
}
