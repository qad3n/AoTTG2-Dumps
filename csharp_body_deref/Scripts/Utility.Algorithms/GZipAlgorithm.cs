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

[Token(Token = "0x200074F")]
internal class GZipAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x6004763")]
	[Address(RVA = "0x4398B00", Offset = "0x4398B00", VA = "0x4398B00", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6004764")]
	[Address(RVA = "0x4398F70", Offset = "0x4398F70", VA = "0x4398F70", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x6004765")]
	[Address(RVA = "0x4399620", Offset = "0x4399620", VA = "0x4399620")]
	public GZipAlgorithm()
	{
	}
}
