// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Tracing.EventKeywords
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x2000598")]
[Flags]
public enum EventKeywords : long
{
	[Token(Token = "0x40017A9")]
	None = 0L,
	[Token(Token = "0x40017AA")]
	All = -1L,
	[Token(Token = "0x40017AB")]
	MicrosoftTelemetry = 0x2000000000000L,
	[Token(Token = "0x40017AC")]
	WdiContext = MicrosoftTelemetry,
	[Token(Token = "0x40017AD")]
	WdiDiagnostic = 0x4000000000000L,
	[Token(Token = "0x40017AE")]
	Sqm = 0x8000000000000L,
	[Token(Token = "0x40017AF")]
	AuditFailure = 0x10000000000000L,
	[Token(Token = "0x40017B0")]
	AuditSuccess = 0x20000000000000L,
	[Token(Token = "0x40017B1")]
	CorrelationHint = AuditFailure,
	[Token(Token = "0x40017B2")]
	EventLogClassic = 0x80000000000000L
}
