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

[Token(Token = "0x200056E")]
internal class Allocator2D
{
	[Token(Token = "0x200056F")]
	public class Area
	{
		[Token(Token = "0x4001273")]
		[FieldOffset(Offset = "0x10")]
		public RectInt rect;

		[Token(Token = "0x4001274")]
		[FieldOffset(Offset = "0x20")]
		public BestFitAllocator allocator;

		[Token(Token = "0x60028EC")]
		[Address(RVA = "0x3176780", Offset = "0x3174D80", VA = "0x183176780")]
		public Area(RectInt rect)
		{
		}
	}

	[Token(Token = "0x2000570")]
	public class Row : LinkedPoolItem<Row>
	{
		[Token(Token = "0x4001275")]
		[FieldOffset(Offset = "0x18")]
		public RectInt rect;

		[Token(Token = "0x4001276")]
		[FieldOffset(Offset = "0x28")]
		public Area area;

		[Token(Token = "0x4001277")]
		[FieldOffset(Offset = "0x30")]
		public BestFitAllocator allocator;

		[Token(Token = "0x4001278")]
		[FieldOffset(Offset = "0x38")]
		public Alloc alloc;

		[Token(Token = "0x4001279")]
		[FieldOffset(Offset = "0x50")]
		public Row next;

		[Token(Token = "0x400127A")]
		[FieldOffset(Offset = "0x0")]
		public static readonly LinkedPool<Row> pool;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60028ED")]
		[Address(RVA = "0x31841B0", Offset = "0x31827B0", VA = "0x1831841B0")]
		private static Row Create()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60028EE")]
		[Address(RVA = "0x3184220", Offset = "0x3182820", VA = "0x183184220")]
		private static void Reset(Row row)
		{
		}

		[Token(Token = "0x60028EF")]
		[Address(RVA = "0x31843B0", Offset = "0x31829B0", VA = "0x1831843B0")]
		public Row()
		{
		}
	}

	[Token(Token = "0x2000571")]
	public struct Alloc2D
	{
		[Token(Token = "0x400127B")]
		[FieldOffset(Offset = "0x0")]
		public RectInt rect;

		[Token(Token = "0x400127C")]
		[FieldOffset(Offset = "0x10")]
		public Row row;

		[Token(Token = "0x400127D")]
		[FieldOffset(Offset = "0x18")]
		public Alloc alloc;

		[Token(Token = "0x60028F1")]
		[Address(RVA = "0x31766C0", Offset = "0x3174CC0", VA = "0x1831766C0")]
		public Alloc2D(Row row, Alloc alloc, int width, int height)
		{
		}
	}

	[Token(Token = "0x400126D")]
	[FieldOffset(Offset = "0x10")]
	private readonly Vector2Int m_MinSize;

	[Token(Token = "0x400126E")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vector2Int m_MaxSize;

	[Token(Token = "0x400126F")]
	[FieldOffset(Offset = "0x20")]
	private readonly Vector2Int m_MaxAllocSize;

	[Token(Token = "0x4001270")]
	[FieldOffset(Offset = "0x28")]
	private readonly int m_RowHeightBias;

	[Token(Token = "0x4001271")]
	[FieldOffset(Offset = "0x30")]
	private readonly Row[] m_Rows;

	[Token(Token = "0x4001272")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Area> m_Areas;

	[Token(Token = "0x60028E6")]
	[Address(RVA = "0x315A5D0", Offset = "0x3158BD0", VA = "0x18315A5D0")]
	public Allocator2D(Vector2Int minSize, Vector2Int maxSize, int rowHeightBias)
	{
	}

	[Token(Token = "0x60028E7")]
	[Address(RVA = "0x315A010", Offset = "0x3158610", VA = "0x18315A010")]
	public bool TryAllocate(int width, int height, out Alloc2D alloc2D)
	{
		return default(bool);
	}

	[Token(Token = "0x60028E8")]
	[Address(RVA = "0x3159DA0", Offset = "0x31583A0", VA = "0x183159DA0")]
	public void Free(Alloc2D alloc2D)
	{
	}

	[Token(Token = "0x60028E9")]
	[Address(RVA = "0x3159A40", Offset = "0x3158040", VA = "0x183159A40")]
	private static void BuildAreas(List<Area> areas, Vector2Int minSize, Vector2Int maxSize)
	{
	}

	[Token(Token = "0x60028EA")]
	[Address(RVA = "0x3159C80", Offset = "0x3158280", VA = "0x183159C80")]
	private static Vector2Int ComputeMaxAllocSize(List<Area> areas, int rowHeightBias)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60028EB")]
	[Address(RVA = "0x3159C10", Offset = "0x3158210", VA = "0x183159C10")]
	private static Row[] BuildRowArray(int maxRowHeight, int rowHeightBias)
	{
		return null;
	}
}
