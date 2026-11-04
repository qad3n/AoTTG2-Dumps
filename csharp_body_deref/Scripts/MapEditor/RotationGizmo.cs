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

[Token(Token = "0x2000148")]
internal class RotationGizmo : BaseGizmo
{
	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x38")]
	private Transform _circleX;

	[Token(Token = "0x400075D")]
	[FieldOffset(Offset = "0x40")]
	private Transform _circleY;

	[Token(Token = "0x400075E")]
	[FieldOffset(Offset = "0x48")]
	private Transform _circleZ;

	[Token(Token = "0x400075F")]
	[FieldOffset(Offset = "0x50")]
	private Color SelectedColor;

	[Token(Token = "0x4000760")]
	[FieldOffset(Offset = "0x60")]
	private Color CircleXColor;

	[Token(Token = "0x4000761")]
	[FieldOffset(Offset = "0x70")]
	private Color CircleYColor;

	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x80")]
	private Color CircleZColor;

	[Token(Token = "0x4000763")]
	[FieldOffset(Offset = "0x90")]
	private Transform _activeCircle;

	[Token(Token = "0x4000764")]
	[FieldOffset(Offset = "0x98")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x4000765")]
	[FieldOffset(Offset = "0xA4")]
	private float _currentAngle;

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x21FB060", Offset = "0x21F9660", VA = "0x1821FB060")]
	public static RotationGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x21FB240", Offset = "0x21F9840", VA = "0x1821FB240", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x21FAF30", Offset = "0x21F9530", VA = "0x1821FAF30", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x21FB2A0", Offset = "0x21F98A0", VA = "0x1821FB2A0", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x21FBB30", Offset = "0x21FA130", VA = "0x1821FBB30", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x21FB150", Offset = "0x21F9750", VA = "0x1821FB150")]
	private Vector3 GetAxis()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x21FB740", Offset = "0x21F9D40", VA = "0x1821FB740")]
	private void RotateSelectedObjects(Vector3 center, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x21FB390", Offset = "0x21F9990", VA = "0x1821FB390")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x21FB6D0", Offset = "0x21F9CD0", VA = "0x1821FB6D0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x21FBA40", Offset = "0x21FA040", VA = "0x1821FBA40")]
	private void SetCircleColor(Transform line, Color color)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x21FC3C0", Offset = "0x21FA9C0", VA = "0x1821FC3C0")]
	public RotationGizmo()
	{
	}
}
