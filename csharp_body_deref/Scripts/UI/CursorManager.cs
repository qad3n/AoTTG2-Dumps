using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000595")]
internal class CursorManager : MonoBehaviour
{
	[Token(Token = "0x4001B3F")]
	[FieldOffset(Offset = "0x0")]
	public static CursorState State;

	[Token(Token = "0x4001B40")]
	[FieldOffset(Offset = "0x8")]
	private static CursorManager _instance;

	[Token(Token = "0x4001B41")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<CrosshairStyle, Texture2D> _crosshairs;

	[Token(Token = "0x4001B42")]
	[FieldOffset(Offset = "0x20")]
	private bool _ready;

	[Token(Token = "0x4001B43")]
	[FieldOffset(Offset = "0x21")]
	private bool _crosshairWhite;

	[Token(Token = "0x4001B44")]
	[FieldOffset(Offset = "0x22")]
	private bool _lastCrosshairWhite;

	[Token(Token = "0x4001B45")]
	[FieldOffset(Offset = "0x28")]
	private string _crosshairText;

	[Token(Token = "0x4001B46")]
	[FieldOffset(Offset = "0x30")]
	private bool _forceNextCrosshairUpdate;

	[Token(Token = "0x4001B47")]
	[FieldOffset(Offset = "0x34")]
	private CrosshairStyle _lastCrosshairStyle;

	[Token(Token = "0x4001B48")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _arrowLeftPosition;

	[Token(Token = "0x4001B49")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _arrowRightPosition;

	[Token(Token = "0x4001B4A")]
	[FieldOffset(Offset = "0x50")]
	private Quaternion _arrowLeftRotation;

	[Token(Token = "0x4001B4B")]
	[FieldOffset(Offset = "0x60")]
	private Quaternion _arrowRightRotation;

	[Token(Token = "0x4001B4C")]
	[FieldOffset(Offset = "0x70")]
	private bool _arrowLeftWhite;

	[Token(Token = "0x4001B4D")]
	[FieldOffset(Offset = "0x71")]
	private bool _arrowRightWhite;

	[Token(Token = "0x60039BE")]
	[Address(RVA = "0x3F79890", Offset = "0x3F79890", VA = "0x3F79890")]
	public static void Init()
	{
	}

	[Token(Token = "0x60039BF")]
	[Address(RVA = "0x3F79E70", Offset = "0x3F79E70", VA = "0x3F79E70")]
	private void Update()
	{
	}

	[Token(Token = "0x60039C0")]
	[Address(RVA = "0x3F7A830", Offset = "0x3F7A830", VA = "0x3F7A830")]
	public static void RefreshCursorLock()
	{
	}

	[Token(Token = "0x60039C1")]
	[Address(RVA = "0x3F7A360", Offset = "0x3F7A360", VA = "0x3F7A360")]
	public static void SetPointer(bool force = false)
	{
	}

	[Token(Token = "0x60039C2")]
	[Address(RVA = "0x3F7A620", Offset = "0x3F7A620", VA = "0x3F7A620")]
	public static void SetHidden(bool force = false)
	{
	}

	[Token(Token = "0x60039C3")]
	[Address(RVA = "0x3F7A410", Offset = "0x3F7A410", VA = "0x3F7A410")]
	public static void SetCrosshair(bool force = false)
	{
	}

	[Token(Token = "0x60039C4")]
	[Address(RVA = "0x3F7A840", Offset = "0x3F7A840", VA = "0x3F7A840")]
	public static void SetCrosshairColor(bool white)
	{
	}

	[Token(Token = "0x60039C5")]
	[Address(RVA = "0x3F7A8F0", Offset = "0x3F7A8F0", VA = "0x3F7A8F0")]
	public static void SetCrosshairText(string text)
	{
	}

	[Token(Token = "0x60039C6")]
	[Address(RVA = "0x3F7A980", Offset = "0x3F7A980", VA = "0x3F7A980")]
	public static void SetHookArrow(bool left, Vector3 position, Quaternion rotation, bool white)
	{
	}

	[Token(Token = "0x60039C7")]
	[Address(RVA = "0x3F7AAD0", Offset = "0x3F7AAD0", VA = "0x3F7AAD0")]
	public static void UpdateHookArrows(Image hookArrowLeft, Image hookArrowRight)
	{
	}

	[Token(Token = "0x60039C8")]
	[Address(RVA = "0x3F7AFF0", Offset = "0x3F7AFF0", VA = "0x3F7AFF0")]
	public static void UpdateCrosshair(RawImage crosshairImageWhite, RawImage crosshairImageRed, Text crosshairLabelWhite, Text crosshairLabelRed, bool force = false)
	{
	}

	[Token(Token = "0x60039C9")]
	[Address(RVA = "0x3F7B610", Offset = "0x3F7B610", VA = "0x3F7B610")]
	public static Vector3 GetInGameMousePosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60039CA")]
	[Address(RVA = "0x3F7B6D0", Offset = "0x3F7B6D0", VA = "0x3F7B6D0")]
	public CursorManager()
	{
	}
}
