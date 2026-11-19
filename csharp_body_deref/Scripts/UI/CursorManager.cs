// ==================== AoTTG2 cross-reference ====================
// Type: UI.CursorManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CursorManager.c
// Prior real C# source (older reference): Assets/Scripts/UI/CursorManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007D4")]
[DefaultExecutionOrder(-100)]
internal class CursorManager : MonoBehaviour
{
	[Token(Token = "0x4002746")]
	[FieldOffset(Offset = "0x0")]
	public static CursorState State;

	[Token(Token = "0x4002747")]
	[FieldOffset(Offset = "0x8")]
	private static CursorManager _instance;

	[Token(Token = "0x4002748")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<CrosshairStyle, Texture2D> _crosshairs;

	[Token(Token = "0x4002749")]
	[FieldOffset(Offset = "0x20")]
	private bool _ready;

	[Token(Token = "0x400274A")]
	[FieldOffset(Offset = "0x21")]
	private bool _crosshairWhite;

	[Token(Token = "0x400274B")]
	[FieldOffset(Offset = "0x22")]
	private bool _lastCrosshairWhite;

	[Token(Token = "0x400274C")]
	[FieldOffset(Offset = "0x28")]
	private string _crosshairText;

	[Token(Token = "0x400274D")]
	[FieldOffset(Offset = "0x30")]
	private bool _forceNextCrosshairUpdate;

	[Token(Token = "0x400274E")]
	[FieldOffset(Offset = "0x34")]
	private CrosshairStyle _lastCrosshairStyle;

	[Token(Token = "0x400274F")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _arrowLeftPosition;

	[Token(Token = "0x4002750")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _arrowRightPosition;

	[Token(Token = "0x4002751")]
	[FieldOffset(Offset = "0x50")]
	private Quaternion _arrowLeftRotation;

	[Token(Token = "0x4002752")]
	[FieldOffset(Offset = "0x60")]
	private Quaternion _arrowRightRotation;

	[Token(Token = "0x4002753")]
	[FieldOffset(Offset = "0x70")]
	private bool _arrowLeftWhite;

	[Token(Token = "0x4002754")]
	[FieldOffset(Offset = "0x71")]
	private bool _arrowRightWhite;

	[Token(Token = "0x4002755")]
	[FieldOffset(Offset = "0x18")]
	private static Vector3 _wowCursorPosition;

	[Token(Token = "0x4002756")]
	[FieldOffset(Offset = "0x24")]
	private static int _wowCursorFrame;

	[Token(Token = "0x4002757")]
	private const float MouseAxisSensitivity = 0.1f;

	[Token(Token = "0x4002758")]
	private const float LegacyMouseDeltaScale = 1f;

	[Token(Token = "0x4002759")]
	[FieldOffset(Offset = "0x28")]
	private static bool _wowVirtualCursorActive;

	[Token(Token = "0x17000D3E")]
	private static bool UsesWOWCursor
	{
		[Token(Token = "0x6004B95")]
		[Address(RVA = "0x5BE52B0", Offset = "0x5BE42B0", VA = "0x5BE52B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D3F")]
	private static bool UsesCenteredCursor
	{
		[Token(Token = "0x6004B96")]
		[Address(RVA = "0x5BE5690", Offset = "0x5BE4690", VA = "0x5BE5690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004B92")]
	[Address(RVA = "0x5BE4F80", Offset = "0x5BE3F80", VA = "0x5BE4F80")]
	private static void UpdateGameplayCursorLock()
	{
	}

	[Token(Token = "0x6004B93")]
	[Address(RVA = "0x5BE5640", Offset = "0x5BE4640", VA = "0x5BE5640")]
	private static void ResetWOWCursor()
	{
	}

	[Token(Token = "0x6004B94")]
	[Address(RVA = "0x5BE5390", Offset = "0x5BE4390", VA = "0x5BE5390")]
	private static void UpdateWOWCursorPosition(bool rotating)
	{
	}

	[Token(Token = "0x6004B97")]
	[Address(RVA = "0x5BE5720", Offset = "0x5BE4720", VA = "0x5BE5720")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004B98")]
	[Address(RVA = "0x5BE5C30", Offset = "0x5BE4C30", VA = "0x5BE5C30")]
	private void Update()
	{
	}

	[Token(Token = "0x6004B99")]
	[Address(RVA = "0x5BE5C90", Offset = "0x5BE4C90", VA = "0x5BE5C90")]
	private static void UpdateCursorState()
	{
	}

	[Token(Token = "0x6004B9A")]
	[Address(RVA = "0x5BE65C0", Offset = "0x5BE55C0", VA = "0x5BE65C0")]
	public static void RefreshCursorLock()
	{
	}

	[Token(Token = "0x6004B9B")]
	[Address(RVA = "0x5BE6720", Offset = "0x5BE5720", VA = "0x5BE6720")]
	private void OnApplicationFocus(bool focused)
	{
	}

	[Token(Token = "0x6004B9C")]
	[Address(RVA = "0x5BE6140", Offset = "0x5BE5140", VA = "0x5BE6140")]
	public static void SetPointer(bool force = false)
	{
	}

	[Token(Token = "0x6004B9D")]
	[Address(RVA = "0x5BE6420", Offset = "0x5BE5420", VA = "0x5BE6420")]
	public static void SetHidden(bool force = false)
	{
	}

	[Token(Token = "0x6004B9E")]
	[Address(RVA = "0x5BE6280", Offset = "0x5BE5280", VA = "0x5BE6280")]
	public static void SetCrosshair(bool force = false)
	{
	}

	[Token(Token = "0x6004B9F")]
	[Address(RVA = "0x5BE6780", Offset = "0x5BE5780", VA = "0x5BE6780")]
	public static void SetCrosshairColor(bool white)
	{
	}

	[Token(Token = "0x6004BA0")]
	[Address(RVA = "0x5BE6830", Offset = "0x5BE5830", VA = "0x5BE6830")]
	public static void SetCrosshairText(string text)
	{
	}

	[Token(Token = "0x6004BA1")]
	[Address(RVA = "0x5BE68C0", Offset = "0x5BE58C0", VA = "0x5BE68C0")]
	public static void SetHookArrow(bool left, Vector3 position, Quaternion rotation, bool white)
	{
	}

	[Token(Token = "0x6004BA2")]
	[Address(RVA = "0x5BE6A20", Offset = "0x5BE5A20", VA = "0x5BE6A20")]
	public static void UpdateHookArrows(Image hookArrowLeft, Image hookArrowRight)
	{
	}

	[Token(Token = "0x6004BA3")]
	[Address(RVA = "0x5BE6F40", Offset = "0x5BE5F40", VA = "0x5BE6F40")]
	public static void UpdateCrosshair(RawImage crosshairImageWhite, RawImage crosshairImageRed, Text crosshairLabelWhite, Text crosshairLabelRed, bool force = false)
	{
	}

	[Token(Token = "0x6004BA4")]
	[Address(RVA = "0x5BE7510", Offset = "0x5BE6510", VA = "0x5BE7510")]
	public static Vector3 GetInGameMousePosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004BA5")]
	[Address(RVA = "0x5BE7700", Offset = "0x5BE6700", VA = "0x5BE7700")]
	public CursorManager()
	{
	}
}
