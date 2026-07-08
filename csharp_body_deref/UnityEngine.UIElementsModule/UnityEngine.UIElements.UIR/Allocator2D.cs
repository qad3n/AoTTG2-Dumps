using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000490")]
internal class Allocator2D
{
	[Token(Token = "0x2000491")]
	public class Area
	{
		[Token(Token = "0x4000DC8")]
		[FieldOffset(Offset = "0x10")]
		public RectInt rect;

		[Token(Token = "0x4000DC9")]
		[FieldOffset(Offset = "0x20")]
		public BestFitAllocator allocator;

		[Token(Token = "0x6001C6A")]
		[Address(RVA = "0x4C59680", Offset = "0x4C59680", VA = "0x4C59680")]
		public Area(RectInt rect)
		{
		}
	}

	[Token(Token = "0x2000492")]
	public class Row : LinkedPoolItem<Row>
	{
		[Token(Token = "0x4000DCA")]
		[FieldOffset(Offset = "0x18")]
		public RectInt rect;

		[Token(Token = "0x4000DCB")]
		[FieldOffset(Offset = "0x28")]
		public Area area;

		[Token(Token = "0x4000DCC")]
		[FieldOffset(Offset = "0x30")]
		public BestFitAllocator allocator;

		[Token(Token = "0x4000DCD")]
		[FieldOffset(Offset = "0x38")]
		public Alloc alloc;

		[Token(Token = "0x4000DCE")]
		[FieldOffset(Offset = "0x50")]
		public Row next;

		[Token(Token = "0x4000DCF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly LinkedPool<Row> pool;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001C6B")]
		[Address(RVA = "0x4C59700", Offset = "0x4C59700", VA = "0x4C59700")]
		private static Row Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x4C597B0", Offset = "0x4C597B0", VA = "0x4C597B0")]
		private static void Reset(Row row)
		{
		}

		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x4C59770", Offset = "0x4C59770", VA = "0x4C59770")]
		public Row()
		{
		}
	}

	[Token(Token = "0x2000493")]
	public struct Alloc2D
	{
		[Token(Token = "0x4000DD0")]
		[FieldOffset(Offset = "0x0")]
		public RectInt rect;

		[Token(Token = "0x4000DD1")]
		[FieldOffset(Offset = "0x10")]
		public Row row;

		[Token(Token = "0x4000DD2")]
		[FieldOffset(Offset = "0x18")]
		public Alloc alloc;

		[Token(Token = "0x6001C6F")]
		[Address(RVA = "0x4C59320", Offset = "0x4C59320", VA = "0x4C59320")]
		public Alloc2D(Row row, Alloc alloc, int width, int height)
		{
		}
	}

	[Token(Token = "0x4000DC2")]
	[FieldOffset(Offset = "0x10")]
	private readonly Vector2Int m_MinSize;

	[Token(Token = "0x4000DC3")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vector2Int m_MaxSize;

	[Token(Token = "0x4000DC4")]
	[FieldOffset(Offset = "0x20")]
	private readonly Vector2Int m_MaxAllocSize;

	[Token(Token = "0x4000DC5")]
	[FieldOffset(Offset = "0x28")]
	private readonly int m_RowHeightBias;

	[Token(Token = "0x4000DC6")]
	[FieldOffset(Offset = "0x30")]
	private readonly Row[] m_Rows;

	[Token(Token = "0x4000DC7")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Area> m_Areas;

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x4C58530", Offset = "0x4C58530", VA = "0x4C58530")]
	public Allocator2D(Vector2Int minSize, Vector2Int maxSize, int rowHeightBias)
	{
	}

	[Token(Token = "0x6001C65")]
	[Address(RVA = "0x4C58CB0", Offset = "0x4C58CB0", VA = "0x4C58CB0")]
	public bool TryAllocate(int width, int height, out Alloc2D alloc2D)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C66")]
	[Address(RVA = "0x4C59440", Offset = "0x4C59440", VA = "0x4C59440")]
	public void Free(Alloc2D alloc2D)
	{
	}

	[Token(Token = "0x6001C67")]
	[Address(RVA = "0x4C587C0", Offset = "0x4C587C0", VA = "0x4C587C0")]
	private static void BuildAreas(List<Area> areas, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x4C58B40", Offset = "0x4C58B40", VA = "0x4C58B40")]
	private static Vector2Int ComputeMaxAllocSize(List<Area> areas, int rowHeightBias)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x4C58C40", Offset = "0x4C58C40", VA = "0x4C58C40")]
	private static Row[] BuildRowArray(int maxRowHeight, int rowHeightBias)
	{
		return null;
	}
}
