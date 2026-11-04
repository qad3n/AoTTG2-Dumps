// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SafeSocketHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Net.Sockets;

[Token(Token = "0x2000392")]
internal sealed class SafeSocketHandle : SafeHandleMinusOneIsInvalid
{
	[Token(Token = "0x4000F74")]
	[FieldOffset(Offset = "0x20")]
	private List<Thread> blocking_threads;

	[Token(Token = "0x4000F75")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<Thread, StackTrace> threads_stacktraces;

	[Token(Token = "0x4000F76")]
	[FieldOffset(Offset = "0x30")]
	private bool in_cleanup;

	[Token(Token = "0x4000F77")]
	[FieldOffset(Offset = "0x0")]
	private static bool THROW_ON_ABORT_RETRIES;

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x2819AF0", Offset = "0x28180F0", VA = "0x182819AF0")]
	public SafeSocketHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x2819390", Offset = "0x2817990", VA = "0x182819390", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x2819240", Offset = "0x2817840", VA = "0x182819240")]
	public void RegisterForBlockingSyscall()
	{
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x28198E0", Offset = "0x2817EE0", VA = "0x1828198E0")]
	public void UnRegisterForBlockingSyscall()
	{
	}
}
