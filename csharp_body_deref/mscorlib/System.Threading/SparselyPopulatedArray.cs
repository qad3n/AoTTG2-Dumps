using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E9")]
internal class SparselyPopulatedArray<T> where T : class
{
	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x0")]
	private readonly System.Threading.SparselyPopulatedArrayFragment<T> _head;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x0")]
	private System.Threading.SparselyPopulatedArrayFragment<T> _tail;

	[Token(Token = "0x170001A9")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> Tail
	{
		[Token(Token = "0x60011E5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011E4")]
	internal SparselyPopulatedArray(int initialSize)
	{
	}

	[Token(Token = "0x60011E6")]
	internal System.Threading.SparselyPopulatedArrayAddInfo<T> Add(T element)
	{
		return default(System.Threading.SparselyPopulatedArrayAddInfo<T>);
	}
}
