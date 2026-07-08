using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000700")]
internal class DeflateAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60044F8")]
	[Address(RVA = "0x407FFF0", Offset = "0x407FFF0", VA = "0x407FFF0", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60044F9")]
	[Address(RVA = "0x4080460", Offset = "0x4080460", VA = "0x4080460", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60044FA")]
	[Address(RVA = "0x4080B10", Offset = "0x4080B10", VA = "0x4080B10")]
	public DeflateAlgorithm()
	{
	}
}
