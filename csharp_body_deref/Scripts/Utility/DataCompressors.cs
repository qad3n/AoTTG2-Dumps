// ==================== AoTTG2 cross-reference ====================
// Type: Utility.DataCompressors
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/DataCompressors.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Utility.Algorithms;

namespace Utility;

[Token(Token = "0x2000729")]
internal static class DataCompressors
{
	[Token(Token = "0x400227C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BrotliAlgorithm Brotli;

	[Token(Token = "0x400227D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly GZipAlgorithm GZip;

	[Token(Token = "0x400227E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DeflateAlgorithm ZLib;

	[Token(Token = "0x400227F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly LZFAlgorithm LZF;
}
