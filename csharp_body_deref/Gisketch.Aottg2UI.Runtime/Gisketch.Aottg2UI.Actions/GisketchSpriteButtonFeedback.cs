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

[Token(Token = "0x20000CC")]
public sealed class GisketchSpriteButtonFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x4000401")]
	private const float HoverLift = 10f;

	[Token(Token = "0x4000402")]
	private const float PressDrop = -5f;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _origin;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x30")]
	private Tween _tween;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x38")]
	private bool _hovered;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x39")]
	private bool _selected;

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x3A9B770", Offset = "0x3A9B770", VA = "0x3A9B770", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x3A9B7D0", Offset = "0x3A9B7D0", VA = "0x3A9B7D0")]
	public void Setup(RectTransform target)
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x3A9B890", Offset = "0x3A9B890", VA = "0x3A9B890", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x3A9BBD0", Offset = "0x3A9BBD0", VA = "0x3A9BBD0", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x3A9BC70", Offset = "0x3A9BC70", VA = "0x3A9BC70", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x3A9BD00", Offset = "0x3A9BD00", VA = "0x3A9BD00", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x3A9BD90", Offset = "0x3A9BD90", VA = "0x3A9BD90", Slot = "21")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x3A9BE00", Offset = "0x3A9BE00", VA = "0x3A9BE00", Slot = "22")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x3A9BE80", Offset = "0x3A9BE80", VA = "0x3A9BE80", Slot = "23")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x3A9B930", Offset = "0x3A9B930", VA = "0x3A9B930")]
	private Vector2 TargetPosition()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x3A9B9A0", Offset = "0x3A9B9A0", VA = "0x3A9B9A0")]
	private void MoveTo(Vector2 target, float duration)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x3A9C270", Offset = "0x3A9C270", VA = "0x3A9C270", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x3A9C2A0", Offset = "0x3A9C2A0", VA = "0x3A9C2A0")]
	public GisketchSpriteButtonFeedback()
	{
	}
}
