// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Stack
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000636")]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.StackDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class Stack<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000637")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001963")]
		[FieldOffset(Offset = "0x0")]
		private readonly Stack<T> _stack;

		[Token(Token = "0x4001964")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x4001965")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001966")]
		[FieldOffset(Offset = "0x0")]
		private T _currentElement;

		[Token(Token = "0x170007CF")]
		public T Current
		{
			[Token(Token = "0x6002FCC")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007D0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002FCE")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FC9")]
		internal Enumerator(Stack<T> stack)
		{
		}

		[Token(Token = "0x6002FCA")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002FCB")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FCD")]
		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		[Token(Token = "0x6002FCF")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400195F")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x4001960")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4001961")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001962")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x170007CC")]
	public int Count
	{
		[Token(Token = "0x6002FB9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007CD")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002FBA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007CE")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002FBB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FB7")]
	public Stack()
	{
	}

	[Token(Token = "0x6002FB8")]
	public Stack(int capacity)
	{
	}

	[Token(Token = "0x6002FBC")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002FBD")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FBE")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002FBF")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002FC0")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FC1")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FC2")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6002FC3")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x6002FC4")]
	public bool TryPop(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FC5")]
	public void Push(T item)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002FC6")]
	private void PushWithResize(T item)
	{
	}

	[Token(Token = "0x6002FC7")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002FC8")]
	private void ThrowForEmptyStack()
	{
	}
}
