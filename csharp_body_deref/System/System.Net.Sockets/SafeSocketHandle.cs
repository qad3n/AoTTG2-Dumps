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

[Token(Token = "0x2000205")]
internal sealed class SafeSocketHandle : SafeHandleMinusOneIsInvalid
{
	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x20")]
	private List<Thread> blocking_threads;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<Thread, StackTrace> threads_stacktraces;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x30")]
	private bool in_cleanup;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x0")]
	private static bool THROW_ON_ABORT_RETRIES;

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x49B8870", Offset = "0x49B8870", VA = "0x49B8870")]
	public SafeSocketHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x49B8940", Offset = "0x49B8940", VA = "0x49B8940", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x49B8FC0", Offset = "0x49B8FC0", VA = "0x49B8FC0")]
	public void RegisterForBlockingSyscall()
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x49B9110", Offset = "0x49B9110", VA = "0x49B9110")]
	public void UnRegisterForBlockingSyscall()
	{
	}
}
