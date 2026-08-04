// ==================== AoTTG2 cross-reference ====================
// Type: System.IOAsyncResult
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
[Token(Token = "0x2000094")]
internal abstract class IOAsyncResult : IAsyncResult
{
	[Token(Token = "0x4000256")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private AsyncCallback async_callback;

	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object async_state;

	[Token(Token = "0x4000258")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ManualResetEvent wait_handle;

	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool completed_synchronously;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool completed;

	[Token(Token = "0x17000082")]
	public AsyncCallback AsyncCallback
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x48FFCF0", Offset = "0x48FFCF0", VA = "0x48FFCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public object AsyncState
	{
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x48FFD00", Offset = "0x48FFD00", VA = "0x48FFD00", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x48FFD10", Offset = "0x48FFD10", VA = "0x48FFD10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x48FFE40", Offset = "0x48FFE40", VA = "0x48FFE40", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x48FFE50", Offset = "0x48FFE50", VA = "0x48FFE50")]
		protected set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public bool IsCompleted
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x48FFE60", Offset = "0x48FFE60", VA = "0x48FFE60", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x48FFE70", Offset = "0x48FFE70", VA = "0x48FFE70")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x48FFC50", Offset = "0x48FFC50", VA = "0x48FFC50")]
	protected IOAsyncResult()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x48FFC60", Offset = "0x48FFC60", VA = "0x48FFC60")]
	protected void Init(AsyncCallback async_callback, object async_state)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x48FFCB0", Offset = "0x48FFCB0", VA = "0x48FFCB0")]
	protected IOAsyncResult(AsyncCallback async_callback, object async_state)
	{
	}

	[Token(Token = "0x6000291")]
	internal abstract void CompleteDisposed();
}
