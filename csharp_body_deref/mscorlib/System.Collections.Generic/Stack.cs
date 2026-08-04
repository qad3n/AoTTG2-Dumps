// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Stack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000662")]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.StackDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class Stack<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000663")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001B60")]
		[FieldOffset(Offset = "0x0")]
		private readonly Stack<T> _stack;

		[Token(Token = "0x4001B61")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x4001B62")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001B63")]
		[FieldOffset(Offset = "0x0")]
		private T _currentElement;

		[Token(Token = "0x17000840")]
		public T Current
		{
			[Token(Token = "0x60032B1")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000841")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60032B3")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60032AE")]
		internal Enumerator(Stack<T> stack)
		{
		}

		[Token(Token = "0x60032AF")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60032B0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60032B2")]
		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		[Token(Token = "0x60032B4")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B5B")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x4001B5C")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4001B5D")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001B5E")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4001B5F")]
	private const int DefaultCapacity = 4;

	[Token(Token = "0x1700083D")]
	public int Count
	{
		[Token(Token = "0x600329F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700083E")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60032A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700083F")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60032A1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600329D")]
	public Stack()
	{
	}

	[Token(Token = "0x600329E")]
	public Stack(int capacity)
	{
	}

	[Token(Token = "0x60032A2")]
	public void Clear()
	{
	}

	[Token(Token = "0x60032A3")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60032A4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60032A5")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60032A6")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60032A7")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60032A8")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x60032A9")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x60032AA")]
	public bool TryPop(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x60032AB")]
	public void Push(T item)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60032AC")]
	private void PushWithResize(T item)
	{
	}

	[Token(Token = "0x60032AD")]
	private void ThrowForEmptyStack()
	{
	}
}
