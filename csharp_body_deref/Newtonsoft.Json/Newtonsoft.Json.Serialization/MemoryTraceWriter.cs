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
		[Address(RVA = "0x3AFEBC0", Offset = "0x3AFEBC0", VA = "0x3AFEBC0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(TraceLevel);
		}
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x3AFEBD0", Offset = "0x3AFEBD0", VA = "0x3AFEBD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x3AFEBE0", Offset = "0x3AFEBE0", VA = "0x3AFEBE0")]
	public MemoryTraceWriter()
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x3AFECA0", Offset = "0x3AFECA0", VA = "0x3AFECA0", Slot = "5")]
	public void Trace(TraceLevel level, string message, Exception? ex)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x3AFEF60", Offset = "0x3AFEF60", VA = "0x3AFEF60")]
	public IEnumerable<string> GetTraceMessages()
	{
		return null;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x3AFEF70", Offset = "0x3AFEF70", VA = "0x3AFEF70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
