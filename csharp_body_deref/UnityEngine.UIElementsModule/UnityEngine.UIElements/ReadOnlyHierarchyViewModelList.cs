// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReadOnlyHierarchyViewModelList
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6A93570", Offset = "0x6A92570", VA = "0x6A93570", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x6A93350", Offset = "0x6A92350", VA = "0x6A93350")]
		public Enumerator(HierarchyViewModel hierarchyViewModel)
		{
		}

		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x6A935D0", Offset = "0x6A925D0", VA = "0x6A935D0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x6A93600", Offset = "0x6A92600", VA = "0x6A93600", Slot = "6")]
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
		[Address(RVA = "0x6A92DF0", Offset = "0x6A91DF0", VA = "0x6A92DF0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x6A92E00", Offset = "0x6A91E00", VA = "0x6A92E00", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	public int Count
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x6A92E10", Offset = "0x6A91E10", VA = "0x6A92E10", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	public object this[int index]
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x6A92F90", Offset = "0x6A91F90", VA = "0x6A92F90", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x6A93070", Offset = "0x6A92070", VA = "0x6A93070", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x6A933B0", Offset = "0x6A923B0", VA = "0x6A933B0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public object SyncRoot
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x6A933F0", Offset = "0x6A923F0", VA = "0x6A933F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x6A92E30", Offset = "0x6A91E30", VA = "0x6A92E30", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x6A92EB0", Offset = "0x6A91EB0", VA = "0x6A92EB0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x6A92F60", Offset = "0x6A91F60", VA = "0x6A92F60")]
	public ReadOnlyHierarchyViewModelList(HierarchyViewModel viewModel)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x6A930B0", Offset = "0x6A920B0", VA = "0x6A930B0", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x6A93290", Offset = "0x6A92290", VA = "0x6A93290", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x6A93430", Offset = "0x6A92430", VA = "0x6A93430", Slot = "6")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x6A93470", Offset = "0x6A92470", VA = "0x6A93470", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x6A934B0", Offset = "0x6A924B0", VA = "0x6A934B0", Slot = "12")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x6A934F0", Offset = "0x6A924F0", VA = "0x6A934F0", Slot = "13")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x6A93530", Offset = "0x6A92530", VA = "0x6A93530", Slot = "14")]
	public void RemoveAt(int index)
	{
	}
}
