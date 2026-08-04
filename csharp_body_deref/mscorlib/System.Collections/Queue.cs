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
[Token(Token = "0x200060B")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(QueueDebugView))]
public class Queue : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x200060C")]
	private class QueueEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001A6D")]
		[FieldOffset(Offset = "0x10")]
		private Queue _q;

		[Token(Token = "0x4001A6E")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x4001A6F")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x4001A70")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x1700074B")]
		public virtual object Current
		{
			[Token(Token = "0x6002F36")]
			[Address(RVA = "0x3C80CD0", Offset = "0x3C80CD0", VA = "0x3C80CD0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F33")]
		[Address(RVA = "0x3C809D0", Offset = "0x3C809D0", VA = "0x3C809D0")]
		internal QueueEnumerator(Queue q)
		{
		}

		[Token(Token = "0x6002F34")]
		[Address(RVA = "0x3C80BE0", Offset = "0x3C80BE0", VA = "0x3C80BE0", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002F35")]
		[Address(RVA = "0x3C80BF0", Offset = "0x3C80BF0", VA = "0x3C80BF0", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F37")]
		[Address(RVA = "0x3C80D50", Offset = "0x3C80D50", VA = "0x3C80D50", Slot = "10")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x200060D")]
	internal class QueueDebugView
	{
	}

	[Token(Token = "0x4001A66")]
	[FieldOffset(Offset = "0x10")]
	private object[] _array;

	[Token(Token = "0x4001A67")]
	[FieldOffset(Offset = "0x18")]
	private int _head;

	[Token(Token = "0x4001A68")]
	[FieldOffset(Offset = "0x1C")]
	private int _tail;

	[Token(Token = "0x4001A69")]
	[FieldOffset(Offset = "0x20")]
	private int _size;

	[Token(Token = "0x4001A6A")]
	[FieldOffset(Offset = "0x24")]
	private int _growFactor;

	[Token(Token = "0x4001A6B")]
	[FieldOffset(Offset = "0x28")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001A6C")]
	[FieldOffset(Offset = "0x30")]
	private object _syncRoot;

	[Token(Token = "0x17000748")]
	public virtual int Count
	{
		[Token(Token = "0x6002F28")]
		[Address(RVA = "0x3C80430", Offset = "0x3C80430", VA = "0x3C80430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000749")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002F2A")]
		[Address(RVA = "0x3C80510", Offset = "0x3C80510", VA = "0x3C80510", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074A")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002F2B")]
		[Address(RVA = "0x3C80520", Offset = "0x3C80520", VA = "0x3C80520", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F24")]
	[Address(RVA = "0x3C7FF60", Offset = "0x3C7FF60", VA = "0x3C7FF60")]
	public Queue()
	{
	}

	[Token(Token = "0x6002F25")]
	[Address(RVA = "0x3C80170", Offset = "0x3C80170", VA = "0x3C80170")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6002F26")]
	[Address(RVA = "0x3C7FFC0", Offset = "0x3C7FFC0", VA = "0x3C7FFC0")]
	public Queue(int capacity, float growFactor)
	{
	}

	[Token(Token = "0x6002F27")]
	[Address(RVA = "0x3C80180", Offset = "0x3C80180", VA = "0x3C80180")]
	public Queue(ICollection col)
	{
	}

	[Token(Token = "0x6002F29")]
	[Address(RVA = "0x3C80440", Offset = "0x3C80440", VA = "0x3C80440", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002F2C")]
	[Address(RVA = "0x3C805A0", Offset = "0x3C805A0", VA = "0x3C805A0", Slot = "14")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F2D")]
	[Address(RVA = "0x3C80770", Offset = "0x3C80770", VA = "0x3C80770", Slot = "15")]
	public virtual void Enqueue(object obj)
	{
	}

	[Token(Token = "0x6002F2E")]
	[Address(RVA = "0x3C80930", Offset = "0x3C80930", VA = "0x3C80930", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F2F")]
	[Address(RVA = "0x3C80A50", Offset = "0x3C80A50", VA = "0x3C80A50", Slot = "17")]
	public virtual object Dequeue()
	{
		return null;
	}

	[Token(Token = "0x6002F30")]
	[Address(RVA = "0x3C80B20", Offset = "0x3C80B20", VA = "0x3C80B20", Slot = "18")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002F31")]
	[Address(RVA = "0x3C80BB0", Offset = "0x3C80BB0", VA = "0x3C80BB0")]
	internal object GetElement(int i)
	{
		return null;
	}

	[Token(Token = "0x6002F32")]
	[Address(RVA = "0x3C80860", Offset = "0x3C80860", VA = "0x3C80860")]
	private void SetCapacity(int capacity)
	{
	}
}
