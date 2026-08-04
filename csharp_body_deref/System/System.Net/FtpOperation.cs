// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200012B")]
internal enum FtpOperation
{
	[Token(Token = "0x40005D3")]
	DownloadFile,
	[Token(Token = "0x40005D4")]
	ListDirectory,
	[Token(Token = "0x40005D5")]
	ListDirectoryDetails,
	[Token(Token = "0x40005D6")]
	UploadFile,
	[Token(Token = "0x40005D7")]
	UploadFileUnique,
	[Token(Token = "0x40005D8")]
	AppendFile,
	[Token(Token = "0x40005D9")]
	DeleteFile,
	[Token(Token = "0x40005DA")]
	GetDateTimestamp,
	[Token(Token = "0x40005DB")]
	GetFileSize,
	[Token(Token = "0x40005DC")]
	Rename,
	[Token(Token = "0x40005DD")]
	MakeDirectory,
	[Token(Token = "0x40005DE")]
	RemoveDirectory,
	[Token(Token = "0x40005DF")]
	PrintWorkingDirectory,
	[Token(Token = "0x40005E0")]
	Other
}
