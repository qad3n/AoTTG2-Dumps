// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001D8")]
[Flags]
public enum ThreadState
{
	[Token(Token = "0x40008F5")]
	Running = 0,
	[Token(Token = "0x40008F6")]
	StopRequested = 1,
	[Token(Token = "0x40008F7")]
	SuspendRequested = 2,
	[Token(Token = "0x40008F8")]
	Background = 4,
	[Token(Token = "0x40008F9")]
	Unstarted = 8,
	[Token(Token = "0x40008FA")]
	Stopped = 0x10,
	[Token(Token = "0x40008FB")]
	WaitSleepJoin = 0x20,
	[Token(Token = "0x40008FC")]
	Suspended = 0x40,
	[Token(Token = "0x40008FD")]
	AbortRequested = 0x80,
	[Token(Token = "0x40008FE")]
	Aborted = 0x100
}
