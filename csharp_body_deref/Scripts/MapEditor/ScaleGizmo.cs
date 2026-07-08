using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000110")]
internal class ScaleGizmo : BaseGizmo
{
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x38")]
	private Transform _lineX;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x40")]
	private Transform _lineY;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x48")]
	private Transform _lineZ;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x50")]
	private Transform _center;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x58")]
	private Color SelectedColor;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x68")]
	private Color LineXColor;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x78")]
	private Color LineYColor;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x88")]
	private Color LineZColor;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x98")]
	private Color CenterColor;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0xA8")]
	private Transform _activeLine;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0xB0")]
	private Vector3 _previousMousePoint;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0xBC")]
	private Vector3 _currentScaleAmount;

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x405EC60", Offset = "0x405EC60", VA = "0x405EC60")]
	public static ScaleGizmo Create()
	{
		return null;
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x405ED50", Offset = "0x405ED50", VA = "0x405ED50", Slot = "4")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x405EDA0", Offset = "0x405EDA0", VA = "0x405EDA0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x405EFA0", Offset = "0x405EFA0", VA = "0x405EFA0", Slot = "7")]
	public override void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x405F3E0", Offset = "0x405F3E0", VA = "0x405F3E0")]
	protected bool ContainsCenter(RaycastHit[] hits)
	{
		return default(bool);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x405F4F0", Offset = "0x405F4F0", VA = "0x405F4F0")]
	protected new void Update()
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4060CA0", Offset = "0x4060CA0", VA = "0x4060CA0")]
	private void ScaleSelectedObjects(Vector3 frameDelta)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x405F0F0", Offset = "0x405F0F0", VA = "0x405F0F0")]
	private void ResetCenter()
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x405EF20", Offset = "0x405EF20", VA = "0x405EF20")]
	private void ResetColors()
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4060BC0", Offset = "0x4060BC0", VA = "0x4060BC0")]
	private void SetLineColor(Transform line, Color color, int renderQueue = 3111)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4060F30", Offset = "0x4060F30", VA = "0x4060F30")]
	public ScaleGizmo()
	{
	}
}
