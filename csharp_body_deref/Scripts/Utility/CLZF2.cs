// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CLZF2
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CLZF2.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000726")]
internal static class CLZF2
{
	[Token(Token = "0x4002273")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint HLOG;

	[Token(Token = "0x4002274")]
	[FieldOffset(Offset = "0x4")]
	private static readonly uint HSIZE;

	[Token(Token = "0x4002275")]
	[FieldOffset(Offset = "0x8")]
	private static readonly uint MAX_LIT;

	[Token(Token = "0x4002276")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint MAX_OFF;

	[Token(Token = "0x4002277")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint MAX_REF;

	[Token(Token = "0x4002278")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long[] HashTable;

	[Token(Token = "0x6004679")]
	[Address(RVA = "0x4388EC0", Offset = "0x4388EC0", VA = "0x4388EC0")]
	public static byte[] Compress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x600467A")]
	[Address(RVA = "0x43897D0", Offset = "0x43897D0", VA = "0x43897D0")]
	public static byte[] Decompress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x600467B")]
	[Address(RVA = "0x4388FE0", Offset = "0x4388FE0", VA = "0x4388FE0")]
	public static int lzf_compress(byte[] input, ref byte[] output)
	{
		return default(int);
	}

	[Token(Token = "0x600467C")]
	[Address(RVA = "0x43898F0", Offset = "0x43898F0", VA = "0x43898F0")]
	public static int lzf_decompress(byte[] input, ref byte[] output)
	{
		return default(int);
	}
}
