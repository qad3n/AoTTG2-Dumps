// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000200")]
[Flags]
public enum ThreadState
{
	[Token(Token = "0x4000997")]
	Running = 0,
	[Token(Token = "0x4000998")]
	StopRequested = 1,
	[Token(Token = "0x4000999")]
	SuspendRequested = 2,
	[Token(Token = "0x400099A")]
	Background = 4,
	[Token(Token = "0x400099B")]
	Unstarted = 8,
	[Token(Token = "0x400099C")]
	Stopped = 0x10,
	[Token(Token = "0x400099D")]
	WaitSleepJoin = 0x20,
	[Token(Token = "0x400099E")]
	Suspended = 0x40,
	[Token(Token = "0x400099F")]
	AbortRequested = 0x80,
	[Token(Token = "0x40009A0")]
	Aborted = 0x100
}
