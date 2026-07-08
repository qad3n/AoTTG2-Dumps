using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200000C")]
internal enum BrotliEncoderOperation
{
	[Token(Token = "0x4000023")]
	Process,
	[Token(Token = "0x4000024")]
	Flush,
	[Token(Token = "0x4000025")]
	Finish,
	[Token(Token = "0x4000026")]
	EmitMetadata
}
