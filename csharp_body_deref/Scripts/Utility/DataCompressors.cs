using Il2CppDummyDll;
using Utility.Algorithms;

namespace Utility;

[Token(Token = "0x20006E1")]
internal static class DataCompressors
{
	[Token(Token = "0x4002123")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BrotliAlgorithm Brotli;

	[Token(Token = "0x4002124")]
	[FieldOffset(Offset = "0x8")]
	public static readonly GZipAlgorithm GZip;

	[Token(Token = "0x4002125")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DeflateAlgorithm ZLib;

	[Token(Token = "0x4002126")]
	[FieldOffset(Offset = "0x18")]
	public static readonly LZFAlgorithm LZF;
}
