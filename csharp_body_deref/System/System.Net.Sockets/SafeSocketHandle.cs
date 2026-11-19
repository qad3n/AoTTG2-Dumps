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

[Token(Token = "0x200034E")]
internal sealed class SafeSocketHandle : SafeHandleMinusOneIsInvalid
{
	[Token(Token = "0x4000E8C")]
	[FieldOffset(Offset = "0x20")]
	private List<Thread> blocking_threads;

	[Token(Token = "0x4000E8D")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<Thread, StackTrace> threads_stacktraces;

	[Token(Token = "0x4000E8E")]
	[FieldOffset(Offset = "0x30")]
	private bool in_cleanup;

	[Token(Token = "0x4000E8F")]
	[FieldOffset(Offset = "0x0")]
	private static bool THROW_ON_ABORT_RETRIES;

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x61B8A30", Offset = "0x61B7A30", VA = "0x61B8A30")]
	public SafeSocketHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x61B8B00", Offset = "0x61B7B00", VA = "0x61B8B00", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x61B9120", Offset = "0x61B8120", VA = "0x61B9120")]
	public void RegisterForBlockingSyscall()
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x61B9270", Offset = "0x61B8270", VA = "0x61B9270")]
	public void UnRegisterForBlockingSyscall()
	{
	}
}
