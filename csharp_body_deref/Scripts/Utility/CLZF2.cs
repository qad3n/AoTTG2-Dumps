using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006DE")]
internal static class CLZF2
{
	[Token(Token = "0x400211A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint HLOG;

	[Token(Token = "0x400211B")]
	[FieldOffset(Offset = "0x4")]
	private static readonly uint HSIZE;

	[Token(Token = "0x400211C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly uint MAX_LIT;

	[Token(Token = "0x400211D")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint MAX_OFF;

	[Token(Token = "0x400211E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint MAX_REF;

	[Token(Token = "0x400211F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long[] HashTable;

	[Token(Token = "0x600442E")]
	[Address(RVA = "0x4058560", Offset = "0x4058560", VA = "0x4058560")]
	public static byte[] Compress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x600442F")]
	[Address(RVA = "0x4058E70", Offset = "0x4058E70", VA = "0x4058E70")]
	public static byte[] Decompress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x6004430")]
	[Address(RVA = "0x4058680", Offset = "0x4058680", VA = "0x4058680")]
	public static int lzf_compress(byte[] input, ref byte[] output)
	{
		return default(int);
	}

	[Token(Token = "0x6004431")]
	[Address(RVA = "0x4058F90", Offset = "0x4058F90", VA = "0x4058F90")]
	public static int lzf_decompress(byte[] input, ref byte[] output)
	{
		return default(int);
	}
}
