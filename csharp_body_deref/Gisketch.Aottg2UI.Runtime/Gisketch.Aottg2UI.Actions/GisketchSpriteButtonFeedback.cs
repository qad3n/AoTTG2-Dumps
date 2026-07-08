using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C7")]
public sealed class GisketchSpriteButtonFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x40003D0")]
	private const float HoverLift = 10f;

	[Token(Token = "0x40003D1")]
	private const float PressDrop = -5f;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _origin;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x30")]
	private Tween _tween;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x38")]
	private bool _hovered;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x39")]
	private bool _selected;

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x3A2EC40", Offset = "0x3A2EC40", VA = "0x3A2EC40", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x3A2ECA0", Offset = "0x3A2ECA0", VA = "0x3A2ECA0")]
	public void Setup(RectTransform target)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x3A2ED60", Offset = "0x3A2ED60", VA = "0x3A2ED60", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x3A2F0A0", Offset = "0x3A2F0A0", VA = "0x3A2F0A0", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x3A2F140", Offset = "0x3A2F140", VA = "0x3A2F140", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x3A2F1D0", Offset = "0x3A2F1D0", VA = "0x3A2F1D0", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x3A2F260", Offset = "0x3A2F260", VA = "0x3A2F260", Slot = "21")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x3A2F2D0", Offset = "0x3A2F2D0", VA = "0x3A2F2D0", Slot = "22")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x3A2F350", Offset = "0x3A2F350", VA = "0x3A2F350", Slot = "23")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x3A2EE00", Offset = "0x3A2EE00", VA = "0x3A2EE00")]
	private Vector2 TargetPosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x3A2EE70", Offset = "0x3A2EE70", VA = "0x3A2EE70")]
	private void MoveTo(Vector2 target, float duration)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x3A2F740", Offset = "0x3A2F740", VA = "0x3A2F740", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x3A2F770", Offset = "0x3A2F770", VA = "0x3A2F770")]
	public GisketchSpriteButtonFeedback()
	{
	}
}
