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

[Token(Token = "0x20000BE")]
public sealed class GisketchFocusRing : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler, IPointerDownHandler
{
	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _ring;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x28")]
	private Tween _pulse;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x30")]
	private bool _selected;

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x3A967E0", Offset = "0x3A967E0", VA = "0x3A967E0")]
	public void Setup(Color color, float thickness = 3f, float gap = 5f, float cornerLength = 14f, bool visible = true)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x3A97030", Offset = "0x3A97030", VA = "0x3A97030", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x3A97120", Offset = "0x3A97120", VA = "0x3A97120", Slot = "5")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x3A97130", Offset = "0x3A97130", VA = "0x3A97130", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x3A971E0", Offset = "0x3A971E0", VA = "0x3A971E0")]
	public void Pulse()
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x3A974C0", Offset = "0x3A974C0", VA = "0x3A974C0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x3A974D0", Offset = "0x3A974D0", VA = "0x3A974D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x3A97040", Offset = "0x3A97040", VA = "0x3A97040")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x3A96F50", Offset = "0x3A96F50", VA = "0x3A96F50")]
	private void Corner(string name, Color color, Vector2 anchor, Vector2 pivot, float thickness, float length)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x3A975F0", Offset = "0x3A975F0", VA = "0x3A975F0")]
	private void Segment(string name, Color color, Vector2 anchor, Vector2 pivot, Vector2 size)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x3A96E80", Offset = "0x3A96E80", VA = "0x3A96E80")]
	private static void Stretch(RectTransform rect, float gap)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x3A96E70", Offset = "0x3A96E70", VA = "0x3A96E70")]
	private static void MarkPreview(GameObject go)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x3A97890", Offset = "0x3A97890", VA = "0x3A97890")]
	public GisketchFocusRing()
	{
	}
}
