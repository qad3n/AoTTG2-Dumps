// ==================== AoTTG2 cross-reference ====================
// Type: System.IOSelectorJob
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000095")]
internal class IOSelectorJob : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IOOperation operation;

	[Token(Token = "0x400025C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IOAsyncCallback callback;

	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IOAsyncResult state;

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x48FFF40", Offset = "0x48FFF40", VA = "0x48FFF40")]
	public IOSelectorJob(IOOperation operation, IOAsyncCallback callback, IOAsyncResult state)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x48FFF90", Offset = "0x48FFF90", VA = "0x48FFF90", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x48FFFC0", Offset = "0x48FFFC0", VA = "0x48FFFC0", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x48FFFD0", Offset = "0x48FFFD0", VA = "0x48FFFD0")]
	public void MarkDisposed()
	{
	}
}
