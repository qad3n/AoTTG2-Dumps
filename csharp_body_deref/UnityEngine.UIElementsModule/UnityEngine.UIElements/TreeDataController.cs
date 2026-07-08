using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200002B")]
internal sealed class TreeDataController<T>
{
	[Token(Token = "0x200002C")]
	[CompilerGenerated]
	private sealed class _003CGetAllItemIds_003Ed__13 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400006D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400006E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E2__current;

		[Token(Token = "0x400006F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000070")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerable<int> rootIds;

		[Token(Token = "0x4000071")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IEnumerable<int> _003C_003E3__rootIds;

		[Token(Token = "0x4000072")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TreeDataController<T> _003C_003E4__this;

		[Token(Token = "0x4000073")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerator<int> _003CcurrentIterator_003E5__1;

		[Token(Token = "0x4000074")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool _003ChasNext_003E5__2;

		[Token(Token = "0x4000075")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CcurrentItemId_003E5__3;

		[Token(Token = "0x1700002D")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x600014D")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700002E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600014F")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600014A")]
		[DebuggerHidden]
		public _003CGetAllItemIds_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600014B")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600014C")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600014E")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000150")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000151")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200002D")]
	[CompilerGenerated]
	private sealed class _003CGetItemIds_003Ed__9 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000076")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000077")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E2__current;

		[Token(Token = "0x4000078")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000079")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerable<TreeViewItemData<T>> items;

		[Token(Token = "0x400007A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IEnumerable<TreeViewItemData<T>> _003C_003E3__items;

		[Token(Token = "0x400007B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerator<TreeViewItemData<T>> _003C_003Es__1;

		[Token(Token = "0x400007C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TreeViewItemData<T> _003Citem_003E5__2;

		[Token(Token = "0x1700002F")]
		private int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x6000156")]
			[DebuggerHidden]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000030")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000158")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000152")]
		[DebuggerHidden]
		public _003CGetItemIds_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000153")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000154")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000155")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000157")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000159")]
		[DebuggerHidden]
		private IEnumerator<int> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EInt32_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600015A")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TreeData<T> m_TreeData;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Stack<IEnumerator<int>> m_IteratorStack;

	[Token(Token = "0x6000140")]
	public void SetRootItems(IList<TreeViewItemData<T>> rootItems)
	{
	}

	[Token(Token = "0x6000141")]
	public T GetDataForId(int id)
	{
		return (T)null;
	}

	[Token(Token = "0x6000142")]
	public int GetParentId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000143")]
	public bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000144")]
	[IteratorStateMachine(typeof(TreeDataController<>._003CGetItemIds_003Ed__9))]
	private static IEnumerable<int> GetItemIds(IEnumerable<TreeViewItemData<T>> items)
	{
		return null;
	}

	[Token(Token = "0x6000145")]
	public IEnumerable<int> GetChildrenIds(int id)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	public void Move(int id, int newParentId, int childIndex = -1)
	{
	}

	[Token(Token = "0x6000147")]
	public bool IsChildOf(int childId, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000148")]
	[IteratorStateMachine(typeof(TreeDataController<>._003CGetAllItemIds_003Ed__13))]
	public IEnumerable<int> GetAllItemIds([Optional] IEnumerable<int> rootIds)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	public TreeDataController()
	{
	}
}
