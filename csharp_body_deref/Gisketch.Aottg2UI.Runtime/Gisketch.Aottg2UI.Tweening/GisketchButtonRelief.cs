// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchButtonRelief
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Tweening;

[Token(Token = "0x200000B")]
public sealed class GisketchButtonRelief : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, ISelectHandler, IDeselectHandler, ISubmitHandler
{
	[Token(Token = "0x4000036")]
	private const float DefaultPressDepth = 0.1f;

	[Token(Token = "0x4000037")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x4000038")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000039")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RectTransform _face;

	[Token(Token = "0x400003A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectMask2D _pressMask;

	[Token(Token = "0x400003B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Selectable _selectable;

	[Token(Token = "0x400003C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private float _baseRelief;

	[Token(Token = "0x400003D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private float _pressDepth;

	[Token(Token = "0x400003E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _ownsMaterial;

	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _hovered;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x52")]
	private bool _pressed;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3A2D9E0", Offset = "0x3A2D9E0", VA = "0x3A2D9E0")]
	public void Setup(Image image, RectTransform face, float relief, [Optional] RectMask2D pressMask, [Optional] float? pressDepth)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3A2DC00", Offset = "0x3A2DC00", VA = "0x3A2DC00", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3A2DE20", Offset = "0x3A2DE20", VA = "0x3A2DE20", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3A2DEA0", Offset = "0x3A2DEA0", VA = "0x3A2DEA0", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3A2E310", Offset = "0x3A2E310", VA = "0x3A2E310", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3A2E510", Offset = "0x3A2E510", VA = "0x3A2E510", Slot = "8")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3A2E710", Offset = "0x3A2E710", VA = "0x3A2E710", Slot = "9")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3A2E780", Offset = "0x3A2E780", VA = "0x3A2E780", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3A2E790", Offset = "0x3A2E790", VA = "0x3A2E790")]
	public void Press()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3A2DE10", Offset = "0x3A2DE10", VA = "0x3A2DE10")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3A2E1B0", Offset = "0x3A2E1B0", VA = "0x3A2E1B0")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3A2EE60", Offset = "0x3A2EE60", VA = "0x3A2EE60")]
	private Tween AnimateStep(float reliefStart, float reliefEnd, Vector2 offsetStart, Vector2 offsetEnd, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3A2ED00", Offset = "0x3A2ED00", VA = "0x3A2ED00")]
	private float CurrentRelief()
	{
		return default(float);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3A2EFA0", Offset = "0x3A2EFA0", VA = "0x3A2EFA0")]
	private void SetRelief(float value)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3A2EDB0", Offset = "0x3A2EDB0", VA = "0x3A2EDB0")]
	private Vector2 FaceOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3A2DDB0", Offset = "0x3A2DDB0", VA = "0x3A2DDB0")]
	private Vector2 HoverOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3A2E0E0", Offset = "0x3A2E0E0", VA = "0x3A2E0E0")]
	private Vector2 PressOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3A2E0C0", Offset = "0x3A2E0C0", VA = "0x3A2E0C0")]
	private float ReleaseRelief()
	{
		return default(float);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3A2E670", Offset = "0x3A2E670", VA = "0x3A2E670")]
	private Vector2 ReleaseOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3A2E320", Offset = "0x3A2E320", VA = "0x3A2E320")]
	private void Release()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3A2F120", Offset = "0x3A2F120", VA = "0x3A2F120")]
	private float ShadowSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3A2DB80", Offset = "0x3A2DB80", VA = "0x3A2DB80")]
	private void SetPressMask(bool enabled)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3A2DD20", Offset = "0x3A2DD20", VA = "0x3A2DD20")]
	private bool CanInteract()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3A2F1E0", Offset = "0x3A2F1E0", VA = "0x3A2F1E0")]
	private void ResetPressVisual()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3A2F3A0", Offset = "0x3A2F3A0", VA = "0x3A2F3A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3A2F3B0", Offset = "0x3A2F3B0", VA = "0x3A2F3B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3A2F450", Offset = "0x3A2F450", VA = "0x3A2F450")]
	public GisketchButtonRelief()
	{
	}
}
