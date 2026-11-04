// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpMethodFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002B4")]
[Flags]
internal enum FtpMethodFlags
{
	[Token(Token = "0x40009F8")]
	None = 0,
	[Token(Token = "0x40009F9")]
	IsDownload = 1,
	[Token(Token = "0x40009FA")]
	IsUpload = 2,
	[Token(Token = "0x40009FB")]
	TakesParameter = 4,
	[Token(Token = "0x40009FC")]
	MayTakeParameter = 8,
	[Token(Token = "0x40009FD")]
	DoesNotTakeParameter = 0x10,
	[Token(Token = "0x40009FE")]
	ParameterIsDirectory = 0x20,
	[Token(Token = "0x40009FF")]
	ShouldParseForResponseUri = 0x40,
	[Token(Token = "0x4000A00")]
	HasHttpCommand = 0x80,
	[Token(Token = "0x4000A01")]
	MustChangeWorkingDirectoryToPath = 0x100
}
