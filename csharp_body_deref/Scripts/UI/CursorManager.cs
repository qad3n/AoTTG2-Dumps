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

[Token(Token = "0x200072E")]
[DefaultExecutionOrder(-100)]
internal class CursorManager : MonoBehaviour
{
	[Token(Token = "0x40023D9")]
	[FieldOffset(Offset = "0x0")]
	public static CursorState State;

	[Token(Token = "0x40023DA")]
	[FieldOffset(Offset = "0x8")]
	private static CursorManager _instance;

	[Token(Token = "0x40023DB")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<CrosshairStyle, Texture2D> _crosshairs;

	[Token(Token = "0x40023DC")]
	[FieldOffset(Offset = "0x20")]
	private bool _ready;

	[Token(Token = "0x40023DD")]
	[FieldOffset(Offset = "0x21")]
	private bool _crosshairWhite;

	[Token(Token = "0x40023DE")]
	[FieldOffset(Offset = "0x22")]
	private bool _lastCrosshairWhite;

	[Token(Token = "0x40023DF")]
	[FieldOffset(Offset = "0x28")]
	private string _crosshairText;

	[Token(Token = "0x40023E0")]
	[FieldOffset(Offset = "0x30")]
	private bool _forceNextCrosshairUpdate;

	[Token(Token = "0x40023E1")]
	[FieldOffset(Offset = "0x34")]
	private CrosshairStyle _lastCrosshairStyle;

	[Token(Token = "0x40023E2")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _arrowLeftPosition;

	[Token(Token = "0x40023E3")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _arrowRightPosition;

	[Token(Token = "0x40023E4")]
	[FieldOffset(Offset = "0x50")]
	private Quaternion _arrowLeftRotation;

	[Token(Token = "0x40023E5")]
	[FieldOffset(Offset = "0x60")]
	private Quaternion _arrowRightRotation;

	[Token(Token = "0x40023E6")]
	[FieldOffset(Offset = "0x70")]
	private bool _arrowLeftWhite;

	[Token(Token = "0x40023E7")]
	[FieldOffset(Offset = "0x71")]
	private bool _arrowRightWhite;

	[Token(Token = "0x40023E8")]
	[FieldOffset(Offset = "0x18")]
	private static Vector3 _wowCursorPosition;

	[Token(Token = "0x40023E9")]
	[FieldOffset(Offset = "0x24")]
	private static int _wowCursorFrame;

	[Token(Token = "0x40023EA")]
	private const float MouseAxisSensitivity = 0.1f;

	[Token(Token = "0x40023EB")]
	private const float LegacyMouseDeltaScale = 0.5f;

	[Token(Token = "0x40023EC")]
	[FieldOffset(Offset = "0x28")]
	private static bool _wowVirtualCursorActive;

	[Token(Token = "0x17000CBB")]
	private static bool UsesWOWCursor
	{
		[Token(Token = "0x6004679")]
		[Address(RVA = "0x2209820", Offset = "0x2207E20", VA = "0x182209820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CBC")]
	private static bool UsesCenteredCursor
	{
		[Token(Token = "0x600467A")]
		[Address(RVA = "0x2209780", Offset = "0x2207D80", VA = "0x182209780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004676")]
	[Address(RVA = "0x2208C60", Offset = "0x2207260", VA = "0x182208C60")]
	private static void UpdateGameplayCursorLock()
	{
	}

	[Token(Token = "0x6004677")]
	[Address(RVA = "0x2207750", Offset = "0x2205D50", VA = "0x182207750")]
	private static void ResetWOWCursor()
	{
	}

	[Token(Token = "0x6004678")]
	[Address(RVA = "0x22093D0", Offset = "0x22079D0", VA = "0x1822093D0")]
	private static void UpdateWOWCursorPosition(bool rotating)
	{
	}

	[Token(Token = "0x600467B")]
	[Address(RVA = "0x2207150", Offset = "0x2205750", VA = "0x182207150")]
	public static void Init()
	{
	}

	[Token(Token = "0x600467C")]
	[Address(RVA = "0x2209660", Offset = "0x2207C60", VA = "0x182209660")]
	private void Update()
	{
	}

	[Token(Token = "0x600467D")]
	[Address(RVA = "0x22085C0", Offset = "0x2206BC0", VA = "0x1822085C0")]
	private static void UpdateCursorState()
	{
	}

	[Token(Token = "0x600467E")]
	[Address(RVA = "0x2207620", Offset = "0x2205C20", VA = "0x182207620")]
	public static void RefreshCursorLock()
	{
	}

	[Token(Token = "0x600467F")]
	[Address(RVA = "0x22075C0", Offset = "0x2205BC0", VA = "0x1822075C0")]
	private void OnApplicationFocus(bool focused)
	{
	}

	[Token(Token = "0x6004680")]
	[Address(RVA = "0x2207D10", Offset = "0x2206310", VA = "0x182207D10")]
	public static void SetPointer(bool force = false)
	{
	}

	[Token(Token = "0x6004681")]
	[Address(RVA = "0x2207A40", Offset = "0x2206040", VA = "0x182207A40")]
	public static void SetHidden(bool force = false)
	{
	}

	[Token(Token = "0x6004682")]
	[Address(RVA = "0x22078C0", Offset = "0x2205EC0", VA = "0x1822078C0")]
	public static void SetCrosshair(bool force = false)
	{
	}

	[Token(Token = "0x6004683")]
	[Address(RVA = "0x22077C0", Offset = "0x2205DC0", VA = "0x1822077C0")]
	public static void SetCrosshairColor(bool white)
	{
	}

	[Token(Token = "0x6004684")]
	[Address(RVA = "0x2207850", Offset = "0x2205E50", VA = "0x182207850")]
	public static void SetCrosshairText(string text)
	{
	}

	[Token(Token = "0x6004685")]
	[Address(RVA = "0x2207BC0", Offset = "0x22061C0", VA = "0x182207BC0")]
	public static void SetHookArrow(bool left, Vector3 position, Quaternion rotation, bool white)
	{
	}

	[Token(Token = "0x6004686")]
	[Address(RVA = "0x2208E70", Offset = "0x2207470", VA = "0x182208E70")]
	public static void UpdateHookArrows(Image hookArrowLeft, Image hookArrowRight)
	{
	}

	[Token(Token = "0x6004687")]
	[Address(RVA = "0x2207E20", Offset = "0x2206420", VA = "0x182207E20")]
	public static void UpdateCrosshair(RawImage crosshairImageWhite, RawImage crosshairImageRed, Text crosshairLabelWhite, Text crosshairLabelRed, bool force = false)
	{
	}

	[Token(Token = "0x6004688")]
	[Address(RVA = "0x2206FA0", Offset = "0x22055A0", VA = "0x182206FA0")]
	public static Vector3 GetInGameMousePosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004689")]
	[Address(RVA = "0x2209740", Offset = "0x2207D40", VA = "0x182209740")]
	public CursorManager()
	{
	}
}
