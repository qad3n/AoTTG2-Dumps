// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.GridLayoutGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000040")]
[AddComponentMenu("Layout/Grid Layout Group", 152)]
[UnityEngine.UGUIHelpURL("GridLayoutGroup")]
public class GridLayoutGroup : LayoutGroup
{
	[Token(Token = "0x2000041")]
	public enum Corner
	{
		[Token(Token = "0x400015E")]
		UpperLeft,
		[Token(Token = "0x400015F")]
		UpperRight,
		[Token(Token = "0x4000160")]
		LowerLeft,
		[Token(Token = "0x4000161")]
		LowerRight
	}

	[Token(Token = "0x2000042")]
	public enum Axis
	{
		[Token(Token = "0x4000163")]
		Horizontal,
		[Token(Token = "0x4000164")]
		Vertical
	}

	[Token(Token = "0x2000043")]
	public enum Constraint
	{
		[Token(Token = "0x4000166")]
		Flexible,
		[Token(Token = "0x4000167")]
		FixedColumnCount,
		[Token(Token = "0x4000168")]
		FixedRowCount
	}

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	protected Corner m_StartCorner;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	protected Axis m_StartAxis;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	protected Vector2 m_CellSize;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	protected Vector2 m_Spacing;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	protected Constraint m_Constraint;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	protected int m_ConstraintCount;

	[Token(Token = "0x170000A9")]
	public Corner startCorner
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(Corner);
		}
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x32C4EE0", Offset = "0x32C34E0", VA = "0x1832C4EE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public Axis startAxis
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0xCDE980", Offset = "0xCDCF80", VA = "0x180CDE980")]
		get
		{
			return default(Axis);
		}
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x32C4E90", Offset = "0x32C3490", VA = "0x1832C4E90")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public Vector2 cellSize
	{
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x12BF170", Offset = "0x12BD770", VA = "0x1812BF170")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x32C4D20", Offset = "0x32C3320", VA = "0x1832C4D20")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public Vector2 spacing
	{
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x12BF060", Offset = "0x12BD660", VA = "0x1812BF060")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x32C4E30", Offset = "0x32C3430", VA = "0x1832C4E30")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public Constraint constraint
	{
		[Token(Token = "0x6000295")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(Constraint);
		}
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x32C4DE0", Offset = "0x32C33E0", VA = "0x1832C4DE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int constraintCount
	{
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x32C4D80", Offset = "0x32C3380", VA = "0x1832C4D80")]
		set
		{
		}
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x32C4CB0", Offset = "0x32C32B0", VA = "0x1832C4CB0")]
	protected GridLayoutGroup()
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x32C40C0", Offset = "0x32C26C0", VA = "0x1832C40C0", Slot = "28")]
	public override void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x32C42C0", Offset = "0x32C28C0", VA = "0x1832C42C0", Slot = "29")]
	public override void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x32C4C90", Offset = "0x32C3290", VA = "0x1832C4C90", Slot = "37")]
	public override void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x32C4CA0", Offset = "0x32C32A0", VA = "0x1832C4CA0", Slot = "38")]
	public override void SetLayoutVertical()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x32C44C0", Offset = "0x32C2AC0", VA = "0x1832C44C0")]
	private void SetCellsAlongAxis(int axis)
	{
	}
}
