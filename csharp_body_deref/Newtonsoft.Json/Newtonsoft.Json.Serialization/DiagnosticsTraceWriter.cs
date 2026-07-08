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
		[Address(RVA = "0x3AE0AF0", Offset = "0x3AE0AF0", VA = "0x3AE0AF0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(TraceLevel);
		}
		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x3AE0B00", Offset = "0x3AE0B00", VA = "0x3AE0B00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x3AE0B10", Offset = "0x3AE0B10", VA = "0x3AE0B10")]
	private TraceEventType GetTraceEventType(TraceLevel level)
	{
		return default(TraceEventType);
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x3AE0B70", Offset = "0x3AE0B70", VA = "0x3AE0B70", Slot = "5")]
	public void Trace(TraceLevel level, string message, Exception? ex)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x3AE10C0", Offset = "0x3AE10C0", VA = "0x3AE10C0")]
	public DiagnosticsTraceWriter()
	{
	}
}
