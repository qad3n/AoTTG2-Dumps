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

[Token(Token = "0x2000152")]
internal class ScaleGizmo : BaseGizmo
{
	[Token(Token = "0x40007B5")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineX;

	[Token(Token = "0x40007B6")]
	[FieldOffset(Offset = "0x50")]
	private Transform _lineY;

	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x58")]
	private Transform _lineZ;

	[Token(Token = "0x40007B8")]
	[FieldOffset(Offset = "0x60")]
	private Transform _center;

	[Token(Token = "0x40007B9")]
	[FieldOffset(Offset = "0x68")]
	private Color SelectedColor;

	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x78")]
	private Color LineXColor;

	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x88")]
	private Color LineYColor;

	[Token(Token = "0x40007BC")]
	[FieldOffset(Offset = "0x98")]
	private Color LineZColor;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0xA8")]
	private Color CenterColor;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0xB8")]
	private Transform _activeLine;

	[Token(Token = "0x40007BF")]
	[FieldOffset(Offset = "0xC0")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0xCC")]
	private Vector3 _currentScaleAmount;

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x5CB4520", Offset = "0x5CB3520", VA = "0x5CB4520")]
	public static ScaleGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x5CB4610", Offset = "0x5CB3610", VA = "0x5CB4610", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x5CB4660", Offset = "0x5CB3660", VA = "0x5CB4660", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x5CB4870", Offset = "0x5CB3870", VA = "0x5CB4870", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x5CB4C60", Offset = "0x5CB3C60", VA = "0x5CB4C60")]
	protected bool ContainsCenter(RaycastHit[] hits)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x5CB4D80", Offset = "0x5CB3D80", VA = "0x5CB4D80")]
	protected new void Update()
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x5CB6500", Offset = "0x5CB5500", VA = "0x5CB6500")]
	private void ScaleSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x5CB49D0", Offset = "0x5CB39D0", VA = "0x5CB49D0")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x5CB47F0", Offset = "0x5CB37F0", VA = "0x5CB47F0")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x5CB6420", Offset = "0x5CB5420", VA = "0x5CB6420")]
	private void SetLineColor(Transform line, Color color, int renderQueue = 4711)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x5CB6880", Offset = "0x5CB5880", VA = "0x5CB6880")]
	public ScaleGizmo()
	{
	}
}
