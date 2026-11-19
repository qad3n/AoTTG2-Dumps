// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CLZF2
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CLZF2.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200091C")]
internal static class CLZF2
{
	[Token(Token = "0x4002DED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint HLOG;

	[Token(Token = "0x4002DEE")]
	[FieldOffset(Offset = "0x4")]
	private static readonly uint HSIZE;

	[Token(Token = "0x4002DEF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly uint MAX_LIT;

	[Token(Token = "0x4002DF0")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint MAX_OFF;

	[Token(Token = "0x4002DF1")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint MAX_REF;

	[Token(Token = "0x4002DF2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long[] HashTable;

	[Token(Token = "0x6005649")]
	[Address(RVA = "0x5CE7A80", Offset = "0x5CE6A80", VA = "0x5CE7A80")]
	public static byte[] Compress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x600564A")]
	[Address(RVA = "0x5CE8370", Offset = "0x5CE7370", VA = "0x5CE8370")]
	public static byte[] Decompress(byte[] inputBytes)
	{
		return null;
	}

	[Token(Token = "0x600564B")]
	[Address(RVA = "0x5CE7BA0", Offset = "0x5CE6BA0", VA = "0x5CE7BA0")]
	public static int lzf_compress(byte[] input, ref byte[] output)
	{
		return default(int);
	}

	[Token(Token = "0x600564C")]
	[Address(RVA = "0x5CE8490", Offset = "0x5CE7490", VA = "0x5CE8490")]
	public static int lzf_decompress(byte[] input, ref byte[] output)
	{
		return default(int);
	}
}
