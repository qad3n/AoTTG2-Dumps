// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000F7")]
public sealed class GisketchSpriteButtonFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x40004EC")]
	private const float HoverLift = 10f;

	[Token(Token = "0x40004ED")]
	private const float PressDrop = -5f;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _origin;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x30")]
	private Tween _tween;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x38")]
	private bool _hovered;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x39")]
	private bool _selected;

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x52A9220", Offset = "0x52A8220", VA = "0x52A9220", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x52A9290", Offset = "0x52A8290", VA = "0x52A9290")]
	public void Setup(RectTransform target)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x52A9350", Offset = "0x52A8350", VA = "0x52A9350", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x52A9690", Offset = "0x52A8690", VA = "0x52A9690", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x52A9730", Offset = "0x52A8730", VA = "0x52A9730", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x52A97C0", Offset = "0x52A87C0", VA = "0x52A97C0", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x52A9850", Offset = "0x52A8850", VA = "0x52A9850", Slot = "21")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x52A98C0", Offset = "0x52A88C0", VA = "0x52A98C0", Slot = "22")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x52A9940", Offset = "0x52A8940", VA = "0x52A9940", Slot = "23")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x52A93F0", Offset = "0x52A83F0", VA = "0x52A93F0")]
	private Vector2 TargetPosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x52A9460", Offset = "0x52A8460", VA = "0x52A9460")]
	private void MoveTo(Vector2 target, float duration)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x52A9D40", Offset = "0x52A8D40", VA = "0x52A9D40", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x52A9D70", Offset = "0x52A8D70", VA = "0x52A9D70")]
	public GisketchSpriteButtonFeedback()
	{
	}
}
