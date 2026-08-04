// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.DiagnosticsTraceWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000109")]
public class DiagnosticsTraceWriter : ITraceWriter
{
	[Token(Token = "0x170000EF")]
	public TraceLevel LevelFilter
	{
		[Token(Token = "0x60007AE")]
		[Address(RVA = "0x3DD6440", Offset = "0x3DD6440", VA = "0x3DD6440", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(TraceLevel);
		}
		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x3DD6450", Offset = "0x3DD6450", VA = "0x3DD6450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x3DD6460", Offset = "0x3DD6460", VA = "0x3DD6460")]
	private TraceEventType GetTraceEventType(TraceLevel level)
	{
		return default(TraceEventType);
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x3DD64C0", Offset = "0x3DD64C0", VA = "0x3DD64C0", Slot = "5")]
	public void Trace(TraceLevel level, string message, Exception? ex)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x3DD6A10", Offset = "0x3DD6A10", VA = "0x3DD6A10")]
	public DiagnosticsTraceWriter()
	{
	}
}
