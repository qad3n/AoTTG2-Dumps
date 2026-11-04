// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Tracing.EventKeywords
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x20005BD")]
[Flags]
public enum EventKeywords : long
{
	[Token(Token = "0x4001842")]
	None = 0L,
	[Token(Token = "0x4001843")]
	All = -1L,
	[Token(Token = "0x4001844")]
	MicrosoftTelemetry = 0x2000000000000L,
	[Token(Token = "0x4001845")]
	WdiContext = MicrosoftTelemetry,
	[Token(Token = "0x4001846")]
	WdiDiagnostic = 0x4000000000000L,
	[Token(Token = "0x4001847")]
	Sqm = 0x8000000000000L,
	[Token(Token = "0x4001848")]
	AuditFailure = 0x10000000000000L,
	[Token(Token = "0x4001849")]
	AuditSuccess = 0x20000000000000L,
	[Token(Token = "0x400184A")]
	CorrelationHint = AuditFailure,
	[Token(Token = "0x400184B")]
	EventLogClassic = 0x80000000000000L
}
