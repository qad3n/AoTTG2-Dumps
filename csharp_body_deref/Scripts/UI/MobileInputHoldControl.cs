// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputHoldControl
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputHoldControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200073E")]
public abstract class MobileInputHoldControl : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x200073F")]
	private struct SlideButton
	{
		[Token(Token = "0x400246F")]
		[FieldOffset(Offset = "0x0")]
		public RectTransform Rect;

		[Token(Token = "0x4002470")]
		[FieldOffset(Offset = "0x8")]
		public MobileInputButton Button;

		[Token(Token = "0x600465B")]
		[Address(RVA = "0x5B6E600", Offset = "0x5B6D600", VA = "0x5B6E600")]
		public SlideButton(RectTransform rect, MobileInputButton button)
		{
		}
	}

	[Token(Token = "0x4002463")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4002464")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4002465")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x4002466")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputSkin _pressedSkin;

	[Token(Token = "0x4002467")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x4002468")]
	[FieldOffset(Offset = "0x48")]
	private MobileInputButton _activeSlideButton;

	[Token(Token = "0x4002469")]
	[FieldOffset(Offset = "0x50")]
	private RectTransform _movingContent;

	[Token(Token = "0x400246A")]
	[FieldOffset(Offset = "0x58")]
	private int _pointerId;

	[Token(Token = "0x400246B")]
	[FieldOffset(Offset = "0x60")]
	private Camera _eventCamera;

	[Token(Token = "0x400246C")]
	[FieldOffset(Offset = "0x68")]
	private bool _pressed;

	[Token(Token = "0x400246D")]
	[FieldOffset(Offset = "0x69")]
	private bool _moveContentWithTouch;

	[Token(Token = "0x400246E")]
	[FieldOffset(Offset = "0x70")]
	private readonly List<SlideButton> _slideButtons;

	[Token(Token = "0x6004646")]
	[Address(RVA = "0x5B6E0C0", Offset = "0x5B6D0C0", VA = "0x5B6E0C0")]
	protected void Setup(RectTransform rect, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x6004647")]
	[Address(RVA = "0x5B6E440", Offset = "0x5B6D440", VA = "0x5B6E440")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004648")]
	[Address(RVA = "0x5B6E540", Offset = "0x5B6D540", VA = "0x5B6E540")]
	private void Update()
	{
	}

	[Token(Token = "0x6004649")]
	[Address(RVA = "0x5B6E5E0", Offset = "0x5B6D5E0", VA = "0x5B6E5E0", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600464A")]
	[Address(RVA = "0x5B6AD60", Offset = "0x5B69D60", VA = "0x5B6AD60")]
	public void RegisterSlideButton(RectTransform rectTransform, MobileInputButton button)
	{
	}

	[Token(Token = "0x600464B")]
	[Address(RVA = "0x5B6A060", Offset = "0x5B69060", VA = "0x5B6A060")]
	public void SetupMovingContent(RectTransform content, bool moveContentWithTouch)
	{
	}

	[Token(Token = "0x600464C")]
	[Address(RVA = "0x5B6E6E0", Offset = "0x5B6D6E0", VA = "0x5B6E6E0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600464D")]
	[Address(RVA = "0x5B6E800", Offset = "0x5B6D800", VA = "0x5B6E800", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600464E")]
	[Address(RVA = "0x5B6E810", Offset = "0x5B6D810", VA = "0x5B6E810", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600464F")]
	[Address(RVA = "0x5B6E5B0", Offset = "0x5B6D5B0", VA = "0x5B6E5B0")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
	}

	[Token(Token = "0x6004650")]
	[Address(RVA = "0x5B6EA90", Offset = "0x5B6DA90", VA = "0x5B6EA90")]
	private void UpdateMovingContent(Vector2 screenPosition)
	{
	}

	[Token(Token = "0x6004651")]
	[Address(RVA = "0x5B6E630", Offset = "0x5B6D630", VA = "0x5B6E630")]
	private void ResetMovingContent()
	{
	}

	[Token(Token = "0x6004652")]
	[Address(RVA = "0x5B6ECD0", Offset = "0x5B6DCD0", VA = "0x5B6ECD0", Slot = "8")]
	protected virtual void OnControlPressed()
	{
	}

	[Token(Token = "0x6004653")]
	[Address(RVA = "0x5B6ECE0", Offset = "0x5B6DCE0", VA = "0x5B6ECE0", Slot = "9")]
	protected virtual void OnControlReleased()
	{
	}

	[Token(Token = "0x6004654")]
	[Address(RVA = "0x5B6ECF0", Offset = "0x5B6DCF0", VA = "0x5B6ECF0", Slot = "10")]
	protected virtual bool IsInputHeldByControl(MobileInput input)
	{
		return default(bool);
	}

	[Token(Token = "0x6004655")]
	[Address(RVA = "0x5B6E830", Offset = "0x5B6D830", VA = "0x5B6E830")]
	private MobileInputButton GetSlideButton(Vector2 screenPosition)
	{
		return null;
	}

	[Token(Token = "0x6004656")]
	[Address(RVA = "0x5B6E950", Offset = "0x5B6D950", VA = "0x5B6E950")]
	private void SetActiveSlideButton(MobileInputButton button)
	{
	}

	[Token(Token = "0x6004657")]
	[Address(RVA = "0x5B6ED00", Offset = "0x5B6DD00", VA = "0x5B6ED00")]
	private bool ContainsScreenPoint(RectTransform rectTransform, Vector2 screenPosition, float padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6004658")]
	[Address(RVA = "0x5B6E2B0", Offset = "0x5B6D2B0", VA = "0x5B6E2B0")]
	protected static bool ContainsInput(MobileInput[] inputs, MobileInput input)
	{
		return default(bool);
	}

	[Token(Token = "0x6004659")]
	[Address(RVA = "0x5B6E450", Offset = "0x5B6D450", VA = "0x5B6E450")]
	private void ResetControl()
	{
	}

	[Token(Token = "0x600465A")]
	[Address(RVA = "0x5B6E3B0", Offset = "0x5B6D3B0", VA = "0x5B6E3B0")]
	protected MobileInputHoldControl()
	{
	}
}
