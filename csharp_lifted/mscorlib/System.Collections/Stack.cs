// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Stack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005C4")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(StackDebugView))]
public class Stack : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005C5")]
	private class StackEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x400180D")]
		[FieldOffset(Offset = "0x10")]
		private Stack _stack;

		[Token(Token = "0x400180E")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x400180F")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x4001810")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x17000700")]
		public virtual object Current
		{
			[Token(Token = "0x6002CA0")]
			[Address(RVA = "0x5458260", Offset = "0x5457260", VA = "0x5458260", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C9D")]
		[Address(RVA = "0x5457EF0", Offset = "0x5456EF0", VA = "0x5457EF0")]
		internal StackEnumerator(Stack stack)
		{
		}

		[Token(Token = "0x6002C9E")]
		[Address(RVA = "0x5458180", Offset = "0x5457180", VA = "0x5458180", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C9F")]
		[Address(RVA = "0x5458190", Offset = "0x5457190", VA = "0x5458190", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002CA1")]
		[Address(RVA = "0x54582E0", Offset = "0x54572E0", VA = "0x54582E0", Slot = "10")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x20005C6")]
	internal class StackDebugView
	{
	}

	[Token(Token = "0x4001809")]
	[FieldOffset(Offset = "0x10")]
	private object[] _array;

	[Token(Token = "0x400180A")]
	[FieldOffset(Offset = "0x18")]
	private int _size;

	[Token(Token = "0x400180B")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x400180C")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x170006FD")]
	public virtual int Count
	{
		[Token(Token = "0x6002C93")]
		[Address(RVA = "0x5457A60", Offset = "0x5456A60", VA = "0x5457A60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006FE")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002C94")]
		[Address(RVA = "0x5457A70", Offset = "0x5456A70", VA = "0x5457A70", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006FF")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002C95")]
		[Address(RVA = "0x5457A80", Offset = "0x5456A80", VA = "0x5457A80", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C91")]
	[Address(RVA = "0x5457930", Offset = "0x5456930", VA = "0x5457930")]
	public Stack()
	{
	}

	[Token(Token = "0x6002C92")]
	[Address(RVA = "0x5457990", Offset = "0x5456990", VA = "0x5457990")]
	public Stack(int initialCapacity)
	{
	}

	[Token(Token = "0x6002C96")]
	[Address(RVA = "0x5457B00", Offset = "0x5456B00", VA = "0x5457B00", Slot = "13")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002C97")]
	[Address(RVA = "0x5457B20", Offset = "0x5456B20", VA = "0x5457B20", Slot = "14")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C98")]
	[Address(RVA = "0x5457BA0", Offset = "0x5456BA0", VA = "0x5457BA0", Slot = "15")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C99")]
	[Address(RVA = "0x5457E60", Offset = "0x5456E60", VA = "0x5457E60", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C9A")]
	[Address(RVA = "0x5457F50", Offset = "0x5456F50", VA = "0x5457F50", Slot = "17")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002C9B")]
	[Address(RVA = "0x5457FD0", Offset = "0x5456FD0", VA = "0x5457FD0", Slot = "18")]
	public virtual object Pop()
	{
		return null;
	}

	[Token(Token = "0x6002C9C")]
	[Address(RVA = "0x5458070", Offset = "0x5457070", VA = "0x5458070", Slot = "19")]
	public virtual void Push(object obj)
	{
	}
}
