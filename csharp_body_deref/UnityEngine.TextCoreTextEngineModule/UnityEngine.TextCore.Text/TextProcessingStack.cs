// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextProcessingStack
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200006C")]
[DebuggerDisplay("Item count = {m_Count}")]
internal struct TextProcessingStack<T>
{
	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x0")]
	public T[] itemStack;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x0")]
	private T m_DefaultItem;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x0")]
	private int m_RolloverSize;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x400048A")]
	private const int k_DefaultCapacity = 4;

	[Token(Token = "0x17000089")]
	public int Count
	{
		[Token(Token = "0x6000340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008A")]
	public T current
	{
		[Token(Token = "0x6000341")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x600033D")]
	public TextProcessingStack(T[] stack)
	{
	}

	[Token(Token = "0x600033E")]
	public TextProcessingStack(int capacity)
	{
	}

	[Token(Token = "0x600033F")]
	public TextProcessingStack(int capacity, int rolloverSize)
	{
	}

	[Token(Token = "0x6000342")]
	internal static void SetDefault(TextProcessingStack<T>[] stack, T item)
	{
	}

	[Token(Token = "0x6000343")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000344")]
	public void SetDefault(T item)
	{
	}

	[Token(Token = "0x6000345")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000346")]
	public T Remove()
	{
		return (T)null;
	}

	[Token(Token = "0x6000347")]
	public void Push(T item)
	{
	}

	[Token(Token = "0x6000348")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x6000349")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x600034A")]
	public T CurrentItem()
	{
		return (T)null;
	}
}
