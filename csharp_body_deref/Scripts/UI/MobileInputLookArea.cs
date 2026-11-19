// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLookArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLookArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000742")]
public class MobileInputLookArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x400248D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<MobileInputLookArea> ActiveLookAreas;

	[Token(Token = "0x400248E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float _sensitivity;

	[Token(Token = "0x400248F")]
	[FieldOffset(Offset = "0x24")]
	private int _pointerId;

	[Token(Token = "0x4002490")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _lastScreenPosition;

	[Token(Token = "0x4002491")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lookVelocity;

	[Token(Token = "0x4002492")]
	[FieldOffset(Offset = "0x38")]
	private bool _pressed;

	[Token(Token = "0x4002493")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _rectTransform;

	[Token(Token = "0x6004678")]
	[Address(RVA = "0x5B70050", Offset = "0x5B6F050", VA = "0x5B70050")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004679")]
	[Address(RVA = "0x5B700A0", Offset = "0x5B6F0A0", VA = "0x5B700A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600467A")]
	[Address(RVA = "0x5B701E0", Offset = "0x5B6F1E0", VA = "0x5B701E0")]
	public void Setup(float sensitivity)
	{
	}

	[Token(Token = "0x600467B")]
	[Address(RVA = "0x5B701F0", Offset = "0x5B6F1F0", VA = "0x5B701F0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600467C")]
	[Address(RVA = "0x5B70350", Offset = "0x5B6F350", VA = "0x5B70350")]
	private void Update()
	{
	}

	[Token(Token = "0x600467D")]
	[Address(RVA = "0x5B70530", Offset = "0x5B6F530", VA = "0x5B70530", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600467E")]
	[Address(RVA = "0x5B70550", Offset = "0x5B6F550", VA = "0x5B70550", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600467F")]
	[Address(RVA = "0x5B70610", Offset = "0x5B6F610", VA = "0x5B70610", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004680")]
	[Address(RVA = "0x5B70620", Offset = "0x5B6F620", VA = "0x5B70620", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004681")]
	[Address(RVA = "0x5B70690", Offset = "0x5B6F690", VA = "0x5B70690")]
	public static void ForwardPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004682")]
	[Address(RVA = "0x5B70910", Offset = "0x5B6F910", VA = "0x5B70910")]
	public static void ForwardPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004683")]
	[Address(RVA = "0x5B707B0", Offset = "0x5B6F7B0", VA = "0x5B707B0")]
	private static MobileInputLookArea GetLookAreaAt(Vector2 screenPosition, Camera eventCamera)
	{
		return null;
	}

	[Token(Token = "0x6004684")]
	[Address(RVA = "0x5B70A00", Offset = "0x5B6FA00", VA = "0x5B70A00")]
	private static MobileInputLookArea GetLookAreaForPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6004685")]
	[Address(RVA = "0x5B70B50", Offset = "0x5B6FB50", VA = "0x5B70B50")]
	private bool IsScreenPointInside(Vector2 screenPosition, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6004686")]
	[Address(RVA = "0x5B705C0", Offset = "0x5B6F5C0", VA = "0x5B705C0")]
	private void BeginLook(int pointerId, Vector2 screenPosition)
	{
	}

	[Token(Token = "0x6004687")]
	[Address(RVA = "0x5B703F0", Offset = "0x5B6F3F0", VA = "0x5B703F0")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
	}

	[Token(Token = "0x6004688")]
	[Address(RVA = "0x5B702F0", Offset = "0x5B6F2F0", VA = "0x5B702F0")]
	private void ResetLook()
	{
	}

	[Token(Token = "0x6004689")]
	[Address(RVA = "0x5B70C20", Offset = "0x5B6FC20", VA = "0x5B70C20")]
	public MobileInputLookArea()
	{
	}
}
