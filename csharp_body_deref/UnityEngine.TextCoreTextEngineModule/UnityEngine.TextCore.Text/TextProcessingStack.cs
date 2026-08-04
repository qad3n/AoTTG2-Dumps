// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextProcessingStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200003C")]
[DebuggerDisplay("Item count = {m_Count}")]
internal struct TextProcessingStack<T>
{
	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x0")]
	public T[] itemStack;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x0")]
	private T m_DefaultItem;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x0")]
	private int m_RolloverSize;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x1700003F")]
	public int Count
	{
		[Token(Token = "0x6000195")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000040")]
	public T current
	{
		[Token(Token = "0x6000196")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x6000192")]
	public TextProcessingStack(T[] stack)
	{
	}

	[Token(Token = "0x6000193")]
	public TextProcessingStack(int capacity)
	{
	}

	[Token(Token = "0x6000194")]
	public TextProcessingStack(int capacity, int rolloverSize)
	{
	}

	[Token(Token = "0x6000197")]
	internal static void SetDefault(TextProcessingStack<T>[] stack, T item)
	{
	}

	[Token(Token = "0x6000198")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000199")]
	public void SetDefault(T item)
	{
	}

	[Token(Token = "0x600019A")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x600019B")]
	public T Remove()
	{
		return (T)null;
	}

	[Token(Token = "0x600019C")]
	public void Push(T item)
	{
	}

	[Token(Token = "0x600019D")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x600019E")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x600019F")]
	public T CurrentItem()
	{
		return (T)null;
	}
}
