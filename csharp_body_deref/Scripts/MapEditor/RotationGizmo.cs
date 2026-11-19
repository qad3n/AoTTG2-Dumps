// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.RotationGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/RotationGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/RotationGIzmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000150")]
internal class RotationGizmo : BaseGizmo
{
	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x48")]
	private Transform _circleX;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x50")]
	private Transform _circleY;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x58")]
	private Transform _circleZ;

	[Token(Token = "0x40007AC")]
	[FieldOffset(Offset = "0x60")]
	private Color SelectedColor;

	[Token(Token = "0x40007AD")]
	[FieldOffset(Offset = "0x70")]
	private Color CircleXColor;

	[Token(Token = "0x40007AE")]
	[FieldOffset(Offset = "0x80")]
	private Color CircleYColor;

	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x90")]
	private Color CircleZColor;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0xA0")]
	private Transform _activeCircle;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0xA8")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0xB4")]
	private float _currentAngle;

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x5CB2BD0", Offset = "0x5CB1BD0", VA = "0x5CB2BD0")]
	public static RotationGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x5CB2CC0", Offset = "0x5CB1CC0", VA = "0x5CB2CC0", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x5CB2D10", Offset = "0x5CB1D10", VA = "0x5CB2D10", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x5CB2E80", Offset = "0x5CB1E80", VA = "0x5CB2E80", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x5CB32D0", Offset = "0x5CB22D0", VA = "0x5CB32D0", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x5CB4040", Offset = "0x5CB3040", VA = "0x5CB4040")]
	private Vector3 GetAxis()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x5CB4120", Offset = "0x5CB3120", VA = "0x5CB4120")]
	private void RotateSelectedObjects(Vector3 center, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x5CB2FA0", Offset = "0x5CB1FA0", VA = "0x5CB2FA0")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x5CB2E30", Offset = "0x5CB1E30", VA = "0x5CB2E30")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x5CB3F60", Offset = "0x5CB2F60", VA = "0x5CB3F60")]
	private void SetCircleColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x5CB4430", Offset = "0x5CB3430", VA = "0x5CB4430")]
	public RotationGizmo()
	{
	}
}
