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

[Token(Token = "0x200074D")]
internal abstract class CompressionAlgorithm
{
	[Token(Token = "0x40022FF")]
	public const int DefaultBufferSize = 4096;

	[Token(Token = "0x4002300")]
	public const int DefaultMaxSize = 10485760;

	[Token(Token = "0x600475B")]
	public abstract byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest);

	[Token(Token = "0x600475C")]
	public abstract byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L);

	[Token(Token = "0x600475D")]
	[Address(RVA = "0x4397DF0", Offset = "0x4397DF0", VA = "0x4397DF0")]
	public byte[] CompressString(string str, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x600475E")]
	[Address(RVA = "0x4397F30", Offset = "0x4397F30", VA = "0x4397F30")]
	public string DecompressString(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x600475F")]
	[Address(RVA = "0x4397DE0", Offset = "0x4397DE0", VA = "0x4397DE0")]
	protected CompressionAlgorithm()
	{
	}
}
