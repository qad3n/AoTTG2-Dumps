// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.CompressionAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/CompressionAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x20008D6")]
internal abstract class CompressionAlgorithm
{
	[Token(Token = "0x4002BC4")]
	public const int DefaultBufferSize = 4096;

	[Token(Token = "0x4002BC5")]
	public const int DefaultMaxSize = 10485760;

	[Token(Token = "0x60053C3")]
	public abstract byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest);

	[Token(Token = "0x60053C4")]
	public abstract byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L);

	[Token(Token = "0x60053C5")]
	[Address(RVA = "0x2332810", Offset = "0x2330E10", VA = "0x182332810")]
	public byte[] CompressString(string str, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60053C6")]
	[Address(RVA = "0x23328C0", Offset = "0x2330EC0", VA = "0x1823328C0")]
	public string DecompressString(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60053C7")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CompressionAlgorithm()
	{
	}
}
