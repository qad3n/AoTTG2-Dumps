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
	[Address(RVA = "0x45DAE40", Offset = "0x45DAE40", VA = "0x45DAE40")]
	public IOSelectorJob(IOOperation operation, IOAsyncCallback callback, IOAsyncResult state)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x45DAE90", Offset = "0x45DAE90", VA = "0x45DAE90", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x45DAEC0", Offset = "0x45DAEC0", VA = "0x45DAEC0", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x45DAED0", Offset = "0x45DAED0", VA = "0x45DAED0")]
	public void MarkDisposed()
	{
	}
}
