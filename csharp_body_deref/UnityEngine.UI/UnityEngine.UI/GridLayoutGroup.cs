// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.GridLayoutGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50CE030", Offset = "0x50CE030", VA = "0x50CE030")]
		get
		{
			return default(Corner);
		}
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x50CE040", Offset = "0x50CE040", VA = "0x50CE040")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public Axis startAxis
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x50CE090", Offset = "0x50CE090", VA = "0x50CE090")]
		get
		{
			return default(Axis);
		}
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x50CE0A0", Offset = "0x50CE0A0", VA = "0x50CE0A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public Vector2 cellSize
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x50CE0F0", Offset = "0x50CE0F0", VA = "0x50CE0F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x50CE100", Offset = "0x50CE100", VA = "0x50CE100")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public Vector2 spacing
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x50CE150", Offset = "0x50CE150", VA = "0x50CE150")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x50CE160", Offset = "0x50CE160", VA = "0x50CE160")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public Constraint constraint
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x50CE1B0", Offset = "0x50CE1B0", VA = "0x50CE1B0")]
		get
		{
			return default(Constraint);
		}
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x50CE1C0", Offset = "0x50CE1C0", VA = "0x50CE1C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int constraintCount
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x50CE210", Offset = "0x50CE210", VA = "0x50CE210")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x50CE220", Offset = "0x50CE220", VA = "0x50CE220")]
		set
		{
		}
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x50CE270", Offset = "0x50CE270", VA = "0x50CE270")]
	protected GridLayoutGroup()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x50CE410", Offset = "0x50CE410", VA = "0x50CE410", Slot = "28")]
	public override void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x50CEB00", Offset = "0x50CEB00", VA = "0x50CEB00", Slot = "29")]
	public override void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x50CEE00", Offset = "0x50CEE00", VA = "0x50CEE00", Slot = "37")]
	public override void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x50CF7C0", Offset = "0x50CF7C0", VA = "0x50CF7C0", Slot = "38")]
	public override void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x50CEE10", Offset = "0x50CEE10", VA = "0x50CEE10")]
	private void SetCellsAlongAxis(int axis)
	{
	}
}
