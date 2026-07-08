using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C8")]
public abstract class TraceFilter
{
	[Token(Token = "0x6000478")]
	public abstract bool ShouldTrace(TraceEventCache cache, string source, TraceEventType eventType, int id, string formatOrMessage, object[] args, object data1, object[] data);

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4600390", Offset = "0x4600390", VA = "0x4600390")]
	internal bool ShouldTrace(TraceEventCache cache, string source, TraceEventType eventType, int id, string formatOrMessage)
	{
		return default(bool);
	}
}
