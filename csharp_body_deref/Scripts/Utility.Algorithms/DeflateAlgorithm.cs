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

[Token(Token = "0x200074E")]
internal class DeflateAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x6004760")]
	[Address(RVA = "0x4397FD0", Offset = "0x4397FD0", VA = "0x4397FD0", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x6004761")]
	[Address(RVA = "0x4398440", Offset = "0x4398440", VA = "0x4398440", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x6004762")]
	[Address(RVA = "0x4398AF0", Offset = "0x4398AF0", VA = "0x4398AF0")]
	public DeflateAlgorithm()
	{
	}
}
