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

[Token(Token = "0x2000110")]
internal class RotationGizmo : BaseGizmo
{
	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x38")]
	private Transform _circleX;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x40")]
	private Transform _circleY;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x48")]
	private Transform _circleZ;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x50")]
	private Color SelectedColor;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x60")]
	private Color CircleXColor;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x70")]
	private Color CircleYColor;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x80")]
	private Color CircleZColor;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x90")]
	private Transform _activeCircle;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x98")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0xA4")]
	private float _currentAngle;

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4357E10", Offset = "0x4357E10", VA = "0x4357E10")]
	public static RotationGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x4357F00", Offset = "0x4357F00", VA = "0x4357F00", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x4357F50", Offset = "0x4357F50", VA = "0x4357F50", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x43580B0", Offset = "0x43580B0", VA = "0x43580B0", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4358590", Offset = "0x4358590", VA = "0x4358590", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x43592B0", Offset = "0x43592B0", VA = "0x43592B0")]
	private Vector3 GetAxis()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4359390", Offset = "0x4359390", VA = "0x4359390")]
	private void RotateSelectedObjects(Vector3 center, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x43581D0", Offset = "0x43581D0", VA = "0x43581D0")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4358060", Offset = "0x4358060", VA = "0x4358060")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x43591D0", Offset = "0x43591D0", VA = "0x43591D0")]
	private void SetCircleColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4359590", Offset = "0x4359590", VA = "0x4359590")]
	public RotationGizmo()
	{
	}
}
