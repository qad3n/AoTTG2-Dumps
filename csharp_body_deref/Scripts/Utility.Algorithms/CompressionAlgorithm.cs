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

[Token(Token = "0x2000941")]
internal abstract class CompressionAlgorithm
{
	[Token(Token = "0x4002E80")]
	public const int DefaultBufferSize = 4096;

	[Token(Token = "0x4002E81")]
	public const int DefaultMaxSize = 10485760;

	[Token(Token = "0x6005720")]
	public abstract byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest);

	[Token(Token = "0x6005721")]
	public abstract byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L);

	[Token(Token = "0x6005722")]
	[Address(RVA = "0x5CE90E0", Offset = "0x5CE80E0", VA = "0x5CE90E0")]
	public byte[] CompressString(string str, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6005723")]
	[Address(RVA = "0x5CE96B0", Offset = "0x5CE86B0", VA = "0x5CE96B0")]
	public string DecompressString(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x6005724")]
	[Address(RVA = "0x5CF4F70", Offset = "0x5CF3F70", VA = "0x5CF4F70")]
	protected CompressionAlgorithm()
	{
	}
}
