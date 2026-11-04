// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReadOnlyHierarchyViewModelList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using Il2CppDummyDll;
using Unity.Hierarchy;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000053")]
internal class ReadOnlyHierarchyViewModelList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x2000054")]
	private struct Enumerator : IEnumerator
	{
		[Token(Token = "0x4000101")]
		[FieldOffset(Offset = "0x0")]
		private readonly HierarchyViewModel m_HierarchyViewModel;

		[Token(Token = "0x4000102")]
		[FieldOffset(Offset = "0x8")]
		private HierarchyViewModel.Enumerator m_Enumerator;

		[Token(Token = "0x1700005F")]
		public object Current
		{
			[Token(Token = "0x60001FB")]
			[Address(RVA = "0x3091A50", Offset = "0x3090050", VA = "0x183091A50", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x30919F0", Offset = "0x308FFF0", VA = "0x1830919F0")]
		public Enumerator(HierarchyViewModel hierarchyViewModel)
		{
		}

		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x3091960", Offset = "0x308FF60", VA = "0x183091960", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x30919A0", Offset = "0x308FFA0", VA = "0x1830919A0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x10")]
	private readonly HierarchyViewModel m_HierarchyViewModel;

	[Token(Token = "0x17000059")]
	public bool IsFixedSize
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	public int Count
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x3096A30", Offset = "0x3095030", VA = "0x183096A30", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	public object this[int index]
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3096A90", Offset = "0x3095090", VA = "0x183096A90", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3096B60", Offset = "0x3095160", VA = "0x183096B60", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x3096A50", Offset = "0x3095050", VA = "0x183096A50", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public object SyncRoot
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3096B20", Offset = "0x3095120", VA = "0x183096B20", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x3096610", Offset = "0x3094C10", VA = "0x183096610", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3096890", Offset = "0x3094E90", VA = "0x183096890", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ReadOnlyHierarchyViewModelList(HierarchyViewModel viewModel)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x30966C0", Offset = "0x3094CC0", VA = "0x1830966C0", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x30967C0", Offset = "0x3094DC0", VA = "0x1830967C0", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x3096590", Offset = "0x3094B90", VA = "0x183096590", Slot = "6")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x30965D0", Offset = "0x3094BD0", VA = "0x1830965D0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3096970", Offset = "0x3094F70", VA = "0x183096970", Slot = "12")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x30969F0", Offset = "0x3094FF0", VA = "0x1830969F0", Slot = "13")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x30969B0", Offset = "0x3094FB0", VA = "0x1830969B0", Slot = "14")]
	public void RemoveAt(int index)
	{
	}
}
