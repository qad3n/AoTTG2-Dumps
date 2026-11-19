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

[StructLayout(LayoutKind.Sequential)]
[Token(Token = "0x2000094")]
internal abstract class IOAsyncResult : IAsyncResult
{
	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private AsyncCallback async_callback;

	[Token(Token = "0x4000258")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object async_state;

	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ManualResetEvent wait_handle;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool completed_synchronously;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool completed;

	[Token(Token = "0x17000082")]
	public AsyncCallback AsyncCallback
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x61DC520", Offset = "0x61DB520", VA = "0x61DC520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public object AsyncState
	{
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x61DC530", Offset = "0x61DB530", VA = "0x61DC530", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x61DC540", Offset = "0x61DB540", VA = "0x61DC540", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x61DC660", Offset = "0x61DB660", VA = "0x61DC660", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x61DC670", Offset = "0x61DB670", VA = "0x61DC670")]
		protected set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public bool IsCompleted
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x61DC680", Offset = "0x61DB680", VA = "0x61DC680", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x61DC690", Offset = "0x61DB690", VA = "0x61DC690")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x61DC480", Offset = "0x61DB480", VA = "0x61DC480")]
	protected IOAsyncResult()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x61DC490", Offset = "0x61DB490", VA = "0x61DC490")]
	protected void Init(AsyncCallback async_callback, object async_state)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x61DC4E0", Offset = "0x61DB4E0", VA = "0x61DC4E0")]
	protected IOAsyncResult(AsyncCallback async_callback, object async_state)
	{
	}

	[Token(Token = "0x6000291")]
	internal abstract void CompleteDisposed();
}
