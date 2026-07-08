using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000042")]
[AddComponentMenu("Layout/Grid Layout Group", 152)]
public class GridLayoutGroup : LayoutGroup
{
	[Token(Token = "0x2000043")]
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

	[Token(Token = "0x2000044")]
	public enum Axis
	{
		[Token(Token = "0x4000163")]
		Horizontal,
		[Token(Token = "0x4000164")]
		Vertical
	}

	[Token(Token = "0x2000045")]
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

	[Token(Token = "0x170000A8")]
	public Corner startCorner
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x4DA6700", Offset = "0x4DA6700", VA = "0x4DA6700")]
		get
		{
			return default(Corner);
		}
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x4DA6710", Offset = "0x4DA6710", VA = "0x4DA6710")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public Axis startAxis
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x4DA6760", Offset = "0x4DA6760", VA = "0x4DA6760")]
		get
		{
			return default(Axis);
		}
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x4DA6770", Offset = "0x4DA6770", VA = "0x4DA6770")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public Vector2 cellSize
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x4DA67C0", Offset = "0x4DA67C0", VA = "0x4DA67C0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x4DA67D0", Offset = "0x4DA67D0", VA = "0x4DA67D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public Vector2 spacing
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x4DA6820", Offset = "0x4DA6820", VA = "0x4DA6820")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x4DA6830", Offset = "0x4DA6830", VA = "0x4DA6830")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public Constraint constraint
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x4DA6880", Offset = "0x4DA6880", VA = "0x4DA6880")]
		get
		{
			return default(Constraint);
		}
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x4DA6890", Offset = "0x4DA6890", VA = "0x4DA6890")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int constraintCount
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x4DA68E0", Offset = "0x4DA68E0", VA = "0x4DA68E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x4DA68F0", Offset = "0x4DA68F0", VA = "0x4DA68F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4DA6940", Offset = "0x4DA6940", VA = "0x4DA6940")]
	protected GridLayoutGroup()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4DA6AE0", Offset = "0x4DA6AE0", VA = "0x4DA6AE0", Slot = "28")]
	public override void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4DA71D0", Offset = "0x4DA71D0", VA = "0x4DA71D0", Slot = "29")]
	public override void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4DA74D0", Offset = "0x4DA74D0", VA = "0x4DA74D0", Slot = "37")]
	public override void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4DA7E90", Offset = "0x4DA7E90", VA = "0x4DA7E90", Slot = "38")]
	public override void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4DA74E0", Offset = "0x4DA74E0", VA = "0x4DA74E0")]
	private void SetCellsAlongAxis(int axis)
	{
	}
}
