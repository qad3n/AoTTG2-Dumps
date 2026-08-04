// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.ScaleGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/ScaleGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000111")]
internal class ScaleGizmo : BaseGizmo
{
	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x38")]
	private Transform _lineX;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x40")]
	private Transform _lineY;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineZ;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x50")]
	private Transform _center;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x58")]
	private Color SelectedColor;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x68")]
	private Color LineXColor;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x78")]
	private Color LineYColor;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x88")]
	private Color LineZColor;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x98")]
	private Color CenterColor;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0xA8")]
	private Transform _activeLine;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0xB0")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0xBC")]
	private Vector3 _currentScaleAmount;

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x43595E0", Offset = "0x43595E0", VA = "0x43595E0")]
	public static ScaleGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x43596D0", Offset = "0x43596D0", VA = "0x43596D0", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4359720", Offset = "0x4359720", VA = "0x4359720", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4359920", Offset = "0x4359920", VA = "0x4359920", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4359D60", Offset = "0x4359D60", VA = "0x4359D60")]
	protected bool ContainsCenter(RaycastHit[] hits)
	{
		return default(bool);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4359E70", Offset = "0x4359E70", VA = "0x4359E70")]
	protected new void Update()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x435B620", Offset = "0x435B620", VA = "0x435B620")]
	private void ScaleSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4359A70", Offset = "0x4359A70", VA = "0x4359A70")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x43598A0", Offset = "0x43598A0", VA = "0x43598A0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x435B540", Offset = "0x435B540", VA = "0x435B540")]
	private void SetLineColor(Transform line, Color color, int renderQueue = 3111)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x435B8B0", Offset = "0x435B8B0", VA = "0x435B8B0")]
	public ScaleGizmo()
	{
	}
}
