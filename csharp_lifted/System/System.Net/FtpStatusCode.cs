// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpStatusCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000284")]
public enum FtpStatusCode
{
	[Token(Token = "0x400097F")]
	Undefined = 0,
	[Token(Token = "0x4000980")]
	RestartMarker = 110,
	[Token(Token = "0x4000981")]
	ServiceTemporarilyNotAvailable = 120,
	[Token(Token = "0x4000982")]
	DataAlreadyOpen = 125,
	[Token(Token = "0x4000983")]
	OpeningData = 150,
	[Token(Token = "0x4000984")]
	CommandOK = 200,
	[Token(Token = "0x4000985")]
	CommandExtraneous = 202,
	[Token(Token = "0x4000986")]
	DirectoryStatus = 212,
	[Token(Token = "0x4000987")]
	FileStatus = 213,
	[Token(Token = "0x4000988")]
	SystemType = 215,
	[Token(Token = "0x4000989")]
	SendUserCommand = 220,
	[Token(Token = "0x400098A")]
	ClosingControl = 221,
	[Token(Token = "0x400098B")]
	ClosingData = 226,
	[Token(Token = "0x400098C")]
	EnteringPassive = 227,
	[Token(Token = "0x400098D")]
	LoggedInProceed = 230,
	[Token(Token = "0x400098E")]
	ServerWantsSecureSession = 234,
	[Token(Token = "0x400098F")]
	FileActionOK = 250,
	[Token(Token = "0x4000990")]
	PathnameCreated = 257,
	[Token(Token = "0x4000991")]
	SendPasswordCommand = 331,
	[Token(Token = "0x4000992")]
	NeedLoginAccount = 332,
	[Token(Token = "0x4000993")]
	FileCommandPending = 350,
	[Token(Token = "0x4000994")]
	ServiceNotAvailable = 421,
	[Token(Token = "0x4000995")]
	CantOpenData = 425,
	[Token(Token = "0x4000996")]
	ConnectionClosed = 426,
	[Token(Token = "0x4000997")]
	ActionNotTakenFileUnavailableOrBusy = 450,
	[Token(Token = "0x4000998")]
	ActionAbortedLocalProcessingError = 451,
	[Token(Token = "0x4000999")]
	ActionNotTakenInsufficientSpace = 452,
	[Token(Token = "0x400099A")]
	CommandSyntaxError = 500,
	[Token(Token = "0x400099B")]
	ArgumentSyntaxError = 501,
	[Token(Token = "0x400099C")]
	CommandNotImplemented = 502,
	[Token(Token = "0x400099D")]
	BadCommandSequence = 503,
	[Token(Token = "0x400099E")]
	NotLoggedIn = 530,
	[Token(Token = "0x400099F")]
	AccountNeeded = 532,
	[Token(Token = "0x40009A0")]
	ActionNotTakenFileUnavailable = 550,
	[Token(Token = "0x40009A1")]
	ActionAbortedUnknownPageType = 551,
	[Token(Token = "0x40009A2")]
	FileActionAborted = 552,
	[Token(Token = "0x40009A3")]
	ActionNotTakenFilenameNotAllowed = 553
}
