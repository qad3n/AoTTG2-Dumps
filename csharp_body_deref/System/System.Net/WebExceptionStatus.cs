// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebExceptionStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000297")]
public enum WebExceptionStatus
{
	[Token(Token = "0x40009EF")]
	Success,
	[Token(Token = "0x40009F0")]
	NameResolutionFailure,
	[Token(Token = "0x40009F1")]
	ConnectFailure,
	[Token(Token = "0x40009F2")]
	ReceiveFailure,
	[Token(Token = "0x40009F3")]
	SendFailure,
	[Token(Token = "0x40009F4")]
	PipelineFailure,
	[Token(Token = "0x40009F5")]
	RequestCanceled,
	[Token(Token = "0x40009F6")]
	ProtocolError,
	[Token(Token = "0x40009F7")]
	ConnectionClosed,
	[Token(Token = "0x40009F8")]
	TrustFailure,
	[Token(Token = "0x40009F9")]
	SecureChannelFailure,
	[Token(Token = "0x40009FA")]
	ServerProtocolViolation,
	[Token(Token = "0x40009FB")]
	KeepAliveFailure,
	[Token(Token = "0x40009FC")]
	Pending,
	[Token(Token = "0x40009FD")]
	Timeout,
	[Token(Token = "0x40009FE")]
	ProxyNameResolutionFailure,
	[Token(Token = "0x40009FF")]
	UnknownError,
	[Token(Token = "0x4000A00")]
	MessageLengthLimitExceeded,
	[Token(Token = "0x4000A01")]
	CacheEntryNotFound,
	[Token(Token = "0x4000A02")]
	RequestProhibitedByCachePolicy,
	[Token(Token = "0x4000A03")]
	RequestProhibitedByProxy
}
