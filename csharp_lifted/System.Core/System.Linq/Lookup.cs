// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Lookup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000037")]
[DefaultMember("Item")]
public class Lookup<TKey, TElement> : IEnumerable<IGrouping<TKey, TElement>>, IEnumerable
{
	[Token(Token = "0x2000038")]
	internal class Grouping : IGrouping<TKey, TElement>, IEnumerable<TElement>, IEnumerable, IList<TElement>, ICollection<TElement>
	{
		[Token(Token = "0x2000039")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__7 : IEnumerator<TElement>, IDisposable, IEnumerator
		{
			[Token(Token = "0x40000BE")]
			[FieldOffset(Offset = "0x0")]
			private int _003C_003E1__state;

			[Token(Token = "0x40000BF")]
			[FieldOffset(Offset = "0x0")]
			private TElement _003C_003E2__current;

			[Token(Token = "0x40000C0")]
			[FieldOffset(Offset = "0x0")]
			public Grouping _003C_003E4__this;

			[Token(Token = "0x40000C1")]
			[FieldOffset(Offset = "0x0")]
			private int _003Ci_003E5__2;

			[Token(Token = "0x17000035")]
			private TElement System_002ECollections_002EGeneric_002EIEnumerator_003CTElement_003E_002ECurrent
			{
				[Token(Token = "0x600018A")]
				[DebuggerHidden]
				get
				{
					return (TElement)null;
				}
			}

			[Token(Token = "0x17000036")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x600018C")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000187")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__7(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000188")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000189")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x600018B")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x40000B8")]
		[FieldOffset(Offset = "0x0")]
		internal TKey key;

		[Token(Token = "0x40000B9")]
		[FieldOffset(Offset = "0x0")]
		internal int hashCode;

		[Token(Token = "0x40000BA")]
		[FieldOffset(Offset = "0x0")]
		internal TElement[] elements;

		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x0")]
		internal int count;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0x0")]
		internal Grouping hashNext;

		[Token(Token = "0x40000BD")]
		[FieldOffset(Offset = "0x0")]
		internal Grouping next;

		[Token(Token = "0x17000031")]
		public TKey Key
		{
			[Token(Token = "0x6000179")]
			get
			{
				return (TKey)null;
			}
		}

		[Token(Token = "0x17000032")]
		private int System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002ECount
		{
			[Token(Token = "0x600017A")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000033")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EIsReadOnly
		{
			[Token(Token = "0x600017B")]
			get
			{
				return default(bool);
			}
		}

		// C# has no syntax for parameterized property 'System.Collections.Generic.IList<TElement>.Item'.
		// Its 'property:' attributes below are ignored by the compiler (CS0657).
		[property: Token(Token = "0x17000034")]
		[Token(Token = "0x6000184")]
		private TElement System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002Eget_Item(int index)
		{
			return (TElement)null;
		}

		[Token(Token = "0x6000185")]
		private void System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002Eset_Item(int index, TElement value)
		{
		}

		[Token(Token = "0x6000176")]
		internal void Add(TElement element)
		{
		}

		[Token(Token = "0x6000177")]
		[IteratorStateMachine(typeof(Lookup<, >.Grouping._003CGetEnumerator_003Ed__7))]
		public IEnumerator<TElement> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000178")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600017C")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EAdd(TElement item)
		{
		}

		[Token(Token = "0x600017D")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EClear()
		{
		}

		[Token(Token = "0x600017E")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002EContains(TElement item)
		{
			return default(bool);
		}

		[Token(Token = "0x600017F")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002ECopyTo(TElement[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000180")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTElement_003E_002ERemove(TElement item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000181")]
		private int System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002EIndexOf(TElement item)
		{
			return default(int);
		}

		[Token(Token = "0x6000182")]
		private void System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002EInsert(int index, TElement item)
		{
		}

		[Token(Token = "0x6000183")]
		private void System_002ECollections_002EGeneric_002EIList_003CTElement_003E_002ERemoveAt(int index)
		{
		}

		[Token(Token = "0x6000186")]
		public Grouping()
		{
		}
	}

	[Token(Token = "0x200003A")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__12 : IEnumerator<IGrouping<TKey, TElement>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40000C2")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x0")]
		private IGrouping<TKey, TElement> _003C_003E2__current;

		[Token(Token = "0x40000C4")]
		[FieldOffset(Offset = "0x0")]
		public Lookup<TKey, TElement> _003C_003E4__this;

		[Token(Token = "0x40000C5")]
		[FieldOffset(Offset = "0x0")]
		private Grouping _003Cg_003E5__2;

		[Token(Token = "0x17000037")]
		private IGrouping<TKey, TElement> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ELinq_002EIGrouping_003CTKey_002CTElement_003E_003E_002ECurrent
		{
			[Token(Token = "0x6000190")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000038")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000192")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600018D")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600018E")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600018F")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000191")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> comparer;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x0")]
	private Grouping[] groupings;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	private Grouping lastGrouping;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x0")]
	private int count;

	[Token(Token = "0x600016F")]
	internal static Lookup<TKey, TElement> Create<TSource>(IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	private Lookup(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000171")]
	[IteratorStateMachine(typeof(Lookup<, >._003CGetEnumerator_003Ed__12))]
	public IEnumerator<IGrouping<TKey, TElement>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	internal int InternalGetHashCode(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000174")]
	internal Grouping GetGrouping(TKey key, bool create)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	private void Resize()
	{
	}
}
