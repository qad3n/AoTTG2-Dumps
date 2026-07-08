using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000110")]
public interface ITraceWriter
{
	[Token(Token = "0x170000F8")]
	TraceLevel LevelFilter
	{
		[Token(Token = "0x60007C8")]
		get;
	}

	[Token(Token = "0x60007C9")]
	void Trace(TraceLevel level, string message, Exception? ex);
}
