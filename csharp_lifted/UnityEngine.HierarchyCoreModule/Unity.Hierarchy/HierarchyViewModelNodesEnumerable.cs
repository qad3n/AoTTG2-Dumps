// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyViewModelNodesEnumerable
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6971B60", Offset = "0x6970B60", VA = "0x6971B60")]
			get
			{
				return ref *(HierarchyNode*)null;
			}
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x6971A30", Offset = "0x6970A30", VA = "0x6971A30")]
		internal Enumerator(HierarchyViewModelNodesEnumerable enumerable)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x6971C50", Offset = "0x6970C50", VA = "0x6971C50")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x6971D90", Offset = "0x6970D90", VA = "0x6971D90")]
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
	[Address(RVA = "0x6971910", Offset = "0x6970910", VA = "0x6971910")]
	internal HierarchyViewModelNodesEnumerable(HierarchyViewModel viewModel, HierarchyNodeFlags flags, Predicate predicate)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x69719B0", Offset = "0x69709B0", VA = "0x69719B0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
