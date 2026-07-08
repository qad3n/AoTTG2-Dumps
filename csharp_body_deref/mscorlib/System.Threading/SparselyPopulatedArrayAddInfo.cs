using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001EA")]
internal struct SparselyPopulatedArrayAddInfo<T> where T : class
{
	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x0")]
	private System.Threading.SparselyPopulatedArrayFragment<T> _source;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x0")]
	private int _index;

	[Token(Token = "0x170001AA")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> Source
	{
		[Token(Token = "0x60011E8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	internal int Index
	{
		[Token(Token = "0x60011E9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60011E7")]
	internal SparselyPopulatedArrayAddInfo(System.Threading.SparselyPopulatedArrayFragment<T> source, int index)
	{
	}
}
