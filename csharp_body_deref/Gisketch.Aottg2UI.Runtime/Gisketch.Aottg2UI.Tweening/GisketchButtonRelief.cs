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
	[Token(Token = "0x4000060")]
	private const float DefaultPressDepth = 0.1f;

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RectTransform _face;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectMask2D _pressMask;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Selectable _selectable;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private float _baseRelief;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private float _pressDepth;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _ownsMaterial;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _hovered;

	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x52")]
	private bool _pressed;

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x18846F0", Offset = "0x1882CF0", VA = "0x1818846F0")]
	public void Setup(Image image, RectTransform face, float relief, [Optional] RectMask2D pressMask, [Optional] float? pressDepth)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x1883BF0", Offset = "0x18821F0", VA = "0x181883BF0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x1883C60", Offset = "0x1882260", VA = "0x181883C60", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x1883B70", Offset = "0x1882170", VA = "0x181883B70", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x1883CE0", Offset = "0x18822E0", VA = "0x181883CE0", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x1883E30", Offset = "0x1882430", VA = "0x181883E30", Slot = "8")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x18838F0", Offset = "0x1881EF0", VA = "0x1818838F0", Slot = "9")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x1883F00", Offset = "0x1882500", VA = "0x181883F00", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x1884020", Offset = "0x1882620", VA = "0x181884020")]
	public void Press()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x18834A0", Offset = "0x1881AA0", VA = "0x1818834A0")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x18834C0", Offset = "0x1881AC0", VA = "0x1818834C0")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x1883340", Offset = "0x1881940", VA = "0x181883340")]
	private Tween AnimateStep(float reliefStart, float reliefEnd, Vector2 offsetStart, Vector2 offsetEnd, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x18836F0", Offset = "0x1881CF0", VA = "0x1818836F0")]
	private float CurrentRelief()
	{
		return default(float);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x1884570", Offset = "0x1882B70", VA = "0x181884570")]
	private void SetRelief(float value)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x18837B0", Offset = "0x1881DB0", VA = "0x1818837B0")]
	private Vector2 FaceOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x1883860", Offset = "0x1881E60", VA = "0x181883860")]
	private Vector2 HoverOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x1883F10", Offset = "0x1882510", VA = "0x181883F10")]
	private Vector2 PressOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x1884370", Offset = "0x1882970", VA = "0x181884370")]
	private float ReleaseRelief()
	{
		return default(float);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x1884320", Offset = "0x1882920", VA = "0x181884320")]
	private Vector2 ReleaseOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x1884390", Offset = "0x1882990", VA = "0x181884390")]
	private void Release()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x1884840", Offset = "0x1882E40", VA = "0x181884840")]
	private float ShadowSize()
	{
		return default(float);
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x18844E0", Offset = "0x1882AE0", VA = "0x1818844E0")]
	private void SetPressMask(bool enabled)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x1883660", Offset = "0x1881C60", VA = "0x181883660")]
	private bool CanInteract()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x1883A10", Offset = "0x1882010", VA = "0x181883A10")]
	private void ResetPressVisual()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x1883A10", Offset = "0x1882010", VA = "0x181883A10")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x1883970", Offset = "0x1881F70", VA = "0x181883970")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x1884930", Offset = "0x1882F30", VA = "0x181884930")]
	public GisketchButtonRelief()
	{
	}
}
