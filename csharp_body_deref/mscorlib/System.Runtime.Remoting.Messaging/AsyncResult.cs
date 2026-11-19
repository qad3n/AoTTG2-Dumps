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
[Token(Token = "0x20003A4")]
[ComVisible(true)]
public class AsyncResult : IAsyncResult, IMessageSink, System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000EAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object async_state;

	[Token(Token = "0x4000EAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WaitHandle handle;

	[Token(Token = "0x4000EB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object async_delegate;

	[Token(Token = "0x4000EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr data;

	[Token(Token = "0x4000EB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object object_data;

	[Token(Token = "0x4000EB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool sync_completed;

	[Token(Token = "0x4000EB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private bool completed;

	[Token(Token = "0x4000EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private bool endinvoke_called;

	[Token(Token = "0x4000EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object async_callback;

	[Token(Token = "0x4000EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private ExecutionContext current;

	[Token(Token = "0x4000EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private ExecutionContext original;

	[Token(Token = "0x4000EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private long add_time;

	[Token(Token = "0x4000EBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MonoMethodMessage call_message;

	[Token(Token = "0x4000EBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IMessageCtrl message_ctrl;

	[Token(Token = "0x4000EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private IMessage reply_message;

	[Token(Token = "0x4000EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private WaitCallback orig_cb;

	[Token(Token = "0x170003A0")]
	public virtual object AsyncState
	{
		[Token(Token = "0x6001E4E")]
		[Address(RVA = "0x538E790", Offset = "0x538D790", VA = "0x538E790", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	public virtual WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6001E4F")]
		[Address(RVA = "0x538E7A0", Offset = "0x538D7A0", VA = "0x538E7A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A2")]
	public virtual bool CompletedSynchronously
	{
		[Token(Token = "0x6001E50")]
		[Address(RVA = "0x538E8C0", Offset = "0x538D8C0", VA = "0x538E8C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A3")]
	public virtual bool IsCompleted
	{
		[Token(Token = "0x6001E51")]
		[Address(RVA = "0x538E8D0", Offset = "0x538D8D0", VA = "0x538E8D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A4")]
	public bool EndInvokeCalled
	{
		[Token(Token = "0x6001E52")]
		[Address(RVA = "0x538E8E0", Offset = "0x538D8E0", VA = "0x538E8E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E53")]
		[Address(RVA = "0x538E8F0", Offset = "0x538D8F0", VA = "0x538E8F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	public virtual object AsyncDelegate
	{
		[Token(Token = "0x6001E54")]
		[Address(RVA = "0x538E900", Offset = "0x538D900", VA = "0x538E900", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A6")]
	public IMessageSink NextSink
	{
		[Token(Token = "0x6001E55")]
		[Address(RVA = "0x538E910", Offset = "0x538D910", VA = "0x538E910", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A7")]
	internal System.Runtime.Remoting.Messaging.MonoMethodMessage CallMessage
	{
		[Token(Token = "0x6001E5C")]
		[Address(RVA = "0x538EB10", Offset = "0x538DB10", VA = "0x538EB10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E5D")]
		[Address(RVA = "0x538EB20", Offset = "0x538DB20", VA = "0x538EB20")]
		set
		{
		}
	}

	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x538E780", Offset = "0x538D780", VA = "0x538E780")]
	internal AsyncResult()
	{
	}

	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x538E920", Offset = "0x538D920", VA = "0x538E920", Slot = "18")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x538E960", Offset = "0x538D960", VA = "0x538E960", Slot = "19")]
	public virtual IMessage GetReplyMessage()
	{
		return null;
	}

	[Token(Token = "0x6001E58")]
	[Address(RVA = "0x538E970", Offset = "0x538D970", VA = "0x538E970", Slot = "20")]
	public virtual void SetMessageCtrl(IMessageCtrl mc)
	{
	}

	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x538E980", Offset = "0x538D980", VA = "0x538E980")]
	internal void SetCompletedSynchronously(bool completed)
	{
	}

	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x537BDD0", Offset = "0x537ADD0", VA = "0x537BDD0")]
	internal IMessage EndInvoke()
	{
		return null;
	}

	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x538E990", Offset = "0x538D990", VA = "0x538E990", Slot = "21")]
	public virtual IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x538EB30", Offset = "0x538DB30", VA = "0x538EB30", Slot = "10")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x538EB50", Offset = "0x538DB50", VA = "0x538EB50", Slot = "11")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001E60")]
	[Address(RVA = "0x538EB40", Offset = "0x538DB40", VA = "0x538EB40")]
	internal extern object Invoke();
}
