// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MapEditorCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/MapEditorCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MapEditorCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x200088C")]
internal class MapEditorCamera : BaseCamera
{
	[Token(Token = "0x4002AC3")]
	[FieldOffset(Offset = "0x38")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4002AC4")]
	[FieldOffset(Offset = "0x40")]
	private MapEditorSettings _settings;

	[Token(Token = "0x4002AC5")]
	[FieldOffset(Offset = "0x48")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002AC6")]
	[FieldOffset(Offset = "0x50")]
	private Camera _uiCamera;

	[Token(Token = "0x4002AC7")]
	[FieldOffset(Offset = "0x58")]
	private bool _wasRotating;

	[Token(Token = "0x4002AC8")]
	[FieldOffset(Offset = "0x59")]
	private bool _startDrag;

	[Token(Token = "0x4002AC9")]
	[FieldOffset(Offset = "0x5C")]
	private Vector3 _lastDragPosition;

	[Token(Token = "0x4002ACA")]
	private const float MaxDeltaTime = 1f / 30f;

	[Token(Token = "0x4002ACB")]
	private const float ReferenceScreenHeight = 1080f;

	[Token(Token = "0x60051E8")]
	[Address(RVA = "0x22F6770", Offset = "0x22F4D70", VA = "0x1822F6770")]
	private static float GetClampedDeltaTime()
	{
		return default(float);
	}

	[Token(Token = "0x60051E9")]
	[Address(RVA = "0x22F6790", Offset = "0x22F4D90", VA = "0x1822F6790")]
	private static float GetScreenScale()
	{
		return default(float);
	}

	[Token(Token = "0x60051EA")]
	[Address(RVA = "0x22F6660", Offset = "0x22F4C60", VA = "0x1822F6660", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60051EB")]
	[Address(RVA = "0x22F65E0", Offset = "0x22F4BE0", VA = "0x1822F65E0")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x60051EC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	protected void CreateUICamera()
	{
	}

	[Token(Token = "0x60051ED")]
	[Address(RVA = "0x22F8340", Offset = "0x22F6940", VA = "0x1822F8340")]
	protected void Update()
	{
	}

	[Token(Token = "0x60051EE")]
	[Address(RVA = "0x22F7560", Offset = "0x22F5B60", VA = "0x1822F7560")]
	private void UpdateMovement()
	{
	}

	[Token(Token = "0x60051EF")]
	[Address(RVA = "0x22F71B0", Offset = "0x22F57B0", VA = "0x1822F71B0")]
	private void UpdateDragMovement(float speed)
	{
	}

	[Token(Token = "0x60051F0")]
	[Address(RVA = "0x22F7F00", Offset = "0x22F6500", VA = "0x1822F7F00")]
	private void UpdateZoomMovement(float speed)
	{
	}

	[Token(Token = "0x60051F1")]
	[Address(RVA = "0x22F7A70", Offset = "0x22F6070", VA = "0x1822F7A70")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x60051F2")]
	[Address(RVA = "0x22F6230", Offset = "0x22F4830", VA = "0x1822F6230")]
	private bool AlignedWithWorldAxis()
	{
		return default(bool);
	}

	[Token(Token = "0x60051F3")]
	[Address(RVA = "0x22F5D10", Offset = "0x22F4310", VA = "0x1822F5D10")]
	private void AlignToWorldAxis()
	{
	}

	[Token(Token = "0x60051F4")]
	[Address(RVA = "0x22F6AE0", Offset = "0x22F50E0", VA = "0x1822F6AE0")]
	private void SnapCameraToAxis(Vector3 direction)
	{
	}

	[Token(Token = "0x60051F5")]
	[Address(RVA = "0x22F67C0", Offset = "0x22F4DC0", VA = "0x1822F67C0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60051F6")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MapEditorCamera()
	{
	}
}
