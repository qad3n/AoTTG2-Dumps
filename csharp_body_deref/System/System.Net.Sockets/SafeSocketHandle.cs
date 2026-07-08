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
	[Address(RVA = "0x4693770", Offset = "0x4693770", VA = "0x4693770")]
	public SafeSocketHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4693840", Offset = "0x4693840", VA = "0x4693840", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4693EC0", Offset = "0x4693EC0", VA = "0x4693EC0")]
	public void RegisterForBlockingSyscall()
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x4694010", Offset = "0x4694010", VA = "0x4694010")]
	public void UnRegisterForBlockingSyscall()
	{
	}
}
