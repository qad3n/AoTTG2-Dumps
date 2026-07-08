using System.IO.Compression;
using Il2CppDummyDll;

namespace Utility.Algorithms;

[Token(Token = "0x20006FF")]
internal abstract class CompressionAlgorithm
{
	[Token(Token = "0x40021A2")]
	public const int DefaultBufferSize = 4096;

	[Token(Token = "0x40021A3")]
	public const int DefaultMaxSize = 10485760;

	[Token(Token = "0x60044F3")]
	public abstract byte[] Compress(byte[] data, CompressionLevel level = CompressionLevel.Fastest);

	[Token(Token = "0x60044F4")]
	public abstract byte[] Decompress(byte[] data, int bufferSize = 4096, long maxSize = 10485760L);

	[Token(Token = "0x60044F5")]
	[Address(RVA = "0x407FE10", Offset = "0x407FE10", VA = "0x407FE10")]
	public byte[] CompressString(string str, CompressionLevel level = CompressionLevel.Fastest)
	{
		return null;
	}

	[Token(Token = "0x60044F6")]
	[Address(RVA = "0x407FF50", Offset = "0x407FF50", VA = "0x407FF50")]
	public string DecompressString(byte[] data, int bufferSize = 4096, long maxSize = 10485760L)
	{
		return null;
	}

	[Token(Token = "0x60044F7")]
	[Address(RVA = "0x407FE00", Offset = "0x407FE00", VA = "0x407FE00")]
	protected CompressionAlgorithm()
	{
	}
}
