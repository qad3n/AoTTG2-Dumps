// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CLZF2
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CLZF2.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008B1")]
internal static class CLZF2
{
	[Token(Token = "0x4002B36")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint HLOG;

	[Token(Token = "0x4002B37")]
	[FieldOffset(Offset = "0x4")]
	private static readonly uint HSIZE;

	[Token(Token = "0x4002B38")]
	[FieldOffset(Offset = "0x8")]
	private static readonly uint MAX_LIT;

	[Token(Token = "0x4002B39")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint MAX_OFF;

	[Token(Token = "0x4002B3A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint MAX_REF;

	[Token(Token = "0x4002B3B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long[] HashTable;

	[Token(Token = "0x60052F2")]
	[Address(RVA = "0x232C600", Offset = "0x232AC00", VA = "0x18232C600")]
	public static byte[] Compress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x60052F3")]
	[Address(RVA = "0x232C720", Offset = "0x232AD20", VA = "0x18232C720")]
	public static byte[] Decompress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x60052F4")]
	[Address(RVA = "0x232C930", Offset = "0x232AF30", VA = "0x18232C930")]
	public static int lzf_compress(byte[] input, ref byte[] output)
	{
		return default(int);
	}

	[Token(Token = "0x60052F5")]
	[Address(RVA = "0x232D080", Offset = "0x232B680", VA = "0x18232D080")]
	public static int lzf_decompress(byte[] input, ref byte[] output)
	{
		return default(int);
	}
}
