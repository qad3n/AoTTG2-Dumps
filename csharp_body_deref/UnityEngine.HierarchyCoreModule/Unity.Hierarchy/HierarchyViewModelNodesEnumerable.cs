// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyViewModelNodesEnumerable
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Hierarchy;

[Token(Token = "0x2000011")]
public readonly struct HierarchyViewModelNodesEnumerable
{
	[Token(Token = "0x2000012")]
	internal delegate bool Predicate(in HierarchyNode node, HierarchyNodeFlags flags);

	[Token(Token = "0x2000013")]
	public struct Enumerator
	{
		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x0")]
		private readonly HierarchyViewModel m_HierarchyViewModel;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x8")]
		private readonly Predicate m_Predicate;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x10")]
		private readonly HierarchyNodeFlags m_Flags;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x18")]
		private readonly ReadOnlyNativeVector<HierarchyFlattenedNode> m_FlattenedNodes;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x28")]
		private readonly int m_Version;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x2C")]
		private int m_Index;

		[Token(Token = "0x17000007")]
		public unsafe ref readonly HierarchyNode Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600004A")]
			[Address(RVA = "0x2F7C460", Offset = "0x2F7AA60", VA = "0x182F7C460")]
			get
			{
				return ref *(HierarchyNode*)null;
			}
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x2F7C210", Offset = "0x2F7A810", VA = "0x182F7C210")]
		internal Enumerator(HierarchyViewModelNodesEnumerable enumerable)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x2F7BE70", Offset = "0x2F7A470", VA = "0x182F7BE70")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2F7B3C0", Offset = "0x2F799C0", VA = "0x182F7B3C0")]
		private void ThrowIfVersionChanged()
		{
		}
	}

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x0")]
	private readonly HierarchyViewModel m_HierarchyViewModel;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x8")]
	private readonly Predicate m_Predicate;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x10")]
	private readonly HierarchyNodeFlags m_Flags;

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2F802D0", Offset = "0x2F7E8D0", VA = "0x182F802D0")]
	internal HierarchyViewModelNodesEnumerable(HierarchyViewModel viewModel, HierarchyNodeFlags flags, Predicate predicate)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2F80240", Offset = "0x2F7E840", VA = "0x182F80240")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
