// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Algorithms.DeflateAlgorithm
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Algorithms/DeflateAlgorithm.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000942")]
internal class DeflateAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x6005725")]
	[Address(RVA = "0x5CF4F80", Offset = "0x5CF3F80", VA = "0x5CF4F80", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6005726")]
	[Address(RVA = "0x5CF5350", Offset = "0x5CF4350", VA = "0x5CF5350", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x6005727")]
	[Address(RVA = "0x5CEA960", Offset = "0x5CE9960", VA = "0x5CEA960")]
	public DeflateAlgorithm()
	{
	}
}
