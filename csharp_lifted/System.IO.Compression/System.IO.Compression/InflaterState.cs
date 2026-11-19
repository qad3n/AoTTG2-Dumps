// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.InflaterState
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000021")]
internal enum InflaterState
{
	[Token(Token = "0x400009B")]
	ReadingHeader = 0,
	[Token(Token = "0x400009C")]
	ReadingBFinal = 2,
	[Token(Token = "0x400009D")]
	ReadingBType = 3,
	[Token(Token = "0x400009E")]
	ReadingNumLitCodes = 4,
	[Token(Token = "0x400009F")]
	ReadingNumDistCodes = 5,
	[Token(Token = "0x40000A0")]
	ReadingNumCodeLengthCodes = 6,
	[Token(Token = "0x40000A1")]
	ReadingCodeLengthCodes = 7,
	[Token(Token = "0x40000A2")]
	ReadingTreeCodesBefore = 8,
	[Token(Token = "0x40000A3")]
	ReadingTreeCodesAfter = 9,
	[Token(Token = "0x40000A4")]
	DecodeTop = 10,
	[Token(Token = "0x40000A5")]
	HaveInitialLength = 11,
	[Token(Token = "0x40000A6")]
	HaveFullLength = 12,
	[Token(Token = "0x40000A7")]
	HaveDistCode = 13,
	[Token(Token = "0x40000A8")]
	UncompressedAligning = 15,
	[Token(Token = "0x40000A9")]
	UncompressedByte1 = 16,
	[Token(Token = "0x40000AA")]
	UncompressedByte2 = 17,
	[Token(Token = "0x40000AB")]
	UncompressedByte3 = 18,
	[Token(Token = "0x40000AC")]
	UncompressedByte4 = 19,
	[Token(Token = "0x40000AD")]
	DecodingUncompressed = 20,
	[Token(Token = "0x40000AE")]
	StartReadingFooter = 21,
	[Token(Token = "0x40000AF")]
	ReadingFooter = 22,
	[Token(Token = "0x40000B0")]
	VerifyingFooter = 23,
	[Token(Token = "0x40000B1")]
	Done = 24
}
