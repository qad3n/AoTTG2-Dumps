using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x20006FE")]
internal class BrotliAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60044F0")]
	[Address(RVA = "0x407F2D0", Offset = "0x407F2D0", VA = "0x407F2D0", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60044F1")]
	[Address(RVA = "0x407F740", Offset = "0x407F740", VA = "0x407F740", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60044F2")]
	[Address(RVA = "0x407FDF0", Offset = "0x407FDF0", VA = "0x407FDF0")]
	public BrotliAlgorithm()
	{
	}
}
