using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200012C")]
[Flags]
internal enum FtpMethodFlags
{
	[Token(Token = "0x40005E2")]
	None = 0,
	[Token(Token = "0x40005E3")]
	IsDownload = 1,
	[Token(Token = "0x40005E4")]
	IsUpload = 2,
	[Token(Token = "0x40005E5")]
	TakesParameter = 4,
	[Token(Token = "0x40005E6")]
	MayTakeParameter = 8,
	[Token(Token = "0x40005E7")]
	DoesNotTakeParameter = 0x10,
	[Token(Token = "0x40005E8")]
	ParameterIsDirectory = 0x20,
	[Token(Token = "0x40005E9")]
	ShouldParseForResponseUri = 0x40,
	[Token(Token = "0x40005EA")]
	HasHttpCommand = 0x80,
	[Token(Token = "0x40005EB")]
	MustChangeWorkingDirectoryToPath = 0x100
}
