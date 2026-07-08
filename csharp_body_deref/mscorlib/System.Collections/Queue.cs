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
			[Address(RVA = "0x4F9B1B0", Offset = "0x4F9B1B0", VA = "0x4F9B1B0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F33")]
		[Address(RVA = "0x4F9AEB0", Offset = "0x4F9AEB0", VA = "0x4F9AEB0")]
		internal QueueEnumerator(Queue q)
		{
		}

		[Token(Token = "0x6002F34")]
		[Address(RVA = "0x4F9B0C0", Offset = "0x4F9B0C0", VA = "0x4F9B0C0", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002F35")]
		[Address(RVA = "0x4F9B0D0", Offset = "0x4F9B0D0", VA = "0x4F9B0D0", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F37")]
		[Address(RVA = "0x4F9B230", Offset = "0x4F9B230", VA = "0x4F9B230", Slot = "10")]
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
		[Address(RVA = "0x4F9A910", Offset = "0x4F9A910", VA = "0x4F9A910", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000749")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002F2A")]
		[Address(RVA = "0x4F9A9F0", Offset = "0x4F9A9F0", VA = "0x4F9A9F0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074A")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002F2B")]
		[Address(RVA = "0x4F9AA00", Offset = "0x4F9AA00", VA = "0x4F9AA00", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F24")]
	[Address(RVA = "0x4F9A440", Offset = "0x4F9A440", VA = "0x4F9A440")]
	public Queue()
	{
	}

	[Token(Token = "0x6002F25")]
	[Address(RVA = "0x4F9A650", Offset = "0x4F9A650", VA = "0x4F9A650")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6002F26")]
	[Address(RVA = "0x4F9A4A0", Offset = "0x4F9A4A0", VA = "0x4F9A4A0")]
	public Queue(int capacity, float growFactor)
	{
	}

	[Token(Token = "0x6002F27")]
	[Address(RVA = "0x4F9A660", Offset = "0x4F9A660", VA = "0x4F9A660")]
	public Queue(ICollection col)
	{
	}

	[Token(Token = "0x6002F29")]
	[Address(RVA = "0x4F9A920", Offset = "0x4F9A920", VA = "0x4F9A920", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002F2C")]
	[Address(RVA = "0x4F9AA80", Offset = "0x4F9AA80", VA = "0x4F9AA80", Slot = "14")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F2D")]
	[Address(RVA = "0x4F9AC50", Offset = "0x4F9AC50", VA = "0x4F9AC50", Slot = "15")]
	public virtual void Enqueue(object obj)
	{
	}

	[Token(Token = "0x6002F2E")]
	[Address(RVA = "0x4F9AE10", Offset = "0x4F9AE10", VA = "0x4F9AE10", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F2F")]
	[Address(RVA = "0x4F9AF30", Offset = "0x4F9AF30", VA = "0x4F9AF30", Slot = "17")]
	public virtual object Dequeue()
	{
		return null;
	}

	[Token(Token = "0x6002F30")]
	[Address(RVA = "0x4F9B000", Offset = "0x4F9B000", VA = "0x4F9B000", Slot = "18")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002F31")]
	[Address(RVA = "0x4F9B090", Offset = "0x4F9B090", VA = "0x4F9B090")]
	internal object GetElement(int i)
	{
		return null;
	}

	[Token(Token = "0x6002F32")]
	[Address(RVA = "0x4F9AD40", Offset = "0x4F9AD40", VA = "0x4F9AD40")]
	private void SetCapacity(int capacity)
	{
	}
}
