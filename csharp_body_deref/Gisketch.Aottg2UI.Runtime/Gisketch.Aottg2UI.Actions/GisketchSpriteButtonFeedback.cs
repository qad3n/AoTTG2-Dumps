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

[Token(Token = "0x20000F1")]
public sealed class GisketchSpriteButtonFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x40004C5")]
	private const float HoverLift = 10f;

	[Token(Token = "0x40004C6")]
	private const float PressDrop = -5f;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _origin;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x30")]
	private Tween _tween;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x38")]
	private bool _hovered;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x39")]
	private bool _selected;

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x190E0E0", Offset = "0x190C6E0", VA = "0x18190E0E0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x190EC40", Offset = "0x190D240", VA = "0x18190EC40")]
	public void Setup(RectTransform target)
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x190E5A0", Offset = "0x190CBA0", VA = "0x18190E5A0", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x190E650", Offset = "0x190CC50", VA = "0x18190E650", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x190E7B0", Offset = "0x190CDB0", VA = "0x18190E7B0", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x190E450", Offset = "0x190CA50", VA = "0x18190E450", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x190E530", Offset = "0x190CB30", VA = "0x18190E530", Slot = "21")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x190E700", Offset = "0x190CD00", VA = "0x18190E700", Slot = "22")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x190E860", Offset = "0x190CE60", VA = "0x18190E860", Slot = "23")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x190ED20", Offset = "0x190D320", VA = "0x18190ED20")]
	private Vector2 TargetPosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x190E200", Offset = "0x190C800", VA = "0x18190E200")]
	private void MoveTo(Vector2 target, float duration)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x190E500", Offset = "0x190CB00", VA = "0x18190E500", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public GisketchSpriteButtonFeedback()
	{
	}
}
