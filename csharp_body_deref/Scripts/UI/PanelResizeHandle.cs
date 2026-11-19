// ==================== AoTTG2 cross-reference ====================
// Type: UI.PanelResizeHandle
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20008E2")]
internal class PanelResizeHandle : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler
{
	[Token(Token = "0x4002CCA")]
	[FieldOffset(Offset = "0x20")]
	public bool IsRightEdge;

	[Token(Token = "0x4002CCB")]
	[FieldOffset(Offset = "0x24")]
	public float MinWidth;

	[Token(Token = "0x4002CCC")]
	[FieldOffset(Offset = "0x28")]
	public float MaxWidth;

	[Token(Token = "0x4002CCD")]
	[FieldOffset(Offset = "0x30")]
	public Action<float> OnResize;

	[Token(Token = "0x4002CCE")]
	[FieldOffset(Offset = "0x38")]
	private bool _isDragging;

	[Token(Token = "0x4002CCF")]
	[FieldOffset(Offset = "0x3C")]
	private float _dragStartScreenX;

	[Token(Token = "0x4002CD0")]
	[FieldOffset(Offset = "0x40")]
	private float _panelStartWidth;

	[Token(Token = "0x4002CD1")]
	[FieldOffset(Offset = "0x48")]
	private RectTransform _panelRT;

	[Token(Token = "0x4002CD2")]
	[FieldOffset(Offset = "0x50")]
	private Image _image;

	[Token(Token = "0x4002CD3")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _lineGO;

	[Token(Token = "0x4002CD4")]
	[FieldOffset(Offset = "0x60")]
	private RectTransform _lineRT;

	[Token(Token = "0x4002CD5")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _ghostGO;

	[Token(Token = "0x4002CD6")]
	[FieldOffset(Offset = "0x70")]
	private RectTransform _ghostRT;

	[Token(Token = "0x4002CD7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color IdleColor;

	[Token(Token = "0x4002CD8")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color HoverColor;

	[Token(Token = "0x4002CD9")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Color DragColor;

	[Token(Token = "0x4002CDA")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Color LineColor;

	[Token(Token = "0x4002CDB")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Color GhostBg;

	[Token(Token = "0x4002CDC")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Color GhostText;

	[Token(Token = "0x6005493")]
	[Address(RVA = "0x5CAA9C0", Offset = "0x5CA99C0", VA = "0x5CAA9C0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6005494")]
	[Address(RVA = "0x5CAAB10", Offset = "0x5CA9B10", VA = "0x5CAAB10", Slot = "7")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005495")]
	[Address(RVA = "0x5CAABD0", Offset = "0x5CA9BD0", VA = "0x5CAABD0", Slot = "8")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005496")]
	[Address(RVA = "0x5CAAC90", Offset = "0x5CA9C90", VA = "0x5CAAC90", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005497")]
	[Address(RVA = "0x5CAB720", Offset = "0x5CAA720", VA = "0x5CAB720", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005498")]
	[Address(RVA = "0x5CAB750", Offset = "0x5CAA750", VA = "0x5CAB750", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005499")]
	[Address(RVA = "0x5CAB960", Offset = "0x5CAA960", VA = "0x5CAB960")]
	private float ComputeNewWidth(float screenX)
	{
		return default(float);
	}

	[Token(Token = "0x600549A")]
	[Address(RVA = "0x5CAADD0", Offset = "0x5CA9DD0", VA = "0x5CAADD0")]
	private void BuildDragVisuals()
	{
	}

	[Token(Token = "0x600549B")]
	[Address(RVA = "0x5CAB4F0", Offset = "0x5CAA4F0", VA = "0x5CAB4F0")]
	private void UpdateDragVisuals(Vector2 screenPos)
	{
	}

	[Token(Token = "0x600549C")]
	[Address(RVA = "0x5CAB860", Offset = "0x5CAA860", VA = "0x5CAB860")]
	private void DestroyDragVisuals()
	{
	}

	[Token(Token = "0x600549D")]
	[Address(RVA = "0x5CABA50", Offset = "0x5CAAA50", VA = "0x5CABA50")]
	private static void BoostSortOrder(GameObject go, int order)
	{
	}

	[Token(Token = "0x600549E")]
	[Address(RVA = "0x5CABAF0", Offset = "0x5CAAAF0", VA = "0x5CABAF0")]
	public PanelResizeHandle()
	{
	}
}
