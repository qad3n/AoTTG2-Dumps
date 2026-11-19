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
[Token(Token = "0x20005BA")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(QueueDebugView))]
public class Queue : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005BB")]
	private class QueueEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x40017EF")]
		[FieldOffset(Offset = "0x10")]
		private Queue _q;

		[Token(Token = "0x40017F0")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x40017F1")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x40017F2")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x170006D9")]
		public virtual object Current
		{
			[Token(Token = "0x6002C24")]
			[Address(RVA = "0x5453DC0", Offset = "0x5452DC0", VA = "0x5453DC0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C21")]
		[Address(RVA = "0x5453AC0", Offset = "0x5452AC0", VA = "0x5453AC0")]
		internal QueueEnumerator(Queue q)
		{
		}

		[Token(Token = "0x6002C22")]
		[Address(RVA = "0x5453CD0", Offset = "0x5452CD0", VA = "0x5453CD0", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C23")]
		[Address(RVA = "0x5453CE0", Offset = "0x5452CE0", VA = "0x5453CE0", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002C25")]
		[Address(RVA = "0x5453E40", Offset = "0x5452E40", VA = "0x5453E40", Slot = "10")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x20005BC")]
	internal class QueueDebugView
	{
	}

	[Token(Token = "0x40017E8")]
	[FieldOffset(Offset = "0x10")]
	private object[] _array;

	[Token(Token = "0x40017E9")]
	[FieldOffset(Offset = "0x18")]
	private int _head;

	[Token(Token = "0x40017EA")]
	[FieldOffset(Offset = "0x1C")]
	private int _tail;

	[Token(Token = "0x40017EB")]
	[FieldOffset(Offset = "0x20")]
	private int _size;

	[Token(Token = "0x40017EC")]
	[FieldOffset(Offset = "0x24")]
	private int _growFactor;

	[Token(Token = "0x40017ED")]
	[FieldOffset(Offset = "0x28")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40017EE")]
	[FieldOffset(Offset = "0x30")]
	private object _syncRoot;

	[Token(Token = "0x170006D6")]
	public virtual int Count
	{
		[Token(Token = "0x6002C16")]
		[Address(RVA = "0x5453520", Offset = "0x5452520", VA = "0x5453520", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D7")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002C18")]
		[Address(RVA = "0x5453600", Offset = "0x5452600", VA = "0x5453600", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D8")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002C19")]
		[Address(RVA = "0x5453610", Offset = "0x5452610", VA = "0x5453610", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C12")]
	[Address(RVA = "0x5453050", Offset = "0x5452050", VA = "0x5453050")]
	public Queue()
	{
	}

	[Token(Token = "0x6002C13")]
	[Address(RVA = "0x5453260", Offset = "0x5452260", VA = "0x5453260")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6002C14")]
	[Address(RVA = "0x54530B0", Offset = "0x54520B0", VA = "0x54530B0")]
	public Queue(int capacity, float growFactor)
	{
	}

	[Token(Token = "0x6002C15")]
	[Address(RVA = "0x5453270", Offset = "0x5452270", VA = "0x5453270")]
	public Queue(ICollection col)
	{
	}

	[Token(Token = "0x6002C17")]
	[Address(RVA = "0x5453530", Offset = "0x5452530", VA = "0x5453530", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C1A")]
	[Address(RVA = "0x5453690", Offset = "0x5452690", VA = "0x5453690", Slot = "14")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C1B")]
	[Address(RVA = "0x5453860", Offset = "0x5452860", VA = "0x5453860", Slot = "15")]
	public virtual void Enqueue(object obj)
	{
	}

	[Token(Token = "0x6002C1C")]
	[Address(RVA = "0x5453A20", Offset = "0x5452A20", VA = "0x5453A20", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C1D")]
	[Address(RVA = "0x5453B40", Offset = "0x5452B40", VA = "0x5453B40", Slot = "17")]
	public virtual object Dequeue()
	{
		return null;
	}

	[Token(Token = "0x6002C1E")]
	[Address(RVA = "0x5453C10", Offset = "0x5452C10", VA = "0x5453C10", Slot = "18")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002C1F")]
	[Address(RVA = "0x5453CA0", Offset = "0x5452CA0", VA = "0x5453CA0")]
	internal object GetElement(int i)
	{
		return null;
	}

	[Token(Token = "0x6002C20")]
	[Address(RVA = "0x5453950", Offset = "0x5452950", VA = "0x5453950")]
	private void SetCapacity(int capacity)
	{
	}
}
