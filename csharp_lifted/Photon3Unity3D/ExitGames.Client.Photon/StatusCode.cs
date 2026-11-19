// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.StatusCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200000E")]
public enum StatusCode
{
	[Token(Token = "0x4000052")]
	Connect = 1024,
	[Token(Token = "0x4000053")]
	Disconnect = 1025,
	[Token(Token = "0x4000054")]
	Exception = 1026,
	[Token(Token = "0x4000055")]
	ExceptionOnConnect = 1023,
	[Token(Token = "0x4000056")]
	ServerAddressInvalid = 1050,
	[Token(Token = "0x4000057")]
	DnsExceptionOnConnect = 1051,
	[Token(Token = "0x4000058")]
	SecurityExceptionOnConnect = 1022,
	[Token(Token = "0x4000059")]
	SendError = 1030,
	[Token(Token = "0x400005A")]
	ExceptionOnReceive = 1039,
	[Token(Token = "0x400005B")]
	TimeoutDisconnect = 1040,
	[Token(Token = "0x400005C")]
	DisconnectByServerTimeout = 1041,
	[Token(Token = "0x400005D")]
	DisconnectByServerUserLimit = 1042,
	[Token(Token = "0x400005E")]
	DisconnectByServerLogic = 1043,
	[Token(Token = "0x400005F")]
	DisconnectByServerReasonUnknown = 1044,
	[Token(Token = "0x4000060")]
	EncryptionEstablished = 1048,
	[Token(Token = "0x4000061")]
	EncryptionFailedToEstablish = 1049
}
