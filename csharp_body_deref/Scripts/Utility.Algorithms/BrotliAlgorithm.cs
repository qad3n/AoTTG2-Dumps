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

[Token(Token = "0x2000940")]
internal class BrotliAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x600571D")]
	[Address(RVA = "0x5CF4690", Offset = "0x5CF3690", VA = "0x5CF4690", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x600571E")]
	[Address(RVA = "0x5CF4A60", Offset = "0x5CF3A60", VA = "0x5CF4A60", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x600571F")]
	[Address(RVA = "0x5CEA940", Offset = "0x5CE9940", VA = "0x5CEA940")]
	public BrotliAlgorithm()
	{
	}
}
