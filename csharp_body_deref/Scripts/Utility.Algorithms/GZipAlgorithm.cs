// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.GZipAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/GZipAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x20008D8")]
internal class GZipAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60053CB")]
	[Address(RVA = "0x2339B30", Offset = "0x2338130", VA = "0x182339B30", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60053CC")]
	[Address(RVA = "0x2339D10", Offset = "0x2338310", VA = "0x182339D10", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60053CD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GZipAlgorithm()
	{
	}
}
