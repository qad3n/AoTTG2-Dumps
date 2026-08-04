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
[Token(Token = "0x2000615")]
[DebuggerTypeProxy(typeof(StackDebugView))]
[DebuggerDisplay("Count = {Count}")]
public class Stack : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x2000616")]
	private class StackEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001A8C")]
		[FieldOffset(Offset = "0x10")]
		private Stack _stack;

		[Token(Token = "0x4001A8D")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x4001A8E")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x4001A8F")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x17000772")]
		public virtual object Current
		{
			[Token(Token = "0x6002FB2")]
			[Address(RVA = "0x3C852D0", Offset = "0x3C852D0", VA = "0x3C852D0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FAF")]
		[Address(RVA = "0x3C84F30", Offset = "0x3C84F30", VA = "0x3C84F30")]
		internal StackEnumerator(Stack stack)
		{
		}

		[Token(Token = "0x6002FB0")]
		[Address(RVA = "0x3C851C0", Offset = "0x3C851C0", VA = "0x3C851C0", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002FB1")]
		[Address(RVA = "0x3C851D0", Offset = "0x3C851D0", VA = "0x3C851D0", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FB3")]
		[Address(RVA = "0x3C85350", Offset = "0x3C85350", VA = "0x3C85350", Slot = "10")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x2000617")]
	internal class StackDebugView
	{
	}

	[Token(Token = "0x4001A87")]
	[FieldOffset(Offset = "0x10")]
	private object[] _array;

	[Token(Token = "0x4001A88")]
	[FieldOffset(Offset = "0x18")]
	private int _size;

	[Token(Token = "0x4001A89")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001A8A")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x4001A8B")]
	private const int _defaultCapacity = 10;

	[Token(Token = "0x1700076F")]
	public virtual int Count
	{
		[Token(Token = "0x6002FA5")]
		[Address(RVA = "0x3C84A90", Offset = "0x3C84A90", VA = "0x3C84A90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000770")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002FA6")]
		[Address(RVA = "0x3C84AA0", Offset = "0x3C84AA0", VA = "0x3C84AA0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000771")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002FA7")]
		[Address(RVA = "0x3C84AB0", Offset = "0x3C84AB0", VA = "0x3C84AB0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FA3")]
	[Address(RVA = "0x3C84960", Offset = "0x3C84960", VA = "0x3C84960")]
	public Stack()
	{
	}

	[Token(Token = "0x6002FA4")]
	[Address(RVA = "0x3C849C0", Offset = "0x3C849C0", VA = "0x3C849C0")]
	public Stack(int initialCapacity)
	{
	}

	[Token(Token = "0x6002FA8")]
	[Address(RVA = "0x3C84B30", Offset = "0x3C84B30", VA = "0x3C84B30", Slot = "13")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002FA9")]
	[Address(RVA = "0x3C84B60", Offset = "0x3C84B60", VA = "0x3C84B60", Slot = "14")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002FAA")]
	[Address(RVA = "0x3C84BE0", Offset = "0x3C84BE0", VA = "0x3C84BE0", Slot = "15")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002FAB")]
	[Address(RVA = "0x3C84EA0", Offset = "0x3C84EA0", VA = "0x3C84EA0", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FAC")]
	[Address(RVA = "0x3C84F90", Offset = "0x3C84F90", VA = "0x3C84F90", Slot = "17")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002FAD")]
	[Address(RVA = "0x3C85010", Offset = "0x3C85010", VA = "0x3C85010", Slot = "18")]
	public virtual object Pop()
	{
		return null;
	}

	[Token(Token = "0x6002FAE")]
	[Address(RVA = "0x3C850B0", Offset = "0x3C850B0", VA = "0x3C850B0", Slot = "19")]
	public virtual void Push(object obj)
	{
	}
}
