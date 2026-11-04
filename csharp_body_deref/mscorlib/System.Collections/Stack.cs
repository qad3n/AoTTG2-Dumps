// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Stack
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005E9")]
[DebuggerTypeProxy(typeof(StackDebugView))]
[DebuggerDisplay("Count = {Count}")]
public class Stack : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005EA")]
	private class StackEnumerator : IEnumerator, ICloneable
	{
		[Token(Token = "0x40018A6")]
		[FieldOffset(Offset = "0x10")]
		private Stack _stack;

		[Token(Token = "0x40018A7")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x40018A8")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x40018A9")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x17000701")]
		public virtual object Current
		{
			[Token(Token = "0x6002CC3")]
			[Address(RVA = "0x1AC6CF0", Offset = "0x1AC52F0", VA = "0x181AC6CF0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002CC0")]
		[Address(RVA = "0x1AC6C90", Offset = "0x1AC5290", VA = "0x181AC6C90")]
		internal StackEnumerator(Stack stack)
		{
		}

		[Token(Token = "0x6002CC1")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002CC2")]
		[Address(RVA = "0x1AC6AB0", Offset = "0x1AC50B0", VA = "0x181AC6AB0", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002CC4")]
		[Address(RVA = "0x1AC6C00", Offset = "0x1AC5200", VA = "0x181AC6C00", Slot = "10")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x20005EB")]
	internal class StackDebugView
	{
	}

	[Token(Token = "0x40018A2")]
	[FieldOffset(Offset = "0x10")]
	private object[] _array;

	[Token(Token = "0x40018A3")]
	[FieldOffset(Offset = "0x18")]
	private int _size;

	[Token(Token = "0x40018A4")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40018A5")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x170006FE")]
	public virtual int Count
	{
		[Token(Token = "0x6002CB6")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006FF")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002CB7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000700")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002CB8")]
		[Address(RVA = "0x1AC8EC0", Offset = "0x1AC74C0", VA = "0x181AC8EC0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002CB4")]
	[Address(RVA = "0x1AC8E60", Offset = "0x1AC7460", VA = "0x181AC8E60")]
	public Stack()
	{
	}

	[Token(Token = "0x6002CB5")]
	[Address(RVA = "0x1AC8D90", Offset = "0x1AC7390", VA = "0x181AC8D90")]
	public Stack(int initialCapacity)
	{
	}

	[Token(Token = "0x6002CB9")]
	[Address(RVA = "0xCFB670", Offset = "0xCF9C70", VA = "0x180CFB670", Slot = "13")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002CBA")]
	[Address(RVA = "0x1AC8690", Offset = "0x1AC6C90", VA = "0x181AC8690", Slot = "14")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002CBB")]
	[Address(RVA = "0x1AC87C0", Offset = "0x1AC6DC0", VA = "0x181AC87C0", Slot = "15")]
	public virtual void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002CBC")]
	[Address(RVA = "0x1AC8AA0", Offset = "0x1AC70A0", VA = "0x181AC8AA0", Slot = "16")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002CBD")]
	[Address(RVA = "0x1AC8B30", Offset = "0x1AC7130", VA = "0x181AC8B30", Slot = "17")]
	public virtual object Peek()
	{
		return null;
	}

	[Token(Token = "0x6002CBE")]
	[Address(RVA = "0x1AC8BC0", Offset = "0x1AC71C0", VA = "0x181AC8BC0", Slot = "18")]
	public virtual object Pop()
	{
		return null;
	}

	[Token(Token = "0x6002CBF")]
	[Address(RVA = "0x1AC8C80", Offset = "0x1AC7280", VA = "0x181AC8C80", Slot = "19")]
	public virtual void Push(object obj)
	{
	}
}
