// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyFlattenedChildrenEnumerable
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Hierarchy;

[Token(Token = "0x2000004")]
public readonly struct HierarchyFlattenedChildrenEnumerable
{
	[Token(Token = "0x2000005")]
	public struct Enumerator
	{
		[Token(Token = "0x4000004")]
		[FieldOffset(Offset = "0x0")]
		private readonly HierarchyFlattenedChildrenEnumerable m_Enumerable;

		[Token(Token = "0x4000005")]
		[FieldOffset(Offset = "0x30")]
		private readonly int m_End;

		[Token(Token = "0x4000006")]
		[FieldOffset(Offset = "0x34")]
		private readonly int m_Depth;

		[Token(Token = "0x4000007")]
		[FieldOffset(Offset = "0x38")]
		private readonly int m_Version;

		[Token(Token = "0x4000008")]
		[FieldOffset(Offset = "0x3C")]
		private int m_Current;

		[Token(Token = "0x17000001")]
		public unsafe ref readonly HierarchyFlattenedNode Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000006")]
			[Address(RVA = "0x2F7C400", Offset = "0x2F7AA00", VA = "0x182F7C400")]
			get
			{
				return ref *(HierarchyFlattenedNode*)null;
			}
		}

		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2F7C160", Offset = "0x2F7A760", VA = "0x182F7C160")]
		internal Enumerator(HierarchyFlattenedChildrenEnumerable enumerable)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x2F7BD60", Offset = "0x2F7A360", VA = "0x182F7BD60")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x2F7B340", Offset = "0x2F79940", VA = "0x182F7B340")]
		private void ThrowIfVersionChanged()
		{
		}
	}

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private readonly HierarchyFlattened m_HierarchyFlattened;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	private readonly HierarchyFlattenedNode m_ParentNode;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x2C")]
	private readonly int m_ParentIndex;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2F7C8D0", Offset = "0x2F7AED0", VA = "0x182F7C8D0")]
	internal HierarchyFlattenedChildrenEnumerable(HierarchyFlattened hierarchyFlattened, in HierarchyNode node)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2F7C860", Offset = "0x2F7AE60", VA = "0x182F7C860")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
