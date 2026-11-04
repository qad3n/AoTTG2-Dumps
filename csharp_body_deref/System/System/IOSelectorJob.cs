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

[StructLayout(LayoutKind.Sequential)]
[Token(Token = "0x20000D4")]
internal class IOSelectorJob
{
	[Token(Token = "0x400032B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IOOperation operation;

	[Token(Token = "0x400032C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IOAsyncCallback callback;

	[Token(Token = "0x400032D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IOAsyncResult state;

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x1522E90", Offset = "0x1521490", VA = "0x181522E90")]
	public IOSelectorJob(IOOperation operation, IOAsyncCallback callback, IOAsyncResult state)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x284C5B0", Offset = "0x284ABB0", VA = "0x18284C5B0", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x284C580", Offset = "0x284AB80", VA = "0x18284C580")]
	public void MarkDisposed()
	{
	}
}
