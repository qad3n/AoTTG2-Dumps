// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ScaleGizmo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/ScaleGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014A")]
internal class ScaleGizmo : BaseGizmo
{
	[Token(Token = "0x4000768")]
	[FieldOffset(Offset = "0x38")]
	private Transform _lineX;

	[Token(Token = "0x4000769")]
	[FieldOffset(Offset = "0x40")]
	private Transform _lineY;

	[Token(Token = "0x400076A")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineZ;

	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x50")]
	private Transform _center;

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x58")]
	private Color SelectedColor;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x68")]
	private Color LineXColor;

	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x78")]
	private Color LineYColor;

	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x88")]
	private Color LineZColor;

	[Token(Token = "0x4000770")]
	[FieldOffset(Offset = "0x98")]
	private Color CenterColor;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0xA8")]
	private Transform _activeLine;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0xB0")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0xBC")]
	private Vector3 _currentScaleAmount;

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x21FC7E0", Offset = "0x21FADE0", VA = "0x1821FC7E0")]
	public static ScaleGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x21FC8D0", Offset = "0x21FAED0", VA = "0x1821FC8D0", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x21FC5B0", Offset = "0x21FABB0", VA = "0x1821FC5B0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x21FC930", Offset = "0x21FAF30", VA = "0x1821FC930", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x21FC6C0", Offset = "0x21FACC0", VA = "0x1821FC6C0")]
	protected bool ContainsCenter(RaycastHit[] hits)
	{
		return default(bool);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x21FD2A0", Offset = "0x21FB8A0", VA = "0x1821FD2A0")]
	protected new void Update()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x21FCDB0", Offset = "0x21FB3B0", VA = "0x1821FCDB0")]
	private void ScaleSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x21FCA20", Offset = "0x21FB020", VA = "0x1821FCA20")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x21FCCF0", Offset = "0x21FB2F0", VA = "0x1821FCCF0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x21FD130", Offset = "0x21FB730", VA = "0x1821FD130")]
	private void SetLineColor(Transform line, Color color, int renderQueue = 4711)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x21FE2E0", Offset = "0x21FC8E0", VA = "0x1821FE2E0")]
	public ScaleGizmo()
	{
	}
}
