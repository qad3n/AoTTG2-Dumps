// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.BrotliAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/BrotliAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x200074C")]
internal class BrotliAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x6004758")]
	[Address(RVA = "0x43972B0", Offset = "0x43972B0", VA = "0x43972B0", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6004759")]
	[Address(RVA = "0x4397720", Offset = "0x4397720", VA = "0x4397720", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x600475A")]
	[Address(RVA = "0x4397DD0", Offset = "0x4397DD0", VA = "0x4397DD0")]
	public BrotliAlgorithm()
	{
	}
}
