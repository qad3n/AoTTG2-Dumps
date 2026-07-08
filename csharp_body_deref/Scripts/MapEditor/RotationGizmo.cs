using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010F")]
internal class RotationGizmo : BaseGizmo
{
	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x38")]
	private Transform _circleX;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x40")]
	private Transform _circleY;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x48")]
	private Transform _circleZ;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x50")]
	private Color SelectedColor;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x60")]
	private Color CircleXColor;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x70")]
	private Color CircleYColor;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x80")]
	private Color CircleZColor;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x90")]
	private Transform _activeCircle;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x98")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0xA4")]
	private float _currentAngle;

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x405D490", Offset = "0x405D490", VA = "0x405D490")]
	public static RotationGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x405D580", Offset = "0x405D580", VA = "0x405D580", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x405D5D0", Offset = "0x405D5D0", VA = "0x405D5D0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x405D730", Offset = "0x405D730", VA = "0x405D730", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x405DC10", Offset = "0x405DC10", VA = "0x405DC10", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x405E930", Offset = "0x405E930", VA = "0x405E930")]
	private Vector3 GetAxis()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x405EA10", Offset = "0x405EA10", VA = "0x405EA10")]
	private void RotateSelectedObjects(Vector3 center, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x405D850", Offset = "0x405D850", VA = "0x405D850")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x405D6E0", Offset = "0x405D6E0", VA = "0x405D6E0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x405E850", Offset = "0x405E850", VA = "0x405E850")]
	private void SetCircleColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x405EC10", Offset = "0x405EC10", VA = "0x405EC10")]
	public RotationGizmo()
	{
	}
}
