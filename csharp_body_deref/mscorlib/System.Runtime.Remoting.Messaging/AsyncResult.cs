// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.AsyncResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20003CB")]
[ComVisible(true)]
public class AsyncResult : IAsyncResult, IMessageSink, System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000F4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object async_state;

	[Token(Token = "0x4000F4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WaitHandle handle;

	[Token(Token = "0x4000F50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object async_delegate;

	[Token(Token = "0x4000F51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr data;

	[Token(Token = "0x4000F52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object object_data;

	[Token(Token = "0x4000F53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool sync_completed;

	[Token(Token = "0x4000F54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private bool completed;

	[Token(Token = "0x4000F55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private bool endinvoke_called;

	[Token(Token = "0x4000F56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object async_callback;

	[Token(Token = "0x4000F57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private ExecutionContext current;

	[Token(Token = "0x4000F58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private ExecutionContext original;

	[Token(Token = "0x4000F59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private long add_time;

	[Token(Token = "0x4000F5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MonoMethodMessage call_message;

	[Token(Token = "0x4000F5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IMessageCtrl message_ctrl;

	[Token(Token = "0x4000F5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private IMessage reply_message;

	[Token(Token = "0x4000F5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private WaitCallback orig_cb;

	[Token(Token = "0x170003A1")]
	public virtual object AsyncState
	{
		[Token(Token = "0x6001E78")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A2")]
	public virtual WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6001E79")]
		[Address(RVA = "0x19EDB20", Offset = "0x19EC120", VA = "0x1819EDB20", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A3")]
	public virtual bool CompletedSynchronously
	{
		[Token(Token = "0x6001E7A")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A4")]
	public virtual bool IsCompleted
	{
		[Token(Token = "0x6001E7B")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A5")]
	public bool EndInvokeCalled
	{
		[Token(Token = "0x6001E7C")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E7D")]
		[Address(RVA = "0x19EDC20", Offset = "0x19EC220", VA = "0x1819EDC20")]
		set
		{
		}
	}

	[Token(Token = "0x170003A6")]
	public virtual object AsyncDelegate
	{
		[Token(Token = "0x6001E7E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A7")]
	public IMessageSink NextSink
	{
		[Token(Token = "0x6001E7F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A8")]
	internal System.Runtime.Remoting.Messaging.MonoMethodMessage CallMessage
	{
		[Token(Token = "0x6001E86")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E87")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001E77")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal AsyncResult()
	{
	}

	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x19ED880", Offset = "0x19EBE80", VA = "0x1819ED880", Slot = "18")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001E81")]
	[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770", Slot = "19")]
	public virtual IMessage GetReplyMessage()
	{
		return null;
	}

	[Token(Token = "0x6001E82")]
	[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790", Slot = "20")]
	public virtual void SetMessageCtrl(IMessageCtrl mc)
	{
	}

	[Token(Token = "0x6001E83")]
	[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
	internal void SetCompletedSynchronously(bool completed)
	{
	}

	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x19ED8C0", Offset = "0x19EBEC0", VA = "0x1819ED8C0")]
	internal IMessage EndInvoke()
	{
		return null;
	}

	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x19ED9B0", Offset = "0x19EBFB0", VA = "0x1819ED9B0", Slot = "21")]
	public virtual IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x19ED9A0", Offset = "0x19EBFA0", VA = "0x1819ED9A0", Slot = "10")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6001E89")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x19ED9A0", Offset = "0x19EBFA0", VA = "0x1819ED9A0")]
	internal extern object Invoke();
}
