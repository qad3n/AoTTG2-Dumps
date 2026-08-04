// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Allocator2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F80FB0", Offset = "0x4F80FB0", VA = "0x4F80FB0")]
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
		[Address(RVA = "0x4F81030", Offset = "0x4F81030", VA = "0x4F81030")]
		private static Row Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x4F810E0", Offset = "0x4F810E0", VA = "0x4F810E0")]
		private static void Reset(Row row)
		{
		}

		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x4F810A0", Offset = "0x4F810A0", VA = "0x4F810A0")]
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
		[Address(RVA = "0x4F80C50", Offset = "0x4F80C50", VA = "0x4F80C50")]
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
	[Address(RVA = "0x4F7FE60", Offset = "0x4F7FE60", VA = "0x4F7FE60")]
	public Allocator2D(Vector2Int minSize, Vector2Int maxSize, int rowHeightBias)
	{
	}

	[Token(Token = "0x6001C65")]
	[Address(RVA = "0x4F805E0", Offset = "0x4F805E0", VA = "0x4F805E0")]
	public bool TryAllocate(int width, int height, out Alloc2D alloc2D)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C66")]
	[Address(RVA = "0x4F80D70", Offset = "0x4F80D70", VA = "0x4F80D70")]
	public void Free(Alloc2D alloc2D)
	{
	}

	[Token(Token = "0x6001C67")]
	[Address(RVA = "0x4F800F0", Offset = "0x4F800F0", VA = "0x4F800F0")]
	private static void BuildAreas(List<Area> areas, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x4F80470", Offset = "0x4F80470", VA = "0x4F80470")]
	private static Vector2Int ComputeMaxAllocSize(List<Area> areas, int rowHeightBias)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x4F80570", Offset = "0x4F80570", VA = "0x4F80570")]
	private static Row[] BuildRowArray(int maxRowHeight, int rowHeightBias)
	{
		return null;
	}
}
