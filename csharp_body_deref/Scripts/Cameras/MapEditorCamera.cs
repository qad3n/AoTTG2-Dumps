using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20006BB")]
internal class MapEditorCamera : BaseCamera
{
	[Token(Token = "0x40020AA")]
	[FieldOffset(Offset = "0x38")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x40020AB")]
	[FieldOffset(Offset = "0x40")]
	private MapEditorSettings _settings;

	[Token(Token = "0x40020AC")]
	[FieldOffset(Offset = "0x48")]
	private MapEditorMenu _menu;

	[Token(Token = "0x40020AD")]
	[FieldOffset(Offset = "0x50")]
	private Camera _uiCamera;

	[Token(Token = "0x40020AE")]
	[FieldOffset(Offset = "0x58")]
	private bool _wasRotating;

	[Token(Token = "0x40020AF")]
	[FieldOffset(Offset = "0x59")]
	private bool _startDrag;

	[Token(Token = "0x40020B0")]
	[FieldOffset(Offset = "0x5C")]
	private Vector3 _lastDragPosition;

	[Token(Token = "0x40020B1")]
	private const float MaxDeltaTime = 1f / 30f;

	[Token(Token = "0x40020B2")]
	private const float ReferenceScreenHeight = 1080f;

	[Token(Token = "0x600432B")]
	[Address(RVA = "0x4048C80", Offset = "0x4048C80", VA = "0x4048C80")]
	private static float GetClampedDeltaTime()
	{
		return default(float);
	}

	[Token(Token = "0x600432C")]
	[Address(RVA = "0x4048CA0", Offset = "0x4048CA0", VA = "0x4048CA0")]
	private static float GetScreenScale()
	{
		return default(float);
	}

	[Token(Token = "0x600432D")]
	[Address(RVA = "0x4048CD0", Offset = "0x4048CD0", VA = "0x4048CD0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600432E")]
	[Address(RVA = "0x4048DB0", Offset = "0x4048DB0", VA = "0x4048DB0")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x600432F")]
	[Address(RVA = "0x4048E20", Offset = "0x4048E20", VA = "0x4048E20")]
	protected void CreateUICamera()
	{
	}

	[Token(Token = "0x6004330")]
	[Address(RVA = "0x4048E30", Offset = "0x4048E30", VA = "0x4048E30")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004331")]
	[Address(RVA = "0x4048EC0", Offset = "0x4048EC0", VA = "0x4048EC0")]
	private void UpdateMovement()
	{
	}

	[Token(Token = "0x6004332")]
	[Address(RVA = "0x40497C0", Offset = "0x40497C0", VA = "0x40497C0")]
	private void UpdateDragMovement(float speed)
	{
	}

	[Token(Token = "0x6004333")]
	[Address(RVA = "0x4049AB0", Offset = "0x4049AB0", VA = "0x4049AB0")]
	private void UpdateZoomMovement(float speed)
	{
	}

	[Token(Token = "0x6004334")]
	[Address(RVA = "0x40493C0", Offset = "0x40493C0", VA = "0x40493C0")]
	private void UpdateRotation()
	{
	}

	[Token(Token = "0x6004335")]
	[Address(RVA = "0x404A490", Offset = "0x404A490", VA = "0x404A490")]
	private bool AlignedWithWorldAxis()
	{
		return default(bool);
	}

	[Token(Token = "0x6004336")]
	[Address(RVA = "0x404A880", Offset = "0x404A880", VA = "0x404A880")]
	private void AlignToWorldAxis()
	{
	}

	[Token(Token = "0x6004337")]
	[Address(RVA = "0x4049E30", Offset = "0x4049E30", VA = "0x4049E30")]
	private void SnapCameraToAxis(Vector3 direction)
	{
	}

	[Token(Token = "0x6004338")]
	[Address(RVA = "0x404AFB0", Offset = "0x404AFB0", VA = "0x404AFB0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6004339")]
	[Address(RVA = "0x404B2A0", Offset = "0x404B2A0", VA = "0x404B2A0")]
	public MapEditorCamera()
	{
	}
}
