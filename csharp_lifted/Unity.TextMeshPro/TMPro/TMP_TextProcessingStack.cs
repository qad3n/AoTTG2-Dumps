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

[Token(Token = "0x200009C")]
[DebuggerDisplay("Item count = {m_Count}")]
public struct TMP_TextProcessingStack<T>
{
	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x0")]
	public T[] itemStack;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x0")]
	private T m_DefaultItem;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x0")]
	private int m_RolloverSize;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x400057B")]
	private const int k_DefaultCapacity = 4;

	[Token(Token = "0x17000184")]
	public int Count
	{
		[Token(Token = "0x60005E6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000185")]
	public T current
	{
		[Token(Token = "0x60005E7")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000186")]
	public int rolloverSize
	{
		[Token(Token = "0x60005E8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005E9")]
		set
		{
		}
	}

	[Token(Token = "0x60005E3")]
	public TMP_TextProcessingStack(T[] stack)
	{
	}

	[Token(Token = "0x60005E4")]
	public TMP_TextProcessingStack(int capacity)
	{
	}

	[Token(Token = "0x60005E5")]
	public TMP_TextProcessingStack(int capacity, int rolloverSize)
	{
	}

	[Token(Token = "0x60005EA")]
	internal static void SetDefault(TMP_TextProcessingStack<T>[] stack, T item)
	{
	}

	[Token(Token = "0x60005EB")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005EC")]
	public void SetDefault(T item)
	{
	}

	[Token(Token = "0x60005ED")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x60005EE")]
	public T Remove()
	{
		return (T)null;
	}

	[Token(Token = "0x60005EF")]
	public void Push(T item)
	{
	}

	[Token(Token = "0x60005F0")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x60005F1")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x60005F2")]
	public T CurrentItem()
	{
		return (T)null;
	}

	[Token(Token = "0x60005F3")]
	public T PreviousItem()
	{
		return (T)null;
	}
}
