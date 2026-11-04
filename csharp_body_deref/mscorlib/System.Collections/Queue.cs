// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Queue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005DF")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(QueueDebugView))]
public class Queue : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005E0")]
	private class QueueEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001888")]
		[FieldOffset(Offset = "0x10")]
		private Queue _q;

		[Token(Token = "0x4001889")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x400188A")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x400188B")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x170006DA")]
		public virtual object Current
		{
			[Token(Token = "0x6002C47")]
			[Address(RVA = "0x1AC33B0", Offset = "0x1AC19B0", VA = "0x181AC33B0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C44")]
		[Address(RVA = "0x1AC3330", Offset = "0x1AC1930", VA = "0x181AC3330")]
		internal QueueEnumerator(Queue q)
		{
		}

		[Token(Token = "0x6002C45")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C46")]
		[Address(RVA = "0x1AC3190", Offset = "0x1AC1790", VA = "0x181AC3190", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002C48")]
		[Address(RVA = "0x1AC3280", Offset = "0x1AC1880", VA = "0x181AC3280", Slot = "10")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x20005E1")]
	internal class QueueDebugView
	{
	}

	[Token(Token = "0x4001881")]
	[FieldOffset(Offset = "0x10")]
	private object[] _array;

	[Token(Token = "0x4001882")]
	[FieldOffset(Offset = "0x18")]
	private int _head;

	[Token(Token = "0x4001883")]
	[FieldOffset(Offset = "0x1C")]
	private int _tail;

	[Token(Token = "0x4001884")]
	[FieldOffset(Offset = "0x20")]
	private int _size;

	[Token(Token = "0x4001885")]
	[FieldOffset(Offset = "0x24")]
	private int _growFactor;

	[Token(Token = "0x4001886")]
	[FieldOffset(Offset = "0x28")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001887")]
	[FieldOffset(Offset = "0x30")]
	private object _syncRoot;

	[Token(Token = "0x170006D7")]
	public virtual int Count
	{
		[Token(Token = "0x6002C39")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D8")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002C3B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D9")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002C3C")]
		[Address(RVA = "0x1AC4140", Offset = "0x1AC2740", VA = "0x181AC4140", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C35")]
	[Address(RVA = "0x1AC4120", Offset = "0x1AC2720", VA = "0x181AC4120")]
	public Queue()
	{
	}

	[Token(Token = "0x6002C36")]
	[Address(RVA = "0x1AC4110", Offset = "0x1AC2710", VA = "0x181AC4110")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6002C37")]
	[Address(RVA = "0x1AC3CE0", Offset = "0x1AC22E0", VA = "0x181AC3CE0")]
	public Queue(int capacity, float growFactor)
	{
	}

	[Token(Token = "0x6002C38")]
	[Address(RVA = "0x1AC3E90", Offset = "0x1AC2490", VA = "0x181AC3E90")]
	public Queue(ICollection col)
	{
	}

	[Token(Token = "0x6002C3A")]
	[Address(RVA = "0x1AC3470", Offset = "0x1AC1A70", VA = "0x181AC3470", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C3D")]
	[Address(RVA = "0x1AC3580", Offset = "0x1AC1B80", VA = "0x181AC3580", Slot = "14")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C3E")]
	[Address(RVA = "0x1AC38B0", Offset = "0x1AC1EB0", VA = "0x181AC38B0", Slot = "15")]
	public virtual void Enqueue(object obj)
	{
	}

	[Token(Token = "0x6002C3F")]
	[Address(RVA = "0x1AC3AB0", Offset = "0x1AC20B0", VA = "0x181AC3AB0", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C40")]
	[Address(RVA = "0x1AC37D0", Offset = "0x1AC1DD0", VA = "0x181AC37D0", Slot = "17")]
	public virtual object Dequeue()
	{
		return null;
	}

	[Token(Token = "0x6002C41")]
	[Address(RVA = "0x1AC3B60", Offset = "0x1AC2160", VA = "0x181AC3B60", Slot = "18")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002C42")]
	[Address(RVA = "0x1AC3A70", Offset = "0x1AC2070", VA = "0x181AC3A70")]
	internal object GetElement(int i)
	{
		return null;
	}

	[Token(Token = "0x6002C43")]
	[Address(RVA = "0x1AC3BF0", Offset = "0x1AC21F0", VA = "0x181AC3BF0")]
	private void SetCapacity(int capacity)
	{
	}
}
