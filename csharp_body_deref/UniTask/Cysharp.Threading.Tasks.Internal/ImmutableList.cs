using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000256")]
internal class ImmutableList<T>
{
	[Token(Token = "0x40006AF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ImmutableList<T> Empty;

	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x0")]
	private T[] data;

	[Token(Token = "0x1700007F")]
	public T[] Data
	{
		[Token(Token = "0x6000D4E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D4F")]
	private ImmutableList()
	{
	}

	[Token(Token = "0x6000D50")]
	public ImmutableList(T[] data)
	{
	}

	[Token(Token = "0x6000D51")]
	public ImmutableList<T> Add(T value)
	{
		return null;
	}

	[Token(Token = "0x6000D52")]
	public ImmutableList<T> Remove(T value)
	{
		return null;
	}

	[Token(Token = "0x6000D53")]
	public int IndexOf(T value)
	{
		return default(int);
	}
}
