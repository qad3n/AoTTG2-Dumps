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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(TraceLevel);
		}
		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x1C3D610", Offset = "0x1C3BC10", VA = "0x181C3D610")]
	private TraceEventType GetTraceEventType(TraceLevel level)
	{
		return default(TraceEventType);
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x1C3D6B0", Offset = "0x1C3BCB0", VA = "0x181C3D6B0", Slot = "5")]
	public void Trace(TraceLevel level, string message, Exception? ex)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DiagnosticsTraceWriter()
	{
	}
}
