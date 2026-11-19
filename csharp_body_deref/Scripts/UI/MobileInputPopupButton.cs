// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputPopupButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputPopupButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000744")]
public class MobileInputPopupButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IPointerClickHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x2000745")]
	private struct SlideButton
	{
		[Token(Token = "0x40024A0")]
		[FieldOffset(Offset = "0x0")]
		public RectTransform Rect;

		[Token(Token = "0x40024A1")]
		[FieldOffset(Offset = "0x8")]
		public MobileInputButton Button;

		[Token(Token = "0x60046A3")]
		[Address(RVA = "0x5B70FF0", Offset = "0x5B6FFF0", VA = "0x5B70FF0")]
		public SlideButton(RectTransform rect, MobileInputButton button)
		{
		}
	}

	[Token(Token = "0x4002494")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<GameObject> _childObjects;

	[Token(Token = "0x4002495")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<SlideButton> _slideButtons;

	[Token(Token = "0x4002496")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputPopupMode _mode;

	[Token(Token = "0x4002497")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4002498")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x4002499")]
	[FieldOffset(Offset = "0x48")]
	private MobileInputSkin _openSkin;

	[Token(Token = "0x400249A")]
	[FieldOffset(Offset = "0x50")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x400249B")]
	[FieldOffset(Offset = "0x54")]
	private bool _open;

	[Token(Token = "0x400249C")]
	[FieldOffset(Offset = "0x58")]
	private int _pointerId;

	[Token(Token = "0x400249D")]
	[FieldOffset(Offset = "0x60")]
	private Camera _eventCamera;

	[Token(Token = "0x400249E")]
	[FieldOffset(Offset = "0x68")]
	private MobileInputButton _activeSlideButton;

	[Token(Token = "0x400249F")]
	[FieldOffset(Offset = "0x70")]
	private bool _pressed;

	[Token(Token = "0x6004690")]
	[Address(RVA = "0x5B6C720", Offset = "0x5B6B720", VA = "0x5B6C720")]
	public void Setup(MobileInputPopupMode mode, MobileInputSkin normalSkin, MobileInputSkin openSkin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x6004691")]
	[Address(RVA = "0x5B6CC50", Offset = "0x5B6BC50", VA = "0x5B6CC50")]
	public void RegisterChild(GameObject childObject, RectTransform rect, MobileInputButton button)
	{
	}

	[Token(Token = "0x6004692")]
	[Address(RVA = "0x5B71020", Offset = "0x5B70020", VA = "0x5B71020")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004693")]
	[Address(RVA = "0x5B71090", Offset = "0x5B70090", VA = "0x5B71090")]
	private void Update()
	{
	}

	[Token(Token = "0x6004694")]
	[Address(RVA = "0x5B711A0", Offset = "0x5B701A0", VA = "0x5B711A0", Slot = "8")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004695")]
	[Address(RVA = "0x5B711C0", Offset = "0x5B701C0", VA = "0x5B711C0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004696")]
	[Address(RVA = "0x5B71250", Offset = "0x5B70250", VA = "0x5B71250", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004697")]
	[Address(RVA = "0x5B71260", Offset = "0x5B70260", VA = "0x5B71260", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004698")]
	[Address(RVA = "0x5B71150", Offset = "0x5B70150", VA = "0x5B71150")]
	private void ReleasePointer()
	{
	}

	[Token(Token = "0x6004699")]
	[Address(RVA = "0x5B71380", Offset = "0x5B70380", VA = "0x5B71380", Slot = "7")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600469A")]
	[Address(RVA = "0x5B70DC0", Offset = "0x5B6FDC0", VA = "0x5B70DC0")]
	private void SetOpen(bool open)
	{
	}

	[Token(Token = "0x600469B")]
	[Address(RVA = "0x5B71130", Offset = "0x5B70130", VA = "0x5B71130")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
	}

	[Token(Token = "0x600469C")]
	[Address(RVA = "0x5B714E0", Offset = "0x5B704E0", VA = "0x5B714E0")]
	private MobileInputButton GetSlideButton(Vector2 screenPosition)
	{
		return null;
	}

	[Token(Token = "0x600469D")]
	[Address(RVA = "0x5B713A0", Offset = "0x5B703A0", VA = "0x5B713A0")]
	private void SetActiveSlideButton(MobileInputButton button)
	{
	}

	[Token(Token = "0x600469E")]
	[Address(RVA = "0x5B718D0", Offset = "0x5B708D0", VA = "0x5B718D0")]
	private void SetSlideButtonPressed(MobileInputButton button, bool pressed)
	{
	}

	[Token(Token = "0x600469F")]
	[Address(RVA = "0x5B712D0", Offset = "0x5B702D0", VA = "0x5B712D0")]
	private void TriggerActiveSlideButton()
	{
	}

	[Token(Token = "0x60046A0")]
	[Address(RVA = "0x5B71600", Offset = "0x5B70600", VA = "0x5B71600")]
	private bool ContainsScreenPoint(RectTransform rectTransform, Vector2 screenPosition, float padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60046A1")]
	[Address(RVA = "0x5B71060", Offset = "0x5B70060", VA = "0x5B71060")]
	private void ResetPress()
	{
	}

	[Token(Token = "0x60046A2")]
	[Address(RVA = "0x5B71910", Offset = "0x5B70910", VA = "0x5B71910")]
	public MobileInputPopupButton()
	{
	}
}
