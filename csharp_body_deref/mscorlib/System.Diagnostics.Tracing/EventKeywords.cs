// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Tracing.EventKeywords
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x20005EB")]
[Flags]
public enum EventKeywords : long
{
	[Token(Token = "0x4001A28")]
	None = 0L,
	[Token(Token = "0x4001A29")]
	All = -1L,
	[Token(Token = "0x4001A2A")]
	MicrosoftTelemetry = 0x2000000000000L,
	[Token(Token = "0x4001A2B")]
	WdiContext = 0x2000000000000L,
	[Token(Token = "0x4001A2C")]
	WdiDiagnostic = 0x4000000000000L,
	[Token(Token = "0x4001A2D")]
	Sqm = 0x8000000000000L,
	[Token(Token = "0x4001A2E")]
	AuditFailure = 0x10000000000000L,
	[Token(Token = "0x4001A2F")]
	AuditSuccess = 0x20000000000000L,
	[Token(Token = "0x4001A30")]
	CorrelationHint = 0x10000000000000L,
	[Token(Token = "0x4001A31")]
	EventLogClassic = 0x80000000000000L
}
