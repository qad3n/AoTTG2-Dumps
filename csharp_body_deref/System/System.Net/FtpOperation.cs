// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002B3")]
internal enum FtpOperation
{
	[Token(Token = "0x40009E9")]
	DownloadFile,
	[Token(Token = "0x40009EA")]
	ListDirectory,
	[Token(Token = "0x40009EB")]
	ListDirectoryDetails,
	[Token(Token = "0x40009EC")]
	UploadFile,
	[Token(Token = "0x40009ED")]
	UploadFileUnique,
	[Token(Token = "0x40009EE")]
	AppendFile,
	[Token(Token = "0x40009EF")]
	DeleteFile,
	[Token(Token = "0x40009F0")]
	GetDateTimestamp,
	[Token(Token = "0x40009F1")]
	GetFileSize,
	[Token(Token = "0x40009F2")]
	Rename,
	[Token(Token = "0x40009F3")]
	MakeDirectory,
	[Token(Token = "0x40009F4")]
	RemoveDirectory,
	[Token(Token = "0x40009F5")]
	PrintWorkingDirectory,
	[Token(Token = "0x40009F6")]
	Other
}
