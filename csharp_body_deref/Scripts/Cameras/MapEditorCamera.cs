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

[Token(Token = "0x2000709")]
internal class MapEditorCamera : BaseCamera
{
	[Token(Token = "0x4002207")]
	[FieldOffset(Offset = "0x38")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4002208")]
	[FieldOffset(Offset = "0x40")]
	private MapEditorSettings _settings;

	[Token(Token = "0x4002209")]
	[FieldOffset(Offset = "0x48")]
	private MapEditorMenu _menu;

	[Token(Token = "0x400220A")]
	[FieldOffset(Offset = "0x50")]
	private Camera _uiCamera;

	[Token(Token = "0x400220B")]
	[FieldOffset(Offset = "0x58")]
	private bool _wasRotating;

	[Token(Token = "0x400220C")]
	[FieldOffset(Offset = "0x59")]
	private bool _startDrag;

	[Token(Token = "0x400220D")]
	[FieldOffset(Offset = "0x5C")]
	private Vector3 _lastDragPosition;

	[Token(Token = "0x400220E")]
	private const float MaxDeltaTime = 1f / 30f;

	[Token(Token = "0x400220F")]
	private const float ReferenceScreenHeight = 1080f;

	[Token(Token = "0x6004593")]
	[Address(RVA = "0x437BC90", Offset = "0x437BC90", VA = "0x437BC90")]
	private static float GetClampedDeltaTime()
	{
		return default(float);
	}

	[Token(Token = "0x6004594")]
	[Address(RVA = "0x437BCB0", Offset = "0x437BCB0", VA = "0x437BCB0")]
	private static float GetScreenScale()
	{
		return default(float);
	}

	[Token(Token = "0x6004595")]
	[Address(RVA = "0x437BCE0", Offset = "0x437BCE0", VA = "0x437BCE0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6004596")]
	[Address(RVA = "0x437BDC0", Offset = "0x437BDC0", VA = "0x437BDC0")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x6004597")]
	[Address(RVA = "0x437BE30", Offset = "0x437BE30", VA = "0x437BE30")]
	protected void CreateUICamera()
	{
	}

	[Token(Token = "0x6004598")]
	[Address(RVA = "0x437BE40", Offset = "0x437BE40", VA = "0x437BE40")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004599")]
	[Address(RVA = "0x437BED0", Offset = "0x437BED0", VA = "0x437BED0")]
	private void UpdateMovement()
	{
	}

	[Token(Token = "0x600459A")]
	[Address(RVA = "0x437C7D0", Offset = "0x437C7D0", VA = "0x437C7D0")]
	private void UpdateDragMovement(float speed)
	{
	}

	[Token(Token = "0x600459B")]
	[Address(RVA = "0x437CAC0", Offset = "0x437CAC0", VA = "0x437CAC0")]
	private void UpdateZoomMovement(float speed)
	{
	}

	[Token(Token = "0x600459C")]
	[Address(RVA = "0x437C3D0", Offset = "0x437C3D0", VA = "0x437C3D0")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x600459D")]
	[Address(RVA = "0x437D4A0", Offset = "0x437D4A0", VA = "0x437D4A0")]
	private bool AlignedWithWorldAxis()
	{
		return default(bool);
	}

	[Token(Token = "0x600459E")]
	[Address(RVA = "0x437D890", Offset = "0x437D890", VA = "0x437D890")]
	private void AlignToWorldAxis()
	{
	}

	[Token(Token = "0x600459F")]
	[Address(RVA = "0x437CE40", Offset = "0x437CE40", VA = "0x437CE40")]
	private void SnapCameraToAxis(Vector3 direction)
	{
	}

	[Token(Token = "0x60045A0")]
	[Address(RVA = "0x437DFC0", Offset = "0x437DFC0", VA = "0x437DFC0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60045A1")]
	[Address(RVA = "0x437E2B0", Offset = "0x437E2B0", VA = "0x437E2B0")]
	public MapEditorCamera()
	{
	}
}
