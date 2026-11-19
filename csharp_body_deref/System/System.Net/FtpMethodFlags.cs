// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpMethodFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000275")]
[Flags]
internal enum FtpMethodFlags
{
	[Token(Token = "0x4000929")]
	None = 0,
	[Token(Token = "0x400092A")]
	IsDownload = 1,
	[Token(Token = "0x400092B")]
	IsUpload = 2,
	[Token(Token = "0x400092C")]
	TakesParameter = 4,
	[Token(Token = "0x400092D")]
	MayTakeParameter = 8,
	[Token(Token = "0x400092E")]
	DoesNotTakeParameter = 0x10,
	[Token(Token = "0x400092F")]
	ParameterIsDirectory = 0x20,
	[Token(Token = "0x4000930")]
	ShouldParseForResponseUri = 0x40,
	[Token(Token = "0x4000931")]
	HasHttpCommand = 0x80,
	[Token(Token = "0x4000932")]
	MustChangeWorkingDirectoryToPath = 0x100
}
