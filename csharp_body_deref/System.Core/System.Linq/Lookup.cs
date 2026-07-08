using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000036")]
[DefaultMember("Item")]
public class Lookup<TKey, TElement> : IEnumerable<IGrouping<TKey, TElement>>, IEnumerable
{
	[Token(Token = "0x2000037")]
	internal class Grouping : IGrouping<TKey, TElement>, IEnumerable<TElement>, IEnumerable, IList<TElement>, ICollection<TElement>
	{
		[Token(Token = "0x2000038")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__7 : IEnumerator<TElement>, IDisposable, IEnumerator
		{
			[Token(Token = "0x40000B5")]
			[FieldOffset(Offset = "0x0")]
			private int _003C_003E1__state;

			[Token(Token = "0x40000B6")]
			[FieldOffset(Offset = "0x0")]
			private TElement _003C_003E2__current;

			[Token(Token = "0x40000B7")]
			[FieldOffset(Offset = "0x0")]
			public Grouping _003C_003E4__this;

			[Token(Token = "0x40000B8")]
			[FieldOffset(Offset = "0x0")]
			private int _003Ci_003E5__2;

			[Token(Token = "0x17000033")]
			private TElement System_002ECollections_002EGeneric_002EIEnumerator_003CTElement_003E_002ECurrent
			{
				[Token(Token = "0x6000180")]
				[DebuggerHidden]
				get
				{
					return (TElement)null;
				}
			}

			[Token(Token = "0x17000034")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000182")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600017D")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__7(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x600017E")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x600017F")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000181")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x40000AF")]
		[FieldOffset(Offset = "0x0")]
		internal TKey key;

		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x0")]
		internal int hashCode;

		[Token(Token = "0x40000B1")]
		[FieldOffset(Offset = "0x0")]
		internal TElement[] elements;

		[Token(Token = "0x40000B2")]
		[FieldOffset(Offset = "0x0")]
		internal int count;

		[Token(Token = "0x40000B3")]
		[FieldOffset(Offset = "0x0")]
		internal Grouping hashNext;

		[Token(Token = "0x40000B4")]
		[FieldOffset(Offset = "0x0")]
		internal Grouping next;

		[Token(Token = "0x1700002F")]
		public TKey Key
		{
			[Token(Token = "0x600016F")]
			get
			{
				return (TKey)null;
			}
		}

		[Token(Token = "0x17000030")]
		private int System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002ECount
		{
			[Token(Token = "0x6000170")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000031")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EIsReadOnly
		{
			[Token(Token = "0x6000171")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000032")]
		private TElement System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002EItem
		{
			[Token(Token = "0x600017A")]
			get
			{
				return (TElement)null;
			}
			[Token(Token = "0x600017B")]
			set
			{
			}
		}

		[Token(Token = "0x600016C")]
		internal void Add(TElement element)
		{
		}

		[Token(Token = "0x600016D")]
		[IteratorStateMachine(typeof(Lookup<, >.Grouping._003CGetEnumerator_003Ed__7))]
		public IEnumerator<TElement> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600016E")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000172")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EAdd(TElement item)
		{
		}

		[Token(Token = "0x6000173")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EClear()
		{
		}

		[Token(Token = "0x6000174")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EContains(TElement item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000175")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002ECopyTo(TElement[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000176")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002ERemove(TElement item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000177")]
		private int System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002EIndexOf(TElement item)
		{
			return default(int);
		}

		[Token(Token = "0x6000178")]
		private void System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002EInsert(int index, TElement item)
		{
		}

		[Token(Token = "0x6000179")]
		private void System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002ERemoveAt(int index)
		{
		}

		[Token(Token = "0x600017C")]
		public Grouping()
		{
		}
	}

	[Token(Token = "0x2000039")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__12 : IEnumerator<IGrouping<TKey, TElement>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40000B9")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000BA")]
		[FieldOffset(Offset = "0x0")]
		private IGrouping<TKey, TElement> _003C_003E2__current;

		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x0")]
		public Lookup<TKey, TElement> _003C_003E4__this;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0x0")]
		private Grouping _003Cg_003E5__2;

		[Token(Token = "0x17000035")]
		private IGrouping<TKey, TElement> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ELinq_002EIGrouping_003CTKey_002CTElement_003E_003E_002ECurrent
		{
			[Token(Token = "0x6000186")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000036")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000188")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000183")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000184")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000185")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000187")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> comparer;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x0")]
	private Grouping[] groupings;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x0")]
	private Grouping lastGrouping;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x0")]
	private int count;

	[Token(Token = "0x6000165")]
	internal static Lookup<TKey, TElement> Create<TSource>(IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	private Lookup(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000167")]
	[IteratorStateMachine(typeof(Lookup<, >._003CGetEnumerator_003Ed__12))]
	public IEnumerator<IGrouping<TKey, TElement>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	internal int InternalGetHashCode(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x600016A")]
	internal Grouping GetGrouping(TKey key, bool create)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	private void Resize()
	{
	}
}
