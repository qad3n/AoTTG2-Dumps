// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpStatusCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002C3")]
public enum FtpStatusCode
{
	[Token(Token = "0x4000A4E")]
	Undefined = 0,
	[Token(Token = "0x4000A4F")]
	RestartMarker = 110,
	[Token(Token = "0x4000A50")]
	ServiceTemporarilyNotAvailable = 120,
	[Token(Token = "0x4000A51")]
	DataAlreadyOpen = 125,
	[Token(Token = "0x4000A52")]
	OpeningData = 150,
	[Token(Token = "0x4000A53")]
	CommandOK = 200,
	[Token(Token = "0x4000A54")]
	CommandExtraneous = 202,
	[Token(Token = "0x4000A55")]
	DirectoryStatus = 212,
	[Token(Token = "0x4000A56")]
	FileStatus = 213,
	[Token(Token = "0x4000A57")]
	SystemType = 215,
	[Token(Token = "0x4000A58")]
	SendUserCommand = 220,
	[Token(Token = "0x4000A59")]
	ClosingControl = 221,
	[Token(Token = "0x4000A5A")]
	ClosingData = 226,
	[Token(Token = "0x4000A5B")]
	EnteringPassive = 227,
	[Token(Token = "0x4000A5C")]
	LoggedInProceed = 230,
	[Token(Token = "0x4000A5D")]
	ServerWantsSecureSession = 234,
	[Token(Token = "0x4000A5E")]
	FileActionOK = 250,
	[Token(Token = "0x4000A5F")]
	PathnameCreated = 257,
	[Token(Token = "0x4000A60")]
	SendPasswordCommand = 331,
	[Token(Token = "0x4000A61")]
	NeedLoginAccount = 332,
	[Token(Token = "0x4000A62")]
	FileCommandPending = 350,
	[Token(Token = "0x4000A63")]
	ServiceNotAvailable = 421,
	[Token(Token = "0x4000A64")]
	CantOpenData = 425,
	[Token(Token = "0x4000A65")]
	ConnectionClosed = 426,
	[Token(Token = "0x4000A66")]
	ActionNotTakenFileUnavailableOrBusy = 450,
	[Token(Token = "0x4000A67")]
	ActionAbortedLocalProcessingError = 451,
	[Token(Token = "0x4000A68")]
	ActionNotTakenInsufficientSpace = 452,
	[Token(Token = "0x4000A69")]
	CommandSyntaxError = 500,
	[Token(Token = "0x4000A6A")]
	ArgumentSyntaxError = 501,
	[Token(Token = "0x4000A6B")]
	CommandNotImplemented = 502,
	[Token(Token = "0x4000A6C")]
	BadCommandSequence = 503,
	[Token(Token = "0x4000A6D")]
	NotLoggedIn = 530,
	[Token(Token = "0x4000A6E")]
	AccountNeeded = 532,
	[Token(Token = "0x4000A6F")]
	ActionNotTakenFileUnavailable = 550,
	[Token(Token = "0x4000A70")]
	ActionAbortedUnknownPageType = 551,
	[Token(Token = "0x4000A71")]
	FileActionAborted = 552,
	[Token(Token = "0x4000A72")]
	ActionNotTakenFilenameNotAllowed = 553
}
