// ==================== AoTTG2 cross-reference ====================
// Type: UI.PanelResizeHandle
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/PanelResizeHandle.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000862")]
internal class PanelResizeHandle : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler
{
	[Token(Token = "0x4002A0B")]
	[FieldOffset(Offset = "0x20")]
	public bool IsRightEdge;

	[Token(Token = "0x4002A0C")]
	[FieldOffset(Offset = "0x24")]
	public float MinWidth;

	[Token(Token = "0x4002A0D")]
	[FieldOffset(Offset = "0x28")]
	public float MaxWidth;

	[Token(Token = "0x4002A0E")]
	[FieldOffset(Offset = "0x30")]
	public Action<float> OnResize;

	[Token(Token = "0x4002A0F")]
	[FieldOffset(Offset = "0x38")]
	private bool _isDragging;

	[Token(Token = "0x4002A10")]
	[FieldOffset(Offset = "0x3C")]
	private float _dragStartScreenX;

	[Token(Token = "0x4002A11")]
	[FieldOffset(Offset = "0x40")]
	private float _panelStartWidth;

	[Token(Token = "0x4002A12")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _panelRT;

	[Token(Token = "0x4002A13")]
	[FieldOffset(Offset = "0x50")]
	private Image _image;

	[Token(Token = "0x4002A14")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _lineGO;

	[Token(Token = "0x4002A15")]
	[FieldOffset(Offset = "0x60")]
	private RectTransform _lineRT;

	[Token(Token = "0x4002A16")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _ghostGO;

	[Token(Token = "0x4002A17")]
	[FieldOffset(Offset = "0x70")]
	private RectTransform _ghostRT;

	[Token(Token = "0x4002A18")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color IdleColor;

	[Token(Token = "0x4002A19")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color HoverColor;

	[Token(Token = "0x4002A1A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Color DragColor;

	[Token(Token = "0x4002A1B")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Color LineColor;

	[Token(Token = "0x4002A1C")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Color GhostBg;

	[Token(Token = "0x4002A1D")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Color GhostText;

	[Token(Token = "0x60050E4")]
	[Address(RVA = "0x22DE880", Offset = "0x22DCE80", VA = "0x1822DE880")]
	private void Awake()
	{
	}

	[Token(Token = "0x60050E5")]
	[Address(RVA = "0x22DF5B0", Offset = "0x22DDBB0", VA = "0x1822DF5B0", Slot = "7")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60050E6")]
	[Address(RVA = "0x22DF680", Offset = "0x22DDC80", VA = "0x1822DF680", Slot = "8")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60050E7")]
	[Address(RVA = "0x22DF450", Offset = "0x22DDA50", VA = "0x1822DF450", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60050E8")]
	[Address(RVA = "0x22DF410", Offset = "0x22DDA10", VA = "0x1822DF410", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60050E9")]
	[Address(RVA = "0x22DF750", Offset = "0x22DDD50", VA = "0x1822DF750", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60050EA")]
	[Address(RVA = "0x22DF220", Offset = "0x22DD820", VA = "0x1822DF220")]
	private float ComputeNewWidth(float screenX)
	{
		return default(float);
	}

	[Token(Token = "0x60050EB")]
	[Address(RVA = "0x22DEA80", Offset = "0x22DD080", VA = "0x1822DEA80")]
	private void BuildDragVisuals()
	{
	}

	[Token(Token = "0x60050EC")]
	[Address(RVA = "0x22DF940", Offset = "0x22DDF40", VA = "0x1822DF940")]
	private void UpdateDragVisuals(Vector2 screenPos)
	{
	}

	[Token(Token = "0x60050ED")]
	[Address(RVA = "0x22DF310", Offset = "0x22DD910", VA = "0x1822DF310")]
	private void DestroyDragVisuals()
	{
	}

	[Token(Token = "0x60050EE")]
	[Address(RVA = "0x22DE9D0", Offset = "0x22DCFD0", VA = "0x1822DE9D0")]
	private static void BoostSortOrder(GameObject go, int order)
	{
	}

	[Token(Token = "0x60050EF")]
	[Address(RVA = "0x22DFCC0", Offset = "0x22DE2C0", VA = "0x1822DFCC0")]
	public PanelResizeHandle()
	{
	}
}
