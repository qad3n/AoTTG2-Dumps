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

[Token(Token = "0x20008D7")]
internal class DeflateAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60053C8")]
	[Address(RVA = "0x23354C0", Offset = "0x2333AC0", VA = "0x1823354C0", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60053C9")]
	[Address(RVA = "0x23356A0", Offset = "0x2333CA0", VA = "0x1823356A0", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60053CA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DeflateAlgorithm()
	{
	}
}
