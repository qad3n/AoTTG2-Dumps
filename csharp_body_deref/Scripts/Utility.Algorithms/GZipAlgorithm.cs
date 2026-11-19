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

[Token(Token = "0x2000943")]
internal class GZipAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x6005728")]
	[Address(RVA = "0x5CF5860", Offset = "0x5CF4860", VA = "0x5CF5860", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6005729")]
	[Address(RVA = "0x5CF5C30", Offset = "0x5CF4C30", VA = "0x5CF5C30", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x600572A")]
	[Address(RVA = "0x5CEA950", Offset = "0x5CE9950", VA = "0x5CEA950")]
	public GZipAlgorithm()
	{
	}
}
