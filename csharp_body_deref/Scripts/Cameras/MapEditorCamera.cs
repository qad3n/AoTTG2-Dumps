// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MapEditorCamera
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/MapEditorCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MapEditorCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008F2")]
internal class MapEditorCamera : BaseCamera
{
	[Token(Token = "0x4002D6B")]
	[FieldOffset(Offset = "0x38")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4002D6C")]
	[FieldOffset(Offset = "0x40")]
	private MapEditorSettings _settings;

	[Token(Token = "0x4002D6D")]
	[FieldOffset(Offset = "0x48")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002D6E")]
	[FieldOffset(Offset = "0x50")]
	private Camera _uiCamera;

	[Token(Token = "0x4002D6F")]
	[FieldOffset(Offset = "0x58")]
	private bool _wasRotating;

	[Token(Token = "0x4002D70")]
	[FieldOffset(Offset = "0x59")]
	private bool _startDrag;

	[Token(Token = "0x4002D71")]
	[FieldOffset(Offset = "0x5C")]
	private Vector3 _lastDragPosition;

	[Token(Token = "0x4002D72")]
	private const float MaxDeltaTime = 1f / 30f;

	[Token(Token = "0x4002D73")]
	private const float ReferenceScreenHeight = 1080f;

	[Token(Token = "0x6005523")]
	[Address(RVA = "0x5CD5CD0", Offset = "0x5CD4CD0", VA = "0x5CD5CD0")]
	private static float GetClampedDeltaTime()
	{
		return default(float);
	}

	[Token(Token = "0x6005524")]
	[Address(RVA = "0x5CD5CF0", Offset = "0x5CD4CF0", VA = "0x5CD5CF0")]
	private static float GetScreenScale()
	{
		return default(float);
	}

	[Token(Token = "0x6005525")]
	[Address(RVA = "0x5CD5D20", Offset = "0x5CD4D20", VA = "0x5CD5D20", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6005526")]
	[Address(RVA = "0x5CD5E20", Offset = "0x5CD4E20", VA = "0x5CD5E20")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x6005527")]
	[Address(RVA = "0x5CD5E90", Offset = "0x5CD4E90", VA = "0x5CD5E90")]
	protected void CreateUICamera()
	{
	}

	[Token(Token = "0x6005528")]
	[Address(RVA = "0x5CD5EA0", Offset = "0x5CD4EA0", VA = "0x5CD5EA0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6005529")]
	[Address(RVA = "0x5CD5F30", Offset = "0x5CD4F30", VA = "0x5CD5F30")]
	private void UpdateMovement()
	{
	}

	[Token(Token = "0x600552A")]
	[Address(RVA = "0x5CD67D0", Offset = "0x5CD57D0", VA = "0x5CD67D0")]
	private void UpdateDragMovement(float speed)
	{
	}

	[Token(Token = "0x600552B")]
	[Address(RVA = "0x5CD6A90", Offset = "0x5CD5A90", VA = "0x5CD6A90")]
	private void UpdateZoomMovement(float speed)
	{
	}

	[Token(Token = "0x600552C")]
	[Address(RVA = "0x5CD6410", Offset = "0x5CD5410", VA = "0x5CD6410")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x600552D")]
	[Address(RVA = "0x5CD6E10", Offset = "0x5CD5E10", VA = "0x5CD6E10")]
	private bool GetLookInput(out float inputX, out float inputY)
	{
		return default(bool);
	}

	[Token(Token = "0x600552E")]
	[Address(RVA = "0x5CD74A0", Offset = "0x5CD64A0", VA = "0x5CD74A0")]
	private bool AlignedWithWorldAxis()
	{
		return default(bool);
	}

	[Token(Token = "0x600552F")]
	[Address(RVA = "0x5CD7840", Offset = "0x5CD6840", VA = "0x5CD7840")]
	private void AlignToWorldAxis()
	{
	}

	[Token(Token = "0x6005530")]
	[Address(RVA = "0x5CD6EA0", Offset = "0x5CD5EA0", VA = "0x5CD6EA0")]
	private void SnapCameraToAxis(Vector3 direction)
	{
	}

	[Token(Token = "0x6005531")]
	[Address(RVA = "0x5CD7F20", Offset = "0x5CD6F20", VA = "0x5CD7F20", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6005532")]
	[Address(RVA = "0x5CD8220", Offset = "0x5CD7220", VA = "0x5CD8220")]
	public MapEditorCamera()
	{
	}
}
