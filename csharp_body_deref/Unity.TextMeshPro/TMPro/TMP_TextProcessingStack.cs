using System.Diagnostics;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200008A")]
[DebuggerDisplay("Item count = {m_Count}")]
public struct TMP_TextProcessingStack<T>
{
	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x0")]
	public T[] itemStack;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x0")]
	private T m_DefaultItem;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x0")]
	private int m_RolloverSize;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x40004FA")]
	private const int k_DefaultCapacity = 4;

	[Token(Token = "0x1700014D")]
	public int Count
	{
		[Token(Token = "0x600051A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014E")]
	public T current
	{
		[Token(Token = "0x600051B")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700014F")]
	public int rolloverSize
	{
		[Token(Token = "0x600051C")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600051D")]
		set
		{
		}
	}

	[Token(Token = "0x6000517")]
	public TMP_TextProcessingStack(T[] stack)
	{
	}

	[Token(Token = "0x6000518")]
	public TMP_TextProcessingStack(int capacity)
	{
	}

	[Token(Token = "0x6000519")]
	public TMP_TextProcessingStack(int capacity, int rolloverSize)
	{
	}

	[Token(Token = "0x600051E")]
	internal static void SetDefault(TMP_TextProcessingStack<T>[] stack, T item)
	{
	}

	[Token(Token = "0x600051F")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000520")]
	public void SetDefault(T item)
	{
	}

	[Token(Token = "0x6000521")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000522")]
	public T Remove()
	{
		return (T)null;
	}

	[Token(Token = "0x6000523")]
	public void Push(T item)
	{
	}

	[Token(Token = "0x6000524")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x6000525")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6000526")]
	public T CurrentItem()
	{
		return (T)null;
	}

	[Token(Token = "0x6000527")]
	public T PreviousItem()
	{
		return (T)null;
	}
}
