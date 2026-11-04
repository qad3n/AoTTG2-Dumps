// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebExceptionStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002D6")]
public enum WebExceptionStatus
{
	[Token(Token = "0x4000ABE")]
	Success,
	[Token(Token = "0x4000ABF")]
	NameResolutionFailure,
	[Token(Token = "0x4000AC0")]
	ConnectFailure,
	[Token(Token = "0x4000AC1")]
	ReceiveFailure,
	[Token(Token = "0x4000AC2")]
	SendFailure,
	[Token(Token = "0x4000AC3")]
	PipelineFailure,
	[Token(Token = "0x4000AC4")]
	RequestCanceled,
	[Token(Token = "0x4000AC5")]
	ProtocolError,
	[Token(Token = "0x4000AC6")]
	ConnectionClosed,
	[Token(Token = "0x4000AC7")]
	TrustFailure,
	[Token(Token = "0x4000AC8")]
	SecureChannelFailure,
	[Token(Token = "0x4000AC9")]
	ServerProtocolViolation,
	[Token(Token = "0x4000ACA")]
	KeepAliveFailure,
	[Token(Token = "0x4000ACB")]
	Pending,
	[Token(Token = "0x4000ACC")]
	Timeout,
	[Token(Token = "0x4000ACD")]
	ProxyNameResolutionFailure,
	[Token(Token = "0x4000ACE")]
	UnknownError,
	[Token(Token = "0x4000ACF")]
	MessageLengthLimitExceeded,
	[Token(Token = "0x4000AD0")]
	CacheEntryNotFound,
	[Token(Token = "0x4000AD1")]
	RequestProhibitedByCachePolicy,
	[Token(Token = "0x4000AD2")]
	RequestProhibitedByProxy
}
