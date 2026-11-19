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

[Token(Token = "0x2000014")]
public sealed class GisketchButtonRelief : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, ISelectHandler, IDeselectHandler, ISubmitHandler
{
	[Token(Token = "0x4000061")]
	private const float DefaultPressDepth = 0.1f;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RectTransform _face;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectMask2D _pressMask;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Selectable _selectable;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private float _baseRelief;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private float _pressDepth;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _ownsMaterial;

	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _hovered;

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x52")]
	private bool _pressed;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5224940", Offset = "0x5223940", VA = "0x5224940")]
	public void Setup(Image image, RectTransform face, float relief, [Optional] RectMask2D pressMask, [Optional] float? pressDepth)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5224B60", Offset = "0x5223B60", VA = "0x5224B60", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x5224D80", Offset = "0x5223D80", VA = "0x5224D80", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5224E00", Offset = "0x5223E00", VA = "0x5224E00", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x52251B0", Offset = "0x52241B0", VA = "0x52251B0", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x52253B0", Offset = "0x52243B0", VA = "0x52253B0", Slot = "8")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x52255B0", Offset = "0x52245B0", VA = "0x52255B0", Slot = "9")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5225620", Offset = "0x5224620", VA = "0x5225620", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x5225630", Offset = "0x5224630", VA = "0x5225630")]
	public void Press()
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5224D70", Offset = "0x5223D70", VA = "0x5224D70")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x5225050", Offset = "0x5224050", VA = "0x5225050")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x5225B70", Offset = "0x5224B70", VA = "0x5225B70")]
	private Tween AnimateStep(float reliefStart, float reliefEnd, Vector2 offsetStart, Vector2 offsetEnd, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x5225A10", Offset = "0x5224A10", VA = "0x5225A10")]
	private float CurrentRelief()
	{
		return default(float);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x5225CB0", Offset = "0x5224CB0", VA = "0x5225CB0")]
	private void SetRelief(float value)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5225AC0", Offset = "0x5224AC0", VA = "0x5225AC0")]
	private Vector2 FaceOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5224D10", Offset = "0x5223D10", VA = "0x5224D10")]
	private Vector2 HoverOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x5224F50", Offset = "0x5223F50", VA = "0x5224F50")]
	private Vector2 PressOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x5224F30", Offset = "0x5223F30", VA = "0x5224F30")]
	private float ReleaseRelief()
	{
		return default(float);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x5225510", Offset = "0x5224510", VA = "0x5225510")]
	private Vector2 ReleaseOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x52251C0", Offset = "0x52241C0", VA = "0x52251C0")]
	private void Release()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5225E30", Offset = "0x5224E30", VA = "0x5225E30")]
	private float ShadowSize()
	{
		return default(float);
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x5224AE0", Offset = "0x5223AE0", VA = "0x5224AE0")]
	private void SetPressMask(bool enabled)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x5224C80", Offset = "0x5223C80", VA = "0x5224C80")]
	private bool CanInteract()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x5225EF0", Offset = "0x5224EF0", VA = "0x5225EF0")]
	private void ResetPressVisual()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x52260B0", Offset = "0x52250B0", VA = "0x52260B0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x52260C0", Offset = "0x52250C0", VA = "0x52260C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5226160", Offset = "0x5225160", VA = "0x5226160")]
	public GisketchButtonRelief()
	{
	}
}
