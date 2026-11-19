// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000274")]
internal enum FtpOperation
{
	[Token(Token = "0x400091A")]
	DownloadFile,
	[Token(Token = "0x400091B")]
	ListDirectory,
	[Token(Token = "0x400091C")]
	ListDirectoryDetails,
	[Token(Token = "0x400091D")]
	UploadFile,
	[Token(Token = "0x400091E")]
	UploadFileUnique,
	[Token(Token = "0x400091F")]
	AppendFile,
	[Token(Token = "0x4000920")]
	DeleteFile,
	[Token(Token = "0x4000921")]
	GetDateTimestamp,
	[Token(Token = "0x4000922")]
	GetFileSize,
	[Token(Token = "0x4000923")]
	Rename,
	[Token(Token = "0x4000924")]
	MakeDirectory,
	[Token(Token = "0x4000925")]
	RemoveDirectory,
	[Token(Token = "0x4000926")]
	PrintWorkingDirectory,
	[Token(Token = "0x4000927")]
	Other
}
