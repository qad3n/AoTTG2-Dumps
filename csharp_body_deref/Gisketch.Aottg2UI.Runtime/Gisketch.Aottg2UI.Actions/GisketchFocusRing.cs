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

[Token(Token = "0x20000E5")]
public sealed class GisketchFocusRing : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler, IPointerDownHandler
{
	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _ring;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x28")]
	private Tween _pulse;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x30")]
	private bool _selected;

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x52A1FC0", Offset = "0x52A0FC0", VA = "0x52A1FC0")]
	public void Setup(Color color, float thickness = 3f, float gap = 5f, float cornerLength = 14f, bool visible = true)
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x52A2800", Offset = "0x52A1800", VA = "0x52A2800", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x52A28F0", Offset = "0x52A18F0", VA = "0x52A28F0", Slot = "5")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x52A2900", Offset = "0x52A1900", VA = "0x52A2900", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x52A29B0", Offset = "0x52A19B0", VA = "0x52A29B0")]
	public void Pulse()
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x52A2C90", Offset = "0x52A1C90", VA = "0x52A2C90")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x52A2CA0", Offset = "0x52A1CA0", VA = "0x52A2CA0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x52A2810", Offset = "0x52A1810", VA = "0x52A2810")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x52A2720", Offset = "0x52A1720", VA = "0x52A2720")]
	private void Corner(string name, Color color, Vector2 anchor, Vector2 pivot, float thickness, float length)
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x52A2DA0", Offset = "0x52A1DA0", VA = "0x52A2DA0")]
	private void Segment(string name, Color color, Vector2 anchor, Vector2 pivot, Vector2 size)
	{
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x52A2650", Offset = "0x52A1650", VA = "0x52A2650")]
	private static void Stretch(RectTransform rect, float gap)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x52A2640", Offset = "0x52A1640", VA = "0x52A2640")]
	private static void MarkPreview(GameObject go)
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x52A3040", Offset = "0x52A2040", VA = "0x52A3040")]
	public GisketchFocusRing()
	{
	}
}
