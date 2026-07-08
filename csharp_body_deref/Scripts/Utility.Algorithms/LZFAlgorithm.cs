using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000702")]
internal class LZFAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60044FE")]
	[Address(RVA = "0x4081650", Offset = "0x4081650", VA = "0x4081650", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60044FF")]
	[Address(RVA = "0x40816C0", Offset = "0x40816C0", VA = "0x40816C0", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x6004500")]
	[Address(RVA = "0x4081730", Offset = "0x4081730", VA = "0x4081730")]
	public LZFAlgorithm()
	{
	}
}
