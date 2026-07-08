using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x2000701")]
internal class GZipAlgorithm : CompressionAlgorithm
{
	[Token(Token = "0x60044FB")]
	[Address(RVA = "0x4080B20", Offset = "0x4080B20", VA = "0x4080B20", Slot = "4")]
	public override byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60044FC")]
	[Address(RVA = "0x4080F90", Offset = "0x4080F90", VA = "0x4080F90", Slot = "5")]
	public override byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60044FD")]
	[Address(RVA = "0x4081640", Offset = "0x4081640", VA = "0x4081640")]
	public GZipAlgorithm()
	{
	}
}
