// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.OrderedEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x200003E")]
internal abstract class OrderedEnumerable<TElement> : IOrderedEnumerable<TElement>, IEnumerable<TElement>, IEnumerable
{
	[Token(Token = "0x200003F")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__1 : IEnumerator<TElement>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40000D3")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000D4")]
		[FieldOffset(Offset = "0x0")]
		private TElement _003C_003E2__current;

		[Token(Token = "0x40000D5")]
		[FieldOffset(Offset = "0x0")]
		public OrderedEnumerable<TElement> _003C_003E4__this;

		[Token(Token = "0x40000D6")]
		[FieldOffset(Offset = "0x0")]
		private Buffer<TElement> _003Cbuffer_003E5__2;

		[Token(Token = "0x40000D7")]
		[FieldOffset(Offset = "0x0")]
		private int[] _003Cmap_003E5__3;

		[Token(Token = "0x40000D8")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x17000039")]
		private TElement System_002ECollections_002EGeneric_002EIEnumerator_003CTElement_003E_002ECurrent
		{
			[Token(Token = "0x60001A3")]
			[DebuggerHidden]
			get
			{
				return (TElement)null;
			}
		}

		[Token(Token = "0x1700003A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A5")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A0")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__1(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A1")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001A2")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001A4")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x0")]
	internal IEnumerable<TElement> source;

	[Token(Token = "0x600019B")]
	[IteratorStateMachine(typeof(OrderedEnumerable<>._003CGetEnumerator_003Ed__1))]
	public IEnumerator<TElement> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600019C")]
	internal abstract EnumerableSorter<TElement> GetEnumerableSorter(EnumerableSorter<TElement> next);

	[Token(Token = "0x600019D")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	private IOrderedEnumerable<TElement> System_002ELinq_002EIOrderedEnumerable_003CTElement_003E_002ECreateOrderedEnumerable<TKey>(Func<TElement, TKey> keySelector, IComparer<TKey> comparer, bool descending)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	protected OrderedEnumerable()
	{
	}
}
[Token(Token = "0x2000040")]
internal class OrderedEnumerable<TElement, TKey> : OrderedEnumerable<TElement>
{
	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x0")]
	internal OrderedEnumerable<TElement> parent;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TElement, TKey> keySelector;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	internal IComparer<TKey> comparer;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x0")]
	internal bool descending;

	[Token(Token = "0x60001A6")]
	internal OrderedEnumerable(IEnumerable<TElement> source, Func<TElement, TKey> keySelector, IComparer<TKey> comparer, bool descending)
	{
	}

	[Token(Token = "0x60001A7")]
	internal override EnumerableSorter<TElement> GetEnumerableSorter(EnumerableSorter<TElement> next)
	{
		return null;
	}
}
