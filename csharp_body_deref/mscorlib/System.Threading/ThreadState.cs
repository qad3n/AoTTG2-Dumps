using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001D5")]
[Flags]
public enum ThreadState
{
	[Token(Token = "0x4000936")]
	Running = 0,
	[Token(Token = "0x4000937")]
	StopRequested = 1,
	[Token(Token = "0x4000938")]
	SuspendRequested = 2,
	[Token(Token = "0x4000939")]
	Background = 4,
	[Token(Token = "0x400093A")]
	Unstarted = 8,
	[Token(Token = "0x400093B")]
	Stopped = 0x10,
	[Token(Token = "0x400093C")]
	WaitSleepJoin = 0x20,
	[Token(Token = "0x400093D")]
	Suspended = 0x40,
	[Token(Token = "0x400093E")]
	AbortRequested = 0x80,
	[Token(Token = "0x400093F")]
	Aborted = 0x100
}
