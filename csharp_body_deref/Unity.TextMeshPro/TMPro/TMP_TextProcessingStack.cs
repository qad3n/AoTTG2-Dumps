// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextProcessingStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x20000A0")]
[DebuggerDisplay("Item count = {m_Count}")]
public struct TMP_TextProcessingStack<T>
{
	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x0")]
	public T[] itemStack;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x0")]
	private T m_DefaultItem;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x0")]
	private int m_RolloverSize;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x40005EE")]
	private const int k_DefaultCapacity = 4;

	[Token(Token = "0x1700016E")]
	public int Count
	{
		[Token(Token = "0x600060B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016F")]
	public T current
	{
		[Token(Token = "0x600060C")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000170")]
	public int rolloverSize
	{
		[Token(Token = "0x600060D")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600060E")]
		set
		{
		}
	}

	[Token(Token = "0x6000608")]
	public TMP_TextProcessingStack(T[] stack)
	{
	}

	[Token(Token = "0x6000609")]
	public TMP_TextProcessingStack(int capacity)
	{
	}

	[Token(Token = "0x600060A")]
	public TMP_TextProcessingStack(int capacity, int rolloverSize)
	{
	}

	[Token(Token = "0x600060F")]
	internal static void SetDefault(TMP_TextProcessingStack<T>[] stack, T item)
	{
	}

	[Token(Token = "0x6000610")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000611")]
	public void SetDefault(T item)
	{
	}

	[Token(Token = "0x6000612")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000613")]
	public T Remove()
	{
		return (T)null;
	}

	[Token(Token = "0x6000614")]
	public void Push(T item)
	{
	}

	[Token(Token = "0x6000615")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x6000616")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6000617")]
	public T CurrentItem()
	{
		return (T)null;
	}

	[Token(Token = "0x6000618")]
	public T PreviousItem()
	{
		return (T)null;
	}
}
