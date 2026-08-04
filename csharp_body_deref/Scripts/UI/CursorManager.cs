// ==================== AoTTG2 cross-reference ====================
// Type: UI.CursorManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CursorManager.c
// Prior real C# source (older reference): Assets/Scripts/UI/CursorManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005DA")]
internal class CursorManager : MonoBehaviour
{
	[Token(Token = "0x4001C52")]
	[FieldOffset(Offset = "0x0")]
	public static CursorState State;

	[Token(Token = "0x4001C53")]
	[FieldOffset(Offset = "0x8")]
	private static CursorManager _instance;

	[Token(Token = "0x4001C54")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<CrosshairStyle, Texture2D> _crosshairs;

	[Token(Token = "0x4001C55")]
	[FieldOffset(Offset = "0x20")]
	private bool _ready;

	[Token(Token = "0x4001C56")]
	[FieldOffset(Offset = "0x21")]
	private bool _crosshairWhite;

	[Token(Token = "0x4001C57")]
	[FieldOffset(Offset = "0x22")]
	private bool _lastCrosshairWhite;

	[Token(Token = "0x4001C58")]
	[FieldOffset(Offset = "0x28")]
	private string _crosshairText;

	[Token(Token = "0x4001C59")]
	[FieldOffset(Offset = "0x30")]
	private bool _forceNextCrosshairUpdate;

	[Token(Token = "0x4001C5A")]
	[FieldOffset(Offset = "0x34")]
	private CrosshairStyle _lastCrosshairStyle;

	[Token(Token = "0x4001C5B")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _arrowLeftPosition;

	[Token(Token = "0x4001C5C")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _arrowRightPosition;

	[Token(Token = "0x4001C5D")]
	[FieldOffset(Offset = "0x50")]
	private Quaternion _arrowLeftRotation;

	[Token(Token = "0x4001C5E")]
	[FieldOffset(Offset = "0x60")]
	private Quaternion _arrowRightRotation;

	[Token(Token = "0x4001C5F")]
	[FieldOffset(Offset = "0x70")]
	private bool _arrowLeftWhite;

	[Token(Token = "0x4001C60")]
	[FieldOffset(Offset = "0x71")]
	private bool _arrowRightWhite;

	[Token(Token = "0x6003BCD")]
	[Address(RVA = "0x42872A0", Offset = "0x42872A0", VA = "0x42872A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003BCE")]
	[Address(RVA = "0x4287880", Offset = "0x4287880", VA = "0x4287880")]
	private void Update()
	{
	}

	[Token(Token = "0x6003BCF")]
	[Address(RVA = "0x4288240", Offset = "0x4288240", VA = "0x4288240")]
	public static void RefreshCursorLock()
	{
	}

	[Token(Token = "0x6003BD0")]
	[Address(RVA = "0x4287D70", Offset = "0x4287D70", VA = "0x4287D70")]
	public static void SetPointer(bool force = false)
	{
	}

	[Token(Token = "0x6003BD1")]
	[Address(RVA = "0x4288030", Offset = "0x4288030", VA = "0x4288030")]
	public static void SetHidden(bool force = false)
	{
	}

	[Token(Token = "0x6003BD2")]
	[Address(RVA = "0x4287E20", Offset = "0x4287E20", VA = "0x4287E20")]
	public static void SetCrosshair(bool force = false)
	{
	}

	[Token(Token = "0x6003BD3")]
	[Address(RVA = "0x4288250", Offset = "0x4288250", VA = "0x4288250")]
	public static void SetCrosshairColor(bool white)
	{
	}

	[Token(Token = "0x6003BD4")]
	[Address(RVA = "0x4288300", Offset = "0x4288300", VA = "0x4288300")]
	public static void SetCrosshairText(string text)
	{
	}

	[Token(Token = "0x6003BD5")]
	[Address(RVA = "0x4288390", Offset = "0x4288390", VA = "0x4288390")]
	public static void SetHookArrow(bool left, Vector3 position, Quaternion rotation, bool white)
	{
	}

	[Token(Token = "0x6003BD6")]
	[Address(RVA = "0x42884E0", Offset = "0x42884E0", VA = "0x42884E0")]
	public static void UpdateHookArrows(Image hookArrowLeft, Image hookArrowRight)
	{
	}

	[Token(Token = "0x6003BD7")]
	[Address(RVA = "0x4288A00", Offset = "0x4288A00", VA = "0x4288A00")]
	public static void UpdateCrosshair(RawImage crosshairImageWhite, RawImage crosshairImageRed, Text crosshairLabelWhite, Text crosshairLabelRed, bool force = false)
	{
	}

	[Token(Token = "0x6003BD8")]
	[Address(RVA = "0x4289020", Offset = "0x4289020", VA = "0x4289020")]
	public static Vector3 GetInGameMousePosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003BD9")]
	[Address(RVA = "0x42890E0", Offset = "0x42890E0", VA = "0x42890E0")]
	public CursorManager()
	{
	}
}
