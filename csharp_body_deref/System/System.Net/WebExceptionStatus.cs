using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200014E")]
public enum WebExceptionStatus
{
	[Token(Token = "0x40006A8")]
	Success,
	[Token(Token = "0x40006A9")]
	NameResolutionFailure,
	[Token(Token = "0x40006AA")]
	ConnectFailure,
	[Token(Token = "0x40006AB")]
	ReceiveFailure,
	[Token(Token = "0x40006AC")]
	SendFailure,
	[Token(Token = "0x40006AD")]
	PipelineFailure,
	[Token(Token = "0x40006AE")]
	RequestCanceled,
	[Token(Token = "0x40006AF")]
	ProtocolError,
	[Token(Token = "0x40006B0")]
	ConnectionClosed,
	[Token(Token = "0x40006B1")]
	TrustFailure,
	[Token(Token = "0x40006B2")]
	SecureChannelFailure,
	[Token(Token = "0x40006B3")]
	ServerProtocolViolation,
	[Token(Token = "0x40006B4")]
	KeepAliveFailure,
	[Token(Token = "0x40006B5")]
	Pending,
	[Token(Token = "0x40006B6")]
	Timeout,
	[Token(Token = "0x40006B7")]
	ProxyNameResolutionFailure,
	[Token(Token = "0x40006B8")]
	UnknownError,
	[Token(Token = "0x40006B9")]
	MessageLengthLimitExceeded,
	[Token(Token = "0x40006BA")]
	CacheEntryNotFound,
	[Token(Token = "0x40006BB")]
	RequestProhibitedByCachePolicy,
	[Token(Token = "0x40006BC")]
	RequestProhibitedByProxy
}
