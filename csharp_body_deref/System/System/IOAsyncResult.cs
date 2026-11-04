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
[Token(Token = "0x20000D3")]
internal abstract class IOAsyncResult : IAsyncResult
{
	[Token(Token = "0x4000326")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private AsyncCallback async_callback;

	[Token(Token = "0x4000327")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object async_state;

	[Token(Token = "0x4000328")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ManualResetEvent wait_handle;

	[Token(Token = "0x4000329")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool completed_synchronously;

	[Token(Token = "0x400032A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool completed;

	[Token(Token = "0x170000B1")]
	public AsyncCallback AsyncCallback
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B2")]
	public object AsyncState
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B3")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x284C3E0", Offset = "0x284A9E0", VA = "0x18284C3E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B4")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000442")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		protected set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x284C4D0", Offset = "0x284AAD0", VA = "0x18284C4D0")]
		protected set
		{
		}
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected IOAsyncResult()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x284C390", Offset = "0x284A990", VA = "0x18284C390")]
	protected void Init(AsyncCallback async_callback, object async_state)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	protected IOAsyncResult(AsyncCallback async_callback, object async_state)
	{
	}

	[Token(Token = "0x6000445")]
	internal abstract void CompleteDisposed();
}
