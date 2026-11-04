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

[Token(Token = "0x20008D9")]
internal class LZFAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60053CE")]
	[Address(RVA = "0x233A2D0", Offset = "0x23388D0", VA = "0x18233A2D0", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60053CF")]
	[Address(RVA = "0x233A420", Offset = "0x2338A20", VA = "0x18233A420", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60053D0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public LZFAlgorithm()
	{
	}
}
