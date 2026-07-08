using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CD")]
[Flags]
public enum TraceOptions
{
	[Token(Token = "0x40003A6")]
	None = 0,
	[Token(Token = "0x40003A7")]
	LogicalOperationStack = 1,
	[Token(Token = "0x40003A8")]
	DateTime = 2,
	[Token(Token = "0x40003A9")]
	Timestamp = 4,
	[Token(Token = "0x40003AA")]
	ProcessId = 8,
	[Token(Token = "0x40003AB")]
	ThreadId = 0x10,
	[Token(Token = "0x40003AC")]
	Callstack = 0x20
}
