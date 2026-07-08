using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BA")]
public sealed class GisketchFocusRing : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler, IPointerDownHandler
{
	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _ring;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x28")]
	private Tween _pulse;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x30")]
	private bool _selected;

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x3A29DC0", Offset = "0x3A29DC0", VA = "0x3A29DC0")]
	public void Setup(Color color, float thickness = 3f, float gap = 5f, float cornerLength = 14f, bool visible = true)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x3A2A610", Offset = "0x3A2A610", VA = "0x3A2A610", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x3A2A700", Offset = "0x3A2A700", VA = "0x3A2A700", Slot = "5")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x3A2A710", Offset = "0x3A2A710", VA = "0x3A2A710", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x3A2A7C0", Offset = "0x3A2A7C0", VA = "0x3A2A7C0")]
	public void Pulse()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x3A2AAA0", Offset = "0x3A2AAA0", VA = "0x3A2AAA0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x3A2AAB0", Offset = "0x3A2AAB0", VA = "0x3A2AAB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x3A2A620", Offset = "0x3A2A620", VA = "0x3A2A620")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x3A2A530", Offset = "0x3A2A530", VA = "0x3A2A530")]
	private void Corner(string name, Color color, Vector2 anchor, Vector2 pivot, float thickness, float length)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x3A2ABD0", Offset = "0x3A2ABD0", VA = "0x3A2ABD0")]
	private void Segment(string name, Color color, Vector2 anchor, Vector2 pivot, Vector2 size)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x3A2A460", Offset = "0x3A2A460", VA = "0x3A2A460")]
	private static void Stretch(RectTransform rect, float gap)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x3A2A450", Offset = "0x3A2A450", VA = "0x3A2A450")]
	private static void MarkPreview(GameObject go)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x3A2AE70", Offset = "0x3A2AE70", VA = "0x3A2AE70")]
	public GisketchFocusRing()
	{
	}
}
