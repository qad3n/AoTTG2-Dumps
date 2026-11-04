// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.MemoryTraceWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000133")]
public class MemoryTraceWriter : ITraceWriter
{
	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x10")]
	private readonly Queue<string> _traceMessages;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x18")]
	private readonly object _lock;

	[Token(Token = "0x1700016F")]
	public TraceLevel LevelFilter
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(TraceLevel);
		}
		[Token(Token = "0x6000976")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x1C6BE30", Offset = "0x1C6A430", VA = "0x181C6BE30")]
	public MemoryTraceWriter()
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x1C6BBB0", Offset = "0x1C6A1B0", VA = "0x181C6BBB0", Slot = "5")]
	public void Trace(TraceLevel level, string message, Exception? ex)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	public IEnumerable<string> GetTraceMessages()
	{
		return null;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x1C6B940", Offset = "0x1C69F40", VA = "0x181C6B940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
