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
[Token(Token = "0x2000611")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.StackDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
public class Stack<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000612")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40018CA")]
		[FieldOffset(Offset = "0x0")]
		private readonly Stack<T> _stack;

		[Token(Token = "0x40018CB")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x40018CC")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40018CD")]
		[FieldOffset(Offset = "0x0")]
		private T _currentElement;

		[Token(Token = "0x170007CE")]
		public T Current
		{
			[Token(Token = "0x6002FAB")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007CF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002FAD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FA8")]
		internal Enumerator(Stack<T> stack)
		{
		}

		[Token(Token = "0x6002FA9")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002FAA")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FAC")]
		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		[Token(Token = "0x6002FAE")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40018C6")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x40018C7")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x40018C8")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40018C9")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x170007CB")]
	public int Count
	{
		[Token(Token = "0x6002F98")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007CC")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F99")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007CD")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F9A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F96")]
	public Stack()
	{
	}

	[Token(Token = "0x6002F97")]
	public Stack(int capacity)
	{
	}

	[Token(Token = "0x6002F9B")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002F9C")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F9D")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F9E")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002F9F")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FA0")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FA1")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6002FA2")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x6002FA3")]
	public bool TryPop(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FA4")]
	public void Push(T item)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002FA5")]
	private void PushWithResize(T item)
	{
	}

	[Token(Token = "0x6002FA6")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002FA7")]
	private void ThrowForEmptyStack()
	{
	}
}
