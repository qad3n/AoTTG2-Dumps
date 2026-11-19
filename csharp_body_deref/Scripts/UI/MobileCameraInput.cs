// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileCameraInput
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileCameraInput.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000747")]
internal static class MobileCameraInput
{
	[Token(Token = "0x40024A8")]
	private const float CharacterEditorTouchRotationScale = 0.05f;

	[Token(Token = "0x40024A9")]
	[FieldOffset(Offset = "0x0")]
	private static bool _gyroWasEnabled;

	[Token(Token = "0x40024AA")]
	[FieldOffset(Offset = "0x4")]
	private static Vector2 _originalVirtualCursor;

	[Token(Token = "0x60046AC")]
	[Address(RVA = "0x5B71D70", Offset = "0x5B70D70", VA = "0x5B71D70")]
	public static void UpdateGyroscopeState()
	{
	}

	[Token(Token = "0x60046AD")]
	[Address(RVA = "0x5B71E60", Offset = "0x5B70E60", VA = "0x5B71E60")]
	public static void GetLookInput(float sensitivity, int invertY, float mobileLookMultiplier, out float inputX, out float inputY)
	{
	}

	[Token(Token = "0x60046AE")]
	[Address(RVA = "0x5B721A0", Offset = "0x5B711A0", VA = "0x5B721A0")]
	public static void GetFreeCamLookInput(float camSpeed, out float inputX, out float inputY)
	{
	}

	[Token(Token = "0x60046AF")]
	[Address(RVA = "0x5B723A0", Offset = "0x5B713A0", VA = "0x5B723A0")]
	public static bool TryApplyOriginalRelativeMovement(Transform cameraTransform, float sensitivity, int invertY, float mobileLookMultiplier, float deadzone, float cameraSpeed)
	{
		return default(bool);
	}

	[Token(Token = "0x60046B0")]
	[Address(RVA = "0x5B727C0", Offset = "0x5B717C0", VA = "0x5B727C0")]
	public static bool TryHandleTouchRotation(Transform cameraTransform, Vector3 anchorPoint, CharacterEditorMenu menu)
	{
		return default(bool);
	}

	[Token(Token = "0x60046B1")]
	[Address(RVA = "0x5B72B40", Offset = "0x5B71B40", VA = "0x5B72B40")]
	public static Vector3 GetOriginalVirtualCursorPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60046B2")]
	[Address(RVA = "0x5B72B80", Offset = "0x5B71B80", VA = "0x5B72B80")]
	public static void ResetOriginalVirtualCursor()
	{
	}

	[Token(Token = "0x60046B3")]
	[Address(RVA = "0x5B727A0", Offset = "0x5B717A0", VA = "0x5B727A0")]
	private static float GetSensitivityDeltaTime(float sensitivity)
	{
		return default(float);
	}

	[Token(Token = "0x60046B4")]
	[Address(RVA = "0x5B72AE0", Offset = "0x5B71AE0", VA = "0x5B72AE0")]
	private static bool IsInsidePreviewArea(CharacterEditorMenu menu, float screenX)
	{
		return default(bool);
	}

	[Token(Token = "0x60046B5")]
	[Address(RVA = "0x5B72090", Offset = "0x5B71090", VA = "0x5B72090")]
	private static Vector2 GetGyroscopeLookDelta()
	{
		return default(Vector2);
	}
}
