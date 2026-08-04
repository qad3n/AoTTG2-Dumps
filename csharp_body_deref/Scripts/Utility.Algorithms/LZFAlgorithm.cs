// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.LZFAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/LZFAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000750")]
internal class LZFAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x6004766")]
	[Address(RVA = "0x4399630", Offset = "0x4399630", VA = "0x4399630", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6004767")]
	[Address(RVA = "0x43996A0", Offset = "0x43996A0", VA = "0x43996A0", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x6004768")]
	[Address(RVA = "0x4399710", Offset = "0x4399710", VA = "0x4399710")]
	public LZFAlgorithm()
	{
	}
}
